#include "paleo.h"
#include <math.h>
typedef struct Pc1009 *P1008;
typedef struct R1011 R1011;
typedef struct R1011 *P1010;
struct R1011 {  rt_int kind; rt_int line; rt_int ival; P1008 s; P1008 prags;  };
typedef struct Pc1013 *P1012;
typedef struct A1014 A1014;
struct A1014 { rt_int lo, hi, lo2, hi2; P1010 *p; };
typedef struct R1016 R1016;
typedef struct R1016 *P1015;
struct R1016 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1008 name; P1008 tag; P1008 prags; P1015 labels; rt_int eline; P1015 a; P1015 b; P1015 c; P1015 d; P1015 e; P1015 next;  };
typedef struct R1018 R1018;
typedef struct R1018 *P1017;
typedef struct R1020 R1020;
typedef struct R1020 *P1019;
struct R1020 {  P1008 s; P1019 next;  };
struct R1018 {  P1008 lo; P1008 hi; P1008 lo2; P1008 hi2; P1008 slen; rt_int mlo; rt_int mhi; int hasm; P1015 args; int dyn; rt_int lvl; P1008 prec; P1019 bnds;  };
typedef struct R1022 R1022;
typedef struct R1022 *P1021;
typedef struct R1024 R1024;
typedef struct R1024 *P1023;
struct R1024 {  P1008 name; P1021 t; P1017 c; P1015 st; P1023 next;  };
typedef struct R1026 R1026;
typedef struct R1026 *P1025;
typedef struct R1028 R1028;
typedef struct R1028 *P1027;
struct R1028 {  P1008 name; rt_int mode; P1021 t; P1017 c; P1008 cfield; P1027 next;  };
typedef struct Pc1030 *P1029;
typedef struct A1031 A1031;
struct A1031 { rt_int lo, hi, lo2, hi2; P1025 *p; };
typedef struct R1033 R1033;
typedef struct R1033 *P1032;
struct R1033 {  rt_int depth; P1015 imps; int all_imp; P1032 next;  };
typedef struct R1035 R1035;
typedef struct R1035 *P1034;
struct R1035 {  rt_int kind; rt_int i; P1008 s; P1021 t;  };
struct R1026 {  rt_int kind; P1008 name; P1021 t; P1017 c; P1008 access; P1008 cname; int ro_flag; rt_int mvalue; int hasmv; P1015 st; P1015 decl; P1027 params; P1021 result; rt_int depth; rt_int level; int byref; P1025 members; P1025 mnext; P1015 binds; P1025 insts; P1029 env; P1025 chain; P1025 stack; P1025 owner; P1032 gctx; P1034 mv; P1019 reqs; int reqdone; P1015 home; P1015 capn; P1025 tbinds; P1008 loc; P1025 reqs_sym; rt_int decl_line;  };
typedef struct R1037 R1037;
typedef struct R1037 *P1036;
struct R1037 {  P1021 t; P1036 next;  };
struct R1022 {  rt_int kind; P1008 name; P1015 lits; P1021 elem; P1021 idx; P1021 idx2; P1017 elemcons; P1015 elemst; P1021 under; P1015 tparams; P1015 ocap; P1023 fields; P1021 target; P1015 decl; P1008 cname; int forward; int defined; int helpers; P1025 initp; P1025 finalp; P1025 tpsyms; P1025 gen; P1025 gbinds; P1021 next; rt_int ndim; P1036 idxs; P1025 assignp; P1025 eqp; P1025 ltp; P1015 repn;  };
typedef struct R1039 R1039;
typedef struct R1039 *P1038;
struct R1039 {  P1019 head; P1019 tail;  };
typedef struct R1041 R1041;
typedef struct R1041 *P1040;
struct R1041 {  P1008 match; P1008 label; rt_int depth; P1040 next;  };
typedef struct R1043 R1043;
typedef struct R1043 *P1042;
struct R1043 {  P1015 d; P1042 next; rt_int depth;  };
typedef struct R1045 R1045;
typedef struct R1045 *P1044;
struct R1045 {  P1015 d; P1008 w; P1044 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1008 result_;
 P1008 t_1118;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1121;
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
 rstr r_1122;
 rt_int i_1123;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1127;
 rstr w_1128;
 rt_int i_1129;
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
 P1038 result_;
 P1038 b_1133;
};
struct f_put_27fr { int dummy;
 P1038 b_25;
 rstr *s_26;
 P1019 l_1135;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1038 b_30;
 P1019 l_1137;
};
struct f_splice_34fr { int dummy;
 P1038 a_32;
 P1038 b_33;
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
 P1010 t_1139;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1141;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1142;
 rt_int k_1143;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1147;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1148;
 P1008 r_1149;
 int more_1150;
 rt_int k_1151;
 int go_1152;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1153;
 rt_int k_1154;
 rstr p_1155;
 int ok_1156;
 int known_1157;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1158;
 rt_int j_1159;
 rt_int n_1160;
 int c_1161;
 rstr w_1162;
 rt_int k_1163;
 rstr w_1167;
 rt_int k_1168;
 rstr two_1172;
};
struct f_read_source_58fr { int dummy;
 rstr line_1173;
 P1019 l_1174;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1176;
 int found_1177;
 rstr line_1180;
};
struct f_write_library_62fr { int dummy;
 P1015 u_61;
 rt_r_file * f_1181;
 P1019 l_1182;
 rt_int n_1183;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1015 result_;
 P1015 x_1184;
};
struct f_append_69fr { int dummy;
 P1015 *head_66;
 P1015 *tail_67;
 P1015 x_68;
};
struct f_list_len_71fr { int dummy;
 P1015 l_70;
 rt_int result_;
 rt_int n_1186;
 P1015 p_1187;
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
 P1008 result_;
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
 P1008 result_;
};
struct f_name_node_94fr { int dummy;
 P1015 result_;
 P1015 x_1188;
};
struct f_id_list_95fr { int dummy;
 P1015 result_;
 P1015 head_1189;
 P1015 tail_1190;
};
struct f_p_subtype_96fr { int dummy;
 P1015 result_;
 rt_int line_1191;
 P1015 x_1192;
 rstr w_1193;
 P1015 head_1194;
 P1015 tail_1195;
 P1015 head_1196;
 P1015 tail_1197;
 int more_1198;
 P1015 names_1199;
 P1015 st_1200;
 P1015 cmp_1201;
 P1015 head_1202;
 P1015 tail_1203;
 int more_1204;
 P1015 lit_1205;
};
struct f_constraint_list_97fr { int dummy;
 P1015 result_;
 P1015 head_1206;
 P1015 tail_1207;
 int more_1208;
 rt_int line_1209;
 P1015 lo_1210;
 P1015 r_1211;
};
struct f_actual_params_98fr { int dummy;
 P1015 result_;
 P1015 head_1212;
 P1015 tail_1213;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1015 result_;
 P1015 head_1214;
 P1015 tail_1215;
 int more_1216;
};
struct f_binop_106fr { int dummy;
 P1008 op_102;
 P1015 l_103;
 P1015 r_104;
 rt_int line_105;
 P1015 result_;
 P1015 x_1217;
};
struct f_expr_107fr { int dummy;
 P1015 result_;
 P1015 l_1218;
 P1008 op_1219;
 rt_int line_1220;
};
struct f_expr_and_108fr { int dummy;
 P1015 result_;
 P1015 l_1221;
 rt_int line_1222;
};
struct f_expr_not_109fr { int dummy;
 P1015 result_;
 P1015 x_1223;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1015 result_;
 P1015 l_1224;
 P1008 op_1225;
 rt_int line_1226;
};
struct f_expr_add_113fr { int dummy;
 P1015 result_;
 P1015 l_1227;
 P1008 op_1228;
 rt_int line_1229;
};
struct f_expr_mul_114fr { int dummy;
 P1015 result_;
 P1015 l_1230;
 P1008 op_1231;
 rt_int line_1232;
};
struct f_expr_pow_115fr { int dummy;
 P1015 result_;
 P1015 l_1233;
 rt_int line_1234;
};
struct f_expr_prefix_116fr { int dummy;
 P1015 result_;
 P1015 x_1235;
};
struct f_postfix_117fr { int dummy;
 P1015 result_;
 P1015 p_1236;
 rt_int line_1237;
 P1015 x_1238;
 P1015 head_1239;
 P1015 tail_1240;
 int more_1241;
 P1015 lo_1242;
 P1015 r_1243;
 P1015 x_1244;
 P1015 x_1245;
 P1015 x_1246;
};
struct f_primary_118fr { int dummy;
 P1015 result_;
 rt_int line_1247;
 P1015 x_1248;
 rt_int k_1249;
 rstr w_1250;
 P1015 head_1251;
 P1015 tail_1252;
 int more_1253;
};
struct f_constructor_item_119fr { int dummy;
 P1015 result_;
 rt_int line_1254;
 P1015 it_1255;
 P1015 first_1256;
 P1015 keys_1257;
 P1015 ktail_1258;
 P1015 lab_1259;
 rt_int save_1260;
 P1015 more_1261;
 P1015 tail2_1262;
 int ok_1263;
 int go_1264;
 P1015 l2_1265;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1015 result_;
 P1015 head_1266;
 P1015 tail_1267;
 int stmts_1268;
 P1015 after_1269;
 P1015 x_1270;
};
struct f_body_element_122fr { int dummy;
 P1015 result_;
 P1015 x_1271;
 P1008 pr_1272;
 P1015 p_1273;
};
struct f_declaration_123fr { int dummy;
 P1015 result_;
 rt_int line_1274;
 P1015 head_1275;
 P1015 tail_1276;
 P1015 names_1277;
 P1015 x_1278;
};
struct f_object_decl_124fr { int dummy;
 P1015 result_;
 rt_int line_1279;
 int is_var_1280;
 P1015 names_1281;
 P1015 st_1282;
 P1015 init_1283;
 P1015 loc_1284;
 rt_int loc_kind_1285;
 P1015 head_1286;
 P1015 tail_1287;
 P1015 x_1288;
};
struct f_abbrev_decl_125fr { int dummy;
 P1015 result_;
 P1015 x_1289;
};
struct f_rep_spec_126fr { int dummy;
 P1015 result_;
};
struct f_rep_items_127fr { int dummy;
 P1015 result_;
 P1015 head_1290;
 P1015 tail_1291;
 int more_1292;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1293;
};
struct f_rep_item_130fr { int dummy;
 P1015 result_;
 P1015 x_1294;
 P1015 head_1295;
 P1015 tail_1296;
 int more_1297;
 P1015 names_1298;
 P1015 items_1299;
 P1015 cmp_1300;
 P1015 head_1301;
 P1015 tail_1302;
 P1015 head_1303;
 P1015 tail_1304;
 int dummy_1305;
};
struct f_type_decl_131fr { int dummy;
 P1015 result_;
 rt_int line_1306;
 P1008 name_1307;
 P1015 params_1308;
 P1015 x_1309;
 P1015 tts_1310;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1015 result_;
 P1015 head_1311;
 P1015 tail_1312;
 int more_1313;
 rt_int mode_1314;
 P1015 names_1315;
 P1015 ntail_1316;
 P1015 st_1317;
 P1015 p_1318;
};
struct f_imports_list_136fr { int dummy;
 P1015 owner_135;
 int result_;
 P1015 head_1319;
 P1015 tail_1320;
 int more_1321;
 int ro_1322;
 P1015 x_1323;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1008 result_;
 P1008 r_1324;
};
struct f_subprogram_decl_140fr { int dummy;
 P1015 result_;
 rt_int line_1325;
 P1015 x_1326;
 int is_abn_1327;
 int is_func_1328;
 int dummy_1329;
};
struct f_capsule_decl_141fr { int dummy;
 P1015 result_;
 P1015 x_1330;
 int dummy_1331;
 P1015 head_1332;
 P1015 tail_1333;
 int more_1334;
 P1015 n_1335;
};
struct f_formal_tt_142fr { int dummy;
 P1015 result_;
 P1015 head_1336;
 P1015 tail_1337;
 int more_1338;
};
struct f_generic_decl_143fr { int dummy;
 P1015 result_;
 P1015 x_1339;
 P1015 head_1340;
 P1015 tail_1341;
 int more_1342;
 P1015 names_1343;
 rt_int kind_1344;
 P1015 st_1345;
 P1015 items_1346;
 P1015 p_1347;
 P1015 nhead_1348;
 P1015 ntail_1349;
 P1015 it_1350;
};
struct f_type_list_144fr { int dummy;
 P1015 result_;
 P1015 head_1351;
 P1015 tail_1352;
 int more_1353;
 P1015 n_1354;
};
struct f_task_decl_145fr { int dummy;
 P1015 result_;
 P1015 x_1355;
 int dummy_1356;
};
struct f_expose_decl_146fr { int dummy;
 P1015 result_;
 P1015 x_1357;
 P1015 head_1358;
 P1015 tail_1359;
 int more_1360;
 P1015 n_1361;
 P1015 head_1362;
 P1015 tail_1363;
 int more_1364;
 P1015 n_1365;
 P1015 tgt_1366;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1015 result_;
 P1015 labels_1367;
 P1015 ltail_1368;
 P1008 match_1369;
 P1015 s_1370;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1015 result_;
 rt_int line_1371;
 P1015 x_1372;
 P1015 head_1373;
 P1015 tail_1374;
 P1015 invs_1375;
 P1015 itail_1376;
 int more_1377;
 P1015 target_1378;
};
struct f_arm_154fr { int dummy;
 P1015 cond_151;
 P1015 b_152;
 rt_int line_153;
 P1015 result_;
 P1015 x_1379;
};
struct f_if_stmt_155fr { int dummy;
 P1015 result_;
 P1015 x_1380;
 P1015 head_1381;
 P1015 tail_1382;
 P1015 cond_1383;
 int go_1384;
};
struct f_case_stmt_156fr { int dummy;
 P1015 result_;
 P1015 x_1385;
 P1015 head_1386;
 P1015 tail_1387;
 P1015 labs_1388;
 P1015 ltail_1389;
 int more_1390;
 P1015 l_1391;
};
struct f_repeat_stmt_157fr { int dummy;
 P1015 result_;
 P1015 x_1392;
};
struct f_guard_stmt_158fr { int dummy;
 P1015 result_;
 P1015 x_1393;
 P1015 head_1394;
 P1015 tail_1395;
 P1015 h_1396;
};
struct f_program_159fr { int dummy;
 P1015 result_;
 P1015 head_1397;
 P1015 tail_1398;
 P1008 pr_1399;
 P1015 u_1400;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1401;
 rt_int i_1402;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1025 result_;
 P1025 y_1406;
};
struct f_lookup_decl_165fr { int dummy;
 P1015 d_164;
 P1025 result_;
 P1025 y_1407;
};
struct f_define_168fr { int dummy;
 P1025 y_166;
 rt_int line_167;
 rt_int h_1408;
 P1025 z_1409;
};
struct f_overloadable_170fr { int dummy;
 P1025 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1015 a_171;
 P1015 b_172;
 int result_;
 P1015 x_1410;
 P1015 y_1411;
};
struct f_same_signature_176fr { int dummy;
 P1027 a_174;
 P1027 b_175;
 int result_;
 P1027 x_1412;
 P1027 y_1413;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1008 name_180;
 P1025 result_;
 P1025 y_1414;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1021 result_;
 P1021 t_1416;
};
struct f_new_cons_184fr { int dummy;
 P1017 result_;
 P1017 c_1418;
};
struct f_scalar_kind_186fr { int dummy;
 P1021 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1021 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1017 c_189;
 rstr *b_190;
 rstr result_;
 P1008 p_1420;
 rt_int i_1421;
};
struct f_clo_193fr { int dummy;
 P1017 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1017 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1021 t_196;
 P1017 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1021 t_199;
 P1017 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1425;
 rstr f_1426;
};
struct f_copy_cons_206fr { int dummy;
 P1017 c_205;
 P1017 result_;
 P1017 r_1427;
};
struct f_freeze_209fr { int dummy;
 P1017 c_207;
 P1021 t_208;
 P1017 result_;
 P1017 r_1429;
 P1008 saved_field_1430;
 rstr ct_1431;
 rstr la_1432;
 rstr lf_1433;
 rstr ha_1434;
 rstr hf_1435;
};
struct f_checked_213fr { int dummy;
 P1021 t_210;
 P1017 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1015 a_214;
 P1015 b_215;
 int result_;
 P1015 x_1436;
 P1015 y_1437;
};
struct f_str_elem_218fr { int dummy;
 P1021 t_217;
 P1021 result_;
};
struct f_same_221fr { int dummy;
 P1021 a_219;
 P1021 b_220;
 int result_;
 P1036 x_1438;
 P1036 y_1439;
 P1023 f_1440;
 P1023 g_1441;
};
struct f_base_of_223fr { int dummy;
 P1021 t_222;
 P1021 result_;
};
struct f_base_cons_226fr { int dummy;
 P1021 t_224;
 P1017 c_225;
 P1017 result_;
};
struct f_kind_name_228fr { int dummy;
 P1021 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1021 got_229;
 P1021 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1021 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1021 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1021 t_237;
 rstr result_;
 P1023 f_1444;
 P1008 s_1445;
};
struct f_declare_ctype_240fr { int dummy;
 P1021 t_239;
 P1021 u_1446;
 P1015 p_1447;
 P1008 fs_1448;
 rstr sn_1449;
 P1017 pc_1450;
 P1021 target_1451;
 P1015 p_1452;
 P1008 fs_1453;
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
 P1021 t_245;
 rstr result_;
 P1008 r_1454;
 rt_int k_1455;
};
struct f_acnt_249fr { int dummy;
 P1021 t_247;
 rstr *base_248;
 rstr result_;
 P1008 r_1459;
 rt_int k_1460;
};
struct f_cons_lo_252fr { int dummy;
 P1017 c_250;
 rt_int k_251;
 P1008 result_;
 P1019 l_1464;
 rt_int i_1465;
};
struct f_cons_hi_255fr { int dummy;
 P1017 c_253;
 rt_int k_254;
 P1008 result_;
 P1019 l_1469;
 rt_int i_1470;
};
struct f_idx_type_258fr { int dummy;
 P1021 t_256;
 rt_int k_257;
 P1021 result_;
 P1036 l_1474;
 rt_int i_1475;
};
struct f_init_ascii_259fr { int dummy;
 P1015 head_1479;
 P1015 tail_1480;
 rt_int start_1481;
 rt_int i_1482;
 P1015 lit_1486;
 P1015 h2_1487;
 P1015 t2_1488;
 P1015 l1_1489;
 P1015 l2_1490;
 P1015 l3_1491;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1021 result_;
 P1021 t_1492;
 P1015 l1_1493;
 P1015 l2_1494;
};
struct f_lit_index_265fr { int dummy;
 P1015 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1495;
 P1015 l_1496;
};
struct f_resolve_subtype_268fr { int dummy;
 P1015 st_266;
 P1017 *c_267;
 P1017 c_267v;
 P1021 result_;
 P1021 t_1497;
 int ok_1498;
 P1021 dummy_1499;
 P1021 et_1501;
 P1017 ec_1502;
 P1021 et_1503;
 P1015 ix_1504;
 rt_int k_1505;
 P1036 tail_1506;
 P1019 btail_1507;
 P1017 ic_1508;
 P1021 it_1509;
 P1008 lo_1510;
 P1008 hi_1511;
 P1036 tl_1512;
 P1019 l1_1514;
 P1019 l2_1515;
 P1017 ec_1518;
 P1015 comp_1519;
 P1023 tail_1520;
 P1017 cc_1521;
 P1023 f_1522;
 P1015 lits_1524;
 P1015 ltail_1525;
 P1023 f_1526;
 P1015 l_1527;
 P1017 ec_1528;
 P1015 gt_1529;
 P1017 ec_1530;
 P1008 base_1531;
};
struct f_float_lit_270fr { int dummy;
 P1015 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1021 t_271;
 P1015 e_272;
 P1017 c_273;
 P1021 dummy_1532;
};
struct f_named_subtype_277fr { int dummy;
 P1015 st_275;
 P1017 *c_276;
 P1017 c_276v;
 P1021 result_;
 P1021 t_1533;
 P1025 y_1534;
 rstr name_1535;
 P1025 binds_1536;
 P1029 saved_env_1537;
 rt_int saved_gdepth_1538;
 P1025 nb_1539;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1025 y_278;
 P1015 st_279;
 P1017 *c_280;
 P1017 c_280v;
 P1021 result_;
 P1015 p_1540;
 P1015 a_1541;
 P1021 t_1542;
 P1025 z_1543;
 P1017 pc_1544;
 P1021 at_1545;
 int ok_1546;
};
struct f_apply_constraint_286fr { int dummy;
 P1021 t_282;
 P1015 args_283;
 P1017 c_284;
 rt_int line_285;
 P1021 dummy_1547;
 int ok_1548;
};
struct f_value_subtype_290fr { int dummy;
 P1015 e_287;
 P1017 *c_288;
 P1017 c_288v;
 P1008 *base_289;
 P1008 base_289v;
 P1021 result_;
 P1021 t_1549;
 P1017 c0_1550;
 int ro_1551;
 rt_int k_1552;
 rstr lo_1556;
 rstr hi_1557;
 P1019 l1_1558;
 P1019 l2_1559;
 P1015 p_1562;
 P1015 head_1563;
 P1015 tail_1564;
 P1015 sel_1565;
};
struct f_reverse_pairs_292fr { int dummy;
 P1019 l_291;
 P1019 result_;
 P1019 r_1566;
 P1019 p_1567;
 P1019 a_1568;
 P1019 b_1569;
};
struct f_inquiry_295fr { int dummy;
 P1015 st_293;
 P1017 *c_294;
 P1017 c_294v;
 P1021 result_;
 P1008 base_1570;
 P1021 t_1571;
 rstr name_1572;
 P1015 sub_1573;
 P1017 c2_1574;
 rt_int k_1575;
 int ok_1576;
 P1017 ac_1577;
};
struct f_as_subtype_297fr { int dummy;
 P1015 e_296;
 P1015 result_;
 P1015 st_1578;
 rstr name_1579;
 P1025 y_1580;
};
struct f_tt_subtype_302fr { int dummy;
 P1008 name_298;
 P1015 tt_299;
 P1015 args_300;
 rt_int line_301;
 P1015 result_;
 P1015 st_1581;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1025 y_1582;
};
struct f_empty_set_306fr { int dummy;
 P1021 t_305;
 rstr result_;
};
struct f_opened_308fr { int dummy;
 P1021 t_307;
 int result_;
 P1042 c_1583;
};
struct f_replace_all_312fr { int dummy;
 rstr *s_309;
 rstr *pat_310;
 rstr *r_311;
 rstr result_;
 rt_int i_1584;
};
struct f_subst_314fr { int dummy;
 rstr *s_313;
 rstr result_;
 P1019 l_1585;
 P1008 r_1586;
};
struct f_new_type_318fr { int dummy;
 P1025 y_315;
 P1015 st_316;
 P1017 *c_317;
 P1017 c_317v;
 P1021 result_;
 P1015 d_1587;
 P1015 p_1588;
 P1017 uc_1589;
 P1025 z_1590;
 P1017 zc_1591;
};
struct f_needed_bits_321fr { int dummy;
 P1021 t_319;
 P1017 c_320;
 rt_int result_;
 rt_int n_1592;
 rt_int v_1593;
};
struct f_has_digits_only_323fr { int dummy;
 rstr *s_322;
 int result_;
 rt_int i_1594;
};
struct f_built_in_only_325fr { int dummy;
 P1021 t_324;
 int result_;
 P1023 f_1598;
};
struct f_check_rep_332fr { int dummy;
 P1015 items_326;
 P1021 t_327;
 P1017 c_328;
 int top_329;
 int indirect_330;
 P1015 d_331;
 P1015 it_1599;
 int ok_1600;
 P1021 at_1601;
 rstr w_1602;
 rt_int v_1603;
 rstr dummy_1604;
 rt_int m_1605;
 int ok2_1606;
 rt_int r_1607;
 rt_int o_1608;
 P1015 comp_1609;
 P1023 f_1610;
 P1015 k_1611;
 P1015 a_1612;
};
struct f_formal_named_335fr { int dummy;
 P1015 d_333;
 rstr *name_334;
 int result_;
 P1015 p_1613;
};
struct f_unchecked_free_337fr { int dummy;
 P1021 t_336;
 int result_;
 P1015 it_1614;
};
struct f_init_storage_341fr { int dummy;
 rstr *lval_338;
 P1021 t_339;
 P1017 c_340;
};
struct f_init_call_344fr { int dummy;
 P1025 y_342;
 rstr *lval_343;
 rstr result_;
 P1008 link_1615;
 rt_int i_1616;
};
struct f_needs_fin_346fr { int dummy;
 P1021 t_345;
 int result_;
 P1023 f_1620;
};
struct f_fin_code_349fr { int dummy;
 rstr *lval_347;
 P1021 t_348;
 rstr result_;
 P1008 r_1621;
 rstr i_1622;
 P1023 f_1623;
 P1023 f_1624;
 rt_int i_1625;
};
struct f_tparam_type_352fr { int dummy;
 P1021 t_350;
 rstr *name_351;
 P1021 result_;
 P1025 z_1626;
};
struct f_make_storage_356fr { int dummy;
 rstr *lval_353;
 P1021 t_354;
 P1017 c_355;
 P1015 p_1627;
 P1015 a_1628;
 P1017 uc_1629;
 P1021 ut_1630;
 P1021 at_1631;
 P1021 pt_1632;
 rstr v_1633;
 P1019 saved_1634;
 P1019 l1_1635;
 P1019 l2_1636;
 P1021 at_1639;
 rstr acc_1640;
 rstr use_1641;
 rt_int k_1642;
 rstr i_1646;
 P1023 f_1647;
 P1023 f_1648;
 rt_int i_1649;
};
struct f_flat_358fr { int dummy;
 P1021 t_357;
 int result_;
 P1023 f_1653;
};
struct f_uninit_value_360fr { int dummy;
 P1021 t_359;
 rstr result_;
};
struct f_init_chk_363fr { int dummy;
 P1021 t_361;
 rstr *v_362;
 rstr result_;
 P1021 b_1654;
};
struct f_manifest_366fr { int dummy;
 P1015 e_364;
 int *ok_365;
 int ok_365v;
 rt_int result_;
 P1034 v_1655;
};
struct f_mk_mval_369fr { int dummy;
 rt_int kind_367;
 rt_int i_368;
 P1034 result_;
 P1034 v_1656;
};
struct f_ipow_372fr { int dummy;
 rt_int a_370;
 rt_int b_371;
 rt_int result_;
 rt_int r_1658;
 rt_int i_1659;
};
struct f_meval_375fr { int dummy;
 P1015 e_373;
 int *ok_374;
 int ok_374v;
 P1034 result_;
 P1034 a_1663;
 P1034 b_1664;
 int ok2_1665;
 P1008 op_1666;
 P1025 y_1667;
 P1034 r_1668;
};
struct f_bool_text_377fr { int dummy;
 int b_376;
 rstr result_;
};
struct f_bool_i_379fr { int dummy;
 int b_378;
 rt_int result_;
};
struct f_mstr_381fr { int dummy;
 P1034 v_380;
 rstr result_;
};
struct f_ascii_char_383fr { int dummy;
 rt_int i_382;
 int result_;
 rstr printable_1669;
};
struct f_user_defined_385fr { int dummy;
 rstr *op_384;
 int result_;
 P1025 y_1670;
};
struct f_mcopy_387fr { int dummy;
 P1021 t_386;
 rstr result_;
 rstr ct_1671;
 rstr name_1672;
 P1019 l_1673;
};
struct f_composite_389fr { int dummy;
 P1021 t_388;
 int result_;
};
struct f_user_call2_395fr { int dummy;
 P1025 y_390;
 rstr *a_391;
 int lv_a_392;
 rstr *b_393;
 int lv_b_394;
 rstr result_;
 P1008 args_1675;
 rt_int i_1676;
};
struct f_user_arg_399fr { int dummy;
 P1027 pm_396;
 rstr *v_397;
 int lv_398;
 rstr result_;
 rstr ct_1680;
};
struct f_top_level_401fr { int dummy;
 P1025 y_400;
 int result_;
};
struct f_assign_code_406fr { int dummy;
 rstr *lval_402;
 P1021 t_403;
 rstr *v_404;
 P1017 c_405;
 rstr result_;
};
struct f_copy_code_409fr { int dummy;
 P1021 t_407;
 rstr *v_408;
 rstr result_;
};
struct f_eq_code_413fr { int dummy;
 P1021 t_410;
 rstr *a_411;
 rstr *b_412;
 rstr result_;
};
struct f_elem_assign_417fr { int dummy;
 rstr *lval_414;
 P1021 t_415;
 rstr *v_416;
 rstr result_;
};
struct f_seen_name_420fr { int dummy;
 P1019 l_418;
 rstr *s_419;
 int result_;
 P1019 p_1681;
};
struct f_emit_helpers_421fr { int dummy;
 P1021 order_1682;
 P1021 t_1683;
 P1019 done_1684;
 P1019 l_1685;
 rstr c_1686;
};
struct f_helper_bodies_423fr { int dummy;
 P1021 t_422;
 rstr c_1688;
 P1038 b_1689;
 P1021 e_1690;
 P1008 sizes_1691;
 P1008 bounds_1692;
 rt_int k_1693;
 rstr l_1697;
 rstr h_1698;
 P1019 saved_1699;
 P1015 p_1700;
 P1019 l1_1701;
 P1019 l2_1702;
 P1023 f_1705;
 rt_int i_1706;
 P1008 cases_as_1707;
 P1008 cases_cp_1708;
 P1008 cases_eq_1709;
 rstr fn_1710;
 P1023 f_1711;
 P1008 conds_1712;
 rstr fn_1713;
 rstr fn_1714;
};
struct f_declare_body_425fr { int dummy;
 P1015 elems_424;
 P1015 e_1715;
 P1025 g_1716;
 P1025 y_1717;
 P1025 y_1718;
 P1025 y_1719;
 P1021 t_1720;
 P1025 y_1721;
 P1025 y_1722;
 P1029 snap_1723;
 rt_int i_1727;
 P1025 g_1731;
 P1025 y_1732;
 P1025 y_1733;
};
struct f_manifest_const_427fr { int dummy;
 P1015 d_426;
 int ok_1734;
 P1034 v_1735;
 P1025 y_1736;
 P1021 t_1737;
 P1008 ctext_1738;
 P1038 saved_1739;
};
struct f_exported_431fr { int dummy;
 P1015 d_428;
 rstr *name_429;
 int *ro_430;
 int ro_430v;
 int result_;
 P1015 p_1742;
};
struct f_copy_sym_433fr { int dummy;
 P1025 y_432;
 P1025 result_;
 P1025 z_1743;
};
struct f_gen_capsule_435fr { int dummy;
 P1015 d_434;
 P1025 y_1745;
 P1008 saved_1746;
 P1015 p_1747;
 P1027 tail_1748;
 P1027 pm_1749;
};
struct f_capsule_params_439fr { int dummy;
 P1015 d_436;
 P1015 args_437;
 rt_int line_438;
 P1015 p_1751;
 P1015 a_1752;
 P1021 t_1753;
 P1021 vt_1754;
 P1017 c_1755;
 P1008 lv_1756;
 P1017 lc_1757;
 int ro_1758;
 P1025 y_1759;
 rstr f_1760;
 rstr g_1761;
 P1025 y_1762;
 rstr v_1763;
 rstr access_1764;
};
struct f_elaborate_capsule_444fr { int dummy;
 P1015 d_440;
 P1025 y_441;
 P1015 args_442;
 P1015 owner_443;
 P1042 cr_1765;
 P1032 ctx_1766;
 P1040 saved_gotos_1767;
 P1025 m_1768;
 P1015 p_1769;
 int ro_1770;
 P1044 w_1773;
 P1025 z_1775;
};
struct f_exports_op_447fr { int dummy;
 P1015 d_445;
 rstr *op_446;
 int result_;
 P1015 p_1776;
};
struct f_renamed_450fr { int dummy;
 P1015 d_448;
 P1025 z_449;
 P1008 result_;
 P1015 r_1777;
};
struct f_cap_tt_match_453fr { int dummy;
 P1015 f_451;
 P1015 a_452;
 int result_;
 P1015 x_1778;
 P1015 y_1779;
 int ok1_1780;
 int ok2_1781;
 P1034 v1_1782;
 P1034 v2_1783;
};
struct f_pick_capsule_455fr { int dummy;
 P1015 d_454;
 P1025 result_;
 P1025 y_1784;
 P1025 first_1785;
 P1025 fit_1786;
 rt_int n_1787;
};
struct f_capsule_instance_458fr { int dummy;
 P1025 g_456;
 P1015 d_457;
 P1025 result_;
 P1015 gd_1788;
 P1015 pat_1789;
 P1025 binds_1790;
 P1025 inst_1791;
 P1029 saved_env_1792;
 rt_int saved_gdepth_1793;
 P1025 b_1794;
};
struct f_configure_460fr { int dummy;
 P1025 y_459;
 P1025 m_1795;
 rstr n_1796;
};
struct f_gen_expose_462fr { int dummy;
 P1015 d_461;
 P1025 y_1797;
 P1025 m_1798;
 P1015 p_1799;
 P1015 r_1800;
 P1025 inst_1801;
 int found_1802;
 P1025 z_1803;
 int found_1804;
 P1025 z_1805;
};
struct f_finish_ptr_464fr { int dummy;
 P1021 t_463;
 P1015 d_1806;
 P1015 p_1807;
 P1017 c_1808;
 rstr dummy_1809;
 rt_int pass_1810;
 P1025 y_1814;
 P1017 pc_1815;
};
struct f_ptr_args_466fr { int dummy;
 P1017 c_465;
 P1015 result_;
};
struct f_bind_ptr_params_471fr { int dummy;
 P1015 formals_467;
 P1015 actuals_468;
 rstr *cell_469;
 rt_int line_470;
 P1015 p_1816;
 P1015 a_1817;
 P1021 vt_1818;
 P1017 pc_1819;
 P1025 y_1820;
 rstr v_1821;
 rstr pv_1822;
};
struct f_alloc_cell_476fr { int dummy;
 P1015 s_472;
 rstr *lv_473;
 P1021 t_474;
 P1017 c_475;
 P1015 d_1823;
 P1017 tc_1824;
 P1021 vt_1825;
 rstr pt_1826;
 rstr cell_1827;
 rstr fn_1828;
 rstr v_1829;
};
struct f_freeze_args_480fr { int dummy;
 P1017 c_477;
 P1021 t_478;
 rt_int line_479;
 P1017 result_;
 P1017 r_1830;
 P1015 p_1831;
 P1015 a_1832;
 P1015 head_1833;
 P1015 tail_1834;
 P1008 saved_1835;
 P1017 pc_1836;
 P1021 vt_1837;
 P1021 pt_1838;
 rstr nm_1839;
 P1025 y_1840;
 P1015 n_1841;
 rstr v_1842;
 rstr access_1843;
};
struct f_ptr_subtype_check_484fr { int dummy;
 P1021 t_481;
 P1017 c_482;
 P1015 src_483;
 P1008 lv_1844;
 P1021 st_1845;
 P1017 sc_1846;
 int ro_1847;
 P1008 cond_1848;
 P1015 a_1849;
 P1015 b_1850;
 P1021 at_1851;
 P1021 bt_1852;
 rstr x_1853;
 rstr y_1854;
};
struct f_normal_function_487fr { int dummy;
 P1015 d_485;
 P1025 y_486;
 P1027 p_1855;
 P1015 imp_1856;
 int ro_1857;
 P1025 z_1858;
};
struct f_foreign_body_490fr { int dummy;
 P1015 d_488;
 P1025 y_489;
 P1027 pm_1859;
 P1008 proto_1860;
 P1008 args_1861;
 rstr cn_1862;
};
struct f_declare_subprogram_492fr { int dummy;
 P1015 d_491;
};
struct f_build_subprogram_494fr { int dummy;
 P1015 d_493;
 P1025 result_;
 P1025 y_1863;
 P1015 p_1864;
 P1027 tail_1865;
 P1027 pm_1866;
 P1017 rc_1868;
 P1027 pm_1869;
 P1038 saved_1870;
 P1025 z_1871;
};
struct f_has_pragmat_497fr { int dummy;
 P1008 pr_495;
 rstr *p_496;
 int result_;
 rt_int i_1872;
};
struct f_suppressing_499fr { int dummy;
 P1008 pr_498;
 P1008 result_;
 P1008 r_1876;
 rt_int i_1877;
 rt_int j_1878;
 rt_int k_1879;
};
struct f_suppressed_501fr { int dummy;
 rstr *x_500;
 int result_;
 rstr w_1880;
 rt_int i_1881;
};
struct f_element_503fr { int dummy;
 P1015 e_502;
 P1008 saved_1885;
};
struct f_element1_505fr { int dummy;
 P1015 e_504;
 rt_int k_1886;
 P1025 g_1887;
 rt_int i_1891;
 P1017 c_1895;
 P1015 st_1896;
 P1021 t_1897;
 P1021 t_1898;
 rstr c_1899;
};
struct f_storage_508fr { int dummy;
 rstr *name_506;
 P1021 t_507;
 rstr result_;
 rstr g_1900;
 rstr f_1901;
};
struct f_bind_511fr { int dummy;
 P1025 y_509;
 rstr *access_510;
};
struct f_var_decl_513fr { int dummy;
 P1015 d_512;
};
struct f_located_var_515fr { int dummy;
 P1015 d_514;
 P1017 c_1902;
 P1021 at_1903;
 P1021 t_1904;
 P1025 y_1905;
 rstr addr_1906;
 rstr av_1907;
 rstr af_1908;
 rstr access_1909;
 P1021 vt_1910;
 rstr v_1911;
 rstr pv_1912;
 rstr pf_1913;
 P1021 vt_1914;
 rstr v_1915;
};
struct f_rep_sync_518fr { int dummy;
 P1025 y_516;
 int pack_517;
 rstr result_;
 rstr lv_1916;
 rstr base_1917;
 P1019 saved_1918;
 P1015 p_1919;
 P1008 r_1920;
 P1008 inner_1921;
 P1025 z_1922;
};
struct f_cbound_access_520fr { int dummy;
 P1025 y_519;
 rstr result_;
 P1017 c_1923;
};
struct f_rep_size_524fr { int dummy;
 P1015 items_521;
 P1021 t_522;
 P1017 c_523;
 rstr result_;
 P1015 it_1924;
 P1021 at_1925;
};
struct f_rep_find_527fr { int dummy;
 P1015 items_525;
 rstr *w_526;
 P1015 result_;
 P1015 it_1926;
};
struct f_rep_comp_530fr { int dummy;
 P1015 items_528;
 rstr *name_529;
 P1015 result_;
 P1015 r_1927;
 P1015 comp_1928;
};
struct f_default_bits_533fr { int dummy;
 P1021 t_531;
 P1017 c_532;
 rt_int result_;
 P1023 f_1929;
 rt_int n_1930;
};
struct f_rep_code_540fr { int dummy;
 P1021 t_534;
 P1017 c_535;
 P1015 items_536;
 rstr *lval_537;
 rstr *addr_538;
 int pack_539;
 rstr result_;
 rstr size_1931;
 P1023 f_1932;
 P1008 r_1933;
 P1008 off_1934;
 rt_int i_1935;
 P1015 ti_1936;
 P1008 tsize_1937;
 P1008 toff_1938;
 P1021 at_1939;
 P1015 ci_1940;
 P1008 fo_1941;
 rstr fl_1942;
 P1021 at_1943;
 rstr part_1944;
 P1015 ai_1945;
 P1015 ei_1946;
 rstr es_1947;
 rstr iv_1948;
 rstr iv_1949;
};
struct f_union_part_542fr { int dummy;
 P1021 t_541;
 rstr result_;
};
struct f_rep_scalar_549fr { int dummy;
 P1021 t_543;
 P1017 c_544;
 rstr *lval_545;
 rstr *addr_546;
 rstr *size_547;
 int pack_548;
 rstr result_;
 rstr signed_1950;
};
struct f_max_range_552fr { int dummy;
 P1021 t_550;
 P1017 c_551;
};
struct f_var_decl2_554fr { int dummy;
 P1015 d_553;
 P1017 c_1951;
 P1021 t_1952;
 P1025 y_1953;
 rstr access_1954;
 P1021 it_1955;
 rstr n_1956;
 P1021 vt_1957;
 rstr v_1958;
};
struct f_open_fin_556fr { int dummy;
 rstr *fc_555;
 rstr f_1959;
 P1019 l_1960;
};
struct f_close_fins_558fr { int dummy;
 P1019 saved_557;
};
struct f_const_decl_560fr { int dummy;
 P1015 d_559;
 P1017 c_1962;
 P1021 t_1963;
 P1021 vt_1964;
 P1025 y_1965;
 int ok_1966;
 rstr v_1967;
 rstr access_1968;
};
struct f_subprogram_562fr { int dummy;
 P1015 d_561;
};
struct f_gen_subprogram_565fr { int dummy;
 P1015 d_563;
 P1025 y_564;
 P1038 saved_code_1969;
 P1038 saved_fields_1970;
 int saved_in_1971;
 P1025 saved_sym_1972;
 P1040 saved_exits_1973;
 P1040 saved_gotos_1974;
 rt_int saved_frames_1975;
 P1008 args_1976;
 P1027 pm_1977;
 P1019 saved_handlers_1978;
 P1019 saved_cleanups_1979;
 P1032 ctx_1980;
 P1008 head_1981;
 P1008 frame_1982;
 P1008 parent_1983;
 P1008 copy_back_1984;
 P1008 pfin_1985;
 P1019 saved_fins_1986;
 P1017 saved_rc_1987;
 P1008 saved_ret_1988;
 P1008 saved_rflag_1989;
 P1015 pn_1990;
 P1008 nonrec_end_1991;
 int has_pfin_1992;
 rstr ct_1994;
 rstr f_1995;
 P1025 p_1996;
 P1017 pc_1997;
 P1017 ac_1998;
 P1017 fc_1999;
 P1021 ft_2000;
 rstr bt_2001;
 P1017 rc_2002;
 P1021 rt_2003;
 rstr g_2004;
 P1008 leave_2005;
 rstr xu_2006;
};
struct f_waits_of_567fr { int dummy;
 P1015 d_566;
 rstr result_;
 P1044 w_2007;
};
struct f_task_waits_569fr { int dummy;
 P1015 elems_568;
 rstr result_;
 P1015 e_2008;
 P1008 r_2009;
};
struct f_await_tasks_571fr { int dummy;
 P1015 elems_570;
 rstr w_2010;
};
struct f_capsule_elements_573fr { int dummy;
 P1015 elems_572;
 P1015 e_2011;
};
struct f_declare_labels_575fr { int dummy;
 P1015 elems_574;
 P1015 e_2012;
 P1015 l_2013;
 P1040 x_2014;
};
struct f_start_labels_576fr { int dummy;
 P1040 x_2016;
};
struct f_goto_label_578fr { int dummy;
 rstr *name_577;
 P1040 result_;
 P1040 x_2017;
};
struct f_has_return_580fr { int dummy;
 P1015 e_579;
 int result_;
 P1015 x_2018;
};
struct f_capsule_body_582fr { int dummy;
 P1015 elems_581;
 P1008 saved_ret_2019;
 P1008 saved_flag_2020;
 rt_int saved_frames_2021;
 P1015 e_2022;
 int stmt_2023;
};
struct f_body_elements_584fr { int dummy;
 P1015 elems_583;
};
struct f_gen_body_586fr { int dummy;
 P1015 elems_585;
 P1019 saved_2024;
 P1040 saved_gotos_2025;
 rstr xu_2026;
};
struct f_open_unhandled_588fr { int dummy;
 P1015 elems_587;
 rstr result_;
 P1015 e_2027;
 P1008 conds_2028;
 rstr f_2029;
};
struct f_close_unhandled_590fr { int dummy;
 rstr *xu_589;
 rt_int i_2030;
 rstr f_2031;
};
struct f_pop_frames_592fr { int dummy;
 rt_int upto_591;
 rt_int i_2032;
 P1019 c_2033;
};
struct f_push_cleanup_594fr { int dummy;
 rstr *s_593;
 P1019 c_2034;
};
struct f_pop_cleanup_595fr { int dummy;
};
struct f_gen_statement_597fr { int dummy;
 P1015 s_596;
 P1025 located_2036;
 P1025 l_2037;
};
struct f_located_in_600fr { int dummy;
 P1015 e_598;
 P1025 found_599;
 P1025 result_;
 P1015 x_2038;
 P1025 r_2039;
 P1025 y_2040;
};
struct f_sym_in_603fr { int dummy;
 P1025 l_601;
 P1025 y_602;
 int result_;
 P1025 p_2041;
};
struct f_gen_statement2_605fr { int dummy;
 P1015 s_604;
 P1008 label_2042;
 P1015 gl_2043;
 P1040 x_2044;
 P1040 x_2047;
};
struct f_st_assign_607fr { int dummy;
 P1015 s_606;
 P1008 lv_2048;
 P1021 t_2049;
 P1021 vt_2050;
 P1017 c_2051;
 int ro_2052;
 rstr lo_2053;
 rstr hi_2054;
 rstr v_2055;
 rstr lo_2056;
 rstr hi_2057;
 rstr v_2058;
 rstr v_2059;
};
struct f_st_call_609fr { int dummy;
 P1015 s_608;
 P1015 c_2060;
 P1021 t_2061;
 P1015 x_2062;
};
struct f_st_if_611fr { int dummy;
 P1015 s_610;
 P1015 a_2063;
 int first_2064;
 P1021 t_2065;
 int taken_2066;
 int ok_2067;
 P1034 mv_2068;
 rstr c_2069;
};
struct f_manifest_case_613fr { int dummy;
 P1015 s_612;
 int result_;
 int ok_2070;
 P1034 sv_2071;
 P1015 a_2072;
 P1015 lab_2073;
 P1034 lo_2074;
 P1034 hi_2075;
};
struct f_st_case_615fr { int dummy;
 P1015 s_614;
 P1021 st_2076;
 P1021 vt_2077;
 int first_2078;
 P1015 a_2079;
};
struct f_st_case2_617fr { int dummy;
 P1015 s_616;
 P1021 st_2080;
 P1021 vt_2081;
 int first_2082;
 P1015 a_2083;
 rstr sel_2084;
 rstr tmp_2085;
 P1015 lab_2086;
 P1008 conds_2087;
 rstr v_2088;
 rstr lo_2089;
 rstr hi_2090;
 rstr lo_2091;
 rstr hi_2092;
};
struct f_user_for_621fr { int dummy;
 P1015 s_618;
 P1021 t_619;
 P1017 c_620;
 P1025 y_2093;
 P1019 saved_2094;
 P1015 p_2095;
 P1015 iv_2096;
 P1021 st_2097;
 rstr access_2098;
 P1008 uv_2099;
 P1019 l1_2100;
 P1019 l2_2101;
 rstr lo_2104;
 rstr hi_2105;
};
struct f_st_repeat_623fr { int dummy;
 P1015 s_622;
 P1021 t_2106;
 P1017 c_2107;
 rstr cond_2108;
 rstr access_2109;
 rstr lov_2110;
 rstr hiv_2111;
 rstr it_2112;
 P1025 y_2113;
};
struct f_st_exit_625fr { int dummy;
 P1015 s_624;
 P1040 x_2114;
};
struct f_st_return_627fr { int dummy;
 P1015 s_626;
 P1021 vt_2115;
 rstr v_2116;
};
struct f_result_checked_631fr { int dummy;
 P1021 t_628;
 P1017 c_629;
 rstr *v_630;
 rstr result_;
};
struct f_exc_id_634fr { int dummy;
 rstr *name_632;
 rt_int line_633;
 rstr result_;
 P1025 y_2117;
};
struct f_st_guard_636fr { int dummy;
 P1015 s_635;
 P1015 h_2118;
 int first_2119;
 P1019 hv_2120;
 rstr f_2121;
 rstr x_2122;
 P1015 h1_2124;
 P1019 seen_2125;
 P1015 n1_2126;
 P1015 n_2127;
 P1008 conds_2128;
};
struct f_st_alloc_638fr { int dummy;
 P1015 s_637;
 P1008 lv_2129;
 P1021 t_2130;
 P1021 target_2131;
 P1021 vt_2132;
 P1017 c_2133;
 P1017 tc_2134;
 int ro_2135;
 P1015 d_2136;
 P1015 p_2137;
 P1015 a_2138;
 rstr tcn_2139;
 rstr cell_2140;
 rstr fn_2141;
 rstr v_2142;
};
struct f_act_ref_640fr { int dummy;
 P1015 e_639;
 rstr result_;
 P1008 lv_2143;
 P1021 t_2144;
 P1017 c_2145;
 int ro_2146;
 rstr v_2147;
};
struct f_st_create_642fr { int dummy;
 P1015 s_641;
 P1025 y_2148;
 P1027 pm_2149;
 P1015 a_2150;
 P1008 lv_2151;
 P1021 lt_2152;
 P1021 vt_2153;
 P1017 lc_2154;
 int ro_2155;
 P1021 at_2156;
 P1017 ac_2157;
 int aro_2158;
 P1008 act_2159;
 rstr nf_2160;
 P1008 link_2161;
 rt_int i_2162;
 rstr v_2166;
};
struct f_hidden_var_646fr { int dummy;
 rstr *name_643;
 P1021 t_644;
 rstr *place_645;
 P1025 y_2167;
};
struct f_user_create_652fr { int dummy;
 P1015 s_647;
 P1025 y_648;
 rstr *uv_649;
 P1021 ut_650;
 rstr *nf_651;
 P1021 t_2168;
 P1038 saved_2169;
 P1038 hook_2170;
 P1015 un_2171;
 rstr hn_2172;
 rstr aa_2173;
 rstr uname_2174;
 rstr aname_2175;
 P1015 start_2176;
 P1015 an_2177;
};
struct f_wait_alt_657fr { int dummy;
 P1015 inv_653;
 rstr *arr_654;
 rt_int i_655;
 int mixed_656;
 rstr result_;
 P1008 lv_2178;
 P1021 t_2179;
 P1021 vt_2180;
 P1017 c_2181;
 int ro_2182;
 P1015 fn_2183;
 P1015 args_2184;
 rstr slot_2185;
 P1008 dv_2186;
 P1021 dt_2187;
 rstr tmp_2188;
 rstr v_2189;
 rstr v_2190;
};
struct f_builtin_wait_659fr { int dummy;
 P1015 inv_658;
 int result_;
 P1008 lv_2191;
 P1021 t_2192;
 P1017 c_2193;
 int ro_2194;
 P1038 saved_2195;
 int ok_2196;
};
struct f_wait_op_664fr { int dummy;
 P1015 inv_660;
 rstr *op_661;
 rstr *q_662;
 int is_stmt_663;
 rstr result_;
 P1015 x_2199;
 P1015 f_2200;
 P1015 qn_2201;
 P1021 t_2202;
 rstr r_2203;
};
struct f_user_wait_669fr { int dummy;
 P1015 s_665;
 rstr *arr_666;
 rstr *w_667;
 rt_int n_668;
 P1015 a_2204;
 rt_int i_2205;
 P1008 tests_2206;
 P1008 revokes_2207;
 P1015 inv_2208;
 P1015 st_2209;
 P1017 c_2210;
 P1021 qt_2211;
 rstr qname_2212;
 P1025 y_2213;
 rstr access_2214;
};
struct f_st_wait_671fr { int dummy;
 P1015 s_670;
 P1015 a_2215;
 rt_int n_2216;
 int first_2217;
 P1038 inits_2218;
 int user_2219;
 rstr arr_2220;
 rstr w_2221;
 P1015 inv_2222;
 P1015 inv_2223;
 P1008 conds_2224;
 rt_int i_2225;
};
struct f_call_node_675fr { int dummy;
 rstr *name_672;
 P1015 arg_673;
 rt_int line_674;
 P1015 result_;
 P1015 x_2229;
 P1015 f_2230;
};
struct f_user_region_677fr { int dummy;
 P1015 s_676;
 P1021 t_2231;
 rstr f_2232;
 rstr lock_2233;
 rstr unlock_2234;
};
struct f_st_region_679fr { int dummy;
 P1015 s_678;
 P1008 lv_2235;
 P1021 t_2236;
 P1017 c_2237;
 int ro_2238;
 rstr lk_2239;
 rstr f_2240;
};
struct f_gparam_682fr { int dummy;
 P1015 g_680;
 rstr *name_681;
 P1015 result_;
 P1015 p_2241;
};
struct f_bind_sym_684fr { int dummy;
 P1015 p_683;
 P1025 result_;
 P1025 y_2242;
};
struct f_same_binds_687fr { int dummy;
 P1025 a_685;
 P1025 b_686;
 int result_;
 P1025 x_2243;
 P1025 y_2244;
};
struct f_same_binding_690fr { int dummy;
 P1025 a_688;
 P1025 b_689;
 int result_;
};
struct f_tt_binds_695fr { int dummy;
 P1015 gd_691;
 P1015 formals_692;
 P1015 actuals_693;
 rt_int line_694;
 P1025 result_;
 P1015 f_2245;
 P1015 a_2246;
 P1025 binds_2247;
 P1017 c_2248;
 P1021 at_2249;
 P1015 p_2250;
 P1025 b_2251;
 P1015 st_2252;
 int ok_2253;
 int ok_2254;
};
struct f_type_allowed_699fr { int dummy;
 P1021 t_696;
 P1015 items_697;
 P1025 binds_698;
 int result_;
 P1015 it_2255;
 P1021 b_2256;
 rstr w_2257;
 P1017 c_2258;
};
struct f_resolve_in_binds_703fr { int dummy;
 P1015 st_700;
 P1025 binds_701;
 P1017 *c_702;
 P1017 c_702v;
 P1021 result_;
 P1025 b_2259;
 P1021 t_2260;
 P1025 z_2261;
};
struct f_pick_operation_710fr { int dummy;
 rt_int kind_704;
 rstr *name_705;
 P1015 sig_706;
 P1015 res_707;
 P1025 binds_708;
 rt_int line_709;
 P1025 result_;
 P1025 y_2262;
 P1017 c_2263;
 rt_int want_2264;
 rt_int pass_2265;
 int ok_2269;
 P1015 s_2270;
 P1027 pm_2271;
};
struct f_kind_word_712fr { int dummy;
 rt_int kind_711;
 rstr result_;
};
struct f_need_binds_716fr { int dummy;
 P1015 gd_713;
 P1025 binds_714;
 rt_int line_715;
 P1025 result_;
 P1015 it_2272;
 P1025 r_2273;
 int found_2274;
 P1025 y_2275;
 P1025 z_2276;
};
struct f_generic_use_718fr { int dummy;
 P1015 st_717;
 int result_;
};
struct f_infer_from_723fr { int dummy;
 P1015 gd_719;
 P1015 pat_720;
 P1021 t_721;
 P1025 known_722;
 P1025 result_;
 P1025 binds_2277;
 P1015 e_2278;
 P1015 tp_2279;
 P1008 nm_2280;
 P1025 q_2281;
 int have_2282;
 P1025 g_2283;
 P1025 b_2284;
};
struct f_instantiate_type_729fr { int dummy;
 P1025 g_724;
 P1015 tt_725;
 P1015 args_726;
 P1017 *c_727;
 P1017 c_727v;
 rt_int line_728;
 P1021 result_;
 P1015 gd_2285;
 P1015 pat_2286;
 P1025 binds_2287;
 P1025 inst_2288;
 P1021 t_2289;
 P1042 saved_caps_2290;
 P1029 saved_env_2291;
 rt_int saved_gdepth_2292;
 P1025 b_2293;
 P1025 y_2294;
 P1017 yc_2295;
};
struct f_instantiate_734fr { int dummy;
 P1025 g_730;
 P1015 tt_731;
 P1015 args_732;
 rt_int line_733;
 P1025 result_;
 P1015 gd_2297;
 P1015 pat_2298;
 P1025 binds_2299;
 P1015 f_2300;
 P1015 a_2301;
 P1015 fp_2302;
 P1025 inst_2303;
 P1021 at_2304;
 P1017 c_2305;
 P1032 saved_fctx_2306;
 int saved_in_2307;
 rt_int saved_level_2308;
 P1025 saved_sym_2309;
 P1038 saved_code_2310;
 P1029 saved_env_2311;
 rt_int saved_gdepth_2312;
 rstr v_2313;
 int known_2314;
 P1025 q_2315;
 P1025 b_2316;
 rstr v_2317;
 P1025 b_2318;
};
struct f_access_of_736fr { int dummy;
 P1025 y_735;
 rstr result_;
 P1008 p_2319;
 rt_int i_2320;
};
struct f_import_of_739fr { int dummy;
 P1015 l_737;
 rstr *name_738;
 P1015 result_;
 P1015 p_2324;
};
struct f_check_import_742fr { int dummy;
 P1025 y_740;
 rt_int line_741;
 int result_;
 P1032 c_2325;
 int ro_2326;
 P1015 imp_2327;
};
struct f_c_ident_744fr { int dummy;
 rstr *s_743;
 rstr result_;
 P1008 r_2328;
 rt_int i_2329;
};
struct f_cell_deref_747fr { int dummy;
 P1021 t_745;
 rstr *p_746;
 rstr result_;
};
struct f_deref_750fr { int dummy;
 rstr *base_748;
 P1021 t_749;
 rstr result_;
};
struct f_is_lvalue_752fr { int dummy;
 P1015 e_751;
 int result_;
 P1025 y_2333;
};
struct f_lvalue_758fr { int dummy;
 P1015 e_753;
 P1008 *code_754;
 P1008 code_754v;
 P1021 *t_755;
 P1021 t_755v;
 P1017 *c_756;
 P1017 c_756v;
 int *ro_757;
 int ro_757v;
 P1008 base_2334;
 P1021 bt_2335;
 P1017 bc_2336;
 P1025 y_2337;
};
struct f_select_on_766fr { int dummy;
 rstr *base_759;
 P1021 bt_760;
 P1015 e_761;
 int *ro_762;
 P1008 *code_763;
 P1008 code_763v;
 P1021 *t_764;
 P1021 t_764v;
 P1017 *c_765;
 P1017 c_765v;
 P1015 p_2338;
 P1017 pc_2339;
 P1015 p_2340;
 P1023 f_2341;
 rt_int i_2342;
 rstr fn_2343;
 P1023 f_2344;
};
struct f_has_call_768fr { int dummy;
 rstr *s_767;
 int result_;
 rt_int i_2345;
};
struct f_need_slice_770fr { int dummy;
 P1021 t_769;
 rstr c_2349;
 rstr n_2350;
 P1019 l_2351;
};
struct f_ix_774fr { int dummy;
 rstr *i_771;
 rstr *lo_772;
 rstr *hi_773;
 rstr result_;
};
struct f_index_on_783fr { int dummy;
 rstr *base_775;
 P1021 bt_776;
 P1015 e_777;
 int *ro_778;
 int lv_779;
 P1008 *code_780;
 P1008 code_780v;
 P1021 *t_781;
 P1021 t_781v;
 P1017 *c_782;
 P1017 c_782v;
 P1015 a_2353;
 P1021 it_2354;
 rstr lo_2355;
 rstr hi_2356;
 P1008 off_2357;
 rt_int k_2358;
 P1008 b_2359;
 P1008 pre_2360;
 rstr i_2361;
 rstr l_2362;
 rstr h_2363;
 rstr lo_2364;
 rstr hi_2365;
 rstr i_2366;
};
struct f_own_attribute_785fr { int dummy;
 P1015 e_784;
 int result_;
 P1038 saved_2367;
 P1021 bt_2368;
 int ok_2369;
 rstr base_2372;
 P1015 p_2373;
 P1023 f_2374;
};
struct f_gexpr_789fr { int dummy;
 P1015 e_786;
 P1021 want_787;
 P1021 *t_788;
 P1021 t_788v;
 rstr result_;
 rt_int k_2375;
 P1008 code_2376;
 P1017 c_2377;
 int ro_2378;
 P1021 bt_2379;
 P1017 ctx_2380;
 P1008 r_2381;
 rt_int i_2382;
 rt_int pos_2386;
 rt_int i_2387;
 P1025 y_2388;
 int ro_2389;
 P1015 call_2390;
 P1015 fname_2391;
 rstr a_2392;
 rstr a_2393;
 rstr a_2394;
 P1015 nm_2395;
 P1025 y_2396;
 rstr base_2397;
 rstr base_2398;
};
struct f_resolved_792fr { int dummy;
 P1015 e_790;
 P1021 *t_791;
 P1021 t_791v;
 rstr result_;
 P1017 c_2399;
 P1021 vt_2400;
 P1025 y_2401;
 P1015 tt_2402;
 P1015 call_2403;
 P1015 f_2404;
 P1015 fname_2405;
 rstr v_2406;
};
struct f_gexpr_in_797fr { int dummy;
 P1015 e_793;
 P1021 want_794;
 P1017 c_795;
 P1021 *t_796;
 P1021 t_796v;
 rstr result_;
};
struct f_ascii_lit_799fr { int dummy;
 int ch_798;
 rstr result_;
 P1015 l_2407;
 rt_int i_2408;
};
struct f_octal_801fr { int dummy;
 rt_int n_800;
 rstr result_;
 rstr r_2412;
};
struct f_str_cat_part_803fr { int dummy;
 P1021 t_802;
 P1021 result_;
};
struct f_peek_type_805fr { int dummy;
 P1015 e_804;
 P1021 result_;
 P1038 saved_2413;
 P1021 t_2414;
 rstr v_2417;
};
struct f_set_operands_808fr { int dummy;
 P1015 e_806;
 P1021 want_807;
 P1021 result_;
 P1021 t_2418;
};
struct f_user_dot_810fr { int dummy;
 P1015 e_809;
 P1015 result_;
 P1015 arg_2419;
};
struct f_user_subscript_812fr { int dummy;
 P1015 e_811;
 P1015 result_;
 P1008 name_2420;
 P1015 args_2421;
 P1015 tail_2422;
 P1015 a_2423;
};
struct f_op_call_816fr { int dummy;
 rstr *name_813;
 P1015 args_814;
 rt_int line_815;
 P1015 result_;
 P1015 call_2424;
 P1015 f_2425;
};
struct f_derived_relation_818fr { int dummy;
 P1015 e_817;
 P1015 result_;
 P1015 l_2426;
 P1015 r_2427;
 int has_eq_2428;
 int has_lt_2429;
};
struct f_rel_node_823fr { int dummy;
 rstr *op_819;
 P1015 a_820;
 P1015 b_821;
 rt_int line_822;
 P1015 result_;
};
struct f_rel_not_826fr { int dummy;
 P1015 x_824;
 rt_int line_825;
 P1015 result_;
 P1015 n_2430;
};
struct f_copy_node_828fr { int dummy;
 P1015 e_827;
 P1015 result_;
 P1015 x_2431;
};
struct f_wrap_apply_830fr { int dummy;
 P1015 e_829;
 P1015 result_;
 P1015 x_2433;
};
struct f_c_string_832fr { int dummy;
 rstr *s_831;
 rstr result_;
 rt_int n_2434;
 rt_int i_2435;
 rstr r_2439;
 rt_int j_2440;
 rt_int i_2441;
};
struct f_enum_type_of_835fr { int dummy;
 rstr *lit_833;
 rt_int line_834;
 P1021 result_;
 P1025 y_2445;
 P1017 c_2446;
 P1015 st_2447;
};
struct f_ptr_attribute_837fr { int dummy;
 P1015 e_836;
 int result_;
 P1008 lv_2448;
 P1021 t_2449;
 P1017 c_2450;
 int ro_2451;
 P1015 p_2452;
 P1038 saved_2453;
};
struct f_attribute_840fr { int dummy;
 P1015 e_838;
 P1021 *t_839;
 P1021 t_839v;
 rstr result_;
 P1021 bt_2454;
 P1017 c_2455;
 P1008 base_2456;
 P1015 sub_2457;
 rstr name_2458;
 P1015 p_2459;
 P1015 a_2460;
 P1017 pc_2461;
 rstr v_2462;
 P1015 p_2463;
 P1015 a_2464;
 P1021 pt_2465;
 rstr v_2466;
};
struct f_subtype_compare_845fr { int dummy;
 P1015 sa_841;
 P1015 sb_842;
 rstr *op_843;
 rt_int line_844;
 rstr result_;
 P1017 ca_2467;
 P1017 cb_2468;
 P1021 ta_2469;
 P1021 tb_2470;
 P1008 r_2471;
 rstr yes_2472;
 rstr no_2473;
 rt_int k_2474;
 P1015 a_2478;
 P1015 b_2479;
 P1021 at_2480;
 P1021 bt2_2481;
 rstr x_2482;
 rstr y_2483;
};
struct f_float_prec_847fr { int dummy;
 P1017 c_846;
 rstr result_;
};
struct f_file_attribute_853fr { int dummy;
 P1015 e_848;
 P1021 bt_849;
 P1017 c_850;
 P1008 base_851;
 P1021 *t_852;
 P1021 t_852v;
 rstr result_;
};
struct f_gbinop_857fr { int dummy;
 P1015 e_854;
 P1021 want_855;
 P1021 *t_856;
 P1021 t_856v;
 rstr result_;
 P1008 op_2484;
 P1021 ta_2485;
 P1021 tb_2486;
 P1021 hint_2487;
 P1025 uy_2488;
 P1015 l_2489;
 P1015 r_2490;
 P1015 call_2491;
 P1015 fname_2492;
 rstr s_2493;
 rstr a_2494;
 rstr a_2495;
 rstr b_2496;
 rstr a_2497;
 rstr b_2498;
 P1021 at_2499;
 rstr a_2500;
 rstr b_2501;
 P1021 wa_2502;
 P1021 wb_2503;
 P1021 ws_2504;
 P1021 ce_2505;
 rstr a_2506;
 rstr b_2507;
 rstr dummy_2508;
 rstr a_2509;
 rstr b_2510;
 P1021 ct_2511;
 rstr a_2512;
 rstr b_2513;
};
struct f_constructor_862fr { int dummy;
 P1015 e_858;
 P1021 want_859;
 P1017 ctx_860;
 P1021 *t_861;
 P1021 t_861v;
 rstr result_;
 P1015 it_2514;
 P1023 f_2515;
 P1021 vt_2516;
 P1008 s_2517;
 rstr v_2518;
 rt_int i_2519;
 rstr tmp_2520;
 rstr v_2521;
 rstr tmp_2522;
 P1008 parts_2523;
 P1015 k_2524;
 P1008 shared_2525;
 rstr v_2526;
 rstr v_2527;
};
struct f_comp_value_866fr { int dummy;
 P1021 t_863;
 P1017 c_864;
 rstr *v_865;
 rstr result_;
};
struct f_has_at_868fr { int dummy;
 rstr *s_867;
 int result_;
 rt_int i_2528;
};
struct f_set_elem_871fr { int dummy;
 P1021 st_869;
 rstr *v_870;
 rstr result_;
};
struct f_array_cons_876fr { int dummy;
 P1015 e_872;
 P1021 at_873;
 P1017 ctx_874;
 P1021 *t_875;
 P1021 t_875v;
 rstr result_;
 rstr tmp_2532;
 P1008 parts_2533;
 P1015 it_2534;
 int positional_2535;
 rt_int k_2536;
 P1008 lo_2540;
 P1008 hi_2541;
};
struct f_fill_items_882fr { int dummy;
 P1015 items_877;
 P1021 at_878;
 rstr *tmp_879;
 P1019 prefix_880;
 rt_int dim_881;
 rstr result_;
 P1015 it_2542;
 rt_int pos_2543;
 P1008 r_2544;
 P1021 vt_2545;
 rstr v_2546;
 P1015 k_2547;
 rt_int d_2548;
 P1019 pre_2549;
 P1008 loops_2550;
 P1008 ends_2551;
 rstr v_2552;
 rstr xv_2553;
 P1015 k_2554;
 rstr xv_2555;
 rstr v_2556;
};
struct f_e_line_884fr { int dummy;
 P1015 e_883;
 rt_int result_;
};
struct f_add_line_887fr { int dummy;
 P1019 l_885;
 rstr *s_886;
 P1019 result_;
 P1019 r_2557;
 P1019 tail_2558;
 P1019 x_2559;
 P1019 p_2560;
};
struct f_item_value_892fr { int dummy;
 P1015 e_888;
 P1021 at_889;
 rt_int line_890;
 P1021 *vt_891;
 P1021 vt_891v;
 rstr result_;
 rstr v_2563;
};
struct f_key_loop_897fr { int dummy;
 P1015 k_893;
 P1021 at_894;
 rt_int d_895;
 rstr *xv_896;
 rstr result_;
 P1021 it_2564;
 rstr lo_2565;
 rstr hi_2566;
};
struct f_store_at_902fr { int dummy;
 P1021 at_898;
 rstr *tmp_899;
 P1019 xs_900;
 rt_int n_901;
 rstr result_;
 P1008 off_2567;
 P1019 x_2568;
 rt_int k_2569;
 rstr l_2570;
 rstr h_2571;
};
struct f_fits_905fr { int dummy;
 P1025 y_903;
 P1015 args_904;
 int result_;
 P1015 a_2572;
 P1027 pm_2573;
 P1021 t_2574;
 P1038 saved_2575;
 int ok_2576;
 P1008 lv_2577;
 P1017 lc_2578;
 int ro_2579;
 rstr v_2582;
};
struct f_resolve_overload_911fr { int dummy;
 rstr *name_906;
 P1015 tt_907;
 P1015 args_908;
 int is_stmt_909;
 rt_int line_910;
 P1025 result_;
 P1025 y_2583;
 P1025 first_2584;
 rt_int n_2585;
 rt_int pass_2586;
};
struct f_tt_fits_914fr { int dummy;
 P1025 y_912;
 P1015 tt_913;
 int result_;
 P1015 f_2590;
 P1015 a_2591;
 P1038 saved_2592;
 int ok_2593;
 P1017 fc_2596;
 P1017 ac_2597;
 P1015 fst_2598;
 P1021 ft_2599;
 P1021 at_2600;
 P1015 ast_2601;
};
struct f_overload_chain_917fr { int dummy;
 rstr *name_915;
 rt_int pass_916;
 P1025 result_;
};
struct f_is_builtin_919fr { int dummy;
 rstr *n_918;
 int result_;
};
struct f_is_low_level_921fr { int dummy;
 rstr *n_920;
 int result_;
};
struct f_me_high_925fr { int dummy;
 P1015 tt_922;
 rt_int line_923;
 P1021 *t_924;
 P1021 t_924v;
 rstr result_;
 P1017 c_2602;
};
struct f_type_tag_927fr { int dummy;
 P1021 t_926;
 rstr result_;
};
struct f_lock_ref_930fr { int dummy;
 P1015 e_928;
 rstr *name_929;
 rstr result_;
 P1008 lv_2603;
 P1021 t_2604;
 P1017 c_2605;
 int ro_2606;
};
struct f_user_op_933fr { int dummy;
 rstr *op_931;
 P1015 args_932;
 P1025 result_;
 P1025 y_2607;
 rt_int pass_2608;
};
struct f_gcall_937fr { int dummy;
 P1015 e_934;
 int is_stmt_935;
 P1021 *t_936;
 P1021 t_936v;
 rstr result_;
 P1015 gd_2612;
 P1015 fn_2613;
 P1015 tt_2614;
 P1025 y_2615;
 P1008 args_2616;
 P1015 a_2617;
 P1027 pm_2618;
 P1021 lt_2619;
 P1021 vt_2620;
 P1008 lv_2621;
 P1017 lc_2622;
 int ro_2623;
 P1025 alt_2624;
 P1042 cr_2625;
 rt_int i_2626;
 rstr v_2630;
 rstr ct_2631;
 rstr v_2632;
 rstr chk_2633;
};
struct f_requires_939fr { int dummy;
 P1025 y_938;
 P1019 result_;
 P1015 imp_2634;
};
struct f_add_req_942fr { int dummy;
 P1025 y_940;
 rstr *name_941;
 P1019 l_2635;
};
struct f_require_calls_945fr { int dummy;
 P1025 y_943;
 P1015 e_944;
 P1015 x_2637;
 P1015 callee_2638;
 P1025 z_2639;
 P1019 l_2640;
};
struct f_declared_in_948fr { int dummy;
 P1015 elems_946;
 rstr *name_947;
 int result_;
 P1015 e_2641;
};
struct f_check_requires_951fr { int dummy;
 P1025 y_949;
 rt_int line_950;
 P1019 l_2642;
 P1025 z_2643;
};
struct f_act_delay_args_953fr { int dummy;
 P1015 args_952;
 rstr result_;
 P1021 at_2644;
 P1021 t1_2645;
 rstr a_2646;
 rstr v_2647;
 rstr v_2648;
};
struct f_same_subtypes_956fr { int dummy;
 P1015 gd_954;
 P1015 args_955;
 rstr result_;
 P1015 p_2649;
 P1008 r_2650;
 P1015 fp_2651;
 P1015 a_2652;
 P1008 flo_2653;
 P1008 fhi_2654;
 P1021 st_2655;
 P1017 c_2656;
 P1008 base_2657;
 P1008 lo_2658;
 P1008 hi_2659;
};
struct f_mailbox_low_961fr { int dummy;
 rstr *name_957;
 P1015 args_958;
 rt_int line_959;
 P1021 *t_960;
 P1021 t_960v;
 rstr result_;
 P1008 qv_2660;
 P1008 mv_2661;
 P1008 dv_2662;
 P1021 qt_2663;
 P1021 mt_2664;
 P1021 dt_2665;
 P1021 at_2666;
 P1017 c_2667;
 int ro_2668;
 int send_2669;
 rstr v_2670;
};
struct f_exponent_want_964fr { int dummy;
 rstr *op_962;
 P1021 ta_963;
 P1021 result_;
};
struct f_file_ref_968fr { int dummy;
 P1015 e_965;
 int text_966;
 rt_int line_967;
 rstr result_;
 P1021 t_2671;
 rstr f_2672;
};
struct f_text_file_970fr { int dummy;
 P1021 t_969;
 int result_;
};
struct f_conversion_975fr { int dummy;
 P1015 tt_971;
 P1015 args_972;
 rt_int line_973;
 P1021 *t_974;
 P1021 t_974v;
 rstr result_;
 P1017 c_2673;
 P1021 at_2674;
 P1021 target_2675;
 rstr a_2676;
 P1008 r_2677;
};
struct f_float_digits_977fr { int dummy;
 P1015 e_976;
 rstr result_;
 P1008 lv_2678;
 P1021 t_2679;
 P1017 c_2680;
 int ro_2681;
 rt_int n_2682;
 int lead_2683;
 rt_int i_2684;
 P1038 saved_2688;
};
struct f_enum_names_979fr { int dummy;
 P1021 t_978;
 rstr result_;
 P1015 l_2689;
 P1008 r_2690;
};
struct f_explicit_rep_981fr { int dummy;
 P1015 e_980;
 int result_;
 P1021 bt_2691;
};
struct f_actual_bounds_985fr { int dummy;
 P1021 ft_982;
 P1021 t_983;
 P1017 c_984;
 rstr result_;
};
struct f_builtin_992fr { int dummy;
 rstr *name_986;
 P1015 tt_987;
 P1015 args_988;
 rt_int line_989;
 int is_stmt_990;
 P1021 *t_991;
 P1021 t_991v;
 rstr result_;
 P1021 at_2692;
 rt_int n_2693;
 rstr a_2694;
 rstr a_2695;
 rstr a_2696;
 rstr a_2697;
 rstr a_2698;
 rstr a_2699;
 rstr a_2700;
 rstr n1_2701;
 rstr m1_2702;
 rstr a_2703;
 rstr f_2704;
 rstr a_2705;
 rstr a_2706;
 P1021 ft_2707;
 rstr f_2708;
 P1008 lv_2709;
 P1017 lc_2710;
 int ro_2711;
 rstr a_2712;
 P1008 lv_2713;
 P1017 lc_2714;
 int ro_2715;
 rstr f_2716;
 P1008 lv_2717;
 P1017 lc_2718;
 int ro_2719;
 rstr f_2720;
 rstr nm_2721;
 rstr st_2722;
 rstr f_2723;
 rstr d_2724;
 rstr f_2725;
 rstr v_2726;
 rstr a_2727;
 rstr b_2728;
 P1008 lv_2729;
 P1008 dv_2730;
 P1017 lc_2731;
 int ro_2732;
 P1021 mt_2733;
 P1021 dt_2734;
 rstr v_2735;
 P1008 lv_2736;
 P1017 lc_2737;
 int ro_2738;
 P1021 mt_2739;
 P1008 lv_2740;
 P1008 dv_2741;
 P1008 bv_2742;
 P1017 lc_2743;
 int ro_2744;
 P1021 mt_2745;
 P1021 dt_2746;
 P1021 bt_2747;
 rstr v_2748;
 rstr v_2749;
 rstr v_2750;
 rstr v_2751;
 rstr a_2752;
 P1008 bv_2753;
 P1017 bc_2754;
 int ro_2755;
 P1021 bt_2756;
 rstr l_2757;
 P1008 pv_2758;
 P1017 pc_2759;
 int ro_2760;
 P1021 pt_2761;
 rstr dev_2762;
 rstr cmd_2763;
 rstr v_2764;
 P1008 dv_2765;
 P1017 dc_2766;
 int ro_2767;
 P1021 dt_2768;
};
struct f_with_library_994fr { int dummy;
 P1015 units_993;
 P1015 result_;
 P1015 r_2769;
 int more_2770;
 P1008 missing_2771;
 rt_int saved_2772;
 P1015 lib_2773;
 P1015 t_2774;
};
struct f_external_missing_997fr { int dummy;
 P1015 e_995;
 P1015 units_996;
 P1008 result_;
 P1015 x_2775;
 P1008 r_2776;
 P1008 r_2777;
};
struct f_unit_named_1000fr { int dummy;
 P1015 units_998;
 rstr *name_999;
 int result_;
 P1015 u_2778;
};
struct f_tried_1002fr { int dummy;
 rstr *name_1001;
 int result_;
};
struct f_mark_tried_1004fr { int dummy;
 rstr *name_1003;
 P1019 l_2779;
};
struct f_translate_1006fr { int dummy;
 P1015 units_1005;
 P1015 u_2781;
 P1015 l_2783;
 rstr w_2784;
};
struct f_print_program_1007fr { int dummy;
};
struct Pc1009 { rt_int p_n; rstr all; };
struct Pc1013 { rt_int p_n; A1014 all; };
struct Pc1030 { rt_int p_n; A1031 all; };
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
static void as_R1033(R1033 *d, R1033 s);
static R1033 cp_R1033(R1033 s);
static int eq_R1033(R1033 a, R1033 b);
static void as_A1031(A1031 *d, A1031 s);
static A1031 cp_A1031(A1031 s);
static int eq_A1031(A1031 a, A1031 b);
static void as_R1028(R1028 *d, R1028 s);
static R1028 cp_R1028(R1028 s);
static int eq_R1028(R1028 a, R1028 b);
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
static void as_A1014(A1014 *d, A1014 s);
static A1014 cp_A1014(A1014 s);
static int eq_A1014(A1014 a, A1014 b);
static void as_R1011(R1011 *d, R1011 s);
static R1011 cp_R1011(R1011 s);
static int eq_R1011(R1011 a, R1011 b);
static P1008 f_mk_3(rstr *s_2);
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
static P1038 f_new_buffer_24(void);
static void f_put_27(P1038 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1038 b_30);
static void f_splice_34(P1038 a_32, P1038 b_33);
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
static void f_write_library_62(P1015 u_61);
static P1015 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1015 *head_66, P1015 *tail_67, P1015 x_68);
static rt_int f_list_len_71(P1015 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1008 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1008 f_expect_id_93(void);
static P1015 f_name_node_94(void);
static P1015 f_id_list_95(void);
static P1015 f_p_subtype_96(void);
static P1015 f_constraint_list_97(void);
static P1015 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1015 f_actual_tt_101(void);
static P1015 f_binop_106(P1008 op_102, P1015 l_103, P1015 r_104, rt_int line_105);
static P1015 f_expr_107(void);
static P1015 f_expr_and_108(void);
static P1015 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1015 f_expr_rel_112(void);
static P1015 f_expr_add_113(void);
static P1015 f_expr_mul_114(void);
static P1015 f_expr_pow_115(void);
static P1015 f_expr_prefix_116(void);
static P1015 f_postfix_117(void);
static P1015 f_primary_118(void);
static P1015 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1015 f_body_121(void);
static P1015 f_body_element_122(void);
static P1015 f_declaration_123(void);
static P1015 f_object_decl_124(void);
static P1015 f_abbrev_decl_125(void);
static P1015 f_rep_spec_126(void);
static P1015 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1015 f_rep_item_130(void);
static P1015 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1015 f_formal_params_134(void);
static int f_imports_list_136(P1015 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1008 f_definable_name_139(void);
static P1015 f_subprogram_decl_140(void);
static P1015 f_capsule_decl_141(void);
static P1015 f_formal_tt_142(void);
static P1015 f_generic_decl_143(void);
static P1015 f_type_list_144(void);
static P1015 f_task_decl_145(void);
static P1015 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1015 f_statement_149(void);
static P1015 f_unlabeled_statement_150(void);
static P1015 f_arm_154(P1015 cond_151, P1015 b_152, rt_int line_153);
static P1015 f_if_stmt_155(void);
static P1015 f_case_stmt_156(void);
static P1015 f_repeat_stmt_157(void);
static P1015 f_guard_stmt_158(void);
static P1015 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1025 f_lookup_163(rstr *name_162);
static P1025 f_lookup_decl_165(P1015 d_164);
static void f_define_168(P1025 y_166, rt_int line_167);
static int f_overloadable_170(P1025 y_169);
static int f_same_tt_173(P1015 a_171, P1015 b_172);
static int f_same_signature_176(P1027 a_174, P1027 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1025 f_new_sym_181(rt_int kind_179, P1008 name_180);
static P1021 f_new_typ_183(rt_int kind_182);
static P1017 f_new_cons_184(void);
static int f_scalar_kind_186(P1021 t_185);
static rstr f_bound_ctype_188(P1021 t_187);
static rstr f_cbound_191(P1017 c_189, rstr *b_190);
static rstr f_clo_193(P1017 c_192);
static rstr f_chi_195(P1017 c_194);
static rstr f_sub_lo_198(P1021 t_196, P1017 c_197);
static rstr f_sub_hi_201(P1021 t_199, P1017 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1017 f_copy_cons_206(P1017 c_205);
static P1017 f_freeze_209(P1017 c_207, P1021 t_208);
static rstr f_checked_213(P1021 t_210, P1017 c_211, rstr *v_212);
static int f_same_lits_216(P1015 a_214, P1015 b_215);
static P1021 f_str_elem_218(P1021 t_217);
static int f_same_221(P1021 a_219, P1021 b_220);
static P1021 f_base_of_223(P1021 t_222);
static P1017 f_base_cons_226(P1021 t_224, P1017 c_225);
static rstr f_kind_name_228(P1021 t_227);
static void f_check_type_232(P1021 got_229, P1021 want_230, rt_int line_231);
static rstr f_ctype_234(P1021 t_233);
static rstr f_struct_body_236(P1021 t_235);
static rstr f_field_decls_238(P1021 t_237);
static void f_declare_ctype_240(P1021 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1021 t_245);
static rstr f_acnt_249(P1021 t_247, rstr *base_248);
static P1008 f_cons_lo_252(P1017 c_250, rt_int k_251);
static P1008 f_cons_hi_255(P1017 c_253, rt_int k_254);
static P1021 f_idx_type_258(P1021 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1021 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1015 lits_263, rstr *name_264);
static P1021 f_resolve_subtype_268(P1015 st_266, P1017 *c_267);
static int f_float_lit_270(P1015 e_269);
static void f_tag_constraint_274(P1021 t_271, P1015 e_272, P1017 c_273);
static P1021 f_named_subtype_277(P1015 st_275, P1017 *c_276);
static P1021 f_invoke_abbrev_281(P1025 y_278, P1015 st_279, P1017 *c_280);
static void f_apply_constraint_286(P1021 t_282, P1015 args_283, P1017 c_284, rt_int line_285);
static P1021 f_value_subtype_290(P1015 e_287, P1017 *c_288, P1008 *base_289);
static P1019 f_reverse_pairs_292(P1019 l_291);
static P1021 f_inquiry_295(P1015 st_293, P1017 *c_294);
static P1015 f_as_subtype_297(P1015 e_296);
static P1015 f_tt_subtype_302(P1008 name_298, P1015 tt_299, P1015 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1021 t_305);
static int f_opened_308(P1021 t_307);
static rstr f_replace_all_312(rstr *s_309, rstr *pat_310, rstr *r_311);
static rstr f_subst_314(rstr *s_313);
static P1021 f_new_type_318(P1025 y_315, P1015 st_316, P1017 *c_317);
static rt_int f_needed_bits_321(P1021 t_319, P1017 c_320);
static int f_has_digits_only_323(rstr *s_322);
static int f_built_in_only_325(P1021 t_324);
static void f_check_rep_332(P1015 items_326, P1021 t_327, P1017 c_328, int top_329, int indirect_330, P1015 d_331);
static int f_formal_named_335(P1015 d_333, rstr *name_334);
static int f_unchecked_free_337(P1021 t_336);
static void f_init_storage_341(rstr *lval_338, P1021 t_339, P1017 c_340);
static rstr f_init_call_344(P1025 y_342, rstr *lval_343);
static int f_needs_fin_346(P1021 t_345);
static rstr f_fin_code_349(rstr *lval_347, P1021 t_348);
static P1021 f_tparam_type_352(P1021 t_350, rstr *name_351);
static void f_make_storage_356(rstr *lval_353, P1021 t_354, P1017 c_355);
static int f_flat_358(P1021 t_357);
static rstr f_uninit_value_360(P1021 t_359);
static rstr f_init_chk_363(P1021 t_361, rstr *v_362);
static rt_int f_manifest_366(P1015 e_364, int *ok_365);
static P1034 f_mk_mval_369(rt_int kind_367, rt_int i_368);
static rt_int f_ipow_372(rt_int a_370, rt_int b_371);
static P1034 f_meval_375(P1015 e_373, int *ok_374);
static rstr f_bool_text_377(int b_376);
static rt_int f_bool_i_379(int b_378);
static rstr f_mstr_381(P1034 v_380);
static int f_ascii_char_383(rt_int i_382);
static int f_user_defined_385(rstr *op_384);
static rstr f_mcopy_387(P1021 t_386);
static int f_composite_389(P1021 t_388);
static rstr f_user_call2_395(P1025 y_390, rstr *a_391, int lv_a_392, rstr *b_393, int lv_b_394);
static rstr f_user_arg_399(P1027 pm_396, rstr *v_397, int lv_398);
static int f_top_level_401(P1025 y_400);
static rstr f_assign_code_406(rstr *lval_402, P1021 t_403, rstr *v_404, P1017 c_405);
static rstr f_copy_code_409(P1021 t_407, rstr *v_408);
static rstr f_eq_code_413(P1021 t_410, rstr *a_411, rstr *b_412);
static rstr f_elem_assign_417(rstr *lval_414, P1021 t_415, rstr *v_416);
static int f_seen_name_420(P1019 l_418, rstr *s_419);
static void f_emit_helpers_421(void);
static void f_helper_bodies_423(P1021 t_422);
static void f_declare_body_425(P1015 elems_424);
static void f_manifest_const_427(P1015 d_426);
static int f_exported_431(P1015 d_428, rstr *name_429, int *ro_430);
static P1025 f_copy_sym_433(P1025 y_432);
static void f_gen_capsule_435(P1015 d_434);
static void f_capsule_params_439(P1015 d_436, P1015 args_437, rt_int line_438);
static void f_elaborate_capsule_444(P1015 d_440, P1025 y_441, P1015 args_442, P1015 owner_443);
static int f_exports_op_447(P1015 d_445, rstr *op_446);
static P1008 f_renamed_450(P1015 d_448, P1025 z_449);
static int f_cap_tt_match_453(P1015 f_451, P1015 a_452);
static P1025 f_pick_capsule_455(P1015 d_454);
static P1025 f_capsule_instance_458(P1025 g_456, P1015 d_457);
static void f_configure_460(P1025 y_459);
static void f_gen_expose_462(P1015 d_461);
static void f_finish_ptr_464(P1021 t_463);
static P1015 f_ptr_args_466(P1017 c_465);
static void f_bind_ptr_params_471(P1015 formals_467, P1015 actuals_468, rstr *cell_469, rt_int line_470);
static void f_alloc_cell_476(P1015 s_472, rstr *lv_473, P1021 t_474, P1017 c_475);
static P1017 f_freeze_args_480(P1017 c_477, P1021 t_478, rt_int line_479);
static void f_ptr_subtype_check_484(P1021 t_481, P1017 c_482, P1015 src_483);
static void f_normal_function_487(P1015 d_485, P1025 y_486);
static void f_foreign_body_490(P1015 d_488, P1025 y_489);
static void f_declare_subprogram_492(P1015 d_491);
static P1025 f_build_subprogram_494(P1015 d_493);
static int f_has_pragmat_497(P1008 pr_495, rstr *p_496);
static P1008 f_suppressing_499(P1008 pr_498);
static int f_suppressed_501(rstr *x_500);
static void f_element_503(P1015 e_502);
static void f_element1_505(P1015 e_504);
static rstr f_storage_508(rstr *name_506, P1021 t_507);
static void f_bind_511(P1025 y_509, rstr *access_510);
static void f_var_decl_513(P1015 d_512);
static void f_located_var_515(P1015 d_514);
static rstr f_rep_sync_518(P1025 y_516, int pack_517);
static rstr f_cbound_access_520(P1025 y_519);
static rstr f_rep_size_524(P1015 items_521, P1021 t_522, P1017 c_523);
static P1015 f_rep_find_527(P1015 items_525, rstr *w_526);
static P1015 f_rep_comp_530(P1015 items_528, rstr *name_529);
static rt_int f_default_bits_533(P1021 t_531, P1017 c_532);
static rstr f_rep_code_540(P1021 t_534, P1017 c_535, P1015 items_536, rstr *lval_537, rstr *addr_538, int pack_539);
static rstr f_union_part_542(P1021 t_541);
static rstr f_rep_scalar_549(P1021 t_543, P1017 c_544, rstr *lval_545, rstr *addr_546, rstr *size_547, int pack_548);
static void f_max_range_552(P1021 t_550, P1017 c_551);
static void f_var_decl2_554(P1015 d_553);
static void f_open_fin_556(rstr *fc_555);
static void f_close_fins_558(P1019 saved_557);
static void f_const_decl_560(P1015 d_559);
static void f_subprogram_562(P1015 d_561);
static void f_gen_subprogram_565(P1015 d_563, P1025 y_564);
static rstr f_waits_of_567(P1015 d_566);
static rstr f_task_waits_569(P1015 elems_568);
static void f_await_tasks_571(P1015 elems_570);
static void f_capsule_elements_573(P1015 elems_572);
static void f_declare_labels_575(P1015 elems_574);
static void f_start_labels_576(void);
static P1040 f_goto_label_578(rstr *name_577);
static int f_has_return_580(P1015 e_579);
static void f_capsule_body_582(P1015 elems_581);
static void f_body_elements_584(P1015 elems_583);
static void f_gen_body_586(P1015 elems_585);
static rstr f_open_unhandled_588(P1015 elems_587);
static void f_close_unhandled_590(rstr *xu_589);
static void f_pop_frames_592(rt_int upto_591);
static void f_push_cleanup_594(rstr *s_593);
static void f_pop_cleanup_595(void);
static void f_gen_statement_597(P1015 s_596);
static P1025 f_located_in_600(P1015 e_598, P1025 found_599);
static int f_sym_in_603(P1025 l_601, P1025 y_602);
static void f_gen_statement2_605(P1015 s_604);
static void f_st_assign_607(P1015 s_606);
static void f_st_call_609(P1015 s_608);
static void f_st_if_611(P1015 s_610);
static int f_manifest_case_613(P1015 s_612);
static void f_st_case_615(P1015 s_614);
static void f_st_case2_617(P1015 s_616);
static void f_user_for_621(P1015 s_618, P1021 t_619, P1017 c_620);
static void f_st_repeat_623(P1015 s_622);
static void f_st_exit_625(P1015 s_624);
static void f_st_return_627(P1015 s_626);
static rstr f_result_checked_631(P1021 t_628, P1017 c_629, rstr *v_630);
static rstr f_exc_id_634(rstr *name_632, rt_int line_633);
static void f_st_guard_636(P1015 s_635);
static void f_st_alloc_638(P1015 s_637);
static rstr f_act_ref_640(P1015 e_639);
static void f_st_create_642(P1015 s_641);
static void f_hidden_var_646(rstr *name_643, P1021 t_644, rstr *place_645);
static void f_user_create_652(P1015 s_647, P1025 y_648, rstr *uv_649, P1021 ut_650, rstr *nf_651);
static rstr f_wait_alt_657(P1015 inv_653, rstr *arr_654, rt_int i_655, int mixed_656);
static int f_builtin_wait_659(P1015 inv_658);
static rstr f_wait_op_664(P1015 inv_660, rstr *op_661, rstr *q_662, int is_stmt_663);
static void f_user_wait_669(P1015 s_665, rstr *arr_666, rstr *w_667, rt_int n_668);
static void f_st_wait_671(P1015 s_670);
static P1015 f_call_node_675(rstr *name_672, P1015 arg_673, rt_int line_674);
static void f_user_region_677(P1015 s_676);
static void f_st_region_679(P1015 s_678);
static P1015 f_gparam_682(P1015 g_680, rstr *name_681);
static P1025 f_bind_sym_684(P1015 p_683);
static int f_same_binds_687(P1025 a_685, P1025 b_686);
static int f_same_binding_690(P1025 a_688, P1025 b_689);
static P1025 f_tt_binds_695(P1015 gd_691, P1015 formals_692, P1015 actuals_693, rt_int line_694);
static int f_type_allowed_699(P1021 t_696, P1015 items_697, P1025 binds_698);
static P1021 f_resolve_in_binds_703(P1015 st_700, P1025 binds_701, P1017 *c_702);
static P1025 f_pick_operation_710(rt_int kind_704, rstr *name_705, P1015 sig_706, P1015 res_707, P1025 binds_708, rt_int line_709);
static rstr f_kind_word_712(rt_int kind_711);
static P1025 f_need_binds_716(P1015 gd_713, P1025 binds_714, rt_int line_715);
static int f_generic_use_718(P1015 st_717);
static P1025 f_infer_from_723(P1015 gd_719, P1015 pat_720, P1021 t_721, P1025 known_722);
static P1021 f_instantiate_type_729(P1025 g_724, P1015 tt_725, P1015 args_726, P1017 *c_727, rt_int line_728);
static P1025 f_instantiate_734(P1025 g_730, P1015 tt_731, P1015 args_732, rt_int line_733);
static rstr f_access_of_736(P1025 y_735);
static P1015 f_import_of_739(P1015 l_737, rstr *name_738);
static int f_check_import_742(P1025 y_740, rt_int line_741);
static rstr f_c_ident_744(rstr *s_743);
static rstr f_cell_deref_747(P1021 t_745, rstr *p_746);
static rstr f_deref_750(rstr *base_748, P1021 t_749);
static int f_is_lvalue_752(P1015 e_751);
static void f_lvalue_758(P1015 e_753, P1008 *code_754, P1021 *t_755, P1017 *c_756, int *ro_757);
static void f_select_on_766(rstr *base_759, P1021 bt_760, P1015 e_761, int *ro_762, P1008 *code_763, P1021 *t_764, P1017 *c_765);
static int f_has_call_768(rstr *s_767);
static void f_need_slice_770(P1021 t_769);
static rstr f_ix_774(rstr *i_771, rstr *lo_772, rstr *hi_773);
static void f_index_on_783(rstr *base_775, P1021 bt_776, P1015 e_777, int *ro_778, int lv_779, P1008 *code_780, P1021 *t_781, P1017 *c_782);
static int f_own_attribute_785(P1015 e_784);
static rstr f_gexpr_789(P1015 e_786, P1021 want_787, P1021 *t_788);
static rstr f_resolved_792(P1015 e_790, P1021 *t_791);
static rstr f_gexpr_in_797(P1015 e_793, P1021 want_794, P1017 c_795, P1021 *t_796);
static rstr f_ascii_lit_799(int ch_798);
static rstr f_octal_801(rt_int n_800);
static P1021 f_str_cat_part_803(P1021 t_802);
static P1021 f_peek_type_805(P1015 e_804);
static P1021 f_set_operands_808(P1015 e_806, P1021 want_807);
static P1015 f_user_dot_810(P1015 e_809);
static P1015 f_user_subscript_812(P1015 e_811);
static P1015 f_op_call_816(rstr *name_813, P1015 args_814, rt_int line_815);
static P1015 f_derived_relation_818(P1015 e_817);
static P1015 f_rel_node_823(rstr *op_819, P1015 a_820, P1015 b_821, rt_int line_822);
static P1015 f_rel_not_826(P1015 x_824, rt_int line_825);
static P1015 f_copy_node_828(P1015 e_827);
static P1015 f_wrap_apply_830(P1015 e_829);
static rstr f_c_string_832(rstr *s_831);
static P1021 f_enum_type_of_835(rstr *lit_833, rt_int line_834);
static int f_ptr_attribute_837(P1015 e_836);
static rstr f_attribute_840(P1015 e_838, P1021 *t_839);
static rstr f_subtype_compare_845(P1015 sa_841, P1015 sb_842, rstr *op_843, rt_int line_844);
static rstr f_float_prec_847(P1017 c_846);
static rstr f_file_attribute_853(P1015 e_848, P1021 bt_849, P1017 c_850, P1008 base_851, P1021 *t_852);
static rstr f_gbinop_857(P1015 e_854, P1021 want_855, P1021 *t_856);
static rstr f_constructor_862(P1015 e_858, P1021 want_859, P1017 ctx_860, P1021 *t_861);
static rstr f_comp_value_866(P1021 t_863, P1017 c_864, rstr *v_865);
static int f_has_at_868(rstr *s_867);
static rstr f_set_elem_871(P1021 st_869, rstr *v_870);
static rstr f_array_cons_876(P1015 e_872, P1021 at_873, P1017 ctx_874, P1021 *t_875);
static rstr f_fill_items_882(P1015 items_877, P1021 at_878, rstr *tmp_879, P1019 prefix_880, rt_int dim_881);
static rt_int f_e_line_884(P1015 e_883);
static P1019 f_add_line_887(P1019 l_885, rstr *s_886);
static rstr f_item_value_892(P1015 e_888, P1021 at_889, rt_int line_890, P1021 *vt_891);
static rstr f_key_loop_897(P1015 k_893, P1021 at_894, rt_int d_895, rstr *xv_896);
static rstr f_store_at_902(P1021 at_898, rstr *tmp_899, P1019 xs_900, rt_int n_901);
static int f_fits_905(P1025 y_903, P1015 args_904);
static P1025 f_resolve_overload_911(rstr *name_906, P1015 tt_907, P1015 args_908, int is_stmt_909, rt_int line_910);
static int f_tt_fits_914(P1025 y_912, P1015 tt_913);
static P1025 f_overload_chain_917(rstr *name_915, rt_int pass_916);
static int f_is_builtin_919(rstr *n_918);
static int f_is_low_level_921(rstr *n_920);
static rstr f_me_high_925(P1015 tt_922, rt_int line_923, P1021 *t_924);
static rstr f_type_tag_927(P1021 t_926);
static rstr f_lock_ref_930(P1015 e_928, rstr *name_929);
static P1025 f_user_op_933(rstr *op_931, P1015 args_932);
static rstr f_gcall_937(P1015 e_934, int is_stmt_935, P1021 *t_936);
static P1019 f_requires_939(P1025 y_938);
static void f_add_req_942(P1025 y_940, rstr *name_941);
static void f_require_calls_945(P1025 y_943, P1015 e_944);
static int f_declared_in_948(P1015 elems_946, rstr *name_947);
static void f_check_requires_951(P1025 y_949, rt_int line_950);
static rstr f_act_delay_args_953(P1015 args_952);
static rstr f_same_subtypes_956(P1015 gd_954, P1015 args_955);
static rstr f_mailbox_low_961(rstr *name_957, P1015 args_958, rt_int line_959, P1021 *t_960);
static P1021 f_exponent_want_964(rstr *op_962, P1021 ta_963);
static rstr f_file_ref_968(P1015 e_965, int text_966, rt_int line_967);
static int f_text_file_970(P1021 t_969);
static rstr f_conversion_975(P1015 tt_971, P1015 args_972, rt_int line_973, P1021 *t_974);
static rstr f_float_digits_977(P1015 e_976);
static rstr f_enum_names_979(P1021 t_978);
static int f_explicit_rep_981(P1015 e_980);
static rstr f_actual_bounds_985(P1021 ft_982, P1021 t_983, P1017 c_984);
static rstr f_builtin_992(rstr *name_986, P1015 tt_987, P1015 args_988, rt_int line_989, int is_stmt_990, P1021 *t_991);
static P1015 f_with_library_994(P1015 units_993);
static P1008 f_external_missing_997(P1015 e_995, P1015 units_996);
static int f_unit_named_1000(P1015 units_998, rstr *name_999);
static int f_tried_1002(rstr *name_1001);
static void f_mark_tried_1004(rstr *name_1003);
static void f_translate_1006(P1015 units_1005);
static void f_print_program_1007(void);
static int ex_compile_error_1;
static P1012 g_toks_1046;
static rt_int g_ntoks_1047;
static rt_int g_tpos_1048;
static rt_int g_src_line_1049;
static P1008 g_pending_prag_1050;
static P1019 g_src_head_1051;
static P1019 g_src_tail_1052;
static rt_int g_ntoks_before_library_1053;
static P1019 g_library_tried_1054;
static P1029 g_table_1055;
static P1029 g_genv_1056;
static P1025 g_all_insts_1057;
static rt_int g_depth_1058;
static P1025 g_scope_stack_1059;
static P1021 g_all_types_1060;
static rt_int g_serial_1061;
static P1038 g_out_types_1062;
static P1038 g_out_helpers_1063;
static P1038 g_out_protos_1064;
static P1038 g_out_globals_1065;
static P1038 g_out_funcs_1066;
static P1038 g_out_init_1067;
static P1038 g_out_excs_1068;
static P1038 g_code_1069;
static P1038 g_fields_buf_1070;
static int g_in_func_1071;
static rt_int g_cur_level_1072;
static P1032 g_fctx_1073;
static P1042 g_caps_1074;
static P1044 g_cap_waits_1075;
static P1019 g_psub_1076;
static P1008 g_st_field_1077;
static P1038 g_out_frames_1078;
static P1038 g_out_roots_1079;
static int g_uses_free_1080;
static P1019 g_fins_1081;
static int g_uses_findyn_1082;
static P1025 g_func_sym_1083;
static P1017 g_func_rc_1084;
static P1008 g_cap_ret_1085;
static P1008 g_cap_rflag_1086;
static rt_int g_ret_frames_1087;
static rt_int g_gdepth_1088;
static P1008 g_suppress_1089;
static P1017 g_cons_ctx_1090;
static int g_mark_uninit_1091;
static P1040 g_exits_1092;
static P1040 g_gotos_1093;
static rt_int g_frames_1094;
static P1019 g_handlers_1095;
static P1019 g_cleanups_1096;
static rt_int g_trial_1097;
static P1019 g_mcopies_1098;
static P1021 g_ty_int_1099;
static P1021 g_ty_bool_1100;
static P1021 g_ty_float_1101;
static P1021 g_ty_ascii_1102;
static P1021 g_ty_string_1103;
static P1021 g_ty_void_1104;
static P1021 g_ty_file_1105;
static P1021 g_ty_nil_1106;
static P1021 g_ty_lock_1107;
static P1021 g_ty_latch_1108;
static P1021 g_ty_act_1109;
static P1021 g_file_mode_type_1110;
static P1021 g_ty_send_st_1111;
static P1021 g_ty_receive_st_1112;
static P1021 g_ty_text_file_1113;
static P1021 g_file_state_type_1114;
static P1021 g_file_disp_type_1115;
static P1021 g_file_access_type_1116;
static P1017 g_no_cons_1117;
static P1008 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1118 = NULL;
{ P1008 cell1119 = rt_alloc(sizeof *cell1119);
rt_int pv1120 = ((rt_int)(((*F->s_2)).len));
cell1119->p_n = pv1120;
cell1119->all = rt_str_new(pv1120);
rt_str_assign(&cell1119->all, (*F->s_2));
F->t_1118 = cell1119;
}
F->result_ = F->t_1118;
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
F->r_1121 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1121, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1121;
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
F->r_1122 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1122, (*F->s_14));
{ rt_int lo1124 = ((rt_int)1LL), hi1125 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1126 = lo1124; it1126 <= hi1125; it1126++) {
F->i_1123 = it1126;
if (((65 <= rt_r_echk(rt_str_get(F->r_1122, F->i_1123))) && (rt_r_echk(rt_str_get(F->r_1122, F->i_1123)) <= 90))) {
(*rt_str_at(&F->r_1122, F->i_1123)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_1122, F->i_1123))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1122;
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
F->l_1127 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1128 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1127), rt_str(" ", 1)));
{ rt_int lo1130 = ((rt_int)1LL), hi1131 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1128).len))), ((rt_int)1LL));
for (rt_int it1132 = lo1130; it1132 <= hi1131; it1132++) {
F->i_1129 = it1132;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1129, rt_sub(rt_add(F->i_1129, ((rt_int)((F->w_1128).len))), ((rt_int)1LL))), F->w_1128)) {
F->result_ = rt_str_cat(F->l_1127, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1127;
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
g_serial_1061 = rt_add(rt_r_ichk(g_serial_1061), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_1061)));
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
if ((rt_r_ichk(g_trial_1097) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1038 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1133 = NULL;
{ R1039 *cell1134 = rt_alloc(sizeof(R1039));
(*cell1134).head = NULL;
(*cell1134).tail = NULL;
F->b_1133 = cell1134;
}
F->result_ = F->b_1133;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1038 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1135 = NULL;
{ R1020 *cell1136 = rt_alloc(sizeof(R1020));
(*cell1136).s = NULL;
(*cell1136).next = NULL;
F->l_1135 = cell1136;
}
(*(P1019)rt_nil_check(F->l_1135)).s = f_mk_3(&(*F->s_26));
if (((*(P1038)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1038)rt_nil_check(F->b_25)).head = F->l_1135;
} else {
(*(P1019)rt_nil_check((*(P1038)rt_nil_check(F->b_25)).tail)).next = F->l_1135;
}
(*(P1038)rt_nil_check(F->b_25)).tail = F->l_1135;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1069, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1038 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1137 = NULL;
F->l_1137 = (*(P1038)rt_nil_check(F->b_30)).head;
while ((F->l_1137 != NULL)) {
rt_putln((((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_1137)).s))->all));
F->l_1137 = (*(P1019)rt_nil_check(F->l_1137)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1038 a_32, P1038 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1038)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1038)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1038)rt_nil_check(F->a_32)).head = (*(P1038)rt_nil_check(F->b_33)).head;
} else {
(*(P1019)rt_nil_check((*(P1038)rt_nil_check(F->a_32)).tail)).next = (*(P1038)rt_nil_check(F->b_33)).head;
}
(*(P1038)rt_nil_check(F->a_32)).tail = (*(P1038)rt_nil_check(F->b_33)).tail;
(*(P1038)rt_nil_check(F->b_33)).head = NULL;
(*(P1038)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1138 = (*F->w_35);
if (0 || rt_str_eq(sel1138, rt_str("ABBREV", 6)) || rt_str_eq(sel1138, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1138, rt_str("ALL", 3)) || rt_str_eq(sel1138, rt_str("ALLOC", 5)) || rt_str_eq(sel1138, rt_str("ASSERT", 6)) || rt_str_eq(sel1138, rt_str("BEGIN", 5)) || rt_str_eq(sel1138, rt_str("BY", 2)) || rt_str_eq(sel1138, rt_str("CAPSULE", 7)) || rt_str_eq(sel1138, rt_str("CASE", 4)) || rt_str_eq(sel1138, rt_str("CONST", 5)) || rt_str_eq(sel1138, rt_str("CREATE", 6)) || rt_str_eq(sel1138, rt_str("DO", 2)) || rt_str_eq(sel1138, rt_str("ELSE", 4)) || rt_str_eq(sel1138, rt_str("ELSEIF", 6)) || rt_str_eq(sel1138, rt_str("END", 3)) || rt_str_eq(sel1138, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1138, rt_str("EXIT", 4)) || rt_str_eq(sel1138, rt_str("EXPORTS", 7)) || rt_str_eq(sel1138, rt_str("EXPOSE", 6)) || rt_str_eq(sel1138, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1138, rt_str("FOR", 3)) || rt_str_eq(sel1138, rt_str("FROM", 4)) || rt_str_eq(sel1138, rt_str("FUNC", 4)) || rt_str_eq(sel1138, rt_str("GENERIC", 7)) || rt_str_eq(sel1138, rt_str("GOTO", 4)) || rt_str_eq(sel1138, rt_str("GUARD", 5)) || rt_str_eq(sel1138, rt_str("IF", 2)) || rt_str_eq(sel1138, rt_str("IMPORTS", 7)) || rt_str_eq(sel1138, rt_str("LOCATION", 8)) || rt_str_eq(sel1138, rt_str("NAMED", 5)) || rt_str_eq(sel1138, rt_str("NEEDS", 5)) || rt_str_eq(sel1138, rt_str("NEW", 3)) || rt_str_eq(sel1138, rt_str("NONE", 4)) || rt_str_eq(sel1138, rt_str("OUT", 3)) || rt_str_eq(sel1138, rt_str("OF", 2)) || rt_str_eq(sel1138, rt_str("PRAG", 4)) || rt_str_eq(sel1138, rt_str("PROC", 4)) || rt_str_eq(sel1138, rt_str("RAISE", 5)) || rt_str_eq(sel1138, rt_str("READONLY", 8)) || rt_str_eq(sel1138, rt_str("REVERSE", 7)) || rt_str_eq(sel1138, rt_str("REGION", 6)) || rt_str_eq(sel1138, rt_str("RENAMING", 8)) || rt_str_eq(sel1138, rt_str("REP", 3)) || rt_str_eq(sel1138, rt_str("REPEAT", 6)) || rt_str_eq(sel1138, rt_str("RERAISE", 7)) || rt_str_eq(sel1138, rt_str("RETURN", 6)) || rt_str_eq(sel1138, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1138, rt_str("TASK", 4)) || rt_str_eq(sel1138, rt_str("THEN", 4)) || rt_str_eq(sel1138, rt_str("TO", 2)) || rt_str_eq(sel1138, rt_str("TYPE", 4)) || rt_str_eq(sel1138, rt_str("VAR", 3)) || rt_str_eq(sel1138, rt_str("WAIT", 4)) || rt_str_eq(sel1138, rt_str("WHEN", 4)) || rt_str_eq(sel1138, rt_str("WHILE", 5))) {
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
F->t_1139 = NULL;
{ R1011 *cell1140 = rt_alloc(sizeof(R1011));
(*cell1140).s = NULL;
(*cell1140).prags = NULL;
F->t_1139 = cell1140;
}
(*(P1010)rt_nil_check(F->t_1139)).kind = F->kind_39;
(*(P1010)rt_nil_check(F->t_1139)).line = rt_r_ichk(g_src_line_1049);
(*(P1010)rt_nil_check(F->t_1139)).ival = F->ival_41;
(*(P1010)rt_nil_check(F->t_1139)).s = f_mk_3(&(*F->s_40));
(*(P1010)rt_nil_check(F->t_1139)).prags = g_pending_prag_1050;
g_pending_prag_1050 = NULL;
g_ntoks_1047 = rt_add(rt_r_ichk(g_ntoks_1047), ((rt_int)1LL));
(((P1012)rt_nil_check(g_toks_1046))->all).p[(rt_index(rt_r_ichk(g_ntoks_1047), (((P1012)rt_nil_check(g_toks_1046))->all).lo, (((P1012)rt_nil_check(g_toks_1046))->all).hi) - (((P1012)rt_nil_check(g_toks_1046))->all).lo)] = F->t_1139;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1141 = RT_R_IUNDEF;
F->j_1141 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1141) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1141)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1141))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1141))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1141))) == 95) && ((rt_r_ichk(F->j_1141) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1141), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1141), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1141 = rt_add(rt_r_ichk(F->j_1141), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1141);
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
F->w_1142 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1142, (*F->s_46));
{ rt_int lo1144 = ((rt_int)1LL), hi1145 = ((rt_int)((F->w_1142).len));
for (rt_int it1146 = lo1144; it1146 <= hi1145; it1146++) {
F->k_1143 = it1146;
(*rt_str_at(&F->w_1142, F->k_1143)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1142, F->k_1143)));
}
}
F->result_ = F->w_1142;
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
F->j_1147 = RT_R_IUNDEF;
F->j_1147 = F->i_49;
while (((rt_r_ichk(F->j_1147) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1147))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1147))) == 9)))) {
F->j_1147 = rt_add(rt_r_ichk(F->j_1147), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1147);
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
F->j_1148 = RT_R_IUNDEF;
F->j_1148 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1149 = NULL;
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1150 = RT_R_EUNDEF;
F->more_1150 = 1;
if (((rt_r_ichk(F->j_1148) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
while (rt_r_echk(F->more_1150)) {
F->k_1151 = RT_R_IUNDEF;
F->j_1148 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1148));
if (((rt_r_ichk(F->j_1148) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))))))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1151 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1148));
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1148), rt_sub(rt_r_ichk(F->k_1151), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1148 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1151));
if (((rt_r_ichk(F->j_1148) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) == 40))) {
F->go_1152 = RT_R_EUNDEF;
F->go_1152 = 1;
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), rt_str("(", 1)); b_; }));
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
while (rt_r_echk(F->go_1152)) {
F->j_1148 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1148));
if (((rt_r_ichk(F->j_1148) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))))))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1151 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1148));
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1148), rt_sub(rt_r_ichk(F->k_1151), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1148 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1151));
if (((rt_r_ichk(F->j_1148) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) == 44))) {
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), rt_str(",", 1)); b_; }));
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1148) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) == 41))) {
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
F->go_1152 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), rt_str(")", 1)); b_; }));
}
F->r_1149 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1149))->all), rt_str(";", 1)); b_; }));
F->j_1148 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1148));
if (((rt_r_ichk(F->j_1148) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) == 44))) {
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1148) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1148))) == 41))) {
F->j_1148 = rt_add(rt_r_ichk(F->j_1148), ((rt_int)1LL));
F->more_1150 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1008)rt_nil_check(F->r_1149))->all));
if ((g_pending_prag_1050 == NULL)) {
g_pending_prag_1050 = F->r_1149;
} else {
g_pending_prag_1050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(g_pending_prag_1050))->all), (((P1008)rt_nil_check(F->r_1149))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1148);
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
F->i_1153 = RT_R_IUNDEF;
F->i_1153 = ((rt_int)1LL);
F->k_1154 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1153) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1154 = rt_r_ichk(F->i_1153);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1154))) != 59)) {
F->k_1154 = rt_add(rt_r_ichk(F->k_1154), ((rt_int)1LL));
}
{
F->p_1155 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1153), rt_sub(rt_r_ichk(F->k_1154), ((rt_int)1LL))));
F->ok_1156 = ((((((((((rt_str_eq(F->p_1155, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1155, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1155, rt_str("OPEN", 4))) || rt_str_eq(F->p_1155, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1155, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1155, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1155, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1155, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1155, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1155, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1155).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1155, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1157 = ((((((((((rt_int)((F->p_1155).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1155, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1155, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1155, rt_str("OPEN", 4))) || rt_str_eq(F->p_1155, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1155).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1155, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1155, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1155, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1155).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1155, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1157 && (!F->ok_1156))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1155); b_; }));
}
}
F->i_1153 = rt_add(rt_r_ichk(F->k_1154), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1158 = RT_R_IUNDEF;
F->i_1158 = ((rt_int)1LL);
F->j_1159 = RT_R_IUNDEF;
F->j_1159 = ((rt_int)0LL);
F->n_1160 = RT_R_IUNDEF;
F->n_1160 = ((rt_int)(((*F->line_56)).len));
F->c_1161 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1158) <= rt_r_ichk(F->n_1160))) {
F->c_1161 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1158)));
if (((((rt_r_echk(F->c_1161) == 32) || (rt_r_echk(F->c_1161) == 9)) || (rt_r_echk(F->c_1161) == 13)) || (rt_r_echk(F->c_1161) == 12))) {
F->i_1158 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1161) == 37)) {
F->i_1158 = rt_add(rt_r_ichk(F->n_1160), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1161))) {
F->j_1159 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1158));
{
F->w_1162 = rt_str_new(rt_sub(rt_r_ichk(F->j_1159), rt_r_ichk(F->i_1158)));
rt_str_assign(&F->w_1162, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1158), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))));
{ rt_int lo1164 = ((rt_int)1LL), hi1165 = ((rt_int)((F->w_1162).len));
for (rt_int it1166 = lo1164; it1166 <= hi1165; it1166++) {
F->k_1163 = it1166;
(*rt_str_at(&F->w_1162, F->k_1163)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1162, F->k_1163)));
}
}
if (rt_str_eq(F->w_1162, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) != 59))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1162, rt_str("PRAG", 4))) {
F->j_1159 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1159));
} else if (f_is_reserved_36(&F->w_1162)) {
f_add_token_42((((rt_int)2LL)), &F->w_1162, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1162)) {
f_add_token_42((((rt_int)3LL)), &F->w_1162, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1162, ((rt_int)0LL));
}
}
F->i_1158 = rt_r_ichk(F->j_1159);
} else if (f_is_digit_11(rt_r_echk(F->c_1161))) {
F->j_1159 = rt_r_ichk(F->i_1158);
while (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159)))))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1159) < rt_r_ichk(F->n_1160)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL))))))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159)))))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 101)))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 45)))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159)))))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1158), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1158), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1158), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL)))));
}
F->i_1158 = rt_r_ichk(F->j_1159);
} else if ((((rt_r_echk(F->c_1161) == 39) && (rt_r_ichk(F->i_1158) < rt_r_ichk(F->n_1160))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL)))) == 39))) {
F->j_1159 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1159) < rt_r_ichk(F->n_1160)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1159) >= rt_r_ichk(F->n_1160))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1158), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1158 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1161) == 39)) {
F->j_1159 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1159) > rt_r_ichk(F->n_1160)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))))))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1159 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1159));
{
F->w_1167 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1159), rt_r_ichk(F->i_1158)), ((rt_int)1LL)));
rt_str_assign(&F->w_1167, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))));
{ rt_int lo1169 = ((rt_int)1LL), hi1170 = ((rt_int)((F->w_1167).len));
for (rt_int it1171 = lo1169; it1171 <= hi1170; it1171++) {
F->k_1168 = it1171;
(*rt_str_at(&F->w_1167, F->k_1168)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1167, F->k_1168)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1167, ((rt_int)0LL));
}
F->i_1158 = rt_r_ichk(F->j_1159);
} else if ((rt_r_echk(F->c_1161) == 34)) {
F->j_1159 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1159) <= rt_r_ichk(F->n_1160)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1159))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1159) > rt_r_ichk(F->n_1160))) {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1159), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1158 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
} else {
{
F->two_1172 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1172, rt_str("  ", 2));
(*rt_str_at(&F->two_1172, ((rt_int)1LL))) = rt_r_echk(F->c_1161);
if ((rt_r_ichk(F->i_1158) < rt_r_ichk(F->n_1160))) {
(*rt_str_at(&F->two_1172, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1172, rt_str(":=", 2)) || rt_str_eq(F->two_1172, rt_str("=>", 2))) || rt_str_eq(F->two_1172, rt_str("..", 2))) || rt_str_eq(F->two_1172, rt_str("**", 2))) || rt_str_eq(F->two_1172, rt_str("/=", 2))) || rt_str_eq(F->two_1172, rt_str("<=", 2))) || rt_str_eq(F->two_1172, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1172, ((rt_int)0LL));
F->i_1158 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1172, rt_str("<<", 2)) || rt_str_eq(F->two_1172, rt_str(">>", 2))) || rt_str_eq(F->two_1172, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1172, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1172, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1158 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1161) == 40) || (rt_r_echk(F->c_1161) == 41)) || (rt_r_echk(F->c_1161) == 91)) || (rt_r_echk(F->c_1161) == 93)) || (rt_r_echk(F->c_1161) == 44)) || (rt_r_echk(F->c_1161) == 58)) || (rt_r_echk(F->c_1161) == 59)) || (rt_r_echk(F->c_1161) == 46)) || (rt_r_echk(F->c_1161) == 35)) || (rt_r_echk(F->c_1161) == 43)) || (rt_r_echk(F->c_1161) == 45)) || (rt_r_echk(F->c_1161) == 42)) || (rt_r_echk(F->c_1161) == 47)) || (rt_r_echk(F->c_1161) == 38)) || (rt_r_echk(F->c_1161) == 61)) || (rt_r_echk(F->c_1161) == 60)) || (rt_r_echk(F->c_1161) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1161)); b_; }), ((rt_int)0LL));
F->i_1158 = rt_add(rt_r_ichk(F->i_1158), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_1049), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1173 = rt_str_new(rt_sizeln());
F->l_1174 = NULL;
rt_r_readln(&F->line_1173);
g_src_line_1049 = rt_add(rt_r_ichk(g_src_line_1049), ((rt_int)1LL));
{ R1020 *cell1175 = rt_alloc(sizeof(R1020));
(*cell1175).s = NULL;
(*cell1175).next = NULL;
F->l_1174 = cell1175;
}
(*(P1019)rt_nil_check(F->l_1174)).s = f_mk_3(&F->line_1173);
if ((g_src_tail_1052 == NULL)) {
g_src_head_1051 = F->l_1174;
} else {
(*(P1019)rt_nil_check(g_src_tail_1052)).next = F->l_1174;
}
g_src_tail_1052 = F->l_1174;
f_lex_line_57(&F->line_1173);
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
F->f_1176 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1177 = RT_R_EUNDEF;
F->found_1177 = 1;
{ rt_frame xf1178;
if (RT_TRY(xf1178)) {
rt_r_open(F->f_1176, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1178);
} else {
RT_POP(xf1178);
int x1179 = rt_xcur;
if (0 || x1179 == rt_exc("X_NOFILE") || x1179 == rt_exc("X_FILENAME")) {
F->found_1177 = 0;
} else {
rt_raise(x1179);
}
}
}
if ((!rt_r_echk(F->found_1177))) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1176))) {
F->line_1180 = rt_str_new(rt_r_fsizeln(F->f_1176));
rt_r_freadln(F->f_1176, &F->line_1180);
g_src_line_1049 = rt_add(rt_r_ichk(g_src_line_1049), ((rt_int)1LL));
f_lex_line_57(&F->line_1180);
}
rt_r_close(F->f_1176, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1015 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1181 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1182 = NULL;
F->l_1182 = g_src_head_1051;
F->n_1183 = RT_R_IUNDEF;
F->n_1183 = ((rt_int)1LL);
rt_r_open(F->f_1181, rt_str_cat(f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1182 != NULL) && (rt_r_ichk(F->n_1183) <= rt_r_ichk((*(P1015)rt_nil_check(F->u_61)).eline)))) {
if ((rt_r_ichk(F->n_1183) >= rt_r_ichk((*(P1015)rt_nil_check(F->u_61)).line))) {
rt_r_fwriteln(F->f_1181, (((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_1182)).s))->all));
}
F->n_1183 = rt_add(rt_r_ichk(F->n_1183), ((rt_int)1LL));
F->l_1182 = (*(P1019)rt_nil_check(F->l_1182)).next;
}
rt_r_close(F->f_1181, 0);
ret_:
  RT_FPOP();
  return;
}

static P1015 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1184 = NULL;
{ R1016 *cell1185 = rt_alloc(sizeof(R1016));
(*cell1185).name = NULL;
(*cell1185).tag = NULL;
(*cell1185).prags = NULL;
(*cell1185).labels = NULL;
(*cell1185).a = NULL;
(*cell1185).b = NULL;
(*cell1185).c = NULL;
(*cell1185).d = NULL;
(*cell1185).e = NULL;
(*cell1185).next = NULL;
F->x_1184 = cell1185;
}
(*(P1015)rt_nil_check(F->x_1184)).kind = F->kind_63;
(*(P1015)rt_nil_check(F->x_1184)).line = F->line_64;
F->result_ = F->x_1184;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1015 *head_66, P1015 *tail_67, P1015 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1015)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1015)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1015)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1015 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1186 = RT_R_IUNDEF;
F->n_1186 = ((rt_int)0LL);
F->p_1187 = NULL;
F->p_1187 = F->l_70;
while ((F->p_1187 != NULL)) {
F->n_1186 = rt_add(rt_r_ichk(F->n_1186), ((rt_int)1LL));
F->p_1187 = (*(P1015)rt_nil_check(F->p_1187)).next;
}
F->result_ = rt_r_ichk(F->n_1186);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
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
F->result_ = ((rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
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
F->result_ = (rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_77);
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
if ((rt_add(rt_r_ichk(g_tpos_1048), F->k_79) > rt_r_ichk(g_ntoks_1047))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1048), F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1008 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(rt_r_ichk(g_tpos_1048), F->k_81) > rt_r_ichk(g_ntoks_1047))) {
F->result_ = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_1047), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1048), F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
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
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
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
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
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
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1008 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1048), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1188 = NULL;
F->x_1188 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->x_1188)).name = f_expect_id_93();
F->result_ = F->x_1188;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1189 = NULL;
F->tail_1190 = NULL;
f_append_69(&F->head_1189, &F->tail_1190, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1189, &F->tail_1190, f_name_node_94());
}
F->result_ = F->head_1189;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1191 = RT_R_IUNDEF;
F->line_1191 = f_cur_line_72();
F->x_1192 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->x_1192 = f_nn_65((((rt_int)81LL)), rt_r_ichk(F->line_1191));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1192;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1193 = rt_str_copy((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if (rt_str_eq(F->w_1193, rt_str("ARRAY", 5))) {
F->x_1192 = f_nn_65((((rt_int)74LL)), rt_r_ichk(F->line_1191));
{
F->head_1194 = NULL;
F->tail_1195 = NULL;
f_append_69(&F->head_1194, &F->tail_1195, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1194, &F->tail_1195, f_p_subtype_96());
}
(*(P1015)rt_nil_check(F->x_1192)).a = F->head_1194;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1193, rt_str("RECORD", 6)) || rt_str_eq(F->w_1193, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1193, rt_str("RECORD", 6))) {
F->x_1192 = f_nn_65((((rt_int)75LL)), rt_r_ichk(F->line_1191));
} else {
F->x_1192 = f_nn_65((((rt_int)76LL)), rt_r_ichk(F->line_1191));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1196 = NULL;
F->tail_1197 = NULL;
F->more_1198 = RT_R_EUNDEF;
F->more_1198 = 1;
while (rt_r_echk(F->more_1198)) {
F->names_1199 = NULL;
F->names_1199 = f_id_list_95();
F->st_1200 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1200 = f_p_subtype_96();
while ((F->names_1199 != NULL)) {
F->cmp_1201 = NULL;
F->cmp_1201 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1015)rt_nil_check(F->names_1199)).line));
(*(P1015)rt_nil_check(F->cmp_1201)).name = (*(P1015)rt_nil_check(F->names_1199)).name;
(*(P1015)rt_nil_check(F->cmp_1201)).a = F->st_1200;
f_append_69(&F->head_1196, &F->tail_1197, F->cmp_1201);
F->names_1199 = (*(P1015)rt_nil_check(F->names_1199)).next;
}
F->more_1198 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1192)).a = F->head_1196;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1193, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1192)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1193, rt_str("ENUM", 4))) {
F->x_1192 = f_nn_65((((rt_int)72LL)), rt_r_ichk(F->line_1191));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1202 = NULL;
F->tail_1203 = NULL;
F->more_1204 = RT_R_EUNDEF;
F->more_1204 = 1;
while (rt_r_echk(F->more_1204)) {
F->lit_1205 = NULL;
F->lit_1205 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1191));
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1015)rt_nil_check(F->lit_1205)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
f_append_69(&F->head_1202, &F->tail_1203, F->lit_1205);
F->more_1204 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1192)).a = F->head_1202;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1192)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1193, rt_str("STRING", 6)) || rt_str_eq(F->w_1193, rt_str("SET", 3))) || rt_str_eq(F->w_1193, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1193, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1193, rt_str("STRING", 6))) {
F->x_1192 = f_nn_65((((rt_int)73LL)), rt_r_ichk(F->line_1191));
} else if (rt_str_eq(F->w_1193, rt_str("SET", 3))) {
F->x_1192 = f_nn_65((((rt_int)77LL)), rt_r_ichk(F->line_1191));
} else if (rt_str_eq(F->w_1193, rt_str("MAILBOX", 7))) {
F->x_1192 = f_nn_65((((rt_int)78LL)), rt_r_ichk(F->line_1191));
} else {
F->x_1192 = f_nn_65((((rt_int)79LL)), rt_r_ichk(F->line_1191));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1192)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1193, rt_str("INT", 3))) {
F->x_1192 = f_nn_65((((rt_int)70LL)), rt_r_ichk(F->line_1191));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1192)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1193, rt_str("FLOAT", 5))) {
F->x_1192 = f_nn_65((((rt_int)71LL)), rt_r_ichk(F->line_1191));
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1192)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1192)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1192)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1192 = f_nn_65((((rt_int)80LL)), rt_r_ichk(F->line_1191));
(*(P1015)rt_nil_check(F->x_1192)).name = f_mk_3(&F->w_1193);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1192)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1192)).b = f_constraint_list_97();
(*(P1015)rt_nil_check(F->x_1192)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1192;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1206 = NULL;
F->tail_1207 = NULL;
F->more_1208 = RT_R_EUNDEF;
F->more_1208 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1208)) {
F->line_1209 = RT_R_IUNDEF;
F->line_1209 = f_cur_line_72();
F->lo_1210 = NULL;
F->lo_1210 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1211 = NULL;
F->r_1211 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1209));
(*(P1015)rt_nil_check(F->r_1211)).a = F->lo_1210;
(*(P1015)rt_nil_check(F->r_1211)).b = f_expr_107();
f_append_69(&F->head_1206, &F->tail_1207, F->r_1211);
} else {
f_append_69(&F->head_1206, &F->tail_1207, F->lo_1210);
}
F->more_1208 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1206;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1212 = NULL;
F->tail_1213 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1212, &F->tail_1213, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1212, &F->tail_1213, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1212;
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

static P1015 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1214 = NULL;
F->tail_1215 = NULL;
F->more_1216 = RT_R_EUNDEF;
F->more_1216 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1216)) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1008)rt_nil_check((*(P1010)rt_nil_check((((P1012)rt_nil_check(g_toks_1046))->all).p[(rt_index(rt_r_ichk(g_tpos_1048), (((P1012)rt_nil_check(g_toks_1046))->all).lo, (((P1012)rt_nil_check(g_toks_1046))->all).hi) - (((P1012)rt_nil_check(g_toks_1046))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1214, &F->tail_1215, f_p_subtype_96());
} else {
f_append_69(&F->head_1214, &F->tail_1215, f_expr_107());
}
F->more_1216 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_binop_106(P1008 op_102, P1015 l_103, P1015 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1217 = NULL;
F->x_1217 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1015)rt_nil_check(F->x_1217)).name = F->op_102;
(*(P1015)rt_nil_check(F->x_1217)).a = F->l_103;
(*(P1015)rt_nil_check(F->x_1217)).b = F->r_104;
F->result_ = F->x_1217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1218 = NULL;
F->l_1218 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1219 = NULL;
F->op_1219 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1220 = RT_R_IUNDEF;
F->line_1220 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1218 = f_binop_106(F->op_1219, F->l_1218, f_expr_and_108(), rt_r_ichk(F->line_1220));
}
F->result_ = F->l_1218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1221 = NULL;
F->l_1221 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1222 = RT_R_IUNDEF;
F->line_1222 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1221 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1221, f_expr_not_109(), rt_r_ichk(F->line_1222));
}
F->result_ = F->l_1221;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1223 = NULL;
F->x_1223 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1223)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1015)rt_nil_check(F->x_1223)).a = f_expr_not_109();
F->result_ = F->x_1223;
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

static P1015 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1224 = NULL;
F->l_1224 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1008)rt_nil_check((*(P1010)rt_nil_check((((P1012)rt_nil_check(g_toks_1046))->all).p[(rt_index(rt_r_ichk(g_tpos_1048), (((P1012)rt_nil_check(g_toks_1046))->all).lo, (((P1012)rt_nil_check(g_toks_1046))->all).hi) - (((P1012)rt_nil_check(g_toks_1046))->all).lo)])).s))->all)))) {
F->op_1225 = NULL;
F->op_1225 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1226 = RT_R_IUNDEF;
F->line_1226 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1224 = f_binop_106(F->op_1225, F->l_1224, f_expr_add_113(), rt_r_ichk(F->line_1226));
}
F->result_ = F->l_1224;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1227 = NULL;
F->l_1227 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1228 = NULL;
F->op_1228 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1229 = RT_R_IUNDEF;
F->line_1229 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1227 = f_binop_106(F->op_1228, F->l_1227, f_expr_mul_114(), rt_r_ichk(F->line_1229));
}
F->result_ = F->l_1227;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1230 = NULL;
F->l_1230 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1231 = NULL;
F->op_1231 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1232 = RT_R_IUNDEF;
F->line_1232 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1230 = f_binop_106(F->op_1231, F->l_1230, f_expr_pow_115(), rt_r_ichk(F->line_1232));
}
F->result_ = F->l_1230;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1233 = NULL;
F->l_1233 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1234 = RT_R_IUNDEF;
F->line_1234 = f_cur_line_72();
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->l_1233 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1233, f_expr_prefix_116(), rt_r_ichk(F->line_1234));
}
F->result_ = F->l_1233;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1235 = NULL;
F->x_1235 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->x_1235)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1235)).a = f_expr_prefix_116();
F->result_ = F->x_1235;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1236 = NULL;
F->p_1236 = f_primary_118();
while (1) {
F->line_1237 = RT_R_IUNDEF;
F->line_1237 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1238 = NULL;
F->x_1238 = f_nn_65((((rt_int)10LL)), rt_r_ichk(F->line_1237));
F->head_1239 = NULL;
F->tail_1240 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1241 = RT_R_EUNDEF;
F->more_1241 = 1;
while (rt_r_echk(F->more_1241)) {
F->lo_1242 = NULL;
F->lo_1242 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1243 = NULL;
F->r_1243 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1237));
(*(P1015)rt_nil_check(F->r_1243)).a = F->lo_1242;
(*(P1015)rt_nil_check(F->r_1243)).b = f_expr_107();
f_append_69(&F->head_1239, &F->tail_1240, F->r_1243);
} else {
f_append_69(&F->head_1239, &F->tail_1240, F->lo_1242);
}
F->more_1241 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1238)).a = F->p_1236;
(*(P1015)rt_nil_check(F->x_1238)).b = F->head_1239;
F->p_1236 = F->x_1238;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1244 = NULL;
F->x_1244 = f_nn_65((((rt_int)11LL)), rt_r_ichk(F->line_1237));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1244)).a = F->p_1236;
(*(P1015)rt_nil_check(F->x_1244)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->p_1236 = F->x_1244;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P1015)rt_nil_check(F->p_1236)).kind) == (((rt_int)7LL))))) {
F->x_1245 = NULL;
F->x_1245 = f_nn_65((((rt_int)12LL)), rt_r_ichk(F->line_1237));
(*(P1015)rt_nil_check(F->x_1245)).a = F->p_1236;
(*(P1015)rt_nil_check(F->x_1245)).b = f_actual_tt_101();
F->p_1236 = F->x_1245;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1246 = NULL;
F->x_1246 = f_nn_65((((rt_int)13LL)), rt_r_ichk(F->line_1237));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1246)).a = F->p_1236;
(*(P1015)rt_nil_check(F->x_1246)).b = f_p_subtype_96();
F->p_1236 = F->x_1246;
} else {
F->result_ = F->p_1236;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1247 = RT_R_IUNDEF;
F->line_1247 = f_cur_line_72();
F->x_1248 = NULL;
F->k_1249 = RT_R_IUNDEF;
F->k_1249 = rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1249) == (((rt_int)4LL)))) {
F->x_1248 = f_nn_65((((rt_int)1LL)), rt_r_ichk(F->line_1247));
(*(P1015)rt_nil_check(F->x_1248)).ival = rt_r_ichk((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P1015)rt_nil_check(F->x_1248)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = F->x_1248;
goto ret_;
}
if ((((rt_r_ichk(F->k_1249) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1249) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1249) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1249) == (((rt_int)5LL)))) {
F->x_1248 = f_nn_65((((rt_int)2LL)), rt_r_ichk(F->line_1247));
} else if ((rt_r_ichk(F->k_1249) == (((rt_int)7LL)))) {
F->x_1248 = f_nn_65((((rt_int)3LL)), rt_r_ichk(F->line_1247));
} else {
F->x_1248 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1247));
}
(*(P1015)rt_nil_check(F->x_1248)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = F->x_1248;
goto ret_;
}
if ((rt_r_ichk(F->k_1249) == (((rt_int)1LL)))) {
F->w_1250 = rt_str_copy((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1250, rt_str("TRUE", 4)) || rt_str_eq(F->w_1250, rt_str("FALSE", 5)))) {
F->x_1248 = f_nn_65((((rt_int)5LL)), rt_r_ichk(F->line_1247));
if (rt_str_eq(F->w_1250, rt_str("TRUE", 4))) {
(*(P1015)rt_nil_check(F->x_1248)).ival = ((rt_int)1LL);
}
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = F->x_1248;
goto ret_;
}
if (rt_str_eq(F->w_1250, rt_str("NIL", 3))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), rt_r_ichk(F->line_1247));
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1248 = f_nn_65((((rt_int)17LL)), rt_r_ichk(F->line_1247));
(*(P1015)rt_nil_check(F->x_1248)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1248;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1251 = NULL;
F->tail_1252 = NULL;
F->x_1248 = f_nn_65((((rt_int)14LL)), rt_r_ichk(F->line_1247));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1253 = RT_R_EUNDEF;
F->more_1253 = 1;
while (rt_r_echk(F->more_1253)) {
f_append_69(&F->head_1251, &F->tail_1252, f_constructor_item_119());
F->more_1253 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1248)).a = F->head_1251;
F->result_ = F->x_1248;
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

static P1015 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1254 = RT_R_IUNDEF;
F->line_1254 = f_cur_line_72();
F->it_1255 = NULL;
F->it_1255 = f_nn_65((((rt_int)15LL)), rt_r_ichk(F->line_1254));
F->first_1256 = NULL;
F->first_1256 = f_expr_107();
F->keys_1257 = NULL;
F->ktail_1258 = NULL;
F->lab_1259 = NULL;
F->lab_1259 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1254));
(*(P1015)rt_nil_check(F->lab_1259)).a = F->first_1256;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1015)rt_nil_check(F->lab_1259)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1257, &F->ktail_1258, F->lab_1259);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1260 = RT_R_IUNDEF;
F->save_1260 = rt_r_ichk(g_tpos_1048);
F->more_1261 = NULL;
F->tail2_1262 = NULL;
F->ok_1263 = RT_R_EUNDEF;
F->ok_1263 = 0;
F->go_1264 = RT_R_EUNDEF;
F->go_1264 = 1;
while ((rt_r_echk(F->go_1264) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1265 = NULL;
F->l2_1265 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1254));
(*(P1015)rt_nil_check(F->l2_1265)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1015)rt_nil_check(F->l2_1265)).b = f_expr_107();
}
f_append_69(&F->more_1261, &F->tail2_1262, F->l2_1265);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1263 = 1;
F->go_1264 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1264 = 0;
}
}
if (rt_r_echk(F->ok_1263)) {
f_append_69(&F->keys_1257, &F->ktail_1258, F->lab_1259);
f_append_69(&F->keys_1257, &F->ktail_1258, F->more_1261);
} else {
g_tpos_1048 = rt_r_ichk(F->save_1260);
}
}
if (((F->keys_1257 == NULL) && ((*(P1015)rt_nil_check(F->lab_1259)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1257 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1015)rt_nil_check(F->it_1255)).a = F->keys_1257;
(*(P1015)rt_nil_check(F->it_1255)).b = f_expr_107();
} else {
(*(P1015)rt_nil_check(F->it_1255)).b = F->first_1256;
}
F->result_ = F->it_1255;
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

static P1015 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1266 = NULL;
F->tail_1267 = NULL;
F->stmts_1268 = RT_R_EUNDEF;
F->stmts_1268 = 0;
F->after_1269 = NULL;
while ((!f_at_body_end_120())) {
F->x_1270 = NULL;
F->x_1270 = f_body_element_122();
if (((F->x_1270 != NULL) && ((((rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1268)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1270 != NULL) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1268) && (F->after_1269 == NULL))) {
F->after_1269 = F->x_1270;
}
} else if (((F->x_1270 != NULL) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_1270)).kind) != (((rt_int)33LL))))) {
if ((F->after_1269 != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->after_1269)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1268 = 1;
}
f_append_69(&F->head_1266, &F->tail_1267, F->x_1270);
}
F->result_ = F->head_1266;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1271 = NULL;
F->pr_1272 = NULL;
F->pr_1272 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1271 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1271 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1271)).a = f_expr_107();
} else {
F->x_1271 = f_statement_149();
}
if ((F->pr_1272 != NULL)) {
F->p_1273 = NULL;
F->p_1273 = F->x_1271;
while ((F->p_1273 != NULL)) {
if (((*(P1015)rt_nil_check(F->p_1273)).prags == NULL)) {
(*(P1015)rt_nil_check(F->p_1273)).prags = F->pr_1272;
} else {
(*(P1015)rt_nil_check(F->p_1273)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->pr_1272))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1273)).prags))->all)); b_; }));
}
F->p_1273 = (*(P1015)rt_nil_check(F->p_1273)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1271;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1274 = RT_R_IUNDEF;
F->line_1274 = f_cur_line_72();
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
F->head_1275 = NULL;
F->tail_1276 = NULL;
F->names_1277 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->names_1277 = f_id_list_95();
while ((F->names_1277 != NULL)) {
F->x_1278 = NULL;
F->x_1278 = f_nn_65((((rt_int)49LL)), rt_r_ichk(F->line_1274));
(*(P1015)rt_nil_check(F->x_1278)).name = (*(P1015)rt_nil_check(F->names_1277)).name;
f_append_69(&F->head_1275, &F->tail_1276, F->x_1278);
F->names_1277 = (*(P1015)rt_nil_check(F->names_1277)).next;
}
F->result_ = F->head_1275;
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

static P1015 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1279 = RT_R_IUNDEF;
F->line_1279 = f_cur_line_72();
F->is_var_1280 = RT_R_EUNDEF;
F->is_var_1280 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1281 = NULL;
F->st_1282 = NULL;
F->init_1283 = NULL;
F->loc_1284 = NULL;
F->loc_kind_1285 = RT_R_IUNDEF;
F->loc_kind_1285 = ((rt_int)0LL);
F->head_1286 = NULL;
F->tail_1287 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->names_1281 = f_id_list_95();
if (rt_r_echk(F->is_var_1280)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1282 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1283 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->loc_kind_1285 = ((rt_int)1LL);
} else {
F->loc_kind_1285 = ((rt_int)2LL);
}
F->loc_1284 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1283 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1283 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1282 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1283 = f_expr_107();
}
while ((F->names_1281 != NULL)) {
F->x_1288 = NULL;
if (rt_r_echk(F->is_var_1280)) {
F->x_1288 = f_nn_65((((rt_int)40LL)), rt_r_ichk(F->line_1279));
} else {
F->x_1288 = f_nn_65((((rt_int)41LL)), rt_r_ichk(F->line_1279));
}
(*(P1015)rt_nil_check(F->x_1288)).name = (*(P1015)rt_nil_check(F->names_1281)).name;
(*(P1015)rt_nil_check(F->x_1288)).a = F->st_1282;
(*(P1015)rt_nil_check(F->x_1288)).b = F->init_1283;
(*(P1015)rt_nil_check(F->x_1288)).c = F->loc_1284;
(*(P1015)rt_nil_check(F->x_1288)).ival = rt_r_ichk(F->loc_kind_1285);
f_append_69(&F->head_1286, &F->tail_1287, F->x_1288);
F->names_1281 = (*(P1015)rt_nil_check(F->names_1281)).next;
}
F->result_ = F->head_1286;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1289 = NULL;
F->x_1289 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1289)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1289)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1289)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1289)).a = f_p_subtype_96();
F->result_ = F->x_1289;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rep_spec_126(void) {
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

static P1015 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1290 = NULL;
F->tail_1291 = NULL;
F->more_1292 = RT_R_EUNDEF;
F->more_1292 = 1;
while (rt_r_echk(F->more_1292)) {
f_append_69(&F->head_1290, &F->tail_1291, f_rep_item_130());
F->more_1292 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (rt_r_echk(F->more_1292)) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
}
}
F->result_ = F->head_1290;
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
F->w_1293 = rt_str_copy((((P1008)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1293, rt_str("SIZE", 4)) || rt_str_eq(F->w_1293, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1293, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1293, rt_str("RECORD", 6))) || rt_str_eq(F->w_1293, rt_str("UNION", 5))) || rt_str_eq(F->w_1293, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1293, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1293, rt_str("PTR", 3))) || rt_str_eq(F->w_1293, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1294 = NULL;
F->x_1294 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1015)rt_nil_check(F->x_1294)).name = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1294)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1294)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1015)rt_nil_check(F->x_1294)).b = (*(P1015)rt_nil_check(F->x_1294)).a;
(*(P1015)rt_nil_check(F->x_1294)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("UNION", 5)))) {
F->head_1295 = NULL;
F->tail_1296 = NULL;
F->more_1297 = RT_R_EUNDEF;
F->more_1297 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1297)) {
F->names_1298 = NULL;
F->names_1298 = f_id_list_95();
F->items_1299 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1299 = f_rep_items_127();
}
while ((F->names_1298 != NULL)) {
F->cmp_1300 = NULL;
F->cmp_1300 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1015)rt_nil_check(F->names_1298)).line));
(*(P1015)rt_nil_check(F->cmp_1300)).name = (*(P1015)rt_nil_check(F->names_1298)).name;
(*(P1015)rt_nil_check(F->cmp_1300)).a = F->items_1299;
f_append_69(&F->head_1295, &F->tail_1296, F->cmp_1300);
F->names_1298 = (*(P1015)rt_nil_check(F->names_1298)).next;
}
F->more_1297 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1294)).c = F->head_1295;
} else if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1294)).name))->all), rt_str("ARRAY", 5))) {
F->head_1301 = NULL;
F->tail_1302 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1301, &F->tail_1302, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1294)).d = F->head_1301;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1015)rt_nil_check(F->x_1294)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1294)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1303 = NULL;
F->tail_1304 = NULL;
F->dummy_1305 = RT_R_EUNDEF;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1303, &F->tail_1304, f_name_node_94());
F->dummy_1305 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1294)).d = F->head_1303;
}
F->result_ = F->x_1294;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1306 = RT_R_IUNDEF;
F->line_1306 = f_cur_line_72();
F->name_1307 = NULL;
F->params_1308 = NULL;
F->x_1309 = NULL;
F->tts_1310 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->name_1307 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1310 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1308 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->x_1309 = f_nn_65((((rt_int)44LL)), rt_r_ichk(F->line_1306));
(*(P1015)rt_nil_check(F->x_1309)).d = F->params_1308;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1309)).b = f_formal_params_134();
}
} else {
F->x_1309 = f_nn_65((((rt_int)43LL)), rt_r_ichk(F->line_1306));
(*(P1015)rt_nil_check(F->x_1309)).b = F->params_1308;
}
(*(P1015)rt_nil_check(F->x_1309)).name = F->name_1307;
(*(P1015)rt_nil_check(F->x_1309)).e = F->tts_1310;
(*(P1015)rt_nil_check(F->x_1309)).a = f_p_subtype_96();
(*(P1015)rt_nil_check(F->x_1309)).c = f_rep_spec_126();
F->result_ = F->x_1309;
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

static P1015 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1311 = NULL;
F->tail_1312 = NULL;
F->more_1313 = RT_R_EUNDEF;
F->more_1313 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1313)) {
F->mode_1314 = RT_R_IUNDEF;
F->mode_1314 = (((rt_int)1LL));
F->names_1315 = NULL;
F->ntail_1316 = NULL;
F->st_1317 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1314 = f_mode_of_133(&(((P1008)rt_nil_check((*(P1010)rt_nil_check((((P1012)rt_nil_check(g_toks_1046))->all).p[(rt_index(rt_r_ichk(g_tpos_1048), (((P1012)rt_nil_check(g_toks_1046))->all).lo, (((P1012)rt_nil_check(g_toks_1046))->all).hi) - (((P1012)rt_nil_check(g_toks_1046))->all).lo)])).s))->all));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
}
f_append_69(&F->names_1315, &F->ntail_1316, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
f_append_69(&F->names_1315, &F->ntail_1316, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1317 = f_p_subtype_96();
while ((F->names_1315 != NULL)) {
F->p_1318 = NULL;
F->p_1318 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1015)rt_nil_check(F->names_1315)).line));
(*(P1015)rt_nil_check(F->p_1318)).name = (*(P1015)rt_nil_check(F->names_1315)).name;
(*(P1015)rt_nil_check(F->p_1318)).ival = rt_r_ichk(F->mode_1314);
(*(P1015)rt_nil_check(F->p_1318)).a = F->st_1317;
f_append_69(&F->head_1311, &F->tail_1312, F->p_1318);
F->names_1315 = (*(P1015)rt_nil_check(F->names_1315)).next;
}
F->more_1313 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1311;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1015 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1319 = NULL;
F->tail_1320 = NULL;
F->more_1321 = RT_R_EUNDEF;
F->more_1321 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1015)rt_nil_check(F->owner_135)).flag = rt_add(rt_r_ichk((*(P1015)rt_nil_check(F->owner_135)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1321)) {
F->ro_1322 = RT_R_EUNDEF;
F->ro_1322 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1323 = NULL;
F->x_1323 = f_name_node_94();
if (rt_r_echk(F->ro_1322)) {
(*(P1015)rt_nil_check(F->x_1323)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1319, &F->tail_1320, F->x_1323);
F->more_1321 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->owner_135)).d = F->head_1319;
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

static P1008 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1048), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1324 = NULL;
F->r_1324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1324))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1324))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1324))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1324))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1008)rt_nil_check((*(P1010)rt_nil_check((((P1012)rt_nil_check(g_toks_1046))->all).p[(rt_index(rt_r_ichk(g_tpos_1048), (((P1012)rt_nil_check(g_toks_1046))->all).lo, (((P1012)rt_nil_check(g_toks_1046))->all).hi) - (((P1012)rt_nil_check(g_toks_1046))->all).lo)])).s))->all))))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1048), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P1015 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1325 = RT_R_IUNDEF;
F->line_1325 = f_cur_line_72();
F->x_1326 = NULL;
F->is_abn_1327 = RT_R_EUNDEF;
F->is_abn_1327 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1328 = RT_R_EUNDEF;
F->is_func_1328 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1329 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1328)) {
F->x_1326 = f_nn_65((((rt_int)46LL)), rt_r_ichk(F->line_1325));
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1326 = f_nn_65((((rt_int)45LL)), rt_r_ichk(F->line_1325));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1327)) {
(*(P1015)rt_nil_check(F->x_1326)).flag = ((rt_int)1LL);
}
(*(P1015)rt_nil_check(F->x_1326)).name = f_definable_name_139();
if ((((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1325), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1326)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1326)).a = f_formal_params_134();
}
if (rt_r_echk(F->is_func_1328)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1326)).b = f_p_subtype_96();
}
F->dummy_1329 = f_imports_list_136(F->x_1326);
if (((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1015)rt_nil_check(F->x_1326)).prags == NULL)) {
(*(P1015)rt_nil_check(F->x_1326)).prags = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1015)rt_nil_check(F->x_1326)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).prags))->all), (((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1326)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1328)) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1008)rt_nil_check(f_definable_name_139()))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1326)).name))->all)); b_; }));
}
F->result_ = F->x_1326;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1330 = NULL;
F->x_1330 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
F->dummy_1331 = RT_R_EUNDEF;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1330)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1330)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1330)).b = f_formal_params_134();
}
F->dummy_1331 = f_imports_list_136(F->x_1330);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1015)rt_nil_check(F->x_1330)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1015)rt_nil_check(F->x_1330)).ival = ((rt_int)0LL);
} else {
F->head_1332 = NULL;
F->tail_1333 = NULL;
F->more_1334 = RT_R_EUNDEF;
F->more_1334 = 1;
while (rt_r_echk(F->more_1334)) {
F->n_1335 = NULL;
F->n_1335 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1015)rt_nil_check(F->n_1335)).ival = ((rt_int)1LL);
}
(*(P1015)rt_nil_check(F->n_1335)).name = f_definable_name_139();
f_append_69(&F->head_1332, &F->tail_1333, F->n_1335);
F->more_1334 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1330)).a = F->head_1332;
(*(P1015)rt_nil_check(F->x_1330)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1330)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1015)rt_nil_check(F->x_1330)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1008)rt_nil_check(f_expect_id_93()))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1330)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1330;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1336 = NULL;
F->tail_1337 = NULL;
F->more_1338 = RT_R_EUNDEF;
F->more_1338 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1338)) {
f_append_69(&F->head_1336, &F->tail_1337, f_name_node_94());
F->more_1338 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1336;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1339 = NULL;
F->x_1339 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1340 = NULL;
F->tail_1341 = NULL;
F->more_1342 = RT_R_EUNDEF;
F->more_1342 = 1;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
while (rt_r_echk(F->more_1342)) {
F->names_1343 = NULL;
F->names_1343 = f_id_list_95();
F->kind_1344 = RT_R_IUNDEF;
F->kind_1344 = ((rt_int)6LL);
F->st_1345 = NULL;
F->items_1346 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1344 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1344 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1344 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1344 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1344 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->kind_1344 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->kind_1344 = ((rt_int)8LL);
} else {
F->st_1345 = f_p_subtype_96();
}
if (((rt_r_ichk(F->kind_1344) <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1346 = f_type_list_144();
}
if (((rt_r_ichk(F->kind_1344) == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1345 = f_p_subtype_96();
}
while ((F->names_1343 != NULL)) {
F->p_1347 = NULL;
F->p_1347 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1015)rt_nil_check(F->names_1343)).line));
(*(P1015)rt_nil_check(F->p_1347)).name = (*(P1015)rt_nil_check(F->names_1343)).name;
(*(P1015)rt_nil_check(F->p_1347)).ival = rt_r_ichk(F->kind_1344);
(*(P1015)rt_nil_check(F->p_1347)).a = F->st_1345;
(*(P1015)rt_nil_check(F->p_1347)).b = F->items_1346;
f_append_69(&F->head_1340, &F->tail_1341, F->p_1347);
F->names_1343 = (*(P1015)rt_nil_check(F->names_1343)).next;
}
F->more_1342 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1348 = NULL;
F->ntail_1349 = NULL;
F->more_1342 = 1;
while (rt_r_echk(F->more_1342)) {
F->it_1350 = NULL;
F->it_1350 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).ival = ((rt_int)5LL);
}
(*(P1015)rt_nil_check(F->it_1350)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1015)rt_nil_check(F->it_1350)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1348, &F->ntail_1349, F->it_1350);
F->more_1342 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1339)).d = F->nhead_1348;
}
(*(P1015)rt_nil_check(F->x_1339)).a = F->head_1340;
(*(P1015)rt_nil_check(F->x_1339)).b = f_declaration_123();
(*(P1015)rt_nil_check(F->x_1339)).name = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->x_1339)).b)).name;
F->result_ = F->x_1339;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1351 = NULL;
F->tail_1352 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1353 = RT_R_EUNDEF;
F->more_1353 = 1;
while (rt_r_echk(F->more_1353)) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1354 = NULL;
F->n_1354 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->n_1354)).name = f_expect_id_93();
f_append_69(&F->head_1351, &F->tail_1352, F->n_1354);
} else {
f_append_69(&F->head_1351, &F->tail_1352, f_p_subtype_96());
}
F->more_1353 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1351;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1355 = NULL;
F->x_1355 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
F->dummy_1356 = RT_R_EUNDEF;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1355)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1355)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1355)).a = f_formal_params_134();
}
F->dummy_1356 = f_imports_list_136(F->x_1355);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1015)rt_nil_check(F->x_1355)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1008)rt_nil_check(f_expect_id_93()))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1355)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1355)).name))->all)); b_; }));
}
F->result_ = F->x_1355;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1357 = NULL;
F->x_1357 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1015)rt_nil_check(F->x_1357)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1358 = NULL;
F->tail_1359 = NULL;
F->more_1360 = RT_R_EUNDEF;
F->more_1360 = 1;
while (rt_r_echk(F->more_1360)) {
F->n_1361 = NULL;
F->n_1361 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1015)rt_nil_check(F->n_1361)).ival = ((rt_int)1LL);
}
(*(P1015)rt_nil_check(F->n_1361)).name = f_definable_name_139();
f_append_69(&F->head_1358, &F->tail_1359, F->n_1361);
F->more_1360 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1357)).a = F->head_1358;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1015)rt_nil_check(F->x_1357)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1015)rt_nil_check(F->x_1357)).flag = rt_add(rt_r_ichk((*(P1015)rt_nil_check(F->x_1357)).flag), ((rt_int)2LL));
}
(*(P1015)rt_nil_check(F->x_1357)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1357)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1357)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1362 = NULL;
F->tail_1363 = NULL;
F->more_1364 = RT_R_EUNDEF;
F->more_1364 = 1;
while (rt_r_echk(F->more_1364)) {
F->n_1365 = NULL;
F->n_1365 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1366 = NULL;
F->tgt_1366 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->n_1365)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1015)rt_nil_check(F->tgt_1366)).name = f_definable_name_139();
(*(P1015)rt_nil_check(F->n_1365)).a = F->tgt_1366;
f_append_69(&F->head_1362, &F->tail_1363, F->n_1365);
F->more_1364 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1015)rt_nil_check(F->x_1357)).c = F->head_1362;
}
F->result_ = F->x_1357;
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

static P1015 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1367 = NULL;
F->ltail_1368 = NULL;
F->match_1369 = NULL;
F->s_1370 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1367, &F->ltail_1368, f_name_node_94());
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1008)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1369 = f_expect_id_93();
}
F->s_1370 = f_unlabeled_statement_150();
if ((F->match_1369 != NULL)) {
if ((((((((rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1008)rt_nil_check(f_expect_id_93()))->all), (((P1008)rt_nil_check(F->match_1369))->all)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_1370)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1008)rt_nil_check(F->match_1369))->all)); b_; }));
}
(*(P1015)rt_nil_check(F->s_1370)).tag = F->match_1369;
}
(*(P1015)rt_nil_check(F->s_1370)).labels = F->labels_1367;
F->result_ = F->s_1370;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1371 = RT_R_IUNDEF;
F->line_1371 = f_cur_line_72();
F->x_1372 = NULL;
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
F->x_1372 = f_nn_65((((rt_int)25LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)27LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).name = f_expect_id_93();
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)28LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1015)rt_nil_check(F->x_1372)).a = f_expr_107();
}
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)29LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).name = f_expect_id_93();
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)30LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).name = f_expect_id_93();
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), rt_r_ichk(F->line_1371));
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)34LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1372)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1372)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1015)rt_nil_check(F->x_1372)).a = f_postfix_117();
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1373 = NULL;
F->tail_1374 = NULL;
F->x_1372 = f_nn_65((((rt_int)35LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1375 = NULL;
F->itail_1376 = NULL;
F->more_1377 = RT_R_EUNDEF;
F->more_1377 = 1;
while (rt_r_echk(F->more_1377)) {
f_append_69(&F->invs_1375, &F->itail_1376, f_postfix_117());
F->more_1377 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1373, &F->tail_1374, f_arm_154(F->invs_1375, f_body_121(), rt_r_ichk(F->line_1371)));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1015)rt_nil_check(F->x_1372)).a = F->head_1373;
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)36LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1372)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1372;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)32LL)), rt_r_ichk(F->line_1371));
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1372)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1015)rt_nil_check(F->x_1372)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1015)rt_nil_check(F->x_1372)).c = f_expr_107();
}
F->result_ = F->x_1372;
goto ret_;
}
{
F->target_1378 = NULL;
F->target_1378 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1372 = f_nn_65((((rt_int)20LL)), rt_r_ichk(F->line_1371));
(*(P1015)rt_nil_check(F->x_1372)).a = F->target_1378;
(*(P1015)rt_nil_check(F->x_1372)).b = f_expr_107();
} else {
F->x_1372 = f_nn_65((((rt_int)21LL)), rt_r_ichk(F->line_1371));
(*(P1015)rt_nil_check(F->x_1372)).a = F->target_1378;
}
}
F->result_ = F->x_1372;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_arm_154(P1015 cond_151, P1015 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1379 = NULL;
F->x_1379 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1015)rt_nil_check(F->x_1379)).a = F->cond_151;
(*(P1015)rt_nil_check(F->x_1379)).b = F->b_152;
F->result_ = F->x_1379;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1380 = NULL;
F->x_1380 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1381 = NULL;
F->tail_1382 = NULL;
F->cond_1383 = NULL;
F->go_1384 = RT_R_EUNDEF;
F->go_1384 = 1;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
F->cond_1383 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1381, &F->tail_1382, f_arm_154(F->cond_1383, f_body_121(), rt_r_ichk((*(P1015)rt_nil_check(F->x_1380)).line)));
while (rt_r_echk(F->go_1384)) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1383 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1381, &F->tail_1382, f_arm_154(F->cond_1383, f_body_121(), rt_r_ichk((*(P1015)rt_nil_check(F->x_1380)).line)));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1015)rt_nil_check(F->x_1380)).flag = ((rt_int)1LL);
(*(P1015)rt_nil_check(F->x_1380)).b = f_body_121();
} else {
F->go_1384 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1380)).a = F->head_1381;
F->result_ = F->x_1380;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1385 = NULL;
F->x_1385 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1386 = NULL;
F->tail_1387 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1385)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1388 = NULL;
F->ltail_1389 = NULL;
F->more_1390 = RT_R_EUNDEF;
F->more_1390 = 1;
while (rt_r_echk(F->more_1390)) {
F->l_1391 = NULL;
F->l_1391 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->l_1391)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1015)rt_nil_check(F->l_1391)).b = f_expr_107();
}
f_append_69(&F->labs_1388, &F->ltail_1389, F->l_1391);
F->more_1390 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1386, &F->tail_1387, f_arm_154(F->labs_1388, f_body_121(), rt_r_ichk((*(P1015)rt_nil_check(F->x_1385)).line)));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1385)).flag = ((rt_int)1LL);
(*(P1015)rt_nil_check(F->x_1385)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1015)rt_nil_check(F->x_1385)).b = F->head_1386;
F->result_ = F->x_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1392 = NULL;
F->x_1392 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1015)rt_nil_check(F->x_1392)).flag = ((rt_int)1LL);
(*(P1015)rt_nil_check(F->x_1392)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1015)rt_nil_check(F->x_1392)).ival = ((rt_int)1LL);
}
(*(P1015)rt_nil_check(F->x_1392)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1015)rt_nil_check(F->x_1392)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1015)rt_nil_check(F->x_1392)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1392;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1393 = NULL;
F->x_1393 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1394 = NULL;
F->tail_1395 = NULL;
g_tpos_1048 = rt_add(rt_r_ichk(g_tpos_1048), ((rt_int)1LL));
(*(P1015)rt_nil_check(F->x_1393)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1396 = NULL;
F->h_1396 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1015)rt_nil_check(F->h_1396)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1015)rt_nil_check(F->h_1396)).b = f_body_121();
f_append_69(&F->head_1394, &F->tail_1395, F->h_1396);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1015)rt_nil_check(F->x_1393)).flag = ((rt_int)1LL);
(*(P1015)rt_nil_check(F->x_1393)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1015)rt_nil_check(F->x_1393)).b = F->head_1394;
F->result_ = F->x_1393;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1397 = NULL;
F->tail_1398 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1399 = NULL;
F->pr_1399 = (*(P1010)rt_nil_check(({ A1014 b_ = (((P1012)rt_nil_check(g_toks_1046))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1048), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1400 = NULL;
F->u_1400 = f_capsule_decl_141();
(*(P1015)rt_nil_check(F->u_1400)).prags = F->pr_1399;
f_append_69(&F->head_1397, &F->tail_1398, F->u_1400);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1397;
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
F->h_1401 = RT_R_IUNDEF;
F->h_1401 = ((rt_int)0LL);
{ rt_int lo1403 = ((rt_int)1LL), hi1404 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1405 = lo1403; it1405 <= hi1404; it1405++) {
F->i_1402 = it1405;
F->h_1401 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1401), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_160), F->i_1402))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1401);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1406 = NULL;
F->y_1406 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1056 != NULL)) {
while ((F->y_1406 != NULL)) {
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_1406)).depth) >= rt_r_ichk(g_gdepth_1088)) && rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1406)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1406;
goto ret_;
}
F->y_1406 = (*(P1025)rt_nil_check(F->y_1406)).chain;
}
F->y_1406 = ({ A1031 b_ = (((P1029)rt_nil_check(g_genv_1056))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1406 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1406)).name))->all), (*F->name_162))) {
F->result_ = F->y_1406;
goto ret_;
}
F->y_1406 = (*(P1025)rt_nil_check(F->y_1406)).chain;
}
F->y_1406 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1406 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1406)).name))->all), (*F->name_162))) {
F->result_ = F->y_1406;
goto ret_;
}
F->y_1406 = (*(P1025)rt_nil_check(F->y_1406)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_lookup_decl_165(P1015 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1407 = NULL;
F->y_1407 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1407 != NULL)) {
if (((*(P1025)rt_nil_check(F->y_1407)).decl == F->d_164)) {
F->result_ = F->y_1407;
goto ret_;
}
F->y_1407 = (*(P1025)rt_nil_check(F->y_1407)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1025 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1408 = RT_R_IUNDEF;
F->h_1408 = f_hash_161(&(((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_166)).name))->all));
F->z_1409 = NULL;
F->z_1409 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(rt_r_ichk(F->h_1408), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1409 != NULL)) {
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->z_1409)).depth) == rt_r_ichk(g_depth_1058)) && rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->z_1409)).name))->all), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1409)) && (rt_r_ichk((*(P1025)rt_nil_check(F->z_1409)).kind) == rt_r_ichk((*(P1025)rt_nil_check(F->y_166)).kind))) && (!(f_same_signature_176((*(P1025)rt_nil_check(F->y_166)).params, (*(P1025)rt_nil_check(F->z_1409)).params) && f_same_tt_173((*(P1025)rt_nil_check(F->y_166)).decl, (*(P1025)rt_nil_check(F->z_1409)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1409 = (*(P1025)rt_nil_check(F->z_1409)).chain;
}
(*(P1025)rt_nil_check(F->y_166)).depth = rt_r_ichk(g_depth_1058);
(*(P1025)rt_nil_check(F->y_166)).chain = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(rt_r_ichk(F->h_1408), b_.lo, b_.hi) - b_.lo)]; });
(((P1029)rt_nil_check(g_table_1055))->all).p[(rt_index(rt_r_ichk(F->h_1408), (((P1029)rt_nil_check(g_table_1055))->all).lo, (((P1029)rt_nil_check(g_table_1055))->all).hi) - (((P1029)rt_nil_check(g_table_1055))->all).lo)] = F->y_166;
(*(P1025)rt_nil_check(F->y_166)).stack = g_scope_stack_1059;
g_scope_stack_1059 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1025 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_169)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_169)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_169)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_169)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1015 a_171, P1015 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1410 = NULL;
F->y_1411 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1410 = (*(P1015)rt_nil_check(F->a_171)).e;
F->y_1411 = (*(P1015)rt_nil_check(F->b_172)).e;
while (((F->x_1410 != NULL) && (F->y_1411 != NULL))) {
if ((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1410)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->y_1411)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1410 = (*(P1015)rt_nil_check(F->x_1410)).next;
F->y_1411 = (*(P1015)rt_nil_check(F->y_1411)).next;
}
F->result_ = ((F->x_1410 == NULL) && (F->y_1411 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1027 a_174, P1027 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1412 = NULL;
F->x_1412 = F->a_174;
F->y_1413 = NULL;
F->y_1413 = F->b_175;
while (((F->x_1412 != NULL) && (F->y_1413 != NULL))) {
if ((!f_same_221((*(P1027)rt_nil_check(F->x_1412)).t, (*(P1027)rt_nil_check(F->y_1413)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1412 = (*(P1027)rt_nil_check(F->x_1412)).next;
F->y_1413 = (*(P1027)rt_nil_check(F->y_1413)).next;
}
F->result_ = ((F->x_1412 == NULL) && (F->y_1413 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1058 = rt_add(rt_r_ichk(g_depth_1058), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1059 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(g_scope_stack_1059)).depth) == rt_r_ichk(g_depth_1058)))) {
(((P1029)rt_nil_check(g_table_1055))->all).p[(rt_index(f_hash_161(&(((P1008)rt_nil_check((*(P1025)rt_nil_check(g_scope_stack_1059)).name))->all)), (((P1029)rt_nil_check(g_table_1055))->all).lo, (((P1029)rt_nil_check(g_table_1055))->all).hi) - (((P1029)rt_nil_check(g_table_1055))->all).lo)] = (*(P1025)rt_nil_check(g_scope_stack_1059)).chain;
g_scope_stack_1059 = (*(P1025)rt_nil_check(g_scope_stack_1059)).stack;
}
g_depth_1058 = rt_sub(rt_r_ichk(g_depth_1058), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1025 f_new_sym_181(rt_int kind_179, P1008 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1414 = NULL;
{ R1026 *cell1415 = rt_alloc(sizeof(R1026));
(*cell1415).name = NULL;
(*cell1415).t = NULL;
(*cell1415).c = NULL;
(*cell1415).access = NULL;
(*cell1415).cname = NULL;
(*cell1415).st = NULL;
(*cell1415).decl = NULL;
(*cell1415).params = NULL;
(*cell1415).result = NULL;
(*cell1415).members = NULL;
(*cell1415).mnext = NULL;
(*cell1415).binds = NULL;
(*cell1415).insts = NULL;
(*cell1415).env = NULL;
(*cell1415).chain = NULL;
(*cell1415).stack = NULL;
(*cell1415).owner = NULL;
(*cell1415).gctx = NULL;
(*cell1415).mv = NULL;
(*cell1415).reqs = NULL;
(*cell1415).home = NULL;
(*cell1415).capn = NULL;
(*cell1415).tbinds = NULL;
(*cell1415).loc = NULL;
(*cell1415).reqs_sym = NULL;
F->y_1414 = cell1415;
}
(*(P1025)rt_nil_check(F->y_1414)).kind = F->kind_179;
(*(P1025)rt_nil_check(F->y_1414)).name = F->name_180;
F->result_ = F->y_1414;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1416 = NULL;
{ R1022 *cell1417 = rt_alloc(sizeof(R1022));
(*cell1417).name = NULL;
(*cell1417).lits = NULL;
(*cell1417).elem = NULL;
(*cell1417).idx = NULL;
(*cell1417).idx2 = NULL;
(*cell1417).elemcons = NULL;
(*cell1417).elemst = NULL;
(*cell1417).under = NULL;
(*cell1417).tparams = NULL;
(*cell1417).ocap = NULL;
(*cell1417).fields = NULL;
(*cell1417).target = NULL;
(*cell1417).decl = NULL;
(*cell1417).cname = NULL;
(*cell1417).initp = NULL;
(*cell1417).finalp = NULL;
(*cell1417).tpsyms = NULL;
(*cell1417).gen = NULL;
(*cell1417).gbinds = NULL;
(*cell1417).next = NULL;
(*cell1417).idxs = NULL;
(*cell1417).assignp = NULL;
(*cell1417).eqp = NULL;
(*cell1417).ltp = NULL;
(*cell1417).repn = NULL;
F->t_1416 = cell1417;
}
(*(P1021)rt_nil_check(F->t_1416)).kind = F->kind_182;
F->result_ = F->t_1416;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1017 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1418 = NULL;
{ R1018 *cell1419 = rt_alloc(sizeof(R1018));
(*cell1419).lo = NULL;
(*cell1419).hi = NULL;
(*cell1419).lo2 = NULL;
(*cell1419).hi2 = NULL;
(*cell1419).slen = NULL;
(*cell1419).args = NULL;
(*cell1419).prec = NULL;
(*cell1419).bnds = NULL;
F->c_1418 = cell1419;
}
F->result_ = F->c_1418;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1021 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && (((rt_r_ichk((*(P1021)rt_nil_check(F->t_185)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_185)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_185)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1021 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1017 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1420 = NULL;
F->p_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P1017)rt_nil_check(F->c_189)).dyn)) || (rt_r_ichk((*(P1017)rt_nil_check(F->c_189)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1422 = ((rt_int)1LL), hi1423 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1017)rt_nil_check(F->c_189)).lvl));
for (rt_int it1424 = lo1422; it1424 <= hi1423; it1424++) {
F->i_1421 = it1424;
F->p_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->p_1420))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->p_1420))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1017 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1017 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1021 t_196, P1017 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1017)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_196)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_196)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1021 t_199, P1017 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1017)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_199)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_199)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1021)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_1071))) {
F->g_1425 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1425), rt_str(";", 1)); b_; }));
g_st_field_1077 = f_mk_3(&F->g_1425);
F->result_ = F->g_1425;
goto ret_;
}
{
F->f_1426 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1426), rt_str(";", 1)); b_; }));
g_st_field_1077 = f_mk_3(&F->f_1426);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1426);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1017 f_copy_cons_206(P1017 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1427 = NULL;
{ R1018 *cell1428 = rt_alloc(sizeof(R1018));
(*cell1428).lo = NULL;
(*cell1428).hi = NULL;
(*cell1428).lo2 = NULL;
(*cell1428).hi2 = NULL;
(*cell1428).slen = NULL;
(*cell1428).args = NULL;
(*cell1428).prec = NULL;
(*cell1428).bnds = NULL;
F->r_1427 = cell1428;
}
(*(P1017)rt_nil_check(F->r_1427)).lo = (*(P1017)rt_nil_check(F->c_205)).lo;
(*(P1017)rt_nil_check(F->r_1427)).hi = (*(P1017)rt_nil_check(F->c_205)).hi;
(*(P1017)rt_nil_check(F->r_1427)).lo2 = (*(P1017)rt_nil_check(F->c_205)).lo2;
(*(P1017)rt_nil_check(F->r_1427)).hi2 = (*(P1017)rt_nil_check(F->c_205)).hi2;
(*(P1017)rt_nil_check(F->r_1427)).slen = (*(P1017)rt_nil_check(F->c_205)).slen;
(*(P1017)rt_nil_check(F->r_1427)).mlo = rt_r_ichk((*(P1017)rt_nil_check(F->c_205)).mlo);
(*(P1017)rt_nil_check(F->r_1427)).mhi = rt_r_ichk((*(P1017)rt_nil_check(F->c_205)).mhi);
(*(P1017)rt_nil_check(F->r_1427)).hasm = rt_r_echk((*(P1017)rt_nil_check(F->c_205)).hasm);
(*(P1017)rt_nil_check(F->r_1427)).args = (*(P1017)rt_nil_check(F->c_205)).args;
(*(P1017)rt_nil_check(F->r_1427)).dyn = rt_r_echk((*(P1017)rt_nil_check(F->c_205)).dyn);
(*(P1017)rt_nil_check(F->r_1427)).lvl = rt_r_ichk((*(P1017)rt_nil_check(F->c_205)).lvl);
(*(P1017)rt_nil_check(F->r_1427)).prec = (*(P1017)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1427;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1017 f_freeze_209(P1017 c_207, P1021 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1429 = NULL;
F->saved_field_1430 = NULL;
F->saved_field_1430 = g_st_field_1077;
if ((((((F->c_207 == NULL) || ((*(P1017)rt_nil_check(F->c_207)).lo == NULL)) || rt_r_echk((*(P1017)rt_nil_check(F->c_207)).hasm)) || rt_r_echk((*(P1017)rt_nil_check(F->c_207)).dyn)) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1429 = f_copy_cons_206(F->c_207);
{
F->ct_1431 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1432 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1431));
F->lf_1433 = rt_str_copy((((P1008)rt_nil_check(g_st_field_1077))->all));
F->ha_1434 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1431));
F->hf_1435 = rt_str_copy((((P1008)rt_nil_check(g_st_field_1077))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1432, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1434), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1071)) {
(*(P1017)rt_nil_check(F->r_1429)).lo = f_mk_3(&F->lf_1433);
(*(P1017)rt_nil_check(F->r_1429)).hi = f_mk_3(&F->hf_1435);
(*(P1017)rt_nil_check(F->r_1429)).dyn = 1;
(*(P1017)rt_nil_check(F->r_1429)).lvl = rt_r_ichk(g_cur_level_1072);
} else {
(*(P1017)rt_nil_check(F->r_1429)).lo = f_mk_3(&F->la_1432);
(*(P1017)rt_nil_check(F->r_1429)).hi = f_mk_3(&F->ha_1434);
(*(P1017)rt_nil_check(F->r_1429)).dyn = 0;
}
}
g_st_field_1077 = F->saved_field_1430;
F->result_ = F->r_1429;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1021 t_210, P1017 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_210)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P1017)rt_nil_check(F->c_211)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1017)rt_nil_check(F->c_211)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1017)rt_nil_check(F->c_211)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P1017)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_210)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_216(P1015 a_214, P1015 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1436 = NULL;
F->x_1436 = F->a_214;
F->y_1437 = NULL;
F->y_1437 = F->b_215;
while (((F->x_1436 != NULL) && (F->y_1437 != NULL))) {
if ((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_1436)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->y_1437)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1436 = (*(P1015)rt_nil_check(F->x_1436)).next;
F->y_1437 = (*(P1015)rt_nil_check(F->y_1437)).next;
}
F->result_ = ((F->x_1436 == NULL) && (F->y_1437 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_str_elem_218(P1021 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1021)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1102;
goto ret_;
}
F->result_ = (*(P1021)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1021 a_219, P1021 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) != rt_r_ichk((*(P1021)rt_nil_check(F->b_220)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if (((((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1021)rt_nil_check(F->a_219)).lits, (*(P1021)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)6LL)))) {
F->x_1438 = NULL;
F->x_1438 = (*(P1021)rt_nil_check(F->a_219)).idxs;
F->y_1439 = NULL;
F->y_1439 = (*(P1021)rt_nil_check(F->b_220)).idxs;
while (((F->x_1438 != NULL) && (F->y_1439 != NULL))) {
if ((!f_same_221((*(P1036)rt_nil_check(F->x_1438)).t, (*(P1036)rt_nil_check(F->y_1439)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1438 = (*(P1036)rt_nil_check(F->x_1438)).next;
F->y_1439 = (*(P1036)rt_nil_check(F->y_1439)).next;
}
F->result_ = (((F->x_1438 == NULL) && (F->y_1439 == NULL)) && f_same_221((*(P1021)rt_nil_check(F->a_219)).elem, (*(P1021)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1021)rt_nil_check(F->a_219)).elem, (*(P1021)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->a_219)).kind) == (((rt_int)17LL))))) {
F->f_1440 = NULL;
F->f_1440 = (*(P1021)rt_nil_check(F->a_219)).fields;
F->g_1441 = NULL;
F->g_1441 = (*(P1021)rt_nil_check(F->b_220)).fields;
while (((F->f_1440 != NULL) && (F->g_1441 != NULL))) {
if (((!rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1440)).name))->all), (((P1008)rt_nil_check((*(P1023)rt_nil_check(F->g_1441)).name))->all))) || (!f_same_221((*(P1023)rt_nil_check(F->f_1440)).t, (*(P1023)rt_nil_check(F->g_1441)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1440 = (*(P1023)rt_nil_check(F->f_1440)).next;
F->g_1441 = (*(P1023)rt_nil_check(F->g_1441)).next;
}
F->result_ = ((F->f_1440 == NULL) && (F->g_1441 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_base_of_223(P1021 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_222)).kind) == (((rt_int)15LL)))) && ((*(P1021)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1021)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1017 f_base_cons_226(P1021 t_224, P1017 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_224)).kind) == (((rt_int)15LL)))) && ((*(P1021)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1021)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1021)rt_nil_check(F->t_224)).under, (*(P1021)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1021 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1442 = rt_r_ichk((*(P1021)rt_nil_check(F->t_227)).kind);
if (0 || (sel1442 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1442 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1442 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1021 got_229, P1021 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->got_229)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_230)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1021 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1443 = rt_r_ichk((*(P1021)rt_nil_check(F->t_233)).kind);
if (0 || (sel1443 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)2LL))) || (sel1443 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1443 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1021)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if (((((rt_r_ichk((*(P1021)rt_nil_check(F->t_233)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_233)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P1021)rt_nil_check(F->t_233)).forward)) && (!rt_r_echk((*(P1021)rt_nil_check(F->t_233)).defined)))) {
(*(P1021)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1021 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_235)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_238(P1021 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1444 = NULL;
F->f_1444 = (*(P1021)rt_nil_check(F->t_237)).fields;
F->s_1445 = NULL;
F->s_1445 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1444 != NULL)) {
F->s_1445 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->s_1445))->all), f_ctype_234((*(P1023)rt_nil_check(F->f_1444)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1444)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1444 = (*(P1023)rt_nil_check(F->f_1444)).next;
}
F->result_ = (((P1008)rt_nil_check(F->s_1445))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1021 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1446 = NULL;
F->u_1446 = g_all_types_1060;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1021)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_464(F->t_239);
if (((*(P1021)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) != (((rt_int)8LL)))) {
while ((F->u_1446 != NULL)) {
if (((rt_r_ichk((*(P1021)rt_nil_check(F->u_1446)).kind) == rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind)) && f_same_221(F->u_1446, F->t_239))) {
(*(P1021)rt_nil_check(F->t_239)).cname = (*(P1021)rt_nil_check(F->u_1446)).cname;
goto ret_;
}
F->u_1446 = (*(P1021)rt_nil_check(F->u_1446)).next;
}
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1021)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1021)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
(*(P1021)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
(*(P1021)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)17LL))))) {
(*(P1021)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1021)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1021)rt_nil_check(F->t_239)).next = g_all_types_1060;
g_all_types_1060 = F->t_239;
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1021)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1447 = NULL;
F->p_1447 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).decl)).b;
F->fs_1448 = NULL;
F->fs_1448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1449 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1447 != NULL)) {
F->pc_1450 = NULL;
F->fs_1448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->fs_1448))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1447)).a, &F->pc_1450))), rt_str(" p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1447)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1447 = (*(P1015)rt_nil_check(F->p_1447)).next;
}
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1449), rt_str(" *", 2)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1449), rt_str(" {", 2)), (((P1008)rt_nil_check(F->fs_1448))->all)), rt_str(" ", 1)), f_ctype_234((*(P1021)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL)))) {
F->target_1451 = NULL;
F->target_1451 = (*(P1021)rt_nil_check(F->t_239)).target;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->target_1451)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->target_1451)).kind) == (((rt_int)17LL))))) {
if (((*(P1021)rt_nil_check(F->target_1451)).cname == NULL)) {
(*(P1021)rt_nil_check(F->target_1451)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1021)rt_nil_check(F->target_1451)).next = g_all_types_1060;
g_all_types_1060 = F->target_1451;
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->target_1451)).cname))->all)), rt_str(" ", 1)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->target_1451)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1021)rt_nil_check(F->target_1451)).forward = 1;
}
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->target_1451)).cname))->all)), rt_str(" *", 2)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1451)), rt_str(" *", 2)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1021)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
F->p_1452 = NULL;
F->p_1452 = (*(P1021)rt_nil_check(F->t_239)).tparams;
F->fs_1453 = NULL;
F->fs_1453 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1452 != NULL)) {
F->fs_1453 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->fs_1453))->all), f_ctype_234(f_tparam_type_352(F->t_239, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1452)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1452)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1452 = (*(P1015)rt_nil_check(F->p_1452)).next;
}
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1008)rt_nil_check(F->fs_1453))->all)), f_ctype_234((*(P1021)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1021)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1062, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_246(P1021 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1454 = NULL;
F->r_1454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1456 = ((rt_int)3LL), hi1457 = rt_r_ichk((*(P1021)rt_nil_check(F->t_245)).ndim);
for (rt_int it1458 = lo1456; it1458 <= hi1457; it1458++) {
F->k_1455 = it1458;
F->r_1454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1454))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1455)), rt_str(", ", 2)), f_dim_hi_244(F->k_1455)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1008)rt_nil_check(F->r_1454))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1021 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1459 = NULL;
F->r_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1461 = ((rt_int)3LL), hi1462 = rt_r_ichk((*(P1021)rt_nil_check(F->t_247)).ndim);
for (rt_int it1463 = lo1461; it1463 <= hi1462; it1463++) {
F->k_1460 = it1463;
F->r_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1459))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1460)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1460)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->r_1459))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1008 f_cons_lo_252(P1017 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1464 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1017)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1017)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1464 = (*(P1017)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1466 = ((rt_int)1LL), hi1467 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1468 = lo1466; it1468 <= hi1467; it1468++) {
F->i_1465 = it1468;
if ((F->l_1464 != NULL)) {
F->l_1464 = (*(P1019)rt_nil_check(F->l_1464)).next;
}
}
}
if ((F->l_1464 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1019)rt_nil_check(F->l_1464)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1008 f_cons_hi_255(P1017 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1469 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1017)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1017)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1469 = (*(P1017)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1471 = ((rt_int)1LL), hi1472 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1473 = lo1471; it1473 <= hi1472; it1473++) {
F->i_1470 = it1473;
if ((F->l_1469 != NULL)) {
F->l_1469 = (*(P1019)rt_nil_check(F->l_1469)).next;
}
}
}
if ((F->l_1469 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1019)rt_nil_check(F->l_1469)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_idx_type_258(P1021 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1474 = NULL;
F->l_1474 = (*(P1021)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1476 = ((rt_int)2LL), hi1477 = F->k_257;
for (rt_int it1478 = lo1476; it1478 <= hi1477; it1478++) {
F->i_1475 = it1478;
F->l_1474 = (*(P1036)rt_nil_check(F->l_1474)).next;
}
}
F->result_ = (*(P1036)rt_nil_check(F->l_1474)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1479 = NULL;
F->tail_1480 = NULL;
F->start_1481 = RT_R_IUNDEF;
F->start_1481 = ((rt_int)1LL);
{ rt_int lo1483 = ((rt_int)1LL), hi1484 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1485 = lo1483; it1485 <= hi1484; it1485++) {
F->i_1482 = it1485;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1482) == 32)) {
F->lit_1486 = NULL;
F->lit_1486 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1015)rt_nil_check(F->lit_1486)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1481), rt_sub(F->i_1482, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1479, &F->tail_1480, F->lit_1486);
F->start_1481 = rt_add(F->i_1482, ((rt_int)1LL));
}
}
}
g_ty_ascii_1102 = f_new_typ_183((((rt_int)4LL)));
(*(P1021)rt_nil_check(g_ty_ascii_1102)).lits = F->head_1479;
(*(P1021)rt_nil_check(g_ty_ascii_1102)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1487 = NULL;
F->t2_1488 = NULL;
F->l1_1489 = NULL;
F->l1_1489 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1490 = NULL;
F->l2_1490 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1491 = NULL;
F->l3_1491 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1015)rt_nil_check(F->l1_1489)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1015)rt_nil_check(F->l2_1490)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1015)rt_nil_check(F->l3_1491)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1487, &F->t2_1488, F->l1_1489);
f_append_69(&F->h2_1487, &F->t2_1488, F->l2_1490);
f_append_69(&F->h2_1487, &F->t2_1488, F->l3_1491);
g_file_mode_type_1110 = f_new_typ_183((((rt_int)4LL)));
(*(P1021)rt_nil_check(g_file_mode_type_1110)).lits = F->h2_1487;
}
g_file_state_type_1114 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1115 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1116 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1113 = f_new_typ_183((((rt_int)10LL)));
(*(P1021)rt_nil_check(g_ty_text_file_1113)).elem = g_ty_ascii_1102;
g_ty_send_st_1111 = f_new_typ_183((((rt_int)1LL)));
(*(P1021)rt_nil_check(g_ty_send_st_1111)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1112 = f_new_typ_183((((rt_int)1LL)));
(*(P1021)rt_nil_check(g_ty_receive_st_1112)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1021 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1492 = NULL;
F->t_1492 = f_new_typ_183((((rt_int)4LL)));
F->l1_1493 = NULL;
F->l1_1493 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1494 = NULL;
F->l2_1494 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1015)rt_nil_check(F->l1_1493)).name = f_mk_3(&(*F->a_260));
(*(P1015)rt_nil_check(F->l2_1494)).name = f_mk_3(&(*F->b_261));
(*(P1015)rt_nil_check(F->l1_1493)).next = F->l2_1494;
(*(P1021)rt_nil_check(F->t_1492)).lits = F->l1_1493;
F->result_ = F->t_1492;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1015 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1495 = RT_R_IUNDEF;
F->i_1495 = ((rt_int)0LL);
F->l_1496 = NULL;
F->l_1496 = F->lits_263;
while ((F->l_1496 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->l_1496)).name))->all), (*F->name_264))) {
F->result_ = rt_r_ichk(F->i_1495);
goto ret_;
}
F->i_1495 = rt_add(rt_r_ichk(F->i_1495), ((rt_int)1LL));
F->l_1496 = (*(P1015)rt_nil_check(F->l_1496)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_resolve_subtype_268(P1015 st_266, P1017 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1497 = NULL;
F->ok_1498 = RT_R_EUNDEF;
F->dummy_1499 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1500 = rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).kind);
if (0 || (sel1500 == (((rt_int)70LL)))) {
if (((*(P1015)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).a, g_ty_int_1099, &F->dummy_1499); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).b, g_ty_int_1099, &F->dummy_1499); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).mlo = f_manifest_366((*(P1015)rt_nil_check(F->st_266)).a, &F->ok_1498);
(*(P1017)rt_nil_check(F->c_267v)).hasm = rt_r_echk(F->ok_1498);
(*(P1017)rt_nil_check(F->c_267v)).mhi = f_manifest_366((*(P1015)rt_nil_check(F->st_266)).b, &F->ok_1498);
(*(P1017)rt_nil_check(F->c_267v)).hasm = (rt_r_echk((*(P1017)rt_nil_check(F->c_267v)).hasm) && rt_r_echk(F->ok_1498));
}
F->result_ = g_ty_int_1099;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)71LL)))) {
if (((*(P1015)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).a, g_ty_int_1099, &F->dummy_1499); b_; }));
}
if (((*(P1015)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).b, g_ty_float_1101, &F->dummy_1499); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).c, g_ty_float_1101, &F->dummy_1499); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1015)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1015)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1101;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)72LL)))) {
F->t_1497 = f_new_typ_183((((rt_int)4LL)));
(*(P1021)rt_nil_check(F->t_1497)).lits = (*(P1015)rt_nil_check(F->st_266)).a;
if (((*(P1015)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).b, F->t_1497, &F->dummy_1499); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).c, F->t_1497, &F->dummy_1499); b_; }));
if (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_266)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_266)).c)).kind) == (((rt_int)4LL))))) {
(*(P1017)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1021)rt_nil_check(F->t_1497)).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1017)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1021)rt_nil_check(F->t_1497)).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1017)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)73LL)))) {
F->t_1497 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1021)rt_nil_check(f_base_of_223(F->t_1497))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1497, g_ty_ascii_1102) && ((F->c_267v == NULL) || ((*(P1017)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1497 = g_ty_string_1103;
} else {
F->et_1501 = NULL;
F->et_1501 = F->t_1497;
F->t_1497 = f_new_typ_183((((rt_int)5LL)));
(*(P1021)rt_nil_check(F->t_1497)).elem = F->et_1501;
(*(P1021)rt_nil_check(F->t_1497)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1015)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).b, g_ty_int_1099, &F->dummy_1499); b_; }));
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)74LL)))) {
{
F->ec_1502 = NULL;
F->et_1503 = NULL;
F->et_1503 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->st_266)).b, &F->ec_1502);
F->ix_1504 = NULL;
F->ix_1504 = (*(P1015)rt_nil_check(F->st_266)).a;
F->k_1505 = RT_R_IUNDEF;
F->k_1505 = ((rt_int)0LL);
F->tail_1506 = NULL;
F->btail_1507 = NULL;
F->t_1497 = f_new_typ_183((((rt_int)6LL)));
(*(P1021)rt_nil_check(F->t_1497)).elem = F->et_1503;
(*(P1021)rt_nil_check(F->t_1497)).elemcons = F->ec_1502;
(*(P1021)rt_nil_check(F->t_1497)).elemst = (*(P1015)rt_nil_check(F->st_266)).b;
(*(P1017)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1017)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1504 != NULL)) {
F->ic_1508 = NULL;
F->it_1509 = NULL;
F->it_1509 = f_resolve_subtype_268(F->ix_1504, &F->ic_1508);
F->lo_1510 = NULL;
F->hi_1511 = NULL;
F->tl_1512 = NULL;
if ((((*(P1021)rt_nil_check(f_base_of_223(F->it_1509))).kind != (((rt_int)1LL))) && ((*(P1021)rt_nil_check(f_base_of_223(F->it_1509))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1508 = f_base_cons_226(F->it_1509, F->ic_1508);
F->k_1505 = rt_add(rt_r_ichk(F->k_1505), ((rt_int)1LL));
{ R1037 *cell1513 = rt_alloc(sizeof(R1037));
(*cell1513).t = NULL;
(*cell1513).next = NULL;
F->tl_1512 = cell1513;
}
(*(P1036)rt_nil_check(F->tl_1512)).t = F->it_1509;
if ((F->tail_1506 == NULL)) {
(*(P1021)rt_nil_check(F->t_1497)).idxs = F->tl_1512;
} else {
(*(P1036)rt_nil_check(F->tail_1506)).next = F->tl_1512;
}
F->tail_1506 = F->tl_1512;
if (((F->ic_1508 != NULL) && ((*(P1017)rt_nil_check(F->ic_1508)).lo != NULL))) {
F->lo_1510 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1508); b_; }));
F->hi_1511 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1508); b_; }));
} else if (((*(P1021)rt_nil_check(f_base_of_223(F->it_1509))).kind == (((rt_int)4LL)))) {
F->lo_1510 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1511 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1021)rt_nil_check(f_base_of_223(F->it_1509))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1505) == ((rt_int)1LL))) {
(*(P1021)rt_nil_check(F->t_1497)).idx = F->it_1509;
(*(P1017)rt_nil_check(F->c_267v)).lo = F->lo_1510;
(*(P1017)rt_nil_check(F->c_267v)).hi = F->hi_1511;
} else if ((rt_r_ichk(F->k_1505) == ((rt_int)2LL))) {
(*(P1021)rt_nil_check(F->t_1497)).idx2 = F->it_1509;
(*(P1017)rt_nil_check(F->c_267v)).lo2 = F->lo_1510;
(*(P1017)rt_nil_check(F->c_267v)).hi2 = F->hi_1511;
} else if ((F->lo_1510 != NULL)) {
F->l1_1514 = NULL;
F->l2_1515 = NULL;
{ R1020 *cell1516 = rt_alloc(sizeof(R1020));
(*cell1516).s = NULL;
(*cell1516).next = NULL;
F->l1_1514 = cell1516;
}
{ R1020 *cell1517 = rt_alloc(sizeof(R1020));
(*cell1517).s = NULL;
(*cell1517).next = NULL;
F->l2_1515 = cell1517;
}
(*(P1019)rt_nil_check(F->l1_1514)).s = F->lo_1510;
(*(P1019)rt_nil_check(F->l2_1515)).s = F->hi_1511;
(*(P1019)rt_nil_check(F->l1_1514)).next = F->l2_1515;
if ((F->btail_1507 == NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).bnds = F->l1_1514;
} else {
(*(P1019)rt_nil_check(F->btail_1507)).next = F->l1_1514;
}
F->btail_1507 = F->l2_1515;
}
F->ix_1504 = (*(P1015)rt_nil_check(F->ix_1504)).next;
}
(*(P1021)rt_nil_check(F->t_1497)).ndim = rt_r_ichk(F->k_1505);
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)77LL)))) {
F->t_1497 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1518 = NULL;
(*(P1021)rt_nil_check(F->t_1497)).elem = f_resolve_subtype_268((*(P1015)rt_nil_check(F->st_266)).a, &F->ec_1518);
(*(P1021)rt_nil_check(F->t_1497)).elemcons = F->ec_1518;
if ((((*(P1021)rt_nil_check(f_base_of_223((*(P1021)rt_nil_check(F->t_1497)).elem))).kind != (((rt_int)1LL))) && ((*(P1021)rt_nil_check(f_base_of_223((*(P1021)rt_nil_check(F->t_1497)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P1021)rt_nil_check(f_base_of_223((*(P1021)rt_nil_check(F->t_1497)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1518 == NULL) || ((*(P1017)rt_nil_check(F->ec_1518)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)75LL))) || (sel1500 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).kind) == (((rt_int)76LL)))) {
F->t_1497 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1497 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1519 = NULL;
F->comp_1519 = (*(P1015)rt_nil_check(F->st_266)).a;
F->tail_1520 = NULL;
while ((F->comp_1519 != NULL)) {
F->cc_1521 = NULL;
F->f_1522 = NULL;
{ R1024 *cell1523 = rt_alloc(sizeof(R1024));
(*cell1523).name = NULL;
(*cell1523).t = NULL;
(*cell1523).c = NULL;
(*cell1523).st = NULL;
(*cell1523).next = NULL;
F->f_1522 = cell1523;
}
(*(P1023)rt_nil_check(F->f_1522)).name = (*(P1015)rt_nil_check(F->comp_1519)).name;
(*(P1023)rt_nil_check(F->f_1522)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->comp_1519)).a, &F->cc_1521);
(*(P1023)rt_nil_check(F->f_1522)).c = F->cc_1521;
(*(P1023)rt_nil_check(F->f_1522)).st = (*(P1015)rt_nil_check(F->comp_1519)).a;
if ((F->tail_1520 == NULL)) {
(*(P1021)rt_nil_check(F->t_1497)).fields = F->f_1522;
} else {
(*(P1023)rt_nil_check(F->tail_1520)).next = F->f_1522;
}
F->tail_1520 = F->f_1522;
F->comp_1519 = (*(P1015)rt_nil_check(F->comp_1519)).next;
}
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1497)).kind) == (((rt_int)17LL)))) {
F->lits_1524 = NULL;
F->ltail_1525 = NULL;
F->f_1526 = NULL;
F->f_1526 = (*(P1021)rt_nil_check(F->t_1497)).fields;
while ((F->f_1526 != NULL)) {
F->l_1527 = NULL;
F->l_1527 = f_nn_65((((rt_int)4LL)), rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line));
if (rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1526)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1015)rt_nil_check(F->l_1527)).name = (*(P1023)rt_nil_check(F->f_1526)).name;
f_append_69(&F->lits_1524, &F->ltail_1525, F->l_1527);
F->f_1526 = (*(P1023)rt_nil_check(F->f_1526)).next;
}
(*(P1021)rt_nil_check(F->t_1497)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_1497)).elem)).lits = F->lits_1524;
if (((*(P1015)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1497, (*(P1015)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)79LL)))) {
F->t_1497 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1528 = NULL;
(*(P1021)rt_nil_check(F->t_1497)).elem = f_resolve_subtype_268((*(P1015)rt_nil_check(F->st_266)).a, &F->ec_1528);
(*(P1021)rt_nil_check(F->t_1497)).elemcons = F->ec_1528;
}
(*(P1017)rt_nil_check(F->c_267v)).args = (*(P1015)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1025)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1529 = NULL;
F->gt_1529 = f_copy_node_828((*(P1015)rt_nil_check(F->st_266)).a);
(*(P1015)rt_nil_check(F->gt_1529)).next = NULL;
F->result_ = f_instantiate_type_729(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1529, (*(P1015)rt_nil_check(F->st_266)).b, &F->c_267v, rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line));
goto ret_;
}
{
F->ec_1530 = NULL;
F->t_1497 = f_new_typ_183((((rt_int)12LL)));
(*(P1021)rt_nil_check(F->t_1497)).elem = f_resolve_subtype_268((*(P1015)rt_nil_check(F->st_266)).a, &F->ec_1530);
(*(P1021)rt_nil_check(F->t_1497)).elemcons = F->ec_1530;
if (((*(P1015)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1017)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->st_266)).b, g_ty_int_1099, &F->dummy_1499); b_; }));
}
}
F->result_ = F->t_1497;
goto ret_;
} else if (0 || (sel1500 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1500 == (((rt_int)81LL)))) {
{
F->base_1531 = NULL;
F->result_ = f_value_subtype_290((*(P1015)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1531);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_270(P1015 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_269)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1015)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P1015)rt_nil_check(F->e_269)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_269)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1021 t_271, P1015 e_272, P1017 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1532 = NULL;
(*(P1017)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->e_272, (*(P1021)rt_nil_check(F->t_271)).elem, &F->dummy_1532); b_; }));
f_check_type_232(F->dummy_1532, (*(P1021)rt_nil_check(F->t_271)).elem, rt_r_ichk((*(P1015)rt_nil_check(F->e_272)).line));
(*(P1017)rt_nil_check(F->c_273)).hi = (*(P1017)rt_nil_check(F->c_273)).lo;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_272)).kind) == (((rt_int)4LL)))) {
(*(P1017)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_271)).elem)).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_272)).name))->all));
(*(P1017)rt_nil_check(F->c_273)).mhi = rt_r_ichk((*(P1017)rt_nil_check(F->c_273)).mlo);
(*(P1017)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1021 f_named_subtype_277(P1015 st_275, P1017 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1533 = NULL;
F->y_1534 = NULL;
F->y_1534 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->st_275)).name))->all));
F->name_1535 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1534 == NULL) && ((rt_str_eq(F->name_1535, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1535, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1535, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1534 == NULL)) {
if (rt_str_eq(F->name_1535, rt_str("BOOL", 4))) {
F->t_1533 = g_ty_bool_1100;
} else if (rt_str_eq(F->name_1535, rt_str("ASCII", 5))) {
F->t_1533 = g_ty_ascii_1102;
} else if (rt_str_eq(F->name_1535, rt_str("DATA_LOCK", 9))) {
F->t_1533 = g_ty_lock_1107;
} else if (rt_str_eq(F->name_1535, rt_str("LATCH", 5))) {
F->t_1533 = g_ty_latch_1108;
} else if (rt_str_eq(F->name_1535, rt_str("ACT", 3))) {
F->t_1533 = g_ty_act_1109;
} else if (rt_str_eq(F->name_1535, rt_str("INT", 3))) {
F->t_1533 = g_ty_int_1099;
} else if (rt_str_eq(F->name_1535, rt_str("SEND_ST", 7))) {
F->t_1533 = g_ty_send_st_1111;
} else if (rt_str_eq(F->name_1535, rt_str("RECEIVE_ST", 10))) {
F->t_1533 = g_ty_receive_st_1112;
} else if (rt_str_eq(F->name_1535, rt_str("FLOAT", 5))) {
F->t_1533 = g_ty_float_1101;
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1535); b_; }));
}
if (((*(P1015)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1533, (*(P1015)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1533;
goto ret_;
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_729(F->y_1534, (*(P1015)rt_nil_check(F->st_275)).a, (*(P1015)rt_nil_check(F->st_275)).b, &F->c_276v, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
goto ret_;
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1536 = NULL;
F->binds_1536 = f_tt_binds_695((*(P1025)rt_nil_check(F->y_1534)).decl, (*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b)).e, (*(P1015)rt_nil_check(F->st_275)).a, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
F->saved_env_1537 = NULL;
F->saved_env_1537 = g_genv_1056;
F->saved_gdepth_1538 = RT_R_IUNDEF;
F->saved_gdepth_1538 = rt_r_ichk(g_gdepth_1088);
f_open_scope_177();
while ((F->binds_1536 != NULL)) {
F->nb_1539 = NULL;
F->nb_1539 = (*(P1025)rt_nil_check(F->binds_1536)).mnext;
f_define_168(F->binds_1536, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
F->binds_1536 = F->nb_1539;
}
g_genv_1056 = (*(P1025)rt_nil_check(F->y_1534)).env;
g_gdepth_1088 = rt_r_ichk(g_depth_1058);
F->t_1533 = f_resolve_subtype_268((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b)).a, &F->c_276v);
g_genv_1056 = F->saved_env_1537;
g_gdepth_1088 = rt_r_ichk(F->saved_gdepth_1538);
f_close_scope_178();
if (((*(P1015)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1533, (*(P1015)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1533;
goto ret_;
}
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)5LL))) && ((*(P1025)rt_nil_check(F->y_1534)).t != NULL)) && (rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_318(F->y_1534, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)5LL))) && ((*(P1025)rt_nil_check(F->y_1534)).t != NULL)) && (rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).t)).kind) == (((rt_int)8LL))))) {
(*(P1017)rt_nil_check(F->c_276v)).args = (*(P1015)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1025)rt_nil_check(F->y_1534)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)6LL))) && ((*(P1025)rt_nil_check(F->y_1534)).decl != NULL)) && ((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1534, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)5LL)))) && ((*(P1025)rt_nil_check(F->y_1534)).t != NULL))) {
if (((*(P1025)rt_nil_check(F->y_1534)).c != NULL)) {
F->c_276v = (*(P1025)rt_nil_check(F->y_1534)).c;
}
F->t_1533 = (*(P1025)rt_nil_check(F->y_1534)).t;
} else if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)5LL))) && ((*(P1025)rt_nil_check(F->y_1534)).decl != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1534)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_318(F->y_1534, F->st_275, &F->c_276v);
goto ret_;
} else if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_1534)).kind) == (((rt_int)5LL))))) {
F->t_1533 = f_resolve_subtype_268((*(P1025)rt_nil_check(F->y_1534)).st, &F->c_276v);
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1535, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1015)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1533, (*(P1015)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1015)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1533;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1021 f_invoke_abbrev_281(P1025 y_278, P1015 st_279, P1017 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1540 = NULL;
F->p_1540 = (*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_278)).decl)).b;
F->a_1541 = NULL;
F->a_1541 = (*(P1015)rt_nil_check(F->st_279)).b;
F->t_1542 = NULL;
if ((f_list_len_71(F->p_1540) != f_list_len_71(F->a_1541))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1540))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1540 != NULL)) {
F->z_1543 = NULL;
F->z_1543 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1540)).name);
F->pc_1544 = NULL;
F->at_1545 = NULL;
F->ok_1546 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_1540)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1025)rt_nil_check(F->z_1543)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1540)).a, &F->pc_1544);
(*(P1025)rt_nil_check(F->z_1543)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789(F->a_1541, (*(P1025)rt_nil_check(F->z_1543)).t, &F->at_1545)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1545, (*(P1025)rt_nil_check(F->z_1543)).t, rt_r_ichk((*(P1015)rt_nil_check(F->st_279)).line));
(*(P1025)rt_nil_check(F->z_1543)).mvalue = f_manifest_366(F->a_1541, &F->ok_1546);
(*(P1025)rt_nil_check(F->z_1543)).hasmv = rt_r_echk(F->ok_1546);
(*(P1025)rt_nil_check(F->z_1543)).mv = f_meval_375(F->a_1541, &F->ok_1546);
if ((!rt_r_echk(F->ok_1546))) {
(*(P1025)rt_nil_check(F->z_1543)).mv = NULL;
}
(*(P1025)rt_nil_check(F->z_1543)).ro_flag = 1;
f_define_168(F->z_1543, rt_r_ichk((*(P1015)rt_nil_check(F->st_279)).line));
F->p_1540 = (*(P1015)rt_nil_check(F->p_1540)).next;
F->a_1541 = (*(P1015)rt_nil_check(F->a_1541)).next;
}
F->t_1542 = f_resolve_subtype_268((*(P1025)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1542;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1021 t_282, P1015 args_283, P1017 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1547 = NULL;
F->ok_1548 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P1015)rt_nil_check(F->args_283)).kind) != (((rt_int)16LL))) || ((*(P1015)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1017)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1547); b_; }));
f_check_type_232(F->dummy_1547, F->t_282, F->line_285);
(*(P1017)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1547); b_; }));
f_check_type_232(F->dummy_1547, F->t_282, F->line_285);
(*(P1017)rt_nil_check(F->c_284)).hasm = 0;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL)))) {
(*(P1017)rt_nil_check(F->c_284)).mlo = f_manifest_366((*(P1015)rt_nil_check(F->args_283)).a, &F->ok_1548);
(*(P1017)rt_nil_check(F->c_284)).hasm = rt_r_echk(F->ok_1548);
(*(P1017)rt_nil_check(F->c_284)).mhi = f_manifest_366((*(P1015)rt_nil_check(F->args_283)).b, &F->ok_1548);
(*(P1017)rt_nil_check(F->c_284)).hasm = (rt_r_echk((*(P1017)rt_nil_check(F->c_284)).hasm) && rt_r_echk(F->ok_1548));
} else if (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).b)).kind) == (((rt_int)4LL))))) {
(*(P1017)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1017)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1017)rt_nil_check(F->c_284)).hasm = 1;
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)3LL)))) {
(*(P1017)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->args_283, g_ty_int_1099, &F->dummy_1547); b_; }));
if (((*(P1015)rt_nil_check(F->args_283)).next != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1017)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).next)).a, g_ty_float_1101, &F->dummy_1547); b_; }));
(*(P1017)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).next)).b, g_ty_float_1101, &F->dummy_1547); b_; }));
(*(P1017)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_283)).next)).b));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)5LL)))) {
(*(P1017)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->args_283, g_ty_int_1099, &F->dummy_1547); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)12LL)))) {
(*(P1017)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->args_283, g_ty_int_1099, &F->dummy_1547); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_282)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1021 f_value_subtype_290(P1015 e_287, P1017 *c_288, P1008 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1549 = NULL;
F->c0_1550 = NULL;
F->ro_1551 = RT_R_EUNDEF;
if (f_is_lvalue_752(F->e_287)) {
f_lvalue_758(F->e_287, &F->base_289v, &F->t_1549, &F->c0_1550, &F->ro_1551);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->e_287, NULL, &F->t_1549); b_; }));
}
if ((F->c0_1550 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1550);
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1549)).kind) == (((rt_int)5LL)))) {
(*(P1017)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1549)).kind) == (((rt_int)6LL)))) {
(*(P1017)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1553 = ((rt_int)1LL), hi1554 = rt_r_ichk((*(P1021)rt_nil_check(F->t_1549)).ndim);
for (rt_int it1555 = lo1553; it1555 <= hi1554; it1555++) {
F->k_1552 = it1555;
F->lo_1556 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1552)));
F->hi_1557 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1552)));
if ((F->k_1552 == ((rt_int)1LL))) {
(*(P1017)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1556);
(*(P1017)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1557);
} else if ((F->k_1552 == ((rt_int)2LL))) {
(*(P1017)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1556);
(*(P1017)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1557);
} else {
F->l1_1558 = NULL;
F->l2_1559 = NULL;
{ R1020 *cell1560 = rt_alloc(sizeof(R1020));
(*cell1560).s = NULL;
(*cell1560).next = NULL;
F->l1_1558 = cell1560;
}
{ R1020 *cell1561 = rt_alloc(sizeof(R1020));
(*cell1561).s = NULL;
(*cell1561).next = NULL;
F->l2_1559 = cell1561;
}
(*(P1019)rt_nil_check(F->l1_1558)).s = f_mk_3(&F->lo_1556);
(*(P1019)rt_nil_check(F->l2_1559)).s = f_mk_3(&F->hi_1557);
(*(P1019)rt_nil_check(F->l1_1558)).next = F->l2_1559;
(*(P1019)rt_nil_check(F->l2_1559)).next = (*(P1017)rt_nil_check(F->c_288v)).bnds;
(*(P1017)rt_nil_check(F->c_288v)).bnds = F->l1_1558;
}
}
}
(*(P1017)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1017)rt_nil_check(F->c_288v)).bnds);
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1549)).kind) == (((rt_int)12LL)))) {
(*(P1017)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_1549)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_1549)).tparams != NULL))) {
F->p_1562 = NULL;
F->p_1562 = (*(P1021)rt_nil_check(F->t_1549)).tparams;
F->head_1563 = NULL;
F->tail_1564 = NULL;
while ((F->p_1562 != NULL)) {
F->sel_1565 = NULL;
F->sel_1565 = f_nn_65((((rt_int)11LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_287)).line));
(*(P1015)rt_nil_check(F->sel_1565)).a = F->e_287;
(*(P1015)rt_nil_check(F->sel_1565)).name = (*(P1015)rt_nil_check(F->p_1562)).name;
f_append_69(&F->head_1563, &F->tail_1564, F->sel_1565);
F->p_1562 = (*(P1015)rt_nil_check(F->p_1562)).next;
}
(*(P1017)rt_nil_check(F->c_288v)).args = F->head_1563;
}
F->result_ = F->t_1549;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1019 f_reverse_pairs_292(P1019 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1566 = NULL;
F->p_1567 = NULL;
F->p_1567 = F->l_291;
while ((F->p_1567 != NULL)) {
F->a_1568 = NULL;
F->a_1568 = F->p_1567;
F->b_1569 = NULL;
F->b_1569 = (*(P1019)rt_nil_check(F->p_1567)).next;
F->p_1567 = (*(P1019)rt_nil_check(F->b_1569)).next;
(*(P1019)rt_nil_check(F->b_1569)).next = F->r_1566;
F->r_1566 = F->a_1568;
}
F->result_ = F->r_1566;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_inquiry_295(P1015 st_293, P1017 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1570 = NULL;
F->t_1571 = NULL;
F->name_1572 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->st_293)).name))->all));
if (((*(P1015)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1572, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1572, rt_str("TYPEOF", 6))) {
F->sub_1573 = NULL;
F->sub_1573 = f_as_subtype_297((*(P1015)rt_nil_check(F->st_293)).b);
F->c2_1574 = NULL;
if ((F->sub_1573 != NULL)) {
F->t_1571 = f_resolve_subtype_268(F->sub_1573, &F->c2_1574);
} else {
F->t_1571 = f_value_subtype_290((*(P1015)rt_nil_check(F->st_293)).b, &F->c2_1574, &F->base_1570);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1571;
goto ret_;
}
F->t_1571 = f_value_subtype_290((*(P1015)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1570);
if (rt_str_eq(F->name_1572, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1571;
goto ret_;
}
{
F->k_1575 = RT_R_IUNDEF;
F->k_1575 = ((rt_int)1LL);
F->ok_1576 = RT_R_EUNDEF;
F->ok_1576 = 1;
F->ac_1577 = NULL;
F->ac_1577 = F->c_294v;
if (((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1575 = f_manifest_366((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->st_293)).b)).next, &F->ok_1576);
}
while (((rt_r_ichk((*(P1021)rt_nil_check(F->t_1571)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_1571)).tparams == NULL))) {
F->t_1571 = (*(P1021)rt_nil_check(F->t_1571)).under;
}
if (((((rt_r_ichk((*(P1021)rt_nil_check(F->t_1571)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1576))) || (rt_r_ichk(F->k_1575) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1575) > rt_r_ichk((*(P1021)rt_nil_check(F->t_1571)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1017)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1577, rt_r_ichk(F->k_1575));
(*(P1017)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1577, rt_r_ichk(F->k_1575));
F->result_ = f_idx_type_258(F->t_1571, rt_r_ichk(F->k_1575));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1015 f_as_subtype_297(P1015 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1578 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1015)rt_nil_check(F->e_296)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1578 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
(*(P1015)rt_nil_check(F->st_1578)).name = (*(P1015)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1578;
goto ret_;
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).name, (*(P1015)rt_nil_check(F->e_296)).b, NULL, rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).a)).name, (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).b, (*(P1015)rt_nil_check(F->e_296)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1579 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1580 = NULL;
F->y_1580 = f_lookup_163(&F->name_1579);
if ((rt_str_eq(F->name_1579, rt_str("INT", 3)) && (F->y_1580 == NULL))) {
if (((((*(P1015)rt_nil_check(F->e_296)).b == NULL) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).kind) != (((rt_int)16LL)))) || ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1578 = f_nn_65((((rt_int)70LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
(*(P1015)rt_nil_check(F->st_1578)).a = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).a;
(*(P1015)rt_nil_check(F->st_1578)).b = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1578;
goto ret_;
} else if ((rt_str_eq(F->name_1579, rt_str("FLOAT", 5)) && (F->y_1580 == NULL))) {
F->st_1578 = f_nn_65((((rt_int)71LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
(*(P1015)rt_nil_check(F->st_1578)).a = (*(P1015)rt_nil_check(F->e_296)).b;
if ((((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).next != NULL) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P1015)rt_nil_check(F->st_1578)).b = (*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1015)rt_nil_check(F->st_1578)).c = (*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1578;
goto ret_;
} else if (((!f_type_name_304(&F->name_1579)) && (!((F->y_1580 == NULL) && ((rt_str_eq(F->name_1579, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1579, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1579, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1578 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_296)).line));
(*(P1015)rt_nil_check(F->st_1578)).name = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_296)).a)).name;
(*(P1015)rt_nil_check(F->st_1578)).b = (*(P1015)rt_nil_check(F->e_296)).b;
(*(P1015)rt_nil_check(F->st_1578)).flag = ((rt_int)1LL);
F->result_ = F->st_1578;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_tt_subtype_302(P1008 name_298, P1015 tt_299, P1015 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1581 = NULL;
if (rt_str_eq((((P1008)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1581 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1008)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1581 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1008)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1025)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1581 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1008)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1581 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1008)rt_nil_check(F->name_298))->all))) {
F->st_1581 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1015)rt_nil_check(F->st_1581)).name = F->name_298;
(*(P1015)rt_nil_check(F->st_1581)).a = F->tt_299;
(*(P1015)rt_nil_check(F->st_1581)).b = F->args_300;
F->result_ = F->st_1581;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1015)rt_nil_check(F->st_1581)).a = F->tt_299;
(*(P1015)rt_nil_check(F->st_1581)).b = F->args_300;
F->result_ = F->st_1581;
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
F->y_1582 = NULL;
F->y_1582 = f_lookup_163(&(*F->name_303));
if ((F->y_1582 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P1025)rt_nil_check(F->y_1582)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_1582)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P1025)rt_nil_check(F->y_1582)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1582)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1582)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1582)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1021 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1021)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1021)rt_nil_check(F->t_305)).elem, (*(P1021)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1021)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1021)rt_nil_check(F->t_305)).elem, (*(P1021)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_308(P1021 t_307) {
  struct f_opened_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->c_1583 = NULL;
F->c_1583 = g_caps_1074;
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_307)).kind) != (((rt_int)15LL))) || ((*(P1021)rt_nil_check(F->t_307)).ocap == NULL)) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_307)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1583 != NULL)) {
if (((*(P1042)rt_nil_check(F->c_1583)).d == (*(P1021)rt_nil_check(F->t_307)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1583 = (*(P1042)rt_nil_check(F->c_1583)).next;
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
F->i_1584 = RT_R_IUNDEF;
F->i_1584 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_310)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_309)).len)) < ((rt_int)(((*F->pat_310)).len))))) {
F->result_ = (*F->s_309);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1584), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_309)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_309), rt_r_ichk(F->i_1584), rt_sub(rt_add(rt_r_ichk(F->i_1584), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL))), (*F->pat_310))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_309), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1584), ((rt_int)1LL))), (*F->r_311)), f_replace_all_312(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_309), rt_add(rt_r_ichk(F->i_1584), ((rt_int)(((*F->pat_310)).len))), ((rt_int)(((*F->s_309)).len))); b_; }), &(*F->pat_310), &(*F->r_311)));
goto ret_;
}
F->i_1584 = rt_add(rt_r_ichk(F->i_1584), ((rt_int)1LL));
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
F->l_1585 = NULL;
F->l_1585 = g_psub_1076;
F->r_1586 = NULL;
F->r_1586 = f_mk_3(&(*F->s_313));
while ((F->l_1585 != NULL)) {
F->r_1586 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_312(&(((P1008)rt_nil_check(F->r_1586))->all), &(((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_1585)).s))->all), &(((P1008)rt_nil_check((*(P1019)rt_nil_check((*(P1019)rt_nil_check(F->l_1585)).next)).s))->all)); b_; }));
F->l_1585 = (*(P1019)rt_nil_check((*(P1019)rt_nil_check(F->l_1585)).next)).next;
}
F->result_ = (((P1008)rt_nil_check(F->r_1586))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_new_type_318(P1025 y_315, P1015 st_316, P1017 *c_317) {
  struct f_new_type_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_315 = y_315;
F->st_316 = st_316;
F->c_317 = c_317;
F->c_317v = *F->c_317;
F->d_1587 = NULL;
F->d_1587 = (*(P1025)rt_nil_check(F->y_315)).decl;
F->p_1588 = NULL;
F->uc_1589 = NULL;
F->c_317v = f_new_cons_184();
if (((*(P1025)rt_nil_check(F->y_315)).t == NULL)) {
(*(P1025)rt_nil_check(F->y_315)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).name = (*(P1025)rt_nil_check(F->y_315)).name;
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).decl = F->d_1587;
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).tparams = (*(P1015)rt_nil_check(F->d_1587)).b;
if ((g_caps_1074 != NULL)) {
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).ocap = (*(P1042)rt_nil_check(g_caps_1074)).d;
}
f_open_scope_177();
F->p_1588 = (*(P1015)rt_nil_check(F->d_1587)).b;
while ((F->p_1588 != NULL)) {
F->z_1590 = NULL;
F->z_1590 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1588)).name);
F->zc_1591 = NULL;
(*(P1025)rt_nil_check(F->z_1590)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1588)).a, &F->zc_1591);
(*(P1025)rt_nil_check(F->z_1590)).mnext = (*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).tpsyms;
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).tpsyms = F->z_1590;
(*(P1025)rt_nil_check(F->z_1590)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1588)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1590, rt_r_ichk((*(P1015)rt_nil_check(F->d_1587)).line));
F->p_1588 = (*(P1015)rt_nil_check(F->p_1588)).next;
}
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).under = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_1587)).a, &F->uc_1589);
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).elemcons = F->uc_1589;
if (((*(P1015)rt_nil_check(F->d_1587)).c != NULL)) {
f_check_rep_332((*(P1015)rt_nil_check(F->d_1587)).c, (*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).under, F->uc_1589, 1, 0, F->d_1587);
(*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_315)).t)).repn = (*(P1015)rt_nil_check(F->d_1587)).c;
}
f_close_scope_178();
}
(*(P1017)rt_nil_check(F->c_317v)).args = (*(P1015)rt_nil_check(F->st_316)).b;
F->result_ = (*(P1025)rt_nil_check(F->y_315)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_317) = F->c_317v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_321(P1021 t_319, P1017 c_320) {
  struct f_needed_bits_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->c_320 = c_320;
F->n_1592 = RT_R_IUNDEF;
F->n_1592 = ((rt_int)0LL);
F->v_1593 = RT_R_IUNDEF;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_319)).kind) == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_319)).kind) == (((rt_int)4LL)))) {
F->v_1593 = rt_sub(f_list_len_71((*(P1021)rt_nil_check(F->t_319)).lits), ((rt_int)1LL));
if (((F->c_320 != NULL) && rt_r_echk((*(P1017)rt_nil_check(F->c_320)).hasm))) {
F->v_1593 = rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mhi);
}
} else if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL))) && (F->c_320 != NULL)) && rt_r_echk((*(P1017)rt_nil_check(F->c_320)).hasm))) {
if ((rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mlo) < ((rt_int)0LL))) {
F->v_1593 = rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mhi);
if ((rt_sub(rt_neg(rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL)) > rt_r_ichk(F->v_1593))) {
F->v_1593 = rt_sub(rt_neg(rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL));
}
F->n_1592 = ((rt_int)1LL);
} else {
F->v_1593 = rt_r_ichk((*(P1017)rt_nil_check(F->c_320)).mhi);
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_319)).kind) == (((rt_int)3LL)))) {
if (((((F->c_320 != NULL) && ((*(P1017)rt_nil_check(F->c_320)).prec != NULL)) && f_has_digits_only_323(&(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_320)).prec))->all))) && (rt_int_of_str((((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_320)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((rt_r_ichk(F->v_1593) > ((rt_int)0LL))) {
F->n_1592 = rt_add(rt_r_ichk(F->n_1592), ((rt_int)1LL));
F->v_1593 = rt_div(rt_r_ichk(F->v_1593), ((rt_int)2LL));
}
if ((rt_r_ichk(F->n_1592) == ((rt_int)0LL))) {
F->n_1592 = ((rt_int)1LL);
}
F->result_ = rt_r_ichk(F->n_1592);
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
{ rt_int lo1595 = ((rt_int)1LL), hi1596 = ((rt_int)(((*F->s_322)).len));
for (rt_int it1597 = lo1595; it1597 <= hi1596; it1597++) {
F->i_1594 = it1597;
if ((!f_is_digit_11(rt_r_echk(rt_str_get((*F->s_322), F->i_1594))))) {
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

static int f_built_in_only_325(P1021 t_324) {
  struct f_built_in_only_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->result_ = ((*(P1021)rt_nil_check(F->t_324)).repn != NULL);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL))))) {
F->f_1598 = NULL;
F->f_1598 = (*(P1021)rt_nil_check(F->t_324)).fields;
while ((F->f_1598 != NULL)) {
if ((!f_built_in_only_325((*(P1023)rt_nil_check(F->f_1598)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1598 = (*(P1023)rt_nil_check(F->f_1598)).next;
}
} else if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL))))) {
F->result_ = (((*(P1021)rt_nil_check(F->t_324)).elem == NULL) || f_built_in_only_325((*(P1021)rt_nil_check(F->t_324)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_332(P1015 items_326, P1021 t_327, P1017 c_328, int top_329, int indirect_330, P1015 d_331) {
  struct f_check_rep_332fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_326 = items_326;
F->t_327 = t_327;
F->c_328 = c_328;
F->top_329 = top_329;
F->indirect_330 = indirect_330;
F->d_331 = d_331;
F->it_1599 = NULL;
F->it_1599 = F->items_326;
F->ok_1600 = RT_R_EUNDEF;
F->at_1601 = NULL;
if (((F->top_329 && (!F->indirect_330)) && (!f_built_in_only_325(F->t_327)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_331)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1599 != NULL)) {
F->w_1602 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_1599)).name))->all));
if (rt_str_eq(F->w_1602, rt_str("SIZE", 4))) {
F->v_1603 = RT_R_IUNDEF;
F->v_1603 = f_manifest_366((*(P1015)rt_nil_check(F->it_1599)).a, &F->ok_1600);
F->dummy_1604 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->it_1599)).a, g_ty_int_1099, &F->at_1601));
f_check_type_232(F->at_1601, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line));
if ((rt_r_echk(F->ok_1600) && (rt_r_ichk(F->v_1603) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((rt_r_echk(F->ok_1600) && (f_needed_bits_321(F->t_327, F->c_328) > rt_r_ichk(F->v_1603))) && (!F->indirect_330))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(rt_r_ichk(F->v_1603))), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_321(F->t_327, F->c_328))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1602, rt_str("ALIGN", 5))) {
F->m_1605 = RT_R_IUNDEF;
F->m_1605 = f_manifest_366((*(P1015)rt_nil_check(F->it_1599)).a, &F->ok_1600);
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((rt_r_echk(F->ok_1600) && (rt_r_ichk(F->m_1605) <= ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((rt_r_echk(F->ok_1600) && ((*(P1015)rt_nil_check(F->it_1599)).b != NULL))) {
F->ok2_1606 = RT_R_EUNDEF;
F->r_1607 = RT_R_IUNDEF;
F->r_1607 = f_manifest_366((*(P1015)rt_nil_check(F->it_1599)).b, &F->ok2_1606);
if ((rt_r_echk(F->ok2_1606) && ((rt_r_ichk(F->r_1607) < ((rt_int)0LL)) || (rt_r_ichk(F->r_1607) >= rt_r_ichk(F->m_1605))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1602, rt_str("OFFSET", 6))) {
F->o_1608 = RT_R_IUNDEF;
F->o_1608 = f_manifest_366((*(P1015)rt_nil_check(F->it_1599)).a, &F->ok_1600);
if (F->top_329) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((rt_r_echk(F->ok_1600) && (rt_r_ichk(F->o_1608) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1602, rt_str("RECORD", 6)) || rt_str_eq(F->w_1602, rt_str("UNION", 5)))) {
F->comp_1609 = NULL;
F->comp_1609 = (*(P1015)rt_nil_check(F->it_1599)).c;
if (((rt_str_eq(F->w_1602, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_327)).kind) != (((rt_int)7LL)))) || (rt_str_eq(F->w_1602, rt_str("UNION", 5)) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_327)).kind) != (((rt_int)17LL)))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1602, rt_str(" is a representation for ", 25)), F->w_1602), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1609 != NULL)) {
F->f_1610 = NULL;
F->f_1610 = (*(P1021)rt_nil_check(F->t_327)).fields;
while (((F->f_1610 != NULL) && (!rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1610)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->comp_1609)).name))->all))))) {
F->f_1610 = (*(P1023)rt_nil_check(F->f_1610)).next;
}
if ((F->f_1610 != NULL)) {
f_check_rep_332((*(P1015)rt_nil_check(F->comp_1609)).a, (*(P1023)rt_nil_check(F->f_1610)).t, (*(P1023)rt_nil_check(F->f_1610)).c, 0, 0, F->d_331);
} else if (((!(rt_str_eq(F->w_1602, rt_str("UNION", 5)) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->comp_1609)).name))->all), rt_str("TAG", 3)))) && (!(F->top_329 && f_formal_named_335(F->d_331, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->comp_1609)).name))->all)))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->comp_1609)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->comp_1609)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1609 = (*(P1015)rt_nil_check(F->comp_1609)).next;
}
} else if (rt_str_eq(F->w_1602, rt_str("ARRAY", 5))) {
F->k_1611 = NULL;
F->k_1611 = (*(P1015)rt_nil_check(F->it_1599)).d;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_327)).kind) != (((rt_int)6LL))) || (f_list_len_71((*(P1015)rt_nil_check(F->it_1599)).d) != rt_r_ichk((*(P1021)rt_nil_check(F->t_327)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1611 != NULL)) {
if (((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->k_1611)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->k_1611)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->k_1611)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1611 = (*(P1015)rt_nil_check(F->k_1611)).next;
}
f_check_rep_332((*(P1015)rt_nil_check(F->it_1599)).c, (*(P1021)rt_nil_check(F->t_327)).elem, (*(P1021)rt_nil_check(F->t_327)).elemcons, 0, 0, F->d_331);
} else if (rt_str_eq(F->w_1602, rt_str("ENUM", 4))) {
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_327)).kind) != (((rt_int)4LL))) || ((*(P1015)rt_nil_check(F->it_1599)).d == NULL)) || (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_1599)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1602, rt_str("PTR", 3))) {
if ((((((!F->indirect_330) || (!F->top_329)) || ((*(P1015)rt_nil_check(F->it_1599)).d == NULL)) || (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_1599)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_1599)).d)).next != NULL) && (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_1599)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1602, rt_str("ABSENT", 6))) {
F->a_1612 = NULL;
F->a_1612 = (*(P1015)rt_nil_check(F->it_1599)).d;
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_1599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1612 != NULL)) {
if ((!f_formal_named_335(F->d_331, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->a_1612)).name))->all)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->a_1612)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->a_1612)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1612 = (*(P1015)rt_nil_check(F->a_1612)).next;
}
}
F->it_1599 = (*(P1015)rt_nil_check(F->it_1599)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_335(P1015 d_333, rstr *name_334) {
  struct f_formal_named_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_333 = d_333;
F->name_334 = name_334;
F->p_1613 = NULL;
F->p_1613 = (*(P1015)rt_nil_check(F->d_333)).b;
while ((F->p_1613 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1613)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1613 = (*(P1015)rt_nil_check(F->p_1613)).next;
}
F->p_1613 = (*(P1015)rt_nil_check(F->d_333)).d;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_333)).kind) == (((rt_int)44LL)))) {
while ((F->p_1613 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1613)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1613 = (*(P1015)rt_nil_check(F->p_1613)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_337(P1021 t_336) {
  struct f_unchecked_free_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_336 = t_336;
F->it_1614 = NULL;
if ((((*(P1021)rt_nil_check(F->t_336)).decl == NULL) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_336)).decl)).kind) != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1614 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_336)).decl)).c;
while ((F->it_1614 != NULL)) {
if (((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_1614)).name))->all), rt_str("PTR", 3)) && ((*(P1015)rt_nil_check(F->it_1614)).d != NULL)) && ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_1614)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1614 = (*(P1015)rt_nil_check(F->it_1614)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_341(rstr *lval_338, P1021 t_339, P1017 c_340) {
  struct f_init_storage_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_338 = lval_338;
F->t_339 = t_339;
F->c_340 = c_340;
f_make_storage_356(&(*F->lval_338), F->t_339, F->c_340);
if (((*(P1021)rt_nil_check(F->t_339)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1021)rt_nil_check(F->t_339)).initp, &(*F->lval_338)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_344(P1025 y_342, rstr *lval_343) {
  struct f_init_call_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_342 = y_342;
F->lval_343 = lval_343;
F->link_1615 = NULL;
F->link_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_342)).level) > ((rt_int)0LL))) {
F->link_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1617 = ((rt_int)1LL), hi1618 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1025)rt_nil_check(F->y_342)).level));
for (rt_int it1619 = lo1617; it1619 <= hi1618; it1619++) {
F->i_1616 = it1619;
F->link_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->link_1615))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->link_1615))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_342)).cname))->all), rt_str("(", 1)), (((P1008)rt_nil_check(F->link_1615))->all)), rt_str("&", 1)), (*F->lval_343)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_346(P1021 t_345) {
  struct f_needs_fin_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_345 = t_345;
if ((F->t_345 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1021)rt_nil_check(F->t_345)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_345)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_346((*(P1021)rt_nil_check(F->t_345)).under);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_345)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_346((*(P1021)rt_nil_check(F->t_345)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_345)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_345)).kind) == (((rt_int)17LL))))) {
F->f_1620 = NULL;
F->f_1620 = (*(P1021)rt_nil_check(F->t_345)).fields;
while ((F->f_1620 != NULL)) {
if (f_needs_fin_346((*(P1023)rt_nil_check(F->f_1620)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1620 = (*(P1023)rt_nil_check(F->f_1620)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_349(rstr *lval_347, P1021 t_348) {
  struct f_fin_code_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_347 = lval_347;
F->t_348 = t_348;
F->r_1621 = NULL;
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1021)rt_nil_check(F->t_348)).finalp != NULL)) {
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_344((*(P1021)rt_nil_check(F->t_348)).finalp, &(*F->lval_347)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_348)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), f_fin_code_349(&(*F->lval_347), (*(P1021)rt_nil_check(F->t_348)).under));
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_347), rt_str(".all", 4)); b_; }), (*(P1021)rt_nil_check(F->t_348)).under));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_348)).kind) == (((rt_int)6LL))) && f_needs_fin_346((*(P1021)rt_nil_check(F->t_348)).elem))) {
F->i_1622 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), rt_str("for (rt_int ", 12)), F->i_1622), rt_str(" = 0; ", 6)), F->i_1622), rt_str(" < ", 3)), f_acnt_249(F->t_348, &(*F->lval_347))), rt_str("; ", 2)), F->i_1622), rt_str("++) { ", 6)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".p[", 3)), F->i_1622), rt_str("]", 1)); b_; }), (*(P1021)rt_nil_check(F->t_348)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_348)).kind) == (((rt_int)7LL)))) {
F->f_1623 = NULL;
F->f_1623 = (*(P1021)rt_nil_check(F->t_348)).fields;
while ((F->f_1623 != NULL)) {
if (f_needs_fin_346((*(P1023)rt_nil_check(F->f_1623)).t)) {
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1623)).name))->all))); b_; }), (*(P1023)rt_nil_check(F->f_1623)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1623 = (*(P1023)rt_nil_check(F->f_1623)).next;
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_348)).kind) == (((rt_int)17LL)))) {
F->f_1624 = NULL;
F->f_1624 = (*(P1021)rt_nil_check(F->t_348)).fields;
F->i_1625 = RT_R_IUNDEF;
F->i_1625 = ((rt_int)0LL);
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), rt_str("switch (", 8)), (*F->lval_347)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1624 != NULL)) {
if (f_needs_fin_346((*(P1023)rt_nil_check(F->f_1624)).t)) {
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1625))), rt_str(": ", 2)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".u.", 3)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1624)).name))->all))); b_; }), (*(P1023)rt_nil_check(F->f_1624)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1625 = rt_add(rt_r_ichk(F->i_1625), ((rt_int)1LL));
F->f_1624 = (*(P1023)rt_nil_check(F->f_1624)).next;
}
F->r_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_1621))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1008)rt_nil_check(F->r_1621))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_tparam_type_352(P1021 t_350, rstr *name_351) {
  struct f_tparam_type_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
F->name_351 = name_351;
F->z_1626 = NULL;
F->z_1626 = (*(P1021)rt_nil_check(F->t_350)).tpsyms;
while ((F->z_1626 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->z_1626)).name))->all), (*F->name_351))) {
F->result_ = (*(P1025)rt_nil_check(F->z_1626)).t;
goto ret_;
}
F->z_1626 = (*(P1025)rt_nil_check(F->z_1626)).mnext;
}
F->result_ = g_ty_int_1099;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_356(rstr *lval_353, P1021 t_354, P1017 c_355) {
  struct f_make_storage_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_353 = lval_353;
F->t_354 = t_354;
F->c_355 = c_355;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)15LL)))) {
F->p_1627 = NULL;
F->p_1627 = (*(P1021)rt_nil_check(F->t_354)).tparams;
F->a_1628 = NULL;
F->a_1628 = (*(P1017)rt_nil_check(F->c_355)).args;
F->uc_1629 = NULL;
F->ut_1630 = NULL;
F->at_1631 = NULL;
if ((f_list_len_71(F->a_1628) != f_list_len_71(F->p_1627))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1627))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1627 != NULL)) {
F->pt_1632 = f_tparam_type_352(F->t_354, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1627)).name))->all));
F->v_1633 = rt_str_copy(f_gexpr_789(F->a_1628, F->pt_1632, &F->at_1631));
f_check_type_232(F->at_1631, F->pt_1632, rt_r_ichk((*(P1015)rt_nil_check(F->a_1628)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1627)).name))->all))), rt_str(" = ", 3)), F->v_1633), rt_str(";", 1)); b_; }));
F->p_1627 = (*(P1015)rt_nil_check(F->p_1627)).next;
F->a_1628 = (*(P1015)rt_nil_check(F->a_1628)).next;
}
{
F->saved_1634 = NULL;
F->saved_1634 = g_psub_1076;
F->p_1627 = (*(P1021)rt_nil_check(F->t_354)).tparams;
while ((F->p_1627 != NULL)) {
F->l1_1635 = NULL;
F->l2_1636 = NULL;
{ R1020 *cell1637 = rt_alloc(sizeof(R1020));
(*cell1637).s = NULL;
(*cell1637).next = NULL;
F->l1_1635 = cell1637;
}
{ R1020 *cell1638 = rt_alloc(sizeof(R1020));
(*cell1638).s = NULL;
(*cell1638).next = NULL;
F->l2_1636 = cell1638;
}
(*(P1019)rt_nil_check(F->l1_1635)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1627)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1019)rt_nil_check(F->l2_1636)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1627)).name))->all))); b_; }));
(*(P1019)rt_nil_check(F->l1_1635)).next = F->l2_1636;
(*(P1019)rt_nil_check(F->l2_1636)).next = g_psub_1076;
g_psub_1076 = F->l1_1635;
F->p_1627 = (*(P1015)rt_nil_check(F->p_1627)).next;
}
if (((*(P1021)rt_nil_check(F->t_354)).tparams == NULL)) {
f_init_storage_341(&(*F->lval_353), (*(P1021)rt_nil_check(F->t_354)).under, (*(P1021)rt_nil_check(F->t_354)).elemcons);
} else {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".all", 4)); b_; }), (*(P1021)rt_nil_check(F->t_354)).under, (*(P1021)rt_nil_check(F->t_354)).elemcons);
}
g_psub_1076 = F->saved_1634;
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)12LL)))) {
if (((*(P1017)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_353)), rt_str(", ", 2)), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_355)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1021)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_mcopy_387((*(P1021)rt_nil_check(F->t_354)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_353)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_empty_set_306(F->t_354)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)10LL)))) {
F->at_1639 = NULL;
if ((((F->c_355 == NULL) || ((*(P1017)rt_nil_check(F->c_355)).args == NULL)) || ((*(P1015)rt_nil_check((*(P1017)rt_nil_check(F->c_355)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_970(F->t_354)) && (!f_flat_358((*(P1021)rt_nil_check(F->t_354)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1640 = rt_str_copy(f_gexpr_789((*(P1017)rt_nil_check(F->c_355)).args, g_file_access_type_1116, &F->at_1639));
F->use_1641 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1017)rt_nil_check(F->c_355)).args)).next, g_file_mode_type_1110, &F->at_1639));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_r_file_new(", 17)), F->acc_1640), rt_str(", ", 2)), F->use_1641), rt_str(", sizeof(", 9)), f_ctype_234((*(P1021)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_bool_text_377(f_text_file_970(F->t_354))), rt_str(");", 2)); b_; }));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)5LL)))) {
if (((*(P1017)rt_nil_check(F->c_355)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_str_new(", 14)), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_355)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)6LL)))) {
if (((*(P1017)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1643 = ((rt_int)1LL), hi1644 = rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).ndim);
for (rt_int it1645 = lo1643; it1645 <= hi1644; it1645++) {
F->k_1642 = it1645;
if ((f_cons_lo_252(F->c_355, F->k_1642) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_dim_lo_242(F->k_1642)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1008)rt_nil_check(f_cons_lo_252(F->c_355, F->k_1642)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_353)), rt_str(".", 1)), f_dim_hi_244(F->k_1642)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1008)rt_nil_check(f_cons_hi_255(F->c_355, F->k_1642)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".lo2 = ", 7)), (*F->lval_353)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1021)rt_nil_check(F->t_354)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_1091) && (!rt_str_eq(f_uninit_value_360((*(P1021)rt_nil_check(F->t_354)).elem), rt_str("", 0)))))) {
F->i_1646 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1646), rt_str(" = 0; ", 6)), F->i_1646), rt_str(" < ", 3)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str("; ", 2)), F->i_1646), rt_str("++) {", 5)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p[", 3)), F->i_1646), rt_str("]", 1)); b_; }), (*(P1021)rt_nil_check(F->t_354)).elem, (*(P1021)rt_nil_check(F->t_354)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)7LL)))) {
F->f_1647 = NULL;
F->f_1647 = (*(P1021)rt_nil_check(F->t_354)).fields;
while ((F->f_1647 != NULL)) {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1647)).name))->all))); b_; }), (*(P1023)rt_nil_check(F->f_1647)).t, (*(P1023)rt_nil_check(F->f_1647)).c);
F->f_1647 = (*(P1023)rt_nil_check(F->f_1647)).next;
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_354)).kind) == (((rt_int)17LL)))) {
if (((F->c_355 != NULL) && rt_r_echk((*(P1017)rt_nil_check(F->c_355)).hasm))) {
F->f_1648 = NULL;
F->f_1648 = (*(P1021)rt_nil_check(F->t_354)).fields;
{ rt_int lo1650 = ((rt_int)1LL), hi1651 = rt_r_ichk((*(P1017)rt_nil_check(F->c_355)).mlo);
for (rt_int it1652 = lo1650; it1652 <= hi1651; it1652++) {
F->i_1649 = it1652;
F->f_1648 = (*(P1023)rt_nil_check(F->f_1648)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P1017)rt_nil_check(F->c_355)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".u.", 3)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1648)).name))->all))); b_; }), (*(P1023)rt_nil_check(F->f_1648)).t, (*(P1023)rt_nil_check(F->f_1648)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_1091) && (!rt_str_eq(f_uninit_value_360(F->t_354), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_uninit_value_360(F->t_354)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_358(P1021 t_357) {
  struct f_flat_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_357)).tparams == NULL))) {
F->result_ = f_flat_358((*(P1021)rt_nil_check(F->t_357)).under);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)17LL))))) {
F->f_1653 = NULL;
F->f_1653 = (*(P1021)rt_nil_check(F->t_357)).fields;
while ((F->f_1653 != NULL)) {
if ((!f_flat_358((*(P1023)rt_nil_check(F->f_1653)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1653 = (*(P1023)rt_nil_check(F->f_1653)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_357)).kind) == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_360(P1021 t_359) {
  struct f_uninit_value_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_359 = t_359;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_359)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_359)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_359)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_359)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_363(P1021 t_361, rstr *v_362) {
  struct f_init_chk_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_361 = t_361;
F->v_362 = v_362;
F->b_1654 = NULL;
F->b_1654 = f_base_of_223(F->t_361);
if (f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_362);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->b_1654)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->b_1654)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->b_1654)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->b_1654)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_366(P1015 e_364, int *ok_365) {
  struct f_manifest_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_364 = e_364;
F->ok_365 = ok_365;
F->ok_365v = *F->ok_365;
F->v_1655 = NULL;
F->v_1655 = f_meval_375(F->e_364, &F->ok_365v);
if ((rt_r_echk(F->ok_365v) && (rt_r_ichk((*(P1034)rt_nil_check(F->v_1655)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P1034)rt_nil_check(F->v_1655)).i);
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

static P1034 f_mk_mval_369(rt_int kind_367, rt_int i_368) {
  struct f_mk_mval_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_367 = kind_367;
F->i_368 = i_368;
F->v_1656 = NULL;
{ R1035 *cell1657 = rt_alloc(sizeof(R1035));
(*cell1657).s = NULL;
(*cell1657).t = NULL;
F->v_1656 = cell1657;
}
(*(P1034)rt_nil_check(F->v_1656)).kind = F->kind_367;
(*(P1034)rt_nil_check(F->v_1656)).i = F->i_368;
F->result_ = F->v_1656;
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
F->r_1658 = RT_R_IUNDEF;
F->r_1658 = ((rt_int)1LL);
{ rt_int lo1660 = ((rt_int)1LL), hi1661 = F->b_371;
for (rt_int it1662 = lo1660; it1662 <= hi1661; it1662++) {
F->i_1659 = it1662;
F->r_1658 = rt_mul(rt_r_ichk(F->r_1658), F->a_370);
}
}
F->result_ = rt_r_ichk(F->r_1658);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_meval_375(P1015 e_373, int *ok_374) {
  struct f_meval_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_373 = e_373;
F->ok_374 = ok_374;
F->ok_374v = *F->ok_374;
F->a_1663 = NULL;
F->b_1664 = NULL;
F->ok2_1665 = RT_R_EUNDEF;
F->op_1666 = NULL;
F->ok_374v = 0;
if ((F->e_373 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)1LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)5LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)2LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)3LL)))) {
F->ok_374v = 1;
F->a_1663 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
(*(P1034)rt_nil_check(F->a_1663)).s = (*(P1015)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1663;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1021)rt_nil_check(g_ty_ascii_1102)).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all)) >= ((rt_int)0LL))) {
F->ok_374v = 1;
F->a_1663 = f_mk_mval_369((((rt_int)4LL)), f_lit_index_265((*(P1021)rt_nil_check(g_ty_ascii_1102)).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all)));
(*(P1034)rt_nil_check(F->a_1663)).t = g_ty_ascii_1102;
(*(P1034)rt_nil_check(F->a_1663)).s = (*(P1015)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1663;
goto ret_;
}
F->a_1663 = f_mk_mval_369((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1034)rt_nil_check(F->a_1663)).s = (*(P1015)rt_nil_check(F->e_373)).name;
F->ok_374v = 1;
F->result_ = F->a_1663;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_375((*(P1015)rt_nil_check(F->e_373)).a, &F->ok_374v);
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)7LL)))) {
F->y_1667 = NULL;
F->y_1667 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all));
if ((((F->y_1667 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_1667)).kind) == (((rt_int)2LL)))) && ((*(P1025)rt_nil_check(F->y_1667)).mv != NULL))) {
F->ok_374v = 1;
F->result_ = (*(P1025)rt_nil_check(F->y_1667)).mv;
goto ret_;
} else if ((((F->y_1667 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_1667)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P1025)rt_nil_check(F->y_1667)).hasmv))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1025)rt_nil_check(F->y_1667)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) == (((rt_int)8LL)))) {
F->a_1663 = f_meval_375((*(P1015)rt_nil_check(F->e_373)).a, &F->ok_374v);
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i)));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i)));
goto ret_;
} else if (((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1663;
goto ret_;
}
F->ok_374v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_373)).kind) != (((rt_int)9LL))) || f_user_defined_385(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_373)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1666 = (*(P1015)rt_nil_check(F->e_373)).name;
F->a_1663 = f_meval_375((*(P1015)rt_nil_check(F->e_373)).a, &F->ok_374v);
F->b_1664 = f_meval_375((*(P1015)rt_nil_check(F->e_373)).b, &F->ok2_1665);
F->ok_374v = (rt_r_echk(F->ok_374v) && rt_r_echk(F->ok2_1665));
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_374v = 0;
if (((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)1LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_add(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_div(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("**", 2)) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), f_ipow_372(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) == rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) != rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) < rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) <= rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) > rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) >= rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("+", 1)) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("-", 1))) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("*", 1))) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("/", 1))))) {
F->ok_374v = 1;
F->result_ = F->a_1663;
goto ret_;
} else if ((((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("**", 2)))) {
F->ok_374v = 1;
F->result_ = F->a_1663;
goto ret_;
} else if (((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)2LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_add(rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i), rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("XOR", 3)) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) != rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).i) == rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1)) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379(rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->a_1663)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->b_1664)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((!rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->a_1663)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->b_1664)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1)) || rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379(rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->a_1663)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->b_1664)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_379((!rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->a_1663)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->b_1664)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1008)rt_nil_check(F->op_1666))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P1034)rt_nil_check(F->a_1663)).kind) == (((rt_int)5LL))) || ((*(P1034)rt_nil_check(F->a_1663)).t == g_ty_ascii_1102))) && ((rt_r_ichk((*(P1034)rt_nil_check(F->b_1664)).kind) == (((rt_int)5LL))) || ((*(P1034)rt_nil_check(F->b_1664)).t == g_ty_ascii_1102)))) {
F->r_1668 = NULL;
F->r_1668 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
F->ok_374v = 1;
(*(P1034)rt_nil_check(F->r_1668)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_381(F->a_1663), f_mstr_381(F->b_1664)); b_; }));
F->result_ = F->r_1668;
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

static rstr f_bool_text_377(int b_376) {
  struct f_bool_text_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_376 = b_376;
if (F->b_376) {
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

static rt_int f_bool_i_379(int b_378) {
  struct f_bool_i_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_378 = b_378;
if (F->b_378) {
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

static rstr f_mstr_381(P1034 v_380) {
  struct f_mstr_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_380 = v_380;
if ((rt_r_ichk((*(P1034)rt_nil_check(F->v_380)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->v_380)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_383(rt_r_ichk((*(P1034)rt_nil_check(F->v_380)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_383(rt_int i_382) {
  struct f_ascii_char_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_382 = i_382;
F->printable_1669 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_382 >= ((rt_int)32LL)) && (F->i_382 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1669, rt_sub(F->i_382, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_385(rstr *op_384) {
  struct f_user_defined_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_384 = op_384;
F->y_1670 = NULL;
F->y_1670 = f_lookup_163(&(*F->op_384));
F->result_ = ((F->y_1670 != NULL) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_1670)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_1670)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_387(P1021 t_386) {
  struct f_mcopy_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_386 = t_386;
F->ct_1671 = rt_str_copy(f_ctype_234(F->t_386));
F->name_1672 = rt_str_new(rt_add(((rt_int)((F->ct_1671).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1672, rt_str_cat(rt_str("mc_", 3), F->ct_1671));
F->l_1673 = NULL;
if ((!f_seen_name_420(g_mcopies_1098, &F->name_1672))) {
{ R1020 *cell1674 = rt_alloc(sizeof(R1020));
(*cell1674).s = NULL;
(*cell1674).next = NULL;
F->l_1673 = cell1674;
}
(*(P1019)rt_nil_check(F->l_1673)).s = f_mk_3(&F->name_1672);
(*(P1019)rt_nil_check(F->l_1673)).next = g_mcopies_1098;
g_mcopies_1098 = F->l_1673;
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1672), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_386)).kind) == (((rt_int)15LL))) && f_top_level_401((*(P1021)rt_nil_check(F->t_386)).assignp))) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1672), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_395((*(P1021)rt_nil_check(F->t_386)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1671), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1671), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1672), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1671), rt_str(" *)d = ", 7)), f_copy_code_409(F->t_386, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1671), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_389(P1021 t_388) {
  struct f_composite_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_388 = t_388;
F->result_ = ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_388)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_388)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_388)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P1021)rt_nil_check(F->t_388)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_388)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_395(P1025 y_390, rstr *a_391, int lv_a_392, rstr *b_393, int lv_b_394) {
  struct f_user_call2_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_390 = y_390;
F->a_391 = a_391;
F->lv_a_392 = lv_a_392;
F->b_393 = b_393;
F->lv_b_394 = lv_b_394;
F->args_1675 = NULL;
F->args_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_390)).level) > ((rt_int)0LL))) {
F->args_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1677 = ((rt_int)1LL), hi1678 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1025)rt_nil_check(F->y_390)).level));
for (rt_int it1679 = lo1677; it1679 <= hi1678; it1679++) {
F->i_1676 = it1679;
F->args_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_1675))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_1675))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_390)).cname))->all), rt_str("(", 1)), (((P1008)rt_nil_check(F->args_1675))->all)), f_user_arg_399((*(P1025)rt_nil_check(F->y_390)).params, &(*F->a_391), F->lv_a_392)), rt_str(", ", 2)), f_user_arg_399((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_390)).params)).next, &(*F->b_393), F->lv_b_394)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_399(P1027 pm_396, rstr *v_397, int lv_398) {
  struct f_user_arg_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_396 = pm_396;
F->v_397 = v_397;
F->lv_398 = lv_398;
if ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_396)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_409((*(P1027)rt_nil_check(F->pm_396)).t, &(*F->v_397));
goto ret_;
} else if (F->lv_398) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_397)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1680 = rt_str_copy(f_ctype_234((*(P1027)rt_nil_check(F->pm_396)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1680), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1680), rt_str(")); *b_ = ", 10)), (*F->v_397)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_401(P1025 y_400) {
  struct f_top_level_401fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_400 = y_400;
F->result_ = ((F->y_400 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_400)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_406(rstr *lval_402, P1021 t_403, rstr *v_404, P1017 c_405) {
  struct f_assign_code_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_402 = lval_402;
F->t_403 = t_403;
F->v_404 = v_404;
F->c_405 = c_405;
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_403)).assignp != NULL)) && (rt_r_echk(g_in_func_1071) || f_top_level_401((*(P1021)rt_nil_check(F->t_403)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_395((*(P1021)rt_nil_check(F->t_403)).assignp, &(*F->lval_402), 1, &(*F->v_404), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_403)).tparams == NULL))) {
F->result_ = f_assign_code_406(&(*F->lval_402), (*(P1021)rt_nil_check(F->t_403)).under, &(*F->v_404), F->c_405);
goto ret_;
}
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)17LL))) && (F->c_405 != NULL)) && ((*(P1017)rt_nil_check(F->c_405)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_403)), rt_str(" u_ = ", 6)), (*F->v_404)), rt_str("; if (u_.tag != (", 17)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_405)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_403)), rt_str("(&", 2)), (*F->lval_402)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_389(F->t_403)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_403)), rt_str("(&", 2)), (*F->lval_402)), rt_str(", ", 2)), (*F->v_404)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_402)), rt_str(", ", 2)), (*F->v_404)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_403)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_403)), rt_str("(&", 2)), (*F->lval_402)), rt_str(", ", 2)), (*F->v_404)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_402), rt_str(" = ", 3)), f_checked_213(F->t_403, F->c_405, &(*F->v_404))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_409(P1021 t_407, rstr *v_408) {
  struct f_copy_code_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_407 = t_407;
F->v_408 = v_408;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_407)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_407)).tparams == NULL))) {
F->result_ = f_copy_code_409((*(P1021)rt_nil_check(F->t_407)).under, &(*F->v_408));
goto ret_;
}
if (f_composite_389(F->t_407)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_407)), rt_str("(", 1)), (*F->v_408)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_407)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_408)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_407)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_407)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_407)), rt_str("(", 1)), (*F->v_408)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_408);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_413(P1021 t_410, rstr *a_411, rstr *b_412) {
  struct f_eq_code_413fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_410 = t_410;
F->a_411 = a_411;
F->b_412 = b_412;
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_410)).eqp != NULL)) && (rt_r_echk(g_in_func_1071) || f_top_level_401((*(P1021)rt_nil_check(F->t_410)).eqp)))) {
F->result_ = f_user_call2_395((*(P1021)rt_nil_check(F->t_410)).eqp, &(*F->a_411), 0, &(*F->b_412), 0);
goto ret_;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_410)).tparams == NULL))) {
F->result_ = f_eq_code_413((*(P1021)rt_nil_check(F->t_410)).under, &(*F->a_411), &(*F->b_412));
goto ret_;
}
if (f_composite_389(F->t_410)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_410)), rt_str("(", 1)), (*F->a_411)), rt_str(", ", 2)), (*F->b_412)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_411)), rt_str(", ", 2)), (*F->b_412)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_411)), rt_str(" == ", 4)), (*F->b_412)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_411)), rt_str(" == ", 4)), (*F->b_412)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_411)), rt_str(", ", 2)), (*F->b_412)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_410)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_410)), rt_str("(", 1)), (*F->a_411)), rt_str(", ", 2)), (*F->b_412)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_411)), rt_str(" == ", 4)), (*F->b_412)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_417(rstr *lval_414, P1021 t_415, rstr *v_416) {
  struct f_elem_assign_417fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_414 = lval_414;
F->t_415 = t_415;
F->v_416 = v_416;
F->result_ = f_assign_code_406(&(*F->lval_414), F->t_415, &(*F->v_416), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_420(P1019 l_418, rstr *s_419) {
  struct f_seen_name_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_418 = l_418;
F->s_419 = s_419;
F->p_1681 = NULL;
F->p_1681 = F->l_418;
while ((F->p_1681 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1019)rt_nil_check(F->p_1681)).s))->all), (*F->s_419))) {
F->result_ = 1;
goto ret_;
}
F->p_1681 = (*(P1019)rt_nil_check(F->p_1681)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_421(void) {
  struct f_emit_helpers_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1682 = NULL;
F->t_1683 = NULL;
F->t_1683 = g_all_types_1060;
F->done_1684 = NULL;
while ((F->t_1683 != NULL)) {
if ((f_composite_389(F->t_1683) && (!f_seen_name_420(F->done_1684, &(((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_1683)).cname))->all))))) {
F->l_1685 = NULL;
F->c_1686 = rt_str_new(((rt_int)(((((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_1683)).cname))->all)).len)));
rt_str_assign(&F->c_1686, (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_1683)).cname))->all));
{ R1020 *cell1687 = rt_alloc(sizeof(R1020));
(*cell1687).s = NULL;
(*cell1687).next = NULL;
F->l_1685 = cell1687;
}
(*(P1019)rt_nil_check(F->l_1685)).s = (*(P1021)rt_nil_check(F->t_1683)).cname;
(*(P1019)rt_nil_check(F->l_1685)).next = F->done_1684;
F->done_1684 = F->l_1685;
f_put_27(g_out_helpers_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1686), rt_str("(", 1)), F->c_1686), rt_str(" *d, ", 5)), F->c_1686), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1686), rt_str(" cp_", 4)), F->c_1686), rt_str("(", 1)), F->c_1686), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1686), rt_str("(", 1)), F->c_1686), rt_str(" a, ", 4)), F->c_1686), rt_str(" b);", 4)); b_; }));
f_helper_bodies_423(F->t_1683);
}
F->t_1683 = (*(P1021)rt_nil_check(F->t_1683)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_423(P1021 t_422) {
  struct f_helper_bodies_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_422 = t_422;
F->c_1688 = rt_str_new(((rt_int)(((((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).cname))->all)).len)));
rt_str_assign(&F->c_1688, (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).cname))->all));
F->b_1689 = NULL;
F->b_1689 = g_out_funcs_1066;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_422)).kind) == (((rt_int)6LL)))) {
F->e_1690 = NULL;
F->e_1690 = (*(P1021)rt_nil_check(F->t_422)).elem;
F->sizes_1691 = NULL;
F->sizes_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1692 = NULL;
F->bounds_1692 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1694 = ((rt_int)1LL), hi1695 = rt_r_ichk((*(P1021)rt_nil_check(F->t_422)).ndim);
for (rt_int it1696 = lo1694; it1696 <= hi1695; it1696++) {
F->k_1693 = it1696;
F->l_1697 = rt_str_copy(f_dim_lo_242(F->k_1693));
F->h_1698 = rt_str_copy(f_dim_hi_244(F->k_1693));
F->sizes_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->sizes_1691))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1697), rt_str(", d->", 5)), F->h_1698), rt_str(") != RT_R_EXT(s.", 16)), F->l_1697), rt_str(", s.", 4)), F->h_1698), rt_str(")", 1)); b_; }));
F->bounds_1692 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->bounds_1692))->all), rt_str(" || a.", 6)), F->l_1697), rt_str(" != b.", 6)), F->l_1697), rt_str(" || a.", 6)), F->h_1698), rt_str(" != b.", 6)), F->h_1698); b_; }));
}
}
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" *d, ", 5)), F->c_1688), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1008)rt_nil_check(F->sizes_1691))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_422, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1688), rt_str(" cp_", 4)), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1688), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1690)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_422, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_422, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_409(F->e_1690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" a, ", 4)), F->c_1688), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1008)rt_nil_check(F->bounds_1692))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_422, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_413(F->e_1690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_422)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" *d, ", 5)), F->c_1688), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1021)rt_nil_check(F->t_422)).under) && ((*(P1021)rt_nil_check(F->t_422)).elemcons != NULL)) && ((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).elemcons)).lo != NULL))) {
F->saved_1699 = NULL;
F->saved_1699 = g_psub_1076;
F->p_1700 = NULL;
F->p_1700 = (*(P1021)rt_nil_check(F->t_422)).tparams;
while ((F->p_1700 != NULL)) {
F->l1_1701 = NULL;
F->l2_1702 = NULL;
{ R1020 *cell1703 = rt_alloc(sizeof(R1020));
(*cell1703).s = NULL;
(*cell1703).next = NULL;
F->l1_1701 = cell1703;
}
{ R1020 *cell1704 = rt_alloc(sizeof(R1020));
(*cell1704).s = NULL;
(*cell1704).next = NULL;
F->l2_1702 = cell1704;
}
(*(P1019)rt_nil_check(F->l1_1701)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1700)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1019)rt_nil_check(F->l2_1702)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1700)).name))->all))); b_; }));
(*(P1019)rt_nil_check(F->l1_1701)).next = F->l2_1702;
(*(P1019)rt_nil_check(F->l2_1702)).next = g_psub_1076;
g_psub_1076 = F->l1_1701;
F->p_1700 = (*(P1015)rt_nil_check(F->p_1700)).next;
}
if ((rt_r_ichk((*(P1021)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_422)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1076 = F->saved_1699;
} else {
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1021)rt_nil_check(F->t_422)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1688), rt_str(" cp_", 4)), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" s) { s.all = ", 14)), f_copy_code_409((*(P1021)rt_nil_check(F->t_422)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" a, ", 4)), F->c_1688), rt_str(" b) { return ", 13)), f_eq_code_413((*(P1021)rt_nil_check(F->t_422)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_422)).kind) == (((rt_int)17LL)))) {
F->f_1705 = NULL;
F->f_1705 = (*(P1021)rt_nil_check(F->t_422)).fields;
F->i_1706 = RT_R_IUNDEF;
F->i_1706 = ((rt_int)0LL);
F->cases_as_1707 = NULL;
F->cases_as_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1708 = NULL;
F->cases_cp_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1709 = NULL;
F->cases_eq_1709 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1705 != NULL)) {
F->fn_1710 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1705)).name))->all))));
F->cases_as_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->cases_as_1707))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1706))), rt_str(": d->", 5)), F->fn_1710), rt_str(" = ", 3)), f_copy_code_409((*(P1023)rt_nil_check(F->f_1705)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1710); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->cases_cp_1708))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1706))), rt_str(": d.", 4)), F->fn_1710), rt_str(" = ", 3)), f_copy_code_409((*(P1023)rt_nil_check(F->f_1705)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1710); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1709 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->cases_eq_1709))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1706))), rt_str(": return ", 9)), f_eq_code_413((*(P1023)rt_nil_check(F->f_1705)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1710); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1710); b_; }))), rt_str(";", 1)); b_; }));
F->i_1706 = rt_add(rt_r_ichk(F->i_1706), ((rt_int)1LL));
F->f_1705 = (*(P1023)rt_nil_check(F->f_1705)).next;
}
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" *d, ", 5)), F->c_1688), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1008)rt_nil_check(F->cases_as_1707))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1688), rt_str(" cp_", 4)), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1688), rt_str(" d = s; switch (s.tag) {", 24)), (((P1008)rt_nil_check(F->cases_cp_1708))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" a, ", 4)), F->c_1688), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1008)rt_nil_check(F->cases_eq_1709))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1711 = NULL;
F->f_1711 = (*(P1021)rt_nil_check(F->t_422)).fields;
F->conds_1712 = NULL;
F->conds_1712 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" *d, ", 5)), F->c_1688), rt_str(" s) {", 5)); b_; }));
while ((F->f_1711 != NULL)) {
F->fn_1713 = rt_str_copy(f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1711)).name))->all)));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1713); b_; }), (*(P1023)rt_nil_check(F->f_1711)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1713); b_; }))); b_; }));
F->f_1711 = (*(P1023)rt_nil_check(F->f_1711)).next;
}
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1688), rt_str(" cp_", 4)), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1688), rt_str(" d = s;", 7)); b_; }));
F->f_1711 = (*(P1021)rt_nil_check(F->t_422)).fields;
while ((F->f_1711 != NULL)) {
F->fn_1714 = rt_str_copy(f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1711)).name))->all)));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1714), rt_str(" = ", 3)), f_copy_code_409((*(P1023)rt_nil_check(F->f_1711)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1714); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1712 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_1712))->all), rt_str(" && ", 4)), f_eq_code_413((*(P1023)rt_nil_check(F->f_1711)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1714); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1714); b_; }))); b_; }));
F->f_1711 = (*(P1023)rt_nil_check(F->f_1711)).next;
}
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1688), rt_str("(", 1)), F->c_1688), rt_str(" a, ", 4)), F->c_1688), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1008)rt_nil_check(F->conds_1712))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_425(P1015 elems_424) {
  struct f_declare_body_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_424 = elems_424;
F->e_1715 = NULL;
F->e_1715 = F->elems_424;
while ((F->e_1715 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)51LL)))) {
F->g_1716 = NULL;
F->g_1716 = f_new_sym_181((((rt_int)10LL)), (*(P1015)rt_nil_check(F->e_1715)).name);
(*(P1025)rt_nil_check(F->g_1716)).decl = F->e_1715;
(*(P1025)rt_nil_check(F->g_1716)).level = rt_r_ichk(g_cur_level_1072);
(*(P1025)rt_nil_check(F->g_1716)).owner = g_func_sym_1083;
(*(P1025)rt_nil_check(F->g_1716)).gctx = g_fctx_1073;
f_define_168(F->g_1716, rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line));
}
F->e_1715 = (*(P1015)rt_nil_check(F->e_1715)).next;
}
F->e_1715 = F->elems_424;
while ((F->e_1715 != NULL)) {
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).flag) == ((rt_int)0LL)))) {
f_manifest_const_427(F->e_1715);
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_435(F->e_1715);
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).flag) != ((rt_int)3LL)))) {
f_gen_expose_462(F->e_1715);
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)49LL)))) {
F->y_1717 = NULL;
F->y_1717 = f_new_sym_181((((rt_int)7LL)), (*(P1015)rt_nil_check(F->e_1715)).name);
(*(P1025)rt_nil_check(F->y_1717)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1717, rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1717)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1717)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)42LL)))) {
F->y_1718 = NULL;
F->y_1718 = f_new_sym_181((((rt_int)6LL)), (*(P1015)rt_nil_check(F->e_1715)).name);
(*(P1025)rt_nil_check(F->y_1718)).st = (*(P1015)rt_nil_check(F->e_1715)).a;
(*(P1025)rt_nil_check(F->y_1718)).decl = F->e_1715;
f_define_168(F->y_1718, rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line));
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)44LL)))) {
F->y_1719 = NULL;
F->y_1719 = f_new_sym_181((((rt_int)5LL)), (*(P1015)rt_nil_check(F->e_1715)).name);
F->t_1720 = NULL;
F->t_1720 = f_new_typ_183((((rt_int)8LL)));
(*(P1021)rt_nil_check(F->t_1720)).name = (*(P1015)rt_nil_check(F->e_1715)).name;
(*(P1021)rt_nil_check(F->t_1720)).decl = F->e_1715;
(*(P1025)rt_nil_check(F->y_1719)).t = F->t_1720;
f_define_168(F->y_1719, rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line));
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)43LL)))) {
F->y_1721 = NULL;
F->y_1721 = f_new_sym_181((((rt_int)5LL)), (*(P1015)rt_nil_check(F->e_1715)).name);
(*(P1025)rt_nil_check(F->y_1721)).st = (*(P1015)rt_nil_check(F->e_1715)).a;
(*(P1025)rt_nil_check(F->y_1721)).decl = F->e_1715;
f_define_168(F->y_1721, rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line));
}
F->e_1715 = (*(P1015)rt_nil_check(F->e_1715)).next;
}
F->e_1715 = F->elems_424;
while ((F->e_1715 != NULL)) {
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)50LL))))) {
F->y_1722 = NULL;
f_declare_subprogram_492(F->e_1715);
F->y_1722 = f_lookup_decl_165(F->e_1715);
(*(P1025)rt_nil_check(F->y_1722)).home = F->elems_424;
f_normal_function_487(F->e_1715, F->y_1722);
}
F->e_1715 = (*(P1015)rt_nil_check(F->e_1715)).next;
}
F->e_1715 = F->elems_424;
{
F->snap_1723 = NULL;
while ((F->e_1715 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1723 == NULL)) {
{ P1029 cell1724 = rt_alloc(sizeof *cell1724);
rt_int pv1725 = (((rt_int)4093LL));
cell1724->p_n = pv1725;
cell1724->all.lo = ((rt_int)0LL); cell1724->all.hi = pv1725;
cell1724->all.lo2 = cell1724->all.hi2 = 1;
cell1724->all.p = rt_alloc(sizeof(P1025) * (size_t)(RT_CNT(cell1724->all)) + 1);
for (rt_int i1726 = 0; i1726 < (RT_CNT(cell1724->all)); i1726++) {
cell1724->all.p[i1726] = NULL;
}
F->snap_1723 = cell1724;
}
{ rt_int lo1728 = ((rt_int)0LL), hi1729 = (((rt_int)4093LL));
for (rt_int it1730 = lo1728; it1730 <= hi1729; it1730++) {
F->i_1727 = it1730;
(((P1029)rt_nil_check(F->snap_1723))->all).p[(rt_index(F->i_1727, (((P1029)rt_nil_check(F->snap_1723))->all).lo, (((P1029)rt_nil_check(F->snap_1723))->all).hi) - (((P1029)rt_nil_check(F->snap_1723))->all).lo)] = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(F->i_1727, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1731 = NULL;
F->g_1731 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all));
(*(P1025)rt_nil_check(F->g_1731)).env = F->snap_1723;
}
}
F->e_1715 = (*(P1015)rt_nil_check(F->e_1715)).next;
}
}
F->e_1715 = F->elems_424;
while ((F->e_1715 != NULL)) {
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1732 = NULL;
F->y_1732 = f_lookup_decl_165(F->e_1715);
if (((((F->y_1732 != NULL) && ((*(P1025)rt_nil_check(F->y_1732)).params != NULL)) && ((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1732)).params)).next == NULL)) && ((rt_r_ichk((*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1732)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1732)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1732)).params)).t)).initp = F->y_1732;
} else {
(*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1732)).params)).t)).finalp = F->y_1732;
}
}
}
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)45LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("<", 1)))))) {
F->y_1733 = NULL;
F->y_1733 = f_lookup_decl_165(F->e_1715);
if (((((((F->y_1733 != NULL) && ((*(P1025)rt_nil_check(F->y_1733)).params != NULL)) && ((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).next != NULL)) && ((*(P1027)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).next)).next == NULL)) && (rt_r_ichk((*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_221((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).t, (*(P1027)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).next)).t))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_1715)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).t)).assignp = F->y_1733;
} else if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_1715)).name))->all), rt_str("=", 1))) {
(*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).t)).eqp = F->y_1733;
} else {
(*(P1021)rt_nil_check((*(P1027)rt_nil_check((*(P1025)rt_nil_check(F->y_1733)).params)).t)).ltp = F->y_1733;
}
}
}
F->e_1715 = (*(P1015)rt_nil_check(F->e_1715)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_427(P1015 d_426) {
  struct f_manifest_const_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_426 = d_426;
F->ok_1734 = RT_R_EUNDEF;
F->v_1735 = NULL;
F->y_1736 = NULL;
F->t_1737 = NULL;
F->ctext_1738 = NULL;
if (((*(P1015)rt_nil_check(F->d_426)).a != NULL)) {
if (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->d_426)).a)).kind) != (((rt_int)70LL))) || ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->d_426)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1735 = f_meval_375((*(P1015)rt_nil_check(F->d_426)).b, &F->ok_1734);
if ((!rt_r_echk(F->ok_1734))) {
goto ret_;
}
{
F->saved_1739 = NULL;
F->saved_1739 = g_code_1069;
g_code_1069 = f_new_buffer_24();
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
{ rt_frame xf1740;
if (RT_TRY(xf1740)) {
F->ctext_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789((*(P1015)rt_nil_check(F->d_426)).b, NULL, &F->t_1737)), rt_str(")", 1)); b_; }));
RT_POP(xf1740);
} else {
RT_POP(xf1740);
int x1741 = rt_xcur;
if (0 || x1741 == ex_compile_error_1) {
F->ok_1734 = 0;
} else {
rt_raise(x1741);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
F->ok_1734 = (rt_r_echk(F->ok_1734) && ((*(P1038)rt_nil_check(g_code_1069)).head == NULL));
g_code_1069 = F->saved_1739;
}
if (((!rt_r_echk(F->ok_1734)) || (((*(P1015)rt_nil_check(F->d_426)).a != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_1737)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P1034)rt_nil_check(F->v_1735)).kind) == (((rt_int)4LL)))) {
(*(P1034)rt_nil_check(F->v_1735)).t = F->t_1737;
(*(P1034)rt_nil_check(F->v_1735)).i = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(F->t_1737))).lits, &(((P1008)rt_nil_check((*(P1034)rt_nil_check(F->v_1735)).s))->all));
}
(*(P1015)rt_nil_check(F->d_426)).flag = ((rt_int)1LL);
F->y_1736 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->d_426)).name);
(*(P1025)rt_nil_check(F->y_1736)).t = F->t_1737;
(*(P1025)rt_nil_check(F->y_1736)).c = f_new_cons_184();
(*(P1025)rt_nil_check(F->y_1736)).mv = F->v_1735;
if ((rt_r_ichk((*(P1034)rt_nil_check(F->v_1735)).kind) == (((rt_int)1LL)))) {
(*(P1025)rt_nil_check(F->y_1736)).mvalue = rt_r_ichk((*(P1034)rt_nil_check(F->v_1735)).i);
(*(P1025)rt_nil_check(F->y_1736)).hasmv = 1;
}
(*(P1025)rt_nil_check(F->y_1736)).ro_flag = 1;
(*(P1025)rt_nil_check(F->y_1736)).access = F->ctext_1738;
f_define_168(F->y_1736, rt_r_ichk((*(P1015)rt_nil_check(F->d_426)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_431(P1015 d_428, rstr *name_429, int *ro_430) {
  struct f_exported_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_428 = d_428;
F->name_429 = name_429;
F->ro_430 = ro_430;
F->ro_430v = *F->ro_430;
F->p_1742 = NULL;
F->p_1742 = (*(P1015)rt_nil_check(F->d_428)).a;
F->ro_430v = 0;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_428)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1742 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1742)).name))->all), (*F->name_429))) {
F->ro_430v = (rt_r_ichk((*(P1015)rt_nil_check(F->p_1742)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1742 = (*(P1015)rt_nil_check(F->p_1742)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_430v)) (*F->ro_430) = F->ro_430v;
  RT_FPOP();
  return F->result_;
}

static P1025 f_copy_sym_433(P1025 y_432) {
  struct f_copy_sym_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_432 = y_432;
F->z_1743 = NULL;
{ R1026 *cell1744 = rt_alloc(sizeof(R1026));
(*cell1744).name = NULL;
(*cell1744).t = NULL;
(*cell1744).c = NULL;
(*cell1744).access = NULL;
(*cell1744).cname = NULL;
(*cell1744).st = NULL;
(*cell1744).decl = NULL;
(*cell1744).params = NULL;
(*cell1744).result = NULL;
(*cell1744).members = NULL;
(*cell1744).mnext = NULL;
(*cell1744).binds = NULL;
(*cell1744).insts = NULL;
(*cell1744).env = NULL;
(*cell1744).chain = NULL;
(*cell1744).stack = NULL;
(*cell1744).owner = NULL;
(*cell1744).gctx = NULL;
(*cell1744).mv = NULL;
(*cell1744).reqs = NULL;
(*cell1744).home = NULL;
(*cell1744).capn = NULL;
(*cell1744).tbinds = NULL;
(*cell1744).loc = NULL;
(*cell1744).reqs_sym = NULL;
F->z_1743 = cell1744;
}
(*(P1025)rt_nil_check(F->z_1743)).kind = rt_r_ichk((*(P1025)rt_nil_check(F->y_432)).kind);
(*(P1025)rt_nil_check(F->z_1743)).name = (*(P1025)rt_nil_check(F->y_432)).name;
(*(P1025)rt_nil_check(F->z_1743)).t = (*(P1025)rt_nil_check(F->y_432)).t;
(*(P1025)rt_nil_check(F->z_1743)).c = (*(P1025)rt_nil_check(F->y_432)).c;
(*(P1025)rt_nil_check(F->z_1743)).access = (*(P1025)rt_nil_check(F->y_432)).access;
(*(P1025)rt_nil_check(F->z_1743)).cname = (*(P1025)rt_nil_check(F->y_432)).cname;
(*(P1025)rt_nil_check(F->z_1743)).ro_flag = rt_r_echk((*(P1025)rt_nil_check(F->y_432)).ro_flag);
(*(P1025)rt_nil_check(F->z_1743)).mvalue = rt_r_ichk((*(P1025)rt_nil_check(F->y_432)).mvalue);
(*(P1025)rt_nil_check(F->z_1743)).hasmv = rt_r_echk((*(P1025)rt_nil_check(F->y_432)).hasmv);
(*(P1025)rt_nil_check(F->z_1743)).st = (*(P1025)rt_nil_check(F->y_432)).st;
(*(P1025)rt_nil_check(F->z_1743)).decl = (*(P1025)rt_nil_check(F->y_432)).decl;
(*(P1025)rt_nil_check(F->z_1743)).params = (*(P1025)rt_nil_check(F->y_432)).params;
(*(P1025)rt_nil_check(F->z_1743)).result = (*(P1025)rt_nil_check(F->y_432)).result;
(*(P1025)rt_nil_check(F->z_1743)).level = rt_r_ichk((*(P1025)rt_nil_check(F->y_432)).level);
(*(P1025)rt_nil_check(F->z_1743)).byref = rt_r_echk((*(P1025)rt_nil_check(F->y_432)).byref);
(*(P1025)rt_nil_check(F->z_1743)).members = (*(P1025)rt_nil_check(F->y_432)).members;
(*(P1025)rt_nil_check(F->z_1743)).env = (*(P1025)rt_nil_check(F->y_432)).env;
F->result_ = F->z_1743;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_435(P1015 d_434) {
  struct f_gen_capsule_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_434 = d_434;
F->y_1745 = NULL;
F->y_1745 = f_new_sym_181((((rt_int)8LL)), (*(P1015)rt_nil_check(F->d_434)).name);
F->saved_1746 = NULL;
F->saved_1746 = g_suppress_1089;
F->p_1747 = NULL;
F->p_1747 = (*(P1015)rt_nil_check(F->d_434)).b;
F->tail_1748 = NULL;
(*(P1025)rt_nil_check(F->y_1745)).decl = F->d_434;
while ((F->p_1747 != NULL)) {
F->pm_1749 = NULL;
{ R1028 *cell1750 = rt_alloc(sizeof(R1028));
(*cell1750).name = NULL;
(*cell1750).t = NULL;
(*cell1750).c = NULL;
(*cell1750).cfield = NULL;
(*cell1750).next = NULL;
F->pm_1749 = cell1750;
}
(*(P1027)rt_nil_check(F->pm_1749)).name = (*(P1015)rt_nil_check(F->p_1747)).name;
(*(P1027)rt_nil_check(F->pm_1749)).mode = rt_r_ichk((*(P1015)rt_nil_check(F->p_1747)).ival);
(*(P1027)rt_nil_check(F->pm_1749)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1747)).a, &(*(P1027)rt_nil_check(F->pm_1749)).c);
if ((F->tail_1748 == NULL)) {
(*(P1025)rt_nil_check(F->y_1745)).params = F->pm_1749;
} else {
(*(P1027)rt_nil_check(F->tail_1748)).next = F->pm_1749;
}
F->tail_1748 = F->pm_1749;
F->p_1747 = (*(P1015)rt_nil_check(F->p_1747)).next;
}
if (((*(P1015)rt_nil_check(F->d_434)).b == NULL)) {
g_suppress_1089 = f_suppressing_499((*(P1015)rt_nil_check(F->d_434)).prags);
f_elaborate_capsule_444(F->d_434, F->y_1745, NULL, F->d_434);
g_suppress_1089 = F->saved_1746;
}
f_define_168(F->y_1745, rt_r_ichk((*(P1015)rt_nil_check(F->d_434)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_439(P1015 d_436, P1015 args_437, rt_int line_438) {
  struct f_capsule_params_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_436 = d_436;
F->args_437 = args_437;
F->line_438 = line_438;
F->p_1751 = NULL;
F->p_1751 = (*(P1015)rt_nil_check(F->d_436)).b;
F->a_1752 = NULL;
F->a_1752 = F->args_437;
F->t_1753 = NULL;
F->vt_1754 = NULL;
F->c_1755 = NULL;
while (((F->p_1751 != NULL) && (F->a_1752 != NULL))) {
F->t_1753 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1751)).a, &F->c_1755);
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_1751)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_438, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->p_1751)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->p_1751)).ival) == (((rt_int)4LL))))) {
F->lv_1756 = NULL;
F->lc_1757 = NULL;
F->ro_1758 = RT_R_EUNDEF;
F->y_1759 = NULL;
F->y_1759 = f_new_sym_181((((rt_int)1LL)), (*(P1015)rt_nil_check(F->p_1751)).name);
f_lvalue_758(F->a_1752, &F->lv_1756, &F->vt_1754, &F->lc_1757, &F->ro_1758);
f_check_type_232(F->vt_1754, F->t_1753, F->line_438);
if ((rt_r_echk(F->ro_1758) && (rt_r_ichk((*(P1015)rt_nil_check(F->p_1751)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_438, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1751)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_1071)) {
F->f_1760 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1751)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1753)), rt_str(" *", 2)), F->f_1760), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1760), rt_str(" = &", 4)), (((P1008)rt_nil_check(F->lv_1756))->all)), rt_str(";", 1)); b_; }));
(*(P1025)rt_nil_check(F->y_1759)).level = rt_r_ichk(g_cur_level_1072);
(*(P1025)rt_nil_check(F->y_1759)).access = f_mk_3(&F->f_1760);
(*(P1025)rt_nil_check(F->y_1759)).byref = 1;
} else {
F->g_1761 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1751)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1753)), rt_str(" *", 2)), F->g_1761), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1761), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1761, rt_str(" = &", 4)), (((P1008)rt_nil_check(F->lv_1756))->all)), rt_str(";", 1)); b_; }));
(*(P1025)rt_nil_check(F->y_1759)).level = ((rt_int)0LL);
(*(P1025)rt_nil_check(F->y_1759)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1761), rt_str(")", 1)); b_; }));
}
(*(P1025)rt_nil_check(F->y_1759)).t = F->t_1753;
(*(P1025)rt_nil_check(F->y_1759)).c = F->lc_1757;
(*(P1025)rt_nil_check(F->y_1759)).ro_flag = (rt_r_ichk((*(P1015)rt_nil_check(F->p_1751)).ival) == (((rt_int)4LL)));
f_define_168(F->y_1759, F->line_438);
} else {
F->y_1762 = NULL;
F->y_1762 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1751)).name);
F->v_1763 = rt_str_copy(f_gexpr_789(F->a_1752, F->t_1753, &F->vt_1754));
f_check_type_232(F->vt_1754, F->t_1753, F->line_438);
{
F->access_1764 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1751)).name))->all), F->t_1753));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1764, rt_str(" = ", 3)), f_copy_code_409(F->t_1753, &F->v_1763)), rt_str(";", 1)); b_; }));
f_bind_511(F->y_1762, &F->access_1764);
}
(*(P1025)rt_nil_check(F->y_1762)).t = F->t_1753;
(*(P1025)rt_nil_check(F->y_1762)).c = F->c_1755;
(*(P1025)rt_nil_check(F->y_1762)).ro_flag = 1;
f_define_168(F->y_1762, F->line_438);
}
F->p_1751 = (*(P1015)rt_nil_check(F->p_1751)).next;
F->a_1752 = (*(P1015)rt_nil_check(F->a_1752)).next;
}
if (((F->p_1751 != NULL) || (F->a_1752 != NULL))) {
f_fail_23(F->line_438, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_436)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_444(P1015 d_440, P1025 y_441, P1015 args_442, P1015 owner_443) {
  struct f_elaborate_capsule_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_440 = d_440;
F->y_441 = y_441;
F->args_442 = args_442;
F->owner_443 = owner_443;
F->cr_1765 = NULL;
F->ctx_1766 = NULL;
F->saved_gotos_1767 = NULL;
F->m_1768 = NULL;
F->p_1769 = NULL;
F->p_1769 = (*(P1015)rt_nil_check(F->d_440)).a;
F->ro_1770 = RT_R_EUNDEF;
{ R1043 *cell1771 = rt_alloc(sizeof(R1043));
(*cell1771).d = NULL;
(*cell1771).next = NULL;
F->cr_1765 = cell1771;
}
(*(P1042)rt_nil_check(F->cr_1765)).d = F->d_440;
(*(P1042)rt_nil_check(F->cr_1765)).next = g_caps_1074;
g_caps_1074 = F->cr_1765;
f_open_scope_177();
(*(P1042)rt_nil_check(F->cr_1765)).depth = rt_r_ichk(g_depth_1058);
if (((*(P1015)rt_nil_check(F->d_440)).b != NULL)) {
f_capsule_params_439(F->d_440, F->args_442, rt_r_ichk((*(P1015)rt_nil_check(F->owner_443)).line));
}
{ R1033 *cell1772 = rt_alloc(sizeof(R1033));
(*cell1772).imps = NULL;
(*cell1772).next = NULL;
F->ctx_1766 = cell1772;
}
(*(P1032)rt_nil_check(F->ctx_1766)).depth = rt_r_ichk(g_depth_1058);
(*(P1032)rt_nil_check(F->ctx_1766)).imps = (*(P1015)rt_nil_check(F->d_440)).d;
(*(P1032)rt_nil_check(F->ctx_1766)).all_imp = (rt_r_ichk((*(P1015)rt_nil_check(F->d_440)).flag) >= ((rt_int)2LL));
(*(P1032)rt_nil_check(F->ctx_1766)).next = g_fctx_1073;
g_fctx_1073 = F->ctx_1766;
F->saved_gotos_1767 = g_gotos_1093;
g_gotos_1093 = NULL;
f_declare_labels_575((*(P1015)rt_nil_check(F->d_440)).c);
f_declare_body_425((*(P1015)rt_nil_check(F->d_440)).c);
f_capsule_body_582((*(P1015)rt_nil_check(F->d_440)).c);
{
F->w_1773 = NULL;
{ R1045 *cell1774 = rt_alloc(sizeof(R1045));
(*cell1774).d = NULL;
(*cell1774).w = NULL;
(*cell1774).next = NULL;
F->w_1773 = cell1774;
}
(*(P1044)rt_nil_check(F->w_1773)).d = F->owner_443;
(*(P1044)rt_nil_check(F->w_1773)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_569((*(P1015)rt_nil_check(F->d_440)).c); b_; }));
(*(P1044)rt_nil_check(F->w_1773)).next = g_cap_waits_1075;
g_cap_waits_1075 = F->w_1773;
}
g_fctx_1073 = (*(P1032)rt_nil_check(g_fctx_1073)).next;
F->m_1768 = g_scope_stack_1059;
while (((F->m_1768 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).depth) == rt_r_ichk(g_depth_1058)))) {
if (((((rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).kind) == (((rt_int)5LL))) && ((*(P1025)rt_nil_check(F->m_1768)).t == NULL)) && ((*(P1025)rt_nil_check(F->m_1768)).decl != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->m_1768)).decl)).kind) == (((rt_int)43LL))))) {
(*(P1025)rt_nil_check(F->m_1768)).t = f_new_type_318(F->m_1768, f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->d_440)).line)), &(*(P1025)rt_nil_check(F->m_1768)).c);
} else if ((((rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).kind) == (((rt_int)6LL)))) && ((*(P1025)rt_nil_check(F->m_1768)).t == NULL))) {
(*(P1025)rt_nil_check(F->m_1768)).t = f_resolve_subtype_268((*(P1025)rt_nil_check(F->m_1768)).st, &(*(P1025)rt_nil_check(F->m_1768)).c);
} else if (((rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->m_1768)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_464((*(P1025)rt_nil_check(F->m_1768)).t);
}
F->m_1768 = (*(P1025)rt_nil_check(F->m_1768)).stack;
}
F->m_1768 = g_scope_stack_1059;
while (((F->m_1768 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->m_1768)).depth) == rt_r_ichk(g_depth_1058)))) {
if (f_exported_431(F->d_440, &(((P1008)rt_nil_check((*(P1025)rt_nil_check(F->m_1768)).name))->all), &F->ro_1770)) {
F->z_1775 = NULL;
F->z_1775 = f_copy_sym_433(F->m_1768);
if (rt_r_echk(F->ro_1770)) {
(*(P1025)rt_nil_check(F->z_1775)).ro_flag = 1;
}
(*(P1025)rt_nil_check(F->z_1775)).mnext = (*(P1025)rt_nil_check(F->y_441)).members;
(*(P1025)rt_nil_check(F->y_441)).members = F->z_1775;
}
F->m_1768 = (*(P1025)rt_nil_check(F->m_1768)).stack;
}
while ((F->p_1769 != NULL)) {
if ((((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1769)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1769)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1769)).name))->all)) == NULL) || ((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1769)).name))->all)))).depth != rt_r_ichk(g_depth_1058))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_440)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1769)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_440)).name))->all)); b_; }));
}
F->p_1769 = (*(P1015)rt_nil_check(F->p_1769)).next;
}
f_close_scope_178();
g_caps_1074 = (*(P1042)rt_nil_check(g_caps_1074)).next;
g_gotos_1093 = F->saved_gotos_1767;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_447(P1015 d_445, rstr *op_446) {
  struct f_exports_op_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_445 = d_445;
F->op_446 = op_446;
F->p_1776 = NULL;
if ((F->d_445 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1776 = (*(P1015)rt_nil_check(F->d_445)).a;
while ((F->p_1776 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1776)).name))->all), (*F->op_446))) {
F->result_ = 1;
goto ret_;
}
F->p_1776 = (*(P1015)rt_nil_check(F->p_1776)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1008 f_renamed_450(P1015 d_448, P1025 z_449) {
  struct f_renamed_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_448 = d_448;
F->z_449 = z_449;
F->r_1777 = NULL;
F->r_1777 = (*(P1015)rt_nil_check(F->d_448)).c;
while ((F->r_1777 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->r_1777)).name))->all), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->z_449)).name))->all))) {
F->result_ = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->r_1777)).a)).name;
goto ret_;
}
F->r_1777 = (*(P1015)rt_nil_check(F->r_1777)).next;
}
F->result_ = (*(P1025)rt_nil_check(F->z_449)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_453(P1015 f_451, P1015 a_452) {
  struct f_cap_tt_match_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_451 = f_451;
F->a_452 = a_452;
F->x_1778 = NULL;
F->x_1778 = F->f_451;
F->y_1779 = NULL;
F->y_1779 = F->a_452;
while (((F->x_1778 != NULL) && (F->y_1779 != NULL))) {
F->ok1_1780 = RT_R_EUNDEF;
F->ok2_1781 = RT_R_EUNDEF;
F->v1_1782 = NULL;
F->v1_1782 = f_meval_375(F->x_1778, &F->ok1_1780);
F->v2_1783 = NULL;
F->v2_1783 = f_meval_375(F->y_1779, &F->ok2_1781);
if ((((!rt_r_echk(F->ok1_1780)) || (!rt_r_echk(F->ok2_1781))) || (rt_r_ichk((*(P1034)rt_nil_check(F->v1_1782)).kind) != rt_r_ichk((*(P1034)rt_nil_check(F->v2_1783)).kind)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1034)rt_nil_check(F->v1_1782)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1034)rt_nil_check(F->v1_1782)).kind) == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->v1_1782)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->v2_1783)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if ((rt_r_ichk((*(P1034)rt_nil_check(F->v1_1782)).i) != rt_r_ichk((*(P1034)rt_nil_check(F->v2_1783)).i))) {
F->result_ = 0;
goto ret_;
}
F->x_1778 = (*(P1015)rt_nil_check(F->x_1778)).next;
F->y_1779 = (*(P1015)rt_nil_check(F->y_1779)).next;
}
F->result_ = ((F->x_1778 == NULL) && (F->y_1779 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_pick_capsule_455(P1015 d_454) {
  struct f_pick_capsule_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_454 = d_454;
F->y_1784 = NULL;
F->y_1784 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_454)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1785 = NULL;
F->fit_1786 = NULL;
F->n_1787 = RT_R_IUNDEF;
F->n_1787 = ((rt_int)0LL);
while ((F->y_1784 != NULL)) {
if ((rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1784)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_454)).name))->all)) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_1784)).kind) == (((rt_int)8LL))))) {
F->n_1787 = rt_add(rt_r_ichk(F->n_1787), ((rt_int)1LL));
if ((F->first_1785 == NULL)) {
F->first_1785 = F->y_1784;
}
if ((((F->fit_1786 == NULL) && f_fits_905(F->y_1784, (*(P1015)rt_nil_check(F->d_454)).b)) && f_cap_tt_match_453((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1784)).decl)).e, (*(P1015)rt_nil_check(F->d_454)).e))) {
F->fit_1786 = F->y_1784;
}
}
F->y_1784 = (*(P1025)rt_nil_check(F->y_1784)).chain;
}
if ((rt_r_ichk(F->n_1787) > ((rt_int)1LL))) {
if ((F->fit_1786 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_454)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_454)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1786;
goto ret_;
}
if ((F->first_1785 == NULL)) {
F->result_ = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_454)).name))->all));
goto ret_;
}
F->result_ = F->first_1785;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_capsule_instance_458(P1025 g_456, P1015 d_457) {
  struct f_capsule_instance_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_456 = g_456;
F->d_457 = d_457;
F->gd_1788 = NULL;
F->gd_1788 = (*(P1025)rt_nil_check(F->g_456)).decl;
F->pat_1789 = NULL;
F->pat_1789 = (*(P1015)rt_nil_check(F->gd_1788)).b;
F->binds_1790 = NULL;
F->binds_1790 = f_need_binds_716(F->gd_1788, f_tt_binds_695(F->gd_1788, (*(P1015)rt_nil_check(F->pat_1789)).e, (*(P1015)rt_nil_check(F->d_457)).e, rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).line)), rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).line));
F->inst_1791 = NULL;
F->inst_1791 = (*(P1025)rt_nil_check(F->g_456)).insts;
F->saved_env_1792 = NULL;
F->saved_env_1792 = g_genv_1056;
F->saved_gdepth_1793 = RT_R_IUNDEF;
F->saved_gdepth_1793 = rt_r_ichk(g_gdepth_1088);
if (((rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1791 != NULL)) {
if (f_same_binds_687((*(P1025)rt_nil_check(F->inst_1791)).tbinds, F->binds_1790)) {
F->result_ = F->inst_1791;
goto ret_;
}
F->inst_1791 = (*(P1025)rt_nil_check(F->inst_1791)).insts;
}
}
F->inst_1791 = f_new_sym_181((((rt_int)8LL)), (*(P1015)rt_nil_check(F->pat_1789)).name);
(*(P1025)rt_nil_check(F->inst_1791)).decl = F->pat_1789;
(*(P1025)rt_nil_check(F->inst_1791)).tbinds = F->binds_1790;
f_open_scope_177();
{
F->b_1794 = NULL;
F->b_1794 = F->binds_1790;
while ((F->b_1794 != NULL)) {
f_define_168(F->b_1794, rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).line));
F->b_1794 = (*(P1025)rt_nil_check(F->b_1794)).mnext;
}
}
g_genv_1056 = (*(P1025)rt_nil_check(F->g_456)).env;
g_gdepth_1088 = rt_r_ichk(g_depth_1058);
f_elaborate_capsule_444(F->pat_1789, F->inst_1791, (*(P1015)rt_nil_check(F->d_457)).b, F->d_457);
g_genv_1056 = F->saved_env_1792;
g_gdepth_1088 = rt_r_ichk(F->saved_gdepth_1793);
f_close_scope_178();
if (((rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1015)rt_nil_check(F->d_457)).flag) != ((rt_int)3LL)))) {
(*(P1025)rt_nil_check(F->inst_1791)).insts = (*(P1025)rt_nil_check(F->g_456)).insts;
(*(P1025)rt_nil_check(F->g_456)).insts = F->inst_1791;
}
F->result_ = F->inst_1791;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_460(P1025 y_459) {
  struct f_configure_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_459 = y_459;
F->m_1795 = NULL;
F->m_1795 = (*(P1025)rt_nil_check(F->y_459)).members;
while ((F->m_1795 != NULL)) {
F->n_1796 = rt_str_copy((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->m_1795)).name))->all));
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->m_1795)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1025)rt_nil_check(F->m_1795)).hasmv)) && (((rt_str_eq(F->n_1796, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1796, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1796, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1796, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1796), rt_str(" = ", 3)), f_itos_7(rt_r_ichk((*(P1025)rt_nil_check(F->m_1795)).mvalue))), rt_str(";", 1)); b_; }));
}
F->m_1795 = (*(P1025)rt_nil_check(F->m_1795)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_462(P1015 d_461) {
  struct f_gen_expose_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_461 = d_461;
F->y_1797 = NULL;
F->y_1797 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all));
F->m_1798 = NULL;
F->p_1799 = NULL;
F->p_1799 = (*(P1015)rt_nil_check(F->d_461)).a;
F->r_1800 = NULL;
F->r_1800 = (*(P1015)rt_nil_check(F->d_461)).c;
if ((((F->y_1797 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_1797)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1797)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1797 = f_capsule_instance_458(F->y_1797, F->d_461);
} else {
F->y_1797 = f_pick_capsule_455(F->d_461);
if (((F->y_1797 == NULL) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_1797)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P1015)rt_nil_check(F->d_461)).e != NULL) && (((*(P1025)rt_nil_check(F->y_1797)).decl == NULL) || ((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1797)).decl)).e == NULL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1797)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_460(F->y_1797);
}
if ((((*(P1025)rt_nil_check(F->y_1797)).tbinds != NULL) || ((((*(P1025)rt_nil_check(F->y_1797)).decl != NULL) && ((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1797)).decl)).e != NULL)) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_1797)).kind) == (((rt_int)10LL)))))) {
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).flag) == ((rt_int)3LL)))) {
F->inst_1801 = NULL;
F->inst_1801 = f_new_sym_181((((rt_int)8LL)), (*(P1025)rt_nil_check(F->y_1797)).name);
(*(P1025)rt_nil_check(F->inst_1801)).decl = (*(P1025)rt_nil_check(F->y_1797)).decl;
f_elaborate_capsule_444((*(P1025)rt_nil_check(F->y_1797)).decl, F->inst_1801, (*(P1015)rt_nil_check(F->d_461)).b, F->d_461);
F->y_1797 = F->inst_1801;
} else if ((((*(P1025)rt_nil_check(F->y_1797)).decl != NULL) && ((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_1797)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1015)rt_nil_check(F->d_461)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1800 != NULL)) {
F->found_1802 = RT_R_EUNDEF;
F->found_1802 = 0;
F->m_1798 = (*(P1025)rt_nil_check(F->y_1797)).members;
while ((F->m_1798 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->m_1798)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->r_1800)).name))->all))) {
F->found_1802 = 1;
}
F->m_1798 = (*(P1025)rt_nil_check(F->m_1798)).mnext;
}
if ((!rt_r_echk(F->found_1802))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->r_1800)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all)); b_; }));
}
F->r_1800 = (*(P1015)rt_nil_check(F->r_1800)).next;
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).ival) == ((rt_int)1LL))) {
F->m_1798 = (*(P1025)rt_nil_check(F->y_1797)).members;
while ((F->m_1798 != NULL)) {
F->z_1803 = NULL;
F->z_1803 = f_copy_sym_433(F->m_1798);
(*(P1025)rt_nil_check(F->z_1803)).name = f_renamed_450(F->d_461, F->m_1798);
f_define_168(F->z_1803, rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line));
F->m_1798 = (*(P1025)rt_nil_check(F->m_1798)).mnext;
}
goto ret_;
}
while ((F->p_1799 != NULL)) {
F->found_1804 = RT_R_EUNDEF;
F->found_1804 = 0;
F->m_1798 = (*(P1025)rt_nil_check(F->y_1797)).members;
while ((F->m_1798 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->m_1798)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1799)).name))->all))) {
F->z_1805 = NULL;
F->z_1805 = f_copy_sym_433(F->m_1798);
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_1799)).ival) == ((rt_int)1LL))) {
(*(P1025)rt_nil_check(F->z_1805)).ro_flag = 1;
}
(*(P1025)rt_nil_check(F->z_1805)).name = f_renamed_450(F->d_461, F->m_1798);
f_define_168(F->z_1805, rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line));
F->found_1804 = 1;
}
F->m_1798 = (*(P1025)rt_nil_check(F->m_1798)).mnext;
}
if ((!rt_r_echk(F->found_1804))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_461)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1799)).name))->all), rt_str(" is not exported by ", 20)), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_461)).name))->all)); b_; }));
}
F->p_1799 = (*(P1015)rt_nil_check(F->p_1799)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_464(P1021 t_463) {
  struct f_finish_ptr_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_463 = t_463;
F->d_1806 = NULL;
F->d_1806 = (*(P1021)rt_nil_check(F->t_463)).decl;
F->p_1807 = NULL;
F->c_1808 = NULL;
F->dummy_1809 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1809, rt_str(" ", 1));
if (((*(P1021)rt_nil_check(F->t_463)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1811 = ((rt_int)1LL), hi1812 = ((rt_int)2LL);
for (rt_int it1813 = lo1811; it1813 <= hi1812; it1813++) {
F->pass_1810 = it1813;
if ((F->pass_1810 == ((rt_int)1LL))) {
F->p_1807 = (*(P1015)rt_nil_check(F->d_1806)).d;
} else {
F->p_1807 = (*(P1015)rt_nil_check(F->d_1806)).b;
}
while ((F->p_1807 != NULL)) {
F->y_1814 = NULL;
F->y_1814 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1807)).name);
F->pc_1815 = NULL;
(*(P1025)rt_nil_check(F->y_1814)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1807)).a, &F->pc_1815);
(*(P1025)rt_nil_check(F->y_1814)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1814, rt_r_ichk((*(P1015)rt_nil_check(F->d_1806)).line));
F->p_1807 = (*(P1015)rt_nil_check(F->p_1807)).next;
}
}
}
(*(P1021)rt_nil_check(F->t_463)).target = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_1806)).a, &F->c_1808);
if (((*(P1015)rt_nil_check(F->d_1806)).c != NULL)) {
f_check_rep_332((*(P1015)rt_nil_check(F->d_1806)).c, (*(P1021)rt_nil_check(F->t_463)).target, F->c_1808, 1, 1, F->d_1806);
(*(P1021)rt_nil_check(F->t_463)).repn = (*(P1015)rt_nil_check(F->d_1806)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1809, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_463), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1809, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1021)rt_nil_check(F->t_463)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1015 f_ptr_args_466(P1017 c_465) {
  struct f_ptr_args_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_465 = c_465;
if ((F->c_465 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1017)rt_nil_check(F->c_465)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_471(P1015 formals_467, P1015 actuals_468, rstr *cell_469, rt_int line_470) {
  struct f_bind_ptr_params_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_467 = formals_467;
F->actuals_468 = actuals_468;
F->cell_469 = cell_469;
F->line_470 = line_470;
F->p_1816 = NULL;
F->p_1816 = F->formals_467;
F->a_1817 = NULL;
F->a_1817 = F->actuals_468;
F->vt_1818 = NULL;
if ((f_list_len_71(F->formals_467) != f_list_len_71(F->actuals_468))) {
f_fail_23(F->line_470, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_467))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1816 != NULL)) {
F->pc_1819 = NULL;
F->y_1820 = NULL;
F->y_1820 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1816)).name);
(*(P1025)rt_nil_check(F->y_1820)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1816)).a, &F->pc_1819);
{
F->v_1821 = rt_str_copy(f_gexpr_789(F->a_1817, (*(P1025)rt_nil_check(F->y_1820)).t, &F->vt_1818));
F->pv_1822 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1818, (*(P1025)rt_nil_check(F->y_1820)).t, F->line_470);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1025)rt_nil_check(F->y_1820)).t), rt_str(" ", 1)), F->pv_1822), rt_str(" = ", 3)), f_checked_213((*(P1025)rt_nil_check(F->y_1820)).t, F->pc_1819, &F->v_1821)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_469), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_469), rt_str("->p_", 4)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1816)).name))->all))), rt_str(" = ", 3)), F->pv_1822), rt_str(";", 1)); b_; }));
}
(*(P1025)rt_nil_check(F->y_1820)).access = f_mk_3(&F->pv_1822);
}
f_define_168(F->y_1820, F->line_470);
F->p_1816 = (*(P1015)rt_nil_check(F->p_1816)).next;
F->a_1817 = (*(P1015)rt_nil_check(F->a_1817)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_476(P1015 s_472, rstr *lv_473, P1021 t_474, P1017 c_475) {
  struct f_alloc_cell_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_472 = s_472;
F->lv_473 = lv_473;
F->t_474 = t_474;
F->c_475 = c_475;
F->d_1823 = NULL;
F->d_1823 = (*(P1021)rt_nil_check(F->t_474)).decl;
F->tc_1824 = NULL;
F->vt_1825 = NULL;
F->pt_1826 = rt_str_copy(f_ctype_234(F->t_474));
F->cell_1827 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346((*(P1021)rt_nil_check(F->t_474)).target)) {
F->fn_1828 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1080 = 1;
g_uses_findyn_1082 = 1;
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1828), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1828), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1008)rt_nil_check((*(P1025)rt_nil_check(g_func_sym_1083)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1826), rt_str(")cell_)->all)", 13)); b_; }), (*(P1021)rt_nil_check(F->t_474)).target)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1826), rt_str(" ", 1)), F->cell_1827), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1827), rt_str(", ", 2)), F->fn_1828), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1826), rt_str(" ", 1)), F->cell_1827), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1827), rt_str(", ", 2)), F->fn_1828), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1826), rt_str(" ", 1)), F->cell_1827), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1827), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_471((*(P1015)rt_nil_check(F->d_1823)).d, f_ptr_args_466(F->c_475), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1015)rt_nil_check(F->s_472)).line));
f_bind_ptr_params_471((*(P1015)rt_nil_check(F->d_1823)).b, (*(P1015)rt_nil_check(F->s_472)).b, &F->cell_1827, rt_r_ichk((*(P1015)rt_nil_check(F->s_472)).line));
F->vt_1825 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_1823)).a, &F->tc_1824);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1827, rt_str("->all", 5)); b_; }), (*(P1021)rt_nil_check(F->t_474)).target, F->tc_1824);
f_close_scope_178();
if (((*(P1015)rt_nil_check(F->s_472)).c != NULL)) {
F->v_1829 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->s_472)).c, (*(P1021)rt_nil_check(F->t_474)).target, F->tc_1824, &F->vt_1825));
f_check_type_232(F->vt_1825, (*(P1021)rt_nil_check(F->t_474)).target, rt_r_ichk((*(P1015)rt_nil_check(F->s_472)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1827, rt_str("->all", 5)); b_; }), (*(P1021)rt_nil_check(F->t_474)).target, &F->v_1829, F->tc_1824); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_473), rt_str(" = ", 3)), F->cell_1827), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1017 f_freeze_args_480(P1017 c_477, P1021 t_478, rt_int line_479) {
  struct f_freeze_args_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_477 = c_477;
F->t_478 = t_478;
F->line_479 = line_479;
F->r_1830 = NULL;
F->r_1830 = f_copy_cons_206(F->c_477);
F->p_1831 = NULL;
F->p_1831 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_478)).decl)).d;
F->a_1832 = NULL;
F->a_1832 = (*(P1017)rt_nil_check(F->c_477)).args;
F->head_1833 = NULL;
F->tail_1834 = NULL;
F->saved_1835 = NULL;
F->saved_1835 = g_st_field_1077;
if ((f_list_len_71(F->p_1831) != f_list_len_71(F->a_1832))) {
f_fail_23(F->line_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_478)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1831))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1832 != NULL)) {
F->pc_1836 = NULL;
F->vt_1837 = NULL;
F->pt_1838 = NULL;
F->pt_1838 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1831)).a, &F->pc_1836);
F->nm_1839 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1840 = NULL;
F->y_1840 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1839));
F->n_1841 = NULL;
F->n_1841 = f_nn_65((((rt_int)7LL)), F->line_479);
F->v_1842 = rt_str_copy(f_gexpr_789(F->a_1832, F->pt_1838, &F->vt_1837));
F->access_1843 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1838); b_; })));
f_check_type_232(F->vt_1837, F->pt_1838, F->line_479);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1843, rt_str(" = ", 3)), f_checked_213(F->pt_1838, F->pc_1836, &F->v_1842)), rt_str(";", 1)); b_; }));
(*(P1025)rt_nil_check(F->y_1840)).t = F->pt_1838;
(*(P1025)rt_nil_check(F->y_1840)).ro_flag = 1;
f_bind_511(F->y_1840, &F->access_1843);
f_define_168(F->y_1840, F->line_479);
(*(P1015)rt_nil_check(F->n_1841)).name = f_mk_3(&F->nm_1839);
f_append_69(&F->head_1833, &F->tail_1834, F->n_1841);
F->a_1832 = (*(P1015)rt_nil_check(F->a_1832)).next;
F->p_1831 = (*(P1015)rt_nil_check(F->p_1831)).next;
}
(*(P1017)rt_nil_check(F->r_1830)).args = F->head_1833;
g_st_field_1077 = F->saved_1835;
F->result_ = F->r_1830;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_484(P1021 t_481, P1017 c_482, P1015 src_483) {
  struct f_ptr_subtype_check_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_481 = t_481;
F->c_482 = c_482;
F->src_483 = src_483;
F->lv_1844 = NULL;
F->st_1845 = NULL;
F->sc_1846 = NULL;
F->ro_1847 = RT_R_EUNDEF;
F->cond_1848 = NULL;
F->cond_1848 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1849 = NULL;
F->b_1850 = NULL;
F->at_1851 = NULL;
F->bt_1852 = NULL;
if ((((((rt_r_ichk((*(P1021)rt_nil_check(F->t_481)).kind) != (((rt_int)8LL))) || (F->c_482 == NULL)) || ((*(P1017)rt_nil_check(F->c_482)).args == NULL)) || (F->src_483 == NULL)) || (!f_is_lvalue_752(F->src_483)))) {
goto ret_;
}
f_lvalue_758(F->src_483, &F->lv_1844, &F->st_1845, &F->sc_1846, &F->ro_1847);
if (((F->sc_1846 == NULL) || ((*(P1017)rt_nil_check(F->sc_1846)).args == NULL))) {
goto ret_;
}
F->a_1849 = (*(P1017)rt_nil_check(F->c_482)).args;
F->b_1850 = (*(P1017)rt_nil_check(F->sc_1846)).args;
while (((F->a_1849 != NULL) && (F->b_1850 != NULL))) {
F->x_1853 = rt_str_copy(f_gexpr_789(F->a_1849, NULL, &F->at_1851));
F->y_1854 = rt_str_copy(f_gexpr_789(F->b_1850, F->at_1851, &F->bt_1852));
F->cond_1848 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->cond_1848))->all), rt_str(" || !", 5)), f_eq_code_413(F->at_1851, &F->x_1853, &F->y_1854)); b_; }));
F->a_1849 = (*(P1015)rt_nil_check(F->a_1849)).next;
F->b_1850 = (*(P1015)rt_nil_check(F->b_1850)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->cond_1848))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_487(P1015 d_485, P1025 y_486) {
  struct f_normal_function_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_485 = d_485;
F->y_486 = y_486;
F->p_1855 = NULL;
F->p_1855 = (*(P1025)rt_nil_check(F->y_486)).params;
F->imp_1856 = NULL;
F->imp_1856 = (*(P1015)rt_nil_check(F->d_485)).d;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1855 != NULL)) {
if (((rt_r_ichk((*(P1027)rt_nil_check(F->p_1855)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1027)rt_nil_check(F->p_1855)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_485)).name))->all)); b_; }));
}
F->p_1855 = (*(P1027)rt_nil_check(F->p_1855)).next;
}
if ((((*(P1015)rt_nil_check(F->d_485)).d == NULL) && (rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1074 == NULL) || (rt_r_ichk(g_depth_1058) != rt_r_ichk((*(P1042)rt_nil_check(g_caps_1074)).depth)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_485)).name))->all)); b_; }));
}
while ((F->imp_1856 != NULL)) {
F->ro_1857 = RT_R_EUNDEF;
F->z_1858 = NULL;
F->z_1858 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->imp_1856)).name))->all));
if ((((F->z_1858 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->z_1858)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P1025)rt_nil_check(F->z_1858)).depth) != rt_r_ichk((*(P1042)rt_nil_check(g_caps_1074)).depth)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->imp_1856)).name))->all)); b_; }));
}
if ((f_exported_431((*(P1042)rt_nil_check(g_caps_1074)).d, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->imp_1856)).name))->all), &F->ro_1857) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1042)rt_nil_check(g_caps_1074)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_485)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->imp_1856)).name))->all)); b_; }));
}
F->imp_1856 = (*(P1015)rt_nil_check(F->imp_1856)).next;
}
(*(P1025)rt_nil_check(F->y_486)).capn = (*(P1042)rt_nil_check(g_caps_1074)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_490(P1015 d_488, P1025 y_489) {
  struct f_foreign_body_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_488 = d_488;
F->y_489 = y_489;
F->pm_1859 = NULL;
F->pm_1859 = (*(P1025)rt_nil_check(F->y_489)).params;
F->proto_1860 = NULL;
F->proto_1860 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1861 = NULL;
F->args_1861 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1862 = rt_str_copy(f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_488)).name))->all)));
if (((*(P1015)rt_nil_check(F->d_488)).c != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_488)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_488)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1859 != NULL)) {
if (((rt_r_ichk((*(P1027)rt_nil_check(F->pm_1859)).mode) != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1027)rt_nil_check(F->pm_1859)).t)) || ((*(P1021)rt_nil_check(f_base_of_223((*(P1027)rt_nil_check(F->pm_1859)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_488)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1008)rt_nil_check(F->proto_1860))->all)).len)) > ((rt_int)0LL))) {
F->proto_1860 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->proto_1860))->all), rt_str(", ", 2)); b_; }));
F->args_1861 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_1861))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1860 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->proto_1860))->all), f_ctype_234((*(P1027)rt_nil_check(F->pm_1859)).t)); b_; }));
F->args_1861 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_1861))->all), rt_str("F->", 3)), (((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_1859)).cfield))->all)); b_; }));
F->pm_1859 = (*(P1027)rt_nil_check(F->pm_1859)).next;
}
if ((((rt_int)(((((P1008)rt_nil_check(F->proto_1860))->all)).len)) == ((rt_int)0LL))) {
F->proto_1860 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_489)).result)).kind) != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1025)rt_nil_check(F->y_489)).result)) || ((*(P1021)rt_nil_check(f_base_of_223((*(P1025)rt_nil_check(F->y_489)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_488)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1025)rt_nil_check(F->y_489)).result)), rt_str(" ", 1)), F->cn_1862), rt_str("(", 1)), (((P1008)rt_nil_check(F->proto_1860))->all)), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_489)).result)).kind) == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1862, rt_str("(", 1)), (((P1008)rt_nil_check(F->args_1861))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1862), rt_str("(", 1)), (((P1008)rt_nil_check(F->args_1861))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_492(P1015 d_491) {
  struct f_declare_subprogram_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_491 = d_491;
f_define_168(f_build_subprogram_494(F->d_491), rt_r_ichk((*(P1015)rt_nil_check(F->d_491)).line));
ret_:
  RT_FPOP();
  return;
}

static P1025 f_build_subprogram_494(P1015 d_493) {
  struct f_build_subprogram_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_493 = d_493;
F->y_1863 = NULL;
F->p_1864 = NULL;
F->p_1864 = (*(P1015)rt_nil_check(F->d_493)).a;
F->tail_1865 = NULL;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).kind) == (((rt_int)46LL)))) {
F->y_1863 = f_new_sym_181((((rt_int)3LL)), (*(P1015)rt_nil_check(F->d_493)).name);
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).kind) == (((rt_int)50LL)))) {
F->y_1863 = f_new_sym_181((((rt_int)9LL)), (*(P1015)rt_nil_check(F->d_493)).name);
} else {
F->y_1863 = f_new_sym_181((((rt_int)4LL)), (*(P1015)rt_nil_check(F->d_493)).name);
}
while ((F->p_1864 != NULL)) {
F->pm_1866 = NULL;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->p_1864)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1028 *cell1867 = rt_alloc(sizeof(R1028));
(*cell1867).name = NULL;
(*cell1867).t = NULL;
(*cell1867).c = NULL;
(*cell1867).cfield = NULL;
(*cell1867).next = NULL;
F->pm_1866 = cell1867;
}
(*(P1027)rt_nil_check(F->pm_1866)).name = (*(P1015)rt_nil_check(F->p_1864)).name;
(*(P1027)rt_nil_check(F->pm_1866)).mode = rt_r_ichk((*(P1015)rt_nil_check(F->p_1864)).ival);
(*(P1027)rt_nil_check(F->pm_1866)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_1864)).a, &(*(P1027)rt_nil_check(F->pm_1866)).c);
(*(P1027)rt_nil_check(F->pm_1866)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1864)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1865 == NULL)) {
(*(P1025)rt_nil_check(F->y_1863)).params = F->pm_1866;
} else {
(*(P1027)rt_nil_check(F->tail_1865)).next = F->pm_1866;
}
F->tail_1865 = F->pm_1866;
F->p_1864 = (*(P1015)rt_nil_check(F->p_1864)).next;
}
(*(P1025)rt_nil_check(F->y_1863)).result = g_ty_void_1104;
if (((*(P1015)rt_nil_check(F->d_493)).b != NULL)) {
F->rc_1868 = NULL;
F->pm_1869 = NULL;
F->pm_1869 = (*(P1025)rt_nil_check(F->y_1863)).params;
F->saved_1870 = NULL;
F->saved_1870 = g_code_1069;
g_code_1069 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1869 != NULL)) {
F->z_1871 = NULL;
F->z_1871 = f_new_sym_181((((rt_int)2LL)), (*(P1027)rt_nil_check(F->pm_1869)).name);
(*(P1025)rt_nil_check(F->z_1871)).t = (*(P1027)rt_nil_check(F->pm_1869)).t;
(*(P1025)rt_nil_check(F->z_1871)).c = (*(P1027)rt_nil_check(F->pm_1869)).c;
(*(P1025)rt_nil_check(F->z_1871)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1871, rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).line));
F->pm_1869 = (*(P1027)rt_nil_check(F->pm_1869)).next;
}
(*(P1025)rt_nil_check(F->y_1863)).result = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_493)).b, &F->rc_1868);
f_close_scope_178();
g_code_1069 = F->saved_1870;
}
(*(P1025)rt_nil_check(F->y_1863)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_744(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_493)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1025)rt_nil_check(F->y_1863)).decl = F->d_493;
(*(P1025)rt_nil_check(F->y_1863)).level = rt_r_ichk(g_cur_level_1072);
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_493)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_1863)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1863;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_497(P1008 pr_495, rstr *p_496) {
  struct f_has_pragmat_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_495 = pr_495;
F->p_496 = p_496;
if ((F->pr_495 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1873 = ((rt_int)1LL), hi1874 = rt_sub(((rt_int)(((((P1008)rt_nil_check(F->pr_495))->all)).len)), ((rt_int)(((*F->p_496)).len)));
for (rt_int it1875 = lo1873; it1875 <= hi1874; it1875++) {
F->i_1872 = it1875;
if (((rt_str_eq(rt_str_slice((((P1008)rt_nil_check(F->pr_495))->all), F->i_1872, rt_sub(rt_add(F->i_1872, ((rt_int)(((*F->p_496)).len))), ((rt_int)1LL))), (*F->p_496)) && (rt_r_echk(rt_str_get((((P1008)rt_nil_check(F->pr_495))->all), rt_add(F->i_1872, ((rt_int)(((*F->p_496)).len))))) == 59)) && ((F->i_1872 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P1008)rt_nil_check(F->pr_495))->all), rt_sub(F->i_1872, ((rt_int)1LL)))) == 59)))) {
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

static P1008 f_suppressing_499(P1008 pr_498) {
  struct f_suppressing_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_498 = pr_498;
F->r_1876 = NULL;
F->r_1876 = g_suppress_1089;
F->i_1877 = RT_R_IUNDEF;
F->i_1877 = ((rt_int)1LL);
if ((F->pr_498 == NULL)) {
F->result_ = F->r_1876;
goto ret_;
}
if ((F->r_1876 == NULL)) {
F->r_1876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1877), ((rt_int)9LL)) <= ((rt_int)(((((P1008)rt_nil_check(F->pr_498))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1008)rt_nil_check(F->pr_498))->all), rt_r_ichk(F->i_1877), rt_add(rt_r_ichk(F->i_1877), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1878 = RT_R_IUNDEF;
F->j_1878 = rt_add(rt_r_ichk(F->i_1877), ((rt_int)9LL));
F->k_1879 = RT_R_IUNDEF;
F->k_1879 = rt_r_ichk(F->j_1878);
while ((rt_r_echk(rt_str_get((((P1008)rt_nil_check(F->pr_498))->all), rt_r_ichk(F->k_1879))) != 41)) {
if ((rt_r_echk(rt_str_get((((P1008)rt_nil_check(F->pr_498))->all), rt_r_ichk(F->k_1879))) == 44)) {
F->r_1876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1876))->all), rt_str_slice((((P1008)rt_nil_check(F->pr_498))->all), rt_r_ichk(F->j_1878), rt_sub(rt_r_ichk(F->k_1879), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1878 = rt_add(rt_r_ichk(F->k_1879), ((rt_int)1LL));
}
F->k_1879 = rt_add(rt_r_ichk(F->k_1879), ((rt_int)1LL));
}
F->r_1876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1876))->all), rt_str_slice((((P1008)rt_nil_check(F->pr_498))->all), rt_r_ichk(F->j_1878), rt_sub(rt_r_ichk(F->k_1879), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1877 = rt_r_ichk(F->k_1879);
}
F->i_1877 = rt_add(rt_r_ichk(F->i_1877), ((rt_int)1LL));
}
F->result_ = F->r_1876;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_501(rstr *x_500) {
  struct f_suppressed_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_500 = x_500;
F->w_1880 = rt_str_new(rt_add(((rt_int)(((*F->x_500)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1880, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_500)), rt_str(" ", 1)));
if ((g_suppress_1089 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1882 = ((rt_int)1LL), hi1883 = rt_add(rt_sub(((rt_int)(((((P1008)rt_nil_check(g_suppress_1089))->all)).len)), ((rt_int)((F->w_1880).len))), ((rt_int)1LL));
for (rt_int it1884 = lo1882; it1884 <= hi1883; it1884++) {
F->i_1881 = it1884;
if (rt_str_eq(rt_str_slice((((P1008)rt_nil_check(g_suppress_1089))->all), F->i_1881, rt_sub(rt_add(F->i_1881, ((rt_int)((F->w_1880).len))), ((rt_int)1LL))), F->w_1880)) {
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

static void f_element_503(P1015 e_502) {
  struct f_element_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_502 = e_502;
F->saved_1885 = NULL;
F->saved_1885 = g_suppress_1089;
g_suppress_1089 = f_suppressing_499((*(P1015)rt_nil_check(F->e_502)).prags);
f_element1_505(F->e_502);
g_suppress_1089 = F->saved_1885;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_505(P1015 e_504) {
  struct f_element1_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_504 = e_504;
F->k_1886 = RT_R_IUNDEF;
F->k_1886 = rt_r_ichk((*(P1015)rt_nil_check(F->e_504)).kind);
if (((rt_r_ichk(F->k_1886) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1015)rt_nil_check(F->e_504)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_504)).flag) == ((rt_int)3LL))))) {
f_gen_expose_462(F->e_504);
} else if ((((rt_r_ichk(F->k_1886) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1886) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1886) == (((rt_int)50LL))))) {
f_subprogram_562(F->e_504);
} else if ((rt_r_ichk(F->k_1886) == (((rt_int)51LL)))) {
F->g_1887 = NULL;
F->g_1887 = f_lookup_decl_165(F->e_504);
if ((F->g_1887 != NULL)) {
{ P1029 cell1888 = rt_alloc(sizeof *cell1888);
rt_int pv1889 = (((rt_int)4093LL));
cell1888->p_n = pv1889;
cell1888->all.lo = ((rt_int)0LL); cell1888->all.hi = pv1889;
cell1888->all.lo2 = cell1888->all.hi2 = 1;
cell1888->all.p = rt_alloc(sizeof(P1025) * (size_t)(RT_CNT(cell1888->all)) + 1);
for (rt_int i1890 = 0; i1890 < (RT_CNT(cell1888->all)); i1890++) {
cell1888->all.p[i1890] = NULL;
}
(*(P1025)rt_nil_check(F->g_1887)).env = cell1888;
}
{ rt_int lo1892 = ((rt_int)0LL), hi1893 = (((rt_int)4093LL));
for (rt_int it1894 = lo1892; it1894 <= hi1893; it1894++) {
F->i_1891 = it1894;
(((P1029)rt_nil_check((*(P1025)rt_nil_check(F->g_1887)).env))->all).p[(rt_index(F->i_1891, (((P1029)rt_nil_check((*(P1025)rt_nil_check(F->g_1887)).env))->all).lo, (((P1029)rt_nil_check((*(P1025)rt_nil_check(F->g_1887)).env))->all).hi) - (((P1029)rt_nil_check((*(P1025)rt_nil_check(F->g_1887)).env))->all).lo)] = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(F->i_1891, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((rt_r_ichk(F->k_1886) == (((rt_int)43LL))) && ((*(P1015)rt_nil_check(F->e_504)).c != NULL)) && ((*(P1015)rt_nil_check(F->e_504)).b == NULL))) {
F->c_1895 = NULL;
F->st_1896 = NULL;
F->st_1896 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_504)).line));
F->t_1897 = NULL;
(*(P1015)rt_nil_check(F->st_1896)).name = (*(P1015)rt_nil_check(F->e_504)).name;
F->t_1897 = f_resolve_subtype_268(F->st_1896, &F->c_1895);
} else if ((((((rt_r_ichk(F->k_1886) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1886) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1886) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1886) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1886) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1886) == (((rt_int)44LL)))) {
f_finish_ptr_464((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_504)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1886) == (((rt_int)40LL)))) {
f_var_decl_513(F->e_504);
} else if (((rt_r_ichk(F->k_1886) == (((rt_int)41LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_504)).flag) == ((rt_int)0LL)))) {
f_const_decl_560(F->e_504);
} else if ((rt_r_ichk(F->k_1886) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1886) == (((rt_int)33LL)))) {
F->t_1898 = NULL;
F->c_1899 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_504)).a, g_ty_bool_1100, &F->t_1898));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1899), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_597(F->e_504);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_508(rstr *name_506, P1021 t_507) {
  struct f_storage_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_506 = name_506;
F->t_507 = t_507;
if ((!rt_r_echk(g_in_func_1071))) {
F->g_1900 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_506))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_507)), rt_str(" ", 1)), F->g_1900), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1900), rt_str(");", 2)); b_; }));
g_st_field_1077 = f_mk_3(&F->g_1900);
F->result_ = F->g_1900;
goto ret_;
}
{
F->f_1901 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_506)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_507)), rt_str(" ", 1)), F->f_1901), rt_str(";", 1)); b_; }));
g_st_field_1077 = f_mk_3(&F->f_1901);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1901);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_511(P1025 y_509, rstr *access_510) {
  struct f_bind_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_509 = y_509;
F->access_510 = access_510;
if (rt_r_echk(g_in_func_1071)) {
(*(P1025)rt_nil_check(F->y_509)).level = rt_r_ichk(g_cur_level_1072);
(*(P1025)rt_nil_check(F->y_509)).access = g_st_field_1077;
} else {
(*(P1025)rt_nil_check(F->y_509)).level = ((rt_int)0LL);
(*(P1025)rt_nil_check(F->y_509)).access = f_mk_3(&(*F->access_510));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_513(P1015 d_512) {
  struct f_var_decl_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_512 = d_512;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_512)).ival) == ((rt_int)2LL))) {
f_located_var_515(F->d_512);
} else {
f_var_decl2_554(F->d_512);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_515(P1015 d_514) {
  struct f_located_var_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_514 = d_514;
F->c_1902 = NULL;
F->at_1903 = NULL;
F->t_1904 = NULL;
F->t_1904 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_514)).a, &F->c_1902);
F->y_1905 = NULL;
F->y_1905 = f_new_sym_181((((rt_int)1LL)), (*(P1015)rt_nil_check(F->d_514)).name);
F->addr_1906 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->d_514)).c, g_ty_int_1099, &F->at_1903));
F->av_1907 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1908 = rt_str_copy((((P1008)rt_nil_check(g_st_field_1077))->all));
f_check_type_232(F->at_1903, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->d_514)).line));
F->c_1902 = f_freeze_209(F->c_1902, F->t_1904);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1907, rt_str(" = ", 3)), F->addr_1906), rt_str(";", 1)); b_; }));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_1904)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_1904)).repn != NULL))) {
F->access_1909 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_514)).name))->all), F->t_1904));
g_mark_uninit_1091 = 1;
f_init_storage_341(&F->access_1909, F->t_1904, F->c_1902);
g_mark_uninit_1091 = 0;
(*(P1025)rt_nil_check(F->y_1905)).t = F->t_1904;
(*(P1025)rt_nil_check(F->y_1905)).c = F->c_1902;
f_bind_511(F->y_1905, &F->access_1909);
if (rt_r_echk(g_in_func_1071)) {
(*(P1025)rt_nil_check(F->y_1905)).loc = f_mk_3(&F->af_1908);
} else {
(*(P1025)rt_nil_check(F->y_1905)).loc = f_mk_3(&F->av_1907);
}
f_define_168(F->y_1905, rt_r_ichk((*(P1015)rt_nil_check(F->d_514)).line));
if (((*(P1015)rt_nil_check(F->d_514)).b != NULL)) {
F->vt_1910 = NULL;
F->v_1911 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->d_514)).b, F->t_1904, F->c_1902, &F->vt_1910));
f_check_type_232(F->vt_1910, F->t_1904, rt_r_ichk((*(P1015)rt_nil_check(F->d_514)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(&F->access_1909, F->t_1904, &F->v_1911, F->c_1902); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_518(F->y_1905, 1); b_; }));
}
goto ret_;
}
{
F->pv_1912 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_514)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1904), rt_str(" *", 2)); b_; })));
F->pf_1913 = rt_str_copy((((P1008)rt_nil_check(g_st_field_1077))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1912, rt_str(" = (", 4)), f_ctype_234(F->t_1904)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1907), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1904)), rt_str("));", 3)); b_; }));
(*(P1025)rt_nil_check(F->y_1905)).t = F->t_1904;
(*(P1025)rt_nil_check(F->y_1905)).c = F->c_1902;
if (rt_r_echk(g_in_func_1071)) {
(*(P1025)rt_nil_check(F->y_1905)).level = rt_r_ichk(g_cur_level_1072);
(*(P1025)rt_nil_check(F->y_1905)).access = f_mk_3(&F->pf_1913);
(*(P1025)rt_nil_check(F->y_1905)).byref = 1;
} else {
(*(P1025)rt_nil_check(F->y_1905)).level = ((rt_int)0LL);
(*(P1025)rt_nil_check(F->y_1905)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1912), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1091 = 1;
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1912), rt_str(")", 1)); b_; }), F->t_1904, F->c_1902);
g_mark_uninit_1091 = 0;
f_define_168(F->y_1905, rt_r_ichk((*(P1015)rt_nil_check(F->d_514)).line));
if (((*(P1015)rt_nil_check(F->d_514)).b != NULL)) {
F->vt_1914 = NULL;
F->v_1915 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->d_514)).b, F->t_1904, F->c_1902, &F->vt_1914));
f_check_type_232(F->vt_1914, F->t_1904, rt_r_ichk((*(P1015)rt_nil_check(F->d_514)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1912), rt_str(")", 1)); b_; }), F->t_1904, &F->v_1915, F->c_1902); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_518(P1025 y_516, int pack_517) {
  struct f_rep_sync_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_516 = y_516;
F->pack_517 = pack_517;
F->lv_1916 = rt_str_copy(f_access_of_736(F->y_516));
F->base_1917 = rt_str_copy(f_cbound_access_520(F->y_516));
F->saved_1918 = NULL;
F->saved_1918 = g_psub_1076;
F->p_1919 = NULL;
F->p_1919 = (*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_516)).t)).tparams;
F->r_1920 = NULL;
F->inner_1921 = NULL;
F->inner_1921 = f_mk_3(&F->lv_1916);
if (((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_516)).t)).tparams != NULL)) {
F->inner_1921 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1916, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1919 != NULL)) {
F->z_1922 = NULL;
F->z_1922 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_1919)).name);
(*(P1025)rt_nil_check(F->z_1922)).t = f_tparam_type_352((*(P1025)rt_nil_check(F->y_516)).t, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1919)).name))->all));
(*(P1025)rt_nil_check(F->z_1922)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1916), rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_1919)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1922, rt_r_ichk((*(P1025)rt_nil_check(F->y_516)).decl_line));
F->p_1919 = (*(P1015)rt_nil_check(F->p_1919)).next;
}
F->r_1920 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_540((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_516)).t)).under, (*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_516)).t)).elemcons, (*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_516)).t)).repn, &(((P1008)rt_nil_check(F->inner_1921))->all), &F->base_1917, F->pack_517); b_; }));
f_close_scope_178();
g_psub_1076 = F->saved_1918;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1008)rt_nil_check(F->r_1920))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_520(P1025 y_519) {
  struct f_cbound_access_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_519 = y_519;
F->c_1923 = NULL;
F->c_1923 = f_new_cons_184();
(*(P1017)rt_nil_check(F->c_1923)).dyn = (rt_r_ichk((*(P1025)rt_nil_check(F->y_519)).level) > ((rt_int)0LL));
(*(P1017)rt_nil_check(F->c_1923)).lvl = rt_r_ichk((*(P1025)rt_nil_check(F->y_519)).level);
F->result_ = f_cbound_191(F->c_1923, &(((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_519)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_524(P1015 items_521, P1021 t_522, P1017 c_523) {
  struct f_rep_size_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_521 = items_521;
F->t_522 = t_522;
F->c_523 = c_523;
F->it_1924 = NULL;
F->it_1924 = f_rep_find_527(F->items_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1925 = NULL;
if ((F->it_1924 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789((*(P1015)rt_nil_check(F->it_1924)).a, g_ty_int_1099, &F->at_1925)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_533(F->t_522, F->c_523));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rep_find_527(P1015 items_525, rstr *w_526) {
  struct f_rep_find_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_525 = items_525;
F->w_526 = w_526;
F->it_1926 = NULL;
F->it_1926 = F->items_525;
while ((F->it_1926 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_1926)).name))->all), (*F->w_526))) {
F->result_ = F->it_1926;
goto ret_;
}
F->it_1926 = (*(P1015)rt_nil_check(F->it_1926)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rep_comp_530(P1015 items_528, rstr *name_529) {
  struct f_rep_comp_530fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_528 = items_528;
F->name_529 = name_529;
F->r_1927 = NULL;
F->r_1927 = f_rep_find_527(F->items_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1928 = NULL;
if ((F->r_1927 == NULL)) {
F->r_1927 = f_rep_find_527(F->items_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1927 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1928 = (*(P1015)rt_nil_check(F->r_1927)).c;
while ((F->comp_1928 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->comp_1928)).name))->all), (*F->name_529))) {
F->result_ = (*(P1015)rt_nil_check(F->comp_1928)).a;
goto ret_;
}
F->comp_1928 = (*(P1015)rt_nil_check(F->comp_1928)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_533(P1021 t_531, P1017 c_532) {
  struct f_default_bits_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_531 = t_531;
F->c_532 = c_532;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_531)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_531)).kind) == (((rt_int)17LL))))) {
F->f_1929 = NULL;
F->f_1929 = (*(P1021)rt_nil_check(F->t_531)).fields;
F->n_1930 = RT_R_IUNDEF;
F->n_1930 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_531)).kind) == (((rt_int)17LL)))) {
F->n_1930 = f_needed_bits_321((*(P1021)rt_nil_check(F->t_531)).elem, NULL);
}
while ((F->f_1929 != NULL)) {
F->n_1930 = rt_add(rt_r_ichk(F->n_1930), f_default_bits_533((*(P1023)rt_nil_check(F->f_1929)).t, (*(P1023)rt_nil_check(F->f_1929)).c));
F->f_1929 = (*(P1023)rt_nil_check(F->f_1929)).next;
}
F->result_ = rt_r_ichk(F->n_1930);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_531)).kind) == (((rt_int)4LL))) && f_same_221(F->t_531, g_ty_ascii_1102))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_321(F->t_531, F->c_532) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_321(F->t_531, F->c_532);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_540(P1021 t_534, P1017 c_535, P1015 items_536, rstr *lval_537, rstr *addr_538, int pack_539) {
  struct f_rep_code_540fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_534 = t_534;
F->c_535 = c_535;
F->items_536 = items_536;
F->lval_537 = lval_537;
F->addr_538 = addr_538;
F->pack_539 = pack_539;
F->size_1931 = rt_str_copy(f_rep_size_524(F->items_536, F->t_534, F->c_535));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)17LL))))) {
F->f_1932 = NULL;
F->f_1932 = (*(P1021)rt_nil_check(F->t_534)).fields;
F->r_1933 = NULL;
F->r_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1934 = NULL;
F->off_1934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1935 = RT_R_IUNDEF;
F->i_1935 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)17LL)))) {
F->ti_1936 = NULL;
F->ti_1936 = f_rep_comp_530(F->items_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1937 = NULL;
F->tsize_1937 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_321((*(P1021)rt_nil_check(F->t_534)).elem, NULL)); b_; }));
F->toff_1938 = NULL;
F->toff_1938 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1936 != NULL) && (f_rep_find_527(F->ti_1936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1937 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_524(F->ti_1936, (*(P1021)rt_nil_check(F->t_534)).elem, NULL); b_; }));
}
if (((F->ti_1936 != NULL) && (f_rep_find_527(F->ti_1936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1939 = NULL;
F->toff_1938 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789((*(P1015)rt_nil_check(f_rep_find_527(F->ti_1936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1099, &F->at_1939)), rt_str(")", 1)); b_; }));
}
if (F->pack_539) {
F->r_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_538)), rt_str(" + ", 3)), (((P1008)rt_nil_check(F->toff_1938))->all)), rt_str(", ", 2)), (((P1008)rt_nil_check(F->tsize_1937))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_537)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_537), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_538)), rt_str(" + ", 3)), (((P1008)rt_nil_check(F->toff_1938))->all)), rt_str(", ", 2)), (((P1008)rt_nil_check(F->tsize_1937))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->toff_1938))->all)), rt_str(" + ", 3)), (((P1008)rt_nil_check(F->tsize_1937))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1932 != NULL)) {
F->ci_1940 = NULL;
F->ci_1940 = f_rep_comp_530(F->items_536, &(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1932)).name))->all));
F->fo_1941 = NULL;
F->fo_1941 = F->off_1934;
F->fl_1942 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_537), rt_str(".", 1)), f_union_part_542(F->t_534)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_1932)).name))->all))));
if (((F->ci_1940 != NULL) && (f_rep_find_527(F->ci_1940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1943 = NULL;
F->fo_1941 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789((*(P1015)rt_nil_check(f_rep_find_527(F->ci_1940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1099, &F->at_1943)), rt_str(")", 1)); b_; }));
}
{
F->part_1944 = rt_str_copy(f_rep_code_540((*(P1023)rt_nil_check(F->f_1932)).t, (*(P1023)rt_nil_check(F->f_1932)).c, F->ci_1940, &F->fl_1942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_538), rt_str(" + ", 3)), (((P1008)rt_nil_check(F->fo_1941))->all)); b_; }), F->pack_539));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)17LL)))) {
F->r_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1933))->all), rt_str(" if (", 5)), (*F->lval_537)), rt_str(".tag == ", 8)), f_itos_7(rt_r_ichk(F->i_1935))), rt_str(") { ", 4)), F->part_1944), rt_str(" }", 2)); b_; }));
} else {
F->r_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_1933))->all), rt_str(" ", 1)), F->part_1944); b_; }));
}
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)7LL)))) {
F->off_1934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->fo_1941))->all)), rt_str(" + ", 3)), f_rep_size_524(F->ci_1940, (*(P1023)rt_nil_check(F->f_1932)).t, (*(P1023)rt_nil_check(F->f_1932)).c)), rt_str(")", 1)); b_; }));
}
F->i_1935 = rt_add(rt_r_ichk(F->i_1935), ((rt_int)1LL));
F->f_1932 = (*(P1023)rt_nil_check(F->f_1932)).next;
}
F->result_ = (((P1008)rt_nil_check(F->r_1933))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)6LL)))) {
F->ai_1945 = NULL;
F->ai_1945 = f_rep_find_527(F->items_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1946 = NULL;
if ((F->ai_1945 != NULL)) {
F->ei_1946 = (*(P1015)rt_nil_check(F->ai_1945)).c;
}
{
F->es_1947 = rt_str_copy(f_rep_size_524(F->ei_1946, (*(P1021)rt_nil_check(F->t_534)).elem, (*(P1021)rt_nil_check(F->t_534)).elemcons));
F->iv_1948 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1948), rt_str(" = 0; ", 6)), F->iv_1948), rt_str(" < ", 3)), f_acnt_249(F->t_534, &(*F->lval_537))), rt_str("; ", 2)), F->iv_1948), rt_str("++) { ", 6)), f_rep_code_540((*(P1021)rt_nil_check(F->t_534)).elem, (*(P1021)rt_nil_check(F->t_534)).elemcons, F->ei_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_537), rt_str(".p[", 3)), F->iv_1948), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_538), rt_str(" + ", 3)), F->iv_1948), rt_str(" * ", 3)), F->es_1947); b_; }), F->pack_539)), rt_str(" }", 2));
goto ret_;
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_534)).kind) == (((rt_int)5LL)))) {
F->iv_1949 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1949), rt_str(" = 0; ", 6)), F->iv_1949), rt_str(" < ", 3)), (*F->lval_537)), rt_str(".len; ", 6)), F->iv_1949), rt_str("++) { ", 6)), f_rep_scalar_549(f_str_elem_218(F->t_534), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_537), rt_str(".p[", 3)), F->iv_1949), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_538), rt_str(" + ", 3)), F->iv_1949), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_539)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_549(F->t_534, F->c_535, &(*F->lval_537), &(*F->addr_538), &F->size_1931, F->pack_539);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_542(P1021 t_541) {
  struct f_union_part_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_541 = t_541;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_541)).kind) == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_549(P1021 t_543, P1017 c_544, rstr *lval_545, rstr *addr_546, rstr *size_547, int pack_548) {
  struct f_rep_scalar_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_543 = t_543;
F->c_544 = c_544;
F->lval_545 = lval_545;
F->addr_546 = addr_546;
F->size_547 = size_547;
F->pack_548 = pack_548;
F->signed_1950 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1950, rt_str("0", 1));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_543)).kind) == (((rt_int)1LL))) && (!(((F->c_544 != NULL) && rt_r_echk((*(P1017)rt_nil_check(F->c_544)).hasm)) && (rt_r_ichk((*(P1017)rt_nil_check(F->c_544)).mlo) >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1950, rt_str("1", 1));
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_543)).kind) == (((rt_int)3LL)))) {
if (F->pack_548) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_546)), rt_str(", ", 2)), (*F->size_547)), rt_str(", ", 2)), (*F->lval_545)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_545), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_546)), rt_str(", ", 2)), (*F->size_547)), rt_str(");", 2));
goto ret_;
} else if (F->pack_548) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_543))), rt_str("(", 1)), (*F->lval_545)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_546)), rt_str(", ", 2)), (*F->size_547)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_545)), rt_str("), ", 3)), (*F->size_547)), rt_str(", ", 2)), F->signed_1950), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_545), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_546)), rt_str(", ", 2)), (*F->size_547)), rt_str(", ", 2)), F->signed_1950), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_552(P1021 t_550, P1017 c_551) {
  struct f_max_range_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_550 = t_550;
F->c_551 = c_551;
if ((F->c_551 == NULL)) {
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_550)).kind) == (((rt_int)3LL))) && ((*(P1017)rt_nil_check(F->c_551)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_551)).prec))->all)), rt_str(");", 2)); b_; }));
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_550)).kind) == (((rt_int)3LL))) && ((*(P1017)rt_nil_check(F->c_551)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_551)), rt_str(", ", 2)), f_chi_195(F->c_551)), rt_str(");", 2)); b_; }));
} else if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_550)).kind) == (((rt_int)1LL))) && ((*(P1017)rt_nil_check(F->c_551)).lo != NULL)) && (!rt_r_echk((*(P1017)rt_nil_check(F->c_551)).hasm)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_551)), rt_str(", ", 2)), f_chi_195(F->c_551)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_554(P1015 d_553) {
  struct f_var_decl2_554fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_553 = d_553;
F->c_1951 = NULL;
F->t_1952 = NULL;
F->t_1952 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_553)).a, &F->c_1951);
F->y_1953 = NULL;
F->y_1953 = f_new_sym_181((((rt_int)1LL)), (*(P1015)rt_nil_check(F->d_553)).name);
F->access_1954 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_553)).name))->all), F->t_1952));
F->c_1951 = f_freeze_209(F->c_1951, F->t_1952);
f_max_range_552(F->t_1952, F->c_1951);
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_1952)).kind) == (((rt_int)8LL))) && (F->c_1951 != NULL)) && ((*(P1017)rt_nil_check(F->c_1951)).args != NULL))) {
F->c_1951 = f_freeze_args_480(F->c_1951, F->t_1952, rt_r_ichk((*(P1015)rt_nil_check(F->d_553)).line));
}
g_mark_uninit_1091 = 1;
f_init_storage_341(&F->access_1954, F->t_1952, F->c_1951);
g_mark_uninit_1091 = 0;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->d_553)).ival) == ((rt_int)1LL))) {
F->it_1955 = NULL;
F->n_1956 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->d_553)).c, g_ty_int_1099, &F->it_1955));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1952)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->d_553)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1021)rt_nil_check(F->t_1952)).elem, g_ty_ascii_1102)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1954), rt_str(", ", 2)), F->n_1956), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1954), rt_str(", ", 2)), F->n_1956), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1015)rt_nil_check(F->d_553)).b != NULL)) {
F->vt_1957 = NULL;
F->v_1958 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->d_553)).b, F->t_1952, F->c_1951, &F->vt_1957));
f_check_type_232(F->vt_1957, F->t_1952, rt_r_ichk((*(P1015)rt_nil_check(F->d_553)).line));
f_ptr_subtype_check_484(F->t_1952, F->c_1951, (*(P1015)rt_nil_check(F->d_553)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(&F->access_1954, F->t_1952, &F->v_1958, F->c_1951); b_; }));
}
(*(P1025)rt_nil_check(F->y_1953)).t = F->t_1952;
(*(P1025)rt_nil_check(F->y_1953)).c = F->c_1951;
f_bind_511(F->y_1953, &F->access_1954);
f_define_168(F->y_1953, rt_r_ichk((*(P1015)rt_nil_check(F->d_553)).line));
if (f_needs_fin_346(F->t_1952)) {
f_open_fin_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1954, F->t_1952); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_556(rstr *fc_555) {
  struct f_open_fin_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_555 = fc_555;
F->f_1959 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1960 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1959), rt_str("; if (RT_TRY(", 13)), F->f_1959), rt_str(")) {", 4)); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1959), rt_str("); ", 3)), (*F->fc_555)); b_; }));
{ R1020 *cell1961 = rt_alloc(sizeof(R1020));
(*cell1961).s = NULL;
(*cell1961).next = NULL;
F->l_1960 = cell1961;
}
(*(P1019)rt_nil_check(F->l_1960)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1959), rt_str("); ", 3)), (*F->fc_555)), rt_str(" } else { RT_POP(", 17)), F->f_1959), rt_str("); ", 3)), (*F->fc_555)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1019)rt_nil_check(F->l_1960)).next = g_fins_1081;
g_fins_1081 = F->l_1960;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_558(P1019 saved_557) {
  struct f_close_fins_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_557 = saved_557;
while (((g_fins_1081 != F->saved_557) && (g_fins_1081 != NULL))) {
f_emit_29(&(((P1008)rt_nil_check((*(P1019)rt_nil_check(g_fins_1081)).s))->all));
f_pop_cleanup_595();
g_fins_1081 = (*(P1019)rt_nil_check(g_fins_1081)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_560(P1015 d_559) {
  struct f_const_decl_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_559 = d_559;
F->c_1962 = NULL;
F->c_1962 = f_new_cons_184();
F->t_1963 = NULL;
F->vt_1964 = NULL;
F->y_1965 = NULL;
F->y_1965 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->d_559)).name);
F->ok_1966 = RT_R_EUNDEF;
if (((*(P1015)rt_nil_check(F->d_559)).a != NULL)) {
F->t_1963 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_559)).a, &F->c_1962);
}
{
F->v_1967 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->d_559)).b, F->t_1963, F->c_1962, &F->vt_1964));
if ((F->t_1963 != NULL)) {
f_check_type_232(F->vt_1964, F->t_1963, rt_r_ichk((*(P1015)rt_nil_check(F->d_559)).line));
} else {
F->t_1963 = F->vt_1964;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_1963)).kind) == (((rt_int)1LL)))) {
(*(P1025)rt_nil_check(F->y_1965)).mvalue = f_manifest_366((*(P1015)rt_nil_check(F->d_559)).b, &F->ok_1966);
(*(P1025)rt_nil_check(F->y_1965)).hasmv = rt_r_echk(F->ok_1966);
}
{
F->access_1968 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_559)).name))->all), F->t_1963));
if (((*(P1021)rt_nil_check(F->t_1963)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1021)rt_nil_check(F->t_1963)).initp, &F->access_1968); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1968, rt_str(" = ", 3)), f_checked_213(F->t_1963, F->c_1962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_409(F->t_1963, &F->v_1967); b_; }))), rt_str(";", 1)); b_; }));
f_bind_511(F->y_1965, &F->access_1968);
if (f_needs_fin_346(F->t_1963)) {
f_open_fin_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1968, F->t_1963); b_; }));
}
}
}
(*(P1025)rt_nil_check(F->y_1965)).t = F->t_1963;
(*(P1025)rt_nil_check(F->y_1965)).c = F->c_1962;
(*(P1025)rt_nil_check(F->y_1965)).ro_flag = 1;
f_define_168(F->y_1965, rt_r_ichk((*(P1015)rt_nil_check(F->d_559)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_562(P1015 d_561) {
  struct f_subprogram_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_561 = d_561;
f_gen_subprogram_565(F->d_561, f_lookup_decl_165(F->d_561));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_565(P1015 d_563, P1025 y_564) {
  struct f_gen_subprogram_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_563 = d_563;
F->y_564 = y_564;
F->saved_code_1969 = NULL;
F->saved_code_1969 = g_code_1069;
F->saved_fields_1970 = NULL;
F->saved_fields_1970 = g_fields_buf_1070;
F->saved_in_1971 = RT_R_EUNDEF;
F->saved_in_1971 = rt_r_echk(g_in_func_1071);
F->saved_sym_1972 = NULL;
F->saved_sym_1972 = g_func_sym_1083;
F->saved_exits_1973 = NULL;
F->saved_exits_1973 = g_exits_1092;
F->saved_gotos_1974 = NULL;
F->saved_gotos_1974 = g_gotos_1093;
F->saved_frames_1975 = RT_R_IUNDEF;
F->saved_frames_1975 = rt_r_ichk(g_frames_1094);
F->args_1976 = NULL;
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1977 = NULL;
F->pm_1977 = (*(P1025)rt_nil_check(F->y_564)).params;
F->saved_handlers_1978 = NULL;
F->saved_handlers_1978 = g_handlers_1095;
F->saved_cleanups_1979 = NULL;
F->saved_cleanups_1979 = g_cleanups_1096;
F->ctx_1980 = NULL;
F->head_1981 = NULL;
F->frame_1982 = NULL;
F->frame_1982 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1983 = NULL;
F->copy_back_1984 = NULL;
F->copy_back_1984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1985 = NULL;
F->pfin_1985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1986 = NULL;
F->saved_fins_1986 = g_fins_1081;
F->saved_rc_1987 = NULL;
F->saved_rc_1987 = g_func_rc_1084;
F->saved_ret_1988 = NULL;
F->saved_ret_1988 = g_cap_ret_1085;
F->saved_rflag_1989 = NULL;
F->saved_rflag_1989 = g_cap_rflag_1086;
F->pn_1990 = NULL;
F->pn_1990 = (*(P1015)rt_nil_check(F->d_563)).a;
F->nonrec_end_1991 = NULL;
F->has_pfin_1992 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_1071)) {
F->parent_1983 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(g_func_sym_1083)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1081 = NULL;
g_func_rc_1084 = NULL;
g_cap_ret_1085 = NULL;
g_cap_rflag_1086 = NULL;
g_code_1069 = f_new_buffer_24();
g_fields_buf_1070 = f_new_buffer_24();
g_in_func_1071 = 1;
g_func_sym_1083 = F->y_564;
g_exits_1092 = NULL;
g_gotos_1093 = NULL;
g_frames_1094 = ((rt_int)0LL);
g_handlers_1095 = NULL;
g_cleanups_1096 = NULL;
g_cur_level_1072 = rt_add(rt_r_ichk(g_cur_level_1072), ((rt_int)1LL));
f_open_scope_177();
{ R1033 *cell1993 = rt_alloc(sizeof(R1033));
(*cell1993).imps = NULL;
(*cell1993).next = NULL;
F->ctx_1980 = cell1993;
}
(*(P1032)rt_nil_check(F->ctx_1980)).depth = rt_r_ichk(g_depth_1058);
(*(P1032)rt_nil_check(F->ctx_1980)).imps = (*(P1015)rt_nil_check(F->d_563)).d;
(*(P1032)rt_nil_check(F->ctx_1980)).all_imp = (rt_r_ichk((*(P1015)rt_nil_check(F->d_563)).flag) >= ((rt_int)2LL));
(*(P1032)rt_nil_check(F->ctx_1980)).next = g_fctx_1073;
g_fctx_1073 = F->ctx_1980;
if ((F->parent_1983 != NULL)) {
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1008)rt_nil_check(F->parent_1983))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) != (((rt_int)9LL)))) {
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check(F->parent_1983))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1977 != NULL)) {
F->ct_1994 = rt_str_copy(f_ctype_234((*(P1027)rt_nil_check(F->pm_1977)).t));
F->f_1995 = rt_str_copy((((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_1977)).cfield))->all));
F->p_1996 = NULL;
F->pc_1997 = NULL;
F->pc_1997 = (*(P1027)rt_nil_check(F->pm_1977)).c;
F->ac_1998 = NULL;
if ((((rt_int)(((((P1008)rt_nil_check(F->args_1976))->all)).len)) > ((rt_int)0LL))) {
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_1976))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1027)rt_nil_check(F->pm_1977)).t)) {
F->fc_1999 = NULL;
F->ft_2000 = NULL;
F->ft_2000 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->pn_1990)).a, &F->fc_1999);
F->pc_1997 = f_freeze_209(F->fc_1999, (*(P1027)rt_nil_check(F->pm_1977)).t);
}
if ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_1977)).mode) == (((rt_int)1LL)))) {
F->p_1996 = f_new_sym_181((((rt_int)2LL)), (*(P1027)rt_nil_check(F->pm_1977)).name);
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1994), rt_str(" ", 1)), F->f_1995), rt_str(";", 1)); b_; }));
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_1976))->all), F->ct_1994), rt_str(" ", 1)), F->f_1995); b_; }));
(*(P1025)rt_nil_check(F->p_1996)).access = f_mk_3(&F->f_1995);
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) != (((rt_int)9LL)))) {
if (((*(P1021)rt_nil_check((*(P1027)rt_nil_check(F->pm_1977)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1021)rt_nil_check((*(P1027)rt_nil_check(F->pm_1977)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1995); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str(" = ", 3)), f_checked_213((*(P1027)rt_nil_check(F->pm_1977)).t, F->pc_1997, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_409((*(P1027)rt_nil_check(F->pm_1977)).t, &F->f_1995); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_346((*(P1027)rt_nil_check(F->pm_1977)).t)) {
F->pfin_1985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->pfin_1985))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1995); b_; }), (*(P1027)rt_nil_check(F->pm_1977)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1996 = f_new_sym_181((((rt_int)1LL)), (*(P1027)rt_nil_check(F->pm_1977)).name);
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1994), rt_str(" *", 2)), F->f_1995), rt_str(";", 1)); b_; }));
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_1976))->all), F->ct_1994), rt_str(" *", 2)), F->f_1995); b_; }));
(*(P1025)rt_nil_check(F->p_1996)).access = f_mk_3(&F->f_1995);
(*(P1025)rt_nil_check(F->p_1996)).byref = 1;
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str(" = ", 3)), F->f_1995), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1027)rt_nil_check(F->pm_1977)).t)) {
F->bt_2001 = rt_str_copy(f_bound_ctype_188((*(P1027)rt_nil_check(F->pm_1977)).t));
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2001), rt_str(" ", 1)), F->f_1995), rt_str("lo, ", 4)), F->f_1995), rt_str("hi;", 3)); b_; }));
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_1976))->all), rt_str(", ", 2)), F->bt_2001), rt_str(" ", 1)), F->f_1995), rt_str("lo, ", 4)), F->bt_2001), rt_str(" ", 1)), F->f_1995), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("lo = ", 5)), F->f_1995), rt_str("lo; F->", 7)), F->f_1995), rt_str("hi = ", 5)), F->f_1995), rt_str("hi;", 3)); b_; }));
}
F->ac_1998 = f_new_cons_184();
(*(P1017)rt_nil_check(F->ac_1998)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1995, rt_str("lo", 2)); b_; }));
(*(P1017)rt_nil_check(F->ac_1998)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1995, rt_str("hi", 2)); b_; }));
(*(P1017)rt_nil_check(F->ac_1998)).dyn = 1;
(*(P1017)rt_nil_check(F->ac_1998)).lvl = rt_r_ichk(g_cur_level_1072);
if (((F->pc_1997 == NULL) || ((*(P1017)rt_nil_check(F->pc_1997)).lo == NULL))) {
F->pc_1997 = F->ac_1998;
} else if ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_1977)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1995), rt_str("lo <= F->", 9)), F->f_1995), rt_str("hi && (F->", 10)), F->f_1995), rt_str("lo != ", 6)), f_sub_lo_198((*(P1027)rt_nil_check(F->pm_1977)).t, F->pc_1997)), rt_str(" || F->", 7)), F->f_1995), rt_str("hi != ", 6)), f_sub_hi_201((*(P1027)rt_nil_check(F->pm_1977)).t, F->pc_1997)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P1027)rt_nil_check(F->pm_1977)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1994), rt_str(" ", 1)), F->f_1995), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("v = ", 4)), f_copy_code_409((*(P1027)rt_nil_check(F->pm_1977)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1995); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1021)rt_nil_check((*(P1027)rt_nil_check(F->pm_1977)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1021)rt_nil_check((*(P1027)rt_nil_check(F->pm_1977)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1998 == NULL)) {
F->ac_1998 = (*(P1027)rt_nil_check(F->pm_1977)).c;
}
if ((!rt_str_eq(f_uninit_value_360(f_base_of_223((*(P1027)rt_nil_check(F->pm_1977)).t)), rt_str("", 0)))) {
F->copy_back_1984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->copy_back_1984))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1027)rt_nil_check(F->pm_1977)).t))), rt_str("(F->", 4)), F->f_1995), rt_str("v)) ", 4)), f_assign_code_406(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1995), rt_str(")", 1)); b_; }), (*(P1027)rt_nil_check(F->pm_1977)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("v", 1)); b_; }), F->ac_1998)); b_; }));
} else {
F->copy_back_1984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->copy_back_1984))->all), rt_str("  ", 2)), f_assign_code_406(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1995), rt_str(")", 1)); b_; }), (*(P1027)rt_nil_check(F->pm_1977)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("v", 1)); b_; }), F->ac_1998)); b_; }));
}
if (f_needs_fin_346((*(P1027)rt_nil_check(F->pm_1977)).t)) {
F->pfin_1985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->pfin_1985))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1995), rt_str("v", 1)); b_; }), (*(P1027)rt_nil_check(F->pm_1977)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1025)rt_nil_check(F->p_1996)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1995, rt_str("v", 1)); b_; }));
(*(P1025)rt_nil_check(F->p_1996)).byref = 0;
}
}
(*(P1025)rt_nil_check(F->p_1996)).t = (*(P1027)rt_nil_check(F->pm_1977)).t;
(*(P1025)rt_nil_check(F->p_1996)).c = F->pc_1997;
(*(P1025)rt_nil_check(F->p_1996)).level = rt_r_ichk(g_cur_level_1072);
(*(P1025)rt_nil_check(F->p_1996)).ro_flag = ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_1977)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P1027)rt_nil_check(F->pm_1977)).mode) == (((rt_int)4LL))));
f_define_168(F->p_1996, rt_r_ichk((*(P1015)rt_nil_check(F->d_563)).line));
F->pm_1977 = (*(P1027)rt_nil_check(F->pm_1977)).next;
F->pn_1990 = (*(P1015)rt_nil_check(F->pn_1990)).next;
}
if ((rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P1015)rt_nil_check(F->d_563)).b != NULL)) {
F->rc_2002 = NULL;
F->rt_2003 = NULL;
F->rt_2003 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_563)).b, &F->rc_2002);
g_func_rc_1084 = f_freeze_209(F->rc_2002, (*(P1025)rt_nil_check(F->y_564)).result);
}
f_put_27(g_fields_buf_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1025)rt_nil_check(F->y_564)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1992 = (((rt_int)(((((P1008)rt_nil_check(F->pfin_1985))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1992)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_497((*(P1015)rt_nil_check(F->d_563)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_497((*(P1015)rt_nil_check(F->d_563)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2004 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2005 = NULL;
F->leave_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2004), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2004), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2004), rt_str(", ", 2)), f_bool_text_377(f_has_pragmat_497((*(P1015)rt_nil_check(F->d_563)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_377(f_has_pragmat_497((*(P1015)rt_nil_check(F->d_563)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->d_563)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->copy_back_1984))->all), rt_str("  ", 2)), (((P1008)rt_nil_check(F->leave_2005))->all)); b_; }));
F->nonrec_end_1991 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1008)rt_nil_check(F->leave_2005))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_497((*(P1015)rt_nil_check(F->d_563)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_490(F->d_563, F->y_564);
}
f_declare_labels_575((*(P1015)rt_nil_check(F->d_563)).c);
f_declare_body_425((*(P1015)rt_nil_check(F->d_563)).c);
{
F->xu_2006 = rt_str_copy(f_open_unhandled_588((*(P1015)rt_nil_check(F->d_563)).c));
f_body_elements_584((*(P1015)rt_nil_check(F->d_563)).c);
f_close_fins_558(NULL);
f_close_unhandled_590(&F->xu_2006);
}
if ((F->nonrec_end_1991 != NULL)) {
f_emit_29(&(((P1008)rt_nil_check(F->nonrec_end_1991))->all));
f_pop_cleanup_595();
}
if (rt_r_echk(F->has_pfin_1992)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1008)rt_nil_check(F->pfin_1985))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_595();
F->copy_back_1984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->copy_back_1984))->all), rt_str("  ", 2)), (((P1008)rt_nil_check(F->pfin_1985))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1073 = (*(P1032)rt_nil_check(g_fctx_1073)).next;
g_cur_level_1072 = rt_sub(rt_r_ichk(g_cur_level_1072), ((rt_int)1LL));
if (((((rt_int)(((((P1008)rt_nil_check(F->args_1976))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) == (((rt_int)9LL))))) {
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) == (((rt_int)9LL)))) {
F->args_1976 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1981 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1025)rt_nil_check(F->y_564)).result)), rt_str(" ", 1)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).cname))->all)), rt_str("(", 1)), (((P1008)rt_nil_check(F->args_1976))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->head_1981))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->head_1981))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1008)rt_nil_check(F->frame_1982))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1078, g_fields_buf_1070);
f_put_27(g_out_frames_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_564)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1008)rt_nil_check(F->frame_1982))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1008)rt_nil_check(F->frame_1982))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1066, g_code_1069);
if ((rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(F->y_564)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1008)rt_nil_check(F->copy_back_1984))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1066, &(((P1008)rt_nil_check(F->copy_back_1984))->all));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1008)rt_nil_check(F->copy_back_1984))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1066, &(((P1008)rt_nil_check(F->copy_back_1984))->all));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1069 = F->saved_code_1969;
g_fields_buf_1070 = F->saved_fields_1970;
g_in_func_1071 = rt_r_echk(F->saved_in_1971);
g_func_sym_1083 = F->saved_sym_1972;
g_exits_1092 = F->saved_exits_1973;
g_gotos_1093 = F->saved_gotos_1974;
g_frames_1094 = rt_r_ichk(F->saved_frames_1975);
g_handlers_1095 = F->saved_handlers_1978;
g_cleanups_1096 = F->saved_cleanups_1979;
g_fins_1081 = F->saved_fins_1986;
g_func_rc_1084 = F->saved_rc_1987;
g_cap_ret_1085 = F->saved_ret_1988;
g_cap_rflag_1086 = F->saved_rflag_1989;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_567(P1015 d_566) {
  struct f_waits_of_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_566 = d_566;
F->w_2007 = NULL;
F->w_2007 = g_cap_waits_1075;
while ((F->w_2007 != NULL)) {
if (((*(P1044)rt_nil_check(F->w_2007)).d == F->d_566)) {
F->result_ = (((P1008)rt_nil_check((*(P1044)rt_nil_check(F->w_2007)).w))->all);
goto ret_;
}
F->w_2007 = (*(P1044)rt_nil_check(F->w_2007)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_569(P1015 elems_568) {
  struct f_task_waits_569fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_568 = elems_568;
F->e_2008 = NULL;
F->e_2008 = F->elems_568;
F->r_2009 = NULL;
F->r_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2008 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_2008)).kind) == (((rt_int)50LL)))) {
F->r_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2009))->all), rt_str(" rt_await_decl(&", 16)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_2008)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_2008)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P1015)rt_nil_check(F->e_2008)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1015)rt_nil_check(F->e_2008)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_2008)).flag) == ((rt_int)3LL)))))) {
F->r_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2009))->all), f_waits_of_567(F->e_2008)); b_; }));
}
F->e_2008 = (*(P1015)rt_nil_check(F->e_2008)).next;
}
F->result_ = (((P1008)rt_nil_check(F->r_2009))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_571(P1015 elems_570) {
  struct f_await_tasks_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_570 = elems_570;
F->w_2010 = rt_str_copy(f_task_waits_569(F->elems_570));
if ((((rt_int)((F->w_2010).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2010);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_573(P1015 elems_572) {
  struct f_capsule_elements_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_572 = elems_572;
F->e_2011 = NULL;
F->e_2011 = F->elems_572;
while ((F->e_2011 != NULL)) {
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_2011)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_2011)).kind) <= (((rt_int)36LL))))) {
f_start_labels_576();
}
f_element_503(F->e_2011);
F->e_2011 = (*(P1015)rt_nil_check(F->e_2011)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_575(P1015 elems_574) {
  struct f_declare_labels_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_574 = elems_574;
F->e_2012 = NULL;
F->e_2012 = F->elems_574;
while ((F->e_2012 != NULL)) {
F->l_2013 = NULL;
F->l_2013 = (*(P1015)rt_nil_check(F->e_2012)).labels;
while ((F->l_2013 != NULL)) {
F->x_2014 = NULL;
F->x_2014 = g_gotos_1093;
while (((F->x_2014 != NULL) && (rt_r_ichk((*(P1040)rt_nil_check(F->x_2014)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1040)rt_nil_check(F->x_2014)).match))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->l_2013)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->l_2013)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->l_2013)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2014 = (*(P1040)rt_nil_check(F->x_2014)).next;
}
{ R1041 *cell2015 = rt_alloc(sizeof(R1041));
(*cell2015).match = NULL;
(*cell2015).label = NULL;
(*cell2015).next = NULL;
F->x_2014 = cell2015;
}
(*(P1040)rt_nil_check(F->x_2014)).match = (*(P1015)rt_nil_check(F->l_2013)).name;
(*(P1040)rt_nil_check(F->x_2014)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1040)rt_nil_check(F->x_2014)).depth = rt_neg(((rt_int)1LL));
(*(P1040)rt_nil_check(F->x_2014)).next = g_gotos_1093;
g_gotos_1093 = F->x_2014;
F->l_2013 = (*(P1015)rt_nil_check(F->l_2013)).next;
}
F->e_2012 = (*(P1015)rt_nil_check(F->e_2012)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_576(void) {
  struct f_start_labels_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2016 = NULL;
F->x_2016 = g_gotos_1093;
while (((F->x_2016 != NULL) && (rt_r_ichk((*(P1040)rt_nil_check(F->x_2016)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P1040)rt_nil_check(F->x_2016)).depth = rt_r_ichk(g_frames_1094);
F->x_2016 = (*(P1040)rt_nil_check(F->x_2016)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1040 f_goto_label_578(rstr *name_577) {
  struct f_goto_label_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_577 = name_577;
F->x_2017 = NULL;
F->x_2017 = g_gotos_1093;
while ((F->x_2017 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1040)rt_nil_check(F->x_2017)).match))->all), (*F->name_577))) {
F->result_ = F->x_2017;
goto ret_;
}
F->x_2017 = (*(P1040)rt_nil_check(F->x_2017)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_580(P1015 e_579) {
  struct f_has_return_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_579 = e_579;
F->x_2018 = NULL;
F->x_2018 = F->e_579;
while ((F->x_2018 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2018)).kind) != (((rt_int)51LL))))) {
if ((((((*(P1015)rt_nil_check(F->x_2018)).a != NULL) && f_has_return_580((*(P1015)rt_nil_check(F->x_2018)).a)) || (((*(P1015)rt_nil_check(F->x_2018)).b != NULL) && f_has_return_580((*(P1015)rt_nil_check(F->x_2018)).b))) || (((*(P1015)rt_nil_check(F->x_2018)).c != NULL) && f_has_return_580((*(P1015)rt_nil_check(F->x_2018)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2018 = (*(P1015)rt_nil_check(F->x_2018)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_582(P1015 elems_581) {
  struct f_capsule_body_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_581 = elems_581;
F->saved_ret_2019 = NULL;
F->saved_ret_2019 = g_cap_ret_1085;
F->saved_flag_2020 = NULL;
F->saved_flag_2020 = g_cap_rflag_1086;
F->saved_frames_2021 = RT_R_IUNDEF;
F->saved_frames_2021 = rt_r_ichk(g_ret_frames_1087);
F->e_2022 = NULL;
F->e_2022 = F->elems_581;
if ((!f_has_return_580(F->elems_581))) {
g_cap_ret_1085 = NULL;
g_cap_rflag_1086 = NULL;
f_capsule_elements_573(F->elems_581);
} else {
g_cap_rflag_1086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(g_cap_rflag_1086))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2022 != NULL)) {
F->stmt_2023 = RT_R_EUNDEF;
F->stmt_2023 = ((rt_r_ichk((*(P1015)rt_nil_check(F->e_2022)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->e_2022)).kind) <= (((rt_int)36LL))));
g_cap_ret_1085 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1087 = rt_r_ichk(g_frames_1094);
if (rt_r_echk(F->stmt_2023)) {
f_start_labels_576();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1008)rt_nil_check(g_cap_rflag_1086))->all)), rt_str(") {", 3)); b_; }));
}
f_element_503(F->e_2022);
if (rt_r_echk(F->stmt_2023)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(g_cap_ret_1085))->all), rt_str(": ;", 3)); b_; }));
F->e_2022 = (*(P1015)rt_nil_check(F->e_2022)).next;
}
}
g_cap_ret_1085 = F->saved_ret_2019;
g_cap_rflag_1086 = F->saved_flag_2020;
g_ret_frames_1087 = rt_r_ichk(F->saved_frames_2021);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_584(P1015 elems_583) {
  struct f_body_elements_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_583 = elems_583;
f_capsule_elements_573(F->elems_583);
f_await_tasks_571(F->elems_583);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_586(P1015 elems_585) {
  struct f_gen_body_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_585 = elems_585;
F->saved_2024 = NULL;
F->saved_2024 = g_fins_1081;
F->saved_gotos_2025 = NULL;
F->saved_gotos_2025 = g_gotos_1093;
f_open_scope_177();
f_declare_labels_575(F->elems_585);
f_declare_body_425(F->elems_585);
{
F->xu_2026 = rt_str_copy(f_open_unhandled_588(F->elems_585));
f_body_elements_584(F->elems_585);
f_close_fins_558(F->saved_2024);
f_close_unhandled_590(&F->xu_2026);
}
f_close_scope_178();
g_gotos_1093 = F->saved_gotos_2025;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_588(P1015 elems_587) {
  struct f_open_unhandled_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_587 = elems_587;
F->e_2027 = NULL;
F->e_2027 = F->elems_587;
F->conds_2028 = NULL;
F->conds_2028 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2027 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_2027)).kind) == (((rt_int)49LL)))) {
F->conds_2028 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2028))->all), rt_str(" || rt_xcur == ", 15)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_2027)).name))->all)))).cname))->all)); b_; }));
}
F->e_2027 = (*(P1015)rt_nil_check(F->e_2027)).next;
}
if ((((rt_int)(((((P1008)rt_nil_check(F->conds_2028))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2029 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2029), rt_str("; if (RT_TRY(", 13)), F->f_2029), rt_str(")) {", 4)); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2029), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2029, rt_str(":", 1)), (((P1008)rt_nil_check(F->conds_2028))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_590(rstr *xu_589) {
  struct f_close_unhandled_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_589 = xu_589;
F->i_2030 = RT_R_IUNDEF;
F->i_2030 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_589), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_589), rt_r_ichk(F->i_2030))) != 58)) {
F->i_2030 = rt_add(rt_r_ichk(F->i_2030), ((rt_int)1LL));
}
{
F->f_2031 = rt_str_copy(rt_str_slice((*F->xu_589), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_2030), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2031), rt_str("); } else { RT_POP(", 19)), F->f_2031), rt_str("); if (", 7)), rt_str_slice((*F->xu_589), rt_add(rt_r_ichk(F->i_2030), ((rt_int)1LL)), ((rt_int)(((*F->xu_589)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_595();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_592(rt_int upto_591) {
  struct f_pop_frames_592fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_591 = upto_591;
F->i_2032 = RT_R_IUNDEF;
F->i_2032 = rt_r_ichk(g_frames_1094);
F->c_2033 = NULL;
F->c_2033 = g_cleanups_1096;
while ((rt_r_ichk(F->i_2032) > F->upto_591)) {
f_emit_29(&(((P1008)rt_nil_check((*(P1019)rt_nil_check(F->c_2033)).s))->all));
F->c_2033 = (*(P1019)rt_nil_check(F->c_2033)).next;
F->i_2032 = rt_sub(rt_r_ichk(F->i_2032), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_594(rstr *s_593) {
  struct f_push_cleanup_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_593 = s_593;
F->c_2034 = NULL;
{ R1020 *cell2035 = rt_alloc(sizeof(R1020));
(*cell2035).s = NULL;
(*cell2035).next = NULL;
F->c_2034 = cell2035;
}
(*(P1019)rt_nil_check(F->c_2034)).s = f_mk_3(&(*F->s_593));
(*(P1019)rt_nil_check(F->c_2034)).next = g_cleanups_1096;
g_cleanups_1096 = F->c_2034;
g_frames_1094 = rt_add(rt_r_ichk(g_frames_1094), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_595(void) {
  struct f_pop_cleanup_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1096 = (*(P1019)rt_nil_check(g_cleanups_1096)).next;
g_frames_1094 = rt_sub(rt_r_ichk(g_frames_1094), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_597(P1015 s_596) {
  struct f_gen_statement_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_596 = s_596;
F->located_2036 = NULL;
F->located_2036 = f_located_in_600(f_copy_node_828(F->s_596), NULL);
F->l_2037 = NULL;
F->l_2037 = F->located_2036;
while ((F->l_2037 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_518(F->l_2037, 0); b_; }));
F->l_2037 = (*(P1025)rt_nil_check(F->l_2037)).reqs_sym;
}
f_gen_statement2_605(F->s_596);
F->l_2037 = F->located_2036;
while ((F->l_2037 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_518(F->l_2037, 1); b_; }));
F->l_2037 = (*(P1025)rt_nil_check(F->l_2037)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1025 f_located_in_600(P1015 e_598, P1025 found_599) {
  struct f_located_in_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_598 = e_598;
F->found_599 = found_599;
F->x_2038 = NULL;
F->x_2038 = F->e_598;
F->r_2039 = NULL;
F->r_2039 = F->found_599;
while ((F->x_2038 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)7LL)))) {
F->y_2040 = NULL;
F->y_2040 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_2038)).name))->all));
if (((((F->y_2040 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2040)).kind) == (((rt_int)1LL)))) && ((*(P1025)rt_nil_check(F->y_2040)).loc != NULL)) && (!f_sym_in_603(F->r_2039, F->y_2040)))) {
(*(P1025)rt_nil_check(F->y_2040)).reqs_sym = F->r_2039;
F->r_2039 = F->y_2040;
}
} else if ((((((rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2038)).kind) == (((rt_int)51LL))))) {
F->result_ = F->r_2039;
goto ret_;
}
if (((*(P1015)rt_nil_check(F->x_2038)).a != NULL)) {
F->r_2039 = f_located_in_600((*(P1015)rt_nil_check(F->x_2038)).a, F->r_2039);
}
if (((*(P1015)rt_nil_check(F->x_2038)).b != NULL)) {
F->r_2039 = f_located_in_600((*(P1015)rt_nil_check(F->x_2038)).b, F->r_2039);
}
if (((*(P1015)rt_nil_check(F->x_2038)).c != NULL)) {
F->r_2039 = f_located_in_600((*(P1015)rt_nil_check(F->x_2038)).c, F->r_2039);
}
F->x_2038 = (*(P1015)rt_nil_check(F->x_2038)).next;
}
F->result_ = F->r_2039;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_603(P1025 l_601, P1025 y_602) {
  struct f_sym_in_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_601 = l_601;
F->y_602 = y_602;
F->p_2041 = NULL;
F->p_2041 = F->l_601;
while ((F->p_2041 != NULL)) {
if ((F->p_2041 == F->y_602)) {
F->result_ = 1;
goto ret_;
}
F->p_2041 = (*(P1025)rt_nil_check(F->p_2041)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_605(P1015 s_604) {
  struct f_gen_statement2_605fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_604 = s_604;
F->label_2042 = NULL;
F->gl_2043 = NULL;
F->gl_2043 = (*(P1015)rt_nil_check(F->s_604)).labels;
while ((F->gl_2043 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1040)rt_nil_check(f_goto_label_578(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->gl_2043)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2043 = (*(P1015)rt_nil_check(F->gl_2043)).next;
}
if (((*(P1015)rt_nil_check(F->s_604)).tag != NULL)) {
F->x_2044 = NULL;
{ R1041 *cell2045 = rt_alloc(sizeof(R1041));
(*cell2045).match = NULL;
(*cell2045).label = NULL;
(*cell2045).next = NULL;
F->x_2044 = cell2045;
}
F->label_2042 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1040)rt_nil_check(F->x_2044)).match = (*(P1015)rt_nil_check(F->s_604)).tag;
(*(P1040)rt_nil_check(F->x_2044)).label = F->label_2042;
(*(P1040)rt_nil_check(F->x_2044)).depth = rt_r_ichk(g_frames_1094);
(*(P1040)rt_nil_check(F->x_2044)).next = g_exits_1092;
g_exits_1092 = F->x_2044;
}
{ rt_int sel2046 = rt_r_ichk((*(P1015)rt_nil_check(F->s_604)).kind);
if (0 || (sel2046 == (((rt_int)20LL)))) {
f_st_assign_607(F->s_604);
} else if (0 || (sel2046 == (((rt_int)21LL)))) {
f_st_call_609(F->s_604);
} else if (0 || (sel2046 == (((rt_int)22LL)))) {
f_st_if_611(F->s_604);
} else if (0 || (sel2046 == (((rt_int)23LL)))) {
f_st_case_615(F->s_604);
} else if (0 || (sel2046 == (((rt_int)24LL)))) {
f_st_repeat_623(F->s_604);
} else if (0 || (sel2046 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_604)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2046 == (((rt_int)27LL)))) {
f_st_exit_625(F->s_604);
} else if (0 || (sel2046 == (((rt_int)29LL)))) {
{
F->x_2047 = NULL;
F->x_2047 = f_goto_label_578(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_604)).name))->all));
if ((F->x_2047 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_604)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_592(rt_r_ichk((*(P1040)rt_nil_check(F->x_2047)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1008)rt_nil_check((*(P1040)rt_nil_check(F->x_2047)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2046 == (((rt_int)28LL)))) {
f_st_return_627(F->s_604);
} else if (0 || (sel2046 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_634(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_604)).name))->all), rt_r_ichk((*(P1015)rt_nil_check(F->s_604)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel2046 == (((rt_int)31LL)))) {
if ((g_handlers_1095 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1008)rt_nil_check((*(P1019)rt_nil_check(g_handlers_1095)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2046 == (((rt_int)26LL)))) {
f_st_guard_636(F->s_604);
} else if (0 || (sel2046 == (((rt_int)32LL)))) {
f_st_alloc_638(F->s_604);
} else if (0 || (sel2046 == (((rt_int)34LL)))) {
f_st_create_642(F->s_604);
} else if (0 || (sel2046 == (((rt_int)35LL)))) {
f_st_wait_671(F->s_604);
} else if (0 || (sel2046 == (((rt_int)36LL)))) {
f_st_region_679(F->s_604);
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1015)rt_nil_check(F->s_604)).tag != NULL)) {
g_exits_1092 = (*(P1040)rt_nil_check(g_exits_1092)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->label_2042))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_607(P1015 s_606) {
  struct f_st_assign_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_606 = s_606;
F->lv_2048 = NULL;
F->t_2049 = NULL;
F->vt_2050 = NULL;
F->c_2051 = NULL;
F->ro_2052 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).kind) == (((rt_int)10LL))) && ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_758((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).a, &F->lv_2048, &F->t_2049, &F->c_2051, &F->ro_2052);
while ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_464(F->t_2049);
F->lv_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_750(&(((P1008)rt_nil_check(F->lv_2048))->all), F->t_2049); b_; }));
F->t_2049 = (*(P1021)rt_nil_check(F->t_2049)).target;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->t_2049)).tparams == NULL))) {
F->t_2049 = (*(P1021)rt_nil_check(F->t_2049)).under;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).kind) == (((rt_int)15LL)))) {
F->lv_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->lv_2048))->all), rt_str(".all", 4)); b_; }));
F->t_2049 = (*(P1021)rt_nil_check(F->t_2049)).under;
}
if ((((!rt_r_echk(F->ro_2052)) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).ndim) == ((rt_int)1LL)))) {
F->lo_2053 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b)).a, (*(P1021)rt_nil_check(F->t_2049)).idx, &F->vt_2050));
F->hi_2054 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b)).b, (*(P1021)rt_nil_check(F->t_2049)).idx, &F->vt_2050));
F->v_2055 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->s_606)).b, F->t_2049, &F->vt_2050));
f_need_slice_770(F->t_2049);
f_check_type_232(F->vt_2050, F->t_2049, rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2049)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2049)), rt_str("(", 1)), (((P1008)rt_nil_check(F->lv_2048))->all)), rt_str(", ", 2)), F->lo_2053), rt_str(", ", 2)), F->hi_2054), rt_str("); as_", 6)), f_ctype_234(F->t_2049)), rt_str("(&sl_, ", 7)), F->v_2055), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_2052) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_2049)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2056 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b)).a, g_ty_int_1099, &F->vt_2050));
F->hi_2057 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->s_606)).a)).b)).b, g_ty_int_1099, &F->vt_2050));
F->v_2058 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->s_606)).b, g_ty_string_1103, &F->vt_2050));
f_check_type_232(F->vt_2050, g_ty_string_1103, rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1008)rt_nil_check(F->lv_2048))->all)), rt_str(", ", 2)), F->lo_2056), rt_str(", ", 2)), F->hi_2057), rt_str(", ", 2)), F->v_2058), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_758((*(P1015)rt_nil_check(F->s_606)).a, &F->lv_2048, &F->t_2049, &F->c_2051, &F->ro_2052);
if (rt_r_echk(F->ro_2052)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_308(F->t_2049)) && (!f_exports_op_447((*(P1021)rt_nil_check(F->t_2049)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_2049)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2059 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->s_606)).b, F->t_2049, F->c_2051, &F->vt_2050));
f_check_type_232(F->vt_2050, F->t_2049, rt_r_ichk((*(P1015)rt_nil_check(F->s_606)).line));
f_ptr_subtype_check_484(F->t_2049, F->c_2051, (*(P1015)rt_nil_check(F->s_606)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(&(((P1008)rt_nil_check(F->lv_2048))->all), F->t_2049, &F->v_2059, F->c_2051); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_609(P1015 s_608) {
  struct f_st_call_609fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_608 = s_608;
F->c_2060 = NULL;
F->c_2060 = (*(P1015)rt_nil_check(F->s_608)).a;
F->t_2061 = NULL;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->c_2060)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->c_2060)).kind) == (((rt_int)12LL))))) {
F->x_2062 = NULL;
F->x_2062 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->c_2060)).line));
(*(P1015)rt_nil_check(F->x_2062)).a = F->c_2060;
F->c_2060 = F->x_2062;
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->c_2060)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_608)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_937(F->c_2060, 1, &F->t_2061), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_611(P1015 s_610) {
  struct f_st_if_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_610 = s_610;
F->a_2063 = NULL;
F->a_2063 = (*(P1015)rt_nil_check(F->s_610)).a;
F->first_2064 = RT_R_EUNDEF;
F->first_2064 = 1;
F->t_2065 = NULL;
F->taken_2066 = RT_R_EUNDEF;
F->taken_2066 = 0;
F->ok_2067 = RT_R_EUNDEF;
F->mv_2068 = NULL;
while (((F->a_2063 != NULL) && (!rt_r_echk(F->taken_2066)))) {
F->mv_2068 = f_meval_375((*(P1015)rt_nil_check(F->a_2063)).a, &F->ok_2067);
if (((rt_r_echk(F->ok_2067) && (rt_r_ichk((*(P1034)rt_nil_check(F->mv_2068)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P1034)rt_nil_check(F->mv_2068)).i) == ((rt_int)0LL)))) {
F->a_2063 = (*(P1015)rt_nil_check(F->a_2063)).next;
} else {
if ((rt_r_echk(F->ok_2067) && (rt_r_ichk((*(P1034)rt_nil_check(F->mv_2068)).kind) == (((rt_int)2LL))))) {
F->taken_2066 = 1;
if (rt_r_echk(F->first_2064)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2069 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->a_2063)).a, g_ty_bool_1100, &F->t_2065));
f_check_type_232(F->t_2065, g_ty_bool_1100, rt_r_ichk((*(P1015)rt_nil_check(F->s_610)).line));
if (rt_r_echk(F->first_2064)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2069), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2069), rt_str(") {", 3)); b_; }));
}
}
F->first_2064 = 0;
f_gen_body_586((*(P1015)rt_nil_check(F->a_2063)).b);
F->a_2063 = (*(P1015)rt_nil_check(F->a_2063)).next;
}
}
if (((rt_r_ichk((*(P1015)rt_nil_check(F->s_610)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_2066)))) {
if (rt_r_echk(F->first_2064)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2064 = 0;
f_gen_body_586((*(P1015)rt_nil_check(F->s_610)).b);
}
if ((!rt_r_echk(F->first_2064))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_613(P1015 s_612) {
  struct f_manifest_case_613fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_612 = s_612;
F->ok_2070 = RT_R_EUNDEF;
F->sv_2071 = NULL;
F->sv_2071 = f_meval_375((*(P1015)rt_nil_check(F->s_612)).a, &F->ok_2070);
F->a_2072 = NULL;
F->a_2072 = (*(P1015)rt_nil_check(F->s_612)).b;
if (((!rt_r_echk(F->ok_2070)) || (((rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2072 != NULL)) {
F->lab_2073 = NULL;
F->lab_2073 = (*(P1015)rt_nil_check(F->a_2072)).a;
while ((F->lab_2073 != NULL)) {
F->lo_2074 = NULL;
F->lo_2074 = f_meval_375((*(P1015)rt_nil_check(F->lab_2073)).a, &F->ok_2070);
F->hi_2075 = NULL;
F->hi_2075 = F->lo_2074;
if (((!rt_r_echk(F->ok_2070)) || (rt_r_ichk((*(P1034)rt_nil_check(F->lo_2074)).kind) != rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1015)rt_nil_check(F->lab_2073)).b != NULL)) {
F->hi_2075 = f_meval_375((*(P1015)rt_nil_check(F->lab_2073)).b, &F->ok_2070);
if ((((!rt_r_echk(F->ok_2070)) || (rt_r_ichk((*(P1034)rt_nil_check(F->hi_2075)).kind) != rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind))) || (rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) == (((rt_int)4LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check(F->sv_2071)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check(F->lo_2074)).s))->all))) || (((rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P1034)rt_nil_check(F->lo_2074)).i) <= rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).i))) && (rt_r_ichk((*(P1034)rt_nil_check(F->sv_2071)).i) <= rt_r_ichk((*(P1034)rt_nil_check(F->hi_2075)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->a_2072)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2073 = (*(P1015)rt_nil_check(F->lab_2073)).next;
}
F->a_2072 = (*(P1015)rt_nil_check(F->a_2072)).next;
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_612)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_612)).c);
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

static void f_st_case_615(P1015 s_614) {
  struct f_st_case_615fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_614 = s_614;
F->st_2076 = NULL;
F->vt_2077 = NULL;
F->first_2078 = RT_R_EUNDEF;
F->first_2078 = 1;
F->a_2079 = NULL;
F->a_2079 = (*(P1015)rt_nil_check(F->s_614)).b;
if (f_manifest_case_613(F->s_614)) {
goto ret_;
}
f_st_case2_617(F->s_614);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_617(P1015 s_616) {
  struct f_st_case2_617fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_616 = s_616;
F->st_2080 = NULL;
F->vt_2081 = NULL;
F->first_2082 = RT_R_EUNDEF;
F->first_2082 = 1;
F->a_2083 = NULL;
F->a_2083 = (*(P1015)rt_nil_check(F->s_616)).b;
F->sel_2084 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->s_616)).a, NULL, &F->st_2080));
F->tmp_2085 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2080)), rt_str(" ", 1)), F->tmp_2085), rt_str(" = ", 3)), F->sel_2084), rt_str(";", 1)); b_; }));
while ((F->a_2083 != NULL)) {
F->lab_2086 = NULL;
F->lab_2086 = (*(P1015)rt_nil_check(F->a_2083)).a;
F->conds_2087 = NULL;
F->conds_2087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2086 != NULL)) {
if (((*(P1015)rt_nil_check(F->lab_2086)).b == NULL)) {
F->v_2088 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->lab_2086)).a, F->st_2080, &F->vt_2081));
f_check_type_232(F->vt_2081, F->st_2080, rt_r_ichk((*(P1015)rt_nil_check(F->s_616)).line));
F->conds_2087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2087))->all), rt_str(" || ", 4)), f_eq_code_413(F->st_2080, &F->tmp_2085, &F->v_2088)); b_; }));
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->st_2080)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->st_2080)).ltp != NULL))) {
F->lo_2089 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->lab_2086)).a, F->st_2080, &F->vt_2081));
F->hi_2090 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->lab_2086)).b, F->st_2080, &F->vt_2081));
F->conds_2087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2087))->all), rt_str(" || (!", 6)), f_user_call2_395((*(P1021)rt_nil_check(F->st_2080)).ltp, &F->tmp_2085, 1, &F->lo_2089, 0)), rt_str(" && !", 5)), f_user_call2_395((*(P1021)rt_nil_check(F->st_2080)).ltp, &F->hi_2090, 0, &F->tmp_2085, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2091 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->lab_2086)).a, F->st_2080, &F->vt_2081));
F->hi_2092 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->lab_2086)).b, F->st_2080, &F->vt_2081));
F->conds_2087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2087))->all), rt_str(" || (", 5)), F->tmp_2085), rt_str(" >= ", 4)), F->lo_2091), rt_str(" && ", 4)), F->tmp_2085), rt_str(" <= ", 4)), F->hi_2092), rt_str(")", 1)); b_; }));
}
F->lab_2086 = (*(P1015)rt_nil_check(F->lab_2086)).next;
}
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->conds_2087))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1008)rt_nil_check(F->conds_2087))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2082 = 0;
f_gen_body_586((*(P1015)rt_nil_check(F->a_2083)).b);
F->a_2083 = (*(P1015)rt_nil_check(F->a_2083)).next;
}
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_616)).flag) == ((rt_int)1LL))) {
f_gen_body_586((*(P1015)rt_nil_check(F->s_616)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_621(P1015 s_618, P1021 t_619, P1017 c_620) {
  struct f_user_for_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_618 = s_618;
F->t_619 = t_619;
F->c_620 = c_620;
F->y_2093 = NULL;
F->y_2093 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->s_618)).name);
F->saved_2094 = NULL;
F->saved_2094 = g_psub_1076;
F->p_2095 = NULL;
F->p_2095 = (*(P1021)rt_nil_check(F->t_619)).tparams;
F->iv_2096 = NULL;
F->iv_2096 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).line));
F->st_2097 = NULL;
F->access_2098 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_618)).name))->all), F->t_619));
F->uv_2099 = NULL;
F->uv_2099 = f_mk_3(&F->access_2098);
if (((*(P1021)rt_nil_check(F->t_619)).tparams != NULL)) {
F->uv_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2098, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1021)rt_nil_check(F->t_619)).under))) || ((*(P1021)rt_nil_check(F->t_619)).elemcons == NULL)) || ((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_619)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_619)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_341(&F->access_2098, F->t_619, F->c_620);
while ((F->p_2095 != NULL)) {
F->l1_2100 = NULL;
F->l2_2101 = NULL;
{ R1020 *cell2102 = rt_alloc(sizeof(R1020));
(*cell2102).s = NULL;
(*cell2102).next = NULL;
F->l1_2100 = cell2102;
}
{ R1020 *cell2103 = rt_alloc(sizeof(R1020));
(*cell2103).s = NULL;
(*cell2103).next = NULL;
F->l2_2101 = cell2103;
}
(*(P1019)rt_nil_check(F->l1_2100)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2095)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1019)rt_nil_check(F->l2_2101)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2098, rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2095)).name))->all))); b_; }));
(*(P1019)rt_nil_check(F->l1_2100)).next = F->l2_2101;
(*(P1019)rt_nil_check(F->l2_2101)).next = g_psub_1076;
g_psub_1076 = F->l1_2100;
F->p_2095 = (*(P1015)rt_nil_check(F->p_2095)).next;
}
{
F->lo_2104 = rt_str_copy(f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_619)).elemcons)).lo))->all)));
F->hi_2105 = rt_str_copy(f_subst_314(&(((P1008)rt_nil_check((*(P1017)rt_nil_check((*(P1021)rt_nil_check(F->t_619)).elemcons)).hi))->all)));
g_psub_1076 = F->saved_2094;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->uv_2099))->all), rt_str(" = ", 3)), F->hi_2105), rt_str("; if (", 6)), F->lo_2104), rt_str(" <= ", 4)), (((P1008)rt_nil_check(F->uv_2099))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->uv_2099))->all), rt_str(" = ", 3)), F->lo_2104), rt_str("; if (", 6)), (((P1008)rt_nil_check(F->uv_2099))->all)), rt_str(" <= ", 4)), F->hi_2105), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1025)rt_nil_check(F->y_2093)).t = F->t_619;
(*(P1025)rt_nil_check(F->y_2093)).c = F->c_620;
f_bind_511(F->y_2093, &F->access_2098);
(*(P1025)rt_nil_check(F->y_2093)).ro_flag = 1;
f_define_168(F->y_2093, rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).line));
f_gen_body_586((*(P1015)rt_nil_check(F->s_618)).b);
(*(P1015)rt_nil_check(F->iv_2096)).name = (*(P1015)rt_nil_check(F->s_618)).name;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->uv_2099))->all)), rt_str(" == ", 4)), F->lo_2104), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(&F->access_2098, F->t_619, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2096, rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).line)), 0, &F->st_2097); b_; }), F->c_620); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->uv_2099))->all)), rt_str(" == ", 4)), F->hi_2105), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(&F->access_2098, F->t_619, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2096, rt_r_ichk((*(P1015)rt_nil_check(F->s_618)).line)), 0, &F->st_2097); b_; }), F->c_620); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_623(P1015 s_622) {
  struct f_st_repeat_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_622 = s_622;
F->t_2106 = NULL;
F->c_2107 = NULL;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_622)).flag) == ((rt_int)0LL))) {
F->cond_2108 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->s_622)).a, g_ty_bool_1100, &F->t_2106));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2108), rt_str(") {", 3)); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_622)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2106 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->s_622)).a, &F->c_2107);
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_2106)).kind) == (((rt_int)15LL))) && (((*(P1021)rt_nil_check(F->t_2106)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2106)))))) {
f_user_for_621(F->s_622, F->t_2106, F->c_2107);
goto ret_;
}
F->c_2107 = f_base_cons_226(F->t_2106, F->c_2107);
if ((((*(P1021)rt_nil_check(f_base_of_223(F->t_2106))).kind == (((rt_int)4LL))) && ((*(P1017)rt_nil_check(F->c_2107)).lo == NULL))) {
F->c_2107 = f_new_cons_184();
(*(P1017)rt_nil_check(F->c_2107)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1017)rt_nil_check(F->c_2107)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1021)rt_nil_check(f_base_of_223(F->t_2106))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1017)rt_nil_check(F->c_2107)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_622)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2109 = rt_str_copy(f_storage_508(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_622)).name))->all), F->t_2106));
F->lov_2110 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2111 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2112 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2113 = NULL;
F->y_2113 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->s_622)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2110), rt_str(" = ", 3)), f_clo_193(F->c_2107)), rt_str(", ", 2)), F->hiv_2111), rt_str(" = ", 3)), f_chi_195(F->c_2107)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_622)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2112), rt_str(" = ", 3)), F->hiv_2111), rt_str("; ", 2)), F->it_2112), rt_str(" >= ", 4)), F->lov_2110), rt_str("; ", 2)), F->it_2112), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2112), rt_str(" = ", 3)), F->lov_2110), rt_str("; ", 2)), F->it_2112), rt_str(" <= ", 4)), F->hiv_2111), rt_str("; ", 2)), F->it_2112), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2109, rt_str(" = ", 3)), F->it_2112), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1025)rt_nil_check(F->y_2113)).t = F->t_2106;
(*(P1025)rt_nil_check(F->y_2113)).c = F->c_2107;
f_bind_511(F->y_2113, &F->access_2109);
(*(P1025)rt_nil_check(F->y_2113)).ro_flag = 1;
f_define_168(F->y_2113, rt_r_ichk((*(P1015)rt_nil_check(F->s_622)).line));
f_gen_body_586((*(P1015)rt_nil_check(F->s_622)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_625(P1015 s_624) {
  struct f_st_exit_625fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_624 = s_624;
F->x_2114 = NULL;
F->x_2114 = g_exits_1092;
while ((F->x_2114 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1040)rt_nil_check(F->x_2114)).match))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_624)).name))->all))) {
f_pop_frames_592(rt_r_ichk((*(P1040)rt_nil_check(F->x_2114)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1008)rt_nil_check((*(P1040)rt_nil_check(F->x_2114)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2114 = (*(P1040)rt_nil_check(F->x_2114)).next;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_624)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_624)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_627(P1015 s_626) {
  struct f_st_return_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_626 = s_626;
F->vt_2115 = NULL;
if ((g_cap_ret_1085 != NULL)) {
if (((*(P1015)rt_nil_check(F->s_626)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_592(rt_r_ichk(g_ret_frames_1087));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(g_cap_rflag_1086))->all), rt_str(" = 1; goto ", 11)), (((P1008)rt_nil_check(g_cap_ret_1085))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_1071))) {
f_pop_frames_592(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check((*(P1025)rt_nil_check(g_func_sym_1083)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P1015)rt_nil_check(F->s_626)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_592(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1015)rt_nil_check(F->s_626)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2116 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->s_626)).a, (*(P1025)rt_nil_check(g_func_sym_1083)).result, g_func_rc_1084, &F->vt_2115));
f_check_type_232(F->vt_2115, (*(P1025)rt_nil_check(g_func_sym_1083)).result, rt_r_ichk((*(P1015)rt_nil_check(F->s_626)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_631((*(P1025)rt_nil_check(g_func_sym_1083)).result, g_func_rc_1084, &F->v_2116)), rt_str(";", 1)); b_; }));
f_pop_frames_592(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_631(P1021 t_628, P1017 c_629, rstr *v_630) {
  struct f_result_checked_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_628 = t_628;
F->c_629 = c_629;
F->v_630 = v_630;
if ((F->c_629 == NULL)) {
F->result_ = (*F->v_630);
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_628)).kind) == (((rt_int)5LL))) && ((*(P1017)rt_nil_check(F->c_629)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_630)), rt_str(", ", 2)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_629)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_628)).kind) == (((rt_int)6LL))) && ((*(P1017)rt_nil_check(F->c_629)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_628)), rt_str(" r_ = ", 6)), (*F->v_630)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_629)).lo))->all)), rt_str(", ", 2)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_629)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_213(F->t_628, F->c_629, &(*F->v_630));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_634(rstr *name_632, rt_int line_633) {
  struct f_exc_id_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_632 = name_632;
F->line_633 = line_633;
F->y_2117 = NULL;
F->y_2117 = f_lookup_163(&(*F->name_632));
if (((F->y_2117 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2117)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2117)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_632)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_632), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_632)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_636(P1015 s_635) {
  struct f_st_guard_636fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_635 = s_635;
F->h_2118 = NULL;
F->h_2118 = (*(P1015)rt_nil_check(F->s_635)).b;
F->first_2119 = RT_R_EUNDEF;
F->first_2119 = 1;
F->hv_2120 = NULL;
{
F->f_2121 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2122 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2121), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2121), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2121), rt_str(")) {", 4)); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_635)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2121), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_595();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2121), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2122), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1020 *cell2123 = rt_alloc(sizeof(R1020));
(*cell2123).s = NULL;
(*cell2123).next = NULL;
F->hv_2120 = cell2123;
}
(*(P1019)rt_nil_check(F->hv_2120)).s = f_mk_3(&F->x_2122);
(*(P1019)rt_nil_check(F->hv_2120)).next = g_handlers_1095;
g_handlers_1095 = F->hv_2120;
{
F->h1_2124 = NULL;
F->h1_2124 = (*(P1015)rt_nil_check(F->s_635)).b;
F->seen_2125 = NULL;
while ((F->h1_2124 != NULL)) {
F->n1_2126 = NULL;
F->n1_2126 = (*(P1015)rt_nil_check(F->h1_2124)).a;
while ((F->n1_2126 != NULL)) {
if (f_seen_name_420(F->seen_2125, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->n1_2126)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->n1_2126)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->n1_2126)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2125 = f_add_line_887(F->seen_2125, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->n1_2126)).name))->all));
F->n1_2126 = (*(P1015)rt_nil_check(F->n1_2126)).next;
}
F->h1_2124 = (*(P1015)rt_nil_check(F->h1_2124)).next;
}
}
while ((F->h_2118 != NULL)) {
F->n_2127 = NULL;
F->n_2127 = (*(P1015)rt_nil_check(F->h_2118)).a;
F->conds_2128 = NULL;
F->conds_2128 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2127 != NULL)) {
F->conds_2128 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2128))->all), rt_str(" || ", 4)), F->x_2122), rt_str(" == ", 4)), f_exc_id_634(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->n_2127)).name))->all), rt_r_ichk((*(P1015)rt_nil_check(F->s_635)).line))); b_; }));
F->n_2127 = (*(P1015)rt_nil_check(F->n_2127)).next;
}
if (rt_r_echk(F->first_2119)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->conds_2128))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1008)rt_nil_check(F->conds_2128))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2119 = 0;
f_gen_body_586((*(P1015)rt_nil_check(F->h_2118)).b);
F->h_2118 = (*(P1015)rt_nil_check(F->h_2118)).next;
}
if (rt_r_echk(F->first_2119)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->s_635)).flag) == ((rt_int)1LL))) {
f_gen_body_586((*(P1015)rt_nil_check(F->s_635)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2122), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1095 = (*(P1019)rt_nil_check(g_handlers_1095)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_638(P1015 s_637) {
  struct f_st_alloc_638fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_637 = s_637;
F->lv_2129 = NULL;
F->t_2130 = NULL;
F->target_2131 = NULL;
F->vt_2132 = NULL;
F->c_2133 = NULL;
F->tc_2134 = NULL;
F->ro_2135 = RT_R_EUNDEF;
F->d_2136 = NULL;
F->p_2137 = NULL;
F->a_2138 = NULL;
f_lvalue_758((*(P1015)rt_nil_check(F->s_637)).a, &F->lv_2129, &F->t_2130, &F->c_2133, &F->ro_2135);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2130)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_464(F->t_2130);
F->d_2136 = (*(P1021)rt_nil_check(F->t_2130)).decl;
F->target_2131 = (*(P1021)rt_nil_check(F->t_2130)).target;
if ((f_list_len_71((*(P1015)rt_nil_check(F->s_637)).b) != f_list_len_71((*(P1015)rt_nil_check(F->d_2136)).b))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1015)rt_nil_check(F->d_2136)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1015)rt_nil_check(F->d_2136)).b != NULL)) {
f_alloc_cell_476(F->s_637, &(((P1008)rt_nil_check(F->lv_2129))->all), F->t_2130, F->c_2133);
goto ret_;
}
{
F->tcn_2139 = rt_str_copy(f_ctype_234(F->target_2131));
F->cell_2140 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346(F->target_2131)) {
F->fn_2141 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1080 = 1;
g_uses_findyn_1082 = 1;
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2141), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2141), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1008)rt_nil_check((*(P1025)rt_nil_check(g_func_sym_1083)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2139), rt_str(" *)cell_)", 9)); b_; }), F->target_2131)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2139), rt_str(" *", 2)), F->cell_2140), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2139), rt_str("), ", 3)), F->fn_2141), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2139), rt_str(" *", 2)), F->cell_2140), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2139), rt_str("), ", 3)), F->fn_2141), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2139), rt_str(" *", 2)), F->cell_2140), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2139), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_471((*(P1015)rt_nil_check(F->d_2136)).d, f_ptr_args_466(F->c_2133), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1015)rt_nil_check(F->s_637)).line));
F->vt_2132 = f_resolve_subtype_268((*(P1015)rt_nil_check(F->d_2136)).a, &F->tc_2134);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2140), rt_str(")", 1)); b_; }), F->target_2131, F->tc_2134);
f_close_scope_178();
if (((*(P1015)rt_nil_check(F->s_637)).c != NULL)) {
F->v_2142 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->s_637)).c, F->target_2131, F->tc_2134, &F->vt_2132));
f_check_type_232(F->vt_2132, F->target_2131, rt_r_ichk((*(P1015)rt_nil_check(F->s_637)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_406(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2140), rt_str(")", 1)); b_; }), F->target_2131, &F->v_2142, F->tc_2134); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->lv_2129))->all), rt_str(" = ", 3)), F->cell_2140), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_640(P1015 e_639) {
  struct f_act_ref_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_639 = e_639;
F->lv_2143 = NULL;
F->t_2144 = NULL;
F->c_2145 = NULL;
F->ro_2146 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->e_639)).kind) == (((rt_int)7LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_639)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_752(F->e_639))) {
F->v_2147 = rt_str_copy(f_gexpr_789(F->e_639, g_ty_act_1109, &F->t_2144));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2144)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_639)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2147;
goto ret_;
}
f_lvalue_758(F->e_639, &F->lv_2143, &F->t_2144, &F->c_2145, &F->ro_2146);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2144)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_639)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1008)rt_nil_check(F->lv_2143))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_642(P1015 s_641) {
  struct f_st_create_642fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_641 = s_641;
F->y_2148 = NULL;
F->y_2148 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_641)).name))->all));
F->pm_2149 = NULL;
F->a_2150 = NULL;
F->a_2150 = (*(P1015)rt_nil_check(F->s_641)).b;
F->lv_2151 = NULL;
F->lt_2152 = NULL;
F->vt_2153 = NULL;
F->lc_2154 = NULL;
F->ro_2155 = RT_R_EUNDEF;
if (((F->y_2148 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2148)).kind) == (((rt_int)10LL))))) {
F->y_2148 = f_instantiate_734(F->y_2148, (*(P1015)rt_nil_check(F->s_641)).e, (*(P1015)rt_nil_check(F->s_641)).b, rt_r_ichk((*(P1015)rt_nil_check(F->s_641)).line));
}
if (((F->y_2148 == NULL) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2148)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_641)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_641)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2149 = (*(P1025)rt_nil_check(F->y_2148)).params;
{
F->at_2156 = NULL;
F->ac_2157 = NULL;
F->aro_2158 = RT_R_EUNDEF;
F->act_2159 = NULL;
F->nf_2160 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_758((*(P1015)rt_nil_check(F->s_641)).a, &F->lv_2151, &F->at_2156, &F->ac_2157, &F->aro_2158);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2156)).kind) == (((rt_int)14LL)))) {
F->act_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_640((*(P1015)rt_nil_check(F->s_641)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2148)).cname))->all)), rt_str("fr *", 4)), F->nf_2160), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2160), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2148)).level) > ((rt_int)0LL))) {
F->link_2161 = NULL;
F->link_2161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2163 = ((rt_int)1LL), hi2164 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1025)rt_nil_check(F->y_2148)).level));
for (rt_int it2165 = lo2163; it2165 <= hi2164; it2165++) {
F->i_2162 = it2165;
F->link_2161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->link_2161))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2160, rt_str("->up = ", 7)), (((P1008)rt_nil_check(F->link_2161))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2150 != NULL) && (F->pm_2149 != NULL))) {
if ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2149)).mode) == (((rt_int)1LL)))) {
F->v_2166 = rt_str_copy(f_gexpr_in_797(F->a_2150, (*(P1027)rt_nil_check(F->pm_2149)).t, (*(P1027)rt_nil_check(F->pm_2149)).c, &F->vt_2153));
f_check_type_232(F->vt_2153, (*(P1027)rt_nil_check(F->pm_2149)).t, rt_r_ichk((*(P1015)rt_nil_check(F->s_641)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2160, rt_str("->", 2)), (((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_2149)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_409((*(P1027)rt_nil_check(F->pm_2149)).t, &F->v_2166)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_758(F->a_2150, &F->lv_2151, &F->lt_2152, &F->lc_2154, &F->ro_2155);
f_check_type_232(F->lt_2152, (*(P1027)rt_nil_check(F->pm_2149)).t, rt_r_ichk((*(P1015)rt_nil_check(F->s_641)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2160, rt_str("->", 2)), (((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_2149)).cfield))->all)), rt_str(" = &", 4)), (((P1008)rt_nil_check(F->lv_2151))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1027)rt_nil_check(F->pm_2149)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2160, rt_str("->", 2)), (((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_2149)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2152, F->lc_2154)), rt_str("; ", 2)), F->nf_2160), rt_str("->", 2)), (((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_2149)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2152, F->lc_2154)), rt_str(";", 1)); b_; }));
}
}
F->a_2150 = (*(P1015)rt_nil_check(F->a_2150)).next;
F->pm_2149 = (*(P1027)rt_nil_check(F->pm_2149)).next;
}
if (((F->a_2150 != NULL) || (F->pm_2149 != NULL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->s_641)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->s_641)).name))->all)); b_; }));
}
if ((F->act_2159 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1008)rt_nil_check(F->act_2159))->all)), rt_str(", &", 3)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2148)).cname))->all)), rt_str("decl, ", 6)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2148)).cname))->all)), rt_str(", ", 2)), F->nf_2160), rt_str("); }", 4)); b_; }));
} else {
f_user_create_652(F->s_641, F->y_2148, &(((P1008)rt_nil_check(F->lv_2151))->all), F->at_2156, &F->nf_2160);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_646(rstr *name_643, P1021 t_644, rstr *place_645) {
  struct f_hidden_var_646fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_643 = name_643;
F->t_644 = t_644;
F->place_645 = place_645;
F->y_2167 = NULL;
F->y_2167 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_643)));
(*(P1025)rt_nil_check(F->y_2167)).t = F->t_644;
(*(P1025)rt_nil_check(F->y_2167)).level = ((rt_int)0LL);
(*(P1025)rt_nil_check(F->y_2167)).access = f_mk_3(&(*F->place_645));
f_define_168(F->y_2167, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_652(P1015 s_647, P1025 y_648, rstr *uv_649, P1021 ut_650, rstr *nf_651) {
  struct f_user_create_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_647 = s_647;
F->y_648 = y_648;
F->uv_649 = uv_649;
F->ut_650 = ut_650;
F->nf_651 = nf_651;
F->t_2168 = NULL;
F->saved_2169 = NULL;
F->saved_2169 = g_code_1069;
F->hook_2170 = NULL;
F->hook_2170 = f_new_buffer_24();
F->un_2171 = NULL;
F->un_2171 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line));
F->hn_2172 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2173 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2174 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2175 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_646(&F->uname_2174, F->ut_650, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_650)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1015)rt_nil_check(F->un_2171)).name = f_mk_3(&F->uname_2174);
g_code_1069 = F->hook_2170;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2171, rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line)), 1, &F->t_2168)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2171, rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line)), 1, &F->t_2168)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2171, rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line)), 1, &F->t_2168)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2171, rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line)), 1, &F->t_2168)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1069 = F->saved_2169;
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2172), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2172), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1008)rt_nil_check((*(P1025)rt_nil_check(g_func_sym_1083)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1066, F->hook_2170);
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2173), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2173, rt_str("->hook = ", 9)), F->hn_2172), rt_str("; ", 2)), F->aa_2173), rt_str("->ua = &", 8)), (*F->uv_649)), rt_str("; ", 2)), F->aa_2173), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_927(F->ut_650)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1071)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2173, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2173), rt_str(", &", 3)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_648)).cname))->all)), rt_str("decl, ", 6)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_648)).cname))->all)), rt_str(", ", 2)), (*F->nf_651)), rt_str(");", 2)); b_; }));
f_hidden_var_646(&F->aname_2175, g_ty_act_1109, &F->aa_2173);
{
F->start_2176 = NULL;
F->start_2176 = f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1015)rt_nil_check(F->s_647)).a, rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line));
F->an_2177 = NULL;
F->an_2177 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->s_647)).line));
(*(P1015)rt_nil_check(F->an_2177)).name = f_mk_3(&F->aname_2175);
(*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->start_2176)).b)).next = F->an_2177;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_937(F->start_2176, 1, &F->t_2168), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_657(P1015 inv_653, rstr *arr_654, rt_int i_655, int mixed_656) {
  struct f_wait_alt_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_653 = inv_653;
F->arr_654 = arr_654;
F->i_655 = i_655;
F->mixed_656 = mixed_656;
F->lv_2178 = NULL;
F->t_2179 = NULL;
F->vt_2180 = NULL;
F->c_2181 = NULL;
F->ro_2182 = RT_R_EUNDEF;
F->fn_2183 = NULL;
F->args_2184 = NULL;
F->slot_2185 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_654), rt_str("[", 1)), f_itos_7(F->i_655)), rt_str("]", 1)));
if (((rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_653)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2183 = (*(P1015)rt_nil_check(F->inv_653)).a;
F->args_2184 = (*(P1015)rt_nil_check(F->inv_653)).b;
if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_758(F->args_2184, &F->lv_2178, &F->t_2179, &F->c_2181, &F->ro_2182);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2179)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2186 = NULL;
F->dt_2187 = NULL;
f_lvalue_758((*(P1015)rt_nil_check(F->args_2184)).next, &F->dv_2186, &F->dt_2187, &F->c_2181, &F->ro_2182);
f_check_type_232(F->dt_2187, (*(P1021)rt_nil_check(F->t_2179)).elem, rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1008)rt_nil_check(F->lv_2178))->all)), rt_str(", &", 3)), (((P1008)rt_nil_check(F->dv_2186))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2188 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2189 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_2184)).next, (*(P1021)rt_nil_check(F->t_2179)).elem, &F->vt_2180));
f_check_type_232(F->vt_2180, (*(P1021)rt_nil_check(F->t_2179)).elem, rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1021)rt_nil_check(F->t_2179)).elem), rt_str(" ", 1)), F->tmp_2188), rt_str(" = ", 3)), F->v_2189), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1008)rt_nil_check(F->lv_2178))->all)), rt_str(", &", 3)), F->tmp_2188), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2184) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_953(F->args_2184)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2190 = rt_str_copy(f_gexpr_789(F->args_2184, g_ty_int_1099, &F->vt_2180));
if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY", 5)) && F->mixed_656)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2190), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2190), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2190), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2185, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_640(F->args_2184)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->inv_653)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2183)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_659(P1015 inv_658) {
  struct f_builtin_wait_659fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_658 = inv_658;
F->lv_2191 = NULL;
F->t_2192 = NULL;
F->c_2193 = NULL;
F->ro_2194 = RT_R_EUNDEF;
F->saved_2195 = NULL;
F->saved_2195 = g_code_1069;
F->ok_2196 = RT_R_EUNDEF;
F->ok_2196 = 0;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->inv_658)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_658)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = f_new_buffer_24();
{ rt_frame xf2197;
if (RT_TRY(xf2197)) {
f_lvalue_758((*(P1015)rt_nil_check(F->inv_658)).b, &F->lv_2191, &F->t_2192, &F->c_2193, &F->ro_2194);
F->ok_2196 = (rt_r_ichk((*(P1021)rt_nil_check(F->t_2192)).kind) == (((rt_int)12LL)));
RT_POP(xf2197);
} else {
RT_POP(xf2197);
int x2198 = rt_xcur;
if (0 || x2198 == ex_compile_error_1) {
F->ok_2196 = 0;
} else {
rt_raise(x2198);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = F->saved_2195;
F->result_ = rt_r_echk(F->ok_2196);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_664(P1015 inv_660, rstr *op_661, rstr *q_662, int is_stmt_663) {
  struct f_wait_op_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_660 = inv_660;
F->op_661 = op_661;
F->q_662 = q_662;
F->is_stmt_663 = is_stmt_663;
F->x_2199 = NULL;
F->x_2199 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->inv_660)).line));
F->f_2200 = NULL;
F->f_2200 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->inv_660)).line));
F->qn_2201 = NULL;
F->qn_2201 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->inv_660)).line));
F->t_2202 = NULL;
(*(P1015)rt_nil_check(F->f_2200)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_660)).a)).name))->all), rt_str("_", 1)), (*F->op_661)); b_; }));
(*(P1015)rt_nil_check(F->qn_2201)).name = f_mk_3(&(*F->q_662));
(*(P1015)rt_nil_check(F->qn_2201)).next = (*(P1015)rt_nil_check(F->inv_660)).b;
(*(P1015)rt_nil_check(F->x_2199)).a = F->f_2200;
(*(P1015)rt_nil_check(F->x_2199)).b = F->qn_2201;
{
F->r_2203 = rt_str_copy(f_gcall_937(F->x_2199, F->is_stmt_663, &F->t_2202));
if ((!F->is_stmt_663)) {
f_check_type_232(F->t_2202, g_ty_bool_1100, rt_r_ichk((*(P1015)rt_nil_check(F->inv_660)).line));
}
F->result_ = F->r_2203;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_669(P1015 s_665, rstr *arr_666, rstr *w_667, rt_int n_668) {
  struct f_user_wait_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_665 = s_665;
F->arr_666 = arr_666;
F->w_667 = w_667;
F->n_668 = n_668;
F->a_2204 = NULL;
F->a_2204 = (*(P1015)rt_nil_check(F->s_665)).a;
F->i_2205 = RT_R_IUNDEF;
F->i_2205 = ((rt_int)0LL);
F->tests_2206 = NULL;
F->tests_2206 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2207 = NULL;
F->revokes_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2204 != NULL)) {
F->inv_2208 = NULL;
F->inv_2208 = (*(P1015)rt_nil_check(F->a_2204)).a;
while ((F->inv_2208 != NULL)) {
if (f_builtin_wait_659(F->inv_2208)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_657(F->inv_2208, &(*F->arr_666), rt_r_ichk(F->i_2205), 1); b_; }));
} else {
F->st_2209 = NULL;
F->st_2209 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->inv_2208)).line));
F->c_2210 = NULL;
F->qt_2211 = NULL;
F->qname_2212 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2213 = NULL;
F->y_2213 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2212));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_666), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_2205))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1015)rt_nil_check(F->st_2209)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->inv_2208)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2211 = f_resolve_subtype_268(F->st_2209, &F->c_2210);
{
F->access_2214 = rt_str_copy(f_storage_508(&F->qname_2212, F->qt_2211));
f_init_storage_341(&F->access_2214, F->qt_2211, F->c_2210);
(*(P1025)rt_nil_check(F->y_2213)).t = F->qt_2211;
(*(P1025)rt_nil_check(F->y_2213)).c = F->c_2210;
f_bind_511(F->y_2213, &F->access_2214);
f_define_168(F->y_2213, rt_r_ichk((*(P1015)rt_nil_check(F->inv_2208)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_664(F->inv_2208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2212, 1), rt_str(";", 1)); b_; }));
F->tests_2206 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->tests_2206))->all), rt_str("if (", 4)), f_wait_op_664(F->inv_2208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2212, 0)), rt_str(") { ", 4)), f_wait_op_664(F->inv_2208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2212, 1)), rt_str("; ", 2)), (*F->w_667)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_2205))), rt_str("; break; } ", 11)); b_; }));
F->revokes_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->revokes_2207))->all), f_wait_op_664(F->inv_2208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2212, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2205 = rt_add(rt_r_ichk(F->i_2205), ((rt_int)1LL));
F->inv_2208 = (*(P1015)rt_nil_check(F->inv_2208)).next;
}
F->a_2204 = (*(P1015)rt_nil_check(F->a_2204)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_667)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1008)rt_nil_check(F->tests_2206))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_667), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_668)), rt_str(", ", 2)), (*F->arr_666)), rt_str("); if (", 7)), (*F->w_667)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_668)), rt_str(", ", 2)), (*F->arr_666)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_667)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_667)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1008)rt_nil_check(F->revokes_2207))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_671(P1015 s_670) {
  struct f_st_wait_671fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_670 = s_670;
F->a_2215 = NULL;
F->a_2215 = (*(P1015)rt_nil_check(F->s_670)).a;
F->n_2216 = RT_R_IUNDEF;
F->n_2216 = ((rt_int)0LL);
F->first_2217 = RT_R_EUNDEF;
F->first_2217 = 1;
F->inits_2218 = NULL;
F->inits_2218 = f_new_buffer_24();
F->user_2219 = RT_R_EUNDEF;
F->user_2219 = 0;
F->arr_2220 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2221 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2215 != NULL)) {
F->inv_2222 = NULL;
F->inv_2222 = (*(P1015)rt_nil_check(F->a_2215)).a;
F->n_2216 = rt_add(rt_r_ichk(F->n_2216), f_list_len_71((*(P1015)rt_nil_check(F->a_2215)).a));
while ((F->inv_2222 != NULL)) {
if ((!f_builtin_wait_659(F->inv_2222))) {
F->user_2219 = 1;
}
F->inv_2222 = (*(P1015)rt_nil_check(F->inv_2222)).next;
}
F->a_2215 = (*(P1015)rt_nil_check(F->a_2215)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2220), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_2216))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_2219)) {
f_user_wait_669(F->s_670, &F->arr_2220, &F->w_2221, rt_r_ichk(F->n_2216));
} else {
F->a_2215 = (*(P1015)rt_nil_check(F->s_670)).a;
F->n_2216 = ((rt_int)0LL);
while ((F->a_2215 != NULL)) {
F->inv_2223 = NULL;
F->inv_2223 = (*(P1015)rt_nil_check(F->a_2215)).a;
while ((F->inv_2223 != NULL)) {
f_put_27(F->inits_2218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_657(F->inv_2223, &F->arr_2220, rt_r_ichk(F->n_2216), 0); b_; }));
F->n_2216 = rt_add(rt_r_ichk(F->n_2216), ((rt_int)1LL));
F->inv_2223 = (*(P1015)rt_nil_check(F->inv_2223)).next;
}
F->a_2215 = (*(P1015)rt_nil_check(F->a_2215)).next;
}
f_splice_34(g_code_1069, F->inits_2218);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2221), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_2216))), rt_str(", ", 2)), F->arr_2220), rt_str(");", 2)); b_; }));
}
F->a_2215 = (*(P1015)rt_nil_check(F->s_670)).a;
F->n_2216 = ((rt_int)0LL);
while ((F->a_2215 != NULL)) {
F->conds_2224 = NULL;
F->conds_2224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2226 = ((rt_int)1LL), hi2227 = f_list_len_71((*(P1015)rt_nil_check(F->a_2215)).a);
for (rt_int it2228 = lo2226; it2228 <= hi2227; it2228++) {
F->i_2225 = it2228;
F->conds_2224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->conds_2224))->all), rt_str(" || ", 4)), F->w_2221), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_2216))); b_; }));
F->n_2216 = rt_add(rt_r_ichk(F->n_2216), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_2217)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1008)rt_nil_check(F->conds_2224))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1008)rt_nil_check(F->conds_2224))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2217 = 0;
f_gen_body_586((*(P1015)rt_nil_check(F->a_2215)).b);
F->a_2215 = (*(P1015)rt_nil_check(F->a_2215)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1015 f_call_node_675(rstr *name_672, P1015 arg_673, rt_int line_674) {
  struct f_call_node_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_672 = name_672;
F->arg_673 = arg_673;
F->line_674 = line_674;
F->x_2229 = NULL;
F->x_2229 = f_nn_65((((rt_int)10LL)), F->line_674);
F->f_2230 = NULL;
F->f_2230 = f_nn_65((((rt_int)7LL)), F->line_674);
(*(P1015)rt_nil_check(F->f_2230)).name = f_mk_3(&(*F->name_672));
(*(P1015)rt_nil_check(F->x_2229)).a = F->f_2230;
(*(P1015)rt_nil_check(F->x_2229)).b = f_copy_node_828(F->arg_673);
(*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->x_2229)).b)).next = NULL;
F->result_ = F->x_2229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_677(P1015 s_676) {
  struct f_user_region_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_676 = s_676;
F->t_2231 = NULL;
F->f_2232 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2233 = rt_str_copy(f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1015)rt_nil_check(F->s_676)).a, rt_r_ichk((*(P1015)rt_nil_check(F->s_676)).line)), 1, &F->t_2231));
F->unlock_2234 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_937(f_call_node_675(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1015)rt_nil_check(F->s_676)).a, rt_r_ichk((*(P1015)rt_nil_check(F->s_676)).line)), 1, &F->t_2231)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2233), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2232), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2232), rt_str(")) {", 4)); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2232), rt_str("); ", 3)), F->unlock_2234); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_676)).b);
f_pop_cleanup_595();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2232), rt_str("); ", 3)), F->unlock_2234); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2232), rt_str("); ", 3)), F->unlock_2234), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_679(P1015 s_678) {
  struct f_st_region_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_678 = s_678;
F->lv_2235 = NULL;
F->t_2236 = NULL;
F->c_2237 = NULL;
F->ro_2238 = RT_R_EUNDEF;
F->lk_2239 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2240 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_758((*(P1015)rt_nil_check(F->s_678)).a, &F->lv_2235, &F->t_2236, &F->c_2237, &F->ro_2238);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2236)).kind) != (((rt_int)13LL)))) {
f_user_region_677(F->s_678);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2239), rt_str(" = &", 4)), (((P1008)rt_nil_check(F->lv_2235))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2239), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2240), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2240), rt_str(")) {", 4)); b_; }));
f_push_cleanup_594(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2240), rt_str("); rt_region_leave(", 19)), F->lk_2239), rt_str(");", 2)); b_; }));
f_gen_body_586((*(P1015)rt_nil_check(F->s_678)).b);
f_pop_cleanup_595();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2240), rt_str("); rt_region_leave(", 19)), F->lk_2239), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2240), rt_str("); rt_region_leave(", 19)), F->lk_2239), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1015 f_gparam_682(P1015 g_680, rstr *name_681) {
  struct f_gparam_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_680 = g_680;
F->name_681 = name_681;
F->p_2241 = NULL;
F->p_2241 = (*(P1015)rt_nil_check(F->g_680)).a;
while ((F->p_2241 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2241)).name))->all), (*F->name_681))) {
F->result_ = F->p_2241;
goto ret_;
}
F->p_2241 = (*(P1015)rt_nil_check(F->p_2241)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_bind_sym_684(P1015 p_683) {
  struct f_bind_sym_684fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_683 = p_683;
F->y_2242 = NULL;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_683)).ival) <= ((rt_int)2LL))) {
F->y_2242 = f_new_sym_181((((rt_int)5LL)), (*(P1015)rt_nil_check(F->p_683)).name);
} else {
F->y_2242 = f_new_sym_181((((rt_int)2LL)), (*(P1015)rt_nil_check(F->p_683)).name);
}
F->result_ = F->y_2242;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_687(P1025 a_685, P1025 b_686) {
  struct f_same_binds_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_685 = a_685;
F->b_686 = b_686;
F->x_2243 = NULL;
F->x_2243 = F->a_685;
F->y_2244 = NULL;
F->y_2244 = F->b_686;
while (((F->x_2243 != NULL) && (F->y_2244 != NULL))) {
if (((!rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->x_2243)).name))->all), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2244)).name))->all))) || (!f_same_binding_690(F->x_2243, F->y_2244)))) {
F->result_ = 0;
goto ret_;
}
F->x_2243 = (*(P1025)rt_nil_check(F->x_2243)).mnext;
F->y_2244 = (*(P1025)rt_nil_check(F->y_2244)).mnext;
}
F->result_ = ((F->x_2243 == NULL) && (F->y_2244 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_690(P1025 a_688, P1025 b_689) {
  struct f_same_binding_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_688 = a_688;
F->b_689 = b_689;
if ((rt_r_ichk((*(P1025)rt_nil_check(F->a_688)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P1025)rt_nil_check(F->b_689)).kind) == (((rt_int)5LL))) && f_same_221((*(P1025)rt_nil_check(F->a_688)).t, (*(P1025)rt_nil_check(F->b_689)).t));
goto ret_;
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->a_688)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1025)rt_nil_check(F->a_688)).hasmv))) {
F->result_ = (rt_r_echk((*(P1025)rt_nil_check(F->b_689)).hasmv) && (rt_r_ichk((*(P1025)rt_nil_check(F->a_688)).mvalue) == rt_r_ichk((*(P1025)rt_nil_check(F->b_689)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->a_688)).kind) == (((rt_int)2LL))) && ((*(P1025)rt_nil_check(F->a_688)).mv != NULL))) {
if (((((*(P1025)rt_nil_check(F->b_689)).mv == NULL) || (rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->a_688)).mv)).kind) != rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_689)).mv)).kind))) || (!f_same_221((*(P1025)rt_nil_check(F->a_688)).t, (*(P1025)rt_nil_check(F->b_689)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->a_688)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1008)rt_nil_check((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->a_688)).mv)).s))->all), (((P1008)rt_nil_check((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_689)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->a_688)).mv)).i) == rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_689)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P1025)rt_nil_check(F->a_688)).cname != NULL) && ((*(P1025)rt_nil_check(F->b_689)).cname != NULL)) && rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->a_688)).cname))->all), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->b_689)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_tt_binds_695(P1015 gd_691, P1015 formals_692, P1015 actuals_693, rt_int line_694) {
  struct f_tt_binds_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_691 = gd_691;
F->formals_692 = formals_692;
F->actuals_693 = actuals_693;
F->line_694 = line_694;
F->f_2245 = NULL;
F->f_2245 = F->formals_692;
F->a_2246 = NULL;
F->a_2246 = F->actuals_693;
F->binds_2247 = NULL;
F->c_2248 = NULL;
F->at_2249 = NULL;
while (((F->f_2245 != NULL) && (F->a_2246 != NULL))) {
F->p_2250 = NULL;
F->p_2250 = f_gparam_682(F->gd_691, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->f_2245)).name))->all));
F->b_2251 = NULL;
if ((F->p_2250 == NULL)) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->f_2245)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2251 = f_bind_sym_684(F->p_2250);
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->a_2246)).kind) >= (((rt_int)70LL)))) {
(*(P1025)rt_nil_check(F->b_2251)).t = f_resolve_subtype_268(F->a_2246, &F->c_2248);
} else {
F->st_2252 = NULL;
F->st_2252 = f_nn_65((((rt_int)80LL)), F->line_694);
(*(P1015)rt_nil_check(F->st_2252)).name = (*(P1015)rt_nil_check(F->a_2246)).name;
(*(P1025)rt_nil_check(F->b_2251)).t = f_resolve_subtype_268(F->st_2252, &F->c_2248);
}
(*(P1025)rt_nil_check(F->b_2251)).c = F->c_2248;
if ((((*(P1015)rt_nil_check(F->p_2250)).b != NULL) && (!f_type_allowed_699((*(P1025)rt_nil_check(F->b_2251)).t, (*(P1015)rt_nil_check(F->p_2250)).b, F->binds_2247)))) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2250)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->a_2246)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2250)).name))->all)); b_; }));
}
F->b_2251 = f_copy_sym_433(f_pick_operation_710(rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival), &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->a_2246)).name))->all), (*(P1015)rt_nil_check(F->p_2250)).b, (*(P1015)rt_nil_check(F->p_2250)).a, F->binds_2247, F->line_694));
(*(P1025)rt_nil_check(F->b_2251)).name = (*(P1015)rt_nil_check(F->p_2250)).name;
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) == ((rt_int)8LL)))) {
F->ok_2253 = RT_R_EUNDEF;
(*(P1025)rt_nil_check(F->b_2251)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_789(F->a_2246, NULL, &F->at_2249)), rt_str(")", 1)); b_; }));
(*(P1025)rt_nil_check(F->b_2251)).t = F->at_2249;
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P1021)rt_nil_check(F->at_2249)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P1015)rt_nil_check(F->p_2250)).ival) == ((rt_int)8LL)) && ((*(P1021)rt_nil_check(f_base_of_223(F->at_2249))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2250)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1025)rt_nil_check(F->b_2251)).mv = f_meval_375(F->a_2246, &F->ok_2253);
if ((!rt_r_echk(F->ok_2253))) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2250)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_2251)).mv)).kind) == (((rt_int)4LL)))) {
(*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_2251)).mv)).i = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(F->at_2249))).lits, &(((P1008)rt_nil_check((*(P1034)rt_nil_check((*(P1025)rt_nil_check(F->b_2251)).mv)).s))->all));
}
} else {
F->ok_2254 = RT_R_EUNDEF;
(*(P1025)rt_nil_check(F->b_2251)).t = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_2250)).a, &F->c_2248);
(*(P1025)rt_nil_check(F->b_2251)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1025)rt_nil_check(F->b_2251)).t, F->c_2248, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_789(F->a_2246, (*(P1025)rt_nil_check(F->b_2251)).t, &F->at_2249); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2249, (*(P1025)rt_nil_check(F->b_2251)).t, F->line_694);
(*(P1025)rt_nil_check(F->b_2251)).mvalue = f_manifest_366(F->a_2246, &F->ok_2254);
(*(P1025)rt_nil_check(F->b_2251)).hasmv = rt_r_echk(F->ok_2254);
(*(P1025)rt_nil_check(F->b_2251)).mv = f_meval_375(F->a_2246, &F->ok_2254);
if ((!rt_r_echk(F->ok_2254))) {
f_fail_23(F->line_694, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2250)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1025)rt_nil_check(F->b_2251)).mnext = F->binds_2247;
F->binds_2247 = F->b_2251;
F->f_2245 = (*(P1015)rt_nil_check(F->f_2245)).next;
F->a_2246 = (*(P1015)rt_nil_check(F->a_2246)).next;
}
F->result_ = F->binds_2247;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_699(P1021 t_696, P1015 items_697, P1025 binds_698) {
  struct f_type_allowed_699fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_696 = t_696;
F->items_697 = items_697;
F->binds_698 = binds_698;
F->it_2255 = NULL;
F->it_2255 = F->items_697;
F->b_2256 = NULL;
F->b_2256 = f_base_of_223(F->t_696);
while ((F->it_2255 != NULL)) {
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->it_2255)).kind) == (((rt_int)80LL))) && ((*(P1015)rt_nil_check(F->it_2255)).b == NULL)) && (f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2255)).name))->all)) == NULL))) {
F->w_2257 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2255)).name))->all));
if (((((((((((rt_str_eq(F->w_2257, rt_str("INT", 3)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2257, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2257, rt_str("BOOL", 4)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2257, rt_str("ENUM", 4)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2257, rt_str("STRING", 6)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2257, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2257, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2257, rt_str("UNION", 5)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2257, rt_str("SET", 3)) && (rt_r_ichk((*(P1021)rt_nil_check(F->b_2256)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2257, rt_str("ASCII", 5)) && f_same_221(F->t_696, g_ty_ascii_1102)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2258 = NULL;
if (f_same_221(f_resolve_in_binds_703(F->it_2255, F->binds_698, &F->c_2258), F->t_696)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2255 = (*(P1015)rt_nil_check(F->it_2255)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_resolve_in_binds_703(P1015 st_700, P1025 binds_701, P1017 *c_702) {
  struct f_resolve_in_binds_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_700 = st_700;
F->binds_701 = binds_701;
F->c_702 = c_702;
F->c_702v = *F->c_702;
F->b_2259 = NULL;
F->b_2259 = F->binds_701;
F->t_2260 = NULL;
f_open_scope_177();
while ((F->b_2259 != NULL)) {
F->z_2261 = NULL;
F->z_2261 = f_copy_sym_433(F->b_2259);
f_define_168(F->z_2261, rt_r_ichk((*(P1015)rt_nil_check(F->st_700)).line));
F->b_2259 = (*(P1025)rt_nil_check(F->b_2259)).mnext;
}
F->t_2260 = f_resolve_subtype_268(F->st_700, &F->c_702v);
f_close_scope_178();
F->result_ = F->t_2260;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_702) = F->c_702v;
  RT_FPOP();
  return F->result_;
}

static P1025 f_pick_operation_710(rt_int kind_704, rstr *name_705, P1015 sig_706, P1015 res_707, P1025 binds_708, rt_int line_709) {
  struct f_pick_operation_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_704 = kind_704;
F->name_705 = name_705;
F->sig_706 = sig_706;
F->res_707 = res_707;
F->binds_708 = binds_708;
F->line_709 = line_709;
F->y_2262 = NULL;
F->c_2263 = NULL;
F->want_2264 = RT_R_IUNDEF;
F->want_2264 = (((rt_int)4LL));
if ((F->kind_704 == ((rt_int)4LL))) {
F->want_2264 = (((rt_int)3LL));
} else if ((F->kind_704 == ((rt_int)5LL))) {
F->want_2264 = (((rt_int)9LL));
}
{ rt_int lo2266 = ((rt_int)1LL), hi2267 = ((rt_int)3LL);
for (rt_int it2268 = lo2266; it2268 <= hi2267; it2268++) {
F->pass_2265 = it2268;
F->y_2262 = f_overload_chain_917(&(*F->name_705), F->pass_2265);
while ((F->y_2262 != NULL)) {
if (((rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2262)).name))->all), (*F->name_705)) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2262)).kind) == rt_r_ichk(F->want_2264)) || ((F->kind_704 == ((rt_int)0LL)) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2262)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2262)).kind) == (((rt_int)3LL))))))) && ((F->pass_2265 != ((rt_int)1LL)) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2262)).depth) >= rt_r_ichk(g_gdepth_1088))))) {
F->ok_2269 = RT_R_EUNDEF;
F->ok_2269 = 1;
if (((F->sig_706 != NULL) || (F->kind_704 == ((rt_int)0LL)))) {
F->s_2270 = NULL;
F->s_2270 = F->sig_706;
F->pm_2271 = NULL;
F->pm_2271 = (*(P1025)rt_nil_check(F->y_2262)).params;
while (((rt_r_echk(F->ok_2269) && (F->s_2270 != NULL)) && (F->pm_2271 != NULL))) {
F->ok_2269 = f_same_221(f_resolve_in_binds_703(F->s_2270, F->binds_708, &F->c_2263), (*(P1027)rt_nil_check(F->pm_2271)).t);
F->s_2270 = (*(P1015)rt_nil_check(F->s_2270)).next;
F->pm_2271 = (*(P1027)rt_nil_check(F->pm_2271)).next;
}
F->ok_2269 = ((rt_r_echk(F->ok_2269) && (F->s_2270 == NULL)) && (F->pm_2271 == NULL));
}
if ((rt_r_echk(F->ok_2269) && (F->res_707 != NULL))) {
F->ok_2269 = ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2262)).kind) == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_703(F->res_707, F->binds_708, &F->c_2263), (*(P1025)rt_nil_check(F->y_2262)).result));
}
if (rt_r_echk(F->ok_2269)) {
F->result_ = F->y_2262;
goto ret_;
}
}
F->y_2262 = (*(P1025)rt_nil_check(F->y_2262)).chain;
}
}
}
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_712(F->kind_704)), (*F->name_705)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_712(rt_int kind_711) {
  struct f_kind_word_712fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_711 = kind_711;
if ((F->kind_711 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_711 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_711 == ((rt_int)5LL))) {
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

static P1025 f_need_binds_716(P1015 gd_713, P1025 binds_714, rt_int line_715) {
  struct f_need_binds_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_713 = gd_713;
F->binds_714 = binds_714;
F->line_715 = line_715;
F->it_2272 = NULL;
F->it_2272 = (*(P1015)rt_nil_check(F->gd_713)).d;
F->r_2273 = NULL;
F->r_2273 = F->binds_714;
while ((F->it_2272 != NULL)) {
F->found_2274 = RT_R_EUNDEF;
F->found_2274 = 0;
F->y_2275 = NULL;
F->y_2275 = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2272)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2275 != NULL) && (!rt_r_echk(F->found_2274)))) {
if ((rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2275)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2272)).name))->all)) && (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2275)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2275)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2275)).kind) == (((rt_int)9LL)))))) {
F->found_2274 = 1;
}
F->y_2275 = (*(P1025)rt_nil_check(F->y_2275)).chain;
}
if (rt_r_echk(F->found_2274)) {
F->z_2276 = NULL;
F->z_2276 = f_copy_sym_433(f_pick_operation_710(rt_r_ichk((*(P1015)rt_nil_check(F->it_2272)).ival), &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2272)).name))->all), (*(P1015)rt_nil_check(F->it_2272)).b, (*(P1015)rt_nil_check(F->it_2272)).a, F->r_2273, F->line_715));
(*(P1025)rt_nil_check(F->z_2276)).mnext = F->r_2273;
F->r_2273 = F->z_2276;
} else if ((!f_is_definable_138(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2272)).name))->all)))) {
f_fail_23(F->line_715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->it_2272)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2272 = (*(P1015)rt_nil_check(F->it_2272)).next;
}
F->result_ = F->r_2273;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_718(P1015 st_717) {
  struct f_generic_use_718fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_717 = st_717;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->st_717)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1025)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1015)rt_nil_check(F->st_717)).kind) == (((rt_int)80LL))) && ((*(P1015)rt_nil_check(F->st_717)).a != NULL)) && (f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->st_717)).name))->all)) != NULL)) && ((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->st_717)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_infer_from_723(P1015 gd_719, P1015 pat_720, P1021 t_721, P1025 known_722) {
  struct f_infer_from_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_719 = gd_719;
F->pat_720 = pat_720;
F->t_721 = t_721;
F->known_722 = known_722;
F->binds_2277 = NULL;
F->binds_2277 = F->known_722;
F->e_2278 = NULL;
F->e_2278 = (*(P1015)rt_nil_check(F->pat_720)).a;
F->tp_2279 = NULL;
if (((F->t_721 == NULL) || ((*(P1021)rt_nil_check(F->t_721)).gen == NULL))) {
F->result_ = F->binds_2277;
goto ret_;
}
F->tp_2279 = (*(P1015)rt_nil_check((*(P1025)rt_nil_check((*(P1021)rt_nil_check(F->t_721)).gen)).decl)).a;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->pat_720)).kind) == (((rt_int)78LL)))) {
F->e_2278 = f_copy_node_828((*(P1015)rt_nil_check(F->pat_720)).a);
(*(P1015)rt_nil_check(F->e_2278)).next = NULL;
}
while (((F->e_2278 != NULL) && (F->tp_2279 != NULL))) {
F->nm_2280 = NULL;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_2278)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_2278)).kind) == (((rt_int)80LL))))) {
F->nm_2280 = (*(P1015)rt_nil_check(F->e_2278)).name;
}
if ((((F->nm_2280 != NULL) && (f_gparam_682(F->gd_719, &(((P1008)rt_nil_check(F->nm_2280))->all)) != NULL)) && ((*(P1015)rt_nil_check(f_gparam_682(F->gd_719, &(((P1008)rt_nil_check(F->nm_2280))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2281 = NULL;
F->q_2281 = F->binds_2277;
F->have_2282 = RT_R_EUNDEF;
F->have_2282 = 0;
while ((F->q_2281 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->q_2281)).name))->all), (((P1008)rt_nil_check(F->nm_2280))->all))) {
F->have_2282 = 1;
}
F->q_2281 = (*(P1025)rt_nil_check(F->q_2281)).mnext;
}
if ((!rt_r_echk(F->have_2282))) {
F->g_2283 = NULL;
F->g_2283 = (*(P1021)rt_nil_check(F->t_721)).gbinds;
while ((F->g_2283 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->g_2283)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->tp_2279)).name))->all))) {
F->b_2284 = NULL;
F->b_2284 = f_bind_sym_684(f_gparam_682(F->gd_719, &(((P1008)rt_nil_check(F->nm_2280))->all)));
(*(P1025)rt_nil_check(F->b_2284)).t = (*(P1025)rt_nil_check(F->g_2283)).t;
(*(P1025)rt_nil_check(F->b_2284)).c = (*(P1025)rt_nil_check(F->g_2283)).c;
(*(P1025)rt_nil_check(F->b_2284)).mnext = F->binds_2277;
F->binds_2277 = F->b_2284;
}
F->g_2283 = (*(P1025)rt_nil_check(F->g_2283)).mnext;
}
}
}
F->e_2278 = (*(P1015)rt_nil_check(F->e_2278)).next;
F->tp_2279 = (*(P1015)rt_nil_check(F->tp_2279)).next;
}
F->result_ = F->binds_2277;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_instantiate_type_729(P1025 g_724, P1015 tt_725, P1015 args_726, P1017 *c_727, rt_int line_728) {
  struct f_instantiate_type_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_724 = g_724;
F->tt_725 = tt_725;
F->args_726 = args_726;
F->c_727 = c_727;
F->c_727v = *F->c_727;
F->line_728 = line_728;
F->gd_2285 = NULL;
F->gd_2285 = (*(P1025)rt_nil_check(F->g_724)).decl;
F->pat_2286 = NULL;
F->pat_2286 = (*(P1015)rt_nil_check(F->gd_2285)).b;
F->binds_2287 = NULL;
F->binds_2287 = f_tt_binds_695(F->gd_2285, (*(P1015)rt_nil_check(F->pat_2286)).e, F->tt_725, F->line_728);
F->inst_2288 = NULL;
F->inst_2288 = g_all_insts_1057;
F->t_2289 = NULL;
F->saved_caps_2290 = NULL;
F->saved_caps_2290 = g_caps_1074;
F->saved_env_2291 = NULL;
F->saved_env_2291 = g_genv_1056;
F->saved_gdepth_2292 = RT_R_IUNDEF;
F->saved_gdepth_2292 = rt_r_ichk(g_gdepth_1088);
F->c_727v = f_new_cons_184();
(*(P1017)rt_nil_check(F->c_727v)).args = F->args_726;
while ((F->inst_2288 != NULL)) {
if ((((*(P1025)rt_nil_check(F->inst_2288)).decl == F->pat_2286) && f_same_binds_687((*(P1025)rt_nil_check(F->inst_2288)).members, F->binds_2287))) {
F->result_ = (*(P1025)rt_nil_check(F->inst_2288)).t;
goto ret_;
}
F->inst_2288 = (*(P1025)rt_nil_check(F->inst_2288)).insts;
}
f_open_scope_177();
{
F->b_2293 = NULL;
F->b_2293 = F->binds_2287;
while ((F->b_2293 != NULL)) {
f_define_168(F->b_2293, F->line_728);
F->b_2293 = (*(P1025)rt_nil_check(F->b_2293)).mnext;
}
}
g_caps_1074 = NULL;
g_genv_1056 = (*(P1025)rt_nil_check(F->g_724)).env;
g_gdepth_1088 = rt_r_ichk(g_depth_1058);
{
F->y_2294 = NULL;
F->y_2294 = f_new_sym_181((((rt_int)5LL)), (*(P1015)rt_nil_check(F->pat_2286)).name);
F->yc_2295 = NULL;
(*(P1025)rt_nil_check(F->y_2294)).decl = F->pat_2286;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->pat_2286)).kind) == (((rt_int)44LL)))) {
F->t_2289 = f_new_typ_183((((rt_int)8LL)));
(*(P1021)rt_nil_check(F->t_2289)).name = (*(P1015)rt_nil_check(F->pat_2286)).name;
(*(P1021)rt_nil_check(F->t_2289)).decl = F->pat_2286;
(*(P1025)rt_nil_check(F->y_2294)).t = F->t_2289;
f_define_168(F->y_2294, F->line_728);
f_finish_ptr_464(F->t_2289);
} else {
f_define_168(F->y_2294, F->line_728);
F->t_2289 = f_new_type_318(F->y_2294, f_nn_65((((rt_int)80LL)), F->line_728), &F->yc_2295);
}
}
g_caps_1074 = F->saved_caps_2290;
g_genv_1056 = F->saved_env_2291;
g_gdepth_1088 = rt_r_ichk(F->saved_gdepth_2292);
(*(P1021)rt_nil_check(F->t_2289)).gen = F->g_724;
(*(P1021)rt_nil_check(F->t_2289)).gbinds = F->binds_2287;
f_close_scope_178();
{ R1026 *cell2296 = rt_alloc(sizeof(R1026));
(*cell2296).name = NULL;
(*cell2296).t = NULL;
(*cell2296).c = NULL;
(*cell2296).access = NULL;
(*cell2296).cname = NULL;
(*cell2296).st = NULL;
(*cell2296).decl = NULL;
(*cell2296).params = NULL;
(*cell2296).result = NULL;
(*cell2296).members = NULL;
(*cell2296).mnext = NULL;
(*cell2296).binds = NULL;
(*cell2296).insts = NULL;
(*cell2296).env = NULL;
(*cell2296).chain = NULL;
(*cell2296).stack = NULL;
(*cell2296).owner = NULL;
(*cell2296).gctx = NULL;
(*cell2296).mv = NULL;
(*cell2296).reqs = NULL;
(*cell2296).home = NULL;
(*cell2296).capn = NULL;
(*cell2296).tbinds = NULL;
(*cell2296).loc = NULL;
(*cell2296).reqs_sym = NULL;
F->inst_2288 = cell2296;
}
(*(P1025)rt_nil_check(F->inst_2288)).kind = (((rt_int)5LL));
(*(P1025)rt_nil_check(F->inst_2288)).name = (*(P1025)rt_nil_check(F->g_724)).name;
(*(P1025)rt_nil_check(F->inst_2288)).decl = F->pat_2286;
(*(P1025)rt_nil_check(F->inst_2288)).t = F->t_2289;
(*(P1025)rt_nil_check(F->inst_2288)).members = F->binds_2287;
(*(P1025)rt_nil_check(F->inst_2288)).insts = g_all_insts_1057;
g_all_insts_1057 = F->inst_2288;
F->result_ = F->t_2289;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_727) = F->c_727v;
  RT_FPOP();
  return F->result_;
}

static P1025 f_instantiate_734(P1025 g_730, P1015 tt_731, P1015 args_732, rt_int line_733) {
  struct f_instantiate_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_730 = g_730;
F->tt_731 = tt_731;
F->args_732 = args_732;
F->line_733 = line_733;
F->gd_2297 = NULL;
F->gd_2297 = (*(P1025)rt_nil_check(F->g_730)).decl;
F->pat_2298 = NULL;
F->pat_2298 = (*(P1015)rt_nil_check(F->gd_2297)).b;
F->binds_2299 = NULL;
F->f_2300 = NULL;
F->f_2300 = (*(P1015)rt_nil_check(F->pat_2298)).e;
F->a_2301 = NULL;
F->a_2301 = F->tt_731;
F->fp_2302 = NULL;
F->fp_2302 = (*(P1015)rt_nil_check(F->pat_2298)).a;
F->inst_2303 = NULL;
F->at_2304 = NULL;
F->c_2305 = NULL;
F->saved_fctx_2306 = NULL;
F->saved_fctx_2306 = g_fctx_1073;
F->saved_in_2307 = RT_R_EUNDEF;
F->saved_in_2307 = rt_r_echk(g_in_func_1071);
F->saved_level_2308 = RT_R_IUNDEF;
F->saved_level_2308 = rt_r_ichk(g_cur_level_1072);
F->saved_sym_2309 = NULL;
F->saved_sym_2309 = g_func_sym_1083;
F->saved_code_2310 = NULL;
F->saved_code_2310 = g_code_1069;
F->saved_env_2311 = NULL;
F->saved_env_2311 = g_genv_1056;
F->saved_gdepth_2312 = RT_R_IUNDEF;
F->saved_gdepth_2312 = rt_r_ichk(g_gdepth_1088);
F->binds_2299 = f_tt_binds_695(F->gd_2297, F->f_2300, F->a_2301, F->line_733);
F->a_2301 = F->args_732;
while (((F->fp_2302 != NULL) && (F->a_2301 != NULL))) {
if (f_generic_use_718((*(P1015)rt_nil_check(F->fp_2302)).a)) {
F->v_2313 = rt_str_copy(f_gexpr_789(F->a_2301, NULL, &F->at_2304));
F->binds_2299 = f_infer_from_723(F->gd_2297, (*(P1015)rt_nil_check(F->fp_2302)).a, F->at_2304, F->binds_2299);
} else if ((((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).kind) == (((rt_int)80LL))) && (f_gparam_682(F->gd_2297, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)) != NULL)) && ((*(P1015)rt_nil_check(f_gparam_682(F->gd_2297, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2314 = RT_R_EUNDEF;
F->known_2314 = 0;
F->q_2315 = NULL;
F->q_2315 = F->binds_2299;
while ((F->q_2315 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->q_2315)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all))) {
F->known_2314 = 1;
}
F->q_2315 = (*(P1025)rt_nil_check(F->q_2315)).mnext;
}
if ((!rt_r_echk(F->known_2314))) {
F->b_2316 = NULL;
F->b_2316 = f_bind_sym_684(f_gparam_682(F->gd_2297, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)));
F->v_2317 = rt_str_copy(f_gexpr_789(F->a_2301, NULL, &F->at_2304));
(*(P1025)rt_nil_check(F->b_2316)).t = F->at_2304;
(*(P1025)rt_nil_check(F->b_2316)).c = g_no_cons_1117;
if ((((*(P1015)rt_nil_check(f_gparam_682(F->gd_2297, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)))).b != NULL) && (!f_type_allowed_699(F->at_2304, (*(P1015)rt_nil_check(f_gparam_682(F->gd_2297, &(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)))).b, F->binds_2299)))) {
f_fail_23(F->line_733, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2302)).a)).name))->all)); b_; }));
}
(*(P1025)rt_nil_check(F->b_2316)).mnext = F->binds_2299;
F->binds_2299 = F->b_2316;
}
}
F->fp_2302 = (*(P1015)rt_nil_check(F->fp_2302)).next;
F->a_2301 = (*(P1015)rt_nil_check(F->a_2301)).next;
}
F->binds_2299 = f_need_binds_716(F->gd_2297, F->binds_2299, F->line_733);
F->inst_2303 = g_all_insts_1057;
while ((F->inst_2303 != NULL)) {
if ((((*(P1025)rt_nil_check(F->inst_2303)).decl == F->pat_2298) && f_same_binds_687((*(P1025)rt_nil_check(F->inst_2303)).members, F->binds_2299))) {
F->result_ = F->inst_2303;
goto ret_;
}
F->inst_2303 = (*(P1025)rt_nil_check(F->inst_2303)).insts;
}
g_fctx_1073 = (*(P1025)rt_nil_check(F->g_730)).gctx;
g_in_func_1071 = (rt_r_ichk((*(P1025)rt_nil_check(F->g_730)).level) > ((rt_int)0LL));
g_cur_level_1072 = rt_r_ichk((*(P1025)rt_nil_check(F->g_730)).level);
g_func_sym_1083 = (*(P1025)rt_nil_check(F->g_730)).owner;
g_code_1069 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1088 = rt_r_ichk(g_depth_1058);
{
F->b_2318 = NULL;
F->b_2318 = F->binds_2299;
while ((F->b_2318 != NULL)) {
f_define_168(F->b_2318, F->line_733);
F->b_2318 = (*(P1025)rt_nil_check(F->b_2318)).mnext;
}
}
g_genv_1056 = (*(P1025)rt_nil_check(F->g_730)).env;
F->inst_2303 = f_build_subprogram_494(F->pat_2298);
(*(P1025)rt_nil_check(F->inst_2303)).members = F->binds_2299;
(*(P1025)rt_nil_check(F->inst_2303)).insts = g_all_insts_1057;
g_all_insts_1057 = F->inst_2303;
f_define_168(F->inst_2303, F->line_733);
f_gen_subprogram_565(F->pat_2298, F->inst_2303);
f_close_scope_178();
g_fctx_1073 = F->saved_fctx_2306;
g_in_func_1071 = rt_r_echk(F->saved_in_2307);
g_cur_level_1072 = rt_r_ichk(F->saved_level_2308);
g_func_sym_1083 = F->saved_sym_2309;
g_code_1069 = F->saved_code_2310;
g_genv_1056 = F->saved_env_2311;
g_gdepth_1088 = rt_r_ichk(F->saved_gdepth_2312);
F->result_ = F->inst_2303;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_736(P1025 y_735) {
  struct f_access_of_736fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_735 = y_735;
F->p_2319 = NULL;
F->p_2319 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_735)).level) <= ((rt_int)0LL))) {
F->result_ = (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_735)).access))->all);
goto ret_;
}
{ rt_int lo2321 = ((rt_int)1LL), hi2322 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1025)rt_nil_check(F->y_735)).level));
for (rt_int it2323 = lo2321; it2323 <= hi2322; it2323++) {
F->i_2320 = it2323;
F->p_2319 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->p_2319))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P1025)rt_nil_check(F->y_735)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1008)rt_nil_check(F->p_2319))->all)), rt_str("->", 2)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_735)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->p_2319))->all), rt_str("->", 2)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_735)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_import_of_739(P1015 l_737, rstr *name_738) {
  struct f_import_of_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_737 = l_737;
F->name_738 = name_738;
F->p_2324 = NULL;
F->p_2324 = F->l_737;
while ((F->p_2324 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2324)).name))->all), (*F->name_738))) {
F->result_ = F->p_2324;
goto ret_;
}
F->p_2324 = (*(P1015)rt_nil_check(F->p_2324)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_742(P1025 y_740, rt_int line_741) {
  struct f_check_import_742fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_740 = y_740;
F->line_741 = line_741;
F->c_2325 = NULL;
F->c_2325 = g_fctx_1073;
F->ro_2326 = RT_R_EUNDEF;
F->ro_2326 = 0;
while (((F->c_2325 != NULL) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_740)).depth) < rt_r_ichk((*(P1032)rt_nil_check(F->c_2325)).depth)))) {
if ((!rt_r_echk((*(P1032)rt_nil_check(F->c_2325)).all_imp))) {
F->imp_2327 = NULL;
F->imp_2327 = f_import_of_739((*(P1032)rt_nil_check(F->c_2325)).imps, &(((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_740)).name))->all));
if ((F->imp_2327 == NULL)) {
f_fail_23(F->line_741, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_740)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->imp_2327)).ival) == ((rt_int)1LL))) {
F->ro_2326 = 1;
}
}
F->c_2325 = (*(P1032)rt_nil_check(F->c_2325)).next;
}
F->result_ = rt_r_echk(F->ro_2326);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_744(rstr *s_743) {
  struct f_c_ident_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_743 = s_743;
if (((((rt_int)(((*F->s_743)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_743), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_743), ((rt_int)2LL), ((rt_int)(((*F->s_743)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_743)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_743), ((rt_int)1LL))) == 40))) {
F->r_2328 = NULL;
F->r_2328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2330 = ((rt_int)2LL), hi2331 = rt_sub(((rt_int)(((*F->s_743)).len)), ((rt_int)1LL));
for (rt_int it2332 = lo2330; it2332 <= hi2331; it2332++) {
F->i_2329 = it2332;
if ((rt_r_echk(rt_str_get((*F->s_743), F->i_2329)) == 42)) {
F->r_2328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2328))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_743), F->i_2329)) == 44)) {
F->r_2328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2328))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_743), F->i_2329)) == 46)) {
F->r_2328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2328))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1008)rt_nil_check(F->r_2328))->all);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_743), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_743));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_747(P1021 t_745, rstr *p_746) {
  struct f_cell_deref_747fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_745 = t_745;
F->p_746 = p_746;
if ((((*(P1021)rt_nil_check(F->t_745)).decl != NULL) && ((*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_745)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_746)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_746)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_750(rstr *base_748, P1021 t_749) {
  struct f_deref_750fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_748 = base_748;
F->t_749 = t_749;
if ((((*(P1021)rt_nil_check(F->t_749)).decl != NULL) && ((*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_749)).decl)).b != NULL))) {
if (f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_748)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->t_749)), rt_str(")rt_nil_check(", 14)), (*F->base_748)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_749)), rt_str(")(", 2)), (*F->base_748)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_749)), rt_str(")rt_nil_check(", 14)), (*F->base_748)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_752(P1015 e_751) {
  struct f_is_lvalue_752fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_751 = e_751;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_751)).kind) == (((rt_int)7LL)))) {
F->y_2333 = NULL;
F->y_2333 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_751)).name))->all));
F->result_ = ((F->y_2333 != NULL) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2333)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2333)).kind) == (((rt_int)2LL))) && ((*(P1025)rt_nil_check(F->y_2333)).mv == NULL)) && (!rt_r_echk((*(P1025)rt_nil_check(F->y_2333)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_751)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_752((*(P1015)rt_nil_check(F->e_751)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_751)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_751)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_752((*(P1015)rt_nil_check(F->e_751)).a));
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_751)).kind) == (((rt_int)10LL)))) {
if ((((*(P1015)rt_nil_check(F->e_751)).b != NULL) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_751)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_752((*(P1015)rt_nil_check(F->e_751)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_758(P1015 e_753, P1008 *code_754, P1021 *t_755, P1017 *c_756, int *ro_757) {
  struct f_lvalue_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_753 = e_753;
F->code_754 = code_754;
F->code_754v = *F->code_754;
F->t_755 = t_755;
F->t_755v = *F->t_755;
F->c_756 = c_756;
F->c_756v = *F->c_756;
F->ro_757 = ro_757;
F->ro_757v = *F->ro_757;
F->base_2334 = NULL;
F->bt_2335 = NULL;
F->bc_2336 = NULL;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).kind) == (((rt_int)7LL)))) {
F->y_2337 = NULL;
F->y_2337 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_753)).name))->all));
if ((F->y_2337 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_753)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2337)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2337)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_753)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_754v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_736(F->y_2337); b_; }));
F->t_755v = (*(P1025)rt_nil_check(F->y_2337)).t;
F->c_756v = (*(P1025)rt_nil_check(F->y_2337)).c;
F->ro_757v = rt_r_echk((*(P1025)rt_nil_check(F->y_2337)).ro_flag);
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2337)).kind) == (((rt_int)1LL))) && f_check_import_742(F->y_2337, rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).line)))) {
F->ro_757v = 1;
}
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).kind) == (((rt_int)17LL)))) {
f_lvalue_758((*(P1015)rt_nil_check(F->e_753)).a, &F->code_754v, &F->t_755v, &F->c_756v, &F->ro_757v);
} else if (((((rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_753)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_753)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_754v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_925((*(P1015)rt_nil_check(F->e_753)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).line), &F->t_755v); b_; }));
F->c_756v = g_no_cons_1117;
F->ro_757v = 0;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).kind) == (((rt_int)11LL)))) {
f_lvalue_758((*(P1015)rt_nil_check(F->e_753)).a, &F->base_2334, &F->bt_2335, &F->bc_2336, &F->ro_757v);
f_select_on_766(&(((P1008)rt_nil_check(F->base_2334))->all), F->bt_2335, F->e_753, &F->ro_757v, &F->code_754v, &F->t_755v, &F->c_756v);
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).kind) == (((rt_int)10LL)))) {
f_lvalue_758((*(P1015)rt_nil_check(F->e_753)).a, &F->base_2334, &F->bt_2335, &F->bc_2336, &F->ro_757v);
f_index_on_783(&(((P1008)rt_nil_check(F->base_2334))->all), F->bt_2335, F->e_753, &F->ro_757v, 1, &F->code_754v, &F->t_755v, &F->c_756v);
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_753)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_754) = F->code_754v;  (*F->t_755) = F->t_755v;  (*F->c_756) = F->c_756v;  if (!rt_r_undef_BOOL(F->ro_757v)) (*F->ro_757) = F->ro_757v;
  RT_FPOP();
  return;
}

static void f_select_on_766(rstr *base_759, P1021 bt_760, P1015 e_761, int *ro_762, P1008 *code_763, P1021 *t_764, P1017 *c_765) {
  struct f_select_on_766fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_759 = base_759;
F->bt_760 = bt_760;
F->e_761 = e_761;
F->ro_762 = ro_762;
F->code_763 = code_763;
F->code_763v = *F->code_763;
F->t_764 = t_764;
F->t_764v = *F->t_764;
F->c_765 = c_765;
F->c_765v = *F->c_765;
F->c_765v = g_no_cons_1117;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_760)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_464(F->bt_760);
(*F->ro_762) = 0;
if (((*(P1021)rt_nil_check(F->bt_760)).decl != NULL)) {
F->p_2338 = NULL;
F->p_2338 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->bt_760)).decl)).b;
while ((F->p_2338 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2338)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))) {
F->pc_2339 = NULL;
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_760)), rt_str(")rt_nil_check(", 14)), (*F->base_759)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2338)).name))->all))), rt_str(")", 1)); b_; }));
F->t_764v = f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_2338)).a, &F->pc_2339);
(*F->ro_762) = 1;
goto ret_;
}
F->p_2338 = (*(P1015)rt_nil_check(F->p_2338)).next;
}
}
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all), rt_str("ALL", 3))) {
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_750(&(*F->base_759), F->bt_760); b_; }));
F->t_764v = (*(P1021)rt_nil_check(F->bt_760)).target;
goto ret_;
}
f_select_on_766(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_750(&(*F->base_759), F->bt_760); b_; }), (*(P1021)rt_nil_check(F->bt_760)).target, F->e_761, &(*F->ro_762), &F->code_763v, &F->t_764v, &F->c_765v);
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_760)).kind) == (((rt_int)15LL)))) {
F->p_2340 = NULL;
F->p_2340 = (*(P1021)rt_nil_check(F->bt_760)).tparams;
while ((F->p_2340 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))) {
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_759), rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all))); b_; }));
F->t_764v = f_tparam_type_352(F->bt_760, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all));
(*F->ro_762) = 1;
goto ret_;
}
F->p_2340 = (*(P1015)rt_nil_check(F->p_2340)).next;
}
F->p_2340 = (*(P1021)rt_nil_check(F->bt_760)).tparams;
if ((!f_opened_308(F->bt_760))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_761)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->bt_760)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1021)rt_nil_check(F->bt_760)).tparams == NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all), rt_str("ALL", 3))) {
F->code_763v = f_mk_3(&(*F->base_759));
F->t_764v = (*(P1021)rt_nil_check(F->bt_760)).under;
goto ret_;
}
f_select_on_766(&(*F->base_759), (*(P1021)rt_nil_check(F->bt_760)).under, F->e_761, &(*F->ro_762), &F->code_763v, &F->t_764v, &F->c_765v);
goto ret_;
}
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all), rt_str("ALL", 3))) {
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_759), rt_str(".all", 4)); b_; }));
F->t_764v = (*(P1021)rt_nil_check(F->bt_760)).under;
goto ret_;
}
while ((F->p_2340 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))) {
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_759), rt_str(".p_", 3)), f_lower_s_15(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all))); b_; }));
F->t_764v = f_tparam_type_352(F->bt_760, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2340)).name))->all));
(*F->ro_762) = 1;
goto ret_;
}
F->p_2340 = (*(P1015)rt_nil_check(F->p_2340)).next;
}
f_select_on_766(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_759), rt_str(".all", 4)); b_; }), (*(P1021)rt_nil_check(F->bt_760)).under, F->e_761, &(*F->ro_762), &F->code_763v, &F->t_764v, &F->c_765v);
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_760)).kind) == (((rt_int)17LL)))) {
F->f_2341 = NULL;
F->f_2341 = (*(P1021)rt_nil_check(F->bt_760)).fields;
F->i_2342 = RT_R_IUNDEF;
F->i_2342 = ((rt_int)0LL);
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all), rt_str("TAG", 3))) {
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_759)), rt_str(").tag)", 6)); b_; }));
F->t_764v = (*(P1021)rt_nil_check(F->bt_760)).elem;
(*F->ro_762) = 1;
goto ret_;
}
while ((F->f_2341 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2341)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))) {
F->fn_2343 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_759)), rt_str(").u.", 4)), f_field_c_17(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))));
F->c_765v = (*(P1023)rt_nil_check(F->f_2341)).c;
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_759)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2342))), rt_str(" \? &", 4)), F->fn_2343), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2343), rt_str(")))", 3)); b_; }));
F->t_764v = (*(P1023)rt_nil_check(F->f_2341)).t;
goto ret_;
}
F->i_2342 = rt_add(rt_r_ichk(F->i_2342), ((rt_int)1LL));
F->f_2341 = (*(P1023)rt_nil_check(F->f_2341)).next;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_761)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_760)).kind) == (((rt_int)7LL)))) {
F->f_2344 = NULL;
F->f_2344 = (*(P1021)rt_nil_check(F->bt_760)).fields;
while ((F->f_2344 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2344)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))) {
F->c_765v = (*(P1023)rt_nil_check(F->f_2344)).c;
F->code_763v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_759), rt_str(".", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all))); b_; }));
F->t_764v = (*(P1023)rt_nil_check(F->f_2344)).t;
goto ret_;
}
F->f_2344 = (*(P1023)rt_nil_check(F->f_2344)).next;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_761)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_761)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_761)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_763) = F->code_763v;  (*F->t_764) = F->t_764v;  (*F->c_765) = F->c_765v;
  RT_FPOP();
  return;
}

static int f_has_call_768(rstr *s_767) {
  struct f_has_call_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_767 = s_767;
{ rt_int lo2346 = ((rt_int)1LL), hi2347 = ((rt_int)(((*F->s_767)).len));
for (rt_int it2348 = lo2346; it2348 <= hi2347; it2348++) {
F->i_2345 = it2348;
if ((rt_r_echk(rt_str_get((*F->s_767), F->i_2345)) == 40)) {
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

static void f_need_slice_770(P1021 t_769) {
  struct f_need_slice_770fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_769 = t_769;
F->c_2349 = rt_str_copy(f_ctype_234(F->t_769));
F->n_2350 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2349));
F->l_2351 = NULL;
if (f_seen_name_420(g_mcopies_1098, &F->n_2350)) {
goto ret_;
}
{ R1020 *cell2352 = rt_alloc(sizeof(R1020));
(*cell2352).s = NULL;
(*cell2352).next = NULL;
F->l_2351 = cell2352;
}
(*(P1019)rt_nil_check(F->l_2351)).s = f_mk_3(&F->n_2350);
(*(P1019)rt_nil_check(F->l_2351)).next = g_mcopies_1098;
g_mcopies_1098 = F->l_2351;
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2349), rt_str(" ", 1)), F->n_2350), rt_str("(", 1)), F->c_2349), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2349), rt_str(" ", 1)), F->n_2350), rt_str("(", 1)), F->c_2349), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1064, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2349), rt_str(" rt_r_acat_", 11)), F->c_2349), rt_str("(", 1)), F->c_2349), rt_str(" a, ", 4)), F->c_2349), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2349), rt_str(" rt_r_acat_", 11)), F->c_2349), rt_str("(", 1)), F->c_2349), rt_str(" a, ", 4)), F->c_2349), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2349), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_409((*(P1021)rt_nil_check(F->t_769)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_409((*(P1021)rt_nil_check(F->t_769)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_774(rstr *i_771, rstr *lo_772, rstr *hi_773) {
  struct f_ix_774fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_771 = i_771;
F->lo_772 = lo_772;
F->hi_773 = hi_773;
if (f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_771)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_771)), rt_str(", ", 2)), (*F->lo_772)), rt_str(", ", 2)), (*F->hi_773)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_783(rstr *base_775, P1021 bt_776, P1015 e_777, int *ro_778, int lv_779, P1008 *code_780, P1021 *t_781, P1017 *c_782) {
  struct f_index_on_783fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_775 = base_775;
F->bt_776 = bt_776;
F->e_777 = e_777;
F->ro_778 = ro_778;
F->lv_779 = lv_779;
F->code_780 = code_780;
F->code_780v = *F->code_780;
F->t_781 = t_781;
F->t_781v = *F->t_781;
F->c_782 = c_782;
F->c_782v = *F->c_782;
F->a_2353 = NULL;
F->a_2353 = (*(P1015)rt_nil_check(F->e_777)).b;
F->it_2354 = NULL;
F->c_782v = g_no_cons_1117;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_464(F->bt_776);
(*F->ro_778) = 0;
f_index_on_783(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_750(&(*F->base_775), F->bt_776); b_; }), (*(P1021)rt_nil_check(F->bt_776)).target, F->e_777, &(*F->ro_778), F->lv_779, &F->code_780v, &F->t_781v, &F->c_782v);
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_308(F->bt_776))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->bt_776)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1021)rt_nil_check(F->bt_776)).tparams == NULL)) {
f_index_on_783(&(*F->base_775), (*(P1021)rt_nil_check(F->bt_776)).under, F->e_777, &(*F->ro_778), F->lv_779, &F->code_780v, &F->t_781v, &F->c_782v);
} else {
f_index_on_783(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_775), rt_str(".all", 4)); b_; }), (*(P1021)rt_nil_check(F->bt_776)).under, F->e_777, &(*F->ro_778), F->lv_779, &F->code_780v, &F->t_781v, &F->c_782v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).kind) == (((rt_int)6LL))) && (F->a_2353 != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check(F->a_2353)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).ndim) != ((rt_int)1LL)) || ((*(P1015)rt_nil_check(F->a_2353)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2355 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->a_2353)).a, (*(P1021)rt_nil_check(F->bt_776)).idx, &F->it_2354));
F->hi_2356 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->a_2353)).b, (*(P1021)rt_nil_check(F->bt_776)).idx, &F->it_2354));
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_776)), rt_str("(", 1)), (*F->base_775)), rt_str(", ", 2)), F->lo_2355), rt_str(", ", 2)), F->hi_2356), rt_str(")", 1)); b_; }));
f_need_slice_770(F->bt_776);
F->t_781v = F->bt_776;
(*F->ro_778) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).kind) == (((rt_int)6LL)))) {
F->off_2357 = NULL;
F->k_2358 = RT_R_IUNDEF;
F->k_2358 = ((rt_int)0LL);
F->b_2359 = NULL;
F->b_2359 = f_mk_3(&(*F->base_775));
F->pre_2360 = NULL;
F->pre_2360 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2353) != rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).ndim))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_779) && f_has_call_768(&(*F->base_775)))) {
F->pre_2360 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_776)), rt_str(" b_ = ", 6)), (*F->base_775)), rt_str("; ", 2)); b_; }));
F->b_2359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2353 != NULL)) {
F->k_2358 = rt_add(rt_r_ichk(F->k_2358), ((rt_int)1LL));
{
F->i_2361 = rt_str_copy(f_gexpr_789(F->a_2353, f_idx_type_258(F->bt_776, rt_r_ichk(F->k_2358)), &F->it_2354));
F->l_2362 = rt_str_copy(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->b_2359))->all), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2358))));
F->h_2363 = rt_str_copy(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->b_2359))->all), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2358))));
f_check_type_232(F->it_2354, f_idx_type_258(F->bt_776, rt_r_ichk(F->k_2358)), rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line));
if ((F->off_2357 == NULL)) {
F->off_2357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_774(&F->i_2361, &F->l_2362, &F->h_2363)), rt_str(" - ", 3)), F->l_2362), rt_str(")", 1)); b_; }));
} else {
F->off_2357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->off_2357))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2362), rt_str(", ", 2)), F->h_2363), rt_str(") + ", 4)), f_ix_774(&F->i_2361, &F->l_2362, &F->h_2363)), rt_str(" - ", 3)), F->l_2362), rt_str(")", 1)); b_; }));
}
}
F->a_2353 = (*(P1015)rt_nil_check(F->a_2353)).next;
}
if ((((rt_int)(((((P1008)rt_nil_check(F->pre_2360))->all)).len)) > ((rt_int)0LL))) {
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->pre_2360))->all), (((P1008)rt_nil_check(F->b_2359))->all)), rt_str(".p[", 3)), (((P1008)rt_nil_check(F->off_2357))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->b_2359))->all), rt_str(".p[", 3)), (((P1008)rt_nil_check(F->off_2357))->all)), rt_str("]", 1)); b_; }));
}
F->t_781v = (*(P1021)rt_nil_check(F->bt_776)).elem;
F->c_782v = (*(P1021)rt_nil_check(F->bt_776)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2353) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_776)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->a_2353)).kind) == (((rt_int)16LL)))) {
F->lo_2364 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->a_2353)).a, g_ty_int_1099, &F->it_2354));
F->hi_2365 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->a_2353)).b, g_ty_int_1099, &F->it_2354));
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_775)), rt_str(", ", 2)), F->lo_2364), rt_str(", ", 2)), F->hi_2365), rt_str(")", 1)); b_; }));
F->t_781v = F->bt_776;
(*F->ro_778) = 1;
goto ret_;
}
{
F->i_2366 = rt_str_copy(f_gexpr_789(F->a_2353, g_ty_int_1099, &F->it_2354));
F->t_781v = f_str_elem_218(F->bt_776);
F->c_782v = (*(P1021)rt_nil_check(F->bt_776)).elemcons;
if (F->lv_779) {
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_775)), rt_str(", ", 2)), F->i_2366), rt_str("))", 2)); b_; }));
} else {
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_775)), rt_str(", ", 2)), F->i_2366), rt_str(")", 1)); b_; }));
(*F->ro_778) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_777)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_780) = F->code_780v;  (*F->t_781) = F->t_781v;  (*F->c_782) = F->c_782v;
  RT_FPOP();
  return;
}

static int f_own_attribute_785(P1015 e_784) {
  struct f_own_attribute_785fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_784 = e_784;
F->saved_2367 = NULL;
F->saved_2367 = g_code_1069;
F->bt_2368 = NULL;
F->ok_2369 = RT_R_EUNDEF;
F->ok_2369 = 0;
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = f_new_buffer_24();
{ rt_frame xf2370;
if (RT_TRY(xf2370)) {
F->base_2372 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_784)).a, NULL, &F->bt_2368));
while (((F->bt_2368 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2368)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_464(F->bt_2368);
F->bt_2368 = (*(P1021)rt_nil_check(F->bt_2368)).target;
}
while ((((F->bt_2368 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2368)).kind) == (((rt_int)15LL)))) && ((*(P1021)rt_nil_check(F->bt_2368)).tparams == NULL))) {
F->bt_2368 = (*(P1021)rt_nil_check(F->bt_2368)).under;
}
if (((F->bt_2368 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2368)).kind) == (((rt_int)15LL))))) {
F->p_2373 = NULL;
F->p_2373 = (*(P1021)rt_nil_check(F->bt_2368)).tparams;
while ((F->p_2373 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2373)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_784)).name))->all))) {
F->ok_2369 = 1;
}
F->p_2373 = (*(P1015)rt_nil_check(F->p_2373)).next;
}
F->bt_2368 = (*(P1021)rt_nil_check(F->bt_2368)).under;
}
if (((F->bt_2368 != NULL) && ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2368)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2368)).kind) == (((rt_int)17LL)))))) {
F->f_2374 = NULL;
F->f_2374 = (*(P1021)rt_nil_check(F->bt_2368)).fields;
while ((F->f_2374 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2374)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_784)).name))->all))) {
F->ok_2369 = 1;
}
F->f_2374 = (*(P1023)rt_nil_check(F->f_2374)).next;
}
}
RT_POP(xf2370);
} else {
RT_POP(xf2370);
int x2371 = rt_xcur;
if (0 || x2371 == ex_compile_error_1) {
F->ok_2369 = 0;
} else {
rt_raise(x2371);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = F->saved_2367;
F->result_ = rt_r_echk(F->ok_2369);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_789(P1015 e_786, P1021 want_787, P1021 *t_788) {
  struct f_gexpr_789fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_786 = e_786;
F->want_787 = want_787;
F->t_788 = t_788;
F->t_788v = *F->t_788;
F->k_2375 = RT_R_IUNDEF;
F->k_2375 = rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).kind);
F->code_2376 = NULL;
F->c_2377 = NULL;
F->ro_2378 = RT_R_EUNDEF;
F->bt_2379 = NULL;
F->ctx_2380 = NULL;
F->ctx_2380 = g_cons_ctx_1090;
g_cons_ctx_1090 = NULL;
F->t_788v = g_ty_int_1099;
if ((rt_r_ichk(F->k_2375) == (((rt_int)1LL)))) {
if (((F->want_787 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_787)).kind) == (((rt_int)3LL))))) {
F->t_788v = g_ty_float_1101;
F->result_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)2LL)))) {
F->t_788v = g_ty_float_1101;
F->result_ = (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)5LL)))) {
F->t_788v = g_ty_bool_1100;
F->result_ = f_itos_7(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2375) == (((rt_int)3LL))) && (F->want_787 != NULL)) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_787)).kind) == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_787), g_ty_ascii_1102)))) {
F->r_2381 = NULL;
F->r_2381 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_788v = F->want_787;
{ rt_int lo2383 = ((rt_int)1LL), hi2384 = ((rt_int)(((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)).len));
for (rt_int it2385 = lo2383; it2385 <= hi2384; it2385++) {
F->i_2382 = it2385;
F->pos_2386 = RT_R_IUNDEF;
F->pos_2386 = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_787)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_799(rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), F->i_2382))); b_; }));
if ((rt_r_ichk(F->pos_2386) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_799(rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), F->i_2382)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2381 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2381))->all), rt_str("\\", 1)), f_octal_801(rt_r_ichk(F->pos_2386))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1008)rt_nil_check(F->r_2381))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)3LL)))) {
F->t_788v = g_ty_string_1103;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_832(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)6LL)))) {
F->t_788v = g_ty_nil_1106;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)4LL)))) {
if (((F->want_787 != NULL) && ((*(P1021)rt_nil_check(f_base_of_223(F->want_787))).kind == (((rt_int)4LL))))) {
F->t_788v = F->want_787;
} else {
F->t_788v = f_enum_type_of_835(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
}
{
F->i_2387 = RT_R_IUNDEF;
F->i_2387 = f_lit_index_265((*(P1021)rt_nil_check(f_base_of_223(F->t_788v))).lits, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all));
if ((rt_r_ichk(F->i_2387) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2387));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)17LL)))) {
g_cons_ctx_1090 = F->ctx_2380;
F->result_ = f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, F->want_787, &F->t_788v);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)7LL)))) {
F->y_2388 = NULL;
F->y_2388 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all));
if ((F->y_2388 == NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("ME", 2))) {
F->t_788v = g_ty_act_1109;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_788v = g_ty_act_1109;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_937(f_wrap_apply_830(F->e_786), 0, &F->t_788v);
goto ret_;
}
if (((((((((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_937(f_wrap_apply_830(F->e_786), 0, &F->t_788v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2388)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2388)).kind) == (((rt_int)2LL))))) {
F->ro_2389 = RT_R_EUNDEF;
F->t_788v = (*(P1025)rt_nil_check(F->y_2388)).t;
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2388)).kind) == (((rt_int)1LL)))) {
F->ro_2389 = f_check_import_742(F->y_2388, rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
F->result_ = f_init_chk_363((*(P1025)rt_nil_check(F->y_2388)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_736(F->y_2388); b_; }));
goto ret_;
}
F->result_ = f_access_of_736(F->y_2388);
goto ret_;
}
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2388)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_937(f_wrap_apply_830(F->e_786), 0, &F->t_788v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2375) == (((rt_int)8LL))) && (f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all)) != NULL)) && (f_user_op_933(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), f_copy_node_828((*(P1015)rt_nil_check(F->e_786)).a)) != NULL))) {
F->call_2390 = NULL;
F->call_2390 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
F->fname_2391 = NULL;
F->fname_2391 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
(*(P1015)rt_nil_check(F->fname_2391)).name = (*(P1015)rt_nil_check(F->e_786)).name;
(*(P1015)rt_nil_check(F->call_2390)).a = F->fname_2391;
(*(P1015)rt_nil_check(F->call_2390)).b = f_copy_node_828((*(P1015)rt_nil_check(F->e_786)).a);
F->result_ = f_gcall_937(F->call_2390, 0, &F->t_788v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2375) == (((rt_int)8LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("NOT", 3))) && (F->want_787 != NULL)) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_787)).kind) == (((rt_int)16LL))))) {
F->a_2392 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, F->want_787, &F->t_788v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2392), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)8LL)))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("NOT", 3))) {
F->a_2393 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, g_ty_bool_1100, &F->t_788v));
f_check_type_232(F->t_788v, g_ty_bool_1100, rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2393), rt_str(")", 1));
goto ret_;
}
{
F->a_2394 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, F->want_787, &F->t_788v));
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2394;
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_788v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2394), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_788v, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2394), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_857(F->e_786, F->want_787, &F->t_788v);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2395 = NULL;
F->nm_2395 = (*(P1015)rt_nil_check(F->e_786)).a;
F->y_2396 = NULL;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->nm_2395)).kind) == (((rt_int)12LL)))) {
F->nm_2395 = (*(P1015)rt_nil_check(F->nm_2395)).a;
}
F->y_2396 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->nm_2395)).name))->all));
if (((((F->y_2396 == NULL) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2396)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2396)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2396)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_937(F->e_786, 0, &F->t_788v);
goto ret_;
}
}
if ((f_user_subscript_812(F->e_786) != NULL)) {
F->result_ = f_gcall_937(f_user_subscript_812(F->e_786), 0, &F->t_788v);
goto ret_;
}
{
F->base_2397 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, NULL, &F->bt_2379));
F->ro_2378 = 1;
f_index_on_783(&F->base_2397, F->bt_2379, F->e_786, &F->ro_2378, 0, &F->code_2376, &F->t_788v, &F->c_2377);
if ((((!f_is_lvalue_752(F->e_786)) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_788v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->t_788v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P1008)rt_nil_check(F->code_2376))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_788v, &(((P1008)rt_nil_check(F->code_2376))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2375) == (((rt_int)11LL))) && (f_user_dot_810(F->e_786) != NULL))) {
F->result_ = f_gcall_937(f_user_dot_810(F->e_786), 0, &F->t_788v);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_785(F->e_786)))) {
F->result_ = f_attribute_840(F->e_786, &F->t_788v);
goto ret_;
} else if (((f_as_subtype_297((*(P1015)rt_nil_check(F->e_786)).a) != NULL) || f_ptr_attribute_837(F->e_786))) {
F->result_ = f_attribute_840(F->e_786, &F->t_788v);
goto ret_;
}
{
F->base_2398 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_786)).a, NULL, &F->bt_2379));
F->ro_2378 = 1;
f_select_on_766(&F->base_2398, F->bt_2379, F->e_786, &F->ro_2378, &F->code_2376, &F->t_788v, &F->c_2377);
if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_786)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_752(F->e_786)))) {
F->result_ = (((P1008)rt_nil_check(F->code_2376))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_788v, &(((P1008)rt_nil_check(F->code_2376))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)12LL)))) {
F->result_ = f_gcall_937(f_wrap_apply_830(F->e_786), 0, &F->t_788v);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)14LL)))) {
F->result_ = f_constructor_862(F->e_786, F->want_787, F->ctx_2380, &F->t_788v);
goto ret_;
} else if ((rt_r_ichk(F->k_2375) == (((rt_int)13LL)))) {
F->result_ = f_resolved_792(F->e_786, &F->t_788v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_786)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_788) = F->t_788v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_792(P1015 e_790, P1021 *t_791) {
  struct f_resolved_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_790 = e_790;
F->t_791 = t_791;
F->t_791v = *F->t_791;
F->c_2399 = NULL;
F->vt_2400 = NULL;
F->y_2401 = NULL;
F->y_2401 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2402 = NULL;
F->tt_2402 = f_copy_node_828((*(P1015)rt_nil_check(F->e_790)).b);
(*(P1015)rt_nil_check(F->tt_2402)).next = NULL;
if (((F->y_2401 != NULL) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2401)).kind) == (((rt_int)10LL))) || (f_resolve_overload_911(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2402, f_copy_node_828((*(P1015)rt_nil_check(F->e_790)).a), 0, rt_r_ichk((*(P1015)rt_nil_check(F->e_790)).line)) != NULL)))) {
F->call_2403 = NULL;
F->call_2403 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_790)).line));
F->f_2404 = NULL;
F->f_2404 = f_nn_65((((rt_int)12LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_790)).line));
F->fname_2405 = NULL;
F->fname_2405 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_790)).line));
(*(P1015)rt_nil_check(F->fname_2405)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1015)rt_nil_check(F->f_2404)).a = F->fname_2405;
(*(P1015)rt_nil_check(F->f_2404)).b = F->tt_2402;
(*(P1015)rt_nil_check(F->call_2403)).a = F->f_2404;
(*(P1015)rt_nil_check(F->call_2403)).b = f_copy_node_828((*(P1015)rt_nil_check(F->e_790)).a);
(*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->call_2403)).b)).next = NULL;
F->result_ = f_gcall_937(F->call_2403, 0, &F->t_791v);
goto ret_;
}
F->t_791v = f_resolve_subtype_268((*(P1015)rt_nil_check(F->e_790)).b, &F->c_2399);
{
F->v_2406 = rt_str_copy(f_gexpr_in_797((*(P1015)rt_nil_check(F->e_790)).a, F->t_791v, F->c_2399, &F->vt_2400));
f_check_type_232(F->vt_2400, F->t_791v, rt_r_ichk((*(P1015)rt_nil_check(F->e_790)).line));
F->result_ = f_checked_213(F->t_791v, F->c_2399, &F->v_2406);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_791) = F->t_791v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_797(P1015 e_793, P1021 want_794, P1017 c_795, P1021 *t_796) {
  struct f_gexpr_in_797fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_793 = e_793;
F->want_794 = want_794;
F->c_795 = c_795;
F->t_796 = t_796;
F->t_796v = *F->t_796;
g_cons_ctx_1090 = F->c_795;
F->result_ = f_gexpr_789(F->e_793, F->want_794, &F->t_796v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_796) = F->t_796v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_799(int ch_798) {
  struct f_ascii_lit_799fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_798 = ch_798;
F->l_2407 = NULL;
F->l_2407 = (*(P1021)rt_nil_check(g_ty_ascii_1102)).lits;
{ rt_int lo2409 = ((rt_int)1LL), hi2410 = rt_sub(((rt_int)(F->ch_798) + 1), ((rt_int)1LL));
for (rt_int it2411 = lo2409; it2411 <= hi2410; it2411++) {
F->i_2408 = it2411;
F->l_2407 = (*(P1015)rt_nil_check(F->l_2407)).next;
}
}
F->result_ = (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->l_2407)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_801(rt_int n_800) {
  struct f_octal_801fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_800 = n_800;
F->r_2412 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2412, rt_str("000", 3));
(*rt_str_at(&F->r_2412, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_800, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2412, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_800, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2412, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_800, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2412;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_str_cat_part_803(P1021 t_802) {
  struct f_str_cat_part_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_802 = t_802;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_802)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_802);
goto ret_;
}
F->result_ = F->t_802;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_peek_type_805(P1015 e_804) {
  struct f_peek_type_805fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_804 = e_804;
F->saved_2413 = NULL;
F->saved_2413 = g_code_1069;
F->t_2414 = NULL;
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = f_new_buffer_24();
{ rt_frame xf2415;
if (RT_TRY(xf2415)) {
F->v_2417 = rt_str_copy(f_gexpr_789(F->e_804, NULL, &F->t_2414));
RT_POP(xf2415);
} else {
RT_POP(xf2415);
int x2416 = rt_xcur;
if (0 || x2416 == ex_compile_error_1) {
F->t_2414 = NULL;
} else {
rt_raise(x2416);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = F->saved_2413;
F->result_ = F->t_2414;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_set_operands_808(P1015 e_806, P1021 want_807) {
  struct f_set_operands_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_806 = e_806;
F->want_807 = want_807;
F->t_2418 = NULL;
if (((F->want_807 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_807)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_807;
goto ret_;
} else if ((F->want_807 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_806)).a)).kind) != (((rt_int)14LL)))) {
F->t_2418 = f_peek_type_805((*(P1015)rt_nil_check(F->e_806)).a);
} else if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_806)).b)).kind) != (((rt_int)14LL)))) {
F->t_2418 = f_peek_type_805((*(P1015)rt_nil_check(F->e_806)).b);
}
if (((F->t_2418 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_2418)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2418;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_user_dot_810(P1015 e_809) {
  struct f_user_dot_810fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_809 = e_809;
F->arg_2419 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_809)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2419 = f_copy_node_828((*(P1015)rt_nil_check(F->e_809)).a);
if ((f_user_op_933(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_809)).name))->all)); b_; }), F->arg_2419) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_809)).name))->all)); b_; }), F->arg_2419, rt_r_ichk((*(P1015)rt_nil_check(F->e_809)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_user_subscript_812(P1015 e_811) {
  struct f_user_subscript_812fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_811 = e_811;
F->name_2420 = NULL;
F->name_2420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2421 = NULL;
F->tail_2422 = NULL;
F->a_2423 = NULL;
F->a_2423 = (*(P1015)rt_nil_check(F->e_811)).b;
if (((((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_811)).a)).kind) == (((rt_int)7LL))) && (f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_811)).a)).name))->all)) != NULL)) && ((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_811)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1025)rt_nil_check(f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_811)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2421, &F->tail_2422, f_copy_node_828((*(P1015)rt_nil_check(F->e_811)).a));
while ((F->a_2423 != NULL)) {
if ((((rt_int)(((((P1008)rt_nil_check(F->name_2420))->all)).len)) > ((rt_int)1LL))) {
F->name_2420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->name_2420))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->a_2423)).kind) == (((rt_int)16LL)))) {
F->name_2420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->name_2420))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2421, &F->tail_2422, f_copy_node_828((*(P1015)rt_nil_check(F->a_2423)).a));
f_append_69(&F->args_2421, &F->tail_2422, f_copy_node_828((*(P1015)rt_nil_check(F->a_2423)).b));
} else {
F->name_2420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->name_2420))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2421, &F->tail_2422, f_copy_node_828(F->a_2423));
}
F->a_2423 = (*(P1015)rt_nil_check(F->a_2423)).next;
}
F->name_2420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->name_2420))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1008)rt_nil_check(F->name_2420))->all)) == NULL) || (f_user_op_933(&(((P1008)rt_nil_check(F->name_2420))->all), F->args_2421) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_816(&(((P1008)rt_nil_check(F->name_2420))->all), F->args_2421, rt_r_ichk((*(P1015)rt_nil_check(F->e_811)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_op_call_816(rstr *name_813, P1015 args_814, rt_int line_815) {
  struct f_op_call_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_813 = name_813;
F->args_814 = args_814;
F->line_815 = line_815;
F->call_2424 = NULL;
F->call_2424 = f_nn_65((((rt_int)10LL)), F->line_815);
F->f_2425 = NULL;
F->f_2425 = f_nn_65((((rt_int)7LL)), F->line_815);
(*(P1015)rt_nil_check(F->f_2425)).name = f_mk_3(&(*F->name_813));
(*(P1015)rt_nil_check(F->call_2424)).a = F->f_2425;
(*(P1015)rt_nil_check(F->call_2424)).b = F->args_814;
F->result_ = F->call_2424;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_derived_relation_818(P1015 e_817) {
  struct f_derived_relation_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_817 = e_817;
F->l_2426 = NULL;
F->r_2427 = NULL;
F->has_eq_2428 = RT_R_EUNDEF;
F->has_eq_2428 = 0;
F->has_lt_2429 = RT_R_EUNDEF;
F->has_lt_2429 = 0;
F->l_2426 = f_copy_node_828((*(P1015)rt_nil_check(F->e_817)).a);
F->r_2427 = f_copy_node_828((*(P1015)rt_nil_check(F->e_817)).b);
(*(P1015)rt_nil_check(F->l_2426)).next = F->r_2427;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2428 = (f_user_op_933(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2426) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2426 = f_copy_node_828((*(P1015)rt_nil_check(F->e_817)).a);
F->r_2427 = f_copy_node_828((*(P1015)rt_nil_check(F->e_817)).b);
(*(P1015)rt_nil_check(F->l_2426)).next = F->r_2427;
F->has_lt_2429 = (f_user_op_933(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2426) != NULL);
}
if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_817)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2428))) {
F->result_ = f_rel_not_826(f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).a, (*(P1015)rt_nil_check(F->e_817)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line)), rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line));
goto ret_;
} else if ((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_817)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2429))) {
F->result_ = f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).b, (*(P1015)rt_nil_check(F->e_817)).a, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line));
goto ret_;
} else if (((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_817)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2429)) && rt_r_echk(F->has_eq_2428))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).a, (*(P1015)rt_nil_check(F->e_817)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line)), f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).a, (*(P1015)rt_nil_check(F->e_817)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line)), rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line));
goto ret_;
} else if (((rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_817)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2429)) && rt_r_echk(F->has_eq_2428))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).b, (*(P1015)rt_nil_check(F->e_817)).a, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line)), f_rel_node_823(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1015)rt_nil_check(F->e_817)).a, (*(P1015)rt_nil_check(F->e_817)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line)), rt_r_ichk((*(P1015)rt_nil_check(F->e_817)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rel_node_823(rstr *op_819, P1015 a_820, P1015 b_821, rt_int line_822) {
  struct f_rel_node_823fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_819 = op_819;
F->a_820 = a_820;
F->b_821 = b_821;
F->line_822 = line_822;
F->result_ = f_binop_106(f_mk_3(&(*F->op_819)), f_copy_node_828(F->a_820), f_copy_node_828(F->b_821), F->line_822);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_rel_not_826(P1015 x_824, rt_int line_825) {
  struct f_rel_not_826fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_824 = x_824;
F->line_825 = line_825;
F->n_2430 = NULL;
F->n_2430 = f_nn_65((((rt_int)8LL)), F->line_825);
(*(P1015)rt_nil_check(F->n_2430)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1015)rt_nil_check(F->n_2430)).a = F->x_824;
F->result_ = F->n_2430;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_copy_node_828(P1015 e_827) {
  struct f_copy_node_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_827 = e_827;
F->x_2431 = NULL;
{ R1016 *cell2432 = rt_alloc(sizeof(R1016));
(*cell2432).name = NULL;
(*cell2432).tag = NULL;
(*cell2432).prags = NULL;
(*cell2432).labels = NULL;
(*cell2432).a = NULL;
(*cell2432).b = NULL;
(*cell2432).c = NULL;
(*cell2432).d = NULL;
(*cell2432).e = NULL;
(*cell2432).next = NULL;
F->x_2431 = cell2432;
}
(*(P1015)rt_nil_check(F->x_2431)).kind = rt_r_ichk((*(P1015)rt_nil_check(F->e_827)).kind);
(*(P1015)rt_nil_check(F->x_2431)).line = rt_r_ichk((*(P1015)rt_nil_check(F->e_827)).line);
(*(P1015)rt_nil_check(F->x_2431)).ival = rt_r_ichk((*(P1015)rt_nil_check(F->e_827)).ival);
(*(P1015)rt_nil_check(F->x_2431)).flag = rt_r_ichk((*(P1015)rt_nil_check(F->e_827)).flag);
(*(P1015)rt_nil_check(F->x_2431)).name = (*(P1015)rt_nil_check(F->e_827)).name;
(*(P1015)rt_nil_check(F->x_2431)).tag = (*(P1015)rt_nil_check(F->e_827)).tag;
(*(P1015)rt_nil_check(F->x_2431)).a = (*(P1015)rt_nil_check(F->e_827)).a;
(*(P1015)rt_nil_check(F->x_2431)).b = (*(P1015)rt_nil_check(F->e_827)).b;
(*(P1015)rt_nil_check(F->x_2431)).c = (*(P1015)rt_nil_check(F->e_827)).c;
(*(P1015)rt_nil_check(F->x_2431)).d = (*(P1015)rt_nil_check(F->e_827)).d;
F->result_ = F->x_2431;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_wrap_apply_830(P1015 e_829) {
  struct f_wrap_apply_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_829 = e_829;
F->x_2433 = NULL;
F->x_2433 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_829)).line));
(*(P1015)rt_nil_check(F->x_2433)).a = F->e_829;
F->result_ = F->x_2433;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_832(rstr *s_831) {
  struct f_c_string_832fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_831 = s_831;
F->n_2434 = RT_R_IUNDEF;
F->n_2434 = ((rt_int)0LL);
{ rt_int lo2436 = ((rt_int)1LL), hi2437 = ((rt_int)(((*F->s_831)).len));
for (rt_int it2438 = lo2436; it2438 <= hi2437; it2438++) {
F->i_2435 = it2438;
if (((rt_r_echk(rt_str_get((*F->s_831), F->i_2435)) == 92) || (rt_r_echk(rt_str_get((*F->s_831), F->i_2435)) == 63))) {
F->n_2434 = rt_add(rt_r_ichk(F->n_2434), ((rt_int)1LL));
}
}
}
{
F->r_2439 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_831)).len)), rt_r_ichk(F->n_2434)), ((rt_int)2LL)));
F->j_2440 = RT_R_IUNDEF;
F->j_2440 = ((rt_int)1LL);
(*rt_str_at(&F->r_2439, ((rt_int)1LL))) = 34;
{ rt_int lo2442 = ((rt_int)1LL), hi2443 = ((rt_int)(((*F->s_831)).len));
for (rt_int it2444 = lo2442; it2444 <= hi2443; it2444++) {
F->i_2441 = it2444;
F->j_2440 = rt_add(rt_r_ichk(F->j_2440), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_831), F->i_2441)) == 92) || (rt_r_echk(rt_str_get((*F->s_831), F->i_2441)) == 63))) {
(*rt_str_at(&F->r_2439, rt_r_ichk(F->j_2440))) = 92;
F->j_2440 = rt_add(rt_r_ichk(F->j_2440), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2439, rt_r_ichk(F->j_2440))) = rt_r_echk(rt_str_get((*F->s_831), F->i_2441));
}
}
(*rt_str_at(&F->r_2439, rt_add(rt_r_ichk(F->j_2440), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2439;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1021 f_enum_type_of_835(rstr *lit_833, rt_int line_834) {
  struct f_enum_type_of_835fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_833 = lit_833;
F->line_834 = line_834;
F->y_2445 = NULL;
F->y_2445 = g_scope_stack_1059;
F->c_2446 = NULL;
if ((f_lit_index_265((*(P1021)rt_nil_check(g_ty_ascii_1102)).lits, &(*F->lit_833)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1102;
goto ret_;
}
while ((F->y_2445 != NULL)) {
if (((((rt_r_ichk((*(P1025)rt_nil_check(F->y_2445)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2445)).kind) == (((rt_int)5LL)))) && ((*(P1025)rt_nil_check(F->y_2445)).st != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_2445)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_2445)).st)).a, &(*F->lit_833)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2445)).kind) == (((rt_int)5LL)))) {
F->st_2447 = NULL;
F->st_2447 = f_nn_65((((rt_int)80LL)), F->line_834);
(*(P1015)rt_nil_check(F->st_2447)).name = (*(P1025)rt_nil_check(F->y_2445)).name;
F->result_ = f_resolve_subtype_268(F->st_2447, &F->c_2446);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1025)rt_nil_check(F->y_2445)).st, &F->c_2446);
goto ret_;
}
}
F->y_2445 = (*(P1025)rt_nil_check(F->y_2445)).stack;
}
f_fail_23(F->line_834, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_833)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_837(P1015 e_836) {
  struct f_ptr_attribute_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_836 = e_836;
F->lv_2448 = NULL;
F->t_2449 = NULL;
F->c_2450 = NULL;
F->ro_2451 = RT_R_EUNDEF;
F->p_2452 = NULL;
F->saved_2453 = NULL;
F->saved_2453 = g_code_1069;
if ((!f_is_lvalue_752((*(P1015)rt_nil_check(F->e_836)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1069 = f_new_buffer_24();
f_lvalue_758((*(P1015)rt_nil_check(F->e_836)).a, &F->lv_2448, &F->t_2449, &F->c_2450, &F->ro_2451);
g_code_1069 = F->saved_2453;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->t_2449)).kind) != (((rt_int)8LL))) || ((*(P1021)rt_nil_check(F->t_2449)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2452 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->t_2449)).decl)).d;
while ((F->p_2452 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2452)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_836)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2452 = (*(P1015)rt_nil_check(F->p_2452)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_840(P1015 e_838, P1021 *t_839) {
  struct f_attribute_840fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_838 = e_838;
F->t_839 = t_839;
F->t_839v = *F->t_839;
F->bt_2454 = NULL;
F->c_2455 = NULL;
F->base_2456 = NULL;
F->sub_2457 = NULL;
F->sub_2457 = f_as_subtype_297((*(P1015)rt_nil_check(F->e_838)).a);
F->name_2458 = rt_str_copy((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_838)).name))->all));
if ((F->sub_2457 != NULL)) {
F->bt_2454 = f_resolve_subtype_268(F->sub_2457, &F->c_2455);
} else {
F->bt_2454 = f_value_subtype_290((*(P1015)rt_nil_check(F->e_838)).a, &F->c_2455, &F->base_2456);
}
if (((((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)8LL))) && (F->c_2455 != NULL)) && ((*(P1017)rt_nil_check(F->c_2455)).args != NULL)) && ((*(P1021)rt_nil_check(F->bt_2454)).decl != NULL))) {
F->p_2459 = NULL;
F->p_2459 = (*(P1015)rt_nil_check((*(P1021)rt_nil_check(F->bt_2454)).decl)).d;
F->a_2460 = NULL;
F->a_2460 = (*(P1017)rt_nil_check(F->c_2455)).args;
while (((F->p_2459 != NULL) && (F->a_2460 != NULL))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2459)).name))->all), F->name_2458)) {
F->pc_2461 = NULL;
F->v_2462 = rt_str_copy(f_gexpr_789(F->a_2460, f_resolve_subtype_268((*(P1015)rt_nil_check(F->p_2459)).a, &F->pc_2461), &F->t_839v));
F->result_ = F->v_2462;
goto ret_;
}
F->p_2459 = (*(P1015)rt_nil_check(F->p_2459)).next;
F->a_2460 = (*(P1015)rt_nil_check(F->a_2460)).next;
}
}
while (((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)8LL))) && (F->base_2456 != NULL))) {
f_finish_ptr_464(F->bt_2454);
F->base_2456 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_750(&(((P1008)rt_nil_check(F->base_2456))->all), F->bt_2454); b_; }));
F->bt_2454 = (*(P1021)rt_nil_check(F->bt_2454)).target;
F->c_2455 = NULL;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)5LL)))) {
F->c_2455 = f_new_cons_184();
(*(P1017)rt_nil_check(F->c_2455)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->base_2456))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->bt_2454)).tparams != NULL)) && (F->c_2455 != NULL)) && ((*(P1017)rt_nil_check(F->c_2455)).args != NULL))) {
F->p_2463 = NULL;
F->p_2463 = (*(P1021)rt_nil_check(F->bt_2454)).tparams;
F->a_2464 = NULL;
F->a_2464 = (*(P1017)rt_nil_check(F->c_2455)).args;
while (((F->p_2463 != NULL) && (F->a_2464 != NULL))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2463)).name))->all), F->name_2458)) {
F->pt_2465 = f_tparam_type_352(F->bt_2454, &F->name_2458);
F->v_2466 = rt_str_copy(f_gexpr_789(F->a_2464, F->pt_2465, &F->t_839v));
F->result_ = F->v_2466;
goto ret_;
}
F->p_2463 = (*(P1015)rt_nil_check(F->p_2463)).next;
F->a_2464 = (*(P1015)rt_nil_check(F->a_2464)).next;
}
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->bt_2454)).tparams == NULL))) {
F->c_2455 = f_base_cons_226(F->bt_2454, F->c_2455);
F->bt_2454 = f_base_of_223(F->bt_2454);
}
F->t_839v = g_ty_int_1099;
if ((rt_str_eq(F->name_2458, rt_str("LEN", 3)) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)5LL))))) {
if (((F->c_2455 != NULL) && ((*(P1017)rt_nil_check(F->c_2455)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_2455)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_838)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2458, rt_str("LEN", 3)) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)12LL))))) {
if (((F->c_2455 != NULL) && ((*(P1017)rt_nil_check(F->c_2455)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_2455)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_838)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2458, rt_str("MIN", 3)) || rt_str_eq(F->name_2458, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2454))) {
F->t_839v = F->bt_2454;
if (rt_str_eq(F->name_2458, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2454, F->c_2455);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2454, F->c_2455);
goto ret_;
} else if ((rt_str_eq(F->name_2458, rt_str("PREC", 4)) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)3LL))))) {
if (((F->c_2455 != NULL) && ((*(P1017)rt_nil_check(F->c_2455)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_2455)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2458, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2458, rt_str("USE", 3))) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2454)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_853(F->e_838, F->bt_2454, F->c_2455, F->base_2456, &F->t_839v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_838)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2458, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_839) = F->t_839v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_845(P1015 sa_841, P1015 sb_842, rstr *op_843, rt_int line_844) {
  struct f_subtype_compare_845fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_841 = sa_841;
F->sb_842 = sb_842;
F->op_843 = op_843;
F->line_844 = line_844;
F->ca_2467 = NULL;
F->cb_2468 = NULL;
F->ta_2469 = NULL;
F->ta_2469 = f_resolve_subtype_268(F->sa_841, &F->ca_2467);
F->tb_2470 = NULL;
F->tb_2470 = f_resolve_subtype_268(F->sb_842, &F->cb_2468);
F->r_2471 = NULL;
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2472 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2472, rt_str("1", 1));
F->no_2473 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2473, rt_str("0", 1));
if (rt_str_eq((*F->op_843), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2472, rt_str("0", 1));
rt_str_assign(&F->no_2473, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2469, F->tb_2470))) {
F->result_ = F->no_2473;
goto ret_;
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->sa_841)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->sa_841)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P1015)rt_nil_check(F->sb_842)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->sb_842)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2472;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2469)) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2469, F->ca_2467)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2470, F->cb_2468)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2469, F->ca_2467)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2470, F->cb_2468)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).kind) == (((rt_int)3LL)))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2471))->all), rt_str(" && ", 4)), f_float_prec_847(F->ca_2467)), rt_str(" == ", 4)), f_float_prec_847(F->cb_2468)); b_; }));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2467 != NULL) && (F->cb_2468 != NULL)) && ((*(P1017)rt_nil_check(F->ca_2467)).slen != NULL)) && ((*(P1017)rt_nil_check(F->cb_2468)).slen != NULL))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->ca_2467)).slen))->all)), rt_str(") == (", 6)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->cb_2468)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2467 == NULL) || ((*(P1017)rt_nil_check(F->ca_2467)).slen == NULL)) && ((F->cb_2468 == NULL) || ((*(P1017)rt_nil_check(F->cb_2468)).slen == NULL))))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2475 = ((rt_int)1LL), hi2476 = rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).ndim);
for (rt_int it2477 = lo2475; it2477 <= hi2476; it2477++) {
F->k_2474 = it2477;
if (((((F->ca_2467 != NULL) && (F->cb_2468 != NULL)) && (f_cons_lo_252(F->ca_2467, F->k_2474) != NULL)) && (f_cons_lo_252(F->cb_2468, F->k_2474) != NULL))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2471))->all), rt_str(" && (", 5)), (((P1008)rt_nil_check(f_cons_lo_252(F->ca_2467, F->k_2474)))->all)), rt_str(") == (", 6)), (((P1008)rt_nil_check(f_cons_lo_252(F->cb_2468, F->k_2474)))->all)), rt_str(") && (", 6)), (((P1008)rt_nil_check(f_cons_hi_255(F->ca_2467, F->k_2474)))->all)), rt_str(") == (", 6)), (((P1008)rt_nil_check(f_cons_hi_255(F->cb_2468, F->k_2474)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).kind) == (((rt_int)15LL))) && ((*(P1021)rt_nil_check(F->ta_2469)).tparams != NULL)) && (F->ca_2467 != NULL)) && (F->cb_2468 != NULL))) {
F->a_2478 = NULL;
F->a_2478 = (*(P1017)rt_nil_check(F->ca_2467)).args;
F->b_2479 = NULL;
F->b_2479 = (*(P1017)rt_nil_check(F->cb_2468)).args;
F->at_2480 = NULL;
F->bt2_2481 = NULL;
while (((F->a_2478 != NULL) && (F->b_2479 != NULL))) {
F->x_2482 = rt_str_copy(f_gexpr_789(F->a_2478, NULL, &F->at_2480));
F->y_2483 = rt_str_copy(f_gexpr_789(F->b_2479, F->at_2480, &F->bt2_2481));
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2471))->all), rt_str(" && ", 4)), f_eq_code_413(F->at_2480, &F->x_2482, &F->y_2483)); b_; }));
F->a_2478 = (*(P1015)rt_nil_check(F->a_2478)).next;
F->b_2479 = (*(P1015)rt_nil_check(F->b_2479)).next;
}
} else if ((((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2469)).kind) == (((rt_int)17LL))) && (F->ca_2467 != NULL)) && (F->cb_2468 != NULL))) {
if ((((*(P1017)rt_nil_check(F->ca_2467)).lo != NULL) && ((*(P1017)rt_nil_check(F->cb_2468)).lo != NULL))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->ca_2467)).lo))->all)), rt_str(") == (", 6)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->cb_2468)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1017)rt_nil_check(F->ca_2467)).lo != NULL) || ((*(P1017)rt_nil_check(F->cb_2468)).lo != NULL))) {
F->r_2471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_843), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1008)rt_nil_check(F->r_2471))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->r_2471))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_847(P1017 c_846) {
  struct f_float_prec_847fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_846 = c_846;
if (((F->c_846 != NULL) && ((*(P1017)rt_nil_check(F->c_846)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_846)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_853(P1015 e_848, P1021 bt_849, P1017 c_850, P1008 base_851, P1021 *t_852) {
  struct f_file_attribute_853fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_848 = e_848;
F->bt_849 = bt_849;
F->c_850 = c_850;
F->base_851 = base_851;
F->t_852 = t_852;
F->t_852v = *F->t_852;
F->t_852v = g_file_mode_type_1110;
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_848)).name))->all), rt_str("ACCESS", 6))) {
F->t_852v = g_file_access_type_1116;
}
if ((F->base_851 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_848)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1008)rt_nil_check(F->base_851))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1008)rt_nil_check(F->base_851))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_850 != NULL) && ((*(P1017)rt_nil_check(F->c_850)).args != NULL))) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_848)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_789((*(P1017)rt_nil_check(F->c_850)).args, F->t_852v, &F->t_852v);
goto ret_;
} else if (((*(P1015)rt_nil_check((*(P1017)rt_nil_check(F->c_850)).args)).next != NULL)) {
F->result_ = f_gexpr_789((*(P1015)rt_nil_check((*(P1017)rt_nil_check(F->c_850)).args)).next, F->t_852v, &F->t_852v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_848)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_848)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_852) = F->t_852v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_857(P1015 e_854, P1021 want_855, P1021 *t_856) {
  struct f_gbinop_857fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_854 = e_854;
F->want_855 = want_855;
F->t_856 = t_856;
F->t_856v = *F->t_856;
F->op_2484 = NULL;
F->op_2484 = (*(P1015)rt_nil_check(F->e_854)).name;
F->ta_2485 = NULL;
F->tb_2486 = NULL;
F->hint_2487 = NULL;
F->uy_2488 = NULL;
F->t_856v = g_ty_bool_1100;
if (((((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2)) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str(">", 1))) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("<=", 2))) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str(">=", 2))) && (f_derived_relation_818(F->e_854) != NULL))) {
F->result_ = f_gexpr_789(f_derived_relation_818(F->e_854), g_ty_bool_1100, &F->t_856v);
goto ret_;
}
if ((f_lookup_163(&(((P1008)rt_nil_check(F->op_2484))->all)) != NULL)) {
F->l_2489 = NULL;
F->r_2490 = NULL;
F->l_2489 = f_copy_node_828((*(P1015)rt_nil_check(F->e_854)).a);
F->r_2490 = f_copy_node_828((*(P1015)rt_nil_check(F->e_854)).b);
(*(P1015)rt_nil_check(F->l_2489)).next = F->r_2490;
F->uy_2488 = f_user_op_933(&(((P1008)rt_nil_check(F->op_2484))->all), F->l_2489);
if ((F->uy_2488 != NULL)) {
F->call_2491 = NULL;
F->call_2491 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->fname_2492 = NULL;
F->fname_2492 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
(*(P1015)rt_nil_check(F->fname_2492)).name = F->op_2484;
(*(P1015)rt_nil_check(F->call_2491)).a = F->fname_2492;
(*(P1015)rt_nil_check(F->call_2491)).b = F->l_2489;
F->result_ = f_gcall_937(F->call_2491, 0, &F->t_856v);
goto ret_;
}
}
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("IN", 2))) {
F->s_2493 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, NULL, &F->tb_2486));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2494 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, (*(P1021)rt_nil_check(F->tb_2486)).elem, &F->ta_2485));
f_check_type_232(F->ta_2485, (*(P1021)rt_nil_check(F->tb_2486)).elem, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->t_856v = g_ty_bool_1100;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2494), rt_str(", ", 2)), F->s_2493), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("AND", 3)) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("OR", 2))) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("XOR", 3))) && (f_set_operands_808(F->e_854, F->want_855) != NULL))) {
F->a_2495 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, f_set_operands_808(F->e_854, F->want_855), &F->ta_2485));
F->b_2496 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, F->ta_2485, &F->tb_2486));
f_check_type_232(F->tb_2486, F->ta_2485, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->t_856v = F->ta_2485;
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2495), rt_str(", ", 2)), F->b_2496), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2495), rt_str(", ", 2)), F->b_2496), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2495), rt_str(", ", 2)), F->b_2496), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("AND", 3)) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("OR", 2))) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("XOR", 3)))) {
F->a_2497 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, g_ty_bool_1100, &F->ta_2485));
F->b_2498 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, g_ty_bool_1100, &F->tb_2486));
f_check_type_232(F->ta_2485, g_ty_bool_1100, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
f_check_type_232(F->tb_2486, g_ty_bool_1100, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2497), rt_str(" && ", 4)), F->b_2498), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2497), rt_str(" || ", 4)), F->b_2498), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2497), rt_str(" != ", 4)), F->b_2498), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("&", 1)) && (F->want_855 != NULL)) && ((*(P1021)rt_nil_check(f_base_of_223(F->want_855))).kind == (((rt_int)6LL))))) {
F->at_2499 = NULL;
F->at_2499 = f_base_of_223(F->want_855);
F->a_2500 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, F->at_2499, &F->ta_2485));
F->b_2501 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, F->at_2499, &F->tb_2486));
f_check_type_232(F->ta_2485, F->at_2499, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
f_check_type_232(F->tb_2486, F->at_2499, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->at_2499)).ndim) != ((rt_int)1LL)) || ((*(P1021)rt_nil_check(f_base_of_223((*(P1021)rt_nil_check(F->at_2499)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_770(F->at_2499);
F->t_856v = F->at_2499;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2499)), rt_str("(", 1)), F->a_2500), rt_str(", ", 2)), F->b_2501), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("&", 1))) {
F->wa_2502 = NULL;
F->wb_2503 = NULL;
F->ws_2504 = NULL;
F->ce_2505 = NULL;
F->ce_2505 = g_ty_ascii_1102;
if (((F->want_855 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_855)).kind) == (((rt_int)5LL))))) {
F->ws_2504 = F->want_855;
F->ce_2505 = f_str_elem_218(F->want_855);
}
if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2502 = F->ce_2505;
} else {
F->wa_2502 = F->ws_2504;
}
if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2503 = F->ce_2505;
} else {
F->wb_2503 = F->ws_2504;
}
{
F->a_2506 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, F->wa_2502, &F->ta_2485));
F->b_2507 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, F->wb_2503, &F->tb_2486));
F->t_856v = g_ty_string_1103;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)5LL)))) {
F->t_856v = F->ta_2485;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)5LL)))) {
F->t_856v = F->tb_2486;
} else if ((!f_same_221(F->ta_2485, g_ty_ascii_1102))) {
F->t_856v = f_new_typ_183((((rt_int)5LL)));
(*(P1021)rt_nil_check(F->t_856v)).elem = F->ta_2485;
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)6LL))))) {
f_need_slice_770(F->ta_2485);
f_check_type_232(F->tb_2486, F->ta_2485, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->t_856v = F->ta_2485;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2485)), rt_str("(", 1)), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_803(F->tb_2486), f_str_elem_218(F->ta_2485), rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2485, f_str_elem_218(F->tb_2486), rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
} else {
f_check_type_232(F->tb_2486, F->ta_2485, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
}
if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1)) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1015)rt_nil_check(F->e_854)).a) != NULL)) && (f_as_subtype_297((*(P1015)rt_nil_check(F->e_854)).b) != NULL))) {
F->t_856v = g_ty_bool_1100;
F->result_ = f_subtype_compare_845(f_as_subtype_297((*(P1015)rt_nil_check(F->e_854)).a), f_as_subtype_297((*(P1015)rt_nil_check(F->e_854)).b), &(((P1008)rt_nil_check(F->op_2484))->all), rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
goto ret_;
}
if ((f_is_rel_111(&(((P1008)rt_nil_check(F->op_2484))->all)) && (!rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2508 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, NULL, &F->hint_2487));
} else if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->e_854)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2487 = f_peek_type_805((*(P1015)rt_nil_check(F->e_854)).b);
}
{
F->a_2509 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, F->hint_2487, &F->ta_2485));
F->b_2510 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, F->ta_2485, &F->tb_2486));
F->ct_2511 = NULL;
F->ct_2511 = f_base_of_223(F->ta_2485);
F->t_856v = g_ty_bool_1100;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2486, F->ta_2485, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)11LL)))) {
F->ct_2511 = f_base_of_223(F->tb_2486);
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2510), rt_str(", ", 2)), F->a_2509), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2510), rt_str(", ", 2)), F->a_2509), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2510), rt_str(", ", 2)), F->a_2509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2509), rt_str(", ", 2)), F->b_2510), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2510), rt_str(", ", 2)), F->a_2509), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1021)rt_nil_check(F->ct_2511)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_389(F->ct_2511)) {
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_413(F->ct_2511, &F->a_2509, &F->b_2510);
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_413(F->ct_2511, &F->a_2509, &F->b_2510)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2509), rt_str(" == ", 4)), F->b_2510), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2509), rt_str(" != ", 4)), F->b_2510), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2509), rt_str(" ", 1)), (((P1008)rt_nil_check(F->op_2484))->all)), rt_str(" ", 1)), F->b_2510), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2512 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).a, F->want_855, &F->ta_2485));
F->b_2513 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->e_854)).b, f_exponent_want_964(&(((P1008)rt_nil_check(F->op_2484))->all), F->ta_2485), &F->tb_2486));
if (((rt_r_ichk((*(P1021)rt_nil_check(F->ta_2485)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1021)rt_nil_check(F->tb_2486)).kind) == (((rt_int)3LL))))) {
F->t_856v = g_ty_float_1101;
if (((rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("+", 1)) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("-", 1))) || rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2512), rt_str(" ", 1)), (((P1008)rt_nil_check(F->op_2484))->all)), rt_str(" ", 1)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2486, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2485, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
f_check_type_232(F->tb_2486, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line));
F->t_856v = g_ty_int_1099;
if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1008)rt_nil_check(F->op_2484))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2512), rt_str(", ", 2)), F->b_2513), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_854)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1008)rt_nil_check(F->op_2484))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_856) = F->t_856v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_862(P1015 e_858, P1021 want_859, P1017 ctx_860, P1021 *t_861) {
  struct f_constructor_862fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_858 = e_858;
F->want_859 = want_859;
F->ctx_860 = ctx_860;
F->t_861 = t_861;
F->t_861v = *F->t_861;
F->it_2514 = NULL;
F->it_2514 = (*(P1015)rt_nil_check(F->e_858)).a;
F->f_2515 = NULL;
F->vt_2516 = NULL;
if (((F->want_859 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_859)).kind) == (((rt_int)16LL))))) {
F->s_2517 = NULL;
F->s_2517 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_859); b_; }));
F->t_861v = F->want_859;
while ((F->it_2514 != NULL)) {
F->v_2518 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->it_2514)).b, (*(P1021)rt_nil_check(F->want_859)).elem, &F->vt_2516));
f_check_type_232(F->vt_2516, (*(P1021)rt_nil_check(F->want_859)).elem, rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line));
F->s_2517 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P1008)rt_nil_check(F->s_2517))->all)), rt_str(", ", 2)), F->v_2518), rt_str(")", 1)); b_; }));
F->it_2514 = (*(P1015)rt_nil_check(F->it_2514)).next;
}
F->result_ = (((P1008)rt_nil_check(F->s_2517))->all);
goto ret_;
}
if (((F->want_859 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_859)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->want_859)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_859 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_859)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_876(F->e_858, F->want_859, F->ctx_860, &F->t_861v);
goto ret_;
}
if (((F->want_859 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->want_859)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2514 == NULL) || ((*(P1015)rt_nil_check(F->it_2514)).next != NULL)) || ((*(P1015)rt_nil_check(F->it_2514)).a == NULL)) || ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2514)).a)).next != NULL)) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2514)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2515 = (*(P1021)rt_nil_check(F->want_859)).fields;
{
F->i_2519 = RT_R_IUNDEF;
F->i_2519 = ((rt_int)0LL);
F->tmp_2520 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2515 != NULL) && (!rt_str_eq((((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2514)).a)).a)).name))->all))))) {
F->i_2519 = rt_add(rt_r_ichk(F->i_2519), ((rt_int)1LL));
F->f_2515 = (*(P1023)rt_nil_check(F->f_2515)).next;
}
if ((F->f_2515 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2514)).a)).a)).name))->all)); b_; }));
}
F->t_861v = F->want_859;
g_cons_ctx_1090 = (*(P1023)rt_nil_check(F->f_2515)).c;
{
F->v_2521 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->it_2514)).b, (*(P1023)rt_nil_check(F->f_2515)).t, &F->vt_2516));
f_check_type_232(F->vt_2516, (*(P1023)rt_nil_check(F->f_2515)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_859)), rt_str(" ", 1)), F->tmp_2520), rt_str("; ", 2)), F->tmp_2520), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2519))), rt_str("; ", 2)), F->tmp_2520), rt_str(".u.", 3)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all))), rt_str(" = ", 3)), f_comp_value_866((*(P1023)rt_nil_check(F->f_2515)).t, (*(P1023)rt_nil_check(F->f_2515)).c, &F->v_2521)), rt_str("; ", 2)), F->tmp_2520), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_859 == NULL) || (rt_r_ichk((*(P1021)rt_nil_check(F->want_859)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_861v = F->want_859;
F->f_2515 = (*(P1021)rt_nil_check(F->want_859)).fields;
{
F->tmp_2522 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2523 = NULL;
F->parts_2523 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_859)), rt_str(" ", 1)), F->tmp_2522), rt_str(";", 1)); b_; }));
while ((F->it_2514 != NULL)) {
F->k_2524 = NULL;
F->k_2524 = (*(P1015)rt_nil_check(F->it_2514)).a;
F->shared_2525 = NULL;
if ((F->k_2524 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2524 != NULL)) {
if (((((F->f_2515 == NULL) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->k_2524)).a)).kind) != (((rt_int)7LL)))) || ((*(P1015)rt_nil_check(F->k_2524)).b != NULL)) || (!rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->k_2524)).a)).name))->all), (((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all))))) {
if ((F->f_2515 == NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2514)).a)).next == NULL)) {
g_cons_ctx_1090 = (*(P1023)rt_nil_check(F->f_2515)).c;
{
F->v_2526 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->it_2514)).b, (*(P1023)rt_nil_check(F->f_2515)).t, &F->vt_2516));
f_check_type_232(F->vt_2516, (*(P1023)rt_nil_check(F->f_2515)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line));
F->parts_2523 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2523))->all), rt_str(" ", 1)), F->tmp_2522), rt_str(".", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all))), rt_str(" = ", 3)), f_comp_value_866((*(P1023)rt_nil_check(F->f_2515)).t, (*(P1023)rt_nil_check(F->f_2515)).c, &F->v_2526)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2525 == NULL)) {
F->v_2527 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->it_2514)).b, (*(P1023)rt_nil_check(F->f_2515)).t, &F->vt_2516));
F->shared_2525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2516, (*(P1023)rt_nil_check(F->f_2515)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line));
F->parts_2523 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2523))->all), rt_str(" ", 1)), f_ctype_234((*(P1023)rt_nil_check(F->f_2515)).t)), rt_str(" ", 1)), (((P1008)rt_nil_check(F->shared_2525))->all)), rt_str(" = ", 3)), F->v_2527), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2516, (*(P1023)rt_nil_check(F->f_2515)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line));
F->parts_2523 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2523))->all), rt_str(" ", 1)), F->tmp_2522), rt_str(".", 1)), f_field_c_17(&(((P1008)rt_nil_check((*(P1023)rt_nil_check(F->f_2515)).name))->all))), rt_str(" = ", 3)), f_comp_value_866((*(P1023)rt_nil_check(F->f_2515)).t, (*(P1023)rt_nil_check(F->f_2515)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_409((*(P1023)rt_nil_check(F->f_2515)).t, &(((P1008)rt_nil_check(F->shared_2525))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2515 = (*(P1023)rt_nil_check(F->f_2515)).next;
F->k_2524 = (*(P1015)rt_nil_check(F->k_2524)).next;
}
F->it_2514 = (*(P1015)rt_nil_check(F->it_2514)).next;
}
if ((F->f_2515 != NULL)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_858)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2523))->all), rt_str(" ", 1)), F->tmp_2522), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_861) = F->t_861v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_866(P1021 t_863, P1017 c_864, rstr *v_865) {
  struct f_comp_value_866fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_863 = t_863;
F->c_864 = c_864;
F->v_865 = v_865;
if (((F->c_864 == NULL) || (((*(P1017)rt_nil_check(F->c_864)).lo != NULL) && f_has_at_868(&(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_864)).lo))->all))))) {
F->result_ = f_copy_code_409(F->t_863, &(*F->v_865));
goto ret_;
} else if ((((rt_r_ichk((*(P1021)rt_nil_check(F->t_863)).kind) == (((rt_int)5LL))) && ((*(P1017)rt_nil_check(F->c_864)).slen != NULL)) && (!f_has_at_868(&(((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_864)).slen))->all))))) {
F->result_ = f_copy_code_409(F->t_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_865)), rt_str(", ", 2)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_864)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_863, F->c_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_409(F->t_863, &(*F->v_865)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_868(rstr *s_867) {
  struct f_has_at_868fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_867 = s_867;
{ rt_int lo2529 = ((rt_int)1LL), hi2530 = ((rt_int)(((*F->s_867)).len));
for (rt_int it2531 = lo2529; it2531 <= hi2530; it2531++) {
F->i_2528 = it2531;
if ((rt_r_echk(rt_str_get((*F->s_867), F->i_2528)) == 64)) {
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

static rstr f_set_elem_871(P1021 st_869, rstr *v_870) {
  struct f_set_elem_871fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_869 = st_869;
F->v_870 = v_870;
F->result_ = (*F->v_870);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_876(P1015 e_872, P1021 at_873, P1017 ctx_874, P1021 *t_875) {
  struct f_array_cons_876fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_872 = e_872;
F->at_873 = at_873;
F->ctx_874 = ctx_874;
F->t_875 = t_875;
F->t_875v = *F->t_875;
F->tmp_2532 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2533 = NULL;
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_873)), rt_str(" ", 1)), F->tmp_2532), rt_str(";", 1)); b_; }));
F->it_2534 = NULL;
F->it_2534 = (*(P1015)rt_nil_check(F->e_872)).a;
F->positional_2535 = RT_R_EUNDEF;
F->positional_2535 = 1;
F->t_875v = F->at_873;
while ((F->it_2534 != NULL)) {
if (((*(P1015)rt_nil_check(F->it_2534)).a != NULL)) {
F->positional_2535 = 0;
}
F->it_2534 = (*(P1015)rt_nil_check(F->it_2534)).next;
}
{ rt_int lo2537 = ((rt_int)1LL), hi2538 = rt_r_ichk((*(P1021)rt_nil_check(F->at_873)).ndim);
for (rt_int it2539 = lo2537; it2539 <= hi2538; it2539++) {
F->k_2536 = it2539;
F->lo_2540 = NULL;
F->hi_2541 = NULL;
if ((((F->ctx_874 != NULL) && (f_cons_lo_252(F->ctx_874, F->k_2536) != NULL)) && (!f_has_at_868(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1008)rt_nil_check(f_cons_lo_252(F->ctx_874, F->k_2536)))->all); b_; }))))) {
F->lo_2540 = f_cons_lo_252(F->ctx_874, F->k_2536);
F->hi_2541 = f_cons_hi_255(F->ctx_874, F->k_2536);
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->at_873)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2535))) {
if (((*(P1021)rt_nil_check(f_base_of_223((*(P1021)rt_nil_check(F->at_873)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->lo_2540))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1015)rt_nil_check(F->e_872)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_872)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), F->tmp_2532), rt_str(".", 1)), f_dim_lo_242(F->k_2536)), rt_str(" = ", 3)), (((P1008)rt_nil_check(F->lo_2540))->all)), rt_str("; ", 2)), F->tmp_2532), rt_str(".", 1)), f_dim_hi_244(F->k_2536)), rt_str(" = ", 3)), (((P1008)rt_nil_check(F->hi_2541))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_873)).ndim) == ((rt_int)1LL))) {
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), F->tmp_2532), rt_str(".lo2 = ", 7)), F->tmp_2532), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2533))->all), rt_str(" rt_int n_", 10)), F->tmp_2532), rt_str(" = ", 3)), f_acnt_249(F->at_873, &F->tmp_2532)), rt_str("; ", 2)), F->tmp_2532), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1021)rt_nil_check(F->at_873)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2532), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2532), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2532), rt_str(" + 1);", 6)); b_; }));
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->parts_2533))->all), f_fill_items_882((*(P1015)rt_nil_check(F->e_872)).a, F->at_873, &F->tmp_2532, NULL, ((rt_int)1LL))); b_; }));
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->parts_2533))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2532), rt_str("; i_++) if (seen_", 17)), F->tmp_2532), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2532), rt_str("; })", 4)); b_; }));
F->result_ = (((P1008)rt_nil_check(F->parts_2533))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_875) = F->t_875v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_882(P1015 items_877, P1021 at_878, rstr *tmp_879, P1019 prefix_880, rt_int dim_881) {
  struct f_fill_items_882fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_877 = items_877;
F->at_878 = at_878;
F->tmp_879 = tmp_879;
F->prefix_880 = prefix_880;
F->dim_881 = dim_881;
F->it_2542 = NULL;
F->it_2542 = F->items_877;
F->pos_2543 = RT_R_IUNDEF;
F->pos_2543 = ((rt_int)0LL);
F->r_2544 = NULL;
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2545 = NULL;
while ((F->it_2542 != NULL)) {
if (((*(P1015)rt_nil_check(F->it_2542)).a == NULL)) {
if (((F->dim_881 < rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2542)).b)).kind) == (((rt_int)14LL))))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_881)), rt_str(" = ", 3)), (*F->tmp_879)), rt_str(".", 1)), f_dim_lo_242(F->dim_881)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2543))), rt_str("; ", 2)), f_fill_items_882((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2542)).b)).a, F->at_878, &(*F->tmp_879), f_add_line_887(F->prefix_880, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_881)); b_; })), rt_add(F->dim_881, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2546 = rt_str_copy(f_item_value_892((*(P1015)rt_nil_check(F->it_2542)).b, F->at_878, f_e_line_884(F->it_2542), &F->vt_2545));
if (((F->dim_881 == ((rt_int)1LL)) && (rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim) > ((rt_int)1LL)))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" { ", 3)), F->v_2546), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2543))), rt_str(" >= n_", 6)), (*F->tmp_879)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_879)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2543))), rt_str("] = ", 4)), f_copy_code_409((*(P1021)rt_nil_check(F->at_878)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_879)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2543))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" { ", 3)), F->v_2546), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_881)), rt_str(" = ", 3)), (*F->tmp_879)), rt_str(".", 1)), f_dim_lo_242(F->dim_881)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2543))), rt_str("; ", 2)), f_store_at_902(F->at_878, &(*F->tmp_879), f_add_line_887(F->prefix_880, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_881)); b_; })), F->dim_881)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2543 = rt_add(rt_r_ichk(F->pos_2543), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_881, f_list_len_71((*(P1015)rt_nil_check(F->it_2542)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim))) {
F->k_2547 = NULL;
F->k_2547 = (*(P1015)rt_nil_check(F->it_2542)).a;
F->d_2548 = RT_R_IUNDEF;
F->d_2548 = F->dim_881;
F->pre_2549 = NULL;
F->pre_2549 = F->prefix_880;
F->loops_2550 = NULL;
F->loops_2550 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2551 = NULL;
F->ends_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2552 = rt_str_copy(f_item_value_892((*(P1015)rt_nil_check(F->it_2542)).b, F->at_878, rt_r_ichk((*(P1015)rt_nil_check(F->it_2542)).line), &F->vt_2545));
while ((F->k_2547 != NULL)) {
F->xv_2553 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2548))));
F->loops_2550 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->loops_2550))->all), f_key_loop_897(F->k_2547, F->at_878, rt_r_ichk(F->d_2548), &F->xv_2553)); b_; }));
F->ends_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->ends_2551))->all), rt_str(" }", 2)); b_; }));
F->pre_2549 = f_add_line_887(F->pre_2549, &F->xv_2553);
F->d_2548 = rt_add(rt_r_ichk(F->d_2548), ((rt_int)1LL));
F->k_2547 = (*(P1015)rt_nil_check(F->k_2547)).next;
}
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" { ", 3)), F->v_2552), (((P1008)rt_nil_check(F->loops_2550))->all)), rt_str(" ", 1)), f_store_at_902(F->at_878, &(*F->tmp_879), F->pre_2549, rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim))), (((P1008)rt_nil_check(F->ends_2551))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_881 == rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim)) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2542)).b)).kind) == (((rt_int)14LL))))) {
F->k_2554 = NULL;
F->k_2554 = (*(P1015)rt_nil_check(F->it_2542)).a;
while ((F->k_2554 != NULL)) {
F->xv_2555 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_881)));
if ((F->dim_881 < rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" {", 2)), f_key_loop_897(F->k_2554, F->at_878, F->dim_881, &F->xv_2555)), rt_str(" ", 1)), f_fill_items_882((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->it_2542)).b)).a, F->at_878, &(*F->tmp_879), f_add_line_887(F->prefix_880, &F->xv_2555), rt_add(F->dim_881, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2556 = rt_str_copy(f_item_value_892((*(P1015)rt_nil_check(F->it_2542)).b, F->at_878, rt_r_ichk((*(P1015)rt_nil_check(F->it_2542)).line), &F->vt_2545));
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2544))->all), rt_str(" { ", 3)), F->v_2556), f_key_loop_897(F->k_2554, F->at_878, F->dim_881, &F->xv_2555)), rt_str(" ", 1)), f_store_at_902(F->at_878, &(*F->tmp_879), f_add_line_887(F->prefix_880, &F->xv_2555), F->dim_881)), rt_str(" } }", 4)); b_; }));
}
F->k_2554 = (*(P1015)rt_nil_check(F->k_2554)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->it_2542)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P1021)rt_nil_check(F->at_878)).ndim), F->dim_881), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2542 = (*(P1015)rt_nil_check(F->it_2542)).next;
}
F->result_ = (((P1008)rt_nil_check(F->r_2544))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_884(P1015 e_883) {
  struct f_e_line_884fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_883 = e_883;
F->result_ = rt_r_ichk((*(P1015)rt_nil_check(F->e_883)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_add_line_887(P1019 l_885, rstr *s_886) {
  struct f_add_line_887fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_885 = l_885;
F->s_886 = s_886;
F->r_2557 = NULL;
F->tail_2558 = NULL;
F->x_2559 = NULL;
F->p_2560 = NULL;
F->p_2560 = F->l_885;
while ((F->p_2560 != NULL)) {
{ R1020 *cell2561 = rt_alloc(sizeof(R1020));
(*cell2561).s = NULL;
(*cell2561).next = NULL;
F->x_2559 = cell2561;
}
(*(P1019)rt_nil_check(F->x_2559)).s = (*(P1019)rt_nil_check(F->p_2560)).s;
if ((F->tail_2558 == NULL)) {
F->r_2557 = F->x_2559;
} else {
(*(P1019)rt_nil_check(F->tail_2558)).next = F->x_2559;
}
F->tail_2558 = F->x_2559;
F->p_2560 = (*(P1019)rt_nil_check(F->p_2560)).next;
}
{ R1020 *cell2562 = rt_alloc(sizeof(R1020));
(*cell2562).s = NULL;
(*cell2562).next = NULL;
F->x_2559 = cell2562;
}
(*(P1019)rt_nil_check(F->x_2559)).s = f_mk_3(&(*F->s_886));
if ((F->tail_2558 == NULL)) {
F->r_2557 = F->x_2559;
} else {
(*(P1019)rt_nil_check(F->tail_2558)).next = F->x_2559;
}
F->result_ = F->r_2557;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_892(P1015 e_888, P1021 at_889, rt_int line_890, P1021 *vt_891) {
  struct f_item_value_892fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_888 = e_888;
F->at_889 = at_889;
F->line_890 = line_890;
F->vt_891 = vt_891;
F->vt_891v = *F->vt_891;
g_cons_ctx_1090 = (*(P1021)rt_nil_check(F->at_889)).elemcons;
{
F->v_2563 = rt_str_copy(f_gexpr_789(F->e_888, (*(P1021)rt_nil_check(F->at_889)).elem, &F->vt_891v));
f_check_type_232(F->vt_891v, (*(P1021)rt_nil_check(F->at_889)).elem, F->line_890);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1021)rt_nil_check(F->at_889)).elem), rt_str(" v_ = ", 6)), f_comp_value_866((*(P1021)rt_nil_check(F->at_889)).elem, (*(P1021)rt_nil_check(F->at_889)).elemcons, &F->v_2563)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_891) = F->vt_891v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_897(P1015 k_893, P1021 at_894, rt_int d_895, rstr *xv_896) {
  struct f_key_loop_897fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_893 = k_893;
F->at_894 = at_894;
F->d_895 = d_895;
F->xv_896 = xv_896;
F->it_2564 = NULL;
F->lo_2565 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->k_893)).a, f_idx_type_258(F->at_894, F->d_895), &F->it_2564));
f_check_type_232(F->it_2564, f_idx_type_258(F->at_894, F->d_895), rt_r_ichk((*(P1015)rt_nil_check(F->k_893)).line));
if (((*(P1015)rt_nil_check(F->k_893)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_896)), rt_str(" = ", 3)), F->lo_2565), rt_str(";", 1));
goto ret_;
}
{
F->hi_2566 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->k_893)).b, f_idx_type_258(F->at_894, F->d_895), &F->it_2564));
f_check_type_232(F->it_2564, f_idx_type_258(F->at_894, F->d_895), rt_r_ichk((*(P1015)rt_nil_check(F->k_893)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_896)), rt_str(" = ", 3)), F->lo_2565), rt_str(", h", 3)), (*F->xv_896)), rt_str(" = ", 3)), F->hi_2566), rt_str("; ", 2)), (*F->xv_896)), rt_str(" <= h", 5)), (*F->xv_896)), rt_str("; ", 2)), (*F->xv_896)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_902(P1021 at_898, rstr *tmp_899, P1019 xs_900, rt_int n_901) {
  struct f_store_at_902fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_898 = at_898;
F->tmp_899 = tmp_899;
F->xs_900 = xs_900;
F->n_901 = n_901;
F->off_2567 = NULL;
F->x_2568 = NULL;
F->x_2568 = F->xs_900;
F->k_2569 = RT_R_IUNDEF;
F->k_2569 = ((rt_int)0LL);
while ((F->x_2568 != NULL)) {
F->k_2569 = rt_add(rt_r_ichk(F->k_2569), ((rt_int)1LL));
{
F->l_2570 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_899), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2569))));
F->h_2571 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_899), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2569))));
if ((F->off_2567 == NULL)) {
F->off_2567 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1008)rt_nil_check((*(P1019)rt_nil_check(F->x_2568)).s))->all)), rt_str(", ", 2)), F->l_2570), rt_str(", ", 2)), F->h_2571), rt_str(") - ", 4)), F->l_2570), rt_str(")", 1)); b_; }));
} else {
F->off_2567 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->off_2567))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2570), rt_str(", ", 2)), F->h_2571), rt_str(") + rt_index(", 13)), (((P1008)rt_nil_check((*(P1019)rt_nil_check(F->x_2568)).s))->all)), rt_str(", ", 2)), F->l_2570), rt_str(", ", 2)), F->h_2571), rt_str(") - ", 4)), F->l_2570), rt_str(")", 1)); b_; }));
}
}
F->x_2568 = (*(P1019)rt_nil_check(F->x_2568)).next;
}
if ((rt_r_ichk(F->k_2569) != rt_r_ichk((*(P1021)rt_nil_check(F->at_898)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P1021)rt_nil_check(F->at_898)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1008)rt_nil_check(F->off_2567))->all)), rt_str("; ", 2)), (*F->tmp_899)), rt_str(".p[o_] = ", 9)), f_copy_code_409((*(P1021)rt_nil_check(F->at_898)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_899)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_905(P1025 y_903, P1015 args_904) {
  struct f_fits_905fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_903 = y_903;
F->args_904 = args_904;
F->a_2572 = NULL;
F->a_2572 = F->args_904;
F->pm_2573 = NULL;
F->pm_2573 = (*(P1025)rt_nil_check(F->y_903)).params;
F->t_2574 = NULL;
F->saved_2575 = NULL;
F->saved_2575 = g_code_1069;
F->ok_2576 = RT_R_EUNDEF;
F->ok_2576 = 1;
F->lv_2577 = NULL;
F->lc_2578 = NULL;
F->ro_2579 = RT_R_EUNDEF;
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = f_new_buffer_24();
{ rt_frame xf2580;
if (RT_TRY(xf2580)) {
while (((rt_r_echk(F->ok_2576) && (F->a_2572 != NULL)) && (F->pm_2573 != NULL))) {
if (((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2573)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1027)rt_nil_check(F->pm_2573)).mode) == (((rt_int)3LL))))) {
f_lvalue_758(F->a_2572, &F->lv_2577, &F->t_2574, &F->lc_2578, &F->ro_2579);
} else {
F->v_2582 = rt_str_copy(f_gexpr_789(F->a_2572, (*(P1027)rt_nil_check(F->pm_2573)).t, &F->t_2574));
}
if ((!(f_same_221(F->t_2574, (*(P1027)rt_nil_check(F->pm_2573)).t) || ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2574)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1021)rt_nil_check((*(P1027)rt_nil_check(F->pm_2573)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2576 = 0;
}
F->a_2572 = (*(P1015)rt_nil_check(F->a_2572)).next;
F->pm_2573 = (*(P1027)rt_nil_check(F->pm_2573)).next;
}
if (((F->a_2572 != NULL) || (F->pm_2573 != NULL))) {
F->ok_2576 = 0;
}
RT_POP(xf2580);
} else {
RT_POP(xf2580);
int x2581 = rt_xcur;
if (0 || x2581 == ex_compile_error_1) {
F->ok_2576 = 0;
} else {
rt_raise(x2581);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = F->saved_2575;
F->result_ = rt_r_echk(F->ok_2576);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_resolve_overload_911(rstr *name_906, P1015 tt_907, P1015 args_908, int is_stmt_909, rt_int line_910) {
  struct f_resolve_overload_911fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_906 = name_906;
F->tt_907 = tt_907;
F->args_908 = args_908;
F->is_stmt_909 = is_stmt_909;
F->line_910 = line_910;
F->y_2583 = NULL;
F->first_2584 = NULL;
F->n_2585 = RT_R_IUNDEF;
F->n_2585 = ((rt_int)0LL);
{ rt_int lo2587 = ((rt_int)1LL), hi2588 = ((rt_int)3LL);
for (rt_int it2589 = lo2587; it2589 <= hi2588; it2589++) {
F->pass_2586 = it2589;
F->y_2583 = f_overload_chain_917(&(*F->name_906), F->pass_2586);
while ((F->y_2583 != NULL)) {
if (((rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2583)).name))->all), (*F->name_906)) && ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2583)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2583)).kind) == (((rt_int)4LL))))) && ((F->pass_2586 != ((rt_int)1LL)) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2583)).depth) >= rt_r_ichk(g_gdepth_1088))))) {
F->n_2585 = rt_add(rt_r_ichk(F->n_2585), ((rt_int)1LL));
if ((F->first_2584 == NULL)) {
F->first_2584 = F->y_2583;
}
if (((((rt_r_ichk((*(P1025)rt_nil_check(F->y_2583)).kind) == (((rt_int)4LL))) == F->is_stmt_909) && f_tt_fits_914(F->y_2583, F->tt_907)) && f_fits_905(F->y_2583, F->args_908))) {
F->result_ = F->y_2583;
goto ret_;
}
}
F->y_2583 = (*(P1025)rt_nil_check(F->y_2583)).chain;
}
}
}
if (f_is_builtin_919(&(*F->name_906))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2585) > ((rt_int)1LL))) {
f_fail_23(F->line_910, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_906)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2584;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_914(P1025 y_912, P1015 tt_913) {
  struct f_tt_fits_914fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_912 = y_912;
F->tt_913 = tt_913;
F->f_2590 = NULL;
F->a_2591 = NULL;
F->saved_2592 = NULL;
F->saved_2592 = g_code_1069;
F->ok_2593 = RT_R_EUNDEF;
F->ok_2593 = 1;
if ((((*(P1025)rt_nil_check(F->y_912)).decl == NULL) || ((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_912)).decl)).e == NULL))) {
F->result_ = (F->tt_913 == NULL);
goto ret_;
} else if ((F->tt_913 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2590 = (*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_912)).decl)).e;
F->a_2591 = F->tt_913;
g_trial_1097 = rt_add(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = f_new_buffer_24();
{ rt_frame xf2594;
if (RT_TRY(xf2594)) {
while (((rt_r_echk(F->ok_2593) && (F->f_2590 != NULL)) && (F->a_2591 != NULL))) {
F->fc_2596 = NULL;
F->ac_2597 = NULL;
F->fst_2598 = NULL;
F->fst_2598 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->f_2590)).line));
F->ft_2599 = NULL;
F->at_2600 = NULL;
(*(P1015)rt_nil_check(F->fst_2598)).name = (*(P1015)rt_nil_check(F->f_2590)).name;
F->ft_2599 = f_resolve_subtype_268(F->fst_2598, &F->fc_2596);
if ((rt_r_ichk((*(P1015)rt_nil_check(F->a_2591)).kind) >= (((rt_int)70LL)))) {
F->at_2600 = f_resolve_subtype_268(F->a_2591, &F->ac_2597);
} else {
F->ast_2601 = NULL;
F->ast_2601 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1015)rt_nil_check(F->a_2591)).line));
(*(P1015)rt_nil_check(F->ast_2601)).name = (*(P1015)rt_nil_check(F->a_2591)).name;
F->at_2600 = f_resolve_subtype_268(F->ast_2601, &F->ac_2597);
}
F->ok_2593 = f_same_221(F->ft_2599, F->at_2600);
F->f_2590 = (*(P1015)rt_nil_check(F->f_2590)).next;
F->a_2591 = (*(P1015)rt_nil_check(F->a_2591)).next;
}
F->ok_2593 = ((rt_r_echk(F->ok_2593) && (F->f_2590 == NULL)) && (F->a_2591 == NULL));
RT_POP(xf2594);
} else {
RT_POP(xf2594);
int x2595 = rt_xcur;
if (0 || x2595 == ex_compile_error_1) {
F->ok_2593 = 0;
} else {
rt_raise(x2595);
}
}
}
g_trial_1097 = rt_sub(rt_r_ichk(g_trial_1097), ((rt_int)1LL));
g_code_1069 = F->saved_2592;
F->result_ = rt_r_echk(F->ok_2593);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_overload_chain_917(rstr *name_915, rt_int pass_916) {
  struct f_overload_chain_917fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_915 = name_915;
F->pass_916 = pass_916;
if (((g_genv_1056 == NULL) && (F->pass_916 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_916 == ((rt_int)2LL))) {
F->result_ = ({ A1031 b_ = (((P1029)rt_nil_check(g_genv_1056))->all); b_.p[(rt_index(f_hash_161(&(*F->name_915)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1031 b_ = (((P1029)rt_nil_check(g_table_1055))->all); b_.p[(rt_index(f_hash_161(&(*F->name_915)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_919(rstr *n_918) {
  struct f_is_builtin_919fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_918 = n_918;
F->result_ = (((((((((((((((rt_str_eq((*F->n_918), rt_str("ABS", 3)) || rt_str_eq((*F->n_918), rt_str("POS", 3))) || rt_str_eq((*F->n_918), rt_str("SUCC", 4))) || rt_str_eq((*F->n_918), rt_str("PRED", 4))) || rt_str_eq((*F->n_918), rt_str("SQRT", 4))) || rt_str_eq((*F->n_918), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_918), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_918), rt_str("WRITE", 5))) || rt_str_eq((*F->n_918), rt_str("READLN", 6))) || rt_str_eq((*F->n_918), rt_str("SEND", 4))) || rt_str_eq((*F->n_918), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_918), rt_str("DELAY", 5))) || rt_str_eq((*F->n_918), rt_str("TIME", 4))) || rt_str_eq((*F->n_918), rt_str("CNVT", 4))) || rt_str_eq((*F->n_918), rt_str("FORMAT", 6))) || f_is_low_level_921(&(*F->n_918)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_921(rstr *n_920) {
  struct f_is_low_level_921fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_920 = n_920;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_920), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_920), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_920), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_920), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_920), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_920), rt_str("LOCK", 4))) || rt_str_eq((*F->n_920), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_920), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_920), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_920), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_920), rt_str("WAITING", 7))) || rt_str_eq((*F->n_920), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_920), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_920), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_920), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_920), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_920), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_920), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_920), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_925(P1015 tt_922, rt_int line_923, P1021 *t_924) {
  struct f_me_high_925fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_922 = tt_922;
F->line_923 = line_923;
F->t_924 = t_924;
F->t_924v = *F->t_924;
F->c_2602 = NULL;
if ((F->tt_922 == NULL)) {
f_fail_23(F->line_923, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_924v = f_resolve_subtype_268(F->tt_922, &F->c_2602);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_924v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_927(F->t_924v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_924) = F->t_924v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_927(P1021 t_926) {
  struct f_type_tag_927fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_926 = t_926;
if (((*(P1021)rt_nil_check(F->t_926)).name != NULL)) {
F->result_ = (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_926)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_930(P1015 e_928, rstr *name_929) {
  struct f_lock_ref_930fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_928 = e_928;
F->name_929 = name_929;
F->lv_2603 = NULL;
F->t_2604 = NULL;
F->c_2605 = NULL;
F->ro_2606 = RT_R_EUNDEF;
f_lvalue_758(F->e_928, &F->lv_2603, &F->t_2604, &F->c_2605, &F->ro_2606);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2604)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_928)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_929), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1008)rt_nil_check(F->lv_2603))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1025 f_user_op_933(rstr *op_931, P1015 args_932) {
  struct f_user_op_933fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_931 = op_931;
F->args_932 = args_932;
F->y_2607 = NULL;
{ rt_int lo2609 = ((rt_int)1LL), hi2610 = ((rt_int)3LL);
for (rt_int it2611 = lo2609; it2611 <= hi2610; it2611++) {
F->pass_2608 = it2611;
F->y_2607 = f_overload_chain_917(&(*F->op_931), F->pass_2608);
while ((F->y_2607 != NULL)) {
if ((((rt_str_eq((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2607)).name))->all), (*F->op_931)) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2607)).kind) == (((rt_int)3LL)))) && ((F->pass_2608 != ((rt_int)1LL)) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2607)).depth) >= rt_r_ichk(g_gdepth_1088)))) && f_fits_905(F->y_2607, F->args_932))) {
F->result_ = F->y_2607;
goto ret_;
}
F->y_2607 = (*(P1025)rt_nil_check(F->y_2607)).chain;
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

static rstr f_gcall_937(P1015 e_934, int is_stmt_935, P1021 *t_936) {
  struct f_gcall_937fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_934 = e_934;
F->is_stmt_935 = is_stmt_935;
F->t_936 = t_936;
F->t_936v = *F->t_936;
F->gd_2612 = NULL;
F->fn_2613 = NULL;
F->fn_2613 = (*(P1015)rt_nil_check(F->e_934)).a;
F->tt_2614 = NULL;
F->y_2615 = NULL;
F->args_2616 = NULL;
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2617 = NULL;
F->a_2617 = (*(P1015)rt_nil_check(F->e_934)).b;
F->pm_2618 = NULL;
F->lt_2619 = NULL;
F->vt_2620 = NULL;
F->lv_2621 = NULL;
F->lc_2622 = NULL;
F->ro_2623 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->fn_2613)).kind) == (((rt_int)12LL)))) {
F->tt_2614 = (*(P1015)rt_nil_check(F->fn_2613)).b;
F->fn_2613 = (*(P1015)rt_nil_check(F->fn_2613)).a;
}
F->y_2615 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all));
if ((F->y_2615 == NULL)) {
F->result_ = f_builtin_992(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), F->is_stmt_935, &F->t_936v);
goto ret_;
}
if ((((rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)10LL))))) {
F->alt_2624 = NULL;
F->alt_2624 = f_resolve_overload_911(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, F->is_stmt_935, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
if ((F->alt_2624 != NULL)) {
F->y_2615 = F->alt_2624;
} else if (f_is_builtin_919(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all))) {
F->result_ = f_builtin_992(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), F->is_stmt_935, &F->t_936v);
goto ret_;
}
}
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) == (((rt_int)10LL)))) {
F->gd_2612 = (*(P1025)rt_nil_check(F->y_2615)).decl;
F->y_2615 = f_instantiate_734(F->y_2615, F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
} else if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) == (((rt_int)4LL))))) {
F->y_2615 = f_resolve_overload_911(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, F->is_stmt_935, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
if ((F->y_2615 == NULL)) {
F->result_ = f_builtin_992(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), F->tt_2614, (*(P1015)rt_nil_check(F->e_934)).b, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), F->is_stmt_935, &F->t_936v);
goto ret_;
}
}
if (((rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_951(F->y_2615, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
if (((*(P1025)rt_nil_check(F->y_2615)).capn != NULL)) {
F->cr_2625 = NULL;
F->cr_2625 = g_caps_1074;
while ((F->cr_2625 != NULL)) {
if (((*(P1042)rt_nil_check(F->cr_2625)).d == (*(P1025)rt_nil_check(F->y_2615)).capn)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2615)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2625 = (*(P1042)rt_nil_check(F->cr_2625)).next;
}
}
if ((F->is_stmt_935 && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_935) && (rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2618 = (*(P1025)rt_nil_check(F->y_2615)).params;
if ((rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).level) > ((rt_int)0LL))) {
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2627 = ((rt_int)1LL), hi2628 = rt_sub(rt_r_ichk(g_cur_level_1072), rt_r_ichk((*(P1025)rt_nil_check(F->y_2615)).level));
for (rt_int it2629 = lo2627; it2629 <= hi2628; it2629++) {
F->i_2626 = it2629;
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2617 != NULL) && (F->pm_2618 != NULL))) {
if ((((rt_int)(((((P1008)rt_nil_check(F->args_2616))->all)).len)) > ((rt_int)0LL))) {
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str(", ", 2)); b_; }));
}
if ((((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)4LL)))) && f_explicit_rep_981(F->a_2617))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if (((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)3LL))))) {
f_lvalue_758(F->a_2617, &F->lv_2621, &F->lt_2619, &F->lc_2622, &F->ro_2623);
if (rt_r_echk(F->ro_2623)) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check((*(P1027)rt_nil_check(F->pm_2618)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2619, (*(P1027)rt_nil_check(F->pm_2618)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str("&", 1)), (((P1008)rt_nil_check(F->lv_2621))->all)), f_actual_bounds_985((*(P1027)rt_nil_check(F->pm_2618)).t, F->lt_2619, F->lc_2622)); b_; }));
} else if (((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)4LL))) && f_is_lvalue_752(F->a_2617))) {
f_lvalue_758(F->a_2617, &F->lv_2621, &F->lt_2619, &F->lc_2622, &F->ro_2623);
f_check_type_232(F->lt_2619, (*(P1027)rt_nil_check(F->pm_2618)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str("&", 1)), (((P1008)rt_nil_check(F->lv_2621))->all)), f_actual_bounds_985((*(P1027)rt_nil_check(F->pm_2618)).t, F->lt_2619, F->lc_2622)); b_; }));
} else if ((rt_r_ichk((*(P1027)rt_nil_check(F->pm_2618)).mode) == (((rt_int)4LL)))) {
F->v_2630 = rt_str_copy(f_gexpr_in_797(F->a_2617, (*(P1027)rt_nil_check(F->pm_2618)).t, (*(P1027)rt_nil_check(F->pm_2618)).c, &F->vt_2620));
F->ct_2631 = rt_str_copy(f_ctype_234((*(P1027)rt_nil_check(F->pm_2618)).t));
f_check_type_232(F->vt_2620, (*(P1027)rt_nil_check(F->pm_2618)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str("({ ", 3)), F->ct_2631), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2631), rt_str(")); *b_ = ", 10)), F->v_2630), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1027)rt_nil_check(F->pm_2618)).t)) {
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2632 = rt_str_copy(f_gexpr_in_797(F->a_2617, (*(P1027)rt_nil_check(F->pm_2618)).t, (*(P1027)rt_nil_check(F->pm_2618)).c, &F->vt_2620));
f_check_type_232(F->vt_2620, (*(P1027)rt_nil_check(F->pm_2618)).t, rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line));
F->args_2616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->args_2616))->all), F->v_2632); b_; }));
}
F->a_2617 = (*(P1015)rt_nil_check(F->a_2617)).next;
F->pm_2618 = (*(P1027)rt_nil_check(F->pm_2618)).next;
}
if (((F->a_2617 != NULL) || (F->pm_2618 != NULL))) {
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(F->e_934)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->fn_2613)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1015)rt_nil_check(F->e_934)).b), f_list_len_71(F->a_2617)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_936v = (*(P1025)rt_nil_check(F->y_2615)).result;
if ((F->gd_2612 != NULL)) {
F->chk_2633 = rt_str_copy(f_same_subtypes_956(F->gd_2612, (*(P1015)rt_nil_check(F->e_934)).b));
if ((!rt_str_eq(F->chk_2633, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2633), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2615)).cname))->all)), rt_str("(", 1)), (((P1008)rt_nil_check(F->args_2616))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_2615)).cname))->all), rt_str("(", 1)), (((P1008)rt_nil_check(F->args_2616))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_936) = F->t_936v;
  RT_FPOP();
  return F->result_;
}

static P1019 f_requires_939(P1025 y_938) {
  struct f_requires_939fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_938 = y_938;
if (rt_r_echk((*(P1025)rt_nil_check(F->y_938)).reqdone)) {
F->result_ = (*(P1025)rt_nil_check(F->y_938)).reqs;
goto ret_;
}
(*(P1025)rt_nil_check(F->y_938)).reqdone = 1;
if ((((*(P1025)rt_nil_check(F->y_938)).decl != NULL) && (((rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_938)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_938)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_938)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2634 = NULL;
F->imp_2634 = (*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_938)).decl)).d;
while ((F->imp_2634 != NULL)) {
f_add_req_942(F->y_938, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->imp_2634)).name))->all));
F->imp_2634 = (*(P1015)rt_nil_check(F->imp_2634)).next;
}
f_require_calls_945(F->y_938, (*(P1015)rt_nil_check((*(P1025)rt_nil_check(F->y_938)).decl)).c);
}
F->result_ = (*(P1025)rt_nil_check(F->y_938)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_942(P1025 y_940, rstr *name_941) {
  struct f_add_req_942fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_940 = y_940;
F->name_941 = name_941;
F->l_2635 = NULL;
if ((!f_seen_name_420((*(P1025)rt_nil_check(F->y_940)).reqs, &(*F->name_941)))) {
{ R1020 *cell2636 = rt_alloc(sizeof(R1020));
(*cell2636).s = NULL;
(*cell2636).next = NULL;
F->l_2635 = cell2636;
}
(*(P1019)rt_nil_check(F->l_2635)).s = f_mk_3(&(*F->name_941));
(*(P1019)rt_nil_check(F->l_2635)).next = (*(P1025)rt_nil_check(F->y_940)).reqs;
(*(P1025)rt_nil_check(F->y_940)).reqs = F->l_2635;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_945(P1025 y_943, P1015 e_944) {
  struct f_require_calls_945fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_943 = y_943;
F->e_944 = e_944;
F->x_2637 = NULL;
F->x_2637 = F->e_944;
while ((F->x_2637 != NULL)) {
if ((((((rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)51LL))))) {
F->x_2637 = (*(P1015)rt_nil_check(F->x_2637)).next;
} else {
F->callee_2638 = NULL;
if (((((rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->x_2637)).kind) == (((rt_int)21LL)))) && ((*(P1015)rt_nil_check(F->x_2637)).a != NULL)) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->x_2637)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2638 = (*(P1015)rt_nil_check(F->x_2637)).a;
}
if ((F->callee_2638 != NULL)) {
F->z_2639 = NULL;
F->z_2639 = f_lookup_163(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->callee_2638)).name))->all));
if ((((F->z_2639 != NULL) && (F->z_2639 != F->y_943)) && ((rt_r_ichk((*(P1025)rt_nil_check(F->z_2639)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1025)rt_nil_check(F->z_2639)).kind) == (((rt_int)3LL)))))) {
F->l_2640 = NULL;
F->l_2640 = f_requires_939(F->z_2639);
while ((F->l_2640 != NULL)) {
f_add_req_942(F->y_943, &(((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_2640)).s))->all));
F->l_2640 = (*(P1019)rt_nil_check(F->l_2640)).next;
}
}
}
if (((*(P1015)rt_nil_check(F->x_2637)).a != NULL)) {
f_require_calls_945(F->y_943, (*(P1015)rt_nil_check(F->x_2637)).a);
}
if (((*(P1015)rt_nil_check(F->x_2637)).b != NULL)) {
f_require_calls_945(F->y_943, (*(P1015)rt_nil_check(F->x_2637)).b);
}
if (((*(P1015)rt_nil_check(F->x_2637)).c != NULL)) {
f_require_calls_945(F->y_943, (*(P1015)rt_nil_check(F->x_2637)).c);
}
F->x_2637 = (*(P1015)rt_nil_check(F->x_2637)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_948(P1015 elems_946, rstr *name_947) {
  struct f_declared_in_948fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_946 = elems_946;
F->name_947 = name_947;
F->e_2641 = NULL;
F->e_2641 = F->elems_946;
while ((F->e_2641 != NULL)) {
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->e_2641)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_2641)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_2641)).name))->all), (*F->name_947)))) {
F->result_ = 1;
goto ret_;
}
F->e_2641 = (*(P1015)rt_nil_check(F->e_2641)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_951(P1025 y_949, rt_int line_950) {
  struct f_check_requires_951fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_949 = y_949;
F->line_950 = line_950;
F->l_2642 = NULL;
F->l_2642 = f_requires_939(F->y_949);
if ((((*(P1025)rt_nil_check(F->y_949)).home == NULL) || (rt_r_ichk((*(P1025)rt_nil_check(F->y_949)).level) != rt_r_ichk(g_cur_level_1072)))) {
goto ret_;
}
while ((F->l_2642 != NULL)) {
F->z_2643 = NULL;
F->z_2643 = f_lookup_163(&(((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_2642)).s))->all));
if ((f_declared_in_948((*(P1025)rt_nil_check(F->y_949)).home, &(((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_2642)).s))->all)) && ((F->z_2643 == NULL) || (rt_r_ichk((*(P1025)rt_nil_check(F->z_2643)).depth) < rt_r_ichk((*(P1025)rt_nil_check(F->y_949)).depth))))) {
f_fail_23(F->line_950, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check((*(P1025)rt_nil_check(F->y_949)).name))->all), rt_str(" requires ", 10)), (((P1008)rt_nil_check((*(P1019)rt_nil_check(F->l_2642)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2642 = (*(P1019)rt_nil_check(F->l_2642)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_953(P1015 args_952) {
  struct f_act_delay_args_953fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_952 = args_952;
F->at_2644 = NULL;
F->t1_2645 = NULL;
F->t1_2645 = f_peek_type_805(F->args_952);
if (((F->t1_2645 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t1_2645)).kind) == (((rt_int)14LL))))) {
F->a_2646 = rt_str_copy(f_act_ref_640(F->args_952));
F->v_2647 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_952)).next, g_ty_int_1099, &F->at_2644));
f_check_type_232(F->at_2644, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->args_952)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2647, rt_str(", ", 2)), F->a_2646);
goto ret_;
}
{
F->v_2648 = rt_str_copy(f_gexpr_789(F->args_952, g_ty_int_1099, &F->at_2644));
f_check_type_232(F->at_2644, g_ty_int_1099, rt_r_ichk((*(P1015)rt_nil_check(F->args_952)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2648, rt_str(", ", 2)), f_act_ref_640((*(P1015)rt_nil_check(F->args_952)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_956(P1015 gd_954, P1015 args_955) {
  struct f_same_subtypes_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_954 = gd_954;
F->args_955 = args_955;
F->p_2649 = NULL;
F->p_2649 = (*(P1015)rt_nil_check(F->gd_954)).a;
F->r_2650 = NULL;
F->r_2650 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2649 != NULL)) {
if ((rt_r_ichk((*(P1015)rt_nil_check(F->p_2649)).ival) == ((rt_int)2LL))) {
F->fp_2651 = NULL;
F->fp_2651 = (*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->gd_954)).b)).a;
F->a_2652 = NULL;
F->a_2652 = F->args_955;
F->flo_2653 = NULL;
F->fhi_2654 = NULL;
while (((F->fp_2651 != NULL) && (F->a_2652 != NULL))) {
if ((((((*(P1015)rt_nil_check(F->fp_2651)).a != NULL) && (rt_r_ichk((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2651)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2651)).a)).name))->all), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->p_2649)).name))->all))) && ((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->fp_2651)).a)).b == NULL))) {
F->st_2655 = NULL;
F->c_2656 = NULL;
F->base_2657 = NULL;
F->lo_2658 = NULL;
F->hi_2659 = NULL;
F->st_2655 = f_value_subtype_290(F->a_2652, &F->c_2656, &F->base_2657);
if (f_scalar_kind_186(F->st_2655)) {
F->lo_2658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2655, F->c_2656); b_; }));
F->hi_2659 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2655, F->c_2656); b_; }));
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->st_2655)).kind) == (((rt_int)5LL))) && ((*(P1017)rt_nil_check(F->c_2656)).slen != NULL))) {
F->lo_2658 = (*(P1017)rt_nil_check(F->c_2656)).slen;
F->hi_2659 = (*(P1017)rt_nil_check(F->c_2656)).slen;
}
if (((F->lo_2658 != NULL) && (F->flo_2653 != NULL))) {
if ((((rt_int)(((((P1008)rt_nil_check(F->r_2650))->all)).len)) > ((rt_int)0LL))) {
F->r_2650 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2650))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2650 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2650))->all), rt_str("(", 1)), (((P1008)rt_nil_check(F->flo_2653))->all)), rt_str(") != (", 6)), (((P1008)rt_nil_check(F->lo_2658))->all)), rt_str(") || (", 6)), (((P1008)rt_nil_check(F->fhi_2654))->all)), rt_str(") != (", 6)), (((P1008)rt_nil_check(F->hi_2659))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2658 != NULL)) {
F->flo_2653 = F->lo_2658;
F->fhi_2654 = F->hi_2659;
}
}
F->fp_2651 = (*(P1015)rt_nil_check(F->fp_2651)).next;
F->a_2652 = (*(P1015)rt_nil_check(F->a_2652)).next;
}
}
F->p_2649 = (*(P1015)rt_nil_check(F->p_2649)).next;
}
F->result_ = (((P1008)rt_nil_check(F->r_2650))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_961(rstr *name_957, P1015 args_958, rt_int line_959, P1021 *t_960) {
  struct f_mailbox_low_961fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_957 = name_957;
F->args_958 = args_958;
F->line_959 = line_959;
F->t_960 = t_960;
F->t_960v = *F->t_960;
F->qv_2660 = NULL;
F->mv_2661 = NULL;
F->dv_2662 = NULL;
F->qt_2663 = NULL;
F->mt_2664 = NULL;
F->dt_2665 = NULL;
F->at_2666 = NULL;
F->c_2667 = NULL;
F->ro_2668 = RT_R_EUNDEF;
F->send_2669 = RT_R_EUNDEF;
F->send_2669 = rt_str_eq(rt_str_slice((*F->name_957), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_758(F->args_958, &F->qv_2660, &F->qt_2663, &F->c_2667, &F->ro_2668);
f_lvalue_758((*(P1015)rt_nil_check(F->args_958)).next, &F->mv_2661, &F->mt_2664, &F->c_2667, &F->ro_2668);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->mt_2664)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_959, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_957), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_960v = g_ty_void_1104;
if (((rt_r_echk(F->send_2669) && (F->qt_2663 != g_ty_send_st_1111)) || ((!rt_r_echk(F->send_2669)) && (F->qt_2663 != g_ty_receive_st_1112)))) {
f_fail_23(F->line_959, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_957), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_957), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_957), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_957), rt_str("RECEIVE_TEST", 12)))) {
F->t_960v = g_ty_bool_1100;
if (rt_r_echk(F->send_2669)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1008)rt_nil_check(F->mv_2661))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1008)rt_nil_check(F->mv_2661))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_957), rt_str("SEND_COMPLETE", 13))) {
F->v_2670 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_958)).next)).next, (*(P1021)rt_nil_check(F->mt_2664)).elem, &F->at_2666));
f_check_type_232(F->at_2666, (*(P1021)rt_nil_check(F->mt_2664)).elem, F->line_959);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1021)rt_nil_check(F->mt_2664)).elem)), rt_str(" m_ = ", 6)), F->v_2670), rt_str("; if (!rt_cond_send(", 20)), (((P1008)rt_nil_check(F->mv_2661))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_957), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_758((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_958)).next)).next, &F->dv_2662, &F->dt_2665, &F->c_2667, &F->ro_2668);
f_check_type_232(F->dt_2665, (*(P1021)rt_nil_check(F->mt_2664)).elem, F->line_959);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1008)rt_nil_check(F->mv_2661))->all)), rt_str(", &", 3)), (((P1008)rt_nil_check(F->dv_2662))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1008)rt_nil_check(F->qv_2660))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_960) = F->t_960v;
  RT_FPOP();
  return F->result_;
}

static P1021 f_exponent_want_964(rstr *op_962, P1021 ta_963) {
  struct f_exponent_want_964fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_962 = op_962;
F->ta_963 = ta_963;
if (rt_str_eq((*F->op_962), rt_str("**", 2))) {
F->result_ = g_ty_int_1099;
goto ret_;
}
F->result_ = F->ta_963;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_968(P1015 e_965, int text_966, rt_int line_967) {
  struct f_file_ref_968fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_965 = e_965;
F->text_966 = text_966;
F->line_967 = line_967;
F->t_2671 = NULL;
F->f_2672 = rt_str_copy(f_gexpr_789(F->e_965, NULL, &F->t_2671));
if ((rt_r_ichk((*(P1021)rt_nil_check(F->t_2671)).kind) != (((rt_int)10LL)))) {
f_fail_23(F->line_967, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_966 && (!f_text_file_970(F->t_2671)))) {
f_fail_23(F->line_967, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_970(P1021 t_969) {
  struct f_text_file_970fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_969 = t_969;
F->result_ = (((F->t_969 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->t_969)).kind) == (((rt_int)10LL)))) && ((*(P1021)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_969)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_975(P1015 tt_971, P1015 args_972, rt_int line_973, P1021 *t_974) {
  struct f_conversion_975fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_971 = tt_971;
F->args_972 = args_972;
F->line_973 = line_973;
F->t_974 = t_974;
F->t_974v = *F->t_974;
F->c_2673 = NULL;
F->at_2674 = NULL;
F->target_2675 = NULL;
F->target_2675 = f_resolve_subtype_268(F->tt_971, &F->c_2673);
F->a_2676 = rt_str_copy(f_gexpr_789(F->args_972, NULL, &F->at_2674));
F->t_974v = F->target_2675;
if (((rt_r_ichk((*(P1021)rt_nil_check(F->target_2675)).kind) == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2675), g_ty_ascii_1102))) {
F->r_2677 = NULL;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)1LL)))) {
F->r_2677 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2676), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)3LL)))) {
F->r_2677 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2676), rt_str(", ", 2)), f_float_digits_977(F->args_972)), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)2LL)))) {
F->r_2677 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2676), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1021)rt_nil_check(f_base_of_223(F->at_2674))).kind == (((rt_int)4LL)))) {
F->r_2677 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_979(f_base_of_223(F->at_2674))), rt_str(", ", 2)), F->a_2676), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)5LL)))) {
F->r_2677 = f_mk_3(&F->a_2676);
} else {
f_fail_23(F->line_973, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2673 != NULL) && ((*(P1017)rt_nil_check(F->c_2673)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1008)rt_nil_check(F->r_2677))->all)), rt_str(", ", 2)), (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_2673)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1008)rt_nil_check(F->r_2677))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1021)rt_nil_check(F->target_2675)).kind) == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2675, F->c_2673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2676), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->target_2675)).kind) == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2675, F->c_2673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2676), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1021)rt_nil_check(F->target_2675)).kind) == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2676), rt_str(")", 1));
goto ret_;
} else if (((*(P1021)rt_nil_check(f_base_of_223(F->target_2675))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2675, F->c_2673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_979(f_base_of_223(F->target_2675))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1021)rt_nil_check(f_base_of_223(F->target_2675))).lits))), rt_str(", ", 2)), F->a_2676), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if (((rt_r_ichk((*(P1021)rt_nil_check(F->target_2675)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1021)rt_nil_check(F->at_2674)).kind) == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2675, F->c_2673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2676), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2675, F->at_2674)) {
F->result_ = f_checked_213(F->target_2675, F->c_2673, &F->a_2676);
goto ret_;
}
f_fail_23(F->line_973, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_974) = F->t_974v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_977(P1015 e_976) {
  struct f_float_digits_977fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_976 = e_976;
F->lv_2678 = NULL;
F->t_2679 = NULL;
F->c_2680 = NULL;
F->ro_2681 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_976)).kind) == (((rt_int)8LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->e_976)).kind) == (((rt_int)17LL))))) {
F->result_ = f_float_digits_977((*(P1015)rt_nil_check(F->e_976)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->e_976)).kind) == (((rt_int)2LL)))) {
F->n_2682 = RT_R_IUNDEF;
F->n_2682 = ((rt_int)0LL);
F->lead_2683 = RT_R_EUNDEF;
F->lead_2683 = 1;
{ rt_int lo2685 = ((rt_int)1LL), hi2686 = ((rt_int)(((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all)).len));
for (rt_int it2687 = lo2685; it2687 <= hi2686; it2687++) {
F->i_2684 = it2687;
if (((rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all), F->i_2684)) == 69) || (rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all), F->i_2684)) == 101))) {
F->result_ = f_itos_7(rt_r_ichk(F->n_2682));
goto ret_;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all), F->i_2684))) && (!(rt_r_echk(F->lead_2683) && (rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all), F->i_2684)) == 48))))) {
F->n_2682 = rt_add(rt_r_ichk(F->n_2682), ((rt_int)1LL));
F->lead_2683 = 0;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->e_976)).name))->all), F->i_2684))) && (!rt_r_echk(F->lead_2683)))) {
F->n_2682 = rt_add(rt_r_ichk(F->n_2682), ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(rt_r_ichk(F->n_2682));
goto ret_;
} else if (f_is_lvalue_752(F->e_976)) {
F->saved_2688 = NULL;
F->saved_2688 = g_code_1069;
g_code_1069 = f_new_buffer_24();
f_lvalue_758(F->e_976, &F->lv_2678, &F->t_2679, &F->c_2680, &F->ro_2681);
g_code_1069 = F->saved_2688;
if (((F->c_2680 != NULL) && ((*(P1017)rt_nil_check(F->c_2680)).prec != NULL))) {
F->result_ = (((P1008)rt_nil_check((*(P1017)rt_nil_check(F->c_2680)).prec))->all);
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

static rstr f_enum_names_979(P1021 t_978) {
  struct f_enum_names_979fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_978 = t_978;
F->l_2689 = NULL;
F->l_2689 = (*(P1021)rt_nil_check(F->t_978)).lits;
F->r_2690 = NULL;
F->r_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1021)rt_nil_check(F->t_978)).cname != NULL)) {
F->result_ = (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_978)).cname))->all);
goto ret_;
}
while ((F->l_2689 != NULL)) {
if ((((rt_int)(((((P1008)rt_nil_check(F->r_2690))->all)).len)) > ((rt_int)0LL))) {
F->r_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1008)rt_nil_check(F->r_2690))->all), rt_str(", ", 2)); b_; }));
}
F->r_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->r_2690))->all), f_q_18()), (((P1008)rt_nil_check((*(P1015)rt_nil_check(F->l_2689)).name))->all)), f_q_18()); b_; }));
F->l_2689 = (*(P1015)rt_nil_check(F->l_2689)).next;
}
(*(P1021)rt_nil_check(F->t_978)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1065, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_978)).cname))->all)), rt_str("[] = {", 6)), (((P1008)rt_nil_check(F->r_2690))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1008)rt_nil_check((*(P1021)rt_nil_check(F->t_978)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_981(P1015 e_980) {
  struct f_explicit_rep_981fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_980 = e_980;
F->bt_2691 = NULL;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->e_980)).kind) != (((rt_int)11LL))) && (!((rt_r_ichk((*(P1015)rt_nil_check(F->e_980)).kind) == (((rt_int)10LL))) && f_is_lvalue_752(F->e_980))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2691 = f_peek_type_805((*(P1015)rt_nil_check(F->e_980)).a);
while ((((F->bt_2691 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->bt_2691)).kind) == (((rt_int)8LL)))) && ((*(P1021)rt_nil_check(F->bt_2691)).repn == NULL))) {
f_finish_ptr_464(F->bt_2691);
F->bt_2691 = (*(P1021)rt_nil_check(F->bt_2691)).target;
}
if (((F->bt_2691 != NULL) && ((*(P1021)rt_nil_check(F->bt_2691)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_981((*(P1015)rt_nil_check(F->e_980)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_985(P1021 ft_982, P1021 t_983, P1017 c_984) {
  struct f_actual_bounds_985fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_982 = ft_982;
F->t_983 = t_983;
F->c_984 = c_984;
if ((!f_scalar_kind_186(F->ft_982))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_983, F->c_984)), rt_str(", ", 2)), f_sub_hi_201(F->t_983, F->c_984));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_992(rstr *name_986, P1015 tt_987, P1015 args_988, rt_int line_989, int is_stmt_990, P1021 *t_991) {
  struct f_builtin_992fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_986 = name_986;
F->tt_987 = tt_987;
F->args_988 = args_988;
F->line_989 = line_989;
F->is_stmt_990 = is_stmt_990;
F->t_991 = t_991;
F->t_991v = *F->t_991;
F->at_2692 = NULL;
F->n_2693 = RT_R_IUNDEF;
F->n_2693 = f_list_len_71(F->args_988);
F->t_991v = g_ty_void_1104;
if (((rt_str_eq((*F->name_986), rt_str("POS", 3)) || rt_str_eq((*F->name_986), rt_str("SUCC", 4))) || rt_str_eq((*F->name_986), rt_str("PRED", 4)))) {
F->a_2694 = rt_str_copy(f_gexpr_789(F->args_988, NULL, &F->at_2692));
if (rt_str_eq((*F->name_986), rt_str("POS", 3))) {
if (((*(P1021)rt_nil_check(f_base_of_223(F->at_2692))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2694), rt_str(") + 1)", 6));
goto ret_;
}
F->t_991v = F->at_2692;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2692)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_986), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2694), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2694), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_986), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2694), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1021)rt_nil_check(f_base_of_223(F->at_2692))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2694), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1021)rt_nil_check(f_base_of_223(F->at_2692))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("FLOOR", 5))) {
F->a_2695 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_float_1101, &F->at_2692));
f_check_type_232(F->at_2692, g_ty_float_1101, F->line_989);
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2695), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_986), rt_str("ACTP", 4)) || rt_str_eq((*F->name_986), rt_str("RADIX", 5))) || rt_str_eq((*F->name_986), rt_str("EMIN", 4))) || rt_str_eq((*F->name_986), rt_str("EMAX", 4)))) {
F->a_2696 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_float_1101, &F->at_2692));
f_check_type_232(F->at_2692, g_ty_float_1101, F->line_989);
F->t_991v = g_ty_int_1099;
if (rt_str_eq((*F->name_986), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_986), rt_str("SQRT", 4)) || rt_str_eq((*F->name_986), rt_str("SIN", 3))) || rt_str_eq((*F->name_986), rt_str("COS", 3))) || rt_str_eq((*F->name_986), rt_str("EXP", 3))) || rt_str_eq((*F->name_986), rt_str("LN", 2)))) {
F->a_2697 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_float_1101, &F->at_2692));
F->t_991v = g_ty_float_1101;
if (rt_str_eq((*F->name_986), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2697), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_986)), rt_str("(", 1)), F->a_2697), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("IFLOAT", 6))) {
F->a_2698 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_int_1099, &F->at_2692));
F->t_991v = g_ty_float_1101;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2698), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("IFIX", 4))) {
F->a_2699 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_float_1101, &F->at_2692));
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2699), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("FORMAT", 6))) {
F->a_2700 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_float_1101, &F->at_2692));
F->n1_2701 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_int_1099, &F->at_2692));
F->m1_2702 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next, g_ty_int_1099, &F->at_2692));
F->t_991v = g_ty_string_1103;
if ((rt_r_ichk(F->n_2693) == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2700), rt_str(", ", 2)), F->n1_2701), rt_str(", ", 2)), F->m1_2702), rt_str(", ", 2)), f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next)).next, g_ty_int_1099, &F->at_2692)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2700), rt_str(", ", 2)), F->n1_2701), rt_str(", ", 2)), F->m1_2702), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("ABS", 3))) {
F->a_2703 = rt_str_copy(f_gexpr_789(F->args_988, NULL, &F->at_2692));
F->t_991v = F->at_2692;
if ((rt_r_ichk((*(P1021)rt_nil_check(F->at_2692)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2703), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2703), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("CNVT", 4))) {
if ((F->tt_987 == NULL)) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_975(F->tt_987, F->args_988, F->line_989, &F->t_991v);
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("WRITELN", 7)) && (rt_r_ichk(F->n_2693) == ((rt_int)2LL)))) {
F->f_2704 = rt_str_copy(f_file_ref_968(F->args_988, 1, F->line_989));
F->a_2705 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_string_1103, &F->at_2692));
f_check_type_232(F->at_2692, g_ty_string_1103, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2704), rt_str(", ", 2)), F->a_2705), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2693) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2706 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_string_1103, &F->at_2692));
f_check_type_232(F->at_2692, g_ty_string_1103, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2706), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_986), rt_str("WRITE", 5)) || rt_str_eq((*F->name_986), rt_str("READ", 4)))) {
F->ft_2707 = NULL;
F->f_2708 = rt_str_copy(f_file_ref_968(F->args_988, 0, F->line_989));
F->ft_2707 = f_peek_type_805(F->args_988);
if (rt_str_eq((*F->name_986), rt_str("READ", 4))) {
F->lv_2709 = NULL;
F->lc_2710 = NULL;
F->ro_2711 = RT_R_EUNDEF;
f_lvalue_758((*(P1015)rt_nil_check(F->args_988)).next, &F->lv_2709, &F->at_2692, &F->lc_2710, &F->ro_2711);
if (rt_r_echk(F->ro_2711)) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2692, f_str_elem_218(F->ft_2707), F->line_989);
if (f_text_file_970(F->ft_2707)) {
F->result_ = f_assign_code_406(&(((P1008)rt_nil_check(F->lv_2709))->all), F->at_2692, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2708), rt_str(")", 1)); b_; }), F->lc_2710);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2708), rt_str(", &", 3)), (((P1008)rt_nil_check(F->lv_2709))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2712 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, f_str_elem_218(F->ft_2707), &F->at_2692));
if ((f_text_file_970(F->ft_2707) && (rt_r_ichk((*(P1021)rt_nil_check(F->at_2692)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2708), rt_str(", ", 2)), F->a_2712), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2692, f_str_elem_218(F->ft_2707), F->line_989);
if (f_text_file_970(F->ft_2707)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2708), rt_str(", ", 2)), F->a_2712), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_2692)), rt_str(" w_ = ", 6)), F->a_2712), rt_str("; rt_r_fwrite(", 14)), F->f_2708), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_986), rt_str("READLN", 6)) && (rt_r_ichk(F->n_2693) == ((rt_int)2LL)))) {
F->lv_2713 = NULL;
F->lc_2714 = NULL;
F->ro_2715 = RT_R_EUNDEF;
F->f_2716 = rt_str_copy(f_file_ref_968(F->args_988, 1, F->line_989));
f_lvalue_758((*(P1015)rt_nil_check(F->args_988)).next, &F->lv_2713, &F->at_2692, &F->lc_2714, &F->ro_2715);
f_check_type_232(F->at_2692, g_ty_string_1103, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2716), rt_str(", &", 3)), (((P1008)rt_nil_check(F->lv_2713))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("READLN", 6))) {
F->lv_2717 = NULL;
F->lc_2718 = NULL;
F->ro_2719 = RT_R_EUNDEF;
f_lvalue_758(F->args_988, &F->lv_2717, &F->at_2692, &F->lc_2718, &F->ro_2719);
f_check_type_232(F->at_2692, g_ty_string_1103, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1008)rt_nil_check(F->lv_2717))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("SIZELN", 6)) && (rt_r_ichk(F->n_2693) == ((rt_int)1LL)))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_968(F->args_988, 1, F->line_989)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SIZELN", 6))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("EOF", 3)) && (rt_r_ichk(F->n_2693) == ((rt_int)1LL)))) {
F->t_991v = g_ty_bool_1100;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_968(F->args_988, 0, F->line_989)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("EOF", 3))) {
F->t_991v = g_ty_bool_1100;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SYS_IN", 6))) {
F->t_991v = g_ty_text_file_1113;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SYS_OUT", 7))) {
F->t_991v = g_ty_text_file_1113;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("OPEN", 4))) {
F->f_2720 = rt_str_copy(f_file_ref_968(F->args_988, 0, F->line_989));
F->nm_2721 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_string_1103, &F->at_2692));
F->st_2722 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next, g_file_state_type_1114, &F->at_2692));
f_check_type_232(F->at_2692, g_file_state_type_1114, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2720), rt_str(", ", 2)), F->nm_2721), rt_str(", ", 2)), F->st_2722), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("CLOSE", 5))) {
F->f_2723 = rt_str_copy(f_file_ref_968(F->args_988, 0, F->line_989));
F->d_2724 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_file_disp_type_1115, &F->at_2692));
f_check_type_232(F->at_2692, g_file_disp_type_1115, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2723), rt_str(", ", 2)), F->d_2724), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("SIZE", 4)) || rt_str_eq((*F->name_986), rt_str("POSITION", 8)))) {
F->t_991v = g_ty_int_1099;
if (rt_str_eq((*F->name_986), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_968(F->args_988, 0, F->line_989)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_968(F->args_988, 0, F->line_989)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SET_POSITION", 12))) {
F->f_2725 = rt_str_copy(f_file_ref_968(F->args_988, 0, F->line_989));
F->v_2726 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_int_1099, &F->at_2692));
f_check_type_232(F->at_2692, g_ty_int_1099, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2725), rt_str(", ", 2)), F->v_2726), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("FILE_RENAME", 11))) {
F->a_2727 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_string_1103, &F->at_2692));
F->b_2728 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_string_1103, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2727), rt_str(", ", 2)), F->b_2728), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("SEND", 4)) || rt_str_eq((*F->name_986), rt_str("RECEIVE", 7)))) {
F->lv_2729 = NULL;
F->dv_2730 = NULL;
F->lc_2731 = NULL;
F->ro_2732 = RT_R_EUNDEF;
F->mt_2733 = NULL;
F->dt_2734 = NULL;
f_lvalue_758(F->args_988, &F->lv_2729, &F->mt_2733, &F->lc_2731, &F->ro_2732);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->mt_2733)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_986), rt_str("RECEIVE", 7))) {
f_lvalue_758((*(P1015)rt_nil_check(F->args_988)).next, &F->dv_2730, &F->dt_2734, &F->lc_2731, &F->ro_2732);
f_check_type_232(F->dt_2734, (*(P1021)rt_nil_check(F->mt_2733)).elem, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1008)rt_nil_check(F->lv_2729))->all)), rt_str(", &", 3)), (((P1008)rt_nil_check(F->dv_2730))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2735 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, (*(P1021)rt_nil_check(F->mt_2733)).elem, &F->at_2692));
f_check_type_232(F->at_2692, (*(P1021)rt_nil_check(F->mt_2733)).elem, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1021)rt_nil_check(F->mt_2733)).elem)), rt_str(" m_ = ", 6)), F->v_2735), rt_str("; rt_send(", 10)), (((P1008)rt_nil_check(F->lv_2729))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_986), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_986), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2736 = NULL;
F->lc_2737 = NULL;
F->ro_2738 = RT_R_EUNDEF;
F->mt_2739 = NULL;
f_lvalue_758(F->args_988, &F->lv_2736, &F->mt_2739, &F->lc_2737, &F->ro_2738);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->mt_2739)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_986))), rt_str("(", 1)), (((P1008)rt_nil_check(F->lv_2736))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_986), rt_str("COND_RECEIVE", 12)))) {
F->lv_2740 = NULL;
F->dv_2741 = NULL;
F->bv_2742 = NULL;
F->lc_2743 = NULL;
F->ro_2744 = RT_R_EUNDEF;
F->mt_2745 = NULL;
F->dt_2746 = NULL;
F->bt_2747 = NULL;
f_lvalue_758(F->args_988, &F->lv_2740, &F->mt_2745, &F->lc_2743, &F->ro_2744);
if ((rt_r_ichk((*(P1021)rt_nil_check(F->mt_2745)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_758((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next, &F->bv_2742, &F->bt_2747, &F->lc_2743, &F->ro_2744);
f_check_type_232(F->bt_2747, g_ty_bool_1100, F->line_989);
if (rt_str_eq((*F->name_986), rt_str("COND_RECEIVE", 12))) {
f_lvalue_758((*(P1015)rt_nil_check(F->args_988)).next, &F->dv_2741, &F->dt_2746, &F->lc_2743, &F->ro_2744);
f_check_type_232(F->dt_2746, (*(P1021)rt_nil_check(F->mt_2745)).elem, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->bv_2742))->all), rt_str(" = rt_cond_receive(", 19)), (((P1008)rt_nil_check(F->lv_2740))->all)), rt_str(", &", 3)), (((P1008)rt_nil_check(F->dv_2741))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2748 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, (*(P1021)rt_nil_check(F->mt_2745)).elem, &F->at_2692));
f_check_type_232(F->at_2692, (*(P1021)rt_nil_check(F->mt_2745)).elem, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1021)rt_nil_check(F->mt_2745)).elem)), rt_str(" m_ = ", 6)), F->v_2748), rt_str("; ", 2)), (((P1008)rt_nil_check(F->bv_2742))->all)), rt_str(" = rt_cond_send(", 16)), (((P1008)rt_nil_check(F->lv_2740))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_986), rt_str("PRIORITY", 8))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SET_PRIORITY", 12))) {
F->v_2749 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_int_1099, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_640(F->args_988)), rt_str(", ", 2)), F->v_2749), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("ACTIVE", 6))) {
F->t_991v = g_ty_bool_1100;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("DELAY", 5))) {
F->v_2750 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_int_1099, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2750), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2693) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_953(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("DELAY_UNTIL", 11))) {
F->v_2751 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_int_1099, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2751), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2693) == ((rt_int)1LL)))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("TIME", 4))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_986), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_986), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_986), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_986), rt_str("HOURS", 5)))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_986));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("HALT", 4))) {
F->a_2752 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_int_1099, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2752), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("ME", 2)) && (F->tt_987 != NULL))) {
F->result_ = f_me_high_925(F->tt_987, F->line_989, &F->t_991v);
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("WAITING", 7)) || rt_str_eq((*F->name_986), rt_str("SUSPENDED", 9)))) {
F->t_991v = g_ty_bool_1100;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_986))), rt_str("(", 1)), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_986), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_986), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_986), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_986), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_986), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_986), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_986))), rt_str("(", 1)), f_act_ref_640(F->args_988)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2693) != ((rt_int)2LL))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_640(F->args_988)), rt_str(", ", 2)), f_act_ref_640((*(P1015)rt_nil_check(F->args_988)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_986), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_986), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_986), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_986), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_986), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_986), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2693) != ((rt_int)0LL))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_986))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_930(F->args_988, &(*F->name_986))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_986), rt_str("UNLOCK", 6)) && (f_peek_type_805(F->args_988) != g_ty_latch_1108))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_930(F->args_988, &(*F->name_986))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_930(F->args_988, &(*F->name_986))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("COND_LOCK", 9))) {
F->bv_2753 = NULL;
F->bc_2754 = NULL;
F->ro_2755 = RT_R_EUNDEF;
F->bt_2756 = NULL;
F->l_2757 = rt_str_copy(f_lock_ref_930(F->args_988, &(*F->name_986)));
f_lvalue_758((*(P1015)rt_nil_check(F->args_988)).next, &F->bv_2753, &F->bt_2756, &F->bc_2754, &F->ro_2755);
f_check_type_232(F->bt_2756, g_ty_bool_1100, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1008)rt_nil_check(F->bv_2753))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2757), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("EXCESS_LOCKS", 12))) {
F->t_991v = g_ty_int_1099;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_930(F->args_988, &(*F->name_986))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("OWNER", 5))) {
F->t_991v = g_ty_act_1109;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_930(F->args_988, &(*F->name_986))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_986), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_986), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_986), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_986), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_986), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_986), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_986), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_986), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2693) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_961(&(*F->name_986), F->args_988, F->line_989, &F->t_991v);
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("FREE", 4))) {
F->pv_2758 = NULL;
F->pc_2759 = NULL;
F->ro_2760 = RT_R_EUNDEF;
F->pt_2761 = NULL;
f_lvalue_758(F->args_988, &F->pv_2758, &F->pt_2761, &F->pc_2759, &F->ro_2760);
if (((rt_r_ichk((*(P1021)rt_nil_check(F->pt_2761)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2760))) {
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1080 = 1;
f_finish_ptr_464(F->pt_2761);
if ((f_suppressed_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_337(F->pt_2761))) {
if (f_needs_fin_346((*(P1021)rt_nil_check(F->pt_2761)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_747(F->pt_2761, &(((P1008)rt_nil_check(F->pv_2758))->all)); b_; }), (*(P1021)rt_nil_check(F->pt_2761)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_346((*(P1021)rt_nil_check(F->pt_2761)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str("); if (", 7)), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_747(F->pt_2761, &(((P1008)rt_nil_check(F->pv_2758))->all)); b_; }), (*(P1021)rt_nil_check(F->pt_2761)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1008)rt_nil_check(F->pv_2758))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("LOW_IO", 6))) {
F->dev_2762 = rt_str_copy(f_gexpr_789(F->args_988, g_ty_int_1099, &F->at_2692));
F->cmd_2763 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check(F->args_988)).next, g_ty_int_1099, &F->at_2692));
if ((rt_r_ichk(F->n_2693) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2762), rt_str(", ", 2)), F->cmd_2763), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_752((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next))) {
F->v_2764 = rt_str_copy(f_gexpr_789((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next, g_ty_int_1099, &F->at_2692));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2764), rt_str("; rt_r_low_io(", 14)), F->dev_2762), rt_str(", ", 2)), F->cmd_2763), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2765 = NULL;
F->dc_2766 = NULL;
F->ro_2767 = RT_R_EUNDEF;
F->dt_2768 = NULL;
f_lvalue_758((*(P1015)rt_nil_check((*(P1015)rt_nil_check(F->args_988)).next)).next, &F->dv_2765, &F->dt_2768, &F->dc_2766, &F->ro_2767);
f_check_type_232(F->dt_2768, g_ty_int_1099, F->line_989);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2762), rt_str(", ", 2)), F->cmd_2763), rt_str(", &", 3)), (((P1008)rt_nil_check(F->dv_2765))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_991) = F->t_991v;
  RT_FPOP();
  return F->result_;
}

static P1015 f_with_library_994(P1015 units_993) {
  struct f_with_library_994fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_993 = units_993;
F->r_2769 = NULL;
F->r_2769 = F->units_993;
F->more_2770 = RT_R_EUNDEF;
F->more_2770 = 1;
while (rt_r_echk(F->more_2770)) {
F->missing_2771 = NULL;
F->missing_2771 = f_external_missing_997(F->r_2769, F->r_2769);
F->more_2770 = 0;
if ((F->missing_2771 != NULL)) {
F->saved_2772 = RT_R_IUNDEF;
F->saved_2772 = rt_r_ichk(g_tpos_1048);
if (f_read_library_60(&(((P1008)rt_nil_check(F->missing_2771))->all))) {
F->lib_2773 = NULL;
g_tpos_1048 = rt_r_ichk(g_ntoks_before_library_1053);
F->lib_2773 = f_program_159();
g_tpos_1048 = rt_r_ichk(F->saved_2772);
if ((F->lib_2773 != NULL)) {
F->t_2774 = NULL;
F->t_2774 = F->lib_2773;
while (((*(P1015)rt_nil_check(F->t_2774)).next != NULL)) {
F->t_2774 = (*(P1015)rt_nil_check(F->t_2774)).next;
}
(*(P1015)rt_nil_check(F->t_2774)).next = F->r_2769;
F->r_2769 = F->lib_2773;
F->more_2770 = 1;
}
}
}
g_ntoks_before_library_1053 = rt_add(rt_r_ichk(g_ntoks_1047), ((rt_int)1LL));
}
F->result_ = F->r_2769;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1008 f_external_missing_997(P1015 e_995, P1015 units_996) {
  struct f_external_missing_997fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_995 = e_995;
F->units_996 = units_996;
F->x_2775 = NULL;
F->x_2775 = F->e_995;
while ((F->x_2775 != NULL)) {
if (((((rt_r_ichk((*(P1015)rt_nil_check(F->x_2775)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2775)).flag) >= ((rt_int)2LL))) && (!f_unit_named_1000(F->units_996, &(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_2775)).name))->all)))) && (!f_tried_1002(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_2775)).name))->all))))) {
f_mark_tried_1004(&(((P1008)rt_nil_check((*(P1015)rt_nil_check(F->x_2775)).name))->all));
F->result_ = (*(P1015)rt_nil_check(F->x_2775)).name;
goto ret_;
}
if ((((*(P1015)rt_nil_check(F->x_2775)).a != NULL) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2775)).kind) != (((rt_int)48LL))))) {
F->r_2776 = NULL;
F->r_2776 = f_external_missing_997((*(P1015)rt_nil_check(F->x_2775)).a, F->units_996);
if ((F->r_2776 != NULL)) {
F->result_ = F->r_2776;
goto ret_;
}
}
if ((((*(P1015)rt_nil_check(F->x_2775)).c != NULL) && (rt_r_ichk((*(P1015)rt_nil_check(F->x_2775)).kind) != (((rt_int)48LL))))) {
F->r_2777 = NULL;
F->r_2777 = f_external_missing_997((*(P1015)rt_nil_check(F->x_2775)).c, F->units_996);
if ((F->r_2777 != NULL)) {
F->result_ = F->r_2777;
goto ret_;
}
}
F->x_2775 = (*(P1015)rt_nil_check(F->x_2775)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1000(P1015 units_998, rstr *name_999) {
  struct f_unit_named_1000fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_998 = units_998;
F->name_999 = name_999;
F->u_2778 = NULL;
F->u_2778 = F->units_998;
while ((F->u_2778 != NULL)) {
if (rt_str_eq((((P1008)rt_nil_check((*(P1015)rt_nil_check(F->u_2778)).name))->all), (*F->name_999))) {
F->result_ = 1;
goto ret_;
}
F->u_2778 = (*(P1015)rt_nil_check(F->u_2778)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1002(rstr *name_1001) {
  struct f_tried_1002fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1001 = name_1001;
F->result_ = f_seen_name_420(g_library_tried_1054, &(*F->name_1001));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1004(rstr *name_1003) {
  struct f_mark_tried_1004fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1003 = name_1003;
F->l_2779 = NULL;
{ R1020 *cell2780 = rt_alloc(sizeof(R1020));
(*cell2780).s = NULL;
(*cell2780).next = NULL;
F->l_2779 = cell2780;
}
(*(P1019)rt_nil_check(F->l_2779)).s = f_mk_3(&(*F->name_1003));
(*(P1019)rt_nil_check(F->l_2779)).next = g_library_tried_1054;
g_library_tried_1054 = F->l_2779;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1006(P1015 units_1005) {
  struct f_translate_1006fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1005 = units_1005;
F->u_2781 = NULL;
F->u_2781 = F->units_1005;
while ((F->u_2781 != NULL)) {
if (f_has_pragmat_497((*(P1015)rt_nil_check(F->u_2781)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2781);
}
if ((((*(P1015)rt_nil_check(F->u_2781)).next == NULL) && (!f_has_pragmat_497((*(P1015)rt_nil_check(F->u_2781)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1043 *cell2782 = rt_alloc(sizeof(R1043));
(*cell2782).d = NULL;
(*cell2782).next = NULL;
g_caps_1074 = cell2782;
}
(*(P1042)rt_nil_check(g_caps_1074)).d = F->u_2781;
(*(P1042)rt_nil_check(g_caps_1074)).depth = rt_r_ichk(g_depth_1058);
f_declare_labels_575((*(P1015)rt_nil_check(F->u_2781)).c);
f_declare_body_425((*(P1015)rt_nil_check(F->u_2781)).c);
f_capsule_body_582((*(P1015)rt_nil_check(F->u_2781)).c);
f_await_tasks_571((*(P1015)rt_nil_check(F->u_2781)).c);
{
F->l_2783 = NULL;
F->l_2783 = F->units_1005;
while ((F->l_2783 != F->u_2781)) {
{
F->w_2784 = rt_str_copy(f_waits_of_567(F->l_2783));
if ((((rt_int)((F->w_2784).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2784);
}
}
F->l_2783 = (*(P1015)rt_nil_check(F->l_2783)).next;
}
}
f_close_fins_558(NULL);
if (rt_r_echk(g_uses_findyn_1082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_435(F->u_2781);
}
F->u_2781 = (*(P1015)rt_nil_check(F->u_2781)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1007(void) {
  struct f_print_program_1007fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_421();
if (rt_r_echk(g_uses_free_1080)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1062);
f_print_buffer_31(g_out_frames_1078);
f_print_buffer_31(g_out_helpers_1063);
f_print_buffer_31(g_out_protos_1064);
f_print_buffer_31(g_out_globals_1065);
f_print_buffer_31(g_out_funcs_1066);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1079);
f_print_buffer_31(g_out_excs_1068);
f_print_buffer_31(g_out_init_1067);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1045(R1045 *d, R1045 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1045 cp_R1045(R1045 s) {
  R1045 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1045(R1045 a, R1045 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1043(R1043 *d, R1043 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1043 cp_R1043(R1043 s) {
  R1043 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1043(R1043 a, R1043 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1041(R1041 *d, R1041 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1041 cp_R1041(R1041 s) {
  R1041 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1041(R1041 a, R1041 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1039(R1039 *d, R1039 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1039 cp_R1039(R1039 s) {
  R1039 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1039(R1039 a, R1039 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1037(R1037 *d, R1037 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1037 cp_R1037(R1037 s) {
  R1037 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1037(R1037 a, R1037 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1035(R1035 *d, R1035 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R1035 cp_R1035(R1035 s) {
  R1035 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R1035(R1035 a, R1035 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R1033(R1033 *d, R1033 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1033 cp_R1033(R1033 s) {
  R1033 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1033(R1033 a, R1033 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1031(A1031 *d, A1031 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1031 cp_A1031(A1031 s) {
  A1031 d = s; d.p = rt_alloc(sizeof(P1025) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1031(A1031 a, A1031 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1028(R1028 *d, R1028 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1028 cp_R1028(R1028 s) {
  R1028 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1028(R1028 a, R1028 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1026(R1026 *d, R1026 s) {
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
static R1026 cp_R1026(R1026 s) {
  R1026 d = s;
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
static int eq_R1026(R1026 a, R1026 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line);
}
static void as_R1024(R1024 *d, R1024 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1024 cp_R1024(R1024 s) {
  R1024 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1024(R1024 a, R1024 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1022(R1022 *d, R1022 s) {
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
static R1022 cp_R1022(R1022 s) {
  R1022 d = s;
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
static int eq_R1022(R1022 a, R1022 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1020(R1020 *d, R1020 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1020 cp_R1020(R1020 s) {
  R1020 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1020(R1020 a, R1020 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1018(R1018 *d, R1018 s) {
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
static R1018 cp_R1018(R1018 s) {
  R1018 d = s;
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
static int eq_R1018(R1018 a, R1018 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1016(R1016 *d, R1016 s) {
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
static R1016 cp_R1016(R1016 s) {
  R1016 d = s;
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
static int eq_R1016(R1016 a, R1016 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1014(A1014 *d, A1014 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1014 cp_A1014(A1014 s) {
  A1014 d = s; d.p = rt_alloc(sizeof(P1010) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1014(A1014 a, A1014 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1011(R1011 *d, R1011 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1011 cp_R1011(R1011 s) {
  R1011 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1011(R1011 a, R1011 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1046);
  RT_ROOT(g_ntoks_1047);
  RT_ROOT(g_tpos_1048);
  RT_ROOT(g_src_line_1049);
  RT_ROOT(g_pending_prag_1050);
  RT_ROOT(g_src_head_1051);
  RT_ROOT(g_src_tail_1052);
  RT_ROOT(g_ntoks_before_library_1053);
  RT_ROOT(g_library_tried_1054);
  RT_ROOT(g_table_1055);
  RT_ROOT(g_genv_1056);
  RT_ROOT(g_all_insts_1057);
  RT_ROOT(g_depth_1058);
  RT_ROOT(g_scope_stack_1059);
  RT_ROOT(g_all_types_1060);
  RT_ROOT(g_serial_1061);
  RT_ROOT(g_out_types_1062);
  RT_ROOT(g_out_helpers_1063);
  RT_ROOT(g_out_protos_1064);
  RT_ROOT(g_out_globals_1065);
  RT_ROOT(g_out_funcs_1066);
  RT_ROOT(g_out_init_1067);
  RT_ROOT(g_out_excs_1068);
  RT_ROOT(g_code_1069);
  RT_ROOT(g_fields_buf_1070);
  RT_ROOT(g_in_func_1071);
  RT_ROOT(g_cur_level_1072);
  RT_ROOT(g_fctx_1073);
  RT_ROOT(g_caps_1074);
  RT_ROOT(g_cap_waits_1075);
  RT_ROOT(g_psub_1076);
  RT_ROOT(g_st_field_1077);
  RT_ROOT(g_out_frames_1078);
  RT_ROOT(g_out_roots_1079);
  RT_ROOT(g_uses_free_1080);
  RT_ROOT(g_fins_1081);
  RT_ROOT(g_uses_findyn_1082);
  RT_ROOT(g_func_sym_1083);
  RT_ROOT(g_func_rc_1084);
  RT_ROOT(g_cap_ret_1085);
  RT_ROOT(g_cap_rflag_1086);
  RT_ROOT(g_ret_frames_1087);
  RT_ROOT(g_gdepth_1088);
  RT_ROOT(g_suppress_1089);
  RT_ROOT(g_cons_ctx_1090);
  RT_ROOT(g_mark_uninit_1091);
  RT_ROOT(g_exits_1092);
  RT_ROOT(g_gotos_1093);
  RT_ROOT(g_frames_1094);
  RT_ROOT(g_handlers_1095);
  RT_ROOT(g_cleanups_1096);
  RT_ROOT(g_trial_1097);
  RT_ROOT(g_mcopies_1098);
  RT_ROOT(g_ty_int_1099);
  RT_ROOT(g_ty_bool_1100);
  RT_ROOT(g_ty_float_1101);
  RT_ROOT(g_ty_ascii_1102);
  RT_ROOT(g_ty_string_1103);
  RT_ROOT(g_ty_void_1104);
  RT_ROOT(g_ty_file_1105);
  RT_ROOT(g_ty_nil_1106);
  RT_ROOT(g_ty_lock_1107);
  RT_ROOT(g_ty_latch_1108);
  RT_ROOT(g_ty_act_1109);
  RT_ROOT(g_file_mode_type_1110);
  RT_ROOT(g_ty_send_st_1111);
  RT_ROOT(g_ty_receive_st_1112);
  RT_ROOT(g_ty_text_file_1113);
  RT_ROOT(g_file_state_type_1114);
  RT_ROOT(g_file_disp_type_1115);
  RT_ROOT(g_file_access_type_1116);
  RT_ROOT(g_no_cons_1117);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1046 = NULL;
g_ntoks_1047 = RT_R_IUNDEF;
g_ntoks_1047 = ((rt_int)0LL);
g_tpos_1048 = RT_R_IUNDEF;
g_tpos_1048 = ((rt_int)1LL);
g_src_line_1049 = RT_R_IUNDEF;
g_src_line_1049 = ((rt_int)0LL);
g_pending_prag_1050 = NULL;
g_src_head_1051 = NULL;
g_src_tail_1052 = NULL;
g_ntoks_before_library_1053 = RT_R_IUNDEF;
g_ntoks_before_library_1053 = ((rt_int)0LL);
g_library_tried_1054 = NULL;
g_table_1055 = NULL;
g_genv_1056 = NULL;
g_all_insts_1057 = NULL;
g_depth_1058 = RT_R_IUNDEF;
g_depth_1058 = ((rt_int)0LL);
g_scope_stack_1059 = NULL;
g_all_types_1060 = NULL;
g_serial_1061 = RT_R_IUNDEF;
g_serial_1061 = ((rt_int)0LL);
g_out_types_1062 = NULL;
g_out_helpers_1063 = NULL;
g_out_protos_1064 = NULL;
g_out_globals_1065 = NULL;
g_out_funcs_1066 = NULL;
g_out_init_1067 = NULL;
g_out_excs_1068 = NULL;
g_code_1069 = NULL;
g_fields_buf_1070 = NULL;
g_in_func_1071 = RT_R_EUNDEF;
g_in_func_1071 = 0;
g_cur_level_1072 = RT_R_IUNDEF;
g_cur_level_1072 = ((rt_int)0LL);
g_fctx_1073 = NULL;
g_caps_1074 = NULL;
g_cap_waits_1075 = NULL;
g_psub_1076 = NULL;
g_st_field_1077 = NULL;
g_out_frames_1078 = NULL;
g_out_roots_1079 = NULL;
g_uses_free_1080 = RT_R_EUNDEF;
g_uses_free_1080 = 0;
g_fins_1081 = NULL;
g_uses_findyn_1082 = RT_R_EUNDEF;
g_uses_findyn_1082 = 0;
g_func_sym_1083 = NULL;
g_func_rc_1084 = NULL;
g_cap_ret_1085 = NULL;
g_cap_rflag_1086 = NULL;
g_ret_frames_1087 = RT_R_IUNDEF;
g_ret_frames_1087 = ((rt_int)0LL);
g_gdepth_1088 = RT_R_IUNDEF;
g_gdepth_1088 = ((rt_int)0LL);
g_suppress_1089 = NULL;
g_cons_ctx_1090 = NULL;
g_mark_uninit_1091 = RT_R_EUNDEF;
g_mark_uninit_1091 = 0;
g_exits_1092 = NULL;
g_gotos_1093 = NULL;
g_frames_1094 = RT_R_IUNDEF;
g_frames_1094 = ((rt_int)0LL);
g_handlers_1095 = NULL;
g_cleanups_1096 = NULL;
g_trial_1097 = RT_R_IUNDEF;
g_trial_1097 = ((rt_int)0LL);
g_mcopies_1098 = NULL;
g_ty_int_1099 = NULL;
g_ty_bool_1100 = NULL;
g_ty_float_1101 = NULL;
g_ty_ascii_1102 = NULL;
g_ty_string_1103 = NULL;
g_ty_void_1104 = NULL;
g_ty_file_1105 = NULL;
g_ty_nil_1106 = NULL;
g_ty_lock_1107 = NULL;
g_ty_latch_1108 = NULL;
g_ty_act_1109 = NULL;
g_file_mode_type_1110 = NULL;
g_ty_send_st_1111 = NULL;
g_ty_receive_st_1112 = NULL;
g_ty_text_file_1113 = NULL;
g_file_state_type_1114 = NULL;
g_file_disp_type_1115 = NULL;
g_file_access_type_1116 = NULL;
g_no_cons_1117 = NULL;
{ P1012 cell2785 = rt_alloc(sizeof *cell2785);
rt_int pv2786 = ((rt_int)1000000LL);
cell2785->p_n = pv2786;
cell2785->all.lo = ((rt_int)1LL); cell2785->all.hi = pv2786;
cell2785->all.lo2 = cell2785->all.hi2 = 1;
cell2785->all.p = rt_alloc(sizeof(P1010) * (size_t)(RT_CNT(cell2785->all)) + 1);
for (rt_int i2787 = 0; i2787 < (RT_CNT(cell2785->all)); i2787++) {
cell2785->all.p[i2787] = NULL;
}
g_toks_1046 = cell2785;
}
{ P1029 cell2788 = rt_alloc(sizeof *cell2788);
rt_int pv2789 = (((rt_int)4093LL));
cell2788->p_n = pv2789;
cell2788->all.lo = ((rt_int)0LL); cell2788->all.hi = pv2789;
cell2788->all.lo2 = cell2788->all.hi2 = 1;
cell2788->all.p = rt_alloc(sizeof(P1025) * (size_t)(RT_CNT(cell2788->all)) + 1);
for (rt_int i2790 = 0; i2790 < (RT_CNT(cell2788->all)); i2790++) {
cell2788->all.p[i2790] = NULL;
}
g_table_1055 = cell2788;
}
g_out_types_1062 = f_new_buffer_24();
g_out_helpers_1063 = f_new_buffer_24();
g_out_protos_1064 = f_new_buffer_24();
g_out_globals_1065 = f_new_buffer_24();
g_out_funcs_1066 = f_new_buffer_24();
g_out_init_1067 = f_new_buffer_24();
g_out_excs_1068 = f_new_buffer_24();
g_out_frames_1078 = f_new_buffer_24();
g_out_roots_1079 = f_new_buffer_24();
g_code_1069 = g_out_init_1067;
g_no_cons_1117 = f_new_cons_184();
g_ty_int_1099 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1100 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1101 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1103 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1104 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1105 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1106 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1107 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1108 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1109 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2791;
if (RT_TRY(xf2791)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1053 = rt_add(rt_r_ichk(g_ntoks_1047), ((rt_int)1LL));
f_translate_1006(f_with_library_994(f_program_159()));
f_print_program_1007();
RT_POP(xf2791);
} else {
RT_POP(xf2791);
int x2792 = rt_xcur;
if (0 || x2792 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2792);
}
}
}
  rt_main_done();
  return 0;
}
