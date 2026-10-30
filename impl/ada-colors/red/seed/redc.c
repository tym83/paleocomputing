#include "paleo.h"
#include <math.h>
typedef struct Pc891 *P890;
typedef struct R893 R893;
typedef struct R893 *P892;
struct R893 {  rt_int kind; rt_int line; rt_int ival; P890 s; P890 prags;  };
typedef struct Pc895 *P894;
typedef struct A896 A896;
struct A896 { rt_int lo, hi, lo2, hi2; P892 *p; };
typedef struct R898 R898;
typedef struct R898 *P897;
struct R898 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P890 name; P890 tag; P890 prags; P897 labels; P897 a; P897 b; P897 c; P897 d; P897 e; P897 next;  };
typedef struct R900 R900;
typedef struct R900 *P899;
typedef struct R902 R902;
typedef struct R902 *P901;
struct R902 {  P890 s; P901 next;  };
struct R900 {  P890 lo; P890 hi; P890 lo2; P890 hi2; P890 slen; rt_int mlo; rt_int mhi; int hasm; P897 args; int dyn; rt_int lvl; P890 prec; P901 bnds;  };
typedef struct R904 R904;
typedef struct R904 *P903;
typedef struct R906 R906;
typedef struct R906 *P905;
struct R906 {  P890 name; P903 t; P899 c; P897 st; P905 next;  };
typedef struct R908 R908;
typedef struct R908 *P907;
typedef struct R910 R910;
typedef struct R910 *P909;
struct R910 {  P890 name; rt_int mode; P903 t; P899 c; P890 cfield; P909 next;  };
typedef struct Pc912 *P911;
typedef struct A913 A913;
struct A913 { rt_int lo, hi, lo2, hi2; P907 *p; };
typedef struct R915 R915;
typedef struct R915 *P914;
struct R915 {  rt_int depth; P897 imps; int all_imp; P914 next;  };
typedef struct R917 R917;
typedef struct R917 *P916;
struct R917 {  rt_int kind; rt_int i; P890 s; P903 t;  };
struct R908 {  rt_int kind; P890 name; P903 t; P899 c; P890 access; P890 cname; int ro_flag; rt_int mvalue; int hasmv; P897 st; P897 decl; P909 params; P903 result; rt_int depth; rt_int level; int byref; P907 members; P907 mnext; P897 binds; P907 insts; P911 env; P907 chain; P907 stack; P907 owner; P914 gctx; P916 mv; P901 reqs; int reqdone; P897 home; P897 capn; P907 tbinds;  };
typedef struct R919 R919;
typedef struct R919 *P918;
struct R919 {  P903 t; P918 next;  };
struct R904 {  rt_int kind; P890 name; P897 lits; P903 elem; P903 idx; P903 idx2; P899 elemcons; P897 elemst; P903 under; P897 tparams; P897 ocap; P905 fields; P903 target; P897 decl; P890 cname; int forward; int defined; int helpers; P907 initp; P907 finalp; P907 tpsyms; P907 gen; P907 gbinds; P903 next; rt_int ndim; P918 idxs; P907 assignp; P907 eqp; P907 ltp;  };
typedef struct R921 R921;
typedef struct R921 *P920;
struct R921 {  P901 head; P901 tail;  };
typedef struct R923 R923;
typedef struct R923 *P922;
struct R923 {  P890 match; P890 label; rt_int depth; P922 next;  };
typedef struct R925 R925;
typedef struct R925 *P924;
struct R925 {  P897 d; P924 next; rt_int depth;  };
typedef struct R927 R927;
typedef struct R927 *P926;
struct R927 {  P897 d; P890 w; P926 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P890 result_;
 P890 t_992;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_995;
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
 rstr r_996;
 rt_int i_997;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1001;
 rstr w_1002;
 rt_int i_1003;
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
 P920 result_;
 P920 b_1007;
};
struct f_put_27fr { int dummy;
 P920 b_25;
 rstr *s_26;
 P901 l_1009;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P920 b_30;
 P901 l_1011;
};
struct f_splice_34fr { int dummy;
 P920 a_32;
 P920 b_33;
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
 P892 t_1013;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1015;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1016;
 rt_int k_1017;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1021;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1022;
 P890 r_1023;
 int more_1024;
 rt_int k_1025;
 int go_1026;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1027;
 rt_int k_1028;
 rstr p_1029;
 int ok_1030;
 int known_1031;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1032;
 rt_int j_1033;
 rt_int n_1034;
 int c_1035;
 rstr w_1036;
 rt_int k_1037;
 rstr w_1041;
 rt_int k_1042;
 rstr two_1046;
};
struct f_read_source_58fr { int dummy;
 rstr line_1047;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P897 result_;
 P897 x_1048;
};
struct f_append_65fr { int dummy;
 P897 *head_62;
 P897 *tail_63;
 P897 x_64;
};
struct f_list_len_67fr { int dummy;
 P897 l_66;
 rt_int result_;
 rt_int n_1050;
 P897 p_1051;
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
 P890 result_;
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
 P890 result_;
};
struct f_name_node_90fr { int dummy;
 P897 result_;
 P897 x_1052;
};
struct f_id_list_91fr { int dummy;
 P897 result_;
 P897 head_1053;
 P897 tail_1054;
};
struct f_p_subtype_92fr { int dummy;
 P897 result_;
 rt_int line_1055;
 P897 x_1056;
 rstr w_1057;
 P897 head_1058;
 P897 tail_1059;
 P897 head_1060;
 P897 tail_1061;
 int more_1062;
 P897 names_1063;
 P897 st_1064;
 P897 cmp_1065;
 P897 head_1066;
 P897 tail_1067;
 int more_1068;
 P897 lit_1069;
};
struct f_constraint_list_93fr { int dummy;
 P897 result_;
 P897 head_1070;
 P897 tail_1071;
 int more_1072;
 rt_int line_1073;
 P897 lo_1074;
 P897 r_1075;
};
struct f_actual_params_94fr { int dummy;
 P897 result_;
 P897 head_1076;
 P897 tail_1077;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P897 result_;
 P897 head_1078;
 P897 tail_1079;
 int more_1080;
};
struct f_binop_102fr { int dummy;
 P890 op_98;
 P897 l_99;
 P897 r_100;
 rt_int line_101;
 P897 result_;
 P897 x_1081;
};
struct f_expr_103fr { int dummy;
 P897 result_;
 P897 l_1082;
 P890 op_1083;
 rt_int line_1084;
};
struct f_expr_and_104fr { int dummy;
 P897 result_;
 P897 l_1085;
 rt_int line_1086;
};
struct f_expr_not_105fr { int dummy;
 P897 result_;
 P897 x_1087;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P897 result_;
 P897 l_1088;
 P890 op_1089;
 rt_int line_1090;
};
struct f_expr_add_109fr { int dummy;
 P897 result_;
 P897 l_1091;
 P890 op_1092;
 rt_int line_1093;
};
struct f_expr_mul_110fr { int dummy;
 P897 result_;
 P897 l_1094;
 P890 op_1095;
 rt_int line_1096;
};
struct f_expr_pow_111fr { int dummy;
 P897 result_;
 P897 l_1097;
 rt_int line_1098;
};
struct f_expr_prefix_112fr { int dummy;
 P897 result_;
 P897 x_1099;
};
struct f_postfix_113fr { int dummy;
 P897 result_;
 P897 p_1100;
 rt_int line_1101;
 P897 x_1102;
 P897 head_1103;
 P897 tail_1104;
 int more_1105;
 P897 lo_1106;
 P897 r_1107;
 P897 x_1108;
 P897 x_1109;
 P897 x_1110;
};
struct f_primary_114fr { int dummy;
 P897 result_;
 rt_int line_1111;
 P897 x_1112;
 rt_int k_1113;
 rstr w_1114;
 P897 head_1115;
 P897 tail_1116;
 int more_1117;
};
struct f_constructor_item_115fr { int dummy;
 P897 result_;
 rt_int line_1118;
 P897 it_1119;
 P897 first_1120;
 P897 keys_1121;
 P897 ktail_1122;
 P897 lab_1123;
 rt_int save_1124;
 P897 more_1125;
 P897 tail2_1126;
 int ok_1127;
 int go_1128;
 P897 l2_1129;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P897 result_;
 P897 head_1130;
 P897 tail_1131;
 int stmts_1132;
 P897 after_1133;
 P897 x_1134;
};
struct f_body_element_118fr { int dummy;
 P897 result_;
 P897 x_1135;
 P890 pr_1136;
 P897 p_1137;
};
struct f_declaration_119fr { int dummy;
 P897 result_;
 rt_int line_1138;
 P897 head_1139;
 P897 tail_1140;
 P897 names_1141;
 P897 x_1142;
};
struct f_object_decl_120fr { int dummy;
 P897 result_;
 rt_int line_1143;
 int is_var_1144;
 P897 names_1145;
 P897 st_1146;
 P897 init_1147;
 P897 loc_1148;
 rt_int loc_kind_1149;
 P897 head_1150;
 P897 tail_1151;
 P897 x_1152;
};
struct f_abbrev_decl_121fr { int dummy;
 P897 result_;
 P897 x_1153;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1154;
};
struct f_type_decl_123fr { int dummy;
 P897 result_;
 rt_int line_1155;
 P890 name_1156;
 P897 params_1157;
 P897 x_1158;
 P897 tts_1159;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P897 result_;
 P897 head_1160;
 P897 tail_1161;
 int more_1162;
 rt_int mode_1163;
 P897 names_1164;
 P897 ntail_1165;
 P897 st_1166;
 P897 p_1167;
};
struct f_imports_list_128fr { int dummy;
 P897 owner_127;
 int result_;
 P897 head_1168;
 P897 tail_1169;
 int more_1170;
 int ro_1171;
 P897 x_1172;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P890 result_;
 P890 r_1173;
};
struct f_subprogram_decl_132fr { int dummy;
 P897 result_;
 rt_int line_1174;
 P897 x_1175;
 int is_abn_1176;
 int is_func_1177;
 int dummy_1178;
};
struct f_capsule_decl_133fr { int dummy;
 P897 result_;
 P897 x_1179;
 int dummy_1180;
 P897 head_1181;
 P897 tail_1182;
 int more_1183;
 P897 n_1184;
};
struct f_formal_tt_134fr { int dummy;
 P897 result_;
 P897 head_1185;
 P897 tail_1186;
 int more_1187;
};
struct f_generic_decl_135fr { int dummy;
 P897 result_;
 P897 x_1188;
 P897 head_1189;
 P897 tail_1190;
 int more_1191;
 P897 names_1192;
 rt_int kind_1193;
 P897 st_1194;
 P897 items_1195;
 P897 p_1196;
 P897 nhead_1197;
 P897 ntail_1198;
 P897 it_1199;
};
struct f_type_list_136fr { int dummy;
 P897 result_;
 P897 head_1200;
 P897 tail_1201;
 int more_1202;
 P897 n_1203;
};
struct f_task_decl_137fr { int dummy;
 P897 result_;
 P897 x_1204;
 int dummy_1205;
};
struct f_expose_decl_138fr { int dummy;
 P897 result_;
 P897 x_1206;
 P897 head_1207;
 P897 tail_1208;
 int more_1209;
 P897 n_1210;
 P897 head_1211;
 P897 tail_1212;
 int more_1213;
 P897 n_1214;
 P897 tgt_1215;
};
struct f_is_compound_kw_140fr { int dummy;
 rstr *w_139;
 int result_;
};
struct f_statement_141fr { int dummy;
 P897 result_;
 P897 labels_1216;
 P897 ltail_1217;
 P890 match_1218;
 P897 s_1219;
};
struct f_unlabeled_statement_142fr { int dummy;
 P897 result_;
 rt_int line_1220;
 P897 x_1221;
 P897 head_1222;
 P897 tail_1223;
 P897 invs_1224;
 P897 itail_1225;
 int more_1226;
 P897 target_1227;
};
struct f_arm_146fr { int dummy;
 P897 cond_143;
 P897 b_144;
 rt_int line_145;
 P897 result_;
 P897 x_1228;
};
struct f_if_stmt_147fr { int dummy;
 P897 result_;
 P897 x_1229;
 P897 head_1230;
 P897 tail_1231;
 P897 cond_1232;
 int go_1233;
};
struct f_case_stmt_148fr { int dummy;
 P897 result_;
 P897 x_1234;
 P897 head_1235;
 P897 tail_1236;
 P897 labs_1237;
 P897 ltail_1238;
 int more_1239;
 P897 l_1240;
};
struct f_repeat_stmt_149fr { int dummy;
 P897 result_;
 P897 x_1241;
};
struct f_guard_stmt_150fr { int dummy;
 P897 result_;
 P897 x_1242;
 P897 head_1243;
 P897 tail_1244;
 P897 h_1245;
};
struct f_program_151fr { int dummy;
 P897 result_;
 P897 head_1246;
 P897 tail_1247;
 P890 pr_1248;
 P897 u_1249;
};
struct f_hash_153fr { int dummy;
 rstr *s_152;
 rt_int result_;
 rt_int h_1250;
 rt_int i_1251;
};
struct f_lookup_155fr { int dummy;
 rstr *name_154;
 P907 result_;
 P907 y_1255;
};
struct f_lookup_decl_157fr { int dummy;
 P897 d_156;
 P907 result_;
 P907 y_1256;
};
struct f_define_160fr { int dummy;
 P907 y_158;
 rt_int line_159;
 rt_int h_1257;
 P907 z_1258;
};
struct f_overloadable_162fr { int dummy;
 P907 y_161;
 int result_;
};
struct f_same_tt_165fr { int dummy;
 P897 a_163;
 P897 b_164;
 int result_;
 P897 x_1259;
 P897 y_1260;
};
struct f_same_signature_168fr { int dummy;
 P909 a_166;
 P909 b_167;
 int result_;
 P909 x_1261;
 P909 y_1262;
};
struct f_open_scope_169fr { int dummy;
};
struct f_close_scope_170fr { int dummy;
};
struct f_new_sym_173fr { int dummy;
 rt_int kind_171;
 P890 name_172;
 P907 result_;
 P907 y_1263;
};
struct f_new_typ_175fr { int dummy;
 rt_int kind_174;
 P903 result_;
 P903 t_1265;
};
struct f_new_cons_176fr { int dummy;
 P899 result_;
 P899 c_1267;
};
struct f_scalar_kind_178fr { int dummy;
 P903 t_177;
 int result_;
};
struct f_bound_ctype_180fr { int dummy;
 P903 t_179;
 rstr result_;
};
struct f_cbound_183fr { int dummy;
 P899 c_181;
 rstr *b_182;
 rstr result_;
 P890 p_1269;
 rt_int i_1270;
};
struct f_clo_185fr { int dummy;
 P899 c_184;
 rstr result_;
};
struct f_chi_187fr { int dummy;
 P899 c_186;
 rstr result_;
};
struct f_sub_lo_190fr { int dummy;
 P903 t_188;
 P899 c_189;
 rstr result_;
};
struct f_sub_hi_193fr { int dummy;
 P903 t_191;
 P899 c_192;
 rstr result_;
};
struct f_raw_storage_196fr { int dummy;
 rstr *name_194;
 rstr *ct_195;
 rstr result_;
 rstr g_1274;
 rstr f_1275;
};
struct f_copy_cons_198fr { int dummy;
 P899 c_197;
 P899 result_;
 P899 r_1276;
};
struct f_freeze_201fr { int dummy;
 P899 c_199;
 P903 t_200;
 P899 result_;
 P899 r_1278;
 P890 saved_field_1279;
 rstr ct_1280;
 rstr la_1281;
 rstr lf_1282;
 rstr ha_1283;
 rstr hf_1284;
};
struct f_checked_205fr { int dummy;
 P903 t_202;
 P899 c_203;
 rstr *v_204;
 rstr result_;
};
struct f_same_lits_208fr { int dummy;
 P897 a_206;
 P897 b_207;
 int result_;
 P897 x_1285;
 P897 y_1286;
};
struct f_str_elem_210fr { int dummy;
 P903 t_209;
 P903 result_;
};
struct f_same_213fr { int dummy;
 P903 a_211;
 P903 b_212;
 int result_;
 P918 x_1287;
 P918 y_1288;
 P905 f_1289;
 P905 g_1290;
};
struct f_base_of_215fr { int dummy;
 P903 t_214;
 P903 result_;
};
struct f_base_cons_218fr { int dummy;
 P903 t_216;
 P899 c_217;
 P899 result_;
};
struct f_kind_name_220fr { int dummy;
 P903 t_219;
 rstr result_;
};
struct f_check_type_224fr { int dummy;
 P903 got_221;
 P903 want_222;
 rt_int line_223;
};
struct f_ctype_226fr { int dummy;
 P903 t_225;
 rstr result_;
};
struct f_struct_body_228fr { int dummy;
 P903 t_227;
 rstr result_;
};
struct f_field_decls_230fr { int dummy;
 P903 t_229;
 rstr result_;
 P905 f_1293;
 P890 s_1294;
};
struct f_declare_ctype_232fr { int dummy;
 P903 t_231;
 P903 u_1295;
 P897 p_1296;
 P890 fs_1297;
 rstr sn_1298;
 P899 pc_1299;
 P903 target_1300;
 P897 p_1301;
 P890 fs_1302;
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
 P903 t_237;
 rstr result_;
 P890 r_1303;
 rt_int k_1304;
};
struct f_acnt_241fr { int dummy;
 P903 t_239;
 rstr *base_240;
 rstr result_;
 P890 r_1308;
 rt_int k_1309;
};
struct f_cons_lo_244fr { int dummy;
 P899 c_242;
 rt_int k_243;
 P890 result_;
 P901 l_1313;
 rt_int i_1314;
};
struct f_cons_hi_247fr { int dummy;
 P899 c_245;
 rt_int k_246;
 P890 result_;
 P901 l_1318;
 rt_int i_1319;
};
struct f_idx_type_250fr { int dummy;
 P903 t_248;
 rt_int k_249;
 P903 result_;
 P918 l_1323;
 rt_int i_1324;
};
struct f_init_ascii_251fr { int dummy;
 P897 head_1328;
 P897 tail_1329;
 rt_int start_1330;
 rt_int i_1331;
 P897 lit_1335;
 P897 h2_1336;
 P897 t2_1337;
 P897 l1_1338;
 P897 l2_1339;
 P897 l3_1340;
};
struct f_lit_index_254fr { int dummy;
 P897 lits_252;
 rstr *name_253;
 rt_int result_;
 rt_int i_1341;
 P897 l_1342;
};
struct f_resolve_subtype_257fr { int dummy;
 P897 st_255;
 P899 *c_256;
 P899 c_256v;
 P903 result_;
 P903 t_1343;
 int ok_1344;
 P903 dummy_1345;
 P903 et_1347;
 P899 ec_1348;
 P903 et_1349;
 P897 ix_1350;
 rt_int k_1351;
 P918 tail_1352;
 P901 btail_1353;
 P899 ic_1354;
 P903 it_1355;
 P890 lo_1356;
 P890 hi_1357;
 P918 tl_1358;
 P901 l1_1360;
 P901 l2_1361;
 P899 ec_1364;
 P897 comp_1365;
 P905 tail_1366;
 P899 cc_1367;
 P905 f_1368;
 P897 lits_1370;
 P897 ltail_1371;
 P905 f_1372;
 P897 l_1373;
 P897 gt_1374;
 P899 ec_1375;
 P890 base_1376;
};
struct f_float_lit_259fr { int dummy;
 P897 e_258;
 int result_;
};
struct f_tag_constraint_263fr { int dummy;
 P903 t_260;
 P897 e_261;
 P899 c_262;
 P903 dummy_1377;
};
struct f_named_subtype_266fr { int dummy;
 P897 st_264;
 P899 *c_265;
 P899 c_265v;
 P903 result_;
 P903 t_1378;
 P907 y_1379;
 rstr name_1380;
 P907 binds_1381;
 P911 saved_env_1382;
 rt_int saved_gdepth_1383;
 P907 nb_1384;
};
struct f_invoke_abbrev_270fr { int dummy;
 P907 y_267;
 P897 st_268;
 P899 *c_269;
 P899 c_269v;
 P903 result_;
 P897 p_1385;
 P897 a_1386;
 P903 t_1387;
 P907 z_1388;
 P899 pc_1389;
 P903 at_1390;
 int ok_1391;
};
struct f_apply_constraint_275fr { int dummy;
 P903 t_271;
 P897 args_272;
 P899 c_273;
 rt_int line_274;
 P903 dummy_1392;
 int ok_1393;
};
struct f_value_subtype_279fr { int dummy;
 P897 e_276;
 P899 *c_277;
 P899 c_277v;
 P890 *base_278;
 P890 base_278v;
 P903 result_;
 P903 t_1394;
 P899 c0_1395;
 int ro_1396;
 rt_int k_1397;
 rstr lo_1401;
 rstr hi_1402;
 P901 l1_1403;
 P901 l2_1404;
 P897 p_1407;
 P897 head_1408;
 P897 tail_1409;
 P897 sel_1410;
};
struct f_reverse_pairs_281fr { int dummy;
 P901 l_280;
 P901 result_;
 P901 r_1411;
 P901 p_1412;
 P901 a_1413;
 P901 b_1414;
};
struct f_inquiry_284fr { int dummy;
 P897 st_282;
 P899 *c_283;
 P899 c_283v;
 P903 result_;
 P890 base_1415;
 P903 t_1416;
 rstr name_1417;
 P897 sub_1418;
 P899 c2_1419;
 rt_int k_1420;
 int ok_1421;
 P899 ac_1422;
};
struct f_as_subtype_286fr { int dummy;
 P897 e_285;
 P897 result_;
 P897 st_1423;
 rstr name_1424;
 P907 y_1425;
};
struct f_tt_subtype_291fr { int dummy;
 P890 name_287;
 P897 tt_288;
 P897 args_289;
 rt_int line_290;
 P897 result_;
 P897 st_1426;
};
struct f_type_name_293fr { int dummy;
 rstr *name_292;
 int result_;
 P907 y_1427;
};
struct f_empty_set_295fr { int dummy;
 P903 t_294;
 rstr result_;
};
struct f_opened_297fr { int dummy;
 P903 t_296;
 int result_;
 P924 c_1428;
};
struct f_replace_all_301fr { int dummy;
 rstr *s_298;
 rstr *pat_299;
 rstr *r_300;
 rstr result_;
 rt_int i_1429;
};
struct f_subst_303fr { int dummy;
 rstr *s_302;
 rstr result_;
 P901 l_1430;
 P890 r_1431;
};
struct f_new_type_307fr { int dummy;
 P907 y_304;
 P897 st_305;
 P899 *c_306;
 P899 c_306v;
 P903 result_;
 P897 d_1432;
 P897 p_1433;
 P899 uc_1434;
 P907 z_1435;
 P899 zc_1436;
};
struct f_init_storage_311fr { int dummy;
 rstr *lval_308;
 P903 t_309;
 P899 c_310;
};
struct f_init_call_314fr { int dummy;
 P907 y_312;
 rstr *lval_313;
 rstr result_;
 P890 link_1437;
 rt_int i_1438;
};
struct f_needs_fin_316fr { int dummy;
 P903 t_315;
 int result_;
 P905 f_1442;
};
struct f_fin_code_319fr { int dummy;
 rstr *lval_317;
 P903 t_318;
 rstr result_;
 P890 r_1443;
 rstr i_1444;
 P905 f_1445;
 P905 f_1446;
 rt_int i_1447;
};
struct f_tparam_type_322fr { int dummy;
 P903 t_320;
 rstr *name_321;
 P903 result_;
 P907 z_1448;
};
struct f_make_storage_326fr { int dummy;
 rstr *lval_323;
 P903 t_324;
 P899 c_325;
 P897 p_1449;
 P897 a_1450;
 P899 uc_1451;
 P903 ut_1452;
 P903 at_1453;
 P903 pt_1454;
 rstr v_1455;
 P901 saved_1456;
 P901 l1_1457;
 P901 l2_1458;
 rt_int k_1461;
 rstr i_1465;
 P905 f_1466;
 P905 f_1467;
 rt_int i_1468;
};
struct f_uninit_value_328fr { int dummy;
 P903 t_327;
 rstr result_;
};
struct f_init_chk_331fr { int dummy;
 P903 t_329;
 rstr *v_330;
 rstr result_;
 P903 b_1472;
};
struct f_manifest_334fr { int dummy;
 P897 e_332;
 int *ok_333;
 int ok_333v;
 rt_int result_;
 P916 v_1473;
};
struct f_mk_mval_337fr { int dummy;
 rt_int kind_335;
 rt_int i_336;
 P916 result_;
 P916 v_1474;
};
struct f_ipow_340fr { int dummy;
 rt_int a_338;
 rt_int b_339;
 rt_int result_;
 rt_int r_1476;
 rt_int i_1477;
};
struct f_meval_343fr { int dummy;
 P897 e_341;
 int *ok_342;
 int ok_342v;
 P916 result_;
 P916 a_1481;
 P916 b_1482;
 int ok2_1483;
 P890 op_1484;
 P907 y_1485;
 P916 r_1486;
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
 P916 v_348;
 rstr result_;
};
struct f_ascii_char_351fr { int dummy;
 rt_int i_350;
 int result_;
 rstr printable_1487;
};
struct f_user_defined_353fr { int dummy;
 rstr *op_352;
 int result_;
 P907 y_1488;
};
struct f_mcopy_355fr { int dummy;
 P903 t_354;
 rstr result_;
 rstr ct_1489;
 rstr name_1490;
 P901 l_1491;
};
struct f_composite_357fr { int dummy;
 P903 t_356;
 int result_;
};
struct f_user_call2_363fr { int dummy;
 P907 y_358;
 rstr *a_359;
 int lv_a_360;
 rstr *b_361;
 int lv_b_362;
 rstr result_;
 P890 args_1493;
 rt_int i_1494;
};
struct f_user_arg_367fr { int dummy;
 P909 pm_364;
 rstr *v_365;
 int lv_366;
 rstr result_;
 rstr ct_1498;
};
struct f_top_level_369fr { int dummy;
 P907 y_368;
 int result_;
};
struct f_assign_code_374fr { int dummy;
 rstr *lval_370;
 P903 t_371;
 rstr *v_372;
 P899 c_373;
 rstr result_;
};
struct f_copy_code_377fr { int dummy;
 P903 t_375;
 rstr *v_376;
 rstr result_;
};
struct f_eq_code_381fr { int dummy;
 P903 t_378;
 rstr *a_379;
 rstr *b_380;
 rstr result_;
};
struct f_elem_assign_385fr { int dummy;
 rstr *lval_382;
 P903 t_383;
 rstr *v_384;
 rstr result_;
};
struct f_seen_name_388fr { int dummy;
 P901 l_386;
 rstr *s_387;
 int result_;
 P901 p_1499;
};
struct f_emit_helpers_389fr { int dummy;
 P903 order_1500;
 P903 t_1501;
 P901 done_1502;
 P901 l_1503;
 rstr c_1504;
};
struct f_helper_bodies_391fr { int dummy;
 P903 t_390;
 rstr c_1506;
 P920 b_1507;
 P903 e_1508;
 P890 sizes_1509;
 P890 bounds_1510;
 rt_int k_1511;
 rstr l_1515;
 rstr h_1516;
 P901 saved_1517;
 P897 p_1518;
 P901 l1_1519;
 P901 l2_1520;
 P905 f_1523;
 rt_int i_1524;
 P890 cases_as_1525;
 P890 cases_cp_1526;
 P890 cases_eq_1527;
 rstr fn_1528;
 P905 f_1529;
 P890 conds_1530;
 rstr fn_1531;
 rstr fn_1532;
};
struct f_declare_body_393fr { int dummy;
 P897 elems_392;
 P897 e_1533;
 P907 g_1534;
 P907 y_1535;
 P907 y_1536;
 P907 y_1537;
 P903 t_1538;
 P907 y_1539;
 P907 y_1540;
 P911 snap_1541;
 rt_int i_1545;
 P907 g_1549;
 P907 y_1550;
 P907 y_1551;
};
struct f_manifest_const_395fr { int dummy;
 P897 d_394;
 int ok_1552;
 P916 v_1553;
 P907 y_1554;
 P903 t_1555;
 P890 ctext_1556;
 P920 saved_1557;
};
struct f_exported_399fr { int dummy;
 P897 d_396;
 rstr *name_397;
 int *ro_398;
 int ro_398v;
 int result_;
 P897 p_1560;
};
struct f_copy_sym_401fr { int dummy;
 P907 y_400;
 P907 result_;
 P907 z_1561;
};
struct f_gen_capsule_403fr { int dummy;
 P897 d_402;
 P907 y_1563;
 P890 saved_1564;
 P897 p_1565;
 P909 tail_1566;
 P909 pm_1567;
};
struct f_capsule_params_407fr { int dummy;
 P897 d_404;
 P897 args_405;
 rt_int line_406;
 P897 p_1569;
 P897 a_1570;
 P903 t_1571;
 P903 vt_1572;
 P899 c_1573;
 P890 lv_1574;
 P899 lc_1575;
 int ro_1576;
 P907 y_1577;
 rstr f_1578;
 rstr g_1579;
 P907 y_1580;
 rstr v_1581;
 rstr access_1582;
};
struct f_elaborate_capsule_412fr { int dummy;
 P897 d_408;
 P907 y_409;
 P897 args_410;
 P897 owner_411;
 P924 cr_1583;
 P914 ctx_1584;
 P922 saved_gotos_1585;
 P907 m_1586;
 P897 p_1587;
 int ro_1588;
 P926 w_1591;
 P907 z_1593;
};
struct f_exports_op_415fr { int dummy;
 P897 d_413;
 rstr *op_414;
 int result_;
 P897 p_1594;
};
struct f_renamed_418fr { int dummy;
 P897 d_416;
 P907 z_417;
 P890 result_;
 P897 r_1595;
};
struct f_pick_capsule_420fr { int dummy;
 P897 d_419;
 P907 result_;
 P907 y_1596;
 P907 first_1597;
 P907 fit_1598;
 rt_int n_1599;
};
struct f_capsule_instance_423fr { int dummy;
 P907 g_421;
 P897 d_422;
 P907 result_;
 P897 gd_1600;
 P897 pat_1601;
 P907 binds_1602;
 P907 inst_1603;
 P911 saved_env_1604;
 rt_int saved_gdepth_1605;
 P907 b_1606;
};
struct f_gen_expose_425fr { int dummy;
 P897 d_424;
 P907 y_1607;
 P907 m_1608;
 P897 p_1609;
 P897 r_1610;
 P907 inst_1611;
 int found_1612;
 P907 z_1613;
 int found_1614;
 P907 z_1615;
};
struct f_finish_ptr_427fr { int dummy;
 P903 t_426;
 P897 d_1616;
 P897 p_1617;
 P899 c_1618;
 rstr dummy_1619;
 rt_int pass_1620;
 P907 y_1624;
 P899 pc_1625;
};
struct f_ptr_args_429fr { int dummy;
 P899 c_428;
 P897 result_;
};
struct f_bind_ptr_params_434fr { int dummy;
 P897 formals_430;
 P897 actuals_431;
 rstr *cell_432;
 rt_int line_433;
 P897 p_1626;
 P897 a_1627;
 P903 vt_1628;
 P899 pc_1629;
 P907 y_1630;
 rstr v_1631;
 rstr pv_1632;
};
struct f_alloc_cell_439fr { int dummy;
 P897 s_435;
 rstr *lv_436;
 P903 t_437;
 P899 c_438;
 P897 d_1633;
 P899 tc_1634;
 P903 vt_1635;
 rstr pt_1636;
 rstr cell_1637;
 rstr fn_1638;
 rstr v_1639;
};
struct f_freeze_args_443fr { int dummy;
 P899 c_440;
 P903 t_441;
 rt_int line_442;
 P899 result_;
 P899 r_1640;
 P897 p_1641;
 P897 a_1642;
 P897 head_1643;
 P897 tail_1644;
 P890 saved_1645;
 P899 pc_1646;
 P903 vt_1647;
 P903 pt_1648;
 rstr nm_1649;
 P907 y_1650;
 P897 n_1651;
 rstr v_1652;
 rstr access_1653;
};
struct f_ptr_subtype_check_447fr { int dummy;
 P903 t_444;
 P899 c_445;
 P897 src_446;
 P890 lv_1654;
 P903 st_1655;
 P899 sc_1656;
 int ro_1657;
 P890 cond_1658;
 P897 a_1659;
 P897 b_1660;
 P903 at_1661;
 P903 bt_1662;
 rstr x_1663;
 rstr y_1664;
};
struct f_normal_function_450fr { int dummy;
 P897 d_448;
 P907 y_449;
 P909 p_1665;
 P897 imp_1666;
 int ro_1667;
 P907 z_1668;
};
struct f_declare_subprogram_452fr { int dummy;
 P897 d_451;
};
struct f_build_subprogram_454fr { int dummy;
 P897 d_453;
 P907 result_;
 P907 y_1669;
 P897 p_1670;
 P909 tail_1671;
 P909 pm_1672;
 P899 rc_1674;
 P909 pm_1675;
 P920 saved_1676;
 P907 z_1677;
};
struct f_has_pragmat_457fr { int dummy;
 P890 pr_455;
 rstr *p_456;
 int result_;
 rt_int i_1678;
};
struct f_suppressing_459fr { int dummy;
 P890 pr_458;
 P890 result_;
 P890 r_1682;
 rt_int i_1683;
 rt_int j_1684;
 rt_int k_1685;
};
struct f_suppressed_461fr { int dummy;
 rstr *x_460;
 int result_;
 rstr w_1686;
 rt_int i_1687;
};
struct f_element_463fr { int dummy;
 P897 e_462;
 P890 saved_1691;
};
struct f_element1_465fr { int dummy;
 P897 e_464;
 rt_int k_1692;
 P907 g_1693;
 rt_int i_1697;
 P903 t_1701;
 rstr c_1702;
};
struct f_storage_468fr { int dummy;
 rstr *name_466;
 P903 t_467;
 rstr result_;
 rstr g_1703;
 rstr f_1704;
};
struct f_bind_471fr { int dummy;
 P907 y_469;
 rstr *access_470;
};
struct f_var_decl_473fr { int dummy;
 P897 d_472;
 P899 c_1705;
 P903 t_1706;
 P907 y_1707;
 rstr access_1708;
 P903 it_1709;
 rstr n_1710;
 P903 vt_1711;
 rstr v_1712;
};
struct f_open_fin_475fr { int dummy;
 rstr *fc_474;
 rstr f_1713;
 P901 l_1714;
};
struct f_close_fins_477fr { int dummy;
 P901 saved_476;
};
struct f_const_decl_479fr { int dummy;
 P897 d_478;
 P899 c_1716;
 P903 t_1717;
 P903 vt_1718;
 P907 y_1719;
 int ok_1720;
 rstr v_1721;
 rstr access_1722;
};
struct f_subprogram_481fr { int dummy;
 P897 d_480;
};
struct f_gen_subprogram_484fr { int dummy;
 P897 d_482;
 P907 y_483;
 P920 saved_code_1723;
 P920 saved_fields_1724;
 int saved_in_1725;
 P907 saved_sym_1726;
 P922 saved_exits_1727;
 P922 saved_gotos_1728;
 rt_int saved_frames_1729;
 P890 args_1730;
 P909 pm_1731;
 P901 saved_handlers_1732;
 P901 saved_cleanups_1733;
 P914 ctx_1734;
 P890 head_1735;
 P890 frame_1736;
 P890 parent_1737;
 P890 copy_back_1738;
 P890 pfin_1739;
 P901 saved_fins_1740;
 P899 saved_rc_1741;
 P890 saved_ret_1742;
 P890 saved_rflag_1743;
 P897 pn_1744;
 P890 nonrec_end_1745;
 int has_pfin_1746;
 rstr ct_1748;
 rstr f_1749;
 P907 p_1750;
 P899 pc_1751;
 P899 ac_1752;
 P899 fc_1753;
 P903 ft_1754;
 rstr bt_1755;
 P899 rc_1756;
 P903 rt_1757;
 rstr g_1758;
 P890 leave_1759;
 rstr xu_1760;
};
struct f_waits_of_486fr { int dummy;
 P897 d_485;
 rstr result_;
 P926 w_1761;
};
struct f_task_waits_488fr { int dummy;
 P897 elems_487;
 rstr result_;
 P897 e_1762;
 P890 r_1763;
};
struct f_await_tasks_490fr { int dummy;
 P897 elems_489;
 rstr w_1764;
};
struct f_capsule_elements_492fr { int dummy;
 P897 elems_491;
 P897 e_1765;
};
struct f_declare_labels_494fr { int dummy;
 P897 elems_493;
 P897 e_1766;
 P897 l_1767;
 P922 x_1768;
};
struct f_start_labels_495fr { int dummy;
 P922 x_1770;
};
struct f_goto_label_497fr { int dummy;
 rstr *name_496;
 P922 result_;
 P922 x_1771;
};
struct f_has_return_499fr { int dummy;
 P897 e_498;
 int result_;
 P897 x_1772;
};
struct f_capsule_body_501fr { int dummy;
 P897 elems_500;
 P890 saved_ret_1773;
 P890 saved_flag_1774;
 rt_int saved_frames_1775;
 P897 e_1776;
 int stmt_1777;
};
struct f_body_elements_503fr { int dummy;
 P897 elems_502;
};
struct f_gen_body_505fr { int dummy;
 P897 elems_504;
 P901 saved_1778;
 P922 saved_gotos_1779;
 rstr xu_1780;
};
struct f_open_unhandled_507fr { int dummy;
 P897 elems_506;
 rstr result_;
 P897 e_1781;
 P890 conds_1782;
 rstr f_1783;
};
struct f_close_unhandled_509fr { int dummy;
 rstr *xu_508;
 rt_int i_1784;
 rstr f_1785;
};
struct f_pop_frames_511fr { int dummy;
 rt_int upto_510;
 rt_int i_1786;
 P901 c_1787;
};
struct f_push_cleanup_513fr { int dummy;
 rstr *s_512;
 P901 c_1788;
};
struct f_pop_cleanup_514fr { int dummy;
};
struct f_gen_statement_516fr { int dummy;
 P897 s_515;
 P890 label_1790;
 P897 gl_1791;
 P922 x_1792;
 P922 x_1795;
};
struct f_st_assign_518fr { int dummy;
 P897 s_517;
 P890 lv_1796;
 P903 t_1797;
 P903 vt_1798;
 P899 c_1799;
 int ro_1800;
 rstr lo_1801;
 rstr hi_1802;
 rstr v_1803;
 rstr lo_1804;
 rstr hi_1805;
 rstr v_1806;
 rstr v_1807;
};
struct f_st_call_520fr { int dummy;
 P897 s_519;
 P897 c_1808;
 P903 t_1809;
 P897 x_1810;
};
struct f_st_if_522fr { int dummy;
 P897 s_521;
 P897 a_1811;
 int first_1812;
 P903 t_1813;
 int taken_1814;
 int ok_1815;
 P916 mv_1816;
 rstr c_1817;
};
struct f_manifest_case_524fr { int dummy;
 P897 s_523;
 int result_;
 int ok_1818;
 P916 sv_1819;
 P897 a_1820;
 P897 lab_1821;
 P916 lo_1822;
 P916 hi_1823;
};
struct f_st_case_526fr { int dummy;
 P897 s_525;
 P903 st_1824;
 P903 vt_1825;
 int first_1826;
 P897 a_1827;
};
struct f_st_case2_528fr { int dummy;
 P897 s_527;
 P903 st_1828;
 P903 vt_1829;
 int first_1830;
 P897 a_1831;
 rstr sel_1832;
 rstr tmp_1833;
 P897 lab_1834;
 P890 conds_1835;
 rstr v_1836;
 rstr lo_1837;
 rstr hi_1838;
 rstr lo_1839;
 rstr hi_1840;
};
struct f_user_for_532fr { int dummy;
 P897 s_529;
 P903 t_530;
 P899 c_531;
 P907 y_1841;
 P901 saved_1842;
 P897 p_1843;
 P897 iv_1844;
 P903 st_1845;
 rstr access_1846;
 P890 uv_1847;
 P901 l1_1848;
 P901 l2_1849;
 rstr lo_1852;
 rstr hi_1853;
};
struct f_st_repeat_534fr { int dummy;
 P897 s_533;
 P903 t_1854;
 P899 c_1855;
 rstr cond_1856;
 rstr access_1857;
 rstr lov_1858;
 rstr hiv_1859;
 rstr it_1860;
 P907 y_1861;
};
struct f_st_exit_536fr { int dummy;
 P897 s_535;
 P922 x_1862;
};
struct f_st_return_538fr { int dummy;
 P897 s_537;
 P903 vt_1863;
 rstr v_1864;
};
struct f_result_checked_542fr { int dummy;
 P903 t_539;
 P899 c_540;
 rstr *v_541;
 rstr result_;
};
struct f_exc_id_545fr { int dummy;
 rstr *name_543;
 rt_int line_544;
 rstr result_;
 P907 y_1865;
};
struct f_st_guard_547fr { int dummy;
 P897 s_546;
 P897 h_1866;
 int first_1867;
 P901 hv_1868;
 rstr f_1869;
 rstr x_1870;
 P897 h1_1872;
 P901 seen_1873;
 P897 n1_1874;
 P897 n_1875;
 P890 conds_1876;
};
struct f_st_alloc_549fr { int dummy;
 P897 s_548;
 P890 lv_1877;
 P903 t_1878;
 P903 target_1879;
 P903 vt_1880;
 P899 c_1881;
 P899 tc_1882;
 int ro_1883;
 P897 d_1884;
 P897 p_1885;
 P897 a_1886;
 rstr tcn_1887;
 rstr cell_1888;
 rstr fn_1889;
 rstr v_1890;
};
struct f_act_ref_551fr { int dummy;
 P897 e_550;
 rstr result_;
 P890 lv_1891;
 P903 t_1892;
 P899 c_1893;
 int ro_1894;
 rstr v_1895;
};
struct f_st_create_553fr { int dummy;
 P897 s_552;
 P907 y_1896;
 P909 pm_1897;
 P897 a_1898;
 P890 lv_1899;
 P903 lt_1900;
 P903 vt_1901;
 P899 lc_1902;
 int ro_1903;
 P903 at_1904;
 P899 ac_1905;
 int aro_1906;
 P890 act_1907;
 rstr nf_1908;
 P890 link_1909;
 rt_int i_1910;
 rstr v_1914;
};
struct f_hidden_var_557fr { int dummy;
 rstr *name_554;
 P903 t_555;
 rstr *place_556;
 P907 y_1915;
};
struct f_user_create_563fr { int dummy;
 P897 s_558;
 P907 y_559;
 rstr *uv_560;
 P903 ut_561;
 rstr *nf_562;
 P903 t_1916;
 P920 saved_1917;
 P920 hook_1918;
 P897 un_1919;
 rstr hn_1920;
 rstr aa_1921;
 rstr uname_1922;
 rstr aname_1923;
 P897 start_1924;
 P897 an_1925;
};
struct f_wait_alt_568fr { int dummy;
 P897 inv_564;
 rstr *arr_565;
 rt_int i_566;
 int mixed_567;
 rstr result_;
 P890 lv_1926;
 P903 t_1927;
 P903 vt_1928;
 P899 c_1929;
 int ro_1930;
 P897 fn_1931;
 P897 args_1932;
 rstr slot_1933;
 P890 dv_1934;
 P903 dt_1935;
 rstr tmp_1936;
 rstr v_1937;
 rstr v_1938;
};
struct f_builtin_wait_570fr { int dummy;
 P897 inv_569;
 int result_;
 P890 lv_1939;
 P903 t_1940;
 P899 c_1941;
 int ro_1942;
 P920 saved_1943;
 int ok_1944;
};
struct f_wait_op_575fr { int dummy;
 P897 inv_571;
 rstr *op_572;
 rstr *q_573;
 int is_stmt_574;
 rstr result_;
 P897 x_1947;
 P897 f_1948;
 P897 qn_1949;
 P903 t_1950;
 rstr r_1951;
};
struct f_user_wait_580fr { int dummy;
 P897 s_576;
 rstr *arr_577;
 rstr *w_578;
 rt_int n_579;
 P897 a_1952;
 rt_int i_1953;
 P890 tests_1954;
 P890 revokes_1955;
 P897 inv_1956;
 P897 st_1957;
 P899 c_1958;
 P903 qt_1959;
 rstr qname_1960;
 P907 y_1961;
 rstr access_1962;
};
struct f_st_wait_582fr { int dummy;
 P897 s_581;
 P897 a_1963;
 rt_int n_1964;
 int first_1965;
 P920 inits_1966;
 int user_1967;
 rstr arr_1968;
 rstr w_1969;
 P897 inv_1970;
 P897 inv_1971;
 P890 conds_1972;
 rt_int i_1973;
};
struct f_call_node_586fr { int dummy;
 rstr *name_583;
 P897 arg_584;
 rt_int line_585;
 P897 result_;
 P897 x_1977;
 P897 f_1978;
};
struct f_user_region_588fr { int dummy;
 P897 s_587;
 P903 t_1979;
 rstr f_1980;
 rstr lock_1981;
 rstr unlock_1982;
};
struct f_st_region_590fr { int dummy;
 P897 s_589;
 P890 lv_1983;
 P903 t_1984;
 P899 c_1985;
 int ro_1986;
 rstr lk_1987;
 rstr f_1988;
};
struct f_gparam_593fr { int dummy;
 P897 g_591;
 rstr *name_592;
 P897 result_;
 P897 p_1989;
};
struct f_bind_sym_595fr { int dummy;
 P897 p_594;
 P907 result_;
 P907 y_1990;
};
struct f_same_binds_598fr { int dummy;
 P907 a_596;
 P907 b_597;
 int result_;
 P907 x_1991;
 P907 y_1992;
};
struct f_same_binding_601fr { int dummy;
 P907 a_599;
 P907 b_600;
 int result_;
};
struct f_tt_binds_606fr { int dummy;
 P897 gd_602;
 P897 formals_603;
 P897 actuals_604;
 rt_int line_605;
 P907 result_;
 P897 f_1993;
 P897 a_1994;
 P907 binds_1995;
 P899 c_1996;
 P903 at_1997;
 P897 p_1998;
 P907 b_1999;
 P897 st_2000;
 int ok_2001;
 int ok_2002;
};
struct f_type_allowed_610fr { int dummy;
 P903 t_607;
 P897 items_608;
 P907 binds_609;
 int result_;
 P897 it_2003;
 P903 b_2004;
 rstr w_2005;
 P899 c_2006;
};
struct f_resolve_in_binds_614fr { int dummy;
 P897 st_611;
 P907 binds_612;
 P899 *c_613;
 P899 c_613v;
 P903 result_;
 P907 b_2007;
 P903 t_2008;
 P907 z_2009;
};
struct f_pick_operation_621fr { int dummy;
 rt_int kind_615;
 rstr *name_616;
 P897 sig_617;
 P897 res_618;
 P907 binds_619;
 rt_int line_620;
 P907 result_;
 P907 y_2010;
 P899 c_2011;
 rt_int want_2012;
 rt_int pass_2013;
 int ok_2017;
 P897 s_2018;
 P909 pm_2019;
};
struct f_kind_word_623fr { int dummy;
 rt_int kind_622;
 rstr result_;
};
struct f_need_binds_627fr { int dummy;
 P897 gd_624;
 P907 binds_625;
 rt_int line_626;
 P907 result_;
 P897 it_2020;
 P907 r_2021;
 int found_2022;
 P907 y_2023;
 P907 z_2024;
};
struct f_generic_use_629fr { int dummy;
 P897 st_628;
 int result_;
};
struct f_infer_from_634fr { int dummy;
 P897 gd_630;
 P897 pat_631;
 P903 t_632;
 P907 known_633;
 P907 result_;
 P907 binds_2025;
 P897 e_2026;
 P897 tp_2027;
 P890 nm_2028;
 P907 q_2029;
 int have_2030;
 P907 g_2031;
 P907 b_2032;
};
struct f_instantiate_type_640fr { int dummy;
 P907 g_635;
 P897 tt_636;
 P897 args_637;
 P899 *c_638;
 P899 c_638v;
 rt_int line_639;
 P903 result_;
 P897 gd_2033;
 P897 pat_2034;
 P907 binds_2035;
 P907 inst_2036;
 P903 t_2037;
 P924 saved_caps_2038;
 P911 saved_env_2039;
 rt_int saved_gdepth_2040;
 P907 b_2041;
 P907 y_2042;
 P899 yc_2043;
};
struct f_instantiate_645fr { int dummy;
 P907 g_641;
 P897 tt_642;
 P897 args_643;
 rt_int line_644;
 P907 result_;
 P897 gd_2045;
 P897 pat_2046;
 P907 binds_2047;
 P897 f_2048;
 P897 a_2049;
 P897 fp_2050;
 P907 inst_2051;
 P903 at_2052;
 P899 c_2053;
 P914 saved_fctx_2054;
 int saved_in_2055;
 rt_int saved_level_2056;
 P907 saved_sym_2057;
 P920 saved_code_2058;
 P911 saved_env_2059;
 rt_int saved_gdepth_2060;
 rstr v_2061;
 int known_2062;
 P907 q_2063;
 P907 b_2064;
 rstr v_2065;
 P907 b_2066;
};
struct f_access_of_647fr { int dummy;
 P907 y_646;
 rstr result_;
 P890 p_2067;
 rt_int i_2068;
};
struct f_import_of_650fr { int dummy;
 P897 l_648;
 rstr *name_649;
 P897 result_;
 P897 p_2072;
};
struct f_check_import_653fr { int dummy;
 P907 y_651;
 rt_int line_652;
 int result_;
 P914 c_2073;
 int ro_2074;
 P897 imp_2075;
};
struct f_c_ident_655fr { int dummy;
 rstr *s_654;
 rstr result_;
 P890 r_2076;
 rt_int i_2077;
};
struct f_cell_deref_658fr { int dummy;
 P903 t_656;
 rstr *p_657;
 rstr result_;
};
struct f_deref_661fr { int dummy;
 rstr *base_659;
 P903 t_660;
 rstr result_;
};
struct f_is_lvalue_663fr { int dummy;
 P897 e_662;
 int result_;
 P907 y_2081;
};
struct f_lvalue_669fr { int dummy;
 P897 e_664;
 P890 *code_665;
 P890 code_665v;
 P903 *t_666;
 P903 t_666v;
 P899 *c_667;
 P899 c_667v;
 int *ro_668;
 int ro_668v;
 P890 base_2082;
 P903 bt_2083;
 P899 bc_2084;
 P907 y_2085;
};
struct f_select_on_677fr { int dummy;
 rstr *base_670;
 P903 bt_671;
 P897 e_672;
 int *ro_673;
 P890 *code_674;
 P890 code_674v;
 P903 *t_675;
 P903 t_675v;
 P899 *c_676;
 P899 c_676v;
 P897 p_2086;
 P899 pc_2087;
 P897 p_2088;
 P905 f_2089;
 rt_int i_2090;
 rstr fn_2091;
 P905 f_2092;
};
struct f_has_call_679fr { int dummy;
 rstr *s_678;
 int result_;
 rt_int i_2093;
};
struct f_need_slice_681fr { int dummy;
 P903 t_680;
 rstr c_2097;
 rstr n_2098;
 P901 l_2099;
};
struct f_ix_685fr { int dummy;
 rstr *i_682;
 rstr *lo_683;
 rstr *hi_684;
 rstr result_;
};
struct f_index_on_694fr { int dummy;
 rstr *base_686;
 P903 bt_687;
 P897 e_688;
 int *ro_689;
 int lv_690;
 P890 *code_691;
 P890 code_691v;
 P903 *t_692;
 P903 t_692v;
 P899 *c_693;
 P899 c_693v;
 P897 a_2101;
 P903 it_2102;
 rstr lo_2103;
 rstr hi_2104;
 P890 off_2105;
 rt_int k_2106;
 P890 b_2107;
 P890 pre_2108;
 rstr i_2109;
 rstr l_2110;
 rstr h_2111;
 rstr lo_2112;
 rstr hi_2113;
 rstr i_2114;
};
struct f_own_attribute_696fr { int dummy;
 P897 e_695;
 int result_;
 P920 saved_2115;
 P903 bt_2116;
 int ok_2117;
 rstr base_2120;
 P897 p_2121;
 P905 f_2122;
};
struct f_gexpr_700fr { int dummy;
 P897 e_697;
 P903 want_698;
 P903 *t_699;
 P903 t_699v;
 rstr result_;
 rt_int k_2123;
 P890 code_2124;
 P899 c_2125;
 int ro_2126;
 P903 bt_2127;
 P899 ctx_2128;
 P890 r_2129;
 rt_int i_2130;
 rt_int pos_2134;
 rt_int i_2135;
 P907 y_2136;
 int ro_2137;
 P897 call_2138;
 P897 fname_2139;
 rstr a_2140;
 rstr a_2141;
 rstr a_2142;
 P897 nm_2143;
 P907 y_2144;
 rstr base_2145;
 rstr base_2146;
};
struct f_resolved_703fr { int dummy;
 P897 e_701;
 P903 *t_702;
 P903 t_702v;
 rstr result_;
 P899 c_2147;
 P903 vt_2148;
 P907 y_2149;
 P897 tt_2150;
 P897 call_2151;
 P897 f_2152;
 P897 fname_2153;
 rstr v_2154;
};
struct f_gexpr_in_708fr { int dummy;
 P897 e_704;
 P903 want_705;
 P899 c_706;
 P903 *t_707;
 P903 t_707v;
 rstr result_;
};
struct f_ascii_lit_710fr { int dummy;
 int ch_709;
 rstr result_;
 P897 l_2155;
 rt_int i_2156;
};
struct f_octal_712fr { int dummy;
 rt_int n_711;
 rstr result_;
 rstr r_2160;
};
struct f_str_cat_part_714fr { int dummy;
 P903 t_713;
 P903 result_;
};
struct f_peek_type_716fr { int dummy;
 P897 e_715;
 P903 result_;
 P920 saved_2161;
 P903 t_2162;
 rstr v_2165;
};
struct f_set_operands_719fr { int dummy;
 P897 e_717;
 P903 want_718;
 P903 result_;
 P903 t_2166;
};
struct f_user_dot_721fr { int dummy;
 P897 e_720;
 P897 result_;
 P897 arg_2167;
};
struct f_user_subscript_723fr { int dummy;
 P897 e_722;
 P897 result_;
 P890 name_2168;
 P897 args_2169;
 P897 tail_2170;
 P897 a_2171;
};
struct f_op_call_727fr { int dummy;
 rstr *name_724;
 P897 args_725;
 rt_int line_726;
 P897 result_;
 P897 call_2172;
 P897 f_2173;
};
struct f_derived_relation_729fr { int dummy;
 P897 e_728;
 P897 result_;
 P897 l_2174;
 P897 r_2175;
 int has_eq_2176;
 int has_lt_2177;
};
struct f_rel_node_734fr { int dummy;
 rstr *op_730;
 P897 a_731;
 P897 b_732;
 rt_int line_733;
 P897 result_;
};
struct f_rel_not_737fr { int dummy;
 P897 x_735;
 rt_int line_736;
 P897 result_;
 P897 n_2178;
};
struct f_copy_node_739fr { int dummy;
 P897 e_738;
 P897 result_;
 P897 x_2179;
};
struct f_wrap_apply_741fr { int dummy;
 P897 e_740;
 P897 result_;
 P897 x_2181;
};
struct f_c_string_743fr { int dummy;
 rstr *s_742;
 rstr result_;
 rt_int n_2182;
 rt_int i_2183;
 rstr r_2187;
 rt_int j_2188;
 rt_int i_2189;
};
struct f_enum_type_of_746fr { int dummy;
 rstr *lit_744;
 rt_int line_745;
 P903 result_;
 P907 y_2193;
 P899 c_2194;
 P897 st_2195;
};
struct f_ptr_attribute_748fr { int dummy;
 P897 e_747;
 int result_;
 P890 lv_2196;
 P903 t_2197;
 P899 c_2198;
 int ro_2199;
 P897 p_2200;
 P920 saved_2201;
};
struct f_attribute_751fr { int dummy;
 P897 e_749;
 P903 *t_750;
 P903 t_750v;
 rstr result_;
 P903 bt_2202;
 P899 c_2203;
 P890 base_2204;
 P897 sub_2205;
 rstr name_2206;
 P897 p_2207;
 P897 a_2208;
 P899 pc_2209;
 rstr v_2210;
 P897 p_2211;
 P897 a_2212;
 P903 pt_2213;
 rstr v_2214;
};
struct f_subtype_compare_756fr { int dummy;
 P897 sa_752;
 P897 sb_753;
 rstr *op_754;
 rt_int line_755;
 rstr result_;
 P899 ca_2215;
 P899 cb_2216;
 P903 ta_2217;
 P903 tb_2218;
 P890 r_2219;
 rstr yes_2220;
 rstr no_2221;
 rt_int k_2222;
 P897 a_2226;
 P897 b_2227;
 P903 at_2228;
 P903 bt2_2229;
 rstr x_2230;
 rstr y_2231;
};
struct f_float_prec_758fr { int dummy;
 P899 c_757;
 rstr result_;
};
struct f_file_attribute_764fr { int dummy;
 P897 e_759;
 P903 bt_760;
 P899 c_761;
 P890 base_762;
 P903 *t_763;
 P903 t_763v;
 rstr result_;
};
struct f_gbinop_768fr { int dummy;
 P897 e_765;
 P903 want_766;
 P903 *t_767;
 P903 t_767v;
 rstr result_;
 P890 op_2232;
 P903 ta_2233;
 P903 tb_2234;
 P903 hint_2235;
 P907 uy_2236;
 P897 l_2237;
 P897 r_2238;
 P897 call_2239;
 P897 fname_2240;
 rstr s_2241;
 rstr a_2242;
 rstr a_2243;
 rstr b_2244;
 rstr a_2245;
 rstr b_2246;
 P903 at_2247;
 rstr a_2248;
 rstr b_2249;
 P903 wa_2250;
 P903 wb_2251;
 P903 ws_2252;
 P903 ce_2253;
 rstr a_2254;
 rstr b_2255;
 rstr dummy_2256;
 rstr a_2257;
 rstr b_2258;
 P903 ct_2259;
 rstr a_2260;
 rstr b_2261;
};
struct f_constructor_773fr { int dummy;
 P897 e_769;
 P903 want_770;
 P899 ctx_771;
 P903 *t_772;
 P903 t_772v;
 rstr result_;
 P897 it_2262;
 P905 f_2263;
 P903 vt_2264;
 P890 s_2265;
 rstr v_2266;
 rt_int i_2267;
 rstr tmp_2268;
 rstr v_2269;
 rstr tmp_2270;
 P890 parts_2271;
 P897 k_2272;
 P890 shared_2273;
 rstr v_2274;
 rstr v_2275;
};
struct f_comp_value_777fr { int dummy;
 P903 t_774;
 P899 c_775;
 rstr *v_776;
 rstr result_;
};
struct f_has_at_779fr { int dummy;
 rstr *s_778;
 int result_;
 rt_int i_2276;
};
struct f_set_elem_782fr { int dummy;
 P903 st_780;
 rstr *v_781;
 rstr result_;
};
struct f_array_cons_787fr { int dummy;
 P897 e_783;
 P903 at_784;
 P899 ctx_785;
 P903 *t_786;
 P903 t_786v;
 rstr result_;
 rstr tmp_2280;
 P890 parts_2281;
 P897 it_2282;
 int positional_2283;
 rt_int k_2284;
 P890 lo_2288;
 P890 hi_2289;
};
struct f_fill_items_793fr { int dummy;
 P897 items_788;
 P903 at_789;
 rstr *tmp_790;
 P901 prefix_791;
 rt_int dim_792;
 rstr result_;
 P897 it_2290;
 rt_int pos_2291;
 P890 r_2292;
 P903 vt_2293;
 rstr v_2294;
 P897 k_2295;
 rt_int d_2296;
 P901 pre_2297;
 P890 loops_2298;
 P890 ends_2299;
 rstr v_2300;
 rstr xv_2301;
 P897 k_2302;
 rstr xv_2303;
 rstr v_2304;
};
struct f_e_line_795fr { int dummy;
 P897 e_794;
 rt_int result_;
};
struct f_add_line_798fr { int dummy;
 P901 l_796;
 rstr *s_797;
 P901 result_;
 P901 r_2305;
 P901 tail_2306;
 P901 x_2307;
 P901 p_2308;
};
struct f_item_value_803fr { int dummy;
 P897 e_799;
 P903 at_800;
 rt_int line_801;
 P903 *vt_802;
 P903 vt_802v;
 rstr result_;
 rstr v_2311;
};
struct f_key_loop_808fr { int dummy;
 P897 k_804;
 P903 at_805;
 rt_int d_806;
 rstr *xv_807;
 rstr result_;
 P903 it_2312;
 rstr lo_2313;
 rstr hi_2314;
};
struct f_store_at_813fr { int dummy;
 P903 at_809;
 rstr *tmp_810;
 P901 xs_811;
 rt_int n_812;
 rstr result_;
 P890 off_2315;
 P901 x_2316;
 rt_int k_2317;
 rstr l_2318;
 rstr h_2319;
};
struct f_fits_816fr { int dummy;
 P907 y_814;
 P897 args_815;
 int result_;
 P897 a_2320;
 P909 pm_2321;
 P903 t_2322;
 P920 saved_2323;
 int ok_2324;
 P890 lv_2325;
 P899 lc_2326;
 int ro_2327;
 rstr v_2330;
};
struct f_resolve_overload_822fr { int dummy;
 rstr *name_817;
 P897 tt_818;
 P897 args_819;
 int is_stmt_820;
 rt_int line_821;
 P907 result_;
 P907 y_2331;
 P907 first_2332;
 rt_int n_2333;
 rt_int pass_2334;
};
struct f_tt_fits_825fr { int dummy;
 P907 y_823;
 P897 tt_824;
 int result_;
 P897 f_2338;
 P897 a_2339;
 P920 saved_2340;
 int ok_2341;
 P899 fc_2344;
 P899 ac_2345;
 P897 fst_2346;
 P903 ft_2347;
 P903 at_2348;
 P897 ast_2349;
};
struct f_overload_chain_828fr { int dummy;
 rstr *name_826;
 rt_int pass_827;
 P907 result_;
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
 P897 tt_833;
 rt_int line_834;
 P903 *t_835;
 P903 t_835v;
 rstr result_;
 P899 c_2350;
};
struct f_type_tag_838fr { int dummy;
 P903 t_837;
 rstr result_;
};
struct f_lock_ref_841fr { int dummy;
 P897 e_839;
 rstr *name_840;
 rstr result_;
 P890 lv_2351;
 P903 t_2352;
 P899 c_2353;
 int ro_2354;
};
struct f_user_op_844fr { int dummy;
 rstr *op_842;
 P897 args_843;
 P907 result_;
 P907 y_2355;
 rt_int pass_2356;
};
struct f_gcall_848fr { int dummy;
 P897 e_845;
 int is_stmt_846;
 P903 *t_847;
 P903 t_847v;
 rstr result_;
 P897 gd_2360;
 P897 fn_2361;
 P897 tt_2362;
 P907 y_2363;
 P890 args_2364;
 P897 a_2365;
 P909 pm_2366;
 P903 lt_2367;
 P903 vt_2368;
 P890 lv_2369;
 P899 lc_2370;
 int ro_2371;
 P907 alt_2372;
 P924 cr_2373;
 rt_int i_2374;
 rstr v_2378;
 rstr ct_2379;
 rstr v_2380;
 rstr chk_2381;
};
struct f_requires_850fr { int dummy;
 P907 y_849;
 P901 result_;
 P897 imp_2382;
};
struct f_add_req_853fr { int dummy;
 P907 y_851;
 rstr *name_852;
 P901 l_2383;
};
struct f_require_calls_856fr { int dummy;
 P907 y_854;
 P897 e_855;
 P897 x_2385;
 P897 callee_2386;
 P907 z_2387;
 P901 l_2388;
};
struct f_declared_in_859fr { int dummy;
 P897 elems_857;
 rstr *name_858;
 int result_;
 P897 e_2389;
};
struct f_check_requires_862fr { int dummy;
 P907 y_860;
 rt_int line_861;
 P901 l_2390;
 P907 z_2391;
};
struct f_act_delay_args_864fr { int dummy;
 P897 args_863;
 rstr result_;
 P903 at_2392;
 P903 t1_2393;
 rstr a_2394;
 rstr v_2395;
 rstr v_2396;
};
struct f_same_subtypes_867fr { int dummy;
 P897 gd_865;
 P897 args_866;
 rstr result_;
 P897 p_2397;
 P890 r_2398;
 P897 fp_2399;
 P897 a_2400;
 P890 flo_2401;
 P890 fhi_2402;
 P903 st_2403;
 P899 c_2404;
 P890 base_2405;
 P890 lo_2406;
 P890 hi_2407;
};
struct f_mailbox_low_872fr { int dummy;
 rstr *name_868;
 P897 args_869;
 rt_int line_870;
 P903 *t_871;
 P903 t_871v;
 rstr result_;
 P890 qv_2408;
 P890 mv_2409;
 P890 dv_2410;
 P903 qt_2411;
 P903 mt_2412;
 P903 dt_2413;
 P903 at_2414;
 P899 c_2415;
 int ro_2416;
 int send_2417;
 rstr v_2418;
};
struct f_exponent_want_875fr { int dummy;
 rstr *op_873;
 P903 ta_874;
 P903 result_;
};
struct f_actual_bounds_879fr { int dummy;
 P903 ft_876;
 P903 t_877;
 P899 c_878;
 rstr result_;
};
struct f_builtin_886fr { int dummy;
 rstr *name_880;
 P897 tt_881;
 P897 args_882;
 rt_int line_883;
 int is_stmt_884;
 P903 *t_885;
 P903 t_885v;
 rstr result_;
 P903 at_2419;
 rt_int n_2420;
 rstr a_2421;
 rstr a_2422;
 rstr a_2423;
 rstr a_2424;
 rstr a_2425;
 rstr a_2426;
 rstr a_2427;
 rstr n1_2428;
 rstr m1_2429;
 rstr a_2430;
 rstr a_2431;
 P897 last_2432;
 rstr a_2433;
 rstr a_2434;
 P890 lv_2435;
 P899 lc_2436;
 int ro_2437;
 P897 last_2438;
 P890 lv_2439;
 P890 dv_2440;
 P899 lc_2441;
 int ro_2442;
 P903 mt_2443;
 P903 dt_2444;
 rstr v_2445;
 P890 lv_2446;
 P899 lc_2447;
 int ro_2448;
 P903 mt_2449;
 P890 lv_2450;
 P890 dv_2451;
 P890 bv_2452;
 P899 lc_2453;
 int ro_2454;
 P903 mt_2455;
 P903 dt_2456;
 P903 bt_2457;
 rstr v_2458;
 rstr v_2459;
 rstr v_2460;
 rstr v_2461;
 rstr a_2462;
 P890 bv_2463;
 P899 bc_2464;
 int ro_2465;
 P903 bt_2466;
 rstr l_2467;
 P890 pv_2468;
 P899 pc_2469;
 int ro_2470;
 P903 pt_2471;
 rstr dev_2472;
 rstr cmd_2473;
 P890 dv_2474;
 P899 dc_2475;
 int ro_2476;
 P903 dt_2477;
};
struct f_translate_888fr { int dummy;
 P897 units_887;
 P897 u_2478;
 P897 l_2480;
 rstr w_2481;
};
struct f_print_program_889fr { int dummy;
};
struct Pc891 { rt_int p_n; rstr all; };
struct Pc895 { rt_int p_n; A896 all; };
struct Pc912 { rt_int p_n; A913 all; };
static void as_R927(R927 *d, R927 s);
static R927 cp_R927(R927 s);
static int eq_R927(R927 a, R927 b);
static void as_R925(R925 *d, R925 s);
static R925 cp_R925(R925 s);
static int eq_R925(R925 a, R925 b);
static void as_R923(R923 *d, R923 s);
static R923 cp_R923(R923 s);
static int eq_R923(R923 a, R923 b);
static void as_R921(R921 *d, R921 s);
static R921 cp_R921(R921 s);
static int eq_R921(R921 a, R921 b);
static void as_R919(R919 *d, R919 s);
static R919 cp_R919(R919 s);
static int eq_R919(R919 a, R919 b);
static void as_R917(R917 *d, R917 s);
static R917 cp_R917(R917 s);
static int eq_R917(R917 a, R917 b);
static void as_R915(R915 *d, R915 s);
static R915 cp_R915(R915 s);
static int eq_R915(R915 a, R915 b);
static void as_A913(A913 *d, A913 s);
static A913 cp_A913(A913 s);
static int eq_A913(A913 a, A913 b);
static void as_R910(R910 *d, R910 s);
static R910 cp_R910(R910 s);
static int eq_R910(R910 a, R910 b);
static void as_R908(R908 *d, R908 s);
static R908 cp_R908(R908 s);
static int eq_R908(R908 a, R908 b);
static void as_R906(R906 *d, R906 s);
static R906 cp_R906(R906 s);
static int eq_R906(R906 a, R906 b);
static void as_R904(R904 *d, R904 s);
static R904 cp_R904(R904 s);
static int eq_R904(R904 a, R904 b);
static void as_R902(R902 *d, R902 s);
static R902 cp_R902(R902 s);
static int eq_R902(R902 a, R902 b);
static void as_R900(R900 *d, R900 s);
static R900 cp_R900(R900 s);
static int eq_R900(R900 a, R900 b);
static void as_R898(R898 *d, R898 s);
static R898 cp_R898(R898 s);
static int eq_R898(R898 a, R898 b);
static void as_A896(A896 *d, A896 s);
static A896 cp_A896(A896 s);
static int eq_A896(A896 a, A896 b);
static void as_R893(R893 *d, R893 s);
static R893 cp_R893(R893 s);
static int eq_R893(R893 a, R893 b);
static P890 f_mk_3(rstr *s_2);
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
static P920 f_new_buffer_24(void);
static void f_put_27(P920 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P920 b_30);
static void f_splice_34(P920 a_32, P920 b_33);
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
static P897 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P897 *head_62, P897 *tail_63, P897 x_64);
static rt_int f_list_len_67(P897 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P890 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P890 f_expect_id_89(void);
static P897 f_name_node_90(void);
static P897 f_id_list_91(void);
static P897 f_p_subtype_92(void);
static P897 f_constraint_list_93(void);
static P897 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P897 f_actual_tt_97(void);
static P897 f_binop_102(P890 op_98, P897 l_99, P897 r_100, rt_int line_101);
static P897 f_expr_103(void);
static P897 f_expr_and_104(void);
static P897 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P897 f_expr_rel_108(void);
static P897 f_expr_add_109(void);
static P897 f_expr_mul_110(void);
static P897 f_expr_pow_111(void);
static P897 f_expr_prefix_112(void);
static P897 f_postfix_113(void);
static P897 f_primary_114(void);
static P897 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P897 f_body_117(void);
static P897 f_body_element_118(void);
static P897 f_declaration_119(void);
static P897 f_object_decl_120(void);
static P897 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P897 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P897 f_formal_params_126(void);
static int f_imports_list_128(P897 owner_127);
static int f_is_definable_130(rstr *w_129);
static P890 f_definable_name_131(void);
static P897 f_subprogram_decl_132(void);
static P897 f_capsule_decl_133(void);
static P897 f_formal_tt_134(void);
static P897 f_generic_decl_135(void);
static P897 f_type_list_136(void);
static P897 f_task_decl_137(void);
static P897 f_expose_decl_138(void);
static int f_is_compound_kw_140(rstr *w_139);
static P897 f_statement_141(void);
static P897 f_unlabeled_statement_142(void);
static P897 f_arm_146(P897 cond_143, P897 b_144, rt_int line_145);
static P897 f_if_stmt_147(void);
static P897 f_case_stmt_148(void);
static P897 f_repeat_stmt_149(void);
static P897 f_guard_stmt_150(void);
static P897 f_program_151(void);
static rt_int f_hash_153(rstr *s_152);
static P907 f_lookup_155(rstr *name_154);
static P907 f_lookup_decl_157(P897 d_156);
static void f_define_160(P907 y_158, rt_int line_159);
static int f_overloadable_162(P907 y_161);
static int f_same_tt_165(P897 a_163, P897 b_164);
static int f_same_signature_168(P909 a_166, P909 b_167);
static void f_open_scope_169(void);
static void f_close_scope_170(void);
static P907 f_new_sym_173(rt_int kind_171, P890 name_172);
static P903 f_new_typ_175(rt_int kind_174);
static P899 f_new_cons_176(void);
static int f_scalar_kind_178(P903 t_177);
static rstr f_bound_ctype_180(P903 t_179);
static rstr f_cbound_183(P899 c_181, rstr *b_182);
static rstr f_clo_185(P899 c_184);
static rstr f_chi_187(P899 c_186);
static rstr f_sub_lo_190(P903 t_188, P899 c_189);
static rstr f_sub_hi_193(P903 t_191, P899 c_192);
static rstr f_raw_storage_196(rstr *name_194, rstr *ct_195);
static P899 f_copy_cons_198(P899 c_197);
static P899 f_freeze_201(P899 c_199, P903 t_200);
static rstr f_checked_205(P903 t_202, P899 c_203, rstr *v_204);
static int f_same_lits_208(P897 a_206, P897 b_207);
static P903 f_str_elem_210(P903 t_209);
static int f_same_213(P903 a_211, P903 b_212);
static P903 f_base_of_215(P903 t_214);
static P899 f_base_cons_218(P903 t_216, P899 c_217);
static rstr f_kind_name_220(P903 t_219);
static void f_check_type_224(P903 got_221, P903 want_222, rt_int line_223);
static rstr f_ctype_226(P903 t_225);
static rstr f_struct_body_228(P903 t_227);
static rstr f_field_decls_230(P903 t_229);
static void f_declare_ctype_232(P903 t_231);
static rstr f_dim_lo_234(rt_int k_233);
static rstr f_dim_hi_236(rt_int k_235);
static rstr f_more_dims_238(P903 t_237);
static rstr f_acnt_241(P903 t_239, rstr *base_240);
static P890 f_cons_lo_244(P899 c_242, rt_int k_243);
static P890 f_cons_hi_247(P899 c_245, rt_int k_246);
static P903 f_idx_type_250(P903 t_248, rt_int k_249);
static void f_init_ascii_251(void);
static rt_int f_lit_index_254(P897 lits_252, rstr *name_253);
static P903 f_resolve_subtype_257(P897 st_255, P899 *c_256);
static int f_float_lit_259(P897 e_258);
static void f_tag_constraint_263(P903 t_260, P897 e_261, P899 c_262);
static P903 f_named_subtype_266(P897 st_264, P899 *c_265);
static P903 f_invoke_abbrev_270(P907 y_267, P897 st_268, P899 *c_269);
static void f_apply_constraint_275(P903 t_271, P897 args_272, P899 c_273, rt_int line_274);
static P903 f_value_subtype_279(P897 e_276, P899 *c_277, P890 *base_278);
static P901 f_reverse_pairs_281(P901 l_280);
static P903 f_inquiry_284(P897 st_282, P899 *c_283);
static P897 f_as_subtype_286(P897 e_285);
static P897 f_tt_subtype_291(P890 name_287, P897 tt_288, P897 args_289, rt_int line_290);
static int f_type_name_293(rstr *name_292);
static rstr f_empty_set_295(P903 t_294);
static int f_opened_297(P903 t_296);
static rstr f_replace_all_301(rstr *s_298, rstr *pat_299, rstr *r_300);
static rstr f_subst_303(rstr *s_302);
static P903 f_new_type_307(P907 y_304, P897 st_305, P899 *c_306);
static void f_init_storage_311(rstr *lval_308, P903 t_309, P899 c_310);
static rstr f_init_call_314(P907 y_312, rstr *lval_313);
static int f_needs_fin_316(P903 t_315);
static rstr f_fin_code_319(rstr *lval_317, P903 t_318);
static P903 f_tparam_type_322(P903 t_320, rstr *name_321);
static void f_make_storage_326(rstr *lval_323, P903 t_324, P899 c_325);
static rstr f_uninit_value_328(P903 t_327);
static rstr f_init_chk_331(P903 t_329, rstr *v_330);
static rt_int f_manifest_334(P897 e_332, int *ok_333);
static P916 f_mk_mval_337(rt_int kind_335, rt_int i_336);
static rt_int f_ipow_340(rt_int a_338, rt_int b_339);
static P916 f_meval_343(P897 e_341, int *ok_342);
static rstr f_bool_text_345(int b_344);
static rt_int f_bool_i_347(int b_346);
static rstr f_mstr_349(P916 v_348);
static int f_ascii_char_351(rt_int i_350);
static int f_user_defined_353(rstr *op_352);
static rstr f_mcopy_355(P903 t_354);
static int f_composite_357(P903 t_356);
static rstr f_user_call2_363(P907 y_358, rstr *a_359, int lv_a_360, rstr *b_361, int lv_b_362);
static rstr f_user_arg_367(P909 pm_364, rstr *v_365, int lv_366);
static int f_top_level_369(P907 y_368);
static rstr f_assign_code_374(rstr *lval_370, P903 t_371, rstr *v_372, P899 c_373);
static rstr f_copy_code_377(P903 t_375, rstr *v_376);
static rstr f_eq_code_381(P903 t_378, rstr *a_379, rstr *b_380);
static rstr f_elem_assign_385(rstr *lval_382, P903 t_383, rstr *v_384);
static int f_seen_name_388(P901 l_386, rstr *s_387);
static void f_emit_helpers_389(void);
static void f_helper_bodies_391(P903 t_390);
static void f_declare_body_393(P897 elems_392);
static void f_manifest_const_395(P897 d_394);
static int f_exported_399(P897 d_396, rstr *name_397, int *ro_398);
static P907 f_copy_sym_401(P907 y_400);
static void f_gen_capsule_403(P897 d_402);
static void f_capsule_params_407(P897 d_404, P897 args_405, rt_int line_406);
static void f_elaborate_capsule_412(P897 d_408, P907 y_409, P897 args_410, P897 owner_411);
static int f_exports_op_415(P897 d_413, rstr *op_414);
static P890 f_renamed_418(P897 d_416, P907 z_417);
static P907 f_pick_capsule_420(P897 d_419);
static P907 f_capsule_instance_423(P907 g_421, P897 d_422);
static void f_gen_expose_425(P897 d_424);
static void f_finish_ptr_427(P903 t_426);
static P897 f_ptr_args_429(P899 c_428);
static void f_bind_ptr_params_434(P897 formals_430, P897 actuals_431, rstr *cell_432, rt_int line_433);
static void f_alloc_cell_439(P897 s_435, rstr *lv_436, P903 t_437, P899 c_438);
static P899 f_freeze_args_443(P899 c_440, P903 t_441, rt_int line_442);
static void f_ptr_subtype_check_447(P903 t_444, P899 c_445, P897 src_446);
static void f_normal_function_450(P897 d_448, P907 y_449);
static void f_declare_subprogram_452(P897 d_451);
static P907 f_build_subprogram_454(P897 d_453);
static int f_has_pragmat_457(P890 pr_455, rstr *p_456);
static P890 f_suppressing_459(P890 pr_458);
static int f_suppressed_461(rstr *x_460);
static void f_element_463(P897 e_462);
static void f_element1_465(P897 e_464);
static rstr f_storage_468(rstr *name_466, P903 t_467);
static void f_bind_471(P907 y_469, rstr *access_470);
static void f_var_decl_473(P897 d_472);
static void f_open_fin_475(rstr *fc_474);
static void f_close_fins_477(P901 saved_476);
static void f_const_decl_479(P897 d_478);
static void f_subprogram_481(P897 d_480);
static void f_gen_subprogram_484(P897 d_482, P907 y_483);
static rstr f_waits_of_486(P897 d_485);
static rstr f_task_waits_488(P897 elems_487);
static void f_await_tasks_490(P897 elems_489);
static void f_capsule_elements_492(P897 elems_491);
static void f_declare_labels_494(P897 elems_493);
static void f_start_labels_495(void);
static P922 f_goto_label_497(rstr *name_496);
static int f_has_return_499(P897 e_498);
static void f_capsule_body_501(P897 elems_500);
static void f_body_elements_503(P897 elems_502);
static void f_gen_body_505(P897 elems_504);
static rstr f_open_unhandled_507(P897 elems_506);
static void f_close_unhandled_509(rstr *xu_508);
static void f_pop_frames_511(rt_int upto_510);
static void f_push_cleanup_513(rstr *s_512);
static void f_pop_cleanup_514(void);
static void f_gen_statement_516(P897 s_515);
static void f_st_assign_518(P897 s_517);
static void f_st_call_520(P897 s_519);
static void f_st_if_522(P897 s_521);
static int f_manifest_case_524(P897 s_523);
static void f_st_case_526(P897 s_525);
static void f_st_case2_528(P897 s_527);
static void f_user_for_532(P897 s_529, P903 t_530, P899 c_531);
static void f_st_repeat_534(P897 s_533);
static void f_st_exit_536(P897 s_535);
static void f_st_return_538(P897 s_537);
static rstr f_result_checked_542(P903 t_539, P899 c_540, rstr *v_541);
static rstr f_exc_id_545(rstr *name_543, rt_int line_544);
static void f_st_guard_547(P897 s_546);
static void f_st_alloc_549(P897 s_548);
static rstr f_act_ref_551(P897 e_550);
static void f_st_create_553(P897 s_552);
static void f_hidden_var_557(rstr *name_554, P903 t_555, rstr *place_556);
static void f_user_create_563(P897 s_558, P907 y_559, rstr *uv_560, P903 ut_561, rstr *nf_562);
static rstr f_wait_alt_568(P897 inv_564, rstr *arr_565, rt_int i_566, int mixed_567);
static int f_builtin_wait_570(P897 inv_569);
static rstr f_wait_op_575(P897 inv_571, rstr *op_572, rstr *q_573, int is_stmt_574);
static void f_user_wait_580(P897 s_576, rstr *arr_577, rstr *w_578, rt_int n_579);
static void f_st_wait_582(P897 s_581);
static P897 f_call_node_586(rstr *name_583, P897 arg_584, rt_int line_585);
static void f_user_region_588(P897 s_587);
static void f_st_region_590(P897 s_589);
static P897 f_gparam_593(P897 g_591, rstr *name_592);
static P907 f_bind_sym_595(P897 p_594);
static int f_same_binds_598(P907 a_596, P907 b_597);
static int f_same_binding_601(P907 a_599, P907 b_600);
static P907 f_tt_binds_606(P897 gd_602, P897 formals_603, P897 actuals_604, rt_int line_605);
static int f_type_allowed_610(P903 t_607, P897 items_608, P907 binds_609);
static P903 f_resolve_in_binds_614(P897 st_611, P907 binds_612, P899 *c_613);
static P907 f_pick_operation_621(rt_int kind_615, rstr *name_616, P897 sig_617, P897 res_618, P907 binds_619, rt_int line_620);
static rstr f_kind_word_623(rt_int kind_622);
static P907 f_need_binds_627(P897 gd_624, P907 binds_625, rt_int line_626);
static int f_generic_use_629(P897 st_628);
static P907 f_infer_from_634(P897 gd_630, P897 pat_631, P903 t_632, P907 known_633);
static P903 f_instantiate_type_640(P907 g_635, P897 tt_636, P897 args_637, P899 *c_638, rt_int line_639);
static P907 f_instantiate_645(P907 g_641, P897 tt_642, P897 args_643, rt_int line_644);
static rstr f_access_of_647(P907 y_646);
static P897 f_import_of_650(P897 l_648, rstr *name_649);
static int f_check_import_653(P907 y_651, rt_int line_652);
static rstr f_c_ident_655(rstr *s_654);
static rstr f_cell_deref_658(P903 t_656, rstr *p_657);
static rstr f_deref_661(rstr *base_659, P903 t_660);
static int f_is_lvalue_663(P897 e_662);
static void f_lvalue_669(P897 e_664, P890 *code_665, P903 *t_666, P899 *c_667, int *ro_668);
static void f_select_on_677(rstr *base_670, P903 bt_671, P897 e_672, int *ro_673, P890 *code_674, P903 *t_675, P899 *c_676);
static int f_has_call_679(rstr *s_678);
static void f_need_slice_681(P903 t_680);
static rstr f_ix_685(rstr *i_682, rstr *lo_683, rstr *hi_684);
static void f_index_on_694(rstr *base_686, P903 bt_687, P897 e_688, int *ro_689, int lv_690, P890 *code_691, P903 *t_692, P899 *c_693);
static int f_own_attribute_696(P897 e_695);
static rstr f_gexpr_700(P897 e_697, P903 want_698, P903 *t_699);
static rstr f_resolved_703(P897 e_701, P903 *t_702);
static rstr f_gexpr_in_708(P897 e_704, P903 want_705, P899 c_706, P903 *t_707);
static rstr f_ascii_lit_710(int ch_709);
static rstr f_octal_712(rt_int n_711);
static P903 f_str_cat_part_714(P903 t_713);
static P903 f_peek_type_716(P897 e_715);
static P903 f_set_operands_719(P897 e_717, P903 want_718);
static P897 f_user_dot_721(P897 e_720);
static P897 f_user_subscript_723(P897 e_722);
static P897 f_op_call_727(rstr *name_724, P897 args_725, rt_int line_726);
static P897 f_derived_relation_729(P897 e_728);
static P897 f_rel_node_734(rstr *op_730, P897 a_731, P897 b_732, rt_int line_733);
static P897 f_rel_not_737(P897 x_735, rt_int line_736);
static P897 f_copy_node_739(P897 e_738);
static P897 f_wrap_apply_741(P897 e_740);
static rstr f_c_string_743(rstr *s_742);
static P903 f_enum_type_of_746(rstr *lit_744, rt_int line_745);
static int f_ptr_attribute_748(P897 e_747);
static rstr f_attribute_751(P897 e_749, P903 *t_750);
static rstr f_subtype_compare_756(P897 sa_752, P897 sb_753, rstr *op_754, rt_int line_755);
static rstr f_float_prec_758(P899 c_757);
static rstr f_file_attribute_764(P897 e_759, P903 bt_760, P899 c_761, P890 base_762, P903 *t_763);
static rstr f_gbinop_768(P897 e_765, P903 want_766, P903 *t_767);
static rstr f_constructor_773(P897 e_769, P903 want_770, P899 ctx_771, P903 *t_772);
static rstr f_comp_value_777(P903 t_774, P899 c_775, rstr *v_776);
static int f_has_at_779(rstr *s_778);
static rstr f_set_elem_782(P903 st_780, rstr *v_781);
static rstr f_array_cons_787(P897 e_783, P903 at_784, P899 ctx_785, P903 *t_786);
static rstr f_fill_items_793(P897 items_788, P903 at_789, rstr *tmp_790, P901 prefix_791, rt_int dim_792);
static rt_int f_e_line_795(P897 e_794);
static P901 f_add_line_798(P901 l_796, rstr *s_797);
static rstr f_item_value_803(P897 e_799, P903 at_800, rt_int line_801, P903 *vt_802);
static rstr f_key_loop_808(P897 k_804, P903 at_805, rt_int d_806, rstr *xv_807);
static rstr f_store_at_813(P903 at_809, rstr *tmp_810, P901 xs_811, rt_int n_812);
static int f_fits_816(P907 y_814, P897 args_815);
static P907 f_resolve_overload_822(rstr *name_817, P897 tt_818, P897 args_819, int is_stmt_820, rt_int line_821);
static int f_tt_fits_825(P907 y_823, P897 tt_824);
static P907 f_overload_chain_828(rstr *name_826, rt_int pass_827);
static int f_is_builtin_830(rstr *n_829);
static int f_is_low_level_832(rstr *n_831);
static rstr f_me_high_836(P897 tt_833, rt_int line_834, P903 *t_835);
static rstr f_type_tag_838(P903 t_837);
static rstr f_lock_ref_841(P897 e_839, rstr *name_840);
static P907 f_user_op_844(rstr *op_842, P897 args_843);
static rstr f_gcall_848(P897 e_845, int is_stmt_846, P903 *t_847);
static P901 f_requires_850(P907 y_849);
static void f_add_req_853(P907 y_851, rstr *name_852);
static void f_require_calls_856(P907 y_854, P897 e_855);
static int f_declared_in_859(P897 elems_857, rstr *name_858);
static void f_check_requires_862(P907 y_860, rt_int line_861);
static rstr f_act_delay_args_864(P897 args_863);
static rstr f_same_subtypes_867(P897 gd_865, P897 args_866);
static rstr f_mailbox_low_872(rstr *name_868, P897 args_869, rt_int line_870, P903 *t_871);
static P903 f_exponent_want_875(rstr *op_873, P903 ta_874);
static rstr f_actual_bounds_879(P903 ft_876, P903 t_877, P899 c_878);
static rstr f_builtin_886(rstr *name_880, P897 tt_881, P897 args_882, rt_int line_883, int is_stmt_884, P903 *t_885);
static void f_translate_888(P897 units_887);
static void f_print_program_889(void);
static int ex_compile_error_1;
static P894 g_toks_928;
static rt_int g_ntoks_929;
static rt_int g_tpos_930;
static rt_int g_src_line_931;
static P890 g_pending_prag_932;
static P911 g_table_933;
static P911 g_genv_934;
static P907 g_all_insts_935;
static rt_int g_depth_936;
static P907 g_scope_stack_937;
static P903 g_all_types_938;
static rt_int g_serial_939;
static P920 g_out_types_940;
static P920 g_out_helpers_941;
static P920 g_out_protos_942;
static P920 g_out_globals_943;
static P920 g_out_funcs_944;
static P920 g_out_init_945;
static P920 g_out_excs_946;
static P920 g_code_947;
static P920 g_fields_buf_948;
static int g_in_func_949;
static rt_int g_cur_level_950;
static P914 g_fctx_951;
static P924 g_caps_952;
static P926 g_cap_waits_953;
static P901 g_psub_954;
static P890 g_st_field_955;
static P920 g_out_frames_956;
static P920 g_out_roots_957;
static int g_uses_free_958;
static P901 g_fins_959;
static int g_uses_findyn_960;
static P907 g_func_sym_961;
static P899 g_func_rc_962;
static P890 g_cap_ret_963;
static P890 g_cap_rflag_964;
static rt_int g_ret_frames_965;
static rt_int g_gdepth_966;
static P890 g_suppress_967;
static P899 g_cons_ctx_968;
static int g_mark_uninit_969;
static P922 g_exits_970;
static P922 g_gotos_971;
static rt_int g_frames_972;
static P901 g_handlers_973;
static P901 g_cleanups_974;
static rt_int g_trial_975;
static P901 g_mcopies_976;
static P903 g_ty_int_977;
static P903 g_ty_bool_978;
static P903 g_ty_float_979;
static P903 g_ty_ascii_980;
static P903 g_ty_string_981;
static P903 g_ty_void_982;
static P903 g_ty_file_983;
static P903 g_ty_nil_984;
static P903 g_ty_lock_985;
static P903 g_ty_latch_986;
static P903 g_ty_act_987;
static P903 g_file_mode_type_988;
static P903 g_ty_send_st_989;
static P903 g_ty_receive_st_990;
static P899 g_no_cons_991;
static P890 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_992 = NULL;
{ P890 cell993 = rt_alloc(sizeof *cell993);
rt_int pv994 = ((rt_int)(((*F->s_2)).len));
cell993->p_n = pv994;
cell993->all = rt_str_new(pv994);
rt_str_assign(&cell993->all, (*F->s_2));
F->t_992 = cell993;
}
F->result_ = F->t_992;
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
F->r_995 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_995, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_995;
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
F->r_996 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_996, (*F->s_14));
{ rt_int lo998 = ((rt_int)1LL), hi999 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1000 = lo998; it1000 <= hi999; it1000++) {
F->i_997 = it1000;
if (((65 <= rt_r_echk(rt_str_get(F->r_996, F->i_997))) && (rt_r_echk(rt_str_get(F->r_996, F->i_997)) <= 90))) {
(*rt_str_at(&F->r_996, F->i_997)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_996, F->i_997))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_996;
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
F->l_1001 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1002 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1001), rt_str(" ", 1)));
{ rt_int lo1004 = ((rt_int)1LL), hi1005 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1002).len))), ((rt_int)1LL));
for (rt_int it1006 = lo1004; it1006 <= hi1005; it1006++) {
F->i_1003 = it1006;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1003, rt_sub(rt_add(F->i_1003, ((rt_int)((F->w_1002).len))), ((rt_int)1LL))), F->w_1002)) {
F->result_ = rt_str_cat(F->l_1001, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1001;
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
g_serial_939 = rt_add(rt_r_ichk(g_serial_939), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_939)));
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
if ((rt_r_ichk(g_trial_975) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P920 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1007 = NULL;
{ R921 *cell1008 = rt_alloc(sizeof(R921));
(*cell1008).head = NULL;
(*cell1008).tail = NULL;
F->b_1007 = cell1008;
}
F->result_ = F->b_1007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P920 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1009 = NULL;
{ R902 *cell1010 = rt_alloc(sizeof(R902));
(*cell1010).s = NULL;
(*cell1010).next = NULL;
F->l_1009 = cell1010;
}
(*(P901)rt_nil_check(F->l_1009)).s = f_mk_3(&(*F->s_26));
if (((*(P920)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P920)rt_nil_check(F->b_25)).head = F->l_1009;
} else {
(*(P901)rt_nil_check((*(P920)rt_nil_check(F->b_25)).tail)).next = F->l_1009;
}
(*(P920)rt_nil_check(F->b_25)).tail = F->l_1009;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_947, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P920 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1011 = NULL;
F->l_1011 = (*(P920)rt_nil_check(F->b_30)).head;
while ((F->l_1011 != NULL)) {
rt_putln((((P890)rt_nil_check((*(P901)rt_nil_check(F->l_1011)).s))->all));
F->l_1011 = (*(P901)rt_nil_check(F->l_1011)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P920 a_32, P920 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P920)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P920)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P920)rt_nil_check(F->a_32)).head = (*(P920)rt_nil_check(F->b_33)).head;
} else {
(*(P901)rt_nil_check((*(P920)rt_nil_check(F->a_32)).tail)).next = (*(P920)rt_nil_check(F->b_33)).head;
}
(*(P920)rt_nil_check(F->a_32)).tail = (*(P920)rt_nil_check(F->b_33)).tail;
(*(P920)rt_nil_check(F->b_33)).head = NULL;
(*(P920)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1012 = (*F->w_35);
if (0 || rt_str_eq(sel1012, rt_str("ABBREV", 6)) || rt_str_eq(sel1012, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1012, rt_str("ALL", 3)) || rt_str_eq(sel1012, rt_str("ALLOC", 5)) || rt_str_eq(sel1012, rt_str("ASSERT", 6)) || rt_str_eq(sel1012, rt_str("BEGIN", 5)) || rt_str_eq(sel1012, rt_str("BY", 2)) || rt_str_eq(sel1012, rt_str("CAPSULE", 7)) || rt_str_eq(sel1012, rt_str("CASE", 4)) || rt_str_eq(sel1012, rt_str("CONST", 5)) || rt_str_eq(sel1012, rt_str("CREATE", 6)) || rt_str_eq(sel1012, rt_str("DO", 2)) || rt_str_eq(sel1012, rt_str("ELSE", 4)) || rt_str_eq(sel1012, rt_str("ELSEIF", 6)) || rt_str_eq(sel1012, rt_str("END", 3)) || rt_str_eq(sel1012, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1012, rt_str("EXIT", 4)) || rt_str_eq(sel1012, rt_str("EXPORTS", 7)) || rt_str_eq(sel1012, rt_str("EXPOSE", 6)) || rt_str_eq(sel1012, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1012, rt_str("FOR", 3)) || rt_str_eq(sel1012, rt_str("FROM", 4)) || rt_str_eq(sel1012, rt_str("FUNC", 4)) || rt_str_eq(sel1012, rt_str("GENERIC", 7)) || rt_str_eq(sel1012, rt_str("GOTO", 4)) || rt_str_eq(sel1012, rt_str("GUARD", 5)) || rt_str_eq(sel1012, rt_str("IF", 2)) || rt_str_eq(sel1012, rt_str("IMPORTS", 7)) || rt_str_eq(sel1012, rt_str("LOCATION", 8)) || rt_str_eq(sel1012, rt_str("NAMED", 5)) || rt_str_eq(sel1012, rt_str("NEEDS", 5)) || rt_str_eq(sel1012, rt_str("NEW", 3)) || rt_str_eq(sel1012, rt_str("NONE", 4)) || rt_str_eq(sel1012, rt_str("OUT", 3)) || rt_str_eq(sel1012, rt_str("OF", 2)) || rt_str_eq(sel1012, rt_str("PRAG", 4)) || rt_str_eq(sel1012, rt_str("PROC", 4)) || rt_str_eq(sel1012, rt_str("RAISE", 5)) || rt_str_eq(sel1012, rt_str("READONLY", 8)) || rt_str_eq(sel1012, rt_str("REVERSE", 7)) || rt_str_eq(sel1012, rt_str("REGION", 6)) || rt_str_eq(sel1012, rt_str("RENAMING", 8)) || rt_str_eq(sel1012, rt_str("REP", 3)) || rt_str_eq(sel1012, rt_str("REPEAT", 6)) || rt_str_eq(sel1012, rt_str("RERAISE", 7)) || rt_str_eq(sel1012, rt_str("RETURN", 6)) || rt_str_eq(sel1012, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1012, rt_str("TASK", 4)) || rt_str_eq(sel1012, rt_str("THEN", 4)) || rt_str_eq(sel1012, rt_str("TO", 2)) || rt_str_eq(sel1012, rt_str("TYPE", 4)) || rt_str_eq(sel1012, rt_str("VAR", 3)) || rt_str_eq(sel1012, rt_str("WAIT", 4)) || rt_str_eq(sel1012, rt_str("WHEN", 4)) || rt_str_eq(sel1012, rt_str("WHILE", 5))) {
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
F->t_1013 = NULL;
{ R893 *cell1014 = rt_alloc(sizeof(R893));
(*cell1014).s = NULL;
(*cell1014).prags = NULL;
F->t_1013 = cell1014;
}
(*(P892)rt_nil_check(F->t_1013)).kind = F->kind_39;
(*(P892)rt_nil_check(F->t_1013)).line = rt_r_ichk(g_src_line_931);
(*(P892)rt_nil_check(F->t_1013)).ival = F->ival_41;
(*(P892)rt_nil_check(F->t_1013)).s = f_mk_3(&(*F->s_40));
(*(P892)rt_nil_check(F->t_1013)).prags = g_pending_prag_932;
g_pending_prag_932 = NULL;
g_ntoks_929 = rt_add(rt_r_ichk(g_ntoks_929), ((rt_int)1LL));
(((P894)rt_nil_check(g_toks_928))->all).p[(rt_index(rt_r_ichk(g_ntoks_929), (((P894)rt_nil_check(g_toks_928))->all).lo, (((P894)rt_nil_check(g_toks_928))->all).hi) - (((P894)rt_nil_check(g_toks_928))->all).lo)] = F->t_1013;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1015 = RT_R_IUNDEF;
F->j_1015 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1015) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1015)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1015))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1015))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1015))) == 95) && ((rt_r_ichk(F->j_1015) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1015), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1015), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1015 = rt_add(rt_r_ichk(F->j_1015), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1015);
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
F->w_1016 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1016, (*F->s_46));
{ rt_int lo1018 = ((rt_int)1LL), hi1019 = ((rt_int)((F->w_1016).len));
for (rt_int it1020 = lo1018; it1020 <= hi1019; it1020++) {
F->k_1017 = it1020;
(*rt_str_at(&F->w_1016, F->k_1017)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1016, F->k_1017)));
}
}
F->result_ = F->w_1016;
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
F->j_1021 = RT_R_IUNDEF;
F->j_1021 = F->i_49;
while (((rt_r_ichk(F->j_1021) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1021))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1021))) == 9)))) {
F->j_1021 = rt_add(rt_r_ichk(F->j_1021), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1021);
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
F->j_1022 = RT_R_IUNDEF;
F->j_1022 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1023 = NULL;
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1024 = RT_R_EUNDEF;
F->more_1024 = 1;
if (((rt_r_ichk(F->j_1022) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
while (rt_r_echk(F->more_1024)) {
F->k_1025 = RT_R_IUNDEF;
F->j_1022 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1022));
if (((rt_r_ichk(F->j_1022) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))))))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1025 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1022));
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1022), rt_sub(rt_r_ichk(F->k_1025), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1022 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1025));
if (((rt_r_ichk(F->j_1022) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) == 40))) {
F->go_1026 = RT_R_EUNDEF;
F->go_1026 = 1;
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), rt_str("(", 1)); b_; }));
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
while (rt_r_echk(F->go_1026)) {
F->j_1022 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1022));
if (((rt_r_ichk(F->j_1022) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))))))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1025 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1022));
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1022), rt_sub(rt_r_ichk(F->k_1025), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1022 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1025));
if (((rt_r_ichk(F->j_1022) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) == 44))) {
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), rt_str(",", 1)); b_; }));
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1022) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) == 41))) {
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
F->go_1026 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), rt_str(")", 1)); b_; }));
}
F->r_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1023))->all), rt_str(";", 1)); b_; }));
F->j_1022 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1022));
if (((rt_r_ichk(F->j_1022) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) == 44))) {
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1022) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1022))) == 41))) {
F->j_1022 = rt_add(rt_r_ichk(F->j_1022), ((rt_int)1LL));
F->more_1024 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P890)rt_nil_check(F->r_1023))->all));
if ((g_pending_prag_932 == NULL)) {
g_pending_prag_932 = F->r_1023;
} else {
g_pending_prag_932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(g_pending_prag_932))->all), (((P890)rt_nil_check(F->r_1023))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1022);
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
F->i_1027 = RT_R_IUNDEF;
F->i_1027 = ((rt_int)1LL);
F->k_1028 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1027) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1028 = rt_r_ichk(F->i_1027);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1028))) != 59)) {
F->k_1028 = rt_add(rt_r_ichk(F->k_1028), ((rt_int)1LL));
}
{
F->p_1029 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1027), rt_sub(rt_r_ichk(F->k_1028), ((rt_int)1LL))));
F->ok_1030 = ((((((((((rt_str_eq(F->p_1029, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1029, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1029, rt_str("OPEN", 4))) || rt_str_eq(F->p_1029, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1029, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1029, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1029, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1029, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1029, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1029, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1029).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1029, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1031 = ((((((((((rt_int)((F->p_1029).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1029, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1029, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1029, rt_str("OPEN", 4))) || rt_str_eq(F->p_1029, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1029).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1029, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1029, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1029, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1029).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1029, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1031 && (!F->ok_1030))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1029); b_; }));
}
}
F->i_1027 = rt_add(rt_r_ichk(F->k_1028), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1032 = RT_R_IUNDEF;
F->i_1032 = ((rt_int)1LL);
F->j_1033 = RT_R_IUNDEF;
F->j_1033 = ((rt_int)0LL);
F->n_1034 = RT_R_IUNDEF;
F->n_1034 = ((rt_int)(((*F->line_56)).len));
F->c_1035 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1032) <= rt_r_ichk(F->n_1034))) {
F->c_1035 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1032)));
if (((((rt_r_echk(F->c_1035) == 32) || (rt_r_echk(F->c_1035) == 9)) || (rt_r_echk(F->c_1035) == 13)) || (rt_r_echk(F->c_1035) == 12))) {
F->i_1032 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1035) == 37)) {
F->i_1032 = rt_add(rt_r_ichk(F->n_1034), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1035))) {
F->j_1033 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1032));
{
F->w_1036 = rt_str_new(rt_sub(rt_r_ichk(F->j_1033), rt_r_ichk(F->i_1032)));
rt_str_assign(&F->w_1036, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1032), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))));
{ rt_int lo1038 = ((rt_int)1LL), hi1039 = ((rt_int)((F->w_1036).len));
for (rt_int it1040 = lo1038; it1040 <= hi1039; it1040++) {
F->k_1037 = it1040;
(*rt_str_at(&F->w_1036, F->k_1037)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1036, F->k_1037)));
}
}
if (rt_str_eq(F->w_1036, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) != 59))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1036, rt_str("PRAG", 4))) {
F->j_1033 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1033));
} else if (f_is_reserved_36(&F->w_1036)) {
f_add_token_42((((rt_int)2LL)), &F->w_1036, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1036)) {
f_add_token_42((((rt_int)3LL)), &F->w_1036, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1036, ((rt_int)0LL));
}
}
F->i_1032 = rt_r_ichk(F->j_1033);
} else if (f_is_digit_11(rt_r_echk(F->c_1035))) {
F->j_1033 = rt_r_ichk(F->i_1032);
while (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033)))))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1033) < rt_r_ichk(F->n_1034)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL))))))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033)))))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 101)))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 45)))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033)))))) {
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1032), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1032), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1032), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL)))));
}
F->i_1032 = rt_r_ichk(F->j_1033);
} else if ((((rt_r_echk(F->c_1035) == 39) && (rt_r_ichk(F->i_1032) < rt_r_ichk(F->n_1034))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL)))) == 39))) {
F->j_1033 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1033) < rt_r_ichk(F->n_1034)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1033) >= rt_r_ichk(F->n_1034))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1032), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1032 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1035) == 39)) {
F->j_1033 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1033) > rt_r_ichk(F->n_1034)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))))))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1033 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1033));
{
F->w_1041 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1033), rt_r_ichk(F->i_1032)), ((rt_int)1LL)));
rt_str_assign(&F->w_1041, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))));
{ rt_int lo1043 = ((rt_int)1LL), hi1044 = ((rt_int)((F->w_1041).len));
for (rt_int it1045 = lo1043; it1045 <= hi1044; it1045++) {
F->k_1042 = it1045;
(*rt_str_at(&F->w_1041, F->k_1042)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1041, F->k_1042)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1041, ((rt_int)0LL));
}
F->i_1032 = rt_r_ichk(F->j_1033);
} else if ((rt_r_echk(F->c_1035) == 34)) {
F->j_1033 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1033) <= rt_r_ichk(F->n_1034)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1033))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1033 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1033) > rt_r_ichk(F->n_1034))) {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1033), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1032 = rt_add(rt_r_ichk(F->j_1033), ((rt_int)1LL));
} else {
{
F->two_1046 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1046, rt_str("  ", 2));
(*rt_str_at(&F->two_1046, ((rt_int)1LL))) = rt_r_echk(F->c_1035);
if ((rt_r_ichk(F->i_1032) < rt_r_ichk(F->n_1034))) {
(*rt_str_at(&F->two_1046, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1046, rt_str(":=", 2)) || rt_str_eq(F->two_1046, rt_str("=>", 2))) || rt_str_eq(F->two_1046, rt_str("..", 2))) || rt_str_eq(F->two_1046, rt_str("**", 2))) || rt_str_eq(F->two_1046, rt_str("/=", 2))) || rt_str_eq(F->two_1046, rt_str("<=", 2))) || rt_str_eq(F->two_1046, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1046, ((rt_int)0LL));
F->i_1032 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1046, rt_str("<<", 2)) || rt_str_eq(F->two_1046, rt_str(">>", 2))) || rt_str_eq(F->two_1046, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1046, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1046, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1032 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1035) == 40) || (rt_r_echk(F->c_1035) == 41)) || (rt_r_echk(F->c_1035) == 91)) || (rt_r_echk(F->c_1035) == 93)) || (rt_r_echk(F->c_1035) == 44)) || (rt_r_echk(F->c_1035) == 58)) || (rt_r_echk(F->c_1035) == 59)) || (rt_r_echk(F->c_1035) == 46)) || (rt_r_echk(F->c_1035) == 35)) || (rt_r_echk(F->c_1035) == 43)) || (rt_r_echk(F->c_1035) == 45)) || (rt_r_echk(F->c_1035) == 42)) || (rt_r_echk(F->c_1035) == 47)) || (rt_r_echk(F->c_1035) == 38)) || (rt_r_echk(F->c_1035) == 61)) || (rt_r_echk(F->c_1035) == 60)) || (rt_r_echk(F->c_1035) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1035)); b_; }), ((rt_int)0LL));
F->i_1032 = rt_add(rt_r_ichk(F->i_1032), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_931), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1047 = rt_str_new(rt_sizeln());
rt_readln(&F->line_1047);
g_src_line_931 = rt_add(rt_r_ichk(g_src_line_931), ((rt_int)1LL));
f_lex_line_57(&F->line_1047);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P897 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_1048 = NULL;
{ R898 *cell1049 = rt_alloc(sizeof(R898));
(*cell1049).name = NULL;
(*cell1049).tag = NULL;
(*cell1049).prags = NULL;
(*cell1049).labels = NULL;
(*cell1049).a = NULL;
(*cell1049).b = NULL;
(*cell1049).c = NULL;
(*cell1049).d = NULL;
(*cell1049).e = NULL;
(*cell1049).next = NULL;
F->x_1048 = cell1049;
}
(*(P897)rt_nil_check(F->x_1048)).kind = F->kind_59;
(*(P897)rt_nil_check(F->x_1048)).line = F->line_60;
F->result_ = F->x_1048;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P897 *head_62, P897 *tail_63, P897 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P897)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P897)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P897)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P897 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_1050 = RT_R_IUNDEF;
F->n_1050 = ((rt_int)0LL);
F->p_1051 = NULL;
F->p_1051 = F->l_66;
while ((F->p_1051 != NULL)) {
F->n_1050 = rt_add(rt_r_ichk(F->n_1050), ((rt_int)1LL));
F->p_1051 = (*(P897)rt_nil_check(F->p_1051)).next;
}
F->result_ = rt_r_ichk(F->n_1050);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_930), F->k_75) > rt_r_ichk(g_ntoks_929))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_930), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P890 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_930), F->k_77) > rt_r_ichk(g_ntoks_929))) {
F->result_ = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_929), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_930), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
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
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
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
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
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
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P890 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_930), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1052 = NULL;
F->x_1052 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->x_1052)).name = f_expect_id_89();
F->result_ = F->x_1052;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1053 = NULL;
F->tail_1054 = NULL;
f_append_65(&F->head_1053, &F->tail_1054, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1053, &F->tail_1054, f_name_node_90());
}
F->result_ = F->head_1053;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1055 = RT_R_IUNDEF;
F->line_1055 = f_cur_line_68();
F->x_1056 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->x_1056 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_1055));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P897)rt_nil_check(F->x_1056)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1056;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1057 = rt_str_copy((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if (rt_str_eq(F->w_1057, rt_str("ARRAY", 5))) {
F->x_1056 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_1055));
{
F->head_1058 = NULL;
F->tail_1059 = NULL;
f_append_65(&F->head_1058, &F->tail_1059, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1058, &F->tail_1059, f_p_subtype_92());
}
(*(P897)rt_nil_check(F->x_1056)).a = F->head_1058;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P897)rt_nil_check(F->x_1056)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_1057, rt_str("RECORD", 6)) || rt_str_eq(F->w_1057, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1057, rt_str("RECORD", 6))) {
F->x_1056 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_1055));
} else {
F->x_1056 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_1055));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1060 = NULL;
F->tail_1061 = NULL;
F->more_1062 = RT_R_EUNDEF;
F->more_1062 = 1;
while (rt_r_echk(F->more_1062)) {
F->names_1063 = NULL;
F->names_1063 = f_id_list_91();
F->st_1064 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1064 = f_p_subtype_92();
while ((F->names_1063 != NULL)) {
F->cmp_1065 = NULL;
F->cmp_1065 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P897)rt_nil_check(F->names_1063)).line));
(*(P897)rt_nil_check(F->cmp_1065)).name = (*(P897)rt_nil_check(F->names_1063)).name;
(*(P897)rt_nil_check(F->cmp_1065)).a = F->st_1064;
f_append_65(&F->head_1060, &F->tail_1061, F->cmp_1065);
F->names_1063 = (*(P897)rt_nil_check(F->names_1063)).next;
}
F->more_1062 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1056)).a = F->head_1060;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1057, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1056)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1057, rt_str("ENUM", 4))) {
F->x_1056 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_1055));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1066 = NULL;
F->tail_1067 = NULL;
F->more_1068 = RT_R_EUNDEF;
F->more_1068 = 1;
while (rt_r_echk(F->more_1068)) {
F->lit_1069 = NULL;
F->lit_1069 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1055));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P897)rt_nil_check(F->lit_1069)).name = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
f_append_65(&F->head_1066, &F->tail_1067, F->lit_1069);
F->more_1068 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1056)).a = F->head_1066;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1056)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P897)rt_nil_check(F->x_1056)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1057, rt_str("STRING", 6)) || rt_str_eq(F->w_1057, rt_str("SET", 3))) || rt_str_eq(F->w_1057, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1057, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1057, rt_str("STRING", 6))) {
F->x_1056 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_1055));
} else if (rt_str_eq(F->w_1057, rt_str("SET", 3))) {
F->x_1056 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_1055));
} else if (rt_str_eq(F->w_1057, rt_str("MAILBOX", 7))) {
F->x_1056 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_1055));
} else {
F->x_1056 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_1055));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P897)rt_nil_check(F->x_1056)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1056)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_1057, rt_str("INT", 3))) {
F->x_1056 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_1055));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1056)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P897)rt_nil_check(F->x_1056)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1057, rt_str("FLOAT", 5))) {
F->x_1056 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_1055));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1056)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1056)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P897)rt_nil_check(F->x_1056)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1056 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_1055));
(*(P897)rt_nil_check(F->x_1056)).name = f_mk_3(&F->w_1057);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1056)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1056)).b = f_constraint_list_93();
(*(P897)rt_nil_check(F->x_1056)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1056;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1070 = NULL;
F->tail_1071 = NULL;
F->more_1072 = RT_R_EUNDEF;
F->more_1072 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1072)) {
F->line_1073 = RT_R_IUNDEF;
F->line_1073 = f_cur_line_68();
F->lo_1074 = NULL;
F->lo_1074 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1075 = NULL;
F->r_1075 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1073));
(*(P897)rt_nil_check(F->r_1075)).a = F->lo_1074;
(*(P897)rt_nil_check(F->r_1075)).b = f_expr_103();
f_append_65(&F->head_1070, &F->tail_1071, F->r_1075);
} else {
f_append_65(&F->head_1070, &F->tail_1071, F->lo_1074);
}
F->more_1072 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1070;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1076 = NULL;
F->tail_1077 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1076, &F->tail_1077, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1076, &F->tail_1077, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1076;
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

static P897 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1078 = NULL;
F->tail_1079 = NULL;
F->more_1080 = RT_R_EUNDEF;
F->more_1080 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1080)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P890)rt_nil_check((*(P892)rt_nil_check((((P894)rt_nil_check(g_toks_928))->all).p[(rt_index(rt_r_ichk(g_tpos_930), (((P894)rt_nil_check(g_toks_928))->all).lo, (((P894)rt_nil_check(g_toks_928))->all).hi) - (((P894)rt_nil_check(g_toks_928))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1078, &F->tail_1079, f_p_subtype_92());
} else {
f_append_65(&F->head_1078, &F->tail_1079, f_expr_103());
}
F->more_1080 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1078;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_binop_102(P890 op_98, P897 l_99, P897 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1081 = NULL;
F->x_1081 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P897)rt_nil_check(F->x_1081)).name = F->op_98;
(*(P897)rt_nil_check(F->x_1081)).a = F->l_99;
(*(P897)rt_nil_check(F->x_1081)).b = F->r_100;
F->result_ = F->x_1081;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1082 = NULL;
F->l_1082 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1083 = NULL;
F->op_1083 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1084 = RT_R_IUNDEF;
F->line_1084 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1082 = f_binop_102(F->op_1083, F->l_1082, f_expr_and_104(), rt_r_ichk(F->line_1084));
}
F->result_ = F->l_1082;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1085 = NULL;
F->l_1085 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1086 = RT_R_IUNDEF;
F->line_1086 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1085 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1085, f_expr_not_105(), rt_r_ichk(F->line_1086));
}
F->result_ = F->l_1085;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1087 = NULL;
F->x_1087 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1087)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P897)rt_nil_check(F->x_1087)).a = f_expr_not_105();
F->result_ = F->x_1087;
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

static P897 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1088 = NULL;
F->l_1088 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P890)rt_nil_check((*(P892)rt_nil_check((((P894)rt_nil_check(g_toks_928))->all).p[(rt_index(rt_r_ichk(g_tpos_930), (((P894)rt_nil_check(g_toks_928))->all).lo, (((P894)rt_nil_check(g_toks_928))->all).hi) - (((P894)rt_nil_check(g_toks_928))->all).lo)])).s))->all)))) {
F->op_1089 = NULL;
F->op_1089 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1090 = RT_R_IUNDEF;
F->line_1090 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1088 = f_binop_102(F->op_1089, F->l_1088, f_expr_add_109(), rt_r_ichk(F->line_1090));
}
F->result_ = F->l_1088;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1091 = NULL;
F->l_1091 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1092 = NULL;
F->op_1092 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1093 = RT_R_IUNDEF;
F->line_1093 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1091 = f_binop_102(F->op_1092, F->l_1091, f_expr_mul_110(), rt_r_ichk(F->line_1093));
}
F->result_ = F->l_1091;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1094 = NULL;
F->l_1094 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1095 = NULL;
F->op_1095 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1096 = RT_R_IUNDEF;
F->line_1096 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1094 = f_binop_102(F->op_1095, F->l_1094, f_expr_pow_111(), rt_r_ichk(F->line_1096));
}
F->result_ = F->l_1094;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1097 = NULL;
F->l_1097 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1098 = RT_R_IUNDEF;
F->line_1098 = f_cur_line_68();
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->l_1097 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1097, f_expr_prefix_112(), rt_r_ichk(F->line_1098));
}
F->result_ = F->l_1097;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1099 = NULL;
F->x_1099 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->x_1099)).name = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1099)).a = f_expr_prefix_112();
F->result_ = F->x_1099;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1100 = NULL;
F->p_1100 = f_primary_114();
while (1) {
F->line_1101 = RT_R_IUNDEF;
F->line_1101 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1102 = NULL;
F->x_1102 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1101));
F->head_1103 = NULL;
F->tail_1104 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1105 = RT_R_EUNDEF;
F->more_1105 = 1;
while (rt_r_echk(F->more_1105)) {
F->lo_1106 = NULL;
F->lo_1106 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1107 = NULL;
F->r_1107 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1101));
(*(P897)rt_nil_check(F->r_1107)).a = F->lo_1106;
(*(P897)rt_nil_check(F->r_1107)).b = f_expr_103();
f_append_65(&F->head_1103, &F->tail_1104, F->r_1107);
} else {
f_append_65(&F->head_1103, &F->tail_1104, F->lo_1106);
}
F->more_1105 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P897)rt_nil_check(F->x_1102)).a = F->p_1100;
(*(P897)rt_nil_check(F->x_1102)).b = F->head_1103;
F->p_1100 = F->x_1102;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1108 = NULL;
F->x_1108 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1101));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1108)).a = F->p_1100;
(*(P897)rt_nil_check(F->x_1108)).name = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->p_1100 = F->x_1108;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P897)rt_nil_check(F->p_1100)).kind) == (((rt_int)7LL))))) {
F->x_1109 = NULL;
F->x_1109 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1101));
(*(P897)rt_nil_check(F->x_1109)).a = F->p_1100;
(*(P897)rt_nil_check(F->x_1109)).b = f_actual_tt_97();
F->p_1100 = F->x_1109;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1110 = NULL;
F->x_1110 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1101));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1110)).a = F->p_1100;
(*(P897)rt_nil_check(F->x_1110)).b = f_p_subtype_92();
F->p_1100 = F->x_1110;
} else {
F->result_ = F->p_1100;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1111 = RT_R_IUNDEF;
F->line_1111 = f_cur_line_68();
F->x_1112 = NULL;
F->k_1113 = RT_R_IUNDEF;
F->k_1113 = rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1113) == (((rt_int)4LL)))) {
F->x_1112 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1111));
(*(P897)rt_nil_check(F->x_1112)).ival = rt_r_ichk((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P897)rt_nil_check(F->x_1112)).name = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = F->x_1112;
goto ret_;
}
if ((((rt_r_ichk(F->k_1113) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1113) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1113) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1113) == (((rt_int)5LL)))) {
F->x_1112 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1111));
} else if ((rt_r_ichk(F->k_1113) == (((rt_int)7LL)))) {
F->x_1112 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1111));
} else {
F->x_1112 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1111));
}
(*(P897)rt_nil_check(F->x_1112)).name = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = F->x_1112;
goto ret_;
}
if ((rt_r_ichk(F->k_1113) == (((rt_int)1LL)))) {
F->w_1114 = rt_str_copy((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1114, rt_str("TRUE", 4)) || rt_str_eq(F->w_1114, rt_str("FALSE", 5)))) {
F->x_1112 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1111));
if (rt_str_eq(F->w_1114, rt_str("TRUE", 4))) {
(*(P897)rt_nil_check(F->x_1112)).ival = ((rt_int)1LL);
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = F->x_1112;
goto ret_;
}
if (rt_str_eq(F->w_1114, rt_str("NIL", 3))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1111));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1112 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1111));
(*(P897)rt_nil_check(F->x_1112)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1112;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1115 = NULL;
F->tail_1116 = NULL;
F->x_1112 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1111));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1117 = RT_R_EUNDEF;
F->more_1117 = 1;
while (rt_r_echk(F->more_1117)) {
f_append_65(&F->head_1115, &F->tail_1116, f_constructor_item_115());
F->more_1117 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P897)rt_nil_check(F->x_1112)).a = F->head_1115;
F->result_ = F->x_1112;
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

static P897 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1118 = RT_R_IUNDEF;
F->line_1118 = f_cur_line_68();
F->it_1119 = NULL;
F->it_1119 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1118));
F->first_1120 = NULL;
F->first_1120 = f_expr_103();
F->keys_1121 = NULL;
F->ktail_1122 = NULL;
F->lab_1123 = NULL;
F->lab_1123 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1118));
(*(P897)rt_nil_check(F->lab_1123)).a = F->first_1120;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P897)rt_nil_check(F->lab_1123)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1121, &F->ktail_1122, F->lab_1123);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1124 = RT_R_IUNDEF;
F->save_1124 = rt_r_ichk(g_tpos_930);
F->more_1125 = NULL;
F->tail2_1126 = NULL;
F->ok_1127 = RT_R_EUNDEF;
F->ok_1127 = 0;
F->go_1128 = RT_R_EUNDEF;
F->go_1128 = 1;
while ((rt_r_echk(F->go_1128) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1129 = NULL;
F->l2_1129 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1118));
(*(P897)rt_nil_check(F->l2_1129)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P897)rt_nil_check(F->l2_1129)).b = f_expr_103();
}
f_append_65(&F->more_1125, &F->tail2_1126, F->l2_1129);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1127 = 1;
F->go_1128 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1128 = 0;
}
}
if (rt_r_echk(F->ok_1127)) {
f_append_65(&F->keys_1121, &F->ktail_1122, F->lab_1123);
f_append_65(&F->keys_1121, &F->ktail_1122, F->more_1125);
} else {
g_tpos_930 = rt_r_ichk(F->save_1124);
}
}
if (((F->keys_1121 == NULL) && ((*(P897)rt_nil_check(F->lab_1123)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1121 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P897)rt_nil_check(F->it_1119)).a = F->keys_1121;
(*(P897)rt_nil_check(F->it_1119)).b = f_expr_103();
} else {
(*(P897)rt_nil_check(F->it_1119)).b = F->first_1120;
}
F->result_ = F->it_1119;
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

static P897 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1130 = NULL;
F->tail_1131 = NULL;
F->stmts_1132 = RT_R_EUNDEF;
F->stmts_1132 = 0;
F->after_1133 = NULL;
while ((!f_at_body_end_116())) {
F->x_1134 = NULL;
F->x_1134 = f_body_element_118();
if (((F->x_1134 != NULL) && ((((rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1132)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1134 != NULL) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1132) && (F->after_1133 == NULL))) {
F->after_1133 = F->x_1134;
}
} else if (((F->x_1134 != NULL) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1134)).kind) != (((rt_int)33LL))))) {
if ((F->after_1133 != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->after_1133)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1132 = 1;
}
f_append_65(&F->head_1130, &F->tail_1131, F->x_1134);
}
F->result_ = F->head_1130;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1135 = NULL;
F->pr_1136 = NULL;
F->pr_1136 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1135 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1135)).a = f_expr_103();
} else {
F->x_1135 = f_statement_141();
}
if ((F->pr_1136 != NULL)) {
F->p_1137 = NULL;
F->p_1137 = F->x_1135;
while ((F->p_1137 != NULL)) {
if (((*(P897)rt_nil_check(F->p_1137)).prags == NULL)) {
(*(P897)rt_nil_check(F->p_1137)).prags = F->pr_1136;
} else {
(*(P897)rt_nil_check(F->p_1137)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->pr_1136))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1137)).prags))->all)); b_; }));
}
F->p_1137 = (*(P897)rt_nil_check(F->p_1137)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1135;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1138 = RT_R_IUNDEF;
F->line_1138 = f_cur_line_68();
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
F->head_1139 = NULL;
F->tail_1140 = NULL;
F->names_1141 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->names_1141 = f_id_list_91();
while ((F->names_1141 != NULL)) {
F->x_1142 = NULL;
F->x_1142 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1138));
(*(P897)rt_nil_check(F->x_1142)).name = (*(P897)rt_nil_check(F->names_1141)).name;
f_append_65(&F->head_1139, &F->tail_1140, F->x_1142);
F->names_1141 = (*(P897)rt_nil_check(F->names_1141)).next;
}
F->result_ = F->head_1139;
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

static P897 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1143 = RT_R_IUNDEF;
F->line_1143 = f_cur_line_68();
F->is_var_1144 = RT_R_EUNDEF;
F->is_var_1144 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1145 = NULL;
F->st_1146 = NULL;
F->init_1147 = NULL;
F->loc_1148 = NULL;
F->loc_kind_1149 = RT_R_IUNDEF;
F->loc_kind_1149 = ((rt_int)0LL);
F->head_1150 = NULL;
F->tail_1151 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->names_1145 = f_id_list_91();
if (rt_r_echk(F->is_var_1144)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1146 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->loc_kind_1149 = ((rt_int)1LL);
} else {
F->loc_kind_1149 = ((rt_int)2LL);
}
F->loc_1148 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1147 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1146 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1147 = f_expr_103();
}
while ((F->names_1145 != NULL)) {
F->x_1152 = NULL;
if (rt_r_echk(F->is_var_1144)) {
F->x_1152 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1143));
} else {
F->x_1152 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1143));
}
(*(P897)rt_nil_check(F->x_1152)).name = (*(P897)rt_nil_check(F->names_1145)).name;
(*(P897)rt_nil_check(F->x_1152)).a = F->st_1146;
(*(P897)rt_nil_check(F->x_1152)).b = F->init_1147;
(*(P897)rt_nil_check(F->x_1152)).c = F->loc_1148;
(*(P897)rt_nil_check(F->x_1152)).ival = rt_r_ichk(F->loc_kind_1149);
f_append_65(&F->head_1150, &F->tail_1151, F->x_1152);
F->names_1145 = (*(P897)rt_nil_check(F->names_1145)).next;
}
F->result_ = F->head_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1153 = NULL;
F->x_1153 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1153)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1153)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1153)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P897)rt_nil_check(F->x_1153)).a = f_p_subtype_92();
F->result_ = F->x_1153;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1154 = RT_R_IUNDEF;
F->depth_1154 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1154) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1154 = rt_add(rt_r_ichk(F->depth_1154), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1154 = rt_sub(rt_r_ichk(F->depth_1154), ((rt_int)1LL));
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P897 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1155 = RT_R_IUNDEF;
F->line_1155 = f_cur_line_68();
F->name_1156 = NULL;
F->params_1157 = NULL;
F->x_1158 = NULL;
F->tts_1159 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->name_1156 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1159 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1157 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->x_1158 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1155));
(*(P897)rt_nil_check(F->x_1158)).d = F->params_1157;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1158)).b = f_formal_params_126();
}
} else {
F->x_1158 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1155));
(*(P897)rt_nil_check(F->x_1158)).b = F->params_1157;
}
(*(P897)rt_nil_check(F->x_1158)).name = F->name_1156;
(*(P897)rt_nil_check(F->x_1158)).e = F->tts_1159;
(*(P897)rt_nil_check(F->x_1158)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1158;
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

static P897 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1160 = NULL;
F->tail_1161 = NULL;
F->more_1162 = RT_R_EUNDEF;
F->more_1162 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1162)) {
F->mode_1163 = RT_R_IUNDEF;
F->mode_1163 = (((rt_int)1LL));
F->names_1164 = NULL;
F->ntail_1165 = NULL;
F->st_1166 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1163 = f_mode_of_125(&(((P890)rt_nil_check((*(P892)rt_nil_check((((P894)rt_nil_check(g_toks_928))->all).p[(rt_index(rt_r_ichk(g_tpos_930), (((P894)rt_nil_check(g_toks_928))->all).lo, (((P894)rt_nil_check(g_toks_928))->all).hi) - (((P894)rt_nil_check(g_toks_928))->all).lo)])).s))->all));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
}
f_append_65(&F->names_1164, &F->ntail_1165, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
f_append_65(&F->names_1164, &F->ntail_1165, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1166 = f_p_subtype_92();
while ((F->names_1164 != NULL)) {
F->p_1167 = NULL;
F->p_1167 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P897)rt_nil_check(F->names_1164)).line));
(*(P897)rt_nil_check(F->p_1167)).name = (*(P897)rt_nil_check(F->names_1164)).name;
(*(P897)rt_nil_check(F->p_1167)).ival = rt_r_ichk(F->mode_1163);
(*(P897)rt_nil_check(F->p_1167)).a = F->st_1166;
f_append_65(&F->head_1160, &F->tail_1161, F->p_1167);
F->names_1164 = (*(P897)rt_nil_check(F->names_1164)).next;
}
F->more_1162 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1160;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P897 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1168 = NULL;
F->tail_1169 = NULL;
F->more_1170 = RT_R_EUNDEF;
F->more_1170 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P897)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P897)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1170)) {
F->ro_1171 = RT_R_EUNDEF;
F->ro_1171 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1172 = NULL;
F->x_1172 = f_name_node_90();
if (rt_r_echk(F->ro_1171)) {
(*(P897)rt_nil_check(F->x_1172)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1168, &F->tail_1169, F->x_1172);
F->more_1170 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->owner_127)).d = F->head_1168;
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

static P890 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_930), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1173 = NULL;
F->r_1173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1173))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1173))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1173))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1173))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P890)rt_nil_check((*(P892)rt_nil_check((((P894)rt_nil_check(g_toks_928))->all).p[(rt_index(rt_r_ichk(g_tpos_930), (((P894)rt_nil_check(g_toks_928))->all).lo, (((P894)rt_nil_check(g_toks_928))->all).hi) - (((P894)rt_nil_check(g_toks_928))->all).lo)])).s))->all))))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_930), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P897 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1174 = RT_R_IUNDEF;
F->line_1174 = f_cur_line_68();
F->x_1175 = NULL;
F->is_abn_1176 = RT_R_EUNDEF;
F->is_abn_1176 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1177 = RT_R_EUNDEF;
F->is_func_1177 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1178 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1177)) {
F->x_1175 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1174));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1175 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1174));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1176)) {
(*(P897)rt_nil_check(F->x_1175)).flag = ((rt_int)1LL);
}
(*(P897)rt_nil_check(F->x_1175)).name = f_definable_name_131();
if ((((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all), rt_str(">", 1)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1174), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1175)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1175)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1177)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P897)rt_nil_check(F->x_1175)).b = f_p_subtype_92();
}
F->dummy_1178 = f_imports_list_128(F->x_1175);
if (((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P897)rt_nil_check(F->x_1175)).prags == NULL)) {
(*(P897)rt_nil_check(F->x_1175)).prags = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P897)rt_nil_check(F->x_1175)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).prags))->all), (((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P897)rt_nil_check(F->x_1175)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1177)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P890)rt_nil_check(f_definable_name_131()))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1175)).name))->all)); b_; }));
}
F->result_ = F->x_1175;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1179 = NULL;
F->x_1179 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1180 = RT_R_EUNDEF;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1179)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1179)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1179)).b = f_formal_params_126();
}
F->dummy_1180 = f_imports_list_128(F->x_1179);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P897)rt_nil_check(F->x_1179)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P897)rt_nil_check(F->x_1179)).ival = ((rt_int)0LL);
} else {
F->head_1181 = NULL;
F->tail_1182 = NULL;
F->more_1183 = RT_R_EUNDEF;
F->more_1183 = 1;
while (rt_r_echk(F->more_1183)) {
F->n_1184 = NULL;
F->n_1184 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P897)rt_nil_check(F->n_1184)).ival = ((rt_int)1LL);
}
(*(P897)rt_nil_check(F->n_1184)).name = f_definable_name_131();
f_append_65(&F->head_1181, &F->tail_1182, F->n_1184);
F->more_1183 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1179)).a = F->head_1181;
(*(P897)rt_nil_check(F->x_1179)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P897)rt_nil_check(F->x_1179)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P890)rt_nil_check(f_expect_id_89()))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1179)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1179;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1185 = NULL;
F->tail_1186 = NULL;
F->more_1187 = RT_R_EUNDEF;
F->more_1187 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1187)) {
f_append_65(&F->head_1185, &F->tail_1186, f_name_node_90());
F->more_1187 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1188 = NULL;
F->x_1188 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1189 = NULL;
F->tail_1190 = NULL;
F->more_1191 = RT_R_EUNDEF;
F->more_1191 = 1;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
while (rt_r_echk(F->more_1191)) {
F->names_1192 = NULL;
F->names_1192 = f_id_list_91();
F->kind_1193 = RT_R_IUNDEF;
F->kind_1193 = ((rt_int)6LL);
F->st_1194 = NULL;
F->items_1195 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1193 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1193 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1193 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1193 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1193 = ((rt_int)5LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->kind_1193 = ((rt_int)7LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->kind_1193 = ((rt_int)8LL);
} else {
F->st_1194 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1193) <= ((rt_int)5LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1195 = f_type_list_136();
}
if (((rt_r_ichk(F->kind_1193) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1194 = f_p_subtype_92();
}
while ((F->names_1192 != NULL)) {
F->p_1196 = NULL;
F->p_1196 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P897)rt_nil_check(F->names_1192)).line));
(*(P897)rt_nil_check(F->p_1196)).name = (*(P897)rt_nil_check(F->names_1192)).name;
(*(P897)rt_nil_check(F->p_1196)).ival = rt_r_ichk(F->kind_1193);
(*(P897)rt_nil_check(F->p_1196)).a = F->st_1194;
(*(P897)rt_nil_check(F->p_1196)).b = F->items_1195;
f_append_65(&F->head_1189, &F->tail_1190, F->p_1196);
F->names_1192 = (*(P897)rt_nil_check(F->names_1192)).next;
}
F->more_1191 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1197 = NULL;
F->ntail_1198 = NULL;
F->more_1191 = 1;
while (rt_r_echk(F->more_1191)) {
F->it_1199 = NULL;
F->it_1199 = f_nn_61((((rt_int)52LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).ival = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).ival = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).ival = ((rt_int)5LL);
}
(*(P897)rt_nil_check(F->it_1199)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).b = f_type_list_136();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P897)rt_nil_check(F->it_1199)).a = f_p_subtype_92();
}
f_append_65(&F->nhead_1197, &F->ntail_1198, F->it_1199);
F->more_1191 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1188)).d = F->nhead_1197;
}
(*(P897)rt_nil_check(F->x_1188)).a = F->head_1189;
(*(P897)rt_nil_check(F->x_1188)).b = f_declaration_119();
(*(P897)rt_nil_check(F->x_1188)).name = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->x_1188)).b)).name;
F->result_ = F->x_1188;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_type_list_136(void) {
  struct f_type_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1200 = NULL;
F->tail_1201 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1202 = RT_R_EUNDEF;
F->more_1202 = 1;
while (rt_r_echk(F->more_1202)) {
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1203 = NULL;
F->n_1203 = f_nn_61((((rt_int)80LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->n_1203)).name = f_expect_id_89();
f_append_65(&F->head_1200, &F->tail_1201, F->n_1203);
} else {
f_append_65(&F->head_1200, &F->tail_1201, f_p_subtype_92());
}
F->more_1202 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1200;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_task_decl_137(void) {
  struct f_task_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1204 = NULL;
F->x_1204 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1205 = RT_R_EUNDEF;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1204)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1204)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1204)).a = f_formal_params_126();
}
F->dummy_1205 = f_imports_list_128(F->x_1204);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P897)rt_nil_check(F->x_1204)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P890)rt_nil_check(f_expect_id_89()))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1204)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1204)).name))->all)); b_; }));
}
F->result_ = F->x_1204;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_expose_decl_138(void) {
  struct f_expose_decl_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1206 = NULL;
F->x_1206 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P897)rt_nil_check(F->x_1206)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1207 = NULL;
F->tail_1208 = NULL;
F->more_1209 = RT_R_EUNDEF;
F->more_1209 = 1;
while (rt_r_echk(F->more_1209)) {
F->n_1210 = NULL;
F->n_1210 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P897)rt_nil_check(F->n_1210)).ival = ((rt_int)1LL);
}
(*(P897)rt_nil_check(F->n_1210)).name = f_definable_name_131();
f_append_65(&F->head_1207, &F->tail_1208, F->n_1210);
F->more_1209 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1206)).a = F->head_1207;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P897)rt_nil_check(F->x_1206)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P897)rt_nil_check(F->x_1206)).flag = rt_add(rt_r_ichk((*(P897)rt_nil_check(F->x_1206)).flag), ((rt_int)2LL));
}
(*(P897)rt_nil_check(F->x_1206)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1206)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1206)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1211 = NULL;
F->tail_1212 = NULL;
F->more_1213 = RT_R_EUNDEF;
F->more_1213 = 1;
while (rt_r_echk(F->more_1213)) {
F->n_1214 = NULL;
F->n_1214 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1215 = NULL;
F->tgt_1215 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->n_1214)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P897)rt_nil_check(F->tgt_1215)).name = f_definable_name_131();
(*(P897)rt_nil_check(F->n_1214)).a = F->tgt_1215;
f_append_65(&F->head_1211, &F->tail_1212, F->n_1214);
F->more_1213 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P897)rt_nil_check(F->x_1206)).c = F->head_1211;
}
F->result_ = F->x_1206;
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

static P897 f_statement_141(void) {
  struct f_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1216 = NULL;
F->ltail_1217 = NULL;
F->match_1218 = NULL;
F->s_1219 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1216, &F->ltail_1217, f_name_node_90());
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P890)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1218 = f_expect_id_89();
}
F->s_1219 = f_unlabeled_statement_142();
if ((F->match_1218 != NULL)) {
if ((((((((rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P890)rt_nil_check(f_expect_id_89()))->all), (((P890)rt_nil_check(F->match_1218))->all)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_1219)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P890)rt_nil_check(F->match_1218))->all)); b_; }));
}
(*(P897)rt_nil_check(F->s_1219)).tag = F->match_1218;
}
(*(P897)rt_nil_check(F->s_1219)).labels = F->labels_1216;
F->result_ = F->s_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_unlabeled_statement_142(void) {
  struct f_unlabeled_statement_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1220 = RT_R_IUNDEF;
F->line_1220 = f_cur_line_68();
F->x_1221 = NULL;
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
F->x_1221 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_150();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).name = f_expect_id_89();
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P897)rt_nil_check(F->x_1221)).a = f_expr_103();
}
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).name = f_expect_id_89();
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).name = f_expect_id_89();
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1220));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1221)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1221)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P897)rt_nil_check(F->x_1221)).a = f_postfix_113();
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1222 = NULL;
F->tail_1223 = NULL;
F->x_1221 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1224 = NULL;
F->itail_1225 = NULL;
F->more_1226 = RT_R_EUNDEF;
F->more_1226 = 1;
while (rt_r_echk(F->more_1226)) {
f_append_65(&F->invs_1224, &F->itail_1225, f_postfix_113());
F->more_1226 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1222, &F->tail_1223, f_arm_146(F->invs_1224, f_body_117(), rt_r_ichk(F->line_1220)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P897)rt_nil_check(F->x_1221)).a = F->head_1222;
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P897)rt_nil_check(F->x_1221)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1221;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1220));
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1221)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P890)rt_nil_check((*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P897)rt_nil_check(F->x_1221)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P897)rt_nil_check(F->x_1221)).c = f_expr_103();
}
F->result_ = F->x_1221;
goto ret_;
}
{
F->target_1227 = NULL;
F->target_1227 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1221 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1220));
(*(P897)rt_nil_check(F->x_1221)).a = F->target_1227;
(*(P897)rt_nil_check(F->x_1221)).b = f_expr_103();
} else {
F->x_1221 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1220));
(*(P897)rt_nil_check(F->x_1221)).a = F->target_1227;
}
}
F->result_ = F->x_1221;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_arm_146(P897 cond_143, P897 b_144, rt_int line_145) {
  struct f_arm_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_143 = cond_143;
F->b_144 = b_144;
F->line_145 = line_145;
F->x_1228 = NULL;
F->x_1228 = f_nn_61((((rt_int)60LL)), F->line_145);
(*(P897)rt_nil_check(F->x_1228)).a = F->cond_143;
(*(P897)rt_nil_check(F->x_1228)).b = F->b_144;
F->result_ = F->x_1228;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_if_stmt_147(void) {
  struct f_if_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1229 = NULL;
F->x_1229 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1230 = NULL;
F->tail_1231 = NULL;
F->cond_1232 = NULL;
F->go_1233 = RT_R_EUNDEF;
F->go_1233 = 1;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
F->cond_1232 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1230, &F->tail_1231, f_arm_146(F->cond_1232, f_body_117(), rt_r_ichk((*(P897)rt_nil_check(F->x_1229)).line)));
while (rt_r_echk(F->go_1233)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1232 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1230, &F->tail_1231, f_arm_146(F->cond_1232, f_body_117(), rt_r_ichk((*(P897)rt_nil_check(F->x_1229)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P897)rt_nil_check(F->x_1229)).flag = ((rt_int)1LL);
(*(P897)rt_nil_check(F->x_1229)).b = f_body_117();
} else {
F->go_1233 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P897)rt_nil_check(F->x_1229)).a = F->head_1230;
F->result_ = F->x_1229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_case_stmt_148(void) {
  struct f_case_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1234 = NULL;
F->x_1234 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1235 = NULL;
F->tail_1236 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1234)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1237 = NULL;
F->ltail_1238 = NULL;
F->more_1239 = RT_R_EUNDEF;
F->more_1239 = 1;
while (rt_r_echk(F->more_1239)) {
F->l_1240 = NULL;
F->l_1240 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->l_1240)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P897)rt_nil_check(F->l_1240)).b = f_expr_103();
}
f_append_65(&F->labs_1237, &F->ltail_1238, F->l_1240);
F->more_1239 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1235, &F->tail_1236, f_arm_146(F->labs_1237, f_body_117(), rt_r_ichk((*(P897)rt_nil_check(F->x_1234)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P897)rt_nil_check(F->x_1234)).flag = ((rt_int)1LL);
(*(P897)rt_nil_check(F->x_1234)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P897)rt_nil_check(F->x_1234)).b = F->head_1235;
F->result_ = F->x_1234;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_repeat_stmt_149(void) {
  struct f_repeat_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1241 = NULL;
F->x_1241 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P897)rt_nil_check(F->x_1241)).flag = ((rt_int)1LL);
(*(P897)rt_nil_check(F->x_1241)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P897)rt_nil_check(F->x_1241)).ival = ((rt_int)1LL);
}
(*(P897)rt_nil_check(F->x_1241)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P897)rt_nil_check(F->x_1241)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P897)rt_nil_check(F->x_1241)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1241;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_guard_stmt_150(void) {
  struct f_guard_stmt_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1242 = NULL;
F->x_1242 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1243 = NULL;
F->tail_1244 = NULL;
g_tpos_930 = rt_add(rt_r_ichk(g_tpos_930), ((rt_int)1LL));
(*(P897)rt_nil_check(F->x_1242)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1245 = NULL;
F->h_1245 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P897)rt_nil_check(F->h_1245)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P897)rt_nil_check(F->h_1245)).b = f_body_117();
f_append_65(&F->head_1243, &F->tail_1244, F->h_1245);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P897)rt_nil_check(F->x_1242)).flag = ((rt_int)1LL);
(*(P897)rt_nil_check(F->x_1242)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P897)rt_nil_check(F->x_1242)).b = F->head_1243;
F->result_ = F->x_1242;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_program_151(void) {
  struct f_program_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1246 = NULL;
F->tail_1247 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1248 = NULL;
F->pr_1248 = (*(P892)rt_nil_check(({ A896 b_ = (((P894)rt_nil_check(g_toks_928))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_930), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1249 = NULL;
F->u_1249 = f_capsule_decl_133();
(*(P897)rt_nil_check(F->u_1249)).prags = F->pr_1248;
f_append_65(&F->head_1246, &F->tail_1247, F->u_1249);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1246;
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
F->h_1250 = RT_R_IUNDEF;
F->h_1250 = ((rt_int)0LL);
{ rt_int lo1252 = ((rt_int)1LL), hi1253 = ((rt_int)(((*F->s_152)).len));
for (rt_int it1254 = lo1252; it1254 <= hi1253; it1254++) {
F->i_1251 = it1254;
F->h_1250 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1250), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_152), F->i_1251))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1250);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_lookup_155(rstr *name_154) {
  struct f_lookup_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_154 = name_154;
F->y_1255 = NULL;
F->y_1255 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_934 != NULL)) {
while ((F->y_1255 != NULL)) {
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_1255)).depth) >= rt_r_ichk(g_gdepth_966)) && rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1255)).name))->all), (*F->name_154)))) {
F->result_ = F->y_1255;
goto ret_;
}
F->y_1255 = (*(P907)rt_nil_check(F->y_1255)).chain;
}
F->y_1255 = ({ A913 b_ = (((P911)rt_nil_check(g_genv_934))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1255 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1255)).name))->all), (*F->name_154))) {
F->result_ = F->y_1255;
goto ret_;
}
F->y_1255 = (*(P907)rt_nil_check(F->y_1255)).chain;
}
F->y_1255 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1255 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1255)).name))->all), (*F->name_154))) {
F->result_ = F->y_1255;
goto ret_;
}
F->y_1255 = (*(P907)rt_nil_check(F->y_1255)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_lookup_decl_157(P897 d_156) {
  struct f_lookup_decl_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_156 = d_156;
F->y_1256 = NULL;
F->y_1256 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_156)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1256 != NULL)) {
if (((*(P907)rt_nil_check(F->y_1256)).decl == F->d_156)) {
F->result_ = F->y_1256;
goto ret_;
}
F->y_1256 = (*(P907)rt_nil_check(F->y_1256)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_160(P907 y_158, rt_int line_159) {
  struct f_define_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_158 = y_158;
F->line_159 = line_159;
F->h_1257 = RT_R_IUNDEF;
F->h_1257 = f_hash_153(&(((P890)rt_nil_check((*(P907)rt_nil_check(F->y_158)).name))->all));
F->z_1258 = NULL;
F->z_1258 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(rt_r_ichk(F->h_1257), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1258 != NULL)) {
if ((((rt_r_ichk((*(P907)rt_nil_check(F->z_1258)).depth) == rt_r_ichk(g_depth_936)) && rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->z_1258)).name))->all), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_158)).name))->all))) && (!(((f_overloadable_162(F->y_158) && f_overloadable_162(F->z_1258)) && (rt_r_ichk((*(P907)rt_nil_check(F->z_1258)).kind) == rt_r_ichk((*(P907)rt_nil_check(F->y_158)).kind))) && (!(f_same_signature_168((*(P907)rt_nil_check(F->y_158)).params, (*(P907)rt_nil_check(F->z_1258)).params) && f_same_tt_165((*(P907)rt_nil_check(F->y_158)).decl, (*(P907)rt_nil_check(F->z_1258)).decl))))))) {
f_fail_23(F->line_159, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_158)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1258 = (*(P907)rt_nil_check(F->z_1258)).chain;
}
(*(P907)rt_nil_check(F->y_158)).depth = rt_r_ichk(g_depth_936);
(*(P907)rt_nil_check(F->y_158)).chain = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(rt_r_ichk(F->h_1257), b_.lo, b_.hi) - b_.lo)]; });
(((P911)rt_nil_check(g_table_933))->all).p[(rt_index(rt_r_ichk(F->h_1257), (((P911)rt_nil_check(g_table_933))->all).lo, (((P911)rt_nil_check(g_table_933))->all).hi) - (((P911)rt_nil_check(g_table_933))->all).lo)] = F->y_158;
(*(P907)rt_nil_check(F->y_158)).stack = g_scope_stack_937;
g_scope_stack_937 = F->y_158;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_162(P907 y_161) {
  struct f_overloadable_162fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_161 = y_161;
F->result_ = ((((rt_r_ichk((*(P907)rt_nil_check(F->y_161)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_161)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_161)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_161)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_165(P897 a_163, P897 b_164) {
  struct f_same_tt_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_163 = a_163;
F->b_164 = b_164;
F->x_1259 = NULL;
F->y_1260 = NULL;
if (((F->a_163 == NULL) || (F->b_164 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1259 = (*(P897)rt_nil_check(F->a_163)).e;
F->y_1260 = (*(P897)rt_nil_check(F->b_164)).e;
while (((F->x_1259 != NULL) && (F->y_1260 != NULL))) {
if ((!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1259)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->y_1260)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1259 = (*(P897)rt_nil_check(F->x_1259)).next;
F->y_1260 = (*(P897)rt_nil_check(F->y_1260)).next;
}
F->result_ = ((F->x_1259 == NULL) && (F->y_1260 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_168(P909 a_166, P909 b_167) {
  struct f_same_signature_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_166 = a_166;
F->b_167 = b_167;
F->x_1261 = NULL;
F->x_1261 = F->a_166;
F->y_1262 = NULL;
F->y_1262 = F->b_167;
while (((F->x_1261 != NULL) && (F->y_1262 != NULL))) {
if ((!f_same_213((*(P909)rt_nil_check(F->x_1261)).t, (*(P909)rt_nil_check(F->y_1262)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1261 = (*(P909)rt_nil_check(F->x_1261)).next;
F->y_1262 = (*(P909)rt_nil_check(F->y_1262)).next;
}
F->result_ = ((F->x_1261 == NULL) && (F->y_1262 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_169(void) {
  struct f_open_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_936 = rt_add(rt_r_ichk(g_depth_936), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_170(void) {
  struct f_close_scope_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_937 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(g_scope_stack_937)).depth) == rt_r_ichk(g_depth_936)))) {
(((P911)rt_nil_check(g_table_933))->all).p[(rt_index(f_hash_153(&(((P890)rt_nil_check((*(P907)rt_nil_check(g_scope_stack_937)).name))->all)), (((P911)rt_nil_check(g_table_933))->all).lo, (((P911)rt_nil_check(g_table_933))->all).hi) - (((P911)rt_nil_check(g_table_933))->all).lo)] = (*(P907)rt_nil_check(g_scope_stack_937)).chain;
g_scope_stack_937 = (*(P907)rt_nil_check(g_scope_stack_937)).stack;
}
g_depth_936 = rt_sub(rt_r_ichk(g_depth_936), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P907 f_new_sym_173(rt_int kind_171, P890 name_172) {
  struct f_new_sym_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_171 = kind_171;
F->name_172 = name_172;
F->y_1263 = NULL;
{ R908 *cell1264 = rt_alloc(sizeof(R908));
(*cell1264).name = NULL;
(*cell1264).t = NULL;
(*cell1264).c = NULL;
(*cell1264).access = NULL;
(*cell1264).cname = NULL;
(*cell1264).st = NULL;
(*cell1264).decl = NULL;
(*cell1264).params = NULL;
(*cell1264).result = NULL;
(*cell1264).members = NULL;
(*cell1264).mnext = NULL;
(*cell1264).binds = NULL;
(*cell1264).insts = NULL;
(*cell1264).env = NULL;
(*cell1264).chain = NULL;
(*cell1264).stack = NULL;
(*cell1264).owner = NULL;
(*cell1264).gctx = NULL;
(*cell1264).mv = NULL;
(*cell1264).reqs = NULL;
(*cell1264).home = NULL;
(*cell1264).capn = NULL;
(*cell1264).tbinds = NULL;
F->y_1263 = cell1264;
}
(*(P907)rt_nil_check(F->y_1263)).kind = F->kind_171;
(*(P907)rt_nil_check(F->y_1263)).name = F->name_172;
F->result_ = F->y_1263;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_new_typ_175(rt_int kind_174) {
  struct f_new_typ_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_174 = kind_174;
F->t_1265 = NULL;
{ R904 *cell1266 = rt_alloc(sizeof(R904));
(*cell1266).name = NULL;
(*cell1266).lits = NULL;
(*cell1266).elem = NULL;
(*cell1266).idx = NULL;
(*cell1266).idx2 = NULL;
(*cell1266).elemcons = NULL;
(*cell1266).elemst = NULL;
(*cell1266).under = NULL;
(*cell1266).tparams = NULL;
(*cell1266).ocap = NULL;
(*cell1266).fields = NULL;
(*cell1266).target = NULL;
(*cell1266).decl = NULL;
(*cell1266).cname = NULL;
(*cell1266).initp = NULL;
(*cell1266).finalp = NULL;
(*cell1266).tpsyms = NULL;
(*cell1266).gen = NULL;
(*cell1266).gbinds = NULL;
(*cell1266).next = NULL;
(*cell1266).idxs = NULL;
(*cell1266).assignp = NULL;
(*cell1266).eqp = NULL;
(*cell1266).ltp = NULL;
F->t_1265 = cell1266;
}
(*(P903)rt_nil_check(F->t_1265)).kind = F->kind_174;
F->result_ = F->t_1265;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_new_cons_176(void) {
  struct f_new_cons_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1267 = NULL;
{ R900 *cell1268 = rt_alloc(sizeof(R900));
(*cell1268).lo = NULL;
(*cell1268).hi = NULL;
(*cell1268).lo2 = NULL;
(*cell1268).hi2 = NULL;
(*cell1268).slen = NULL;
(*cell1268).args = NULL;
(*cell1268).prec = NULL;
(*cell1268).bnds = NULL;
F->c_1267 = cell1268;
}
F->result_ = F->c_1267;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_178(P903 t_177) {
  struct f_scalar_kind_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
F->result_ = ((F->t_177 != NULL) && (((rt_r_ichk((*(P903)rt_nil_check(F->t_177)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_177)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_177)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_180(P903 t_179) {
  struct f_bound_ctype_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_179 = t_179;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_179)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_183(P899 c_181, rstr *b_182) {
  struct f_cbound_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_181 = c_181;
F->b_182 = b_182;
F->p_1269 = NULL;
F->p_1269 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P899)rt_nil_check(F->c_181)).dyn)) || (rt_r_ichk((*(P899)rt_nil_check(F->c_181)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_182);
goto ret_;
}
{ rt_int lo1271 = ((rt_int)1LL), hi1272 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P899)rt_nil_check(F->c_181)).lvl));
for (rt_int it1273 = lo1271; it1273 <= hi1272; it1273++) {
F->i_1270 = it1273;
F->p_1269 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->p_1269))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->p_1269))->all), rt_str("->", 2)), (*F->b_182));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_185(P899 c_184) {
  struct f_clo_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_183(F->c_184, &(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_184)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_187(P899 c_186) {
  struct f_chi_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_186 = c_186;
F->result_ = f_cbound_183(F->c_186, &(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_186)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_190(P903 t_188, P899 c_189) {
  struct f_sub_lo_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_188 = t_188;
F->c_189 = c_189;
if (((F->c_189 != NULL) && ((*(P899)rt_nil_check(F->c_189)).lo != NULL))) {
F->result_ = f_clo_185(F->c_189);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_188)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_188)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_193(P903 t_191, P899 c_192) {
  struct f_sub_hi_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_191 = t_191;
F->c_192 = c_192;
if (((F->c_192 != NULL) && ((*(P899)rt_nil_check(F->c_192)).lo != NULL))) {
F->result_ = f_chi_187(F->c_192);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_191)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_191)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P903)rt_nil_check(F->t_191)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_949))) {
F->g_1274 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_194)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_195)), rt_str(" ", 1)), F->g_1274), rt_str(";", 1)); b_; }));
g_st_field_955 = f_mk_3(&F->g_1274);
F->result_ = F->g_1274;
goto ret_;
}
{
F->f_1275 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_194), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_195)), rt_str(" ", 1)), F->f_1275), rt_str(";", 1)); b_; }));
g_st_field_955 = f_mk_3(&F->f_1275);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1275);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_copy_cons_198(P899 c_197) {
  struct f_copy_cons_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->r_1276 = NULL;
{ R900 *cell1277 = rt_alloc(sizeof(R900));
(*cell1277).lo = NULL;
(*cell1277).hi = NULL;
(*cell1277).lo2 = NULL;
(*cell1277).hi2 = NULL;
(*cell1277).slen = NULL;
(*cell1277).args = NULL;
(*cell1277).prec = NULL;
(*cell1277).bnds = NULL;
F->r_1276 = cell1277;
}
(*(P899)rt_nil_check(F->r_1276)).lo = (*(P899)rt_nil_check(F->c_197)).lo;
(*(P899)rt_nil_check(F->r_1276)).hi = (*(P899)rt_nil_check(F->c_197)).hi;
(*(P899)rt_nil_check(F->r_1276)).lo2 = (*(P899)rt_nil_check(F->c_197)).lo2;
(*(P899)rt_nil_check(F->r_1276)).hi2 = (*(P899)rt_nil_check(F->c_197)).hi2;
(*(P899)rt_nil_check(F->r_1276)).slen = (*(P899)rt_nil_check(F->c_197)).slen;
(*(P899)rt_nil_check(F->r_1276)).mlo = rt_r_ichk((*(P899)rt_nil_check(F->c_197)).mlo);
(*(P899)rt_nil_check(F->r_1276)).mhi = rt_r_ichk((*(P899)rt_nil_check(F->c_197)).mhi);
(*(P899)rt_nil_check(F->r_1276)).hasm = rt_r_echk((*(P899)rt_nil_check(F->c_197)).hasm);
(*(P899)rt_nil_check(F->r_1276)).args = (*(P899)rt_nil_check(F->c_197)).args;
(*(P899)rt_nil_check(F->r_1276)).dyn = rt_r_echk((*(P899)rt_nil_check(F->c_197)).dyn);
(*(P899)rt_nil_check(F->r_1276)).lvl = rt_r_ichk((*(P899)rt_nil_check(F->c_197)).lvl);
(*(P899)rt_nil_check(F->r_1276)).prec = (*(P899)rt_nil_check(F->c_197)).prec;
F->result_ = F->r_1276;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_freeze_201(P899 c_199, P903 t_200) {
  struct f_freeze_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_199 = c_199;
F->t_200 = t_200;
F->r_1278 = NULL;
F->saved_field_1279 = NULL;
F->saved_field_1279 = g_st_field_955;
if ((((((F->c_199 == NULL) || ((*(P899)rt_nil_check(F->c_199)).lo == NULL)) || rt_r_echk((*(P899)rt_nil_check(F->c_199)).hasm)) || rt_r_echk((*(P899)rt_nil_check(F->c_199)).dyn)) || (!f_scalar_kind_178(F->t_200)))) {
F->result_ = F->c_199;
goto ret_;
}
F->r_1278 = f_copy_cons_198(F->c_199);
{
F->ct_1280 = rt_str_copy(f_bound_ctype_180(F->t_200));
F->la_1281 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1280));
F->lf_1282 = rt_str_copy((((P890)rt_nil_check(g_st_field_955))->all));
F->ha_1283 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1280));
F->hf_1284 = rt_str_copy((((P890)rt_nil_check(g_st_field_955))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1281, rt_str(" = ", 3)), f_clo_185(F->c_199)), rt_str("; ", 2)), F->ha_1283), rt_str(" = ", 3)), f_chi_187(F->c_199)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_949)) {
(*(P899)rt_nil_check(F->r_1278)).lo = f_mk_3(&F->lf_1282);
(*(P899)rt_nil_check(F->r_1278)).hi = f_mk_3(&F->hf_1284);
(*(P899)rt_nil_check(F->r_1278)).dyn = 1;
(*(P899)rt_nil_check(F->r_1278)).lvl = rt_r_ichk(g_cur_level_950);
} else {
(*(P899)rt_nil_check(F->r_1278)).lo = f_mk_3(&F->la_1281);
(*(P899)rt_nil_check(F->r_1278)).hi = f_mk_3(&F->ha_1283);
(*(P899)rt_nil_check(F->r_1278)).dyn = 0;
}
}
g_st_field_955 = F->saved_field_1279;
F->result_ = F->r_1278;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_205(P903 t_202, P899 c_203, rstr *v_204) {
  struct f_checked_205fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_202 = t_202;
F->c_203 = c_203;
F->v_204 = v_204;
if ((((F->c_203 == NULL) || (!f_scalar_kind_178(F->t_202))) || f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_204);
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_202)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P899)rt_nil_check(F->c_203)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_204)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P899)rt_nil_check(F->c_203)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P899)rt_nil_check(F->c_203)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P899)rt_nil_check(F->c_203)).lo == NULL)) {
F->result_ = (*F->v_204);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_202)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_208(P897 a_206, P897 b_207) {
  struct f_same_lits_208fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_206 = a_206;
F->b_207 = b_207;
F->x_1285 = NULL;
F->x_1285 = F->a_206;
F->y_1286 = NULL;
F->y_1286 = F->b_207;
while (((F->x_1285 != NULL) && (F->y_1286 != NULL))) {
if ((!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->x_1285)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->y_1286)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1285 = (*(P897)rt_nil_check(F->x_1285)).next;
F->y_1286 = (*(P897)rt_nil_check(F->y_1286)).next;
}
F->result_ = ((F->x_1285 == NULL) && (F->y_1286 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_str_elem_210(P903 t_209) {
  struct f_str_elem_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_209 = t_209;
if (((*(P903)rt_nil_check(F->t_209)).elem == NULL)) {
F->result_ = g_ty_ascii_980;
goto ret_;
}
F->result_ = (*(P903)rt_nil_check(F->t_209)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_213(P903 a_211, P903 b_212) {
  struct f_same_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_211 = a_211;
F->b_212 = b_212;
if ((F->a_211 == F->b_212)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_211 == NULL) || (F->b_212 == NULL)) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) != rt_r_ichk((*(P903)rt_nil_check(F->b_212)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_213(f_str_elem_210(F->a_211), f_str_elem_210(F->b_212));
goto ret_;
}
if ((((((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_208((*(P903)rt_nil_check(F->a_211)).lits, (*(P903)rt_nil_check(F->b_212)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)6LL)))) {
F->x_1287 = NULL;
F->x_1287 = (*(P903)rt_nil_check(F->a_211)).idxs;
F->y_1288 = NULL;
F->y_1288 = (*(P903)rt_nil_check(F->b_212)).idxs;
while (((F->x_1287 != NULL) && (F->y_1288 != NULL))) {
if ((!f_same_213((*(P918)rt_nil_check(F->x_1287)).t, (*(P918)rt_nil_check(F->y_1288)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1287 = (*(P918)rt_nil_check(F->x_1287)).next;
F->y_1288 = (*(P918)rt_nil_check(F->y_1288)).next;
}
F->result_ = (((F->x_1287 == NULL) && (F->y_1288 == NULL)) && f_same_213((*(P903)rt_nil_check(F->a_211)).elem, (*(P903)rt_nil_check(F->b_212)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_213((*(P903)rt_nil_check(F->a_211)).elem, (*(P903)rt_nil_check(F->b_212)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->a_211)).kind) == (((rt_int)17LL))))) {
F->f_1289 = NULL;
F->f_1289 = (*(P903)rt_nil_check(F->a_211)).fields;
F->g_1290 = NULL;
F->g_1290 = (*(P903)rt_nil_check(F->b_212)).fields;
while (((F->f_1289 != NULL) && (F->g_1290 != NULL))) {
if (((!rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1289)).name))->all), (((P890)rt_nil_check((*(P905)rt_nil_check(F->g_1290)).name))->all))) || (!f_same_213((*(P905)rt_nil_check(F->f_1289)).t, (*(P905)rt_nil_check(F->g_1290)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1289 = (*(P905)rt_nil_check(F->f_1289)).next;
F->g_1290 = (*(P905)rt_nil_check(F->g_1290)).next;
}
F->result_ = ((F->f_1289 == NULL) && (F->g_1290 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_base_of_215(P903 t_214) {
  struct f_base_of_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_214 = t_214;
if ((((F->t_214 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->t_214)).kind) == (((rt_int)15LL)))) && ((*(P903)rt_nil_check(F->t_214)).tparams == NULL))) {
F->result_ = f_base_of_215((*(P903)rt_nil_check(F->t_214)).under);
goto ret_;
}
F->result_ = F->t_214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_base_cons_218(P903 t_216, P899 c_217) {
  struct f_base_cons_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_216 = t_216;
F->c_217 = c_217;
if (((((F->t_216 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->t_216)).kind) == (((rt_int)15LL)))) && ((*(P903)rt_nil_check(F->t_216)).tparams == NULL)) && ((*(P903)rt_nil_check(F->t_216)).elemcons != NULL))) {
F->result_ = f_base_cons_218((*(P903)rt_nil_check(F->t_216)).under, (*(P903)rt_nil_check(F->t_216)).elemcons);
goto ret_;
}
F->result_ = F->c_217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_220(P903 t_219) {
  struct f_kind_name_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_219 = t_219;
{ rt_int sel1291 = rt_r_ichk((*(P903)rt_nil_check(F->t_219)).kind);
if (0 || (sel1291 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1291 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_219)).name))->all));
goto ret_;
} else if (0 || (sel1291 == (((rt_int)11LL)))) {
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

static void f_check_type_224(P903 got_221, P903 want_222, rt_int line_223) {
  struct f_check_type_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_221 = got_221;
F->want_222 = want_222;
F->line_223 = line_223;
if ((F->want_222 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->got_221)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->want_222)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_213(F->got_221, F->want_222))) {
f_fail_23(F->line_223, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_220(F->got_221)), rt_str(" where ", 7)), f_kind_name_220(F->want_222)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_226(P903 t_225) {
  struct f_ctype_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
{ rt_int sel1292 = rt_r_ichk((*(P903)rt_nil_check(F->t_225)).kind);
if (0 || (sel1292 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)2LL))) || (sel1292 == (((rt_int)4LL))) || (sel1292 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1292 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P903)rt_nil_check(F->t_225)).cname == NULL)) {
f_declare_ctype_232(F->t_225);
} else if (((((rt_r_ichk((*(P903)rt_nil_check(F->t_225)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_225)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P903)rt_nil_check(F->t_225)).forward)) && (!rt_r_echk((*(P903)rt_nil_check(F->t_225)).defined)))) {
(*(P903)rt_nil_check(F->t_225)).defined = 1;
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_225)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_225)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_225)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_228(P903 t_227) {
  struct f_struct_body_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_227)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_230(P903 t_229) {
  struct f_field_decls_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_229 = t_229;
F->f_1293 = NULL;
F->f_1293 = (*(P903)rt_nil_check(F->t_229)).fields;
F->s_1294 = NULL;
F->s_1294 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1293 != NULL)) {
F->s_1294 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->s_1294))->all), f_ctype_226((*(P905)rt_nil_check(F->f_1293)).t)), rt_str(" ", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1293)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1293 = (*(P905)rt_nil_check(F->f_1293)).next;
}
F->result_ = (((P890)rt_nil_check(F->s_1294))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_232(P903 t_231) {
  struct f_declare_ctype_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_231 = t_231;
F->u_1295 = NULL;
F->u_1295 = g_all_types_938;
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P903)rt_nil_check(F->t_231)).target == NULL))) {
f_finish_ptr_427(F->t_231);
if (((*(P903)rt_nil_check(F->t_231)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) != (((rt_int)8LL)))) {
while ((F->u_1295 != NULL)) {
if (((rt_r_ichk((*(P903)rt_nil_check(F->u_1295)).kind) == rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind)) && f_same_213(F->u_1295, F->t_231))) {
(*(P903)rt_nil_check(F->t_231)).cname = (*(P903)rt_nil_check(F->u_1295)).cname;
goto ret_;
}
F->u_1295 = (*(P903)rt_nil_check(F->u_1295)).next;
}
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_231)).tparams == NULL))) {
(*(P903)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226((*(P903)rt_nil_check(F->t_231)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
(*(P903)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
(*(P903)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)17LL))))) {
(*(P903)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P903)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P903)rt_nil_check(F->t_231)).next = g_all_types_938;
g_all_types_938 = F->t_231;
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P903)rt_nil_check(F->t_231)).decl != NULL)) && ((*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_231)).decl)).b != NULL))) {
F->p_1296 = NULL;
F->p_1296 = (*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_231)).decl)).b;
F->fs_1297 = NULL;
F->fs_1297 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1298 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1296 != NULL)) {
F->pc_1299 = NULL;
F->fs_1297 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->fs_1297))->all), rt_str(" ", 1)), f_ctype_226(f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1296)).a, &F->pc_1299))), rt_str(" p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1296)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1296 = (*(P897)rt_nil_check(F->p_1296)).next;
}
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1298), rt_str(" *", 2)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_941, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1298), rt_str(" {", 2)), (((P890)rt_nil_check(F->fs_1297))->all)), rt_str(" ", 1)), f_ctype_226((*(P903)rt_nil_check(F->t_231)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL)))) {
F->target_1300 = NULL;
F->target_1300 = (*(P903)rt_nil_check(F->t_231)).target;
if (((rt_r_ichk((*(P903)rt_nil_check(F->target_1300)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->target_1300)).kind) == (((rt_int)17LL))))) {
if (((*(P903)rt_nil_check(F->target_1300)).cname == NULL)) {
(*(P903)rt_nil_check(F->target_1300)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P903)rt_nil_check(F->target_1300)).next = g_all_types_938;
g_all_types_938 = F->target_1300;
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P890)rt_nil_check((*(P903)rt_nil_check(F->target_1300)).cname))->all)), rt_str(" ", 1)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->target_1300)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P903)rt_nil_check(F->target_1300)).forward = 1;
}
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P890)rt_nil_check((*(P903)rt_nil_check(F->target_1300)).cname))->all)), rt_str(" *", 2)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_226(F->target_1300)), rt_str(" *", 2)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_226((*(P903)rt_nil_check(F->t_231)).elem)), rt_str(" *p;", 4)), f_more_dims_238(F->t_231)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
F->p_1301 = NULL;
F->p_1301 = (*(P903)rt_nil_check(F->t_231)).tparams;
F->fs_1302 = NULL;
F->fs_1302 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1301 != NULL)) {
F->fs_1302 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->fs_1302))->all), f_ctype_226(f_tparam_type_322(F->t_231, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1301)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1301)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1301 = (*(P897)rt_nil_check(F->p_1301)).next;
}
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" {", 2)), (((P890)rt_nil_check(F->fs_1302))->all)), f_ctype_226((*(P903)rt_nil_check(F->t_231)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P903)rt_nil_check(F->t_231)).defined = 1;
f_put_27(g_out_types_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_231)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_238(P903 t_237) {
  struct f_more_dims_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->r_1303 = NULL;
F->r_1303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1305 = ((rt_int)3LL), hi1306 = rt_r_ichk((*(P903)rt_nil_check(F->t_237)).ndim);
for (rt_int it1307 = lo1305; it1307 <= hi1306; it1307++) {
F->k_1304 = it1307;
F->r_1303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1303))->all), rt_str(" rt_int ", 8)), f_dim_lo_234(F->k_1304)), rt_str(", ", 2)), f_dim_hi_236(F->k_1304)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P890)rt_nil_check(F->r_1303))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_241(P903 t_239, rstr *base_240) {
  struct f_acnt_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->base_240 = base_240;
F->r_1308 = NULL;
F->r_1308 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_240)), rt_str(")", 1)); b_; }));
{ rt_int lo1310 = ((rt_int)3LL), hi1311 = rt_r_ichk((*(P903)rt_nil_check(F->t_239)).ndim);
for (rt_int it1312 = lo1310; it1312 <= hi1311; it1312++) {
F->k_1309 = it1312;
F->r_1308 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1308))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_240)), rt_str(".", 1)), f_dim_lo_234(F->k_1309)), rt_str(", ", 2)), (*F->base_240)), rt_str(".", 1)), f_dim_hi_236(F->k_1309)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->r_1308))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P890 f_cons_lo_244(P899 c_242, rt_int k_243) {
  struct f_cons_lo_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_242 = c_242;
F->k_243 = k_243;
F->l_1313 = NULL;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = (*(P899)rt_nil_check(F->c_242)).lo;
goto ret_;
} else if ((F->k_243 == ((rt_int)2LL))) {
F->result_ = (*(P899)rt_nil_check(F->c_242)).lo2;
goto ret_;
}
F->l_1313 = (*(P899)rt_nil_check(F->c_242)).bnds;
{ rt_int lo1315 = ((rt_int)1LL), hi1316 = rt_sub(rt_add(F->k_243, F->k_243), ((rt_int)6LL));
for (rt_int it1317 = lo1315; it1317 <= hi1316; it1317++) {
F->i_1314 = it1317;
if ((F->l_1313 != NULL)) {
F->l_1313 = (*(P901)rt_nil_check(F->l_1313)).next;
}
}
}
if ((F->l_1313 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P901)rt_nil_check(F->l_1313)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P890 f_cons_hi_247(P899 c_245, rt_int k_246) {
  struct f_cons_hi_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_245 = c_245;
F->k_246 = k_246;
F->l_1318 = NULL;
if ((F->k_246 == ((rt_int)1LL))) {
F->result_ = (*(P899)rt_nil_check(F->c_245)).hi;
goto ret_;
} else if ((F->k_246 == ((rt_int)2LL))) {
F->result_ = (*(P899)rt_nil_check(F->c_245)).hi2;
goto ret_;
}
F->l_1318 = (*(P899)rt_nil_check(F->c_245)).bnds;
{ rt_int lo1320 = ((rt_int)1LL), hi1321 = rt_sub(rt_add(F->k_246, F->k_246), ((rt_int)5LL));
for (rt_int it1322 = lo1320; it1322 <= hi1321; it1322++) {
F->i_1319 = it1322;
if ((F->l_1318 != NULL)) {
F->l_1318 = (*(P901)rt_nil_check(F->l_1318)).next;
}
}
}
if ((F->l_1318 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P901)rt_nil_check(F->l_1318)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_idx_type_250(P903 t_248, rt_int k_249) {
  struct f_idx_type_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_248 = t_248;
F->k_249 = k_249;
F->l_1323 = NULL;
F->l_1323 = (*(P903)rt_nil_check(F->t_248)).idxs;
{ rt_int lo1325 = ((rt_int)2LL), hi1326 = F->k_249;
for (rt_int it1327 = lo1325; it1327 <= hi1326; it1327++) {
F->i_1324 = it1327;
F->l_1323 = (*(P918)rt_nil_check(F->l_1323)).next;
}
}
F->result_ = (*(P918)rt_nil_check(F->l_1323)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_251(void) {
  struct f_init_ascii_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1328 = NULL;
F->tail_1329 = NULL;
F->start_1330 = RT_R_IUNDEF;
F->start_1330 = ((rt_int)1LL);
{ rt_int lo1332 = ((rt_int)1LL), hi1333 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1334 = lo1332; it1334 <= hi1333; it1334++) {
F->i_1331 = it1334;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1331) == 32)) {
F->lit_1335 = NULL;
F->lit_1335 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P897)rt_nil_check(F->lit_1335)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1330), rt_sub(F->i_1331, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1328, &F->tail_1329, F->lit_1335);
F->start_1330 = rt_add(F->i_1331, ((rt_int)1LL));
}
}
}
g_ty_ascii_980 = f_new_typ_175((((rt_int)4LL)));
(*(P903)rt_nil_check(g_ty_ascii_980)).lits = F->head_1328;
(*(P903)rt_nil_check(g_ty_ascii_980)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1336 = NULL;
F->t2_1337 = NULL;
F->l1_1338 = NULL;
F->l1_1338 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1339 = NULL;
F->l2_1339 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1340 = NULL;
F->l3_1340 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P897)rt_nil_check(F->l1_1338)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P897)rt_nil_check(F->l2_1339)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P897)rt_nil_check(F->l3_1340)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1336, &F->t2_1337, F->l1_1338);
f_append_65(&F->h2_1336, &F->t2_1337, F->l2_1339);
f_append_65(&F->h2_1336, &F->t2_1337, F->l3_1340);
g_file_mode_type_988 = f_new_typ_175((((rt_int)4LL)));
(*(P903)rt_nil_check(g_file_mode_type_988)).lits = F->h2_1336;
}
g_ty_send_st_989 = f_new_typ_175((((rt_int)1LL)));
(*(P903)rt_nil_check(g_ty_send_st_989)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_990 = f_new_typ_175((((rt_int)1LL)));
(*(P903)rt_nil_check(g_ty_receive_st_990)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_254(P897 lits_252, rstr *name_253) {
  struct f_lit_index_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_252 = lits_252;
F->name_253 = name_253;
F->i_1341 = RT_R_IUNDEF;
F->i_1341 = ((rt_int)0LL);
F->l_1342 = NULL;
F->l_1342 = F->lits_252;
while ((F->l_1342 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->l_1342)).name))->all), (*F->name_253))) {
F->result_ = rt_r_ichk(F->i_1341);
goto ret_;
}
F->i_1341 = rt_add(rt_r_ichk(F->i_1341), ((rt_int)1LL));
F->l_1342 = (*(P897)rt_nil_check(F->l_1342)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_resolve_subtype_257(P897 st_255, P899 *c_256) {
  struct f_resolve_subtype_257fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_255 = st_255;
F->c_256 = c_256;
F->c_256v = *F->c_256;
F->t_1343 = NULL;
F->ok_1344 = RT_R_EUNDEF;
F->dummy_1345 = NULL;
F->c_256v = f_new_cons_176();
{ rt_int sel1346 = rt_r_ichk((*(P897)rt_nil_check(F->st_255)).kind);
if (0 || (sel1346 == (((rt_int)70LL)))) {
if (((*(P897)rt_nil_check(F->st_255)).a != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).a, g_ty_int_977, &F->dummy_1345); b_; }));
(*(P899)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).b, g_ty_int_977, &F->dummy_1345); b_; }));
(*(P899)rt_nil_check(F->c_256v)).mlo = f_manifest_334((*(P897)rt_nil_check(F->st_255)).a, &F->ok_1344);
(*(P899)rt_nil_check(F->c_256v)).hasm = rt_r_echk(F->ok_1344);
(*(P899)rt_nil_check(F->c_256v)).mhi = f_manifest_334((*(P897)rt_nil_check(F->st_255)).b, &F->ok_1344);
(*(P899)rt_nil_check(F->c_256v)).hasm = (rt_r_echk((*(P899)rt_nil_check(F->c_256v)).hasm) && rt_r_echk(F->ok_1344));
}
F->result_ = g_ty_int_977;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)71LL)))) {
if (((*(P897)rt_nil_check(F->st_255)).a != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).a, g_ty_int_977, &F->dummy_1345); b_; }));
}
if (((*(P897)rt_nil_check(F->st_255)).b != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).b, g_ty_float_979, &F->dummy_1345); b_; }));
(*(P899)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).c, g_ty_float_979, &F->dummy_1345); b_; }));
(*(P899)rt_nil_check(F->c_256v)).hasm = (f_float_lit_259((*(P897)rt_nil_check(F->st_255)).b) && f_float_lit_259((*(P897)rt_nil_check(F->st_255)).c));
}
F->result_ = g_ty_float_979;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)72LL)))) {
F->t_1343 = f_new_typ_175((((rt_int)4LL)));
(*(P903)rt_nil_check(F->t_1343)).lits = (*(P897)rt_nil_check(F->st_255)).a;
if (((*(P897)rt_nil_check(F->st_255)).b != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).b, F->t_1343, &F->dummy_1345); b_; }));
(*(P899)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).c, F->t_1343, &F->dummy_1345); b_; }));
if (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_255)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_255)).c)).kind) == (((rt_int)4LL))))) {
(*(P899)rt_nil_check(F->c_256v)).mlo = f_lit_index_254((*(P903)rt_nil_check(F->t_1343)).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_255)).b)).name))->all));
(*(P899)rt_nil_check(F->c_256v)).mhi = f_lit_index_254((*(P903)rt_nil_check(F->t_1343)).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_255)).c)).name))->all));
(*(P899)rt_nil_check(F->c_256v)).hasm = 1;
}
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)73LL)))) {
F->t_1343 = f_resolve_subtype_257((*(P897)rt_nil_check(F->st_255)).a, &F->c_256v);
if (((*(P903)rt_nil_check(f_base_of_215(F->t_1343))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_213(F->t_1343, g_ty_ascii_980) && ((F->c_256v == NULL) || ((*(P899)rt_nil_check(F->c_256v)).lo == NULL)))) {
F->t_1343 = g_ty_string_981;
} else {
F->et_1347 = NULL;
F->et_1347 = F->t_1343;
F->t_1343 = f_new_typ_175((((rt_int)5LL)));
(*(P903)rt_nil_check(F->t_1343)).elem = F->et_1347;
(*(P903)rt_nil_check(F->t_1343)).elemcons = F->c_256v;
}
F->c_256v = f_new_cons_176();
if (((*(P897)rt_nil_check(F->st_255)).b != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).b, g_ty_int_977, &F->dummy_1345); b_; }));
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)74LL)))) {
{
F->ec_1348 = NULL;
F->et_1349 = NULL;
F->et_1349 = f_resolve_subtype_257((*(P897)rt_nil_check(F->st_255)).b, &F->ec_1348);
F->ix_1350 = NULL;
F->ix_1350 = (*(P897)rt_nil_check(F->st_255)).a;
F->k_1351 = RT_R_IUNDEF;
F->k_1351 = ((rt_int)0LL);
F->tail_1352 = NULL;
F->btail_1353 = NULL;
F->t_1343 = f_new_typ_175((((rt_int)6LL)));
(*(P903)rt_nil_check(F->t_1343)).elem = F->et_1349;
(*(P903)rt_nil_check(F->t_1343)).elemcons = F->ec_1348;
(*(P903)rt_nil_check(F->t_1343)).elemst = (*(P897)rt_nil_check(F->st_255)).b;
(*(P899)rt_nil_check(F->c_256v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P899)rt_nil_check(F->c_256v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1350 != NULL)) {
F->ic_1354 = NULL;
F->it_1355 = NULL;
F->it_1355 = f_resolve_subtype_257(F->ix_1350, &F->ic_1354);
F->lo_1356 = NULL;
F->hi_1357 = NULL;
F->tl_1358 = NULL;
if ((((*(P903)rt_nil_check(f_base_of_215(F->it_1355))).kind != (((rt_int)1LL))) && ((*(P903)rt_nil_check(f_base_of_215(F->it_1355))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1354 = f_base_cons_218(F->it_1355, F->ic_1354);
F->k_1351 = rt_add(rt_r_ichk(F->k_1351), ((rt_int)1LL));
{ R919 *cell1359 = rt_alloc(sizeof(R919));
(*cell1359).t = NULL;
(*cell1359).next = NULL;
F->tl_1358 = cell1359;
}
(*(P918)rt_nil_check(F->tl_1358)).t = F->it_1355;
if ((F->tail_1352 == NULL)) {
(*(P903)rt_nil_check(F->t_1343)).idxs = F->tl_1358;
} else {
(*(P918)rt_nil_check(F->tail_1352)).next = F->tl_1358;
}
F->tail_1352 = F->tl_1358;
if (((F->ic_1354 != NULL) && ((*(P899)rt_nil_check(F->ic_1354)).lo != NULL))) {
F->lo_1356 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_185(F->ic_1354); b_; }));
F->hi_1357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_187(F->ic_1354); b_; }));
} else if (((*(P903)rt_nil_check(f_base_of_215(F->it_1355))).kind == (((rt_int)4LL)))) {
F->lo_1356 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P903)rt_nil_check(f_base_of_215(F->it_1355))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1351) == ((rt_int)1LL))) {
(*(P903)rt_nil_check(F->t_1343)).idx = F->it_1355;
(*(P899)rt_nil_check(F->c_256v)).lo = F->lo_1356;
(*(P899)rt_nil_check(F->c_256v)).hi = F->hi_1357;
} else if ((rt_r_ichk(F->k_1351) == ((rt_int)2LL))) {
(*(P903)rt_nil_check(F->t_1343)).idx2 = F->it_1355;
(*(P899)rt_nil_check(F->c_256v)).lo2 = F->lo_1356;
(*(P899)rt_nil_check(F->c_256v)).hi2 = F->hi_1357;
} else if ((F->lo_1356 != NULL)) {
F->l1_1360 = NULL;
F->l2_1361 = NULL;
{ R902 *cell1362 = rt_alloc(sizeof(R902));
(*cell1362).s = NULL;
(*cell1362).next = NULL;
F->l1_1360 = cell1362;
}
{ R902 *cell1363 = rt_alloc(sizeof(R902));
(*cell1363).s = NULL;
(*cell1363).next = NULL;
F->l2_1361 = cell1363;
}
(*(P901)rt_nil_check(F->l1_1360)).s = F->lo_1356;
(*(P901)rt_nil_check(F->l2_1361)).s = F->hi_1357;
(*(P901)rt_nil_check(F->l1_1360)).next = F->l2_1361;
if ((F->btail_1353 == NULL)) {
(*(P899)rt_nil_check(F->c_256v)).bnds = F->l1_1360;
} else {
(*(P901)rt_nil_check(F->btail_1353)).next = F->l1_1360;
}
F->btail_1353 = F->l2_1361;
}
F->ix_1350 = (*(P897)rt_nil_check(F->ix_1350)).next;
}
(*(P903)rt_nil_check(F->t_1343)).ndim = rt_r_ichk(F->k_1351);
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)77LL)))) {
F->t_1343 = f_new_typ_175((((rt_int)16LL)));
{
F->ec_1364 = NULL;
(*(P903)rt_nil_check(F->t_1343)).elem = f_resolve_subtype_257((*(P897)rt_nil_check(F->st_255)).a, &F->ec_1364);
(*(P903)rt_nil_check(F->t_1343)).elemcons = F->ec_1364;
if ((((*(P903)rt_nil_check(f_base_of_215((*(P903)rt_nil_check(F->t_1343)).elem))).kind != (((rt_int)1LL))) && ((*(P903)rt_nil_check(f_base_of_215((*(P903)rt_nil_check(F->t_1343)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P903)rt_nil_check(f_base_of_215((*(P903)rt_nil_check(F->t_1343)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1364 == NULL) || ((*(P899)rt_nil_check(F->ec_1364)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)75LL))) || (sel1346 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->st_255)).kind) == (((rt_int)76LL)))) {
F->t_1343 = f_new_typ_175((((rt_int)17LL)));
} else {
F->t_1343 = f_new_typ_175((((rt_int)7LL)));
}
{
F->comp_1365 = NULL;
F->comp_1365 = (*(P897)rt_nil_check(F->st_255)).a;
F->tail_1366 = NULL;
while ((F->comp_1365 != NULL)) {
F->cc_1367 = NULL;
F->f_1368 = NULL;
{ R906 *cell1369 = rt_alloc(sizeof(R906));
(*cell1369).name = NULL;
(*cell1369).t = NULL;
(*cell1369).c = NULL;
(*cell1369).st = NULL;
(*cell1369).next = NULL;
F->f_1368 = cell1369;
}
(*(P905)rt_nil_check(F->f_1368)).name = (*(P897)rt_nil_check(F->comp_1365)).name;
(*(P905)rt_nil_check(F->f_1368)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->comp_1365)).a, &F->cc_1367);
(*(P905)rt_nil_check(F->f_1368)).c = F->cc_1367;
(*(P905)rt_nil_check(F->f_1368)).st = (*(P897)rt_nil_check(F->comp_1365)).a;
if ((F->tail_1366 == NULL)) {
(*(P903)rt_nil_check(F->t_1343)).fields = F->f_1368;
} else {
(*(P905)rt_nil_check(F->tail_1366)).next = F->f_1368;
}
F->tail_1366 = F->f_1368;
F->comp_1365 = (*(P897)rt_nil_check(F->comp_1365)).next;
}
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1343)).kind) == (((rt_int)17LL)))) {
F->lits_1370 = NULL;
F->ltail_1371 = NULL;
F->f_1372 = NULL;
F->f_1372 = (*(P903)rt_nil_check(F->t_1343)).fields;
while ((F->f_1372 != NULL)) {
F->l_1373 = NULL;
F->l_1373 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line));
if (rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1372)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P897)rt_nil_check(F->l_1373)).name = (*(P905)rt_nil_check(F->f_1372)).name;
f_append_65(&F->lits_1370, &F->ltail_1371, F->l_1373);
F->f_1372 = (*(P905)rt_nil_check(F->f_1372)).next;
}
(*(P903)rt_nil_check(F->t_1343)).elem = f_new_typ_175((((rt_int)4LL)));
(*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_1343)).elem)).lits = F->lits_1370;
if (((*(P897)rt_nil_check(F->st_255)).b != NULL)) {
f_tag_constraint_263(F->t_1343, (*(P897)rt_nil_check(F->st_255)).b, F->c_256v);
}
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_983;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)78LL)))) {
if (((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P907)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1374 = NULL;
F->gt_1374 = f_copy_node_739((*(P897)rt_nil_check(F->st_255)).a);
(*(P897)rt_nil_check(F->gt_1374)).next = NULL;
F->result_ = f_instantiate_type_640(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1374, (*(P897)rt_nil_check(F->st_255)).b, &F->c_256v, rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line));
goto ret_;
}
{
F->ec_1375 = NULL;
F->t_1343 = f_new_typ_175((((rt_int)12LL)));
(*(P903)rt_nil_check(F->t_1343)).elem = f_resolve_subtype_257((*(P897)rt_nil_check(F->st_255)).a, &F->ec_1375);
(*(P903)rt_nil_check(F->t_1343)).elemcons = F->ec_1375;
if (((*(P897)rt_nil_check(F->st_255)).b != NULL)) {
(*(P899)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->st_255)).b, g_ty_int_977, &F->dummy_1345); b_; }));
}
}
F->result_ = F->t_1343;
goto ret_;
} else if (0 || (sel1346 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_266(F->st_255, &F->c_256v);
goto ret_;
} else if (0 || (sel1346 == (((rt_int)81LL)))) {
{
F->base_1376 = NULL;
F->result_ = f_value_subtype_279((*(P897)rt_nil_check(F->st_255)).a, &F->c_256v, &F->base_1376);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_259(P897 e_258) {
  struct f_float_lit_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_258 = e_258;
if (((rt_r_ichk((*(P897)rt_nil_check(F->e_258)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_258)).name))->all), rt_str("-", 1)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_258)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_259((*(P897)rt_nil_check(F->e_258)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P897)rt_nil_check(F->e_258)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->e_258)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_263(P903 t_260, P897 e_261, P899 c_262) {
  struct f_tag_constraint_263fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_260 = t_260;
F->e_261 = e_261;
F->c_262 = c_262;
F->dummy_1377 = NULL;
(*(P899)rt_nil_check(F->c_262)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->e_261, (*(P903)rt_nil_check(F->t_260)).elem, &F->dummy_1377); b_; }));
f_check_type_224(F->dummy_1377, (*(P903)rt_nil_check(F->t_260)).elem, rt_r_ichk((*(P897)rt_nil_check(F->e_261)).line));
(*(P899)rt_nil_check(F->c_262)).hi = (*(P899)rt_nil_check(F->c_262)).lo;
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_261)).kind) == (((rt_int)4LL)))) {
(*(P899)rt_nil_check(F->c_262)).mlo = f_lit_index_254((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_260)).elem)).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_261)).name))->all));
(*(P899)rt_nil_check(F->c_262)).mhi = rt_r_ichk((*(P899)rt_nil_check(F->c_262)).mlo);
(*(P899)rt_nil_check(F->c_262)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P903 f_named_subtype_266(P897 st_264, P899 *c_265) {
  struct f_named_subtype_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_264 = st_264;
F->c_265 = c_265;
F->c_265v = *F->c_265;
F->t_1378 = NULL;
F->y_1379 = NULL;
F->y_1379 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->st_264)).name))->all));
F->name_1380 = rt_str_copy((((P890)rt_nil_check((*(P897)rt_nil_check(F->st_264)).name))->all));
F->c_265v = f_new_cons_176();
if (((F->y_1379 == NULL) && ((rt_str_eq(F->name_1380, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1380, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1380, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_284(F->st_264, &F->c_265v);
goto ret_;
}
if ((F->y_1379 == NULL)) {
if (rt_str_eq(F->name_1380, rt_str("BOOL", 4))) {
F->t_1378 = g_ty_bool_978;
} else if (rt_str_eq(F->name_1380, rt_str("ASCII", 5))) {
F->t_1378 = g_ty_ascii_980;
} else if (rt_str_eq(F->name_1380, rt_str("DATA_LOCK", 9))) {
F->t_1378 = g_ty_lock_985;
} else if (rt_str_eq(F->name_1380, rt_str("LATCH", 5))) {
F->t_1378 = g_ty_latch_986;
} else if (rt_str_eq(F->name_1380, rt_str("ACT", 3))) {
F->t_1378 = g_ty_act_987;
} else if (rt_str_eq(F->name_1380, rt_str("INT", 3))) {
F->t_1378 = g_ty_int_977;
} else if (rt_str_eq(F->name_1380, rt_str("SEND_ST", 7))) {
F->t_1378 = g_ty_send_st_989;
} else if (rt_str_eq(F->name_1380, rt_str("RECEIVE_ST", 10))) {
F->t_1378 = g_ty_receive_st_990;
} else if (rt_str_eq(F->name_1380, rt_str("FLOAT", 5))) {
F->t_1378 = g_ty_float_979;
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1380); b_; }));
}
if (((*(P897)rt_nil_check(F->st_264)).b != NULL)) {
f_apply_constraint_275(F->t_1378, (*(P897)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1378;
goto ret_;
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_640(F->y_1379, (*(P897)rt_nil_check(F->st_264)).a, (*(P897)rt_nil_check(F->st_264)).b, &F->c_265v, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
goto ret_;
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1381 = NULL;
F->binds_1381 = f_tt_binds_606((*(P907)rt_nil_check(F->y_1379)).decl, (*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b)).e, (*(P897)rt_nil_check(F->st_264)).a, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
F->saved_env_1382 = NULL;
F->saved_env_1382 = g_genv_934;
F->saved_gdepth_1383 = RT_R_IUNDEF;
F->saved_gdepth_1383 = rt_r_ichk(g_gdepth_966);
f_open_scope_169();
while ((F->binds_1381 != NULL)) {
F->nb_1384 = NULL;
F->nb_1384 = (*(P907)rt_nil_check(F->binds_1381)).mnext;
f_define_160(F->binds_1381, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
F->binds_1381 = F->nb_1384;
}
g_genv_934 = (*(P907)rt_nil_check(F->y_1379)).env;
g_gdepth_966 = rt_r_ichk(g_depth_936);
F->t_1378 = f_resolve_subtype_257((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b)).a, &F->c_265v);
g_genv_934 = F->saved_env_1382;
g_gdepth_966 = rt_r_ichk(F->saved_gdepth_1383);
f_close_scope_170();
if (((*(P897)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1378, (*(P897)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1378;
goto ret_;
}
if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)5LL))) && ((*(P907)rt_nil_check(F->y_1379)).t != NULL)) && (rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_307(F->y_1379, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)5LL))) && ((*(P907)rt_nil_check(F->y_1379)).t != NULL)) && (rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).t)).kind) == (((rt_int)8LL))))) {
(*(P899)rt_nil_check(F->c_265v)).args = (*(P897)rt_nil_check(F->st_264)).b;
F->result_ = (*(P907)rt_nil_check(F->y_1379)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)6LL))) && ((*(P907)rt_nil_check(F->y_1379)).decl != NULL)) && ((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_270(F->y_1379, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)5LL)))) && ((*(P907)rt_nil_check(F->y_1379)).t != NULL))) {
if (((*(P907)rt_nil_check(F->y_1379)).c != NULL)) {
F->c_265v = (*(P907)rt_nil_check(F->y_1379)).c;
}
F->t_1378 = (*(P907)rt_nil_check(F->y_1379)).t;
} else if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)5LL))) && ((*(P907)rt_nil_check(F->y_1379)).decl != NULL)) && (rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1379)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_307(F->y_1379, F->st_264, &F->c_265v);
goto ret_;
} else if (((rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1379)).kind) == (((rt_int)5LL))))) {
F->t_1378 = f_resolve_subtype_257((*(P907)rt_nil_check(F->y_1379)).st, &F->c_265v);
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1380, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P897)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1378, (*(P897)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P897)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1378;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_265) = F->c_265v;
  RT_FPOP();
  return F->result_;
}

static P903 f_invoke_abbrev_270(P907 y_267, P897 st_268, P899 *c_269) {
  struct f_invoke_abbrev_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_267 = y_267;
F->st_268 = st_268;
F->c_269 = c_269;
F->c_269v = *F->c_269;
F->p_1385 = NULL;
F->p_1385 = (*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_267)).decl)).b;
F->a_1386 = NULL;
F->a_1386 = (*(P897)rt_nil_check(F->st_268)).b;
F->t_1387 = NULL;
if ((f_list_len_67(F->p_1385) != f_list_len_67(F->a_1386))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_267)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1385))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_169();
while ((F->p_1385 != NULL)) {
F->z_1388 = NULL;
F->z_1388 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_1385)).name);
F->pc_1389 = NULL;
F->at_1390 = NULL;
F->ok_1391 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_1385)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P907)rt_nil_check(F->z_1388)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1385)).a, &F->pc_1389);
(*(P907)rt_nil_check(F->z_1388)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700(F->a_1386, (*(P907)rt_nil_check(F->z_1388)).t, &F->at_1390)), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1390, (*(P907)rt_nil_check(F->z_1388)).t, rt_r_ichk((*(P897)rt_nil_check(F->st_268)).line));
(*(P907)rt_nil_check(F->z_1388)).mvalue = f_manifest_334(F->a_1386, &F->ok_1391);
(*(P907)rt_nil_check(F->z_1388)).hasmv = rt_r_echk(F->ok_1391);
(*(P907)rt_nil_check(F->z_1388)).mv = f_meval_343(F->a_1386, &F->ok_1391);
if ((!rt_r_echk(F->ok_1391))) {
(*(P907)rt_nil_check(F->z_1388)).mv = NULL;
}
(*(P907)rt_nil_check(F->z_1388)).ro_flag = 1;
f_define_160(F->z_1388, rt_r_ichk((*(P897)rt_nil_check(F->st_268)).line));
F->p_1385 = (*(P897)rt_nil_check(F->p_1385)).next;
F->a_1386 = (*(P897)rt_nil_check(F->a_1386)).next;
}
F->t_1387 = f_resolve_subtype_257((*(P907)rt_nil_check(F->y_267)).st, &F->c_269v);
f_close_scope_170();
F->result_ = F->t_1387;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_269) = F->c_269v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_275(P903 t_271, P897 args_272, P899 c_273, rt_int line_274) {
  struct f_apply_constraint_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->args_272 = args_272;
F->c_273 = c_273;
F->line_274 = line_274;
F->dummy_1392 = NULL;
F->ok_1393 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P897)rt_nil_check(F->args_272)).kind) != (((rt_int)16LL))) || ((*(P897)rt_nil_check(F->args_272)).next != NULL))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P899)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->args_272)).a, F->t_271, &F->dummy_1392); b_; }));
f_check_type_224(F->dummy_1392, F->t_271, F->line_274);
(*(P899)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check(F->args_272)).b, F->t_271, &F->dummy_1392); b_; }));
f_check_type_224(F->dummy_1392, F->t_271, F->line_274);
(*(P899)rt_nil_check(F->c_273)).hasm = 0;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL)))) {
(*(P899)rt_nil_check(F->c_273)).mlo = f_manifest_334((*(P897)rt_nil_check(F->args_272)).a, &F->ok_1393);
(*(P899)rt_nil_check(F->c_273)).hasm = rt_r_echk(F->ok_1393);
(*(P899)rt_nil_check(F->c_273)).mhi = f_manifest_334((*(P897)rt_nil_check(F->args_272)).b, &F->ok_1393);
(*(P899)rt_nil_check(F->c_273)).hasm = (rt_r_echk((*(P899)rt_nil_check(F->c_273)).hasm) && rt_r_echk(F->ok_1393));
} else if (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).b)).kind) == (((rt_int)4LL))))) {
(*(P899)rt_nil_check(F->c_273)).mlo = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).a)).name))->all));
(*(P899)rt_nil_check(F->c_273)).mhi = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).b)).name))->all));
(*(P899)rt_nil_check(F->c_273)).hasm = 1;
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)3LL)))) {
(*(P899)rt_nil_check(F->c_273)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_977, &F->dummy_1392); b_; }));
if (((*(P897)rt_nil_check(F->args_272)).next != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P899)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).next)).a, g_ty_float_979, &F->dummy_1392); b_; }));
(*(P899)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).next)).b, g_ty_float_979, &F->dummy_1392); b_; }));
(*(P899)rt_nil_check(F->c_273)).hasm = (f_float_lit_259((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).next)).a) && f_float_lit_259((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_272)).next)).b));
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)5LL)))) {
(*(P899)rt_nil_check(F->c_273)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_977, &F->dummy_1392); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)12LL)))) {
(*(P899)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_977, &F->dummy_1392); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_271)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_263(F->t_271, F->args_272, F->c_273);
} else {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P903 f_value_subtype_279(P897 e_276, P899 *c_277, P890 *base_278) {
  struct f_value_subtype_279fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_276 = e_276;
F->c_277 = c_277;
F->c_277v = *F->c_277;
F->base_278 = base_278;
F->base_278v = *F->base_278;
F->t_1394 = NULL;
F->c0_1395 = NULL;
F->ro_1396 = RT_R_EUNDEF;
if (f_is_lvalue_663(F->e_276)) {
f_lvalue_669(F->e_276, &F->base_278v, &F->t_1394, &F->c0_1395, &F->ro_1396);
} else {
F->base_278v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->e_276, NULL, &F->t_1394); b_; }));
}
if ((F->c0_1395 == NULL)) {
F->c_277v = f_new_cons_176();
} else {
F->c_277v = f_copy_cons_198(F->c0_1395);
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1394)).kind) == (((rt_int)5LL)))) {
(*(P899)rt_nil_check(F->c_277v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->base_278v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1394)).kind) == (((rt_int)6LL)))) {
(*(P899)rt_nil_check(F->c_277v)).bnds = NULL;
{ rt_int lo1398 = ((rt_int)1LL), hi1399 = rt_r_ichk((*(P903)rt_nil_check(F->t_1394)).ndim);
for (rt_int it1400 = lo1398; it1400 <= hi1399; it1400++) {
F->k_1397 = it1400;
F->lo_1401 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_lo_234(F->k_1397)));
F->hi_1402 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_hi_236(F->k_1397)));
if ((F->k_1397 == ((rt_int)1LL))) {
(*(P899)rt_nil_check(F->c_277v)).lo = f_mk_3(&F->lo_1401);
(*(P899)rt_nil_check(F->c_277v)).hi = f_mk_3(&F->hi_1402);
} else if ((F->k_1397 == ((rt_int)2LL))) {
(*(P899)rt_nil_check(F->c_277v)).lo2 = f_mk_3(&F->lo_1401);
(*(P899)rt_nil_check(F->c_277v)).hi2 = f_mk_3(&F->hi_1402);
} else {
F->l1_1403 = NULL;
F->l2_1404 = NULL;
{ R902 *cell1405 = rt_alloc(sizeof(R902));
(*cell1405).s = NULL;
(*cell1405).next = NULL;
F->l1_1403 = cell1405;
}
{ R902 *cell1406 = rt_alloc(sizeof(R902));
(*cell1406).s = NULL;
(*cell1406).next = NULL;
F->l2_1404 = cell1406;
}
(*(P901)rt_nil_check(F->l1_1403)).s = f_mk_3(&F->lo_1401);
(*(P901)rt_nil_check(F->l2_1404)).s = f_mk_3(&F->hi_1402);
(*(P901)rt_nil_check(F->l1_1403)).next = F->l2_1404;
(*(P901)rt_nil_check(F->l2_1404)).next = (*(P899)rt_nil_check(F->c_277v)).bnds;
(*(P899)rt_nil_check(F->c_277v)).bnds = F->l1_1403;
}
}
}
(*(P899)rt_nil_check(F->c_277v)).bnds = f_reverse_pairs_281((*(P899)rt_nil_check(F->c_277v)).bnds);
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1394)).kind) == (((rt_int)12LL)))) {
(*(P899)rt_nil_check(F->c_277v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->base_278v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_1394)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_1394)).tparams != NULL))) {
F->p_1407 = NULL;
F->p_1407 = (*(P903)rt_nil_check(F->t_1394)).tparams;
F->head_1408 = NULL;
F->tail_1409 = NULL;
while ((F->p_1407 != NULL)) {
F->sel_1410 = NULL;
F->sel_1410 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_276)).line));
(*(P897)rt_nil_check(F->sel_1410)).a = F->e_276;
(*(P897)rt_nil_check(F->sel_1410)).name = (*(P897)rt_nil_check(F->p_1407)).name;
f_append_65(&F->head_1408, &F->tail_1409, F->sel_1410);
F->p_1407 = (*(P897)rt_nil_check(F->p_1407)).next;
}
(*(P899)rt_nil_check(F->c_277v)).args = F->head_1408;
}
F->result_ = F->t_1394;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_277) = F->c_277v;  (*F->base_278) = F->base_278v;
  RT_FPOP();
  return F->result_;
}

static P901 f_reverse_pairs_281(P901 l_280) {
  struct f_reverse_pairs_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_280 = l_280;
F->r_1411 = NULL;
F->p_1412 = NULL;
F->p_1412 = F->l_280;
while ((F->p_1412 != NULL)) {
F->a_1413 = NULL;
F->a_1413 = F->p_1412;
F->b_1414 = NULL;
F->b_1414 = (*(P901)rt_nil_check(F->p_1412)).next;
F->p_1412 = (*(P901)rt_nil_check(F->b_1414)).next;
(*(P901)rt_nil_check(F->b_1414)).next = F->r_1411;
F->r_1411 = F->a_1413;
}
F->result_ = F->r_1411;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_inquiry_284(P897 st_282, P899 *c_283) {
  struct f_inquiry_284fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_282 = st_282;
F->c_283 = c_283;
F->c_283v = *F->c_283;
F->base_1415 = NULL;
F->t_1416 = NULL;
F->name_1417 = rt_str_copy((((P890)rt_nil_check((*(P897)rt_nil_check(F->st_282)).name))->all));
if (((*(P897)rt_nil_check(F->st_282)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1417, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1417, rt_str("TYPEOF", 6))) {
F->sub_1418 = NULL;
F->sub_1418 = f_as_subtype_286((*(P897)rt_nil_check(F->st_282)).b);
F->c2_1419 = NULL;
if ((F->sub_1418 != NULL)) {
F->t_1416 = f_resolve_subtype_257(F->sub_1418, &F->c2_1419);
} else {
F->t_1416 = f_value_subtype_279((*(P897)rt_nil_check(F->st_282)).b, &F->c2_1419, &F->base_1415);
}
F->c_283v = f_new_cons_176();
F->result_ = F->t_1416;
goto ret_;
}
F->t_1416 = f_value_subtype_279((*(P897)rt_nil_check(F->st_282)).b, &F->c_283v, &F->base_1415);
if (rt_str_eq(F->name_1417, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1416;
goto ret_;
}
{
F->k_1420 = RT_R_IUNDEF;
F->k_1420 = ((rt_int)1LL);
F->ok_1421 = RT_R_EUNDEF;
F->ok_1421 = 1;
F->ac_1422 = NULL;
F->ac_1422 = F->c_283v;
if (((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_282)).b)).next != NULL)) {
F->k_1420 = f_manifest_334((*(P897)rt_nil_check((*(P897)rt_nil_check(F->st_282)).b)).next, &F->ok_1421);
}
while (((rt_r_ichk((*(P903)rt_nil_check(F->t_1416)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_1416)).tparams == NULL))) {
F->t_1416 = (*(P903)rt_nil_check(F->t_1416)).under;
}
if (((((rt_r_ichk((*(P903)rt_nil_check(F->t_1416)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1421))) || (rt_r_ichk(F->k_1420) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1420) > rt_r_ichk((*(P903)rt_nil_check(F->t_1416)).ndim)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_283v = f_new_cons_176();
(*(P899)rt_nil_check(F->c_283v)).lo = f_cons_lo_244(F->ac_1422, rt_r_ichk(F->k_1420));
(*(P899)rt_nil_check(F->c_283v)).hi = f_cons_hi_247(F->ac_1422, rt_r_ichk(F->k_1420));
F->result_ = f_idx_type_250(F->t_1416, rt_r_ichk(F->k_1420));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_283) = F->c_283v;
  RT_FPOP();
  return F->result_;
}

static P897 f_as_subtype_286(P897 e_285) {
  struct f_as_subtype_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_285 = e_285;
F->st_1423 = NULL;
if ((F->e_285 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_285)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_286((*(P897)rt_nil_check(F->e_285)).a);
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_285)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_293(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_285)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1423 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
(*(P897)rt_nil_check(F->st_1423)).name = (*(P897)rt_nil_check(F->e_285)).name;
F->result_ = F->st_1423;
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->e_285)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).name, (*(P897)rt_nil_check(F->e_285)).b, NULL, rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_285)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).a)).name, (*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).b, (*(P897)rt_nil_check(F->e_285)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1424 = rt_str_copy((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).name))->all));
F->y_1425 = NULL;
F->y_1425 = f_lookup_155(&F->name_1424);
if ((rt_str_eq(F->name_1424, rt_str("INT", 3)) && (F->y_1425 == NULL))) {
if (((((*(P897)rt_nil_check(F->e_285)).b == NULL) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).kind) != (((rt_int)16LL)))) || ((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1423 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
(*(P897)rt_nil_check(F->st_1423)).a = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).a;
(*(P897)rt_nil_check(F->st_1423)).b = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).b;
F->result_ = F->st_1423;
goto ret_;
} else if ((rt_str_eq(F->name_1424, rt_str("FLOAT", 5)) && (F->y_1425 == NULL))) {
F->st_1423 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
(*(P897)rt_nil_check(F->st_1423)).a = (*(P897)rt_nil_check(F->e_285)).b;
if ((((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).next != NULL) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P897)rt_nil_check(F->st_1423)).b = (*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).next)).a;
(*(P897)rt_nil_check(F->st_1423)).c = (*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).b)).next)).b;
}
F->result_ = F->st_1423;
goto ret_;
} else if (((!f_type_name_293(&F->name_1424)) && (!((F->y_1425 == NULL) && ((rt_str_eq(F->name_1424, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1424, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1424, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1423 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_285)).line));
(*(P897)rt_nil_check(F->st_1423)).name = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_285)).a)).name;
(*(P897)rt_nil_check(F->st_1423)).b = (*(P897)rt_nil_check(F->e_285)).b;
(*(P897)rt_nil_check(F->st_1423)).flag = ((rt_int)1LL);
F->result_ = F->st_1423;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_tt_subtype_291(P890 name_287, P897 tt_288, P897 args_289, rt_int line_290) {
  struct f_tt_subtype_291fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_287 = name_287;
F->tt_288 = tt_288;
F->args_289 = args_289;
F->line_290 = line_290;
F->st_1426 = NULL;
if (rt_str_eq((((P890)rt_nil_check(F->name_287))->all), rt_str("STRING", 6))) {
F->st_1426 = f_nn_61((((rt_int)73LL)), F->line_290);
} else if (rt_str_eq((((P890)rt_nil_check(F->name_287))->all), rt_str("SET", 3))) {
F->st_1426 = f_nn_61((((rt_int)77LL)), F->line_290);
} else if ((rt_str_eq((((P890)rt_nil_check(F->name_287))->all), rt_str("MAILBOX", 7)) && ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P907)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1426 = f_nn_61((((rt_int)78LL)), F->line_290);
} else if (rt_str_eq((((P890)rt_nil_check(F->name_287))->all), rt_str("FILE", 4))) {
F->st_1426 = f_nn_61((((rt_int)79LL)), F->line_290);
} else if (f_type_name_293(&(((P890)rt_nil_check(F->name_287))->all))) {
F->st_1426 = f_nn_61((((rt_int)80LL)), F->line_290);
(*(P897)rt_nil_check(F->st_1426)).name = F->name_287;
(*(P897)rt_nil_check(F->st_1426)).a = F->tt_288;
(*(P897)rt_nil_check(F->st_1426)).b = F->args_289;
F->result_ = F->st_1426;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P897)rt_nil_check(F->st_1426)).a = F->tt_288;
(*(P897)rt_nil_check(F->st_1426)).b = F->args_289;
F->result_ = F->st_1426;
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
F->y_1427 = NULL;
F->y_1427 = f_lookup_155(&(*F->name_292));
if ((F->y_1427 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_292), rt_str("INT", 3)) || rt_str_eq((*F->name_292), rt_str("BOOL", 4))) || rt_str_eq((*F->name_292), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_292), rt_str("ASCII", 5))) || rt_str_eq((*F->name_292), rt_str("ACT", 3))) || rt_str_eq((*F->name_292), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_292), rt_str("LATCH", 5))) || rt_str_eq((*F->name_292), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_292), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P907)rt_nil_check(F->y_1427)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1427)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P907)rt_nil_check(F->y_1427)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1427)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1427)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1427)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_295(P903 t_294) {
  struct f_empty_set_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_294 = t_294;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_190(f_base_of_215((*(P903)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P903)rt_nil_check(F->t_294)).elem, (*(P903)rt_nil_check(F->t_294)).elemcons))), rt_str(", ", 2)), f_sub_hi_193(f_base_of_215((*(P903)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P903)rt_nil_check(F->t_294)).elem, (*(P903)rt_nil_check(F->t_294)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_297(P903 t_296) {
  struct f_opened_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_296 = t_296;
F->c_1428 = NULL;
F->c_1428 = g_caps_952;
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_296)).kind) != (((rt_int)15LL))) || ((*(P903)rt_nil_check(F->t_296)).ocap == NULL)) || (rt_r_ichk((*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_296)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1428 != NULL)) {
if (((*(P924)rt_nil_check(F->c_1428)).d == (*(P903)rt_nil_check(F->t_296)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1428 = (*(P924)rt_nil_check(F->c_1428)).next;
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
F->i_1429 = RT_R_IUNDEF;
F->i_1429 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_299)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_298)).len)) < ((rt_int)(((*F->pat_299)).len))))) {
F->result_ = (*F->s_298);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1429), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_298)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_298), rt_r_ichk(F->i_1429), rt_sub(rt_add(rt_r_ichk(F->i_1429), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL))), (*F->pat_299))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_298), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1429), ((rt_int)1LL))), (*F->r_300)), f_replace_all_301(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_298), rt_add(rt_r_ichk(F->i_1429), ((rt_int)(((*F->pat_299)).len))), ((rt_int)(((*F->s_298)).len))); b_; }), &(*F->pat_299), &(*F->r_300)));
goto ret_;
}
F->i_1429 = rt_add(rt_r_ichk(F->i_1429), ((rt_int)1LL));
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
F->l_1430 = NULL;
F->l_1430 = g_psub_954;
F->r_1431 = NULL;
F->r_1431 = f_mk_3(&(*F->s_302));
while ((F->l_1430 != NULL)) {
F->r_1431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_301(&(((P890)rt_nil_check(F->r_1431))->all), &(((P890)rt_nil_check((*(P901)rt_nil_check(F->l_1430)).s))->all), &(((P890)rt_nil_check((*(P901)rt_nil_check((*(P901)rt_nil_check(F->l_1430)).next)).s))->all)); b_; }));
F->l_1430 = (*(P901)rt_nil_check((*(P901)rt_nil_check(F->l_1430)).next)).next;
}
F->result_ = (((P890)rt_nil_check(F->r_1431))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_new_type_307(P907 y_304, P897 st_305, P899 *c_306) {
  struct f_new_type_307fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_304 = y_304;
F->st_305 = st_305;
F->c_306 = c_306;
F->c_306v = *F->c_306;
F->d_1432 = NULL;
F->d_1432 = (*(P907)rt_nil_check(F->y_304)).decl;
F->p_1433 = NULL;
F->uc_1434 = NULL;
F->c_306v = f_new_cons_176();
if (((*(P907)rt_nil_check(F->y_304)).t == NULL)) {
(*(P907)rt_nil_check(F->y_304)).t = f_new_typ_175((((rt_int)15LL)));
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).name = (*(P907)rt_nil_check(F->y_304)).name;
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).decl = F->d_1432;
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).tparams = (*(P897)rt_nil_check(F->d_1432)).b;
if ((g_caps_952 != NULL)) {
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).ocap = (*(P924)rt_nil_check(g_caps_952)).d;
}
f_open_scope_169();
F->p_1433 = (*(P897)rt_nil_check(F->d_1432)).b;
while ((F->p_1433 != NULL)) {
F->z_1435 = NULL;
F->z_1435 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_1433)).name);
F->zc_1436 = NULL;
(*(P907)rt_nil_check(F->z_1435)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1433)).a, &F->zc_1436);
(*(P907)rt_nil_check(F->z_1435)).mnext = (*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).tpsyms;
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).tpsyms = F->z_1435;
(*(P907)rt_nil_check(F->z_1435)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1433)).name))->all))), rt_str("@", 1)); b_; }));
f_define_160(F->z_1435, rt_r_ichk((*(P897)rt_nil_check(F->d_1432)).line));
F->p_1433 = (*(P897)rt_nil_check(F->p_1433)).next;
}
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).under = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_1432)).a, &F->uc_1434);
(*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_304)).t)).elemcons = F->uc_1434;
f_close_scope_170();
}
(*(P899)rt_nil_check(F->c_306v)).args = (*(P897)rt_nil_check(F->st_305)).b;
F->result_ = (*(P907)rt_nil_check(F->y_304)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_306) = F->c_306v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_311(rstr *lval_308, P903 t_309, P899 c_310) {
  struct f_init_storage_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_308 = lval_308;
F->t_309 = t_309;
F->c_310 = c_310;
f_make_storage_326(&(*F->lval_308), F->t_309, F->c_310);
if (((*(P903)rt_nil_check(F->t_309)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P903)rt_nil_check(F->t_309)).initp, &(*F->lval_308)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_314(P907 y_312, rstr *lval_313) {
  struct f_init_call_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_312 = y_312;
F->lval_313 = lval_313;
F->link_1437 = NULL;
F->link_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_312)).level) > ((rt_int)0LL))) {
F->link_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1439 = ((rt_int)1LL), hi1440 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P907)rt_nil_check(F->y_312)).level));
for (rt_int it1441 = lo1439; it1441 <= hi1440; it1441++) {
F->i_1438 = it1441;
F->link_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->link_1437))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->link_1437))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_312)).cname))->all), rt_str("(", 1)), (((P890)rt_nil_check(F->link_1437))->all)), rt_str("&", 1)), (*F->lval_313)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_316(P903 t_315) {
  struct f_needs_fin_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
if ((F->t_315 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P903)rt_nil_check(F->t_315)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_315)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_316((*(P903)rt_nil_check(F->t_315)).under);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_315)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_316((*(P903)rt_nil_check(F->t_315)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_315)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_315)).kind) == (((rt_int)17LL))))) {
F->f_1442 = NULL;
F->f_1442 = (*(P903)rt_nil_check(F->t_315)).fields;
while ((F->f_1442 != NULL)) {
if (f_needs_fin_316((*(P905)rt_nil_check(F->f_1442)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1442 = (*(P905)rt_nil_check(F->f_1442)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_319(rstr *lval_317, P903 t_318) {
  struct f_fin_code_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_317 = lval_317;
F->t_318 = t_318;
F->r_1443 = NULL;
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P903)rt_nil_check(F->t_318)).finalp != NULL)) {
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_314((*(P903)rt_nil_check(F->t_318)).finalp, &(*F->lval_317)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_318)).tparams == NULL))) {
F->result_ = rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), f_fin_code_319(&(*F->lval_317), (*(P903)rt_nil_check(F->t_318)).under));
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_317), rt_str(".all", 4)); b_; }), (*(P903)rt_nil_check(F->t_318)).under));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_318)).kind) == (((rt_int)6LL))) && f_needs_fin_316((*(P903)rt_nil_check(F->t_318)).elem))) {
F->i_1444 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), rt_str("for (rt_int ", 12)), F->i_1444), rt_str(" = 0; ", 6)), F->i_1444), rt_str(" < ", 3)), f_acnt_241(F->t_318, &(*F->lval_317))), rt_str("; ", 2)), F->i_1444), rt_str("++) { ", 6)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".p[", 3)), F->i_1444), rt_str("]", 1)); b_; }), (*(P903)rt_nil_check(F->t_318)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_318)).kind) == (((rt_int)7LL)))) {
F->f_1445 = NULL;
F->f_1445 = (*(P903)rt_nil_check(F->t_318)).fields;
while ((F->f_1445 != NULL)) {
if (f_needs_fin_316((*(P905)rt_nil_check(F->f_1445)).t)) {
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1445)).name))->all))); b_; }), (*(P905)rt_nil_check(F->f_1445)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1445 = (*(P905)rt_nil_check(F->f_1445)).next;
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_318)).kind) == (((rt_int)17LL)))) {
F->f_1446 = NULL;
F->f_1446 = (*(P903)rt_nil_check(F->t_318)).fields;
F->i_1447 = RT_R_IUNDEF;
F->i_1447 = ((rt_int)0LL);
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), rt_str("switch (", 8)), (*F->lval_317)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1446 != NULL)) {
if (f_needs_fin_316((*(P905)rt_nil_check(F->f_1446)).t)) {
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1447))), rt_str(": ", 2)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".u.", 3)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1446)).name))->all))); b_; }), (*(P905)rt_nil_check(F->f_1446)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1447 = rt_add(rt_r_ichk(F->i_1447), ((rt_int)1LL));
F->f_1446 = (*(P905)rt_nil_check(F->f_1446)).next;
}
F->r_1443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1443))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P890)rt_nil_check(F->r_1443))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_tparam_type_322(P903 t_320, rstr *name_321) {
  struct f_tparam_type_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_320 = t_320;
F->name_321 = name_321;
F->z_1448 = NULL;
F->z_1448 = (*(P903)rt_nil_check(F->t_320)).tpsyms;
while ((F->z_1448 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->z_1448)).name))->all), (*F->name_321))) {
F->result_ = (*(P907)rt_nil_check(F->z_1448)).t;
goto ret_;
}
F->z_1448 = (*(P907)rt_nil_check(F->z_1448)).mnext;
}
F->result_ = g_ty_int_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_326(rstr *lval_323, P903 t_324, P899 c_325) {
  struct f_make_storage_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_323 = lval_323;
F->t_324 = t_324;
F->c_325 = c_325;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->p_1449 = NULL;
F->p_1449 = (*(P903)rt_nil_check(F->t_324)).tparams;
F->a_1450 = NULL;
F->a_1450 = (*(P899)rt_nil_check(F->c_325)).args;
F->uc_1451 = NULL;
F->ut_1452 = NULL;
F->at_1453 = NULL;
if ((f_list_len_67(F->a_1450) != f_list_len_67(F->p_1449))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_324)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1449))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1449 != NULL)) {
F->pt_1454 = f_tparam_type_322(F->t_324, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1449)).name))->all));
F->v_1455 = rt_str_copy(f_gexpr_700(F->a_1450, F->pt_1454, &F->at_1453));
f_check_type_224(F->at_1453, F->pt_1454, rt_r_ichk((*(P897)rt_nil_check(F->a_1450)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1449)).name))->all))), rt_str(" = ", 3)), F->v_1455), rt_str(";", 1)); b_; }));
F->p_1449 = (*(P897)rt_nil_check(F->p_1449)).next;
F->a_1450 = (*(P897)rt_nil_check(F->a_1450)).next;
}
{
F->saved_1456 = NULL;
F->saved_1456 = g_psub_954;
F->p_1449 = (*(P903)rt_nil_check(F->t_324)).tparams;
while ((F->p_1449 != NULL)) {
F->l1_1457 = NULL;
F->l2_1458 = NULL;
{ R902 *cell1459 = rt_alloc(sizeof(R902));
(*cell1459).s = NULL;
(*cell1459).next = NULL;
F->l1_1457 = cell1459;
}
{ R902 *cell1460 = rt_alloc(sizeof(R902));
(*cell1460).s = NULL;
(*cell1460).next = NULL;
F->l2_1458 = cell1460;
}
(*(P901)rt_nil_check(F->l1_1457)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1449)).name))->all))), rt_str("@", 1)); b_; }));
(*(P901)rt_nil_check(F->l2_1458)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1449)).name))->all))); b_; }));
(*(P901)rt_nil_check(F->l1_1457)).next = F->l2_1458;
(*(P901)rt_nil_check(F->l2_1458)).next = g_psub_954;
g_psub_954 = F->l1_1457;
F->p_1449 = (*(P897)rt_nil_check(F->p_1449)).next;
}
if (((*(P903)rt_nil_check(F->t_324)).tparams == NULL)) {
f_init_storage_311(&(*F->lval_323), (*(P903)rt_nil_check(F->t_324)).under, (*(P903)rt_nil_check(F->t_324)).elemcons);
} else {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".all", 4)); b_; }), (*(P903)rt_nil_check(F->t_324)).under, (*(P903)rt_nil_check(F->t_324)).elemcons);
}
g_psub_954 = F->saved_1456;
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)12LL)))) {
if (((*(P899)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_323)), rt_str(", ", 2)), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_325)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_226((*(P903)rt_nil_check(F->t_324)).elem)), rt_str("), ", 3)), f_mcopy_355((*(P903)rt_nil_check(F->t_324)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_323)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_empty_set_295(F->t_324)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL)))) {
if (((*(P899)rt_nil_check(F->c_325)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = rt_str_new(", 14)), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_325)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL)))) {
if (((*(P899)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1462 = ((rt_int)1LL), hi1463 = rt_r_ichk((*(P903)rt_nil_check(F->t_324)).ndim);
for (rt_int it1464 = lo1462; it1464 <= hi1463; it1464++) {
F->k_1461 = it1464;
if ((f_cons_lo_244(F->c_325, F->k_1461) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_dim_lo_234(F->k_1461)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P890)rt_nil_check(f_cons_lo_244(F->c_325, F->k_1461)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_323)), rt_str(".", 1)), f_dim_hi_236(F->k_1461)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P890)rt_nil_check(f_cons_hi_247(F->c_325, F->k_1461)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".lo2 = ", 7)), (*F->lval_323)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P903)rt_nil_check(F->t_324)).elem)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_969) && (!rt_str_eq(f_uninit_value_328((*(P903)rt_nil_check(F->t_324)).elem), rt_str("", 0)))))) {
F->i_1465 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1465), rt_str(" = 0; ", 6)), F->i_1465), rt_str(" < ", 3)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str("; ", 2)), F->i_1465), rt_str("++) {", 5)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p[", 3)), F->i_1465), rt_str("]", 1)); b_; }), (*(P903)rt_nil_check(F->t_324)).elem, (*(P903)rt_nil_check(F->t_324)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL)))) {
F->f_1466 = NULL;
F->f_1466 = (*(P903)rt_nil_check(F->t_324)).fields;
while ((F->f_1466 != NULL)) {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1466)).name))->all))); b_; }), (*(P905)rt_nil_check(F->f_1466)).t, (*(P905)rt_nil_check(F->f_1466)).c);
F->f_1466 = (*(P905)rt_nil_check(F->f_1466)).next;
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL)))) {
if (((F->c_325 != NULL) && rt_r_echk((*(P899)rt_nil_check(F->c_325)).hasm))) {
F->f_1467 = NULL;
F->f_1467 = (*(P903)rt_nil_check(F->t_324)).fields;
{ rt_int lo1469 = ((rt_int)1LL), hi1470 = rt_r_ichk((*(P899)rt_nil_check(F->c_325)).mlo);
for (rt_int it1471 = lo1469; it1471 <= hi1470; it1471++) {
F->i_1468 = it1471;
F->f_1467 = (*(P905)rt_nil_check(F->f_1467)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P899)rt_nil_check(F->c_325)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".u.", 3)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1467)).name))->all))); b_; }), (*(P905)rt_nil_check(F->f_1467)).t, (*(P905)rt_nil_check(F->f_1467)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_969) && (!rt_str_eq(f_uninit_value_328(F->t_324), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_uninit_value_328(F->t_324)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_328(P903 t_327) {
  struct f_uninit_value_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_327 = t_327;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_327)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_327)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_327)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_327)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_331(P903 t_329, rstr *v_330) {
  struct f_init_chk_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_329 = t_329;
F->v_330 = v_330;
F->b_1472 = NULL;
F->b_1472 = f_base_of_215(F->t_329);
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_330);
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->b_1472)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->b_1472)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->b_1472)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->b_1472)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_334(P897 e_332, int *ok_333) {
  struct f_manifest_334fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_332 = e_332;
F->ok_333 = ok_333;
F->ok_333v = *F->ok_333;
F->v_1473 = NULL;
F->v_1473 = f_meval_343(F->e_332, &F->ok_333v);
if ((rt_r_echk(F->ok_333v) && (rt_r_ichk((*(P916)rt_nil_check(F->v_1473)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P916)rt_nil_check(F->v_1473)).i);
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

static P916 f_mk_mval_337(rt_int kind_335, rt_int i_336) {
  struct f_mk_mval_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_335 = kind_335;
F->i_336 = i_336;
F->v_1474 = NULL;
{ R917 *cell1475 = rt_alloc(sizeof(R917));
(*cell1475).s = NULL;
(*cell1475).t = NULL;
F->v_1474 = cell1475;
}
(*(P916)rt_nil_check(F->v_1474)).kind = F->kind_335;
(*(P916)rt_nil_check(F->v_1474)).i = F->i_336;
F->result_ = F->v_1474;
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
F->r_1476 = RT_R_IUNDEF;
F->r_1476 = ((rt_int)1LL);
{ rt_int lo1478 = ((rt_int)1LL), hi1479 = F->b_339;
for (rt_int it1480 = lo1478; it1480 <= hi1479; it1480++) {
F->i_1477 = it1480;
F->r_1476 = rt_mul(rt_r_ichk(F->r_1476), F->a_338);
}
}
F->result_ = rt_r_ichk(F->r_1476);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P916 f_meval_343(P897 e_341, int *ok_342) {
  struct f_meval_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_341 = e_341;
F->ok_342 = ok_342;
F->ok_342v = *F->ok_342;
F->a_1481 = NULL;
F->b_1482 = NULL;
F->ok2_1483 = RT_R_EUNDEF;
F->op_1484 = NULL;
F->ok_342v = 0;
if ((F->e_341 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)1LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)5LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)2LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)3LL)))) {
F->ok_342v = 1;
F->a_1481 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
(*(P916)rt_nil_check(F->a_1481)).s = (*(P897)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1481;
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_254((*(P903)rt_nil_check(g_ty_ascii_980)).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all)) >= ((rt_int)0LL))) {
F->ok_342v = 1;
F->a_1481 = f_mk_mval_337((((rt_int)4LL)), f_lit_index_254((*(P903)rt_nil_check(g_ty_ascii_980)).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all)));
(*(P916)rt_nil_check(F->a_1481)).t = g_ty_ascii_980;
(*(P916)rt_nil_check(F->a_1481)).s = (*(P897)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1481;
goto ret_;
}
F->a_1481 = f_mk_mval_337((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P916)rt_nil_check(F->a_1481)).s = (*(P897)rt_nil_check(F->e_341)).name;
F->ok_342v = 1;
F->result_ = F->a_1481;
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_343((*(P897)rt_nil_check(F->e_341)).a, &F->ok_342v);
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)7LL)))) {
F->y_1485 = NULL;
F->y_1485 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all));
if ((((F->y_1485 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1485)).kind) == (((rt_int)2LL)))) && ((*(P907)rt_nil_check(F->y_1485)).mv != NULL))) {
F->ok_342v = 1;
F->result_ = (*(P907)rt_nil_check(F->y_1485)).mv;
goto ret_;
} else if ((((F->y_1485 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1485)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P907)rt_nil_check(F->y_1485)).hasmv))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P907)rt_nil_check(F->y_1485)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) == (((rt_int)8LL)))) {
F->a_1481 = f_meval_343((*(P897)rt_nil_check(F->e_341)).a, &F->ok_342v);
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i)));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i)));
goto ret_;
} else if (((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all), rt_str("+", 1)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1481;
goto ret_;
}
F->ok_342v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->e_341)).kind) != (((rt_int)9LL))) || f_user_defined_353(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_341)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1484 = (*(P897)rt_nil_check(F->e_341)).name;
F->a_1481 = f_meval_343((*(P897)rt_nil_check(F->e_341)).a, &F->ok_342v);
F->b_1482 = f_meval_343((*(P897)rt_nil_check(F->e_341)).b, &F->ok2_1483);
F->ok_342v = (rt_r_echk(F->ok_342v) && rt_r_echk(F->ok2_1483));
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_342v = 0;
if (((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)1LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_add(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_div(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("**", 2)) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), f_ipow_340(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) == rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) != rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) < rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) <= rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) > rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) >= rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("+", 1)) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("-", 1))) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("*", 1))) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("/", 1))))) {
F->ok_342v = 1;
F->result_ = F->a_1481;
goto ret_;
} else if ((((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("**", 2)))) {
F->ok_342v = 1;
F->result_ = F->a_1481;
goto ret_;
} else if (((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)2LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_add(rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i), rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("XOR", 3)) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) != rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).i) == rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1)) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check(F->a_1481)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check(F->b_1482)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check(F->a_1481)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check(F->b_1482)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1)) || rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check(F->a_1481)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check(F->b_1482)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check(F->a_1481)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check(F->b_1482)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P890)rt_nil_check(F->op_1484))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P916)rt_nil_check(F->a_1481)).kind) == (((rt_int)5LL))) || ((*(P916)rt_nil_check(F->a_1481)).t == g_ty_ascii_980))) && ((rt_r_ichk((*(P916)rt_nil_check(F->b_1482)).kind) == (((rt_int)5LL))) || ((*(P916)rt_nil_check(F->b_1482)).t == g_ty_ascii_980)))) {
F->r_1486 = NULL;
F->r_1486 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
F->ok_342v = 1;
(*(P916)rt_nil_check(F->r_1486)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_349(F->a_1481), f_mstr_349(F->b_1482)); b_; }));
F->result_ = F->r_1486;
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

static rstr f_mstr_349(P916 v_348) {
  struct f_mstr_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_348 = v_348;
if ((rt_r_ichk((*(P916)rt_nil_check(F->v_348)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P890)rt_nil_check((*(P916)rt_nil_check(F->v_348)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_351(rt_r_ichk((*(P916)rt_nil_check(F->v_348)).i)));
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
F->printable_1487 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_350 >= ((rt_int)32LL)) && (F->i_350 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1487, rt_sub(F->i_350, ((rt_int)31LL))));
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
F->y_1488 = NULL;
F->y_1488 = f_lookup_155(&(*F->op_352));
F->result_ = ((F->y_1488 != NULL) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_1488)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1488)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_355(P903 t_354) {
  struct f_mcopy_355fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_354 = t_354;
F->ct_1489 = rt_str_copy(f_ctype_226(F->t_354));
F->name_1490 = rt_str_new(rt_add(((rt_int)((F->ct_1489).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1490, rt_str_cat(rt_str("mc_", 3), F->ct_1489));
F->l_1491 = NULL;
if ((!f_seen_name_388(g_mcopies_976, &F->name_1490))) {
{ R902 *cell1492 = rt_alloc(sizeof(R902));
(*cell1492).s = NULL;
(*cell1492).next = NULL;
F->l_1491 = cell1492;
}
(*(P901)rt_nil_check(F->l_1491)).s = f_mk_3(&F->name_1490);
(*(P901)rt_nil_check(F->l_1491)).next = g_mcopies_976;
g_mcopies_976 = F->l_1491;
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1490), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_354)).kind) == (((rt_int)15LL))) && f_top_level_369((*(P903)rt_nil_check(F->t_354)).assignp))) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1490), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_363((*(P903)rt_nil_check(F->t_354)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1489), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1489), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1490), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1489), rt_str(" *)d = ", 7)), f_copy_code_377(F->t_354, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1489), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1490;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_357(P903 t_356) {
  struct f_composite_357fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_356 = t_356;
F->result_ = ((((rt_r_ichk((*(P903)rt_nil_check(F->t_356)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_356)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_356)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P903)rt_nil_check(F->t_356)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_356)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_363(P907 y_358, rstr *a_359, int lv_a_360, rstr *b_361, int lv_b_362) {
  struct f_user_call2_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_358 = y_358;
F->a_359 = a_359;
F->lv_a_360 = lv_a_360;
F->b_361 = b_361;
F->lv_b_362 = lv_b_362;
F->args_1493 = NULL;
F->args_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_358)).level) > ((rt_int)0LL))) {
F->args_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1495 = ((rt_int)1LL), hi1496 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P907)rt_nil_check(F->y_358)).level));
for (rt_int it1497 = lo1495; it1497 <= hi1496; it1497++) {
F->i_1494 = it1497;
F->args_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_1493))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_1493))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_358)).cname))->all), rt_str("(", 1)), (((P890)rt_nil_check(F->args_1493))->all)), f_user_arg_367((*(P907)rt_nil_check(F->y_358)).params, &(*F->a_359), F->lv_a_360)), rt_str(", ", 2)), f_user_arg_367((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_358)).params)).next, &(*F->b_361), F->lv_b_362)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_367(P909 pm_364, rstr *v_365, int lv_366) {
  struct f_user_arg_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_364 = pm_364;
F->v_365 = v_365;
F->lv_366 = lv_366;
if ((rt_r_ichk((*(P909)rt_nil_check(F->pm_364)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_377((*(P909)rt_nil_check(F->pm_364)).t, &(*F->v_365));
goto ret_;
} else if (F->lv_366) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_365)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1498 = rt_str_copy(f_ctype_226((*(P909)rt_nil_check(F->pm_364)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1498), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1498), rt_str(")); *b_ = ", 10)), (*F->v_365)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_369(P907 y_368) {
  struct f_top_level_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_368 = y_368;
F->result_ = ((F->y_368 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_368)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_374(rstr *lval_370, P903 t_371, rstr *v_372, P899 c_373) {
  struct f_assign_code_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_370 = lval_370;
F->t_371 = t_371;
F->v_372 = v_372;
F->c_373 = c_373;
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_371)).assignp != NULL)) && (rt_r_echk(g_in_func_949) || f_top_level_369((*(P903)rt_nil_check(F->t_371)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_363((*(P903)rt_nil_check(F->t_371)).assignp, &(*F->lval_370), 1, &(*F->v_372), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_371)).tparams == NULL))) {
F->result_ = f_assign_code_374(&(*F->lval_370), (*(P903)rt_nil_check(F->t_371)).under, &(*F->v_372), F->c_373);
goto ret_;
}
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)17LL))) && (F->c_373 != NULL)) && ((*(P899)rt_nil_check(F->c_373)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_371)), rt_str(" u_ = ", 6)), (*F->v_372)), rt_str("; if (u_.tag != (", 17)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_373)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_226(F->t_371)), rt_str("(&", 2)), (*F->lval_370)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_357(F->t_371)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_371)), rt_str("(&", 2)), (*F->lval_370)), rt_str(", ", 2)), (*F->v_372)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_370)), rt_str(", ", 2)), (*F->v_372)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_371)).kind) == (((rt_int)7LL))))) {
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

static rstr f_copy_code_377(P903 t_375, rstr *v_376) {
  struct f_copy_code_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_375 = t_375;
F->v_376 = v_376;
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_375)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_375)).tparams == NULL))) {
F->result_ = f_copy_code_377((*(P903)rt_nil_check(F->t_375)).under, &(*F->v_376));
goto ret_;
}
if (f_composite_357(F->t_375)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_375)), rt_str("(", 1)), (*F->v_376)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_375)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_376)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_375)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_375)).kind) == (((rt_int)7LL))))) {
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

static rstr f_eq_code_381(P903 t_378, rstr *a_379, rstr *b_380) {
  struct f_eq_code_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_378 = t_378;
F->a_379 = a_379;
F->b_380 = b_380;
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_378)).eqp != NULL)) && (rt_r_echk(g_in_func_949) || f_top_level_369((*(P903)rt_nil_check(F->t_378)).eqp)))) {
F->result_ = f_user_call2_363((*(P903)rt_nil_check(F->t_378)).eqp, &(*F->a_379), 0, &(*F->b_380), 0);
goto ret_;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_378)).tparams == NULL))) {
F->result_ = f_eq_code_381((*(P903)rt_nil_check(F->t_378)).under, &(*F->a_379), &(*F->b_380));
goto ret_;
}
if (f_composite_357(F->t_378)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_378)), rt_str("(", 1)), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_379)), rt_str(" == ", 4)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_379)), rt_str(" == ", 4)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_378)).kind) == (((rt_int)7LL))))) {
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

static rstr f_elem_assign_385(rstr *lval_382, P903 t_383, rstr *v_384) {
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

static int f_seen_name_388(P901 l_386, rstr *s_387) {
  struct f_seen_name_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_386 = l_386;
F->s_387 = s_387;
F->p_1499 = NULL;
F->p_1499 = F->l_386;
while ((F->p_1499 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P901)rt_nil_check(F->p_1499)).s))->all), (*F->s_387))) {
F->result_ = 1;
goto ret_;
}
F->p_1499 = (*(P901)rt_nil_check(F->p_1499)).next;
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
F->order_1500 = NULL;
F->t_1501 = NULL;
F->t_1501 = g_all_types_938;
F->done_1502 = NULL;
while ((F->t_1501 != NULL)) {
if ((f_composite_357(F->t_1501) && (!f_seen_name_388(F->done_1502, &(((P890)rt_nil_check((*(P903)rt_nil_check(F->t_1501)).cname))->all))))) {
F->l_1503 = NULL;
F->c_1504 = rt_str_new(((rt_int)(((((P890)rt_nil_check((*(P903)rt_nil_check(F->t_1501)).cname))->all)).len)));
rt_str_assign(&F->c_1504, (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_1501)).cname))->all));
{ R902 *cell1505 = rt_alloc(sizeof(R902));
(*cell1505).s = NULL;
(*cell1505).next = NULL;
F->l_1503 = cell1505;
}
(*(P901)rt_nil_check(F->l_1503)).s = (*(P903)rt_nil_check(F->t_1501)).cname;
(*(P901)rt_nil_check(F->l_1503)).next = F->done_1502;
F->done_1502 = F->l_1503;
f_put_27(g_out_helpers_941, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1504), rt_str("(", 1)), F->c_1504), rt_str(" *d, ", 5)), F->c_1504), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_941, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1504), rt_str(" cp_", 4)), F->c_1504), rt_str("(", 1)), F->c_1504), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_941, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1504), rt_str("(", 1)), F->c_1504), rt_str(" a, ", 4)), F->c_1504), rt_str(" b);", 4)); b_; }));
f_helper_bodies_391(F->t_1501);
}
F->t_1501 = (*(P903)rt_nil_check(F->t_1501)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_391(P903 t_390) {
  struct f_helper_bodies_391fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_390 = t_390;
F->c_1506 = rt_str_new(((rt_int)(((((P890)rt_nil_check((*(P903)rt_nil_check(F->t_390)).cname))->all)).len)));
rt_str_assign(&F->c_1506, (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_390)).cname))->all));
F->b_1507 = NULL;
F->b_1507 = g_out_funcs_944;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_390)).kind) == (((rt_int)6LL)))) {
F->e_1508 = NULL;
F->e_1508 = (*(P903)rt_nil_check(F->t_390)).elem;
F->sizes_1509 = NULL;
F->sizes_1509 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1510 = NULL;
F->bounds_1510 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1512 = ((rt_int)1LL), hi1513 = rt_r_ichk((*(P903)rt_nil_check(F->t_390)).ndim);
for (rt_int it1514 = lo1512; it1514 <= hi1513; it1514++) {
F->k_1511 = it1514;
F->l_1515 = rt_str_copy(f_dim_lo_234(F->k_1511));
F->h_1516 = rt_str_copy(f_dim_hi_236(F->k_1511));
F->sizes_1509 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->sizes_1509))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1515), rt_str(", d->", 5)), F->h_1516), rt_str(") != RT_R_EXT(s.", 16)), F->l_1515), rt_str(", s.", 4)), F->h_1516), rt_str(")", 1)); b_; }));
F->bounds_1510 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->bounds_1510))->all), rt_str(" || a.", 6)), F->l_1515), rt_str(" != b.", 6)), F->l_1515), rt_str(" || a.", 6)), F->h_1516), rt_str(" != b.", 6)), F->h_1516); b_; }));
}
}
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" *d, ", 5)), F->c_1506), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P890)rt_nil_check(F->sizes_1509))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1508, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1508, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1506), rt_str(" cp_", 4)), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1506), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_226(F->e_1508)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_377(F->e_1508, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" a, ", 4)), F->c_1506), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P890)rt_nil_check(F->bounds_1510))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_381(F->e_1508, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_390)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" *d, ", 5)), F->c_1506), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_178((*(P903)rt_nil_check(F->t_390)).under) && ((*(P903)rt_nil_check(F->t_390)).elemcons != NULL)) && ((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_390)).elemcons)).lo != NULL))) {
F->saved_1517 = NULL;
F->saved_1517 = g_psub_954;
F->p_1518 = NULL;
F->p_1518 = (*(P903)rt_nil_check(F->t_390)).tparams;
while ((F->p_1518 != NULL)) {
F->l1_1519 = NULL;
F->l2_1520 = NULL;
{ R902 *cell1521 = rt_alloc(sizeof(R902));
(*cell1521).s = NULL;
(*cell1521).next = NULL;
F->l1_1519 = cell1521;
}
{ R902 *cell1522 = rt_alloc(sizeof(R902));
(*cell1522).s = NULL;
(*cell1522).next = NULL;
F->l2_1520 = cell1522;
}
(*(P901)rt_nil_check(F->l1_1519)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1518)).name))->all))), rt_str("@", 1)); b_; }));
(*(P901)rt_nil_check(F->l2_1520)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1518)).name))->all))); b_; }));
(*(P901)rt_nil_check(F->l1_1519)).next = F->l2_1520;
(*(P901)rt_nil_check(F->l2_1520)).next = g_psub_954;
g_psub_954 = F->l1_1519;
F->p_1518 = (*(P897)rt_nil_check(F->p_1518)).next;
}
if ((rt_r_ichk((*(P903)rt_nil_check((*(P903)rt_nil_check(F->t_390)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_390)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_390)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_390)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_390)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_954 = F->saved_1517;
} else {
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P903)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1506), rt_str(" cp_", 4)), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" s) { s.all = ", 14)), f_copy_code_377((*(P903)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" a, ", 4)), F->c_1506), rt_str(" b) { return ", 13)), f_eq_code_381((*(P903)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_390)).kind) == (((rt_int)17LL)))) {
F->f_1523 = NULL;
F->f_1523 = (*(P903)rt_nil_check(F->t_390)).fields;
F->i_1524 = RT_R_IUNDEF;
F->i_1524 = ((rt_int)0LL);
F->cases_as_1525 = NULL;
F->cases_as_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1526 = NULL;
F->cases_cp_1526 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1527 = NULL;
F->cases_eq_1527 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1523 != NULL)) {
F->fn_1528 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1523)).name))->all))));
F->cases_as_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->cases_as_1525))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1524))), rt_str(": d->", 5)), F->fn_1528), rt_str(" = ", 3)), f_copy_code_377((*(P905)rt_nil_check(F->f_1523)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1528); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1526 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->cases_cp_1526))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1524))), rt_str(": d.", 4)), F->fn_1528), rt_str(" = ", 3)), f_copy_code_377((*(P905)rt_nil_check(F->f_1523)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1528); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1527 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->cases_eq_1527))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1524))), rt_str(": return ", 9)), f_eq_code_381((*(P905)rt_nil_check(F->f_1523)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1528); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1528); b_; }))), rt_str(";", 1)); b_; }));
F->i_1524 = rt_add(rt_r_ichk(F->i_1524), ((rt_int)1LL));
F->f_1523 = (*(P905)rt_nil_check(F->f_1523)).next;
}
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" *d, ", 5)), F->c_1506), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P890)rt_nil_check(F->cases_as_1525))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1506), rt_str(" cp_", 4)), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1506), rt_str(" d = s; switch (s.tag) {", 24)), (((P890)rt_nil_check(F->cases_cp_1526))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" a, ", 4)), F->c_1506), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P890)rt_nil_check(F->cases_eq_1527))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1529 = NULL;
F->f_1529 = (*(P903)rt_nil_check(F->t_390)).fields;
F->conds_1530 = NULL;
F->conds_1530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" *d, ", 5)), F->c_1506), rt_str(" s) {", 5)); b_; }));
while ((F->f_1529 != NULL)) {
F->fn_1531 = rt_str_copy(f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1529)).name))->all)));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1531); b_; }), (*(P905)rt_nil_check(F->f_1529)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1531); b_; }))); b_; }));
F->f_1529 = (*(P905)rt_nil_check(F->f_1529)).next;
}
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1506), rt_str(" cp_", 4)), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1506), rt_str(" d = s;", 7)); b_; }));
F->f_1529 = (*(P903)rt_nil_check(F->t_390)).fields;
while ((F->f_1529 != NULL)) {
F->fn_1532 = rt_str_copy(f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_1529)).name))->all)));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1532), rt_str(" = ", 3)), f_copy_code_377((*(P905)rt_nil_check(F->f_1529)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1532); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1530))->all), rt_str(" && ", 4)), f_eq_code_381((*(P905)rt_nil_check(F->f_1529)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1532); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1532); b_; }))); b_; }));
F->f_1529 = (*(P905)rt_nil_check(F->f_1529)).next;
}
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1506), rt_str("(", 1)), F->c_1506), rt_str(" a, ", 4)), F->c_1506), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P890)rt_nil_check(F->conds_1530))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1507, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_393(P897 elems_392) {
  struct f_declare_body_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_392 = elems_392;
F->e_1533 = NULL;
F->e_1533 = F->elems_392;
while ((F->e_1533 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)51LL)))) {
F->g_1534 = NULL;
F->g_1534 = f_new_sym_173((((rt_int)10LL)), (*(P897)rt_nil_check(F->e_1533)).name);
(*(P907)rt_nil_check(F->g_1534)).decl = F->e_1533;
(*(P907)rt_nil_check(F->g_1534)).level = rt_r_ichk(g_cur_level_950);
(*(P907)rt_nil_check(F->g_1534)).owner = g_func_sym_961;
(*(P907)rt_nil_check(F->g_1534)).gctx = g_fctx_951;
f_define_160(F->g_1534, rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line));
}
F->e_1533 = (*(P897)rt_nil_check(F->e_1533)).next;
}
F->e_1533 = F->elems_392;
while ((F->e_1533 != NULL)) {
if (((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).flag) == ((rt_int)0LL)))) {
f_manifest_const_395(F->e_1533);
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_403(F->e_1533);
} else if ((((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).flag) != ((rt_int)3LL)))) {
f_gen_expose_425(F->e_1533);
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)49LL)))) {
F->y_1535 = NULL;
F->y_1535 = f_new_sym_173((((rt_int)7LL)), (*(P897)rt_nil_check(F->e_1533)).name);
(*(P907)rt_nil_check(F->y_1535)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_160(F->y_1535, rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line));
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1535)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1535)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)42LL)))) {
F->y_1536 = NULL;
F->y_1536 = f_new_sym_173((((rt_int)6LL)), (*(P897)rt_nil_check(F->e_1533)).name);
(*(P907)rt_nil_check(F->y_1536)).st = (*(P897)rt_nil_check(F->e_1533)).a;
(*(P907)rt_nil_check(F->y_1536)).decl = F->e_1533;
f_define_160(F->y_1536, rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line));
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)44LL)))) {
F->y_1537 = NULL;
F->y_1537 = f_new_sym_173((((rt_int)5LL)), (*(P897)rt_nil_check(F->e_1533)).name);
F->t_1538 = NULL;
F->t_1538 = f_new_typ_175((((rt_int)8LL)));
(*(P903)rt_nil_check(F->t_1538)).name = (*(P897)rt_nil_check(F->e_1533)).name;
(*(P903)rt_nil_check(F->t_1538)).decl = F->e_1533;
(*(P907)rt_nil_check(F->y_1537)).t = F->t_1538;
f_define_160(F->y_1537, rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line));
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)43LL)))) {
F->y_1539 = NULL;
F->y_1539 = f_new_sym_173((((rt_int)5LL)), (*(P897)rt_nil_check(F->e_1533)).name);
(*(P907)rt_nil_check(F->y_1539)).st = (*(P897)rt_nil_check(F->e_1533)).a;
(*(P907)rt_nil_check(F->y_1539)).decl = F->e_1533;
f_define_160(F->y_1539, rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line));
}
F->e_1533 = (*(P897)rt_nil_check(F->e_1533)).next;
}
F->e_1533 = F->elems_392;
while ((F->e_1533 != NULL)) {
if ((((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)50LL))))) {
F->y_1540 = NULL;
f_declare_subprogram_452(F->e_1533);
F->y_1540 = f_lookup_decl_157(F->e_1533);
(*(P907)rt_nil_check(F->y_1540)).home = F->elems_392;
f_normal_function_450(F->e_1533, F->y_1540);
}
F->e_1533 = (*(P897)rt_nil_check(F->e_1533)).next;
}
F->e_1533 = F->elems_392;
{
F->snap_1541 = NULL;
while ((F->e_1533 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1541 == NULL)) {
{ P911 cell1542 = rt_alloc(sizeof *cell1542);
rt_int pv1543 = (((rt_int)4093LL));
cell1542->p_n = pv1543;
cell1542->all.lo = ((rt_int)0LL); cell1542->all.hi = pv1543;
cell1542->all.lo2 = cell1542->all.hi2 = 1;
cell1542->all.p = rt_alloc(sizeof(P907) * (size_t)(RT_CNT(cell1542->all)) + 1);
for (rt_int i1544 = 0; i1544 < (RT_CNT(cell1542->all)); i1544++) {
cell1542->all.p[i1544] = NULL;
}
F->snap_1541 = cell1542;
}
{ rt_int lo1546 = ((rt_int)0LL), hi1547 = (((rt_int)4093LL));
for (rt_int it1548 = lo1546; it1548 <= hi1547; it1548++) {
F->i_1545 = it1548;
(((P911)rt_nil_check(F->snap_1541))->all).p[(rt_index(F->i_1545, (((P911)rt_nil_check(F->snap_1541))->all).lo, (((P911)rt_nil_check(F->snap_1541))->all).hi) - (((P911)rt_nil_check(F->snap_1541))->all).lo)] = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(F->i_1545, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1549 = NULL;
F->g_1549 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all));
(*(P907)rt_nil_check(F->g_1549)).env = F->snap_1541;
}
}
F->e_1533 = (*(P897)rt_nil_check(F->e_1533)).next;
}
}
F->e_1533 = F->elems_392;
while ((F->e_1533 != NULL)) {
if (((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1550 = NULL;
F->y_1550 = f_lookup_decl_157(F->e_1533);
if (((((F->y_1550 != NULL) && ((*(P907)rt_nil_check(F->y_1550)).params != NULL)) && ((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1550)).params)).next == NULL)) && ((rt_r_ichk((*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1550)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1550)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1550)).params)).t)).initp = F->y_1550;
} else {
(*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1550)).params)).t)).finalp = F->y_1550;
}
}
}
if ((((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)45LL))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("=", 1)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("<", 1)))))) {
F->y_1551 = NULL;
F->y_1551 = f_lookup_decl_157(F->e_1533);
if (((((((F->y_1551 != NULL) && ((*(P907)rt_nil_check(F->y_1551)).params != NULL)) && ((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).next != NULL)) && ((*(P909)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).next)).next == NULL)) && (rt_r_ichk((*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_213((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).t, (*(P909)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).next)).t))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_1533)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).t)).assignp = F->y_1551;
} else if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1533)).name))->all), rt_str("=", 1))) {
(*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).t)).eqp = F->y_1551;
} else {
(*(P903)rt_nil_check((*(P909)rt_nil_check((*(P907)rt_nil_check(F->y_1551)).params)).t)).ltp = F->y_1551;
}
}
}
F->e_1533 = (*(P897)rt_nil_check(F->e_1533)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_395(P897 d_394) {
  struct f_manifest_const_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_394 = d_394;
F->ok_1552 = RT_R_EUNDEF;
F->v_1553 = NULL;
F->y_1554 = NULL;
F->t_1555 = NULL;
F->ctext_1556 = NULL;
if (((*(P897)rt_nil_check(F->d_394)).a != NULL)) {
if (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->d_394)).a)).kind) != (((rt_int)70LL))) || ((*(P897)rt_nil_check((*(P897)rt_nil_check(F->d_394)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1553 = f_meval_343((*(P897)rt_nil_check(F->d_394)).b, &F->ok_1552);
if ((!rt_r_echk(F->ok_1552))) {
goto ret_;
}
{
F->saved_1557 = NULL;
F->saved_1557 = g_code_947;
g_code_947 = f_new_buffer_24();
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
{ rt_frame xf1558;
if (RT_TRY(xf1558)) {
F->ctext_1556 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700((*(P897)rt_nil_check(F->d_394)).b, NULL, &F->t_1555)), rt_str(")", 1)); b_; }));
RT_POP(xf1558);
} else {
RT_POP(xf1558);
int x1559 = rt_xcur;
if (0 || x1559 == ex_compile_error_1) {
F->ok_1552 = 0;
} else {
rt_raise(x1559);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
F->ok_1552 = (rt_r_echk(F->ok_1552) && ((*(P920)rt_nil_check(g_code_947)).head == NULL));
g_code_947 = F->saved_1557;
}
if (((!rt_r_echk(F->ok_1552)) || (((*(P897)rt_nil_check(F->d_394)).a != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->t_1555)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P916)rt_nil_check(F->v_1553)).kind) == (((rt_int)4LL)))) {
(*(P916)rt_nil_check(F->v_1553)).t = F->t_1555;
(*(P916)rt_nil_check(F->v_1553)).i = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(F->t_1555))).lits, &(((P890)rt_nil_check((*(P916)rt_nil_check(F->v_1553)).s))->all));
}
(*(P897)rt_nil_check(F->d_394)).flag = ((rt_int)1LL);
F->y_1554 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->d_394)).name);
(*(P907)rt_nil_check(F->y_1554)).t = F->t_1555;
(*(P907)rt_nil_check(F->y_1554)).c = f_new_cons_176();
(*(P907)rt_nil_check(F->y_1554)).mv = F->v_1553;
if ((rt_r_ichk((*(P916)rt_nil_check(F->v_1553)).kind) == (((rt_int)1LL)))) {
(*(P907)rt_nil_check(F->y_1554)).mvalue = rt_r_ichk((*(P916)rt_nil_check(F->v_1553)).i);
(*(P907)rt_nil_check(F->y_1554)).hasmv = 1;
}
(*(P907)rt_nil_check(F->y_1554)).ro_flag = 1;
(*(P907)rt_nil_check(F->y_1554)).access = F->ctext_1556;
f_define_160(F->y_1554, rt_r_ichk((*(P897)rt_nil_check(F->d_394)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_399(P897 d_396, rstr *name_397, int *ro_398) {
  struct f_exported_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_396 = d_396;
F->name_397 = name_397;
F->ro_398 = ro_398;
F->ro_398v = *F->ro_398;
F->p_1560 = NULL;
F->p_1560 = (*(P897)rt_nil_check(F->d_396)).a;
F->ro_398v = 0;
if ((rt_r_ichk((*(P897)rt_nil_check(F->d_396)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1560 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1560)).name))->all), (*F->name_397))) {
F->ro_398v = (rt_r_ichk((*(P897)rt_nil_check(F->p_1560)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1560 = (*(P897)rt_nil_check(F->p_1560)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_398v)) (*F->ro_398) = F->ro_398v;
  RT_FPOP();
  return F->result_;
}

static P907 f_copy_sym_401(P907 y_400) {
  struct f_copy_sym_401fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_400 = y_400;
F->z_1561 = NULL;
{ R908 *cell1562 = rt_alloc(sizeof(R908));
(*cell1562).name = NULL;
(*cell1562).t = NULL;
(*cell1562).c = NULL;
(*cell1562).access = NULL;
(*cell1562).cname = NULL;
(*cell1562).st = NULL;
(*cell1562).decl = NULL;
(*cell1562).params = NULL;
(*cell1562).result = NULL;
(*cell1562).members = NULL;
(*cell1562).mnext = NULL;
(*cell1562).binds = NULL;
(*cell1562).insts = NULL;
(*cell1562).env = NULL;
(*cell1562).chain = NULL;
(*cell1562).stack = NULL;
(*cell1562).owner = NULL;
(*cell1562).gctx = NULL;
(*cell1562).mv = NULL;
(*cell1562).reqs = NULL;
(*cell1562).home = NULL;
(*cell1562).capn = NULL;
(*cell1562).tbinds = NULL;
F->z_1561 = cell1562;
}
(*(P907)rt_nil_check(F->z_1561)).kind = rt_r_ichk((*(P907)rt_nil_check(F->y_400)).kind);
(*(P907)rt_nil_check(F->z_1561)).name = (*(P907)rt_nil_check(F->y_400)).name;
(*(P907)rt_nil_check(F->z_1561)).t = (*(P907)rt_nil_check(F->y_400)).t;
(*(P907)rt_nil_check(F->z_1561)).c = (*(P907)rt_nil_check(F->y_400)).c;
(*(P907)rt_nil_check(F->z_1561)).access = (*(P907)rt_nil_check(F->y_400)).access;
(*(P907)rt_nil_check(F->z_1561)).cname = (*(P907)rt_nil_check(F->y_400)).cname;
(*(P907)rt_nil_check(F->z_1561)).ro_flag = rt_r_echk((*(P907)rt_nil_check(F->y_400)).ro_flag);
(*(P907)rt_nil_check(F->z_1561)).mvalue = rt_r_ichk((*(P907)rt_nil_check(F->y_400)).mvalue);
(*(P907)rt_nil_check(F->z_1561)).hasmv = rt_r_echk((*(P907)rt_nil_check(F->y_400)).hasmv);
(*(P907)rt_nil_check(F->z_1561)).st = (*(P907)rt_nil_check(F->y_400)).st;
(*(P907)rt_nil_check(F->z_1561)).decl = (*(P907)rt_nil_check(F->y_400)).decl;
(*(P907)rt_nil_check(F->z_1561)).params = (*(P907)rt_nil_check(F->y_400)).params;
(*(P907)rt_nil_check(F->z_1561)).result = (*(P907)rt_nil_check(F->y_400)).result;
(*(P907)rt_nil_check(F->z_1561)).level = rt_r_ichk((*(P907)rt_nil_check(F->y_400)).level);
(*(P907)rt_nil_check(F->z_1561)).byref = rt_r_echk((*(P907)rt_nil_check(F->y_400)).byref);
(*(P907)rt_nil_check(F->z_1561)).members = (*(P907)rt_nil_check(F->y_400)).members;
(*(P907)rt_nil_check(F->z_1561)).env = (*(P907)rt_nil_check(F->y_400)).env;
F->result_ = F->z_1561;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_403(P897 d_402) {
  struct f_gen_capsule_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_402 = d_402;
F->y_1563 = NULL;
F->y_1563 = f_new_sym_173((((rt_int)8LL)), (*(P897)rt_nil_check(F->d_402)).name);
F->saved_1564 = NULL;
F->saved_1564 = g_suppress_967;
F->p_1565 = NULL;
F->p_1565 = (*(P897)rt_nil_check(F->d_402)).b;
F->tail_1566 = NULL;
(*(P907)rt_nil_check(F->y_1563)).decl = F->d_402;
while ((F->p_1565 != NULL)) {
F->pm_1567 = NULL;
{ R910 *cell1568 = rt_alloc(sizeof(R910));
(*cell1568).name = NULL;
(*cell1568).t = NULL;
(*cell1568).c = NULL;
(*cell1568).cfield = NULL;
(*cell1568).next = NULL;
F->pm_1567 = cell1568;
}
(*(P909)rt_nil_check(F->pm_1567)).name = (*(P897)rt_nil_check(F->p_1565)).name;
(*(P909)rt_nil_check(F->pm_1567)).mode = rt_r_ichk((*(P897)rt_nil_check(F->p_1565)).ival);
(*(P909)rt_nil_check(F->pm_1567)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1565)).a, &(*(P909)rt_nil_check(F->pm_1567)).c);
if ((F->tail_1566 == NULL)) {
(*(P907)rt_nil_check(F->y_1563)).params = F->pm_1567;
} else {
(*(P909)rt_nil_check(F->tail_1566)).next = F->pm_1567;
}
F->tail_1566 = F->pm_1567;
F->p_1565 = (*(P897)rt_nil_check(F->p_1565)).next;
}
if (((*(P897)rt_nil_check(F->d_402)).b == NULL)) {
g_suppress_967 = f_suppressing_459((*(P897)rt_nil_check(F->d_402)).prags);
f_elaborate_capsule_412(F->d_402, F->y_1563, NULL, F->d_402);
g_suppress_967 = F->saved_1564;
}
f_define_160(F->y_1563, rt_r_ichk((*(P897)rt_nil_check(F->d_402)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_407(P897 d_404, P897 args_405, rt_int line_406) {
  struct f_capsule_params_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_404 = d_404;
F->args_405 = args_405;
F->line_406 = line_406;
F->p_1569 = NULL;
F->p_1569 = (*(P897)rt_nil_check(F->d_404)).b;
F->a_1570 = NULL;
F->a_1570 = F->args_405;
F->t_1571 = NULL;
F->vt_1572 = NULL;
F->c_1573 = NULL;
while (((F->p_1569 != NULL) && (F->a_1570 != NULL))) {
F->t_1571 = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1569)).a, &F->c_1573);
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_1569)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->p_1569)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->p_1569)).ival) == (((rt_int)4LL))))) {
F->lv_1574 = NULL;
F->lc_1575 = NULL;
F->ro_1576 = RT_R_EUNDEF;
F->y_1577 = NULL;
F->y_1577 = f_new_sym_173((((rt_int)1LL)), (*(P897)rt_nil_check(F->p_1569)).name);
f_lvalue_669(F->a_1570, &F->lv_1574, &F->vt_1572, &F->lc_1575, &F->ro_1576);
f_check_type_224(F->vt_1572, F->t_1571, F->line_406);
if ((rt_r_echk(F->ro_1576) && (rt_r_ichk((*(P897)rt_nil_check(F->p_1569)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1569)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_949)) {
F->f_1578 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1569)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_1571)), rt_str(" *", 2)), F->f_1578), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1578), rt_str(" = &", 4)), (((P890)rt_nil_check(F->lv_1574))->all)), rt_str(";", 1)); b_; }));
(*(P907)rt_nil_check(F->y_1577)).level = rt_r_ichk(g_cur_level_950);
(*(P907)rt_nil_check(F->y_1577)).access = f_mk_3(&F->f_1578);
(*(P907)rt_nil_check(F->y_1577)).byref = 1;
} else {
F->g_1579 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1569)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_1571)), rt_str(" *", 2)), F->g_1579), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_957, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1579), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1579, rt_str(" = &", 4)), (((P890)rt_nil_check(F->lv_1574))->all)), rt_str(";", 1)); b_; }));
(*(P907)rt_nil_check(F->y_1577)).level = ((rt_int)0LL);
(*(P907)rt_nil_check(F->y_1577)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1579), rt_str(")", 1)); b_; }));
}
(*(P907)rt_nil_check(F->y_1577)).t = F->t_1571;
(*(P907)rt_nil_check(F->y_1577)).c = F->lc_1575;
(*(P907)rt_nil_check(F->y_1577)).ro_flag = (rt_r_ichk((*(P897)rt_nil_check(F->p_1569)).ival) == (((rt_int)4LL)));
f_define_160(F->y_1577, F->line_406);
} else {
F->y_1580 = NULL;
F->y_1580 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_1569)).name);
F->v_1581 = rt_str_copy(f_gexpr_700(F->a_1570, F->t_1571, &F->vt_1572));
f_check_type_224(F->vt_1572, F->t_1571, F->line_406);
{
F->access_1582 = rt_str_copy(f_storage_468(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1569)).name))->all), F->t_1571));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1582, rt_str(" = ", 3)), f_copy_code_377(F->t_1571, &F->v_1581)), rt_str(";", 1)); b_; }));
f_bind_471(F->y_1580, &F->access_1582);
}
(*(P907)rt_nil_check(F->y_1580)).t = F->t_1571;
(*(P907)rt_nil_check(F->y_1580)).c = F->c_1573;
(*(P907)rt_nil_check(F->y_1580)).ro_flag = 1;
f_define_160(F->y_1580, F->line_406);
}
F->p_1569 = (*(P897)rt_nil_check(F->p_1569)).next;
F->a_1570 = (*(P897)rt_nil_check(F->a_1570)).next;
}
if (((F->p_1569 != NULL) || (F->a_1570 != NULL))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_404)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_412(P897 d_408, P907 y_409, P897 args_410, P897 owner_411) {
  struct f_elaborate_capsule_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_408 = d_408;
F->y_409 = y_409;
F->args_410 = args_410;
F->owner_411 = owner_411;
F->cr_1583 = NULL;
F->ctx_1584 = NULL;
F->saved_gotos_1585 = NULL;
F->m_1586 = NULL;
F->p_1587 = NULL;
F->p_1587 = (*(P897)rt_nil_check(F->d_408)).a;
F->ro_1588 = RT_R_EUNDEF;
{ R925 *cell1589 = rt_alloc(sizeof(R925));
(*cell1589).d = NULL;
(*cell1589).next = NULL;
F->cr_1583 = cell1589;
}
(*(P924)rt_nil_check(F->cr_1583)).d = F->d_408;
(*(P924)rt_nil_check(F->cr_1583)).next = g_caps_952;
g_caps_952 = F->cr_1583;
f_open_scope_169();
(*(P924)rt_nil_check(F->cr_1583)).depth = rt_r_ichk(g_depth_936);
if (((*(P897)rt_nil_check(F->d_408)).b != NULL)) {
f_capsule_params_407(F->d_408, F->args_410, rt_r_ichk((*(P897)rt_nil_check(F->owner_411)).line));
}
{ R915 *cell1590 = rt_alloc(sizeof(R915));
(*cell1590).imps = NULL;
(*cell1590).next = NULL;
F->ctx_1584 = cell1590;
}
(*(P914)rt_nil_check(F->ctx_1584)).depth = rt_r_ichk(g_depth_936);
(*(P914)rt_nil_check(F->ctx_1584)).imps = (*(P897)rt_nil_check(F->d_408)).d;
(*(P914)rt_nil_check(F->ctx_1584)).all_imp = (rt_r_ichk((*(P897)rt_nil_check(F->d_408)).flag) >= ((rt_int)2LL));
(*(P914)rt_nil_check(F->ctx_1584)).next = g_fctx_951;
g_fctx_951 = F->ctx_1584;
F->saved_gotos_1585 = g_gotos_971;
g_gotos_971 = NULL;
f_declare_labels_494((*(P897)rt_nil_check(F->d_408)).c);
f_declare_body_393((*(P897)rt_nil_check(F->d_408)).c);
f_capsule_body_501((*(P897)rt_nil_check(F->d_408)).c);
{
F->w_1591 = NULL;
{ R927 *cell1592 = rt_alloc(sizeof(R927));
(*cell1592).d = NULL;
(*cell1592).w = NULL;
(*cell1592).next = NULL;
F->w_1591 = cell1592;
}
(*(P926)rt_nil_check(F->w_1591)).d = F->owner_411;
(*(P926)rt_nil_check(F->w_1591)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_488((*(P897)rt_nil_check(F->d_408)).c); b_; }));
(*(P926)rt_nil_check(F->w_1591)).next = g_cap_waits_953;
g_cap_waits_953 = F->w_1591;
}
g_fctx_951 = (*(P914)rt_nil_check(g_fctx_951)).next;
F->m_1586 = g_scope_stack_937;
while (((F->m_1586 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).depth) == rt_r_ichk(g_depth_936)))) {
if (((((rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).kind) == (((rt_int)5LL))) && ((*(P907)rt_nil_check(F->m_1586)).t == NULL)) && ((*(P907)rt_nil_check(F->m_1586)).decl != NULL)) && (rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->m_1586)).decl)).kind) == (((rt_int)43LL))))) {
(*(P907)rt_nil_check(F->m_1586)).t = f_new_type_307(F->m_1586, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->d_408)).line)), &(*(P907)rt_nil_check(F->m_1586)).c);
} else if ((((rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).kind) == (((rt_int)6LL)))) && ((*(P907)rt_nil_check(F->m_1586)).t == NULL))) {
(*(P907)rt_nil_check(F->m_1586)).t = f_resolve_subtype_257((*(P907)rt_nil_check(F->m_1586)).st, &(*(P907)rt_nil_check(F->m_1586)).c);
} else if (((rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(F->m_1586)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_427((*(P907)rt_nil_check(F->m_1586)).t);
}
F->m_1586 = (*(P907)rt_nil_check(F->m_1586)).stack;
}
F->m_1586 = g_scope_stack_937;
while (((F->m_1586 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->m_1586)).depth) == rt_r_ichk(g_depth_936)))) {
if (f_exported_399(F->d_408, &(((P890)rt_nil_check((*(P907)rt_nil_check(F->m_1586)).name))->all), &F->ro_1588)) {
F->z_1593 = NULL;
F->z_1593 = f_copy_sym_401(F->m_1586);
if (rt_r_echk(F->ro_1588)) {
(*(P907)rt_nil_check(F->z_1593)).ro_flag = 1;
}
(*(P907)rt_nil_check(F->z_1593)).mnext = (*(P907)rt_nil_check(F->y_409)).members;
(*(P907)rt_nil_check(F->y_409)).members = F->z_1593;
}
F->m_1586 = (*(P907)rt_nil_check(F->m_1586)).stack;
}
while ((F->p_1587 != NULL)) {
if ((((!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1587)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1587)).name))->all), rt_str("=", 1)))) && ((f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1587)).name))->all)) == NULL) || ((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1587)).name))->all)))).depth != rt_r_ichk(g_depth_936))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_408)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1587)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_408)).name))->all)); b_; }));
}
F->p_1587 = (*(P897)rt_nil_check(F->p_1587)).next;
}
f_close_scope_170();
g_caps_952 = (*(P924)rt_nil_check(g_caps_952)).next;
g_gotos_971 = F->saved_gotos_1585;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_415(P897 d_413, rstr *op_414) {
  struct f_exports_op_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_413 = d_413;
F->op_414 = op_414;
F->p_1594 = NULL;
if ((F->d_413 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1594 = (*(P897)rt_nil_check(F->d_413)).a;
while ((F->p_1594 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1594)).name))->all), (*F->op_414))) {
F->result_ = 1;
goto ret_;
}
F->p_1594 = (*(P897)rt_nil_check(F->p_1594)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P890 f_renamed_418(P897 d_416, P907 z_417) {
  struct f_renamed_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_416 = d_416;
F->z_417 = z_417;
F->r_1595 = NULL;
F->r_1595 = (*(P897)rt_nil_check(F->d_416)).c;
while ((F->r_1595 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->r_1595)).name))->all), (((P890)rt_nil_check((*(P907)rt_nil_check(F->z_417)).name))->all))) {
F->result_ = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->r_1595)).a)).name;
goto ret_;
}
F->r_1595 = (*(P897)rt_nil_check(F->r_1595)).next;
}
F->result_ = (*(P907)rt_nil_check(F->z_417)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_pick_capsule_420(P897 d_419) {
  struct f_pick_capsule_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_419 = d_419;
F->y_1596 = NULL;
F->y_1596 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_419)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1597 = NULL;
F->fit_1598 = NULL;
F->n_1599 = RT_R_IUNDEF;
F->n_1599 = ((rt_int)0LL);
while ((F->y_1596 != NULL)) {
if ((rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1596)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_419)).name))->all)) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1596)).kind) == (((rt_int)8LL))))) {
F->n_1599 = rt_add(rt_r_ichk(F->n_1599), ((rt_int)1LL));
if ((F->first_1597 == NULL)) {
F->first_1597 = F->y_1596;
}
if (((F->fit_1598 == NULL) && f_fits_816(F->y_1596, (*(P897)rt_nil_check(F->d_419)).b))) {
F->fit_1598 = F->y_1596;
}
}
F->y_1596 = (*(P907)rt_nil_check(F->y_1596)).chain;
}
if ((rt_r_ichk(F->n_1599) > ((rt_int)1LL))) {
if ((F->fit_1598 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_419)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_419)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1598;
goto ret_;
}
if ((F->first_1597 == NULL)) {
F->result_ = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_419)).name))->all));
goto ret_;
}
F->result_ = F->first_1597;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_capsule_instance_423(P907 g_421, P897 d_422) {
  struct f_capsule_instance_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_421 = g_421;
F->d_422 = d_422;
F->gd_1600 = NULL;
F->gd_1600 = (*(P907)rt_nil_check(F->g_421)).decl;
F->pat_1601 = NULL;
F->pat_1601 = (*(P897)rt_nil_check(F->gd_1600)).b;
F->binds_1602 = NULL;
F->binds_1602 = f_need_binds_627(F->gd_1600, f_tt_binds_606(F->gd_1600, (*(P897)rt_nil_check(F->pat_1601)).e, (*(P897)rt_nil_check(F->d_422)).e, rt_r_ichk((*(P897)rt_nil_check(F->d_422)).line)), rt_r_ichk((*(P897)rt_nil_check(F->d_422)).line));
F->inst_1603 = NULL;
F->inst_1603 = (*(P907)rt_nil_check(F->g_421)).insts;
F->saved_env_1604 = NULL;
F->saved_env_1604 = g_genv_934;
F->saved_gdepth_1605 = RT_R_IUNDEF;
F->saved_gdepth_1605 = rt_r_ichk(g_gdepth_966);
if (((rt_r_ichk((*(P897)rt_nil_check(F->d_422)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P897)rt_nil_check(F->d_422)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1603 != NULL)) {
if (f_same_binds_598((*(P907)rt_nil_check(F->inst_1603)).tbinds, F->binds_1602)) {
F->result_ = F->inst_1603;
goto ret_;
}
F->inst_1603 = (*(P907)rt_nil_check(F->inst_1603)).insts;
}
}
F->inst_1603 = f_new_sym_173((((rt_int)8LL)), (*(P897)rt_nil_check(F->pat_1601)).name);
(*(P907)rt_nil_check(F->inst_1603)).decl = F->pat_1601;
(*(P907)rt_nil_check(F->inst_1603)).tbinds = F->binds_1602;
f_open_scope_169();
{
F->b_1606 = NULL;
F->b_1606 = F->binds_1602;
while ((F->b_1606 != NULL)) {
f_define_160(F->b_1606, rt_r_ichk((*(P897)rt_nil_check(F->d_422)).line));
F->b_1606 = (*(P907)rt_nil_check(F->b_1606)).mnext;
}
}
g_genv_934 = (*(P907)rt_nil_check(F->g_421)).env;
g_gdepth_966 = rt_r_ichk(g_depth_936);
f_elaborate_capsule_412(F->pat_1601, F->inst_1603, (*(P897)rt_nil_check(F->d_422)).b, F->d_422);
g_genv_934 = F->saved_env_1604;
g_gdepth_966 = rt_r_ichk(F->saved_gdepth_1605);
f_close_scope_170();
if (((rt_r_ichk((*(P897)rt_nil_check(F->d_422)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P897)rt_nil_check(F->d_422)).flag) != ((rt_int)3LL)))) {
(*(P907)rt_nil_check(F->inst_1603)).insts = (*(P907)rt_nil_check(F->g_421)).insts;
(*(P907)rt_nil_check(F->g_421)).insts = F->inst_1603;
}
F->result_ = F->inst_1603;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_425(P897 d_424) {
  struct f_gen_expose_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_424 = d_424;
F->y_1607 = NULL;
F->y_1607 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all));
F->m_1608 = NULL;
F->p_1609 = NULL;
F->p_1609 = (*(P897)rt_nil_check(F->d_424)).a;
F->r_1610 = NULL;
F->r_1610 = (*(P897)rt_nil_check(F->d_424)).c;
if ((((F->y_1607 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1607)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1607)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1607 = f_capsule_instance_423(F->y_1607, F->d_424);
} else {
F->y_1607 = f_pick_capsule_420(F->d_424);
if (((F->y_1607 == NULL) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1607)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P897)rt_nil_check(F->d_424)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P907)rt_nil_check(F->y_1607)).tbinds != NULL) || (((*(P907)rt_nil_check(F->y_1607)).decl != NULL) && ((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1607)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->d_424)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P897)rt_nil_check(F->d_424)).flag) == ((rt_int)3LL)))) {
F->inst_1611 = NULL;
F->inst_1611 = f_new_sym_173((((rt_int)8LL)), (*(P907)rt_nil_check(F->y_1607)).name);
(*(P907)rt_nil_check(F->inst_1611)).decl = (*(P907)rt_nil_check(F->y_1607)).decl;
f_elaborate_capsule_412((*(P907)rt_nil_check(F->y_1607)).decl, F->inst_1611, (*(P897)rt_nil_check(F->d_424)).b, F->d_424);
F->y_1607 = F->inst_1611;
} else if ((((*(P907)rt_nil_check(F->y_1607)).decl != NULL) && ((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_1607)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P897)rt_nil_check(F->d_424)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1610 != NULL)) {
F->found_1612 = RT_R_EUNDEF;
F->found_1612 = 0;
F->m_1608 = (*(P907)rt_nil_check(F->y_1607)).members;
while ((F->m_1608 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->m_1608)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->r_1610)).name))->all))) {
F->found_1612 = 1;
}
F->m_1608 = (*(P907)rt_nil_check(F->m_1608)).mnext;
}
if ((!rt_r_echk(F->found_1612))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->r_1610)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all)); b_; }));
}
F->r_1610 = (*(P897)rt_nil_check(F->r_1610)).next;
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->d_424)).ival) == ((rt_int)1LL))) {
F->m_1608 = (*(P907)rt_nil_check(F->y_1607)).members;
while ((F->m_1608 != NULL)) {
F->z_1613 = NULL;
F->z_1613 = f_copy_sym_401(F->m_1608);
(*(P907)rt_nil_check(F->z_1613)).name = f_renamed_418(F->d_424, F->m_1608);
f_define_160(F->z_1613, rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line));
F->m_1608 = (*(P907)rt_nil_check(F->m_1608)).mnext;
}
goto ret_;
}
while ((F->p_1609 != NULL)) {
F->found_1614 = RT_R_EUNDEF;
F->found_1614 = 0;
F->m_1608 = (*(P907)rt_nil_check(F->y_1607)).members;
while ((F->m_1608 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->m_1608)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1609)).name))->all))) {
F->z_1615 = NULL;
F->z_1615 = f_copy_sym_401(F->m_1608);
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_1609)).ival) == ((rt_int)1LL))) {
(*(P907)rt_nil_check(F->z_1615)).ro_flag = 1;
}
(*(P907)rt_nil_check(F->z_1615)).name = f_renamed_418(F->d_424, F->m_1608);
f_define_160(F->z_1615, rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line));
F->found_1614 = 1;
}
F->m_1608 = (*(P907)rt_nil_check(F->m_1608)).mnext;
}
if ((!rt_r_echk(F->found_1614))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1609)).name))->all), rt_str(" is not exported by ", 20)), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_424)).name))->all)); b_; }));
}
F->p_1609 = (*(P897)rt_nil_check(F->p_1609)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_427(P903 t_426) {
  struct f_finish_ptr_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_426 = t_426;
F->d_1616 = NULL;
F->d_1616 = (*(P903)rt_nil_check(F->t_426)).decl;
F->p_1617 = NULL;
F->c_1618 = NULL;
F->dummy_1619 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1619, rt_str(" ", 1));
if (((*(P903)rt_nil_check(F->t_426)).target != NULL)) {
goto ret_;
}
f_open_scope_169();
{ rt_int lo1621 = ((rt_int)1LL), hi1622 = ((rt_int)2LL);
for (rt_int it1623 = lo1621; it1623 <= hi1622; it1623++) {
F->pass_1620 = it1623;
if ((F->pass_1620 == ((rt_int)1LL))) {
F->p_1617 = (*(P897)rt_nil_check(F->d_1616)).d;
} else {
F->p_1617 = (*(P897)rt_nil_check(F->d_1616)).b;
}
while ((F->p_1617 != NULL)) {
F->y_1624 = NULL;
F->y_1624 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_1617)).name);
F->pc_1625 = NULL;
(*(P907)rt_nil_check(F->y_1624)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1617)).a, &F->pc_1625);
(*(P907)rt_nil_check(F->y_1624)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->y_1624, rt_r_ichk((*(P897)rt_nil_check(F->d_1616)).line));
F->p_1617 = (*(P897)rt_nil_check(F->p_1617)).next;
}
}
}
(*(P903)rt_nil_check(F->t_426)).target = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_1616)).a, &F->c_1618);
f_close_scope_170();
(*rt_str_at(&F->dummy_1619, ((rt_int)1LL))) = rt_str_get(f_ctype_226(F->t_426), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1619, ((rt_int)1LL))) = rt_str_get(f_ctype_226((*(P903)rt_nil_check(F->t_426)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P897 f_ptr_args_429(P899 c_428) {
  struct f_ptr_args_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_428 = c_428;
if ((F->c_428 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P899)rt_nil_check(F->c_428)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_434(P897 formals_430, P897 actuals_431, rstr *cell_432, rt_int line_433) {
  struct f_bind_ptr_params_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_430 = formals_430;
F->actuals_431 = actuals_431;
F->cell_432 = cell_432;
F->line_433 = line_433;
F->p_1626 = NULL;
F->p_1626 = F->formals_430;
F->a_1627 = NULL;
F->a_1627 = F->actuals_431;
F->vt_1628 = NULL;
if ((f_list_len_67(F->formals_430) != f_list_len_67(F->actuals_431))) {
f_fail_23(F->line_433, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_430))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1626 != NULL)) {
F->pc_1629 = NULL;
F->y_1630 = NULL;
F->y_1630 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_1626)).name);
(*(P907)rt_nil_check(F->y_1630)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1626)).a, &F->pc_1629);
{
F->v_1631 = rt_str_copy(f_gexpr_700(F->a_1627, (*(P907)rt_nil_check(F->y_1630)).t, &F->vt_1628));
F->pv_1632 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_224(F->vt_1628, (*(P907)rt_nil_check(F->y_1630)).t, F->line_433);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P907)rt_nil_check(F->y_1630)).t), rt_str(" ", 1)), F->pv_1632), rt_str(" = ", 3)), f_checked_205((*(P907)rt_nil_check(F->y_1630)).t, F->pc_1629, &F->v_1631)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_432), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_432), rt_str("->p_", 4)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1626)).name))->all))), rt_str(" = ", 3)), F->pv_1632), rt_str(";", 1)); b_; }));
}
(*(P907)rt_nil_check(F->y_1630)).access = f_mk_3(&F->pv_1632);
}
f_define_160(F->y_1630, F->line_433);
F->p_1626 = (*(P897)rt_nil_check(F->p_1626)).next;
F->a_1627 = (*(P897)rt_nil_check(F->a_1627)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_439(P897 s_435, rstr *lv_436, P903 t_437, P899 c_438) {
  struct f_alloc_cell_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_435 = s_435;
F->lv_436 = lv_436;
F->t_437 = t_437;
F->c_438 = c_438;
F->d_1633 = NULL;
F->d_1633 = (*(P903)rt_nil_check(F->t_437)).decl;
F->tc_1634 = NULL;
F->vt_1635 = NULL;
F->pt_1636 = rt_str_copy(f_ctype_226(F->t_437));
F->cell_1637 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316((*(P903)rt_nil_check(F->t_437)).target)) {
F->fn_1638 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_958 = 1;
g_uses_findyn_960 = 1;
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1638), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1638), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P890)rt_nil_check((*(P907)rt_nil_check(g_func_sym_961)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1636), rt_str(")cell_)->all)", 13)); b_; }), (*(P903)rt_nil_check(F->t_437)).target)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1636), rt_str(" ", 1)), F->cell_1637), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1637), rt_str(", ", 2)), F->fn_1638), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1636), rt_str(" ", 1)), F->cell_1637), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1637), rt_str(", ", 2)), F->fn_1638), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1636), rt_str(" ", 1)), F->cell_1637), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1637), rt_str(");", 2)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_434((*(P897)rt_nil_check(F->d_1633)).d, f_ptr_args_429(F->c_438), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P897)rt_nil_check(F->s_435)).line));
f_bind_ptr_params_434((*(P897)rt_nil_check(F->d_1633)).b, (*(P897)rt_nil_check(F->s_435)).b, &F->cell_1637, rt_r_ichk((*(P897)rt_nil_check(F->s_435)).line));
F->vt_1635 = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_1633)).a, &F->tc_1634);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1637, rt_str("->all", 5)); b_; }), (*(P903)rt_nil_check(F->t_437)).target, F->tc_1634);
f_close_scope_170();
if (((*(P897)rt_nil_check(F->s_435)).c != NULL)) {
F->v_1639 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->s_435)).c, (*(P903)rt_nil_check(F->t_437)).target, F->tc_1634, &F->vt_1635));
f_check_type_224(F->vt_1635, (*(P903)rt_nil_check(F->t_437)).target, rt_r_ichk((*(P897)rt_nil_check(F->s_435)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1637, rt_str("->all", 5)); b_; }), (*(P903)rt_nil_check(F->t_437)).target, &F->v_1639, F->tc_1634); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_436), rt_str(" = ", 3)), F->cell_1637), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P899 f_freeze_args_443(P899 c_440, P903 t_441, rt_int line_442) {
  struct f_freeze_args_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_440 = c_440;
F->t_441 = t_441;
F->line_442 = line_442;
F->r_1640 = NULL;
F->r_1640 = f_copy_cons_198(F->c_440);
F->p_1641 = NULL;
F->p_1641 = (*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_441)).decl)).d;
F->a_1642 = NULL;
F->a_1642 = (*(P899)rt_nil_check(F->c_440)).args;
F->head_1643 = NULL;
F->tail_1644 = NULL;
F->saved_1645 = NULL;
F->saved_1645 = g_st_field_955;
if ((f_list_len_67(F->p_1641) != f_list_len_67(F->a_1642))) {
f_fail_23(F->line_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P903)rt_nil_check(F->t_441)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1641))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1642 != NULL)) {
F->pc_1646 = NULL;
F->vt_1647 = NULL;
F->pt_1648 = NULL;
F->pt_1648 = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1641)).a, &F->pc_1646);
F->nm_1649 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1650 = NULL;
F->y_1650 = f_new_sym_173((((rt_int)2LL)), f_mk_3(&F->nm_1649));
F->n_1651 = NULL;
F->n_1651 = f_nn_61((((rt_int)7LL)), F->line_442);
F->v_1652 = rt_str_copy(f_gexpr_700(F->a_1642, F->pt_1648, &F->vt_1647));
F->access_1653 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226(F->pt_1648); b_; })));
f_check_type_224(F->vt_1647, F->pt_1648, F->line_442);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1653, rt_str(" = ", 3)), f_checked_205(F->pt_1648, F->pc_1646, &F->v_1652)), rt_str(";", 1)); b_; }));
(*(P907)rt_nil_check(F->y_1650)).t = F->pt_1648;
(*(P907)rt_nil_check(F->y_1650)).ro_flag = 1;
f_bind_471(F->y_1650, &F->access_1653);
f_define_160(F->y_1650, F->line_442);
(*(P897)rt_nil_check(F->n_1651)).name = f_mk_3(&F->nm_1649);
f_append_65(&F->head_1643, &F->tail_1644, F->n_1651);
F->a_1642 = (*(P897)rt_nil_check(F->a_1642)).next;
F->p_1641 = (*(P897)rt_nil_check(F->p_1641)).next;
}
(*(P899)rt_nil_check(F->r_1640)).args = F->head_1643;
g_st_field_955 = F->saved_1645;
F->result_ = F->r_1640;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_447(P903 t_444, P899 c_445, P897 src_446) {
  struct f_ptr_subtype_check_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_444 = t_444;
F->c_445 = c_445;
F->src_446 = src_446;
F->lv_1654 = NULL;
F->st_1655 = NULL;
F->sc_1656 = NULL;
F->ro_1657 = RT_R_EUNDEF;
F->cond_1658 = NULL;
F->cond_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1659 = NULL;
F->b_1660 = NULL;
F->at_1661 = NULL;
F->bt_1662 = NULL;
if ((((((rt_r_ichk((*(P903)rt_nil_check(F->t_444)).kind) != (((rt_int)8LL))) || (F->c_445 == NULL)) || ((*(P899)rt_nil_check(F->c_445)).args == NULL)) || (F->src_446 == NULL)) || (!f_is_lvalue_663(F->src_446)))) {
goto ret_;
}
f_lvalue_669(F->src_446, &F->lv_1654, &F->st_1655, &F->sc_1656, &F->ro_1657);
if (((F->sc_1656 == NULL) || ((*(P899)rt_nil_check(F->sc_1656)).args == NULL))) {
goto ret_;
}
F->a_1659 = (*(P899)rt_nil_check(F->c_445)).args;
F->b_1660 = (*(P899)rt_nil_check(F->sc_1656)).args;
while (((F->a_1659 != NULL) && (F->b_1660 != NULL))) {
F->x_1663 = rt_str_copy(f_gexpr_700(F->a_1659, NULL, &F->at_1661));
F->y_1664 = rt_str_copy(f_gexpr_700(F->b_1660, F->at_1661, &F->bt_1662));
F->cond_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->cond_1658))->all), rt_str(" || !", 5)), f_eq_code_381(F->at_1661, &F->x_1663, &F->y_1664)); b_; }));
F->a_1659 = (*(P897)rt_nil_check(F->a_1659)).next;
F->b_1660 = (*(P897)rt_nil_check(F->b_1660)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->cond_1658))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_450(P897 d_448, P907 y_449) {
  struct f_normal_function_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_448 = d_448;
F->y_449 = y_449;
F->p_1665 = NULL;
F->p_1665 = (*(P907)rt_nil_check(F->y_449)).params;
F->imp_1666 = NULL;
F->imp_1666 = (*(P897)rt_nil_check(F->d_448)).d;
if (((rt_r_ichk((*(P897)rt_nil_check(F->d_448)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P897)rt_nil_check(F->d_448)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1665 != NULL)) {
if (((rt_r_ichk((*(P909)rt_nil_check(F->p_1665)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P909)rt_nil_check(F->p_1665)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_448)).name))->all)); b_; }));
}
F->p_1665 = (*(P909)rt_nil_check(F->p_1665)).next;
}
if ((((*(P897)rt_nil_check(F->d_448)).d == NULL) && (rt_r_ichk((*(P897)rt_nil_check(F->d_448)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_952 == NULL) || (rt_r_ichk(g_depth_936) != rt_r_ichk((*(P924)rt_nil_check(g_caps_952)).depth)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_448)).name))->all)); b_; }));
}
while ((F->imp_1666 != NULL)) {
F->ro_1667 = RT_R_EUNDEF;
F->z_1668 = NULL;
F->z_1668 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->imp_1666)).name))->all));
if ((((F->z_1668 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->z_1668)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P907)rt_nil_check(F->z_1668)).depth) != rt_r_ichk((*(P924)rt_nil_check(g_caps_952)).depth)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P890)rt_nil_check((*(P897)rt_nil_check(F->imp_1666)).name))->all)); b_; }));
}
if ((f_exported_399((*(P924)rt_nil_check(g_caps_952)).d, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->imp_1666)).name))->all), &F->ro_1667) && (rt_r_ichk((*(P897)rt_nil_check((*(P924)rt_nil_check(g_caps_952)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P890)rt_nil_check((*(P897)rt_nil_check(F->imp_1666)).name))->all)); b_; }));
}
F->imp_1666 = (*(P897)rt_nil_check(F->imp_1666)).next;
}
(*(P907)rt_nil_check(F->y_449)).capn = (*(P924)rt_nil_check(g_caps_952)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_452(P897 d_451) {
  struct f_declare_subprogram_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_451 = d_451;
f_define_160(f_build_subprogram_454(F->d_451), rt_r_ichk((*(P897)rt_nil_check(F->d_451)).line));
ret_:
  RT_FPOP();
  return;
}

static P907 f_build_subprogram_454(P897 d_453) {
  struct f_build_subprogram_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_453 = d_453;
F->y_1669 = NULL;
F->p_1670 = NULL;
F->p_1670 = (*(P897)rt_nil_check(F->d_453)).a;
F->tail_1671 = NULL;
if ((rt_r_ichk((*(P897)rt_nil_check(F->d_453)).kind) == (((rt_int)46LL)))) {
F->y_1669 = f_new_sym_173((((rt_int)3LL)), (*(P897)rt_nil_check(F->d_453)).name);
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL)))) {
F->y_1669 = f_new_sym_173((((rt_int)9LL)), (*(P897)rt_nil_check(F->d_453)).name);
} else {
F->y_1669 = f_new_sym_173((((rt_int)4LL)), (*(P897)rt_nil_check(F->d_453)).name);
}
while ((F->p_1670 != NULL)) {
F->pm_1672 = NULL;
if (((rt_r_ichk((*(P897)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->p_1670)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R910 *cell1673 = rt_alloc(sizeof(R910));
(*cell1673).name = NULL;
(*cell1673).t = NULL;
(*cell1673).c = NULL;
(*cell1673).cfield = NULL;
(*cell1673).next = NULL;
F->pm_1672 = cell1673;
}
(*(P909)rt_nil_check(F->pm_1672)).name = (*(P897)rt_nil_check(F->p_1670)).name;
(*(P909)rt_nil_check(F->pm_1672)).mode = rt_r_ichk((*(P897)rt_nil_check(F->p_1670)).ival);
(*(P909)rt_nil_check(F->pm_1672)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1670)).a, &(*(P909)rt_nil_check(F->pm_1672)).c);
(*(P909)rt_nil_check(F->pm_1672)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1670)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1671 == NULL)) {
(*(P907)rt_nil_check(F->y_1669)).params = F->pm_1672;
} else {
(*(P909)rt_nil_check(F->tail_1671)).next = F->pm_1672;
}
F->tail_1671 = F->pm_1672;
F->p_1670 = (*(P897)rt_nil_check(F->p_1670)).next;
}
(*(P907)rt_nil_check(F->y_1669)).result = g_ty_void_982;
if (((*(P897)rt_nil_check(F->d_453)).b != NULL)) {
F->rc_1674 = NULL;
F->pm_1675 = NULL;
F->pm_1675 = (*(P907)rt_nil_check(F->y_1669)).params;
F->saved_1676 = NULL;
F->saved_1676 = g_code_947;
g_code_947 = f_new_buffer_24();
f_open_scope_169();
while ((F->pm_1675 != NULL)) {
F->z_1677 = NULL;
F->z_1677 = f_new_sym_173((((rt_int)2LL)), (*(P909)rt_nil_check(F->pm_1675)).name);
(*(P907)rt_nil_check(F->z_1677)).t = (*(P909)rt_nil_check(F->pm_1675)).t;
(*(P907)rt_nil_check(F->z_1677)).c = (*(P909)rt_nil_check(F->pm_1675)).c;
(*(P907)rt_nil_check(F->z_1677)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->z_1677, rt_r_ichk((*(P897)rt_nil_check(F->d_453)).line));
F->pm_1675 = (*(P909)rt_nil_check(F->pm_1675)).next;
}
(*(P907)rt_nil_check(F->y_1669)).result = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_453)).b, &F->rc_1674);
f_close_scope_170();
g_code_947 = F->saved_1676;
}
(*(P907)rt_nil_check(F->y_1669)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_655(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_453)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P907)rt_nil_check(F->y_1669)).decl = F->d_453;
(*(P907)rt_nil_check(F->y_1669)).level = rt_r_ichk(g_cur_level_950);
if ((rt_r_ichk((*(P897)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1669)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1669;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_457(P890 pr_455, rstr *p_456) {
  struct f_has_pragmat_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_455 = pr_455;
F->p_456 = p_456;
if ((F->pr_455 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1679 = ((rt_int)1LL), hi1680 = rt_sub(((rt_int)(((((P890)rt_nil_check(F->pr_455))->all)).len)), ((rt_int)(((*F->p_456)).len)));
for (rt_int it1681 = lo1679; it1681 <= hi1680; it1681++) {
F->i_1678 = it1681;
if (((rt_str_eq(rt_str_slice((((P890)rt_nil_check(F->pr_455))->all), F->i_1678, rt_sub(rt_add(F->i_1678, ((rt_int)(((*F->p_456)).len))), ((rt_int)1LL))), (*F->p_456)) && (rt_r_echk(rt_str_get((((P890)rt_nil_check(F->pr_455))->all), rt_add(F->i_1678, ((rt_int)(((*F->p_456)).len))))) == 59)) && ((F->i_1678 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P890)rt_nil_check(F->pr_455))->all), rt_sub(F->i_1678, ((rt_int)1LL)))) == 59)))) {
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

static P890 f_suppressing_459(P890 pr_458) {
  struct f_suppressing_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_458 = pr_458;
F->r_1682 = NULL;
F->r_1682 = g_suppress_967;
F->i_1683 = RT_R_IUNDEF;
F->i_1683 = ((rt_int)1LL);
if ((F->pr_458 == NULL)) {
F->result_ = F->r_1682;
goto ret_;
}
if ((F->r_1682 == NULL)) {
F->r_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1683), ((rt_int)9LL)) <= ((rt_int)(((((P890)rt_nil_check(F->pr_458))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P890)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->i_1683), rt_add(rt_r_ichk(F->i_1683), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1684 = RT_R_IUNDEF;
F->j_1684 = rt_add(rt_r_ichk(F->i_1683), ((rt_int)9LL));
F->k_1685 = RT_R_IUNDEF;
F->k_1685 = rt_r_ichk(F->j_1684);
while ((rt_r_echk(rt_str_get((((P890)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->k_1685))) != 41)) {
if ((rt_r_echk(rt_str_get((((P890)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->k_1685))) == 44)) {
F->r_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1682))->all), rt_str_slice((((P890)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->j_1684), rt_sub(rt_r_ichk(F->k_1685), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1684 = rt_add(rt_r_ichk(F->k_1685), ((rt_int)1LL));
}
F->k_1685 = rt_add(rt_r_ichk(F->k_1685), ((rt_int)1LL));
}
F->r_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1682))->all), rt_str_slice((((P890)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->j_1684), rt_sub(rt_r_ichk(F->k_1685), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1683 = rt_r_ichk(F->k_1685);
}
F->i_1683 = rt_add(rt_r_ichk(F->i_1683), ((rt_int)1LL));
}
F->result_ = F->r_1682;
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
F->w_1686 = rt_str_new(rt_add(((rt_int)(((*F->x_460)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1686, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_460)), rt_str(" ", 1)));
if ((g_suppress_967 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1688 = ((rt_int)1LL), hi1689 = rt_add(rt_sub(((rt_int)(((((P890)rt_nil_check(g_suppress_967))->all)).len)), ((rt_int)((F->w_1686).len))), ((rt_int)1LL));
for (rt_int it1690 = lo1688; it1690 <= hi1689; it1690++) {
F->i_1687 = it1690;
if (rt_str_eq(rt_str_slice((((P890)rt_nil_check(g_suppress_967))->all), F->i_1687, rt_sub(rt_add(F->i_1687, ((rt_int)((F->w_1686).len))), ((rt_int)1LL))), F->w_1686)) {
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

static void f_element_463(P897 e_462) {
  struct f_element_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_462 = e_462;
F->saved_1691 = NULL;
F->saved_1691 = g_suppress_967;
g_suppress_967 = f_suppressing_459((*(P897)rt_nil_check(F->e_462)).prags);
f_element1_465(F->e_462);
g_suppress_967 = F->saved_1691;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_465(P897 e_464) {
  struct f_element1_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_464 = e_464;
F->k_1692 = RT_R_IUNDEF;
F->k_1692 = rt_r_ichk((*(P897)rt_nil_check(F->e_464)).kind);
if (((rt_r_ichk(F->k_1692) == (((rt_int)48LL))) && ((rt_r_ichk((*(P897)rt_nil_check(F->e_464)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P897)rt_nil_check(F->e_464)).flag) == ((rt_int)3LL))))) {
f_gen_expose_425(F->e_464);
} else if ((((rt_r_ichk(F->k_1692) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1692) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1692) == (((rt_int)50LL))))) {
f_subprogram_481(F->e_464);
} else if ((rt_r_ichk(F->k_1692) == (((rt_int)51LL)))) {
F->g_1693 = NULL;
F->g_1693 = f_lookup_decl_157(F->e_464);
if ((F->g_1693 != NULL)) {
{ P911 cell1694 = rt_alloc(sizeof *cell1694);
rt_int pv1695 = (((rt_int)4093LL));
cell1694->p_n = pv1695;
cell1694->all.lo = ((rt_int)0LL); cell1694->all.hi = pv1695;
cell1694->all.lo2 = cell1694->all.hi2 = 1;
cell1694->all.p = rt_alloc(sizeof(P907) * (size_t)(RT_CNT(cell1694->all)) + 1);
for (rt_int i1696 = 0; i1696 < (RT_CNT(cell1694->all)); i1696++) {
cell1694->all.p[i1696] = NULL;
}
(*(P907)rt_nil_check(F->g_1693)).env = cell1694;
}
{ rt_int lo1698 = ((rt_int)0LL), hi1699 = (((rt_int)4093LL));
for (rt_int it1700 = lo1698; it1700 <= hi1699; it1700++) {
F->i_1697 = it1700;
(((P911)rt_nil_check((*(P907)rt_nil_check(F->g_1693)).env))->all).p[(rt_index(F->i_1697, (((P911)rt_nil_check((*(P907)rt_nil_check(F->g_1693)).env))->all).lo, (((P911)rt_nil_check((*(P907)rt_nil_check(F->g_1693)).env))->all).hi) - (((P911)rt_nil_check((*(P907)rt_nil_check(F->g_1693)).env))->all).lo)] = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(F->i_1697, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1692) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1692) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1692) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1692) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1692) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1692) == (((rt_int)44LL)))) {
f_finish_ptr_427((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_464)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1692) == (((rt_int)40LL)))) {
f_var_decl_473(F->e_464);
} else if (((rt_r_ichk(F->k_1692) == (((rt_int)41LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_464)).flag) == ((rt_int)0LL)))) {
f_const_decl_479(F->e_464);
} else if ((rt_r_ichk(F->k_1692) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1692) == (((rt_int)33LL)))) {
F->t_1701 = NULL;
F->c_1702 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_464)).a, g_ty_bool_978, &F->t_1701));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1702), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_516(F->e_464);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_468(rstr *name_466, P903 t_467) {
  struct f_storage_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_466 = name_466;
F->t_467 = t_467;
if ((!rt_r_echk(g_in_func_949))) {
F->g_1703 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_466))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_467)), rt_str(" ", 1)), F->g_1703), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_957, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1703), rt_str(");", 2)); b_; }));
g_st_field_955 = f_mk_3(&F->g_1703);
F->result_ = F->g_1703;
goto ret_;
}
{
F->f_1704 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_466)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_467)), rt_str(" ", 1)), F->f_1704), rt_str(";", 1)); b_; }));
g_st_field_955 = f_mk_3(&F->f_1704);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1704);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_471(P907 y_469, rstr *access_470) {
  struct f_bind_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_469 = y_469;
F->access_470 = access_470;
if (rt_r_echk(g_in_func_949)) {
(*(P907)rt_nil_check(F->y_469)).level = rt_r_ichk(g_cur_level_950);
(*(P907)rt_nil_check(F->y_469)).access = g_st_field_955;
} else {
(*(P907)rt_nil_check(F->y_469)).level = ((rt_int)0LL);
(*(P907)rt_nil_check(F->y_469)).access = f_mk_3(&(*F->access_470));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_473(P897 d_472) {
  struct f_var_decl_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->c_1705 = NULL;
F->t_1706 = NULL;
F->t_1706 = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_472)).a, &F->c_1705);
F->y_1707 = NULL;
F->y_1707 = f_new_sym_173((((rt_int)1LL)), (*(P897)rt_nil_check(F->d_472)).name);
F->access_1708 = rt_str_copy(f_storage_468(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_472)).name))->all), F->t_1706));
F->c_1705 = f_freeze_201(F->c_1705, F->t_1706);
if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_1706)).kind) == (((rt_int)8LL))) && (F->c_1705 != NULL)) && ((*(P899)rt_nil_check(F->c_1705)).args != NULL))) {
F->c_1705 = f_freeze_args_443(F->c_1705, F->t_1706, rt_r_ichk((*(P897)rt_nil_check(F->d_472)).line));
}
g_mark_uninit_969 = 1;
f_init_storage_311(&F->access_1708, F->t_1706, F->c_1705);
g_mark_uninit_969 = 0;
if ((rt_r_ichk((*(P897)rt_nil_check(F->d_472)).ival) == ((rt_int)1LL))) {
F->it_1709 = NULL;
F->n_1710 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->d_472)).c, g_ty_int_977, &F->it_1709));
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1706)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_213((*(P903)rt_nil_check(F->t_1706)).elem, g_ty_ascii_980)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1708), rt_str(", ", 2)), F->n_1710), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1708), rt_str(", ", 2)), F->n_1710), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->d_472)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P897)rt_nil_check(F->d_472)).b != NULL)) {
F->vt_1711 = NULL;
F->v_1712 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->d_472)).b, F->t_1706, F->c_1705, &F->vt_1711));
f_check_type_224(F->vt_1711, F->t_1706, rt_r_ichk((*(P897)rt_nil_check(F->d_472)).line));
f_ptr_subtype_check_447(F->t_1706, F->c_1705, (*(P897)rt_nil_check(F->d_472)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1708, F->t_1706, &F->v_1712, F->c_1705); b_; }));
}
(*(P907)rt_nil_check(F->y_1707)).t = F->t_1706;
(*(P907)rt_nil_check(F->y_1707)).c = F->c_1705;
f_bind_471(F->y_1707, &F->access_1708);
f_define_160(F->y_1707, rt_r_ichk((*(P897)rt_nil_check(F->d_472)).line));
if (f_needs_fin_316(F->t_1706)) {
f_open_fin_475(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1708, F->t_1706); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_475(rstr *fc_474) {
  struct f_open_fin_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_474 = fc_474;
F->f_1713 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1714 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1713), rt_str("; if (RT_TRY(", 13)), F->f_1713), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1713), rt_str("); ", 3)), (*F->fc_474)); b_; }));
{ R902 *cell1715 = rt_alloc(sizeof(R902));
(*cell1715).s = NULL;
(*cell1715).next = NULL;
F->l_1714 = cell1715;
}
(*(P901)rt_nil_check(F->l_1714)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1713), rt_str("); ", 3)), (*F->fc_474)), rt_str(" } else { RT_POP(", 17)), F->f_1713), rt_str("); ", 3)), (*F->fc_474)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P901)rt_nil_check(F->l_1714)).next = g_fins_959;
g_fins_959 = F->l_1714;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_477(P901 saved_476) {
  struct f_close_fins_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_476 = saved_476;
while (((g_fins_959 != F->saved_476) && (g_fins_959 != NULL))) {
f_emit_29(&(((P890)rt_nil_check((*(P901)rt_nil_check(g_fins_959)).s))->all));
f_pop_cleanup_514();
g_fins_959 = (*(P901)rt_nil_check(g_fins_959)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_479(P897 d_478) {
  struct f_const_decl_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_478 = d_478;
F->c_1716 = NULL;
F->c_1716 = f_new_cons_176();
F->t_1717 = NULL;
F->vt_1718 = NULL;
F->y_1719 = NULL;
F->y_1719 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->d_478)).name);
F->ok_1720 = RT_R_EUNDEF;
if (((*(P897)rt_nil_check(F->d_478)).a != NULL)) {
F->t_1717 = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_478)).a, &F->c_1716);
}
{
F->v_1721 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->d_478)).b, F->t_1717, F->c_1716, &F->vt_1718));
if ((F->t_1717 != NULL)) {
f_check_type_224(F->vt_1718, F->t_1717, rt_r_ichk((*(P897)rt_nil_check(F->d_478)).line));
} else {
F->t_1717 = F->vt_1718;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1717)).kind) == (((rt_int)1LL)))) {
(*(P907)rt_nil_check(F->y_1719)).mvalue = f_manifest_334((*(P897)rt_nil_check(F->d_478)).b, &F->ok_1720);
(*(P907)rt_nil_check(F->y_1719)).hasmv = rt_r_echk(F->ok_1720);
}
{
F->access_1722 = rt_str_copy(f_storage_468(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->d_478)).name))->all), F->t_1717));
if (((*(P903)rt_nil_check(F->t_1717)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P903)rt_nil_check(F->t_1717)).initp, &F->access_1722); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1722, rt_str(" = ", 3)), f_checked_205(F->t_1717, F->c_1716, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377(F->t_1717, &F->v_1721); b_; }))), rt_str(";", 1)); b_; }));
f_bind_471(F->y_1719, &F->access_1722);
if (f_needs_fin_316(F->t_1717)) {
f_open_fin_475(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1722, F->t_1717); b_; }));
}
}
}
(*(P907)rt_nil_check(F->y_1719)).t = F->t_1717;
(*(P907)rt_nil_check(F->y_1719)).c = F->c_1716;
(*(P907)rt_nil_check(F->y_1719)).ro_flag = 1;
f_define_160(F->y_1719, rt_r_ichk((*(P897)rt_nil_check(F->d_478)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_481(P897 d_480) {
  struct f_subprogram_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_480 = d_480;
f_gen_subprogram_484(F->d_480, f_lookup_decl_157(F->d_480));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_484(P897 d_482, P907 y_483) {
  struct f_gen_subprogram_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_482 = d_482;
F->y_483 = y_483;
F->saved_code_1723 = NULL;
F->saved_code_1723 = g_code_947;
F->saved_fields_1724 = NULL;
F->saved_fields_1724 = g_fields_buf_948;
F->saved_in_1725 = RT_R_EUNDEF;
F->saved_in_1725 = rt_r_echk(g_in_func_949);
F->saved_sym_1726 = NULL;
F->saved_sym_1726 = g_func_sym_961;
F->saved_exits_1727 = NULL;
F->saved_exits_1727 = g_exits_970;
F->saved_gotos_1728 = NULL;
F->saved_gotos_1728 = g_gotos_971;
F->saved_frames_1729 = RT_R_IUNDEF;
F->saved_frames_1729 = rt_r_ichk(g_frames_972);
F->args_1730 = NULL;
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1731 = NULL;
F->pm_1731 = (*(P907)rt_nil_check(F->y_483)).params;
F->saved_handlers_1732 = NULL;
F->saved_handlers_1732 = g_handlers_973;
F->saved_cleanups_1733 = NULL;
F->saved_cleanups_1733 = g_cleanups_974;
F->ctx_1734 = NULL;
F->head_1735 = NULL;
F->frame_1736 = NULL;
F->frame_1736 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_483)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1737 = NULL;
F->copy_back_1738 = NULL;
F->copy_back_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1739 = NULL;
F->pfin_1739 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1740 = NULL;
F->saved_fins_1740 = g_fins_959;
F->saved_rc_1741 = NULL;
F->saved_rc_1741 = g_func_rc_962;
F->saved_ret_1742 = NULL;
F->saved_ret_1742 = g_cap_ret_963;
F->saved_rflag_1743 = NULL;
F->saved_rflag_1743 = g_cap_rflag_964;
F->pn_1744 = NULL;
F->pn_1744 = (*(P897)rt_nil_check(F->d_482)).a;
F->nonrec_end_1745 = NULL;
F->has_pfin_1746 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_949)) {
F->parent_1737 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(g_func_sym_961)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_959 = NULL;
g_func_rc_962 = NULL;
g_cap_ret_963 = NULL;
g_cap_rflag_964 = NULL;
g_code_947 = f_new_buffer_24();
g_fields_buf_948 = f_new_buffer_24();
g_in_func_949 = 1;
g_func_sym_961 = F->y_483;
g_exits_970 = NULL;
g_gotos_971 = NULL;
g_frames_972 = ((rt_int)0LL);
g_handlers_973 = NULL;
g_cleanups_974 = NULL;
g_cur_level_950 = rt_add(rt_r_ichk(g_cur_level_950), ((rt_int)1LL));
f_open_scope_169();
{ R915 *cell1747 = rt_alloc(sizeof(R915));
(*cell1747).imps = NULL;
(*cell1747).next = NULL;
F->ctx_1734 = cell1747;
}
(*(P914)rt_nil_check(F->ctx_1734)).depth = rt_r_ichk(g_depth_936);
(*(P914)rt_nil_check(F->ctx_1734)).imps = (*(P897)rt_nil_check(F->d_482)).d;
(*(P914)rt_nil_check(F->ctx_1734)).all_imp = (rt_r_ichk((*(P897)rt_nil_check(F->d_482)).flag) >= ((rt_int)2LL));
(*(P914)rt_nil_check(F->ctx_1734)).next = g_fctx_951;
g_fctx_951 = F->ctx_1734;
if ((F->parent_1737 != NULL)) {
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P890)rt_nil_check(F->parent_1737))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check(F->parent_1737))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1731 != NULL)) {
F->ct_1748 = rt_str_copy(f_ctype_226((*(P909)rt_nil_check(F->pm_1731)).t));
F->f_1749 = rt_str_copy((((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_1731)).cfield))->all));
F->p_1750 = NULL;
F->pc_1751 = NULL;
F->pc_1751 = (*(P909)rt_nil_check(F->pm_1731)).c;
F->ac_1752 = NULL;
if ((((rt_int)(((((P890)rt_nil_check(F->args_1730))->all)).len)) > ((rt_int)0LL))) {
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_1730))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_178((*(P909)rt_nil_check(F->pm_1731)).t)) {
F->fc_1753 = NULL;
F->ft_1754 = NULL;
F->ft_1754 = f_resolve_subtype_257((*(P897)rt_nil_check(F->pn_1744)).a, &F->fc_1753);
F->pc_1751 = f_freeze_201(F->fc_1753, (*(P909)rt_nil_check(F->pm_1731)).t);
}
if ((rt_r_ichk((*(P909)rt_nil_check(F->pm_1731)).mode) == (((rt_int)1LL)))) {
F->p_1750 = f_new_sym_173((((rt_int)2LL)), (*(P909)rt_nil_check(F->pm_1731)).name);
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1748), rt_str(" ", 1)), F->f_1749), rt_str(";", 1)); b_; }));
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_1730))->all), F->ct_1748), rt_str(" ", 1)), F->f_1749); b_; }));
(*(P907)rt_nil_check(F->p_1750)).access = f_mk_3(&F->f_1749);
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
if (((*(P903)rt_nil_check((*(P909)rt_nil_check(F->pm_1731)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P903)rt_nil_check((*(P909)rt_nil_check(F->pm_1731)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1749); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str(" = ", 3)), f_checked_205((*(P909)rt_nil_check(F->pm_1731)).t, F->pc_1751, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377((*(P909)rt_nil_check(F->pm_1731)).t, &F->f_1749); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_316((*(P909)rt_nil_check(F->pm_1731)).t)) {
F->pfin_1739 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->pfin_1739))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1749); b_; }), (*(P909)rt_nil_check(F->pm_1731)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1750 = f_new_sym_173((((rt_int)1LL)), (*(P909)rt_nil_check(F->pm_1731)).name);
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1748), rt_str(" *", 2)), F->f_1749), rt_str(";", 1)); b_; }));
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_1730))->all), F->ct_1748), rt_str(" *", 2)), F->f_1749); b_; }));
(*(P907)rt_nil_check(F->p_1750)).access = f_mk_3(&F->f_1749);
(*(P907)rt_nil_check(F->p_1750)).byref = 1;
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str(" = ", 3)), F->f_1749), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_178((*(P909)rt_nil_check(F->pm_1731)).t)) {
F->bt_1755 = rt_str_copy(f_bound_ctype_180((*(P909)rt_nil_check(F->pm_1731)).t));
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1755), rt_str(" ", 1)), F->f_1749), rt_str("lo, ", 4)), F->f_1749), rt_str("hi;", 3)); b_; }));
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_1730))->all), rt_str(", ", 2)), F->bt_1755), rt_str(" ", 1)), F->f_1749), rt_str("lo, ", 4)), F->bt_1755), rt_str(" ", 1)), F->f_1749), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("lo = ", 5)), F->f_1749), rt_str("lo; F->", 7)), F->f_1749), rt_str("hi = ", 5)), F->f_1749), rt_str("hi;", 3)); b_; }));
}
F->ac_1752 = f_new_cons_176();
(*(P899)rt_nil_check(F->ac_1752)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1749, rt_str("lo", 2)); b_; }));
(*(P899)rt_nil_check(F->ac_1752)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1749, rt_str("hi", 2)); b_; }));
(*(P899)rt_nil_check(F->ac_1752)).dyn = 1;
(*(P899)rt_nil_check(F->ac_1752)).lvl = rt_r_ichk(g_cur_level_950);
if (((F->pc_1751 == NULL) || ((*(P899)rt_nil_check(F->pc_1751)).lo == NULL))) {
F->pc_1751 = F->ac_1752;
} else if ((rt_r_ichk((*(P909)rt_nil_check(F->pm_1731)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1749), rt_str("lo <= F->", 9)), F->f_1749), rt_str("hi && (F->", 10)), F->f_1749), rt_str("lo != ", 6)), f_sub_lo_190((*(P909)rt_nil_check(F->pm_1731)).t, F->pc_1751)), rt_str(" || F->", 7)), F->f_1749), rt_str("hi != ", 6)), f_sub_hi_193((*(P909)rt_nil_check(F->pm_1731)).t, F->pc_1751)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P909)rt_nil_check(F->pm_1731)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1748), rt_str(" ", 1)), F->f_1749), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("v = ", 4)), f_copy_code_377((*(P909)rt_nil_check(F->pm_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1749); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P903)rt_nil_check((*(P909)rt_nil_check(F->pm_1731)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P903)rt_nil_check((*(P909)rt_nil_check(F->pm_1731)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1752 == NULL)) {
F->ac_1752 = (*(P909)rt_nil_check(F->pm_1731)).c;
}
if ((!rt_str_eq(f_uninit_value_328(f_base_of_215((*(P909)rt_nil_check(F->pm_1731)).t)), rt_str("", 0)))) {
F->copy_back_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->copy_back_1738))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_220(f_base_of_215((*(P909)rt_nil_check(F->pm_1731)).t))), rt_str("(F->", 4)), F->f_1749), rt_str("v)) ", 4)), f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1749), rt_str(")", 1)); b_; }), (*(P909)rt_nil_check(F->pm_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("v", 1)); b_; }), F->ac_1752)); b_; }));
} else {
F->copy_back_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->copy_back_1738))->all), rt_str("  ", 2)), f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1749), rt_str(")", 1)); b_; }), (*(P909)rt_nil_check(F->pm_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("v", 1)); b_; }), F->ac_1752)); b_; }));
}
if (f_needs_fin_316((*(P909)rt_nil_check(F->pm_1731)).t)) {
F->pfin_1739 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->pfin_1739))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1749), rt_str("v", 1)); b_; }), (*(P909)rt_nil_check(F->pm_1731)).t)), rt_str(" ", 1)); b_; }));
}
(*(P907)rt_nil_check(F->p_1750)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1749, rt_str("v", 1)); b_; }));
(*(P907)rt_nil_check(F->p_1750)).byref = 0;
}
}
(*(P907)rt_nil_check(F->p_1750)).t = (*(P909)rt_nil_check(F->pm_1731)).t;
(*(P907)rt_nil_check(F->p_1750)).c = F->pc_1751;
(*(P907)rt_nil_check(F->p_1750)).level = rt_r_ichk(g_cur_level_950);
(*(P907)rt_nil_check(F->p_1750)).ro_flag = ((rt_r_ichk((*(P909)rt_nil_check(F->pm_1731)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P909)rt_nil_check(F->pm_1731)).mode) == (((rt_int)4LL))));
f_define_160(F->p_1750, rt_r_ichk((*(P897)rt_nil_check(F->d_482)).line));
F->pm_1731 = (*(P909)rt_nil_check(F->pm_1731)).next;
F->pn_1744 = (*(P897)rt_nil_check(F->pn_1744)).next;
}
if ((rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_483)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P897)rt_nil_check(F->d_482)).b != NULL)) {
F->rc_1756 = NULL;
F->rt_1757 = NULL;
F->rt_1757 = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_482)).b, &F->rc_1756);
g_func_rc_962 = f_freeze_201(F->rc_1756, (*(P907)rt_nil_check(F->y_483)).result);
}
f_put_27(g_fields_buf_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226((*(P907)rt_nil_check(F->y_483)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_483)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_483)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1746 = (((rt_int)(((((P890)rt_nil_check(F->pfin_1739))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1746)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_457((*(P897)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_457((*(P897)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1758 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1759 = NULL;
F->leave_1759 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1758), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1758), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1758), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_457((*(P897)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_457((*(P897)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P890)rt_nil_check((*(P897)rt_nil_check(F->d_482)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->copy_back_1738))->all), rt_str("  ", 2)), (((P890)rt_nil_check(F->leave_1759))->all)); b_; }));
F->nonrec_end_1745 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P890)rt_nil_check(F->leave_1759))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_494((*(P897)rt_nil_check(F->d_482)).c);
f_declare_body_393((*(P897)rt_nil_check(F->d_482)).c);
{
F->xu_1760 = rt_str_copy(f_open_unhandled_507((*(P897)rt_nil_check(F->d_482)).c));
f_body_elements_503((*(P897)rt_nil_check(F->d_482)).c);
f_close_fins_477(NULL);
f_close_unhandled_509(&F->xu_1760);
}
if ((F->nonrec_end_1745 != NULL)) {
f_emit_29(&(((P890)rt_nil_check(F->nonrec_end_1745))->all));
f_pop_cleanup_514();
}
if (rt_r_echk(F->has_pfin_1746)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P890)rt_nil_check(F->pfin_1739))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_514();
F->copy_back_1738 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->copy_back_1738))->all), rt_str("  ", 2)), (((P890)rt_nil_check(F->pfin_1739))->all)); b_; }));
}
f_close_scope_170();
g_fctx_951 = (*(P914)rt_nil_check(g_fctx_951)).next;
g_cur_level_950 = rt_sub(rt_r_ichk(g_cur_level_950), ((rt_int)1LL));
if (((((rt_int)(((((P890)rt_nil_check(F->args_1730))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL))))) {
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL)))) {
F->args_1730 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1735 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226((*(P907)rt_nil_check(F->y_483)).result)), rt_str(" ", 1)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_483)).cname))->all)), rt_str("(", 1)), (((P890)rt_nil_check(F->args_1730))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->head_1735))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->head_1735))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P890)rt_nil_check(F->frame_1736))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_956, g_fields_buf_948);
f_put_27(g_out_frames_956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P890)rt_nil_check(F->frame_1736))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P890)rt_nil_check(F->frame_1736))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_944, g_code_947);
if ((rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(F->y_483)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P890)rt_nil_check(F->copy_back_1738))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_944, &(((P890)rt_nil_check(F->copy_back_1738))->all));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P890)rt_nil_check(F->copy_back_1738))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_944, &(((P890)rt_nil_check(F->copy_back_1738))->all));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_947 = F->saved_code_1723;
g_fields_buf_948 = F->saved_fields_1724;
g_in_func_949 = rt_r_echk(F->saved_in_1725);
g_func_sym_961 = F->saved_sym_1726;
g_exits_970 = F->saved_exits_1727;
g_gotos_971 = F->saved_gotos_1728;
g_frames_972 = rt_r_ichk(F->saved_frames_1729);
g_handlers_973 = F->saved_handlers_1732;
g_cleanups_974 = F->saved_cleanups_1733;
g_fins_959 = F->saved_fins_1740;
g_func_rc_962 = F->saved_rc_1741;
g_cap_ret_963 = F->saved_ret_1742;
g_cap_rflag_964 = F->saved_rflag_1743;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_486(P897 d_485) {
  struct f_waits_of_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_485 = d_485;
F->w_1761 = NULL;
F->w_1761 = g_cap_waits_953;
while ((F->w_1761 != NULL)) {
if (((*(P926)rt_nil_check(F->w_1761)).d == F->d_485)) {
F->result_ = (((P890)rt_nil_check((*(P926)rt_nil_check(F->w_1761)).w))->all);
goto ret_;
}
F->w_1761 = (*(P926)rt_nil_check(F->w_1761)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_488(P897 elems_487) {
  struct f_task_waits_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_487 = elems_487;
F->e_1762 = NULL;
F->e_1762 = F->elems_487;
F->r_1763 = NULL;
F->r_1763 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1762 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1762)).kind) == (((rt_int)50LL)))) {
F->r_1763 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_1763))->all), rt_str(" rt_await_decl(&", 16)), (((P890)rt_nil_check((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1762)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->e_1762)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P897)rt_nil_check(F->e_1762)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P897)rt_nil_check(F->e_1762)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P897)rt_nil_check(F->e_1762)).flag) == ((rt_int)3LL)))))) {
F->r_1763 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_1763))->all), f_waits_of_486(F->e_1762)); b_; }));
}
F->e_1762 = (*(P897)rt_nil_check(F->e_1762)).next;
}
F->result_ = (((P890)rt_nil_check(F->r_1763))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_490(P897 elems_489) {
  struct f_await_tasks_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_489 = elems_489;
F->w_1764 = rt_str_copy(f_task_waits_488(F->elems_489));
if ((((rt_int)((F->w_1764).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1764);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_492(P897 elems_491) {
  struct f_capsule_elements_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_491 = elems_491;
F->e_1765 = NULL;
F->e_1765 = F->elems_491;
while ((F->e_1765 != NULL)) {
if (((rt_r_ichk((*(P897)rt_nil_check(F->e_1765)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_1765)).kind) <= (((rt_int)36LL))))) {
f_start_labels_495();
}
f_element_463(F->e_1765);
F->e_1765 = (*(P897)rt_nil_check(F->e_1765)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_494(P897 elems_493) {
  struct f_declare_labels_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_493 = elems_493;
F->e_1766 = NULL;
F->e_1766 = F->elems_493;
while ((F->e_1766 != NULL)) {
F->l_1767 = NULL;
F->l_1767 = (*(P897)rt_nil_check(F->e_1766)).labels;
while ((F->l_1767 != NULL)) {
F->x_1768 = NULL;
F->x_1768 = g_gotos_971;
while (((F->x_1768 != NULL) && (rt_r_ichk((*(P922)rt_nil_check(F->x_1768)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P890)rt_nil_check((*(P922)rt_nil_check(F->x_1768)).match))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->l_1767)).name))->all))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->l_1767)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P890)rt_nil_check((*(P897)rt_nil_check(F->l_1767)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1768 = (*(P922)rt_nil_check(F->x_1768)).next;
}
{ R923 *cell1769 = rt_alloc(sizeof(R923));
(*cell1769).match = NULL;
(*cell1769).label = NULL;
(*cell1769).next = NULL;
F->x_1768 = cell1769;
}
(*(P922)rt_nil_check(F->x_1768)).match = (*(P897)rt_nil_check(F->l_1767)).name;
(*(P922)rt_nil_check(F->x_1768)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P922)rt_nil_check(F->x_1768)).depth = rt_neg(((rt_int)1LL));
(*(P922)rt_nil_check(F->x_1768)).next = g_gotos_971;
g_gotos_971 = F->x_1768;
F->l_1767 = (*(P897)rt_nil_check(F->l_1767)).next;
}
F->e_1766 = (*(P897)rt_nil_check(F->e_1766)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_495(void) {
  struct f_start_labels_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1770 = NULL;
F->x_1770 = g_gotos_971;
while (((F->x_1770 != NULL) && (rt_r_ichk((*(P922)rt_nil_check(F->x_1770)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P922)rt_nil_check(F->x_1770)).depth = rt_r_ichk(g_frames_972);
F->x_1770 = (*(P922)rt_nil_check(F->x_1770)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P922 f_goto_label_497(rstr *name_496) {
  struct f_goto_label_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_496 = name_496;
F->x_1771 = NULL;
F->x_1771 = g_gotos_971;
while ((F->x_1771 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P922)rt_nil_check(F->x_1771)).match))->all), (*F->name_496))) {
F->result_ = F->x_1771;
goto ret_;
}
F->x_1771 = (*(P922)rt_nil_check(F->x_1771)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_499(P897 e_498) {
  struct f_has_return_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_498 = e_498;
F->x_1772 = NULL;
F->x_1772 = F->e_498;
while ((F->x_1772 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P897)rt_nil_check(F->x_1772)).kind) != (((rt_int)51LL))))) {
if ((((((*(P897)rt_nil_check(F->x_1772)).a != NULL) && f_has_return_499((*(P897)rt_nil_check(F->x_1772)).a)) || (((*(P897)rt_nil_check(F->x_1772)).b != NULL) && f_has_return_499((*(P897)rt_nil_check(F->x_1772)).b))) || (((*(P897)rt_nil_check(F->x_1772)).c != NULL) && f_has_return_499((*(P897)rt_nil_check(F->x_1772)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1772 = (*(P897)rt_nil_check(F->x_1772)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_501(P897 elems_500) {
  struct f_capsule_body_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_500 = elems_500;
F->saved_ret_1773 = NULL;
F->saved_ret_1773 = g_cap_ret_963;
F->saved_flag_1774 = NULL;
F->saved_flag_1774 = g_cap_rflag_964;
F->saved_frames_1775 = RT_R_IUNDEF;
F->saved_frames_1775 = rt_r_ichk(g_ret_frames_965);
F->e_1776 = NULL;
F->e_1776 = F->elems_500;
if ((!f_has_return_499(F->elems_500))) {
g_cap_ret_963 = NULL;
g_cap_rflag_964 = NULL;
f_capsule_elements_492(F->elems_500);
} else {
g_cap_rflag_964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(g_cap_rflag_964))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1776 != NULL)) {
F->stmt_1777 = RT_R_EUNDEF;
F->stmt_1777 = ((rt_r_ichk((*(P897)rt_nil_check(F->e_1776)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P897)rt_nil_check(F->e_1776)).kind) <= (((rt_int)36LL))));
g_cap_ret_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_965 = rt_r_ichk(g_frames_972);
if (rt_r_echk(F->stmt_1777)) {
f_start_labels_495();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P890)rt_nil_check(g_cap_rflag_964))->all)), rt_str(") {", 3)); b_; }));
}
f_element_463(F->e_1776);
if (rt_r_echk(F->stmt_1777)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(g_cap_ret_963))->all), rt_str(": ;", 3)); b_; }));
F->e_1776 = (*(P897)rt_nil_check(F->e_1776)).next;
}
}
g_cap_ret_963 = F->saved_ret_1773;
g_cap_rflag_964 = F->saved_flag_1774;
g_ret_frames_965 = rt_r_ichk(F->saved_frames_1775);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_503(P897 elems_502) {
  struct f_body_elements_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_502 = elems_502;
f_capsule_elements_492(F->elems_502);
f_await_tasks_490(F->elems_502);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_505(P897 elems_504) {
  struct f_gen_body_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_504 = elems_504;
F->saved_1778 = NULL;
F->saved_1778 = g_fins_959;
F->saved_gotos_1779 = NULL;
F->saved_gotos_1779 = g_gotos_971;
f_open_scope_169();
f_declare_labels_494(F->elems_504);
f_declare_body_393(F->elems_504);
{
F->xu_1780 = rt_str_copy(f_open_unhandled_507(F->elems_504));
f_body_elements_503(F->elems_504);
f_close_fins_477(F->saved_1778);
f_close_unhandled_509(&F->xu_1780);
}
f_close_scope_170();
g_gotos_971 = F->saved_gotos_1779;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_507(P897 elems_506) {
  struct f_open_unhandled_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_506 = elems_506;
F->e_1781 = NULL;
F->e_1781 = F->elems_506;
F->conds_1782 = NULL;
F->conds_1782 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1781 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_1781)).kind) == (((rt_int)49LL)))) {
F->conds_1782 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1782))->all), rt_str(" || rt_xcur == ", 15)), (((P890)rt_nil_check((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_1781)).name))->all)))).cname))->all)); b_; }));
}
F->e_1781 = (*(P897)rt_nil_check(F->e_1781)).next;
}
if ((((rt_int)(((((P890)rt_nil_check(F->conds_1782))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1783 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1783), rt_str("; if (RT_TRY(", 13)), F->f_1783), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1783), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1783, rt_str(":", 1)), (((P890)rt_nil_check(F->conds_1782))->all));
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
F->i_1784 = RT_R_IUNDEF;
F->i_1784 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_508), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_508), rt_r_ichk(F->i_1784))) != 58)) {
F->i_1784 = rt_add(rt_r_ichk(F->i_1784), ((rt_int)1LL));
}
{
F->f_1785 = rt_str_copy(rt_str_slice((*F->xu_508), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1784), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1785), rt_str("); } else { RT_POP(", 19)), F->f_1785), rt_str("); if (", 7)), rt_str_slice((*F->xu_508), rt_add(rt_r_ichk(F->i_1784), ((rt_int)1LL)), ((rt_int)(((*F->xu_508)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
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
F->i_1786 = RT_R_IUNDEF;
F->i_1786 = rt_r_ichk(g_frames_972);
F->c_1787 = NULL;
F->c_1787 = g_cleanups_974;
while ((rt_r_ichk(F->i_1786) > F->upto_510)) {
f_emit_29(&(((P890)rt_nil_check((*(P901)rt_nil_check(F->c_1787)).s))->all));
F->c_1787 = (*(P901)rt_nil_check(F->c_1787)).next;
F->i_1786 = rt_sub(rt_r_ichk(F->i_1786), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_513(rstr *s_512) {
  struct f_push_cleanup_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_512 = s_512;
F->c_1788 = NULL;
{ R902 *cell1789 = rt_alloc(sizeof(R902));
(*cell1789).s = NULL;
(*cell1789).next = NULL;
F->c_1788 = cell1789;
}
(*(P901)rt_nil_check(F->c_1788)).s = f_mk_3(&(*F->s_512));
(*(P901)rt_nil_check(F->c_1788)).next = g_cleanups_974;
g_cleanups_974 = F->c_1788;
g_frames_972 = rt_add(rt_r_ichk(g_frames_972), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_514(void) {
  struct f_pop_cleanup_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_974 = (*(P901)rt_nil_check(g_cleanups_974)).next;
g_frames_972 = rt_sub(rt_r_ichk(g_frames_972), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_516(P897 s_515) {
  struct f_gen_statement_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_515 = s_515;
F->label_1790 = NULL;
F->gl_1791 = NULL;
F->gl_1791 = (*(P897)rt_nil_check(F->s_515)).labels;
while ((F->gl_1791 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P922)rt_nil_check(f_goto_label_497(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->gl_1791)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1791 = (*(P897)rt_nil_check(F->gl_1791)).next;
}
if (((*(P897)rt_nil_check(F->s_515)).tag != NULL)) {
F->x_1792 = NULL;
{ R923 *cell1793 = rt_alloc(sizeof(R923));
(*cell1793).match = NULL;
(*cell1793).label = NULL;
(*cell1793).next = NULL;
F->x_1792 = cell1793;
}
F->label_1790 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P922)rt_nil_check(F->x_1792)).match = (*(P897)rt_nil_check(F->s_515)).tag;
(*(P922)rt_nil_check(F->x_1792)).label = F->label_1790;
(*(P922)rt_nil_check(F->x_1792)).depth = rt_r_ichk(g_frames_972);
(*(P922)rt_nil_check(F->x_1792)).next = g_exits_970;
g_exits_970 = F->x_1792;
}
{ rt_int sel1794 = rt_r_ichk((*(P897)rt_nil_check(F->s_515)).kind);
if (0 || (sel1794 == (((rt_int)20LL)))) {
f_st_assign_518(F->s_515);
} else if (0 || (sel1794 == (((rt_int)21LL)))) {
f_st_call_520(F->s_515);
} else if (0 || (sel1794 == (((rt_int)22LL)))) {
f_st_if_522(F->s_515);
} else if (0 || (sel1794 == (((rt_int)23LL)))) {
f_st_case_526(F->s_515);
} else if (0 || (sel1794 == (((rt_int)24LL)))) {
f_st_repeat_534(F->s_515);
} else if (0 || (sel1794 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_515)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1794 == (((rt_int)27LL)))) {
f_st_exit_536(F->s_515);
} else if (0 || (sel1794 == (((rt_int)29LL)))) {
{
F->x_1795 = NULL;
F->x_1795 = f_goto_label_497(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->s_515)).name))->all));
if ((F->x_1795 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->s_515)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_511(rt_r_ichk((*(P922)rt_nil_check(F->x_1795)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P890)rt_nil_check((*(P922)rt_nil_check(F->x_1795)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1794 == (((rt_int)28LL)))) {
f_st_return_538(F->s_515);
} else if (0 || (sel1794 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_545(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->s_515)).name))->all), rt_r_ichk((*(P897)rt_nil_check(F->s_515)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1794 == (((rt_int)31LL)))) {
if ((g_handlers_973 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P890)rt_nil_check((*(P901)rt_nil_check(g_handlers_973)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1794 == (((rt_int)26LL)))) {
f_st_guard_547(F->s_515);
} else if (0 || (sel1794 == (((rt_int)32LL)))) {
f_st_alloc_549(F->s_515);
} else if (0 || (sel1794 == (((rt_int)34LL)))) {
f_st_create_553(F->s_515);
} else if (0 || (sel1794 == (((rt_int)35LL)))) {
f_st_wait_582(F->s_515);
} else if (0 || (sel1794 == (((rt_int)36LL)))) {
f_st_region_590(F->s_515);
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P897)rt_nil_check(F->s_515)).tag != NULL)) {
g_exits_970 = (*(P922)rt_nil_check(g_exits_970)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->label_1790))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_518(P897 s_517) {
  struct f_st_assign_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_517 = s_517;
F->lv_1796 = NULL;
F->t_1797 = NULL;
F->vt_1798 = NULL;
F->c_1799 = NULL;
F->ro_1800 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).kind) == (((rt_int)10LL))) && ((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b != NULL)) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_669((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).a, &F->lv_1796, &F->t_1797, &F->c_1799, &F->ro_1800);
while ((rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->t_1797);
F->lv_1796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(((P890)rt_nil_check(F->lv_1796))->all), F->t_1797); b_; }));
F->t_1797 = (*(P903)rt_nil_check(F->t_1797)).target;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->t_1797)).tparams == NULL))) {
F->t_1797 = (*(P903)rt_nil_check(F->t_1797)).under;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).kind) == (((rt_int)15LL)))) {
F->lv_1796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->lv_1796))->all), rt_str(".all", 4)); b_; }));
F->t_1797 = (*(P903)rt_nil_check(F->t_1797)).under;
}
if ((((!rt_r_echk(F->ro_1800)) && (rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).ndim) == ((rt_int)1LL)))) {
F->lo_1801 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b)).a, (*(P903)rt_nil_check(F->t_1797)).idx, &F->vt_1798));
F->hi_1802 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b)).b, (*(P903)rt_nil_check(F->t_1797)).idx, &F->vt_1798));
F->v_1803 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->s_517)).b, F->t_1797, &F->vt_1798));
f_need_slice_681(F->t_1797);
f_check_type_224(F->vt_1798, F->t_1797, rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_1797)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_226(F->t_1797)), rt_str("(", 1)), (((P890)rt_nil_check(F->lv_1796))->all)), rt_str(", ", 2)), F->lo_1801), rt_str(", ", 2)), F->hi_1802), rt_str("); as_", 6)), f_ctype_226(F->t_1797)), rt_str("(&sl_, ", 7)), F->v_1803), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1800) || (rt_r_ichk((*(P903)rt_nil_check(F->t_1797)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1804 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b)).a, g_ty_int_977, &F->vt_1798));
F->hi_1805 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->s_517)).a)).b)).b, g_ty_int_977, &F->vt_1798));
F->v_1806 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->s_517)).b, g_ty_string_981, &F->vt_1798));
f_check_type_224(F->vt_1798, g_ty_string_981, rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P890)rt_nil_check(F->lv_1796))->all)), rt_str(", ", 2)), F->lo_1804), rt_str(", ", 2)), F->hi_1805), rt_str(", ", 2)), F->v_1806), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_669((*(P897)rt_nil_check(F->s_517)).a, &F->lv_1796, &F->t_1797, &F->c_1799, &F->ro_1800);
if (rt_r_echk(F->ro_1800)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_297(F->t_1797)) && (!f_exports_op_415((*(P903)rt_nil_check(F->t_1797)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_1797)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1807 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->s_517)).b, F->t_1797, F->c_1799, &F->vt_1798));
f_check_type_224(F->vt_1798, F->t_1797, rt_r_ichk((*(P897)rt_nil_check(F->s_517)).line));
f_ptr_subtype_check_447(F->t_1797, F->c_1799, (*(P897)rt_nil_check(F->s_517)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&(((P890)rt_nil_check(F->lv_1796))->all), F->t_1797, &F->v_1807, F->c_1799); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_520(P897 s_519) {
  struct f_st_call_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_519 = s_519;
F->c_1808 = NULL;
F->c_1808 = (*(P897)rt_nil_check(F->s_519)).a;
F->t_1809 = NULL;
if (((rt_r_ichk((*(P897)rt_nil_check(F->c_1808)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->c_1808)).kind) == (((rt_int)12LL))))) {
F->x_1810 = NULL;
F->x_1810 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->c_1808)).line));
(*(P897)rt_nil_check(F->x_1810)).a = F->c_1808;
F->c_1808 = F->x_1810;
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->c_1808)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_519)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_848(F->c_1808, 1, &F->t_1809), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_522(P897 s_521) {
  struct f_st_if_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_521 = s_521;
F->a_1811 = NULL;
F->a_1811 = (*(P897)rt_nil_check(F->s_521)).a;
F->first_1812 = RT_R_EUNDEF;
F->first_1812 = 1;
F->t_1813 = NULL;
F->taken_1814 = RT_R_EUNDEF;
F->taken_1814 = 0;
F->ok_1815 = RT_R_EUNDEF;
F->mv_1816 = NULL;
while (((F->a_1811 != NULL) && (!rt_r_echk(F->taken_1814)))) {
F->mv_1816 = f_meval_343((*(P897)rt_nil_check(F->a_1811)).a, &F->ok_1815);
if (((rt_r_echk(F->ok_1815) && (rt_r_ichk((*(P916)rt_nil_check(F->mv_1816)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P916)rt_nil_check(F->mv_1816)).i) == ((rt_int)0LL)))) {
F->a_1811 = (*(P897)rt_nil_check(F->a_1811)).next;
} else {
if ((rt_r_echk(F->ok_1815) && (rt_r_ichk((*(P916)rt_nil_check(F->mv_1816)).kind) == (((rt_int)2LL))))) {
F->taken_1814 = 1;
if (rt_r_echk(F->first_1812)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1817 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->a_1811)).a, g_ty_bool_978, &F->t_1813));
f_check_type_224(F->t_1813, g_ty_bool_978, rt_r_ichk((*(P897)rt_nil_check(F->s_521)).line));
if (rt_r_echk(F->first_1812)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1817), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1817), rt_str(") {", 3)); b_; }));
}
}
F->first_1812 = 0;
f_gen_body_505((*(P897)rt_nil_check(F->a_1811)).b);
F->a_1811 = (*(P897)rt_nil_check(F->a_1811)).next;
}
}
if (((rt_r_ichk((*(P897)rt_nil_check(F->s_521)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1814)))) {
if (rt_r_echk(F->first_1812)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1812 = 0;
f_gen_body_505((*(P897)rt_nil_check(F->s_521)).b);
}
if ((!rt_r_echk(F->first_1812))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_524(P897 s_523) {
  struct f_manifest_case_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_523 = s_523;
F->ok_1818 = RT_R_EUNDEF;
F->sv_1819 = NULL;
F->sv_1819 = f_meval_343((*(P897)rt_nil_check(F->s_523)).a, &F->ok_1818);
F->a_1820 = NULL;
F->a_1820 = (*(P897)rt_nil_check(F->s_523)).b;
if (((!rt_r_echk(F->ok_1818)) || (((rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_1820 != NULL)) {
F->lab_1821 = NULL;
F->lab_1821 = (*(P897)rt_nil_check(F->a_1820)).a;
while ((F->lab_1821 != NULL)) {
F->lo_1822 = NULL;
F->lo_1822 = f_meval_343((*(P897)rt_nil_check(F->lab_1821)).a, &F->ok_1818);
F->hi_1823 = NULL;
F->hi_1823 = F->lo_1822;
if (((!rt_r_echk(F->ok_1818)) || (rt_r_ichk((*(P916)rt_nil_check(F->lo_1822)).kind) != rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P897)rt_nil_check(F->lab_1821)).b != NULL)) {
F->hi_1823 = f_meval_343((*(P897)rt_nil_check(F->lab_1821)).b, &F->ok_1818);
if ((((!rt_r_echk(F->ok_1818)) || (rt_r_ichk((*(P916)rt_nil_check(F->hi_1823)).kind) != rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind))) || (rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) == (((rt_int)4LL))) && rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check(F->sv_1819)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check(F->lo_1822)).s))->all))) || (((rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P916)rt_nil_check(F->lo_1822)).i) <= rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).i))) && (rt_r_ichk((*(P916)rt_nil_check(F->sv_1819)).i) <= rt_r_ichk((*(P916)rt_nil_check(F->hi_1823)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->a_1820)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_1821 = (*(P897)rt_nil_check(F->lab_1821)).next;
}
F->a_1820 = (*(P897)rt_nil_check(F->a_1820)).next;
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_523)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_523)).c);
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

static void f_st_case_526(P897 s_525) {
  struct f_st_case_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_525 = s_525;
F->st_1824 = NULL;
F->vt_1825 = NULL;
F->first_1826 = RT_R_EUNDEF;
F->first_1826 = 1;
F->a_1827 = NULL;
F->a_1827 = (*(P897)rt_nil_check(F->s_525)).b;
if (f_manifest_case_524(F->s_525)) {
goto ret_;
}
f_st_case2_528(F->s_525);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_528(P897 s_527) {
  struct f_st_case2_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_527 = s_527;
F->st_1828 = NULL;
F->vt_1829 = NULL;
F->first_1830 = RT_R_EUNDEF;
F->first_1830 = 1;
F->a_1831 = NULL;
F->a_1831 = (*(P897)rt_nil_check(F->s_527)).b;
F->sel_1832 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->s_527)).a, NULL, &F->st_1828));
F->tmp_1833 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->st_1828)), rt_str(" ", 1)), F->tmp_1833), rt_str(" = ", 3)), F->sel_1832), rt_str(";", 1)); b_; }));
while ((F->a_1831 != NULL)) {
F->lab_1834 = NULL;
F->lab_1834 = (*(P897)rt_nil_check(F->a_1831)).a;
F->conds_1835 = NULL;
F->conds_1835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1834 != NULL)) {
if (((*(P897)rt_nil_check(F->lab_1834)).b == NULL)) {
F->v_1836 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->lab_1834)).a, F->st_1828, &F->vt_1829));
f_check_type_224(F->vt_1829, F->st_1828, rt_r_ichk((*(P897)rt_nil_check(F->s_527)).line));
F->conds_1835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1835))->all), rt_str(" || ", 4)), f_eq_code_381(F->st_1828, &F->tmp_1833, &F->v_1836)); b_; }));
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->st_1828)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->st_1828)).ltp != NULL))) {
F->lo_1837 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->lab_1834)).a, F->st_1828, &F->vt_1829));
F->hi_1838 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->lab_1834)).b, F->st_1828, &F->vt_1829));
F->conds_1835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1835))->all), rt_str(" || (!", 6)), f_user_call2_363((*(P903)rt_nil_check(F->st_1828)).ltp, &F->tmp_1833, 1, &F->lo_1837, 0)), rt_str(" && !", 5)), f_user_call2_363((*(P903)rt_nil_check(F->st_1828)).ltp, &F->hi_1838, 0, &F->tmp_1833, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_1839 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->lab_1834)).a, F->st_1828, &F->vt_1829));
F->hi_1840 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->lab_1834)).b, F->st_1828, &F->vt_1829));
F->conds_1835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1835))->all), rt_str(" || (", 5)), F->tmp_1833), rt_str(" >= ", 4)), F->lo_1839), rt_str(" && ", 4)), F->tmp_1833), rt_str(" <= ", 4)), F->hi_1840), rt_str(")", 1)); b_; }));
}
F->lab_1834 = (*(P897)rt_nil_check(F->lab_1834)).next;
}
if (rt_r_echk(F->first_1830)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->conds_1835))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P890)rt_nil_check(F->conds_1835))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1830 = 0;
f_gen_body_505((*(P897)rt_nil_check(F->a_1831)).b);
F->a_1831 = (*(P897)rt_nil_check(F->a_1831)).next;
}
if (rt_r_echk(F->first_1830)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_527)).flag) == ((rt_int)1LL))) {
f_gen_body_505((*(P897)rt_nil_check(F->s_527)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_532(P897 s_529, P903 t_530, P899 c_531) {
  struct f_user_for_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_529 = s_529;
F->t_530 = t_530;
F->c_531 = c_531;
F->y_1841 = NULL;
F->y_1841 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->s_529)).name);
F->saved_1842 = NULL;
F->saved_1842 = g_psub_954;
F->p_1843 = NULL;
F->p_1843 = (*(P903)rt_nil_check(F->t_530)).tparams;
F->iv_1844 = NULL;
F->iv_1844 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->s_529)).line));
F->st_1845 = NULL;
F->access_1846 = rt_str_copy(f_storage_468(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->s_529)).name))->all), F->t_530));
F->uv_1847 = NULL;
F->uv_1847 = f_mk_3(&F->access_1846);
if (((*(P903)rt_nil_check(F->t_530)).tparams != NULL)) {
F->uv_1847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_1846, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_178(f_base_of_215((*(P903)rt_nil_check(F->t_530)).under))) || ((*(P903)rt_nil_check(F->t_530)).elemcons == NULL)) || ((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_530)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_529)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_530)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_311(&F->access_1846, F->t_530, F->c_531);
while ((F->p_1843 != NULL)) {
F->l1_1848 = NULL;
F->l2_1849 = NULL;
{ R902 *cell1850 = rt_alloc(sizeof(R902));
(*cell1850).s = NULL;
(*cell1850).next = NULL;
F->l1_1848 = cell1850;
}
{ R902 *cell1851 = rt_alloc(sizeof(R902));
(*cell1851).s = NULL;
(*cell1851).next = NULL;
F->l2_1849 = cell1851;
}
(*(P901)rt_nil_check(F->l1_1848)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1843)).name))->all))), rt_str("@", 1)); b_; }));
(*(P901)rt_nil_check(F->l2_1849)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_1846, rt_str(".p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1843)).name))->all))); b_; }));
(*(P901)rt_nil_check(F->l1_1848)).next = F->l2_1849;
(*(P901)rt_nil_check(F->l2_1849)).next = g_psub_954;
g_psub_954 = F->l1_1848;
F->p_1843 = (*(P897)rt_nil_check(F->p_1843)).next;
}
{
F->lo_1852 = rt_str_copy(f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_530)).elemcons)).lo))->all)));
F->hi_1853 = rt_str_copy(f_subst_303(&(((P890)rt_nil_check((*(P899)rt_nil_check((*(P903)rt_nil_check(F->t_530)).elemcons)).hi))->all)));
g_psub_954 = F->saved_1842;
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_529)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->uv_1847))->all), rt_str(" = ", 3)), F->hi_1853), rt_str("; if (", 6)), F->lo_1852), rt_str(" <= ", 4)), (((P890)rt_nil_check(F->uv_1847))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->uv_1847))->all), rt_str(" = ", 3)), F->lo_1852), rt_str("; if (", 6)), (((P890)rt_nil_check(F->uv_1847))->all)), rt_str(" <= ", 4)), F->hi_1853), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_169();
(*(P907)rt_nil_check(F->y_1841)).t = F->t_530;
(*(P907)rt_nil_check(F->y_1841)).c = F->c_531;
f_bind_471(F->y_1841, &F->access_1846);
(*(P907)rt_nil_check(F->y_1841)).ro_flag = 1;
f_define_160(F->y_1841, rt_r_ichk((*(P897)rt_nil_check(F->s_529)).line));
f_gen_body_505((*(P897)rt_nil_check(F->s_529)).b);
(*(P897)rt_nil_check(F->iv_1844)).name = (*(P897)rt_nil_check(F->s_529)).name;
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_529)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->uv_1847))->all)), rt_str(" == ", 4)), F->lo_1852), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1846, F->t_530, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_1844, rt_r_ichk((*(P897)rt_nil_check(F->s_529)).line)), 0, &F->st_1845); b_; }), F->c_531); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->uv_1847))->all)), rt_str(" == ", 4)), F->hi_1853), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1846, F->t_530, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_1844, rt_r_ichk((*(P897)rt_nil_check(F->s_529)).line)), 0, &F->st_1845); b_; }), F->c_531); b_; }));
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_534(P897 s_533) {
  struct f_st_repeat_534fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_533 = s_533;
F->t_1854 = NULL;
F->c_1855 = NULL;
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_533)).flag) == ((rt_int)0LL))) {
F->cond_1856 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->s_533)).a, g_ty_bool_978, &F->t_1854));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1856), rt_str(") {", 3)); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_533)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1854 = f_resolve_subtype_257((*(P897)rt_nil_check(F->s_533)).a, &F->c_1855);
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_1854)).kind) == (((rt_int)15LL))) && (((*(P903)rt_nil_check(F->t_1854)).tparams != NULL) || (!f_scalar_kind_178(f_base_of_215(F->t_1854)))))) {
f_user_for_532(F->s_533, F->t_1854, F->c_1855);
goto ret_;
}
F->c_1855 = f_base_cons_218(F->t_1854, F->c_1855);
if ((((*(P903)rt_nil_check(f_base_of_215(F->t_1854))).kind == (((rt_int)4LL))) && ((*(P899)rt_nil_check(F->c_1855)).lo == NULL))) {
F->c_1855 = f_new_cons_176();
(*(P899)rt_nil_check(F->c_1855)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P899)rt_nil_check(F->c_1855)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P903)rt_nil_check(f_base_of_215(F->t_1854))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P899)rt_nil_check(F->c_1855)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_533)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1857 = rt_str_copy(f_storage_468(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->s_533)).name))->all), F->t_1854));
F->lov_1858 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1859 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1860 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1861 = NULL;
F->y_1861 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->s_533)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1858), rt_str(" = ", 3)), f_clo_185(F->c_1855)), rt_str(", ", 2)), F->hiv_1859), rt_str(" = ", 3)), f_chi_187(F->c_1855)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_533)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1860), rt_str(" = ", 3)), F->hiv_1859), rt_str("; ", 2)), F->it_1860), rt_str(" >= ", 4)), F->lov_1858), rt_str("; ", 2)), F->it_1860), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1860), rt_str(" = ", 3)), F->lov_1858), rt_str("; ", 2)), F->it_1860), rt_str(" <= ", 4)), F->hiv_1859), rt_str("; ", 2)), F->it_1860), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1857, rt_str(" = ", 3)), F->it_1860), rt_str(";", 1)); b_; }));
f_open_scope_169();
(*(P907)rt_nil_check(F->y_1861)).t = F->t_1854;
(*(P907)rt_nil_check(F->y_1861)).c = F->c_1855;
f_bind_471(F->y_1861, &F->access_1857);
(*(P907)rt_nil_check(F->y_1861)).ro_flag = 1;
f_define_160(F->y_1861, rt_r_ichk((*(P897)rt_nil_check(F->s_533)).line));
f_gen_body_505((*(P897)rt_nil_check(F->s_533)).b);
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_536(P897 s_535) {
  struct f_st_exit_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_535 = s_535;
F->x_1862 = NULL;
F->x_1862 = g_exits_970;
while ((F->x_1862 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P922)rt_nil_check(F->x_1862)).match))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->s_535)).name))->all))) {
f_pop_frames_511(rt_r_ichk((*(P922)rt_nil_check(F->x_1862)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P890)rt_nil_check((*(P922)rt_nil_check(F->x_1862)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1862 = (*(P922)rt_nil_check(F->x_1862)).next;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_535)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P890)rt_nil_check((*(P897)rt_nil_check(F->s_535)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_538(P897 s_537) {
  struct f_st_return_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_537 = s_537;
F->vt_1863 = NULL;
if ((g_cap_ret_963 != NULL)) {
if (((*(P897)rt_nil_check(F->s_537)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_511(rt_r_ichk(g_ret_frames_965));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(g_cap_rflag_964))->all), rt_str(" = 1; goto ", 11)), (((P890)rt_nil_check(g_cap_ret_963))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_949))) {
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check((*(P907)rt_nil_check(g_func_sym_961)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P897)rt_nil_check(F->s_537)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P897)rt_nil_check(F->s_537)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1864 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->s_537)).a, (*(P907)rt_nil_check(g_func_sym_961)).result, g_func_rc_962, &F->vt_1863));
f_check_type_224(F->vt_1863, (*(P907)rt_nil_check(g_func_sym_961)).result, rt_r_ichk((*(P897)rt_nil_check(F->s_537)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_542((*(P907)rt_nil_check(g_func_sym_961)).result, g_func_rc_962, &F->v_1864)), rt_str(";", 1)); b_; }));
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_542(P903 t_539, P899 c_540, rstr *v_541) {
  struct f_result_checked_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_539 = t_539;
F->c_540 = c_540;
F->v_541 = v_541;
if ((F->c_540 == NULL)) {
F->result_ = (*F->v_541);
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_539)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->c_540)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_541)), rt_str(", ", 2)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_540)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->t_539)).kind) == (((rt_int)6LL))) && ((*(P899)rt_nil_check(F->c_540)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->t_539)), rt_str(" r_ = ", 6)), (*F->v_541)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_540)).lo))->all)), rt_str(", ", 2)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_540)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
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
F->y_1865 = NULL;
F->y_1865 = f_lookup_155(&(*F->name_543));
if (((F->y_1865 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1865)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1865)).cname))->all);
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

static void f_st_guard_547(P897 s_546) {
  struct f_st_guard_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_546 = s_546;
F->h_1866 = NULL;
F->h_1866 = (*(P897)rt_nil_check(F->s_546)).b;
F->first_1867 = RT_R_EUNDEF;
F->first_1867 = 1;
F->hv_1868 = NULL;
{
F->f_1869 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1870 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1869), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1869), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1869), rt_str(")) {", 4)); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_546)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1869), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1869), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1870), rt_str(" = rt_xcur;", 11)); b_; }));
{ R902 *cell1871 = rt_alloc(sizeof(R902));
(*cell1871).s = NULL;
(*cell1871).next = NULL;
F->hv_1868 = cell1871;
}
(*(P901)rt_nil_check(F->hv_1868)).s = f_mk_3(&F->x_1870);
(*(P901)rt_nil_check(F->hv_1868)).next = g_handlers_973;
g_handlers_973 = F->hv_1868;
{
F->h1_1872 = NULL;
F->h1_1872 = (*(P897)rt_nil_check(F->s_546)).b;
F->seen_1873 = NULL;
while ((F->h1_1872 != NULL)) {
F->n1_1874 = NULL;
F->n1_1874 = (*(P897)rt_nil_check(F->h1_1872)).a;
while ((F->n1_1874 != NULL)) {
if (f_seen_name_388(F->seen_1873, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->n1_1874)).name))->all))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->n1_1874)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->n1_1874)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_1873 = f_add_line_798(F->seen_1873, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->n1_1874)).name))->all));
F->n1_1874 = (*(P897)rt_nil_check(F->n1_1874)).next;
}
F->h1_1872 = (*(P897)rt_nil_check(F->h1_1872)).next;
}
}
while ((F->h_1866 != NULL)) {
F->n_1875 = NULL;
F->n_1875 = (*(P897)rt_nil_check(F->h_1866)).a;
F->conds_1876 = NULL;
F->conds_1876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1875 != NULL)) {
F->conds_1876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1876))->all), rt_str(" || ", 4)), F->x_1870), rt_str(" == ", 4)), f_exc_id_545(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->n_1875)).name))->all), rt_r_ichk((*(P897)rt_nil_check(F->s_546)).line))); b_; }));
F->n_1875 = (*(P897)rt_nil_check(F->n_1875)).next;
}
if (rt_r_echk(F->first_1867)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->conds_1876))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P890)rt_nil_check(F->conds_1876))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1867 = 0;
f_gen_body_505((*(P897)rt_nil_check(F->h_1866)).b);
F->h_1866 = (*(P897)rt_nil_check(F->h_1866)).next;
}
if (rt_r_echk(F->first_1867)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->s_546)).flag) == ((rt_int)1LL))) {
f_gen_body_505((*(P897)rt_nil_check(F->s_546)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1870), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_973 = (*(P901)rt_nil_check(g_handlers_973)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_549(P897 s_548) {
  struct f_st_alloc_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_548 = s_548;
F->lv_1877 = NULL;
F->t_1878 = NULL;
F->target_1879 = NULL;
F->vt_1880 = NULL;
F->c_1881 = NULL;
F->tc_1882 = NULL;
F->ro_1883 = RT_R_EUNDEF;
F->d_1884 = NULL;
F->p_1885 = NULL;
F->a_1886 = NULL;
f_lvalue_669((*(P897)rt_nil_check(F->s_548)).a, &F->lv_1877, &F->t_1878, &F->c_1881, &F->ro_1883);
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1878)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_548)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_427(F->t_1878);
F->d_1884 = (*(P903)rt_nil_check(F->t_1878)).decl;
F->target_1879 = (*(P903)rt_nil_check(F->t_1878)).target;
if ((f_list_len_67((*(P897)rt_nil_check(F->s_548)).b) != f_list_len_67((*(P897)rt_nil_check(F->d_1884)).b))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_548)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P897)rt_nil_check(F->d_1884)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P897)rt_nil_check(F->d_1884)).b != NULL)) {
f_alloc_cell_439(F->s_548, &(((P890)rt_nil_check(F->lv_1877))->all), F->t_1878, F->c_1881);
goto ret_;
}
{
F->tcn_1887 = rt_str_copy(f_ctype_226(F->target_1879));
F->cell_1888 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316(F->target_1879)) {
F->fn_1889 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_958 = 1;
g_uses_findyn_960 = 1;
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1889), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1889), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P890)rt_nil_check((*(P907)rt_nil_check(g_func_sym_961)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1887), rt_str(" *)cell_)", 9)); b_; }), F->target_1879)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1887), rt_str(" *", 2)), F->cell_1888), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1887), rt_str("), ", 3)), F->fn_1889), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1887), rt_str(" *", 2)), F->cell_1888), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1887), rt_str("), ", 3)), F->fn_1889), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1887), rt_str(" *", 2)), F->cell_1888), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1887), rt_str("));", 3)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_434((*(P897)rt_nil_check(F->d_1884)).d, f_ptr_args_429(F->c_1881), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P897)rt_nil_check(F->s_548)).line));
F->vt_1880 = f_resolve_subtype_257((*(P897)rt_nil_check(F->d_1884)).a, &F->tc_1882);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1888), rt_str(")", 1)); b_; }), F->target_1879, F->tc_1882);
f_close_scope_170();
if (((*(P897)rt_nil_check(F->s_548)).c != NULL)) {
F->v_1890 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->s_548)).c, F->target_1879, F->tc_1882, &F->vt_1880));
f_check_type_224(F->vt_1880, F->target_1879, rt_r_ichk((*(P897)rt_nil_check(F->s_548)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1888), rt_str(")", 1)); b_; }), F->target_1879, &F->v_1890, F->tc_1882); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->lv_1877))->all), rt_str(" = ", 3)), F->cell_1888), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_551(P897 e_550) {
  struct f_act_ref_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_550 = e_550;
F->lv_1891 = NULL;
F->t_1892 = NULL;
F->c_1893 = NULL;
F->ro_1894 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P897)rt_nil_check(F->e_550)).kind) == (((rt_int)7LL))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_550)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_663(F->e_550))) {
F->v_1895 = rt_str_copy(f_gexpr_700(F->e_550, g_ty_act_987, &F->t_1892));
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1892)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_550)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1895;
goto ret_;
}
f_lvalue_669(F->e_550, &F->lv_1891, &F->t_1892, &F->c_1893, &F->ro_1894);
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1892)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_550)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P890)rt_nil_check(F->lv_1891))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_553(P897 s_552) {
  struct f_st_create_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_552 = s_552;
F->y_1896 = NULL;
F->y_1896 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->s_552)).name))->all));
F->pm_1897 = NULL;
F->a_1898 = NULL;
F->a_1898 = (*(P897)rt_nil_check(F->s_552)).b;
F->lv_1899 = NULL;
F->lt_1900 = NULL;
F->vt_1901 = NULL;
F->lc_1902 = NULL;
F->ro_1903 = RT_R_EUNDEF;
if (((F->y_1896 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_1896)).kind) == (((rt_int)10LL))))) {
F->y_1896 = f_instantiate_645(F->y_1896, (*(P897)rt_nil_check(F->s_552)).e, (*(P897)rt_nil_check(F->s_552)).b, rt_r_ichk((*(P897)rt_nil_check(F->s_552)).line));
}
if (((F->y_1896 == NULL) || (rt_r_ichk((*(P907)rt_nil_check(F->y_1896)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_552)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->s_552)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1897 = (*(P907)rt_nil_check(F->y_1896)).params;
{
F->at_1904 = NULL;
F->ac_1905 = NULL;
F->aro_1906 = RT_R_EUNDEF;
F->act_1907 = NULL;
F->nf_1908 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_669((*(P897)rt_nil_check(F->s_552)).a, &F->lv_1899, &F->at_1904, &F->ac_1905, &F->aro_1906);
if ((rt_r_ichk((*(P903)rt_nil_check(F->at_1904)).kind) == (((rt_int)14LL)))) {
F->act_1907 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_551((*(P897)rt_nil_check(F->s_552)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1896)).cname))->all)), rt_str("fr *", 4)), F->nf_1908), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1908), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_1896)).level) > ((rt_int)0LL))) {
F->link_1909 = NULL;
F->link_1909 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1911 = ((rt_int)1LL), hi1912 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P907)rt_nil_check(F->y_1896)).level));
for (rt_int it1913 = lo1911; it1913 <= hi1912; it1913++) {
F->i_1910 = it1913;
F->link_1909 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->link_1909))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1908, rt_str("->up = ", 7)), (((P890)rt_nil_check(F->link_1909))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1898 != NULL) && (F->pm_1897 != NULL))) {
if ((rt_r_ichk((*(P909)rt_nil_check(F->pm_1897)).mode) == (((rt_int)1LL)))) {
F->v_1914 = rt_str_copy(f_gexpr_in_708(F->a_1898, (*(P909)rt_nil_check(F->pm_1897)).t, (*(P909)rt_nil_check(F->pm_1897)).c, &F->vt_1901));
f_check_type_224(F->vt_1901, (*(P909)rt_nil_check(F->pm_1897)).t, rt_r_ichk((*(P897)rt_nil_check(F->s_552)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1908, rt_str("->", 2)), (((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_1897)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_377((*(P909)rt_nil_check(F->pm_1897)).t, &F->v_1914)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_669(F->a_1898, &F->lv_1899, &F->lt_1900, &F->lc_1902, &F->ro_1903);
f_check_type_224(F->lt_1900, (*(P909)rt_nil_check(F->pm_1897)).t, rt_r_ichk((*(P897)rt_nil_check(F->s_552)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1908, rt_str("->", 2)), (((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_1897)).cfield))->all)), rt_str(" = &", 4)), (((P890)rt_nil_check(F->lv_1899))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_178((*(P909)rt_nil_check(F->pm_1897)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1908, rt_str("->", 2)), (((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_1897)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_190(F->lt_1900, F->lc_1902)), rt_str("; ", 2)), F->nf_1908), rt_str("->", 2)), (((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_1897)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_193(F->lt_1900, F->lc_1902)), rt_str(";", 1)); b_; }));
}
}
F->a_1898 = (*(P897)rt_nil_check(F->a_1898)).next;
F->pm_1897 = (*(P909)rt_nil_check(F->pm_1897)).next;
}
if (((F->a_1898 != NULL) || (F->pm_1897 != NULL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->s_552)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P890)rt_nil_check((*(P897)rt_nil_check(F->s_552)).name))->all)); b_; }));
}
if ((F->act_1907 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P890)rt_nil_check(F->act_1907))->all)), rt_str(", &", 3)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1896)).cname))->all)), rt_str("decl, ", 6)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1896)).cname))->all)), rt_str(", ", 2)), F->nf_1908), rt_str("); }", 4)); b_; }));
} else {
f_user_create_563(F->s_552, F->y_1896, &(((P890)rt_nil_check(F->lv_1899))->all), F->at_1904, &F->nf_1908);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_557(rstr *name_554, P903 t_555, rstr *place_556) {
  struct f_hidden_var_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_554 = name_554;
F->t_555 = t_555;
F->place_556 = place_556;
F->y_1915 = NULL;
F->y_1915 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&(*F->name_554)));
(*(P907)rt_nil_check(F->y_1915)).t = F->t_555;
(*(P907)rt_nil_check(F->y_1915)).level = ((rt_int)0LL);
(*(P907)rt_nil_check(F->y_1915)).access = f_mk_3(&(*F->place_556));
f_define_160(F->y_1915, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_563(P897 s_558, P907 y_559, rstr *uv_560, P903 ut_561, rstr *nf_562) {
  struct f_user_create_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_558 = s_558;
F->y_559 = y_559;
F->uv_560 = uv_560;
F->ut_561 = ut_561;
F->nf_562 = nf_562;
F->t_1916 = NULL;
F->saved_1917 = NULL;
F->saved_1917 = g_code_947;
F->hook_1918 = NULL;
F->hook_1918 = f_new_buffer_24();
F->un_1919 = NULL;
F->un_1919 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line));
F->hn_1920 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1921 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1922 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1923 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_169();
f_hidden_var_557(&F->uname_1922, F->ut_561, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->ut_561)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P897)rt_nil_check(F->un_1919)).name = f_mk_3(&F->uname_1922);
g_code_947 = F->hook_1918;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1919, rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line)), 1, &F->t_1916)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1919, rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line)), 1, &F->t_1916)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1919, rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line)), 1, &F->t_1916)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1919, rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line)), 1, &F->t_1916)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_947 = F->saved_1917;
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1920), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1920), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P890)rt_nil_check((*(P907)rt_nil_check(g_func_sym_961)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_944, F->hook_1918);
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1921), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1921, rt_str("->hook = ", 9)), F->hn_1920), rt_str("; ", 2)), F->aa_1921), rt_str("->ua = &", 8)), (*F->uv_560)), rt_str("; ", 2)), F->aa_1921), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_838(F->ut_561)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_949)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1921, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1921), rt_str(", &", 3)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_559)).cname))->all)), rt_str("decl, ", 6)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_559)).cname))->all)), rt_str(", ", 2)), (*F->nf_562)), rt_str(");", 2)); b_; }));
f_hidden_var_557(&F->aname_1923, g_ty_act_987, &F->aa_1921);
{
F->start_1924 = NULL;
F->start_1924 = f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P897)rt_nil_check(F->s_558)).a, rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line));
F->an_1925 = NULL;
F->an_1925 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->s_558)).line));
(*(P897)rt_nil_check(F->an_1925)).name = f_mk_3(&F->aname_1923);
(*(P897)rt_nil_check((*(P897)rt_nil_check(F->start_1924)).b)).next = F->an_1925;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_848(F->start_1924, 1, &F->t_1916), rt_str(";", 1)); b_; }));
}
f_close_scope_170();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_568(P897 inv_564, rstr *arr_565, rt_int i_566, int mixed_567) {
  struct f_wait_alt_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_564 = inv_564;
F->arr_565 = arr_565;
F->i_566 = i_566;
F->mixed_567 = mixed_567;
F->lv_1926 = NULL;
F->t_1927 = NULL;
F->vt_1928 = NULL;
F->c_1929 = NULL;
F->ro_1930 = RT_R_EUNDEF;
F->fn_1931 = NULL;
F->args_1932 = NULL;
F->slot_1933 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_565), rt_str("[", 1)), f_itos_7(F->i_566)), rt_str("]", 1)));
if (((rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_564)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1931 = (*(P897)rt_nil_check(F->inv_564)).a;
F->args_1932 = (*(P897)rt_nil_check(F->inv_564)).b;
if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_669(F->args_1932, &F->lv_1926, &F->t_1927, &F->c_1929, &F->ro_1930);
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1927)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1934 = NULL;
F->dt_1935 = NULL;
f_lvalue_669((*(P897)rt_nil_check(F->args_1932)).next, &F->dv_1934, &F->dt_1935, &F->c_1929, &F->ro_1930);
f_check_type_224(F->dt_1935, (*(P903)rt_nil_check(F->t_1927)).elem, rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P890)rt_nil_check(F->lv_1926))->all)), rt_str(", &", 3)), (((P890)rt_nil_check(F->dv_1934))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1936 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1937 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_1932)).next, (*(P903)rt_nil_check(F->t_1927)).elem, &F->vt_1928));
f_check_type_224(F->vt_1928, (*(P903)rt_nil_check(F->t_1927)).elem, rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P903)rt_nil_check(F->t_1927)).elem), rt_str(" ", 1)), F->tmp_1936), rt_str(" = ", 3)), F->v_1937), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P890)rt_nil_check(F->lv_1926))->all)), rt_str(", &", 3)), F->tmp_1936), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_1932) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_864(F->args_1932)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1938 = rt_str_copy(f_gexpr_700(F->args_1932, g_ty_int_977, &F->vt_1928));
if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY", 5)) && F->mixed_567)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1938), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1938), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1938), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1933, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_551(F->args_1932)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_1931)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_570(P897 inv_569) {
  struct f_builtin_wait_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_569 = inv_569;
F->lv_1939 = NULL;
F->t_1940 = NULL;
F->c_1941 = NULL;
F->ro_1942 = RT_R_EUNDEF;
F->saved_1943 = NULL;
F->saved_1943 = g_code_947;
F->ok_1944 = RT_R_EUNDEF;
F->ok_1944 = 0;
if (((rt_r_ichk((*(P897)rt_nil_check(F->inv_569)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = f_new_buffer_24();
{ rt_frame xf1945;
if (RT_TRY(xf1945)) {
f_lvalue_669((*(P897)rt_nil_check(F->inv_569)).b, &F->lv_1939, &F->t_1940, &F->c_1941, &F->ro_1942);
F->ok_1944 = (rt_r_ichk((*(P903)rt_nil_check(F->t_1940)).kind) == (((rt_int)12LL)));
RT_POP(xf1945);
} else {
RT_POP(xf1945);
int x1946 = rt_xcur;
if (0 || x1946 == ex_compile_error_1) {
F->ok_1944 = 0;
} else {
rt_raise(x1946);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = F->saved_1943;
F->result_ = rt_r_echk(F->ok_1944);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_575(P897 inv_571, rstr *op_572, rstr *q_573, int is_stmt_574) {
  struct f_wait_op_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_571 = inv_571;
F->op_572 = op_572;
F->q_573 = q_573;
F->is_stmt_574 = is_stmt_574;
F->x_1947 = NULL;
F->x_1947 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->inv_571)).line));
F->f_1948 = NULL;
F->f_1948 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->inv_571)).line));
F->qn_1949 = NULL;
F->qn_1949 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->inv_571)).line));
F->t_1950 = NULL;
(*(P897)rt_nil_check(F->f_1948)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_571)).a)).name))->all), rt_str("_", 1)), (*F->op_572)); b_; }));
(*(P897)rt_nil_check(F->qn_1949)).name = f_mk_3(&(*F->q_573));
(*(P897)rt_nil_check(F->qn_1949)).next = (*(P897)rt_nil_check(F->inv_571)).b;
(*(P897)rt_nil_check(F->x_1947)).a = F->f_1948;
(*(P897)rt_nil_check(F->x_1947)).b = F->qn_1949;
{
F->r_1951 = rt_str_copy(f_gcall_848(F->x_1947, F->is_stmt_574, &F->t_1950));
if ((!F->is_stmt_574)) {
f_check_type_224(F->t_1950, g_ty_bool_978, rt_r_ichk((*(P897)rt_nil_check(F->inv_571)).line));
}
F->result_ = F->r_1951;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_580(P897 s_576, rstr *arr_577, rstr *w_578, rt_int n_579) {
  struct f_user_wait_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_576 = s_576;
F->arr_577 = arr_577;
F->w_578 = w_578;
F->n_579 = n_579;
F->a_1952 = NULL;
F->a_1952 = (*(P897)rt_nil_check(F->s_576)).a;
F->i_1953 = RT_R_IUNDEF;
F->i_1953 = ((rt_int)0LL);
F->tests_1954 = NULL;
F->tests_1954 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1955 = NULL;
F->revokes_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_169();
while ((F->a_1952 != NULL)) {
F->inv_1956 = NULL;
F->inv_1956 = (*(P897)rt_nil_check(F->a_1952)).a;
while ((F->inv_1956 != NULL)) {
if (f_builtin_wait_570(F->inv_1956)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_568(F->inv_1956, &(*F->arr_577), rt_r_ichk(F->i_1953), 1); b_; }));
} else {
F->st_1957 = NULL;
F->st_1957 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->inv_1956)).line));
F->c_1958 = NULL;
F->qt_1959 = NULL;
F->qname_1960 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1961 = NULL;
F->y_1961 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&F->qname_1960));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_577), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1953))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P897)rt_nil_check(F->st_1957)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->inv_1956)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1959 = f_resolve_subtype_257(F->st_1957, &F->c_1958);
{
F->access_1962 = rt_str_copy(f_storage_468(&F->qname_1960, F->qt_1959));
f_init_storage_311(&F->access_1962, F->qt_1959, F->c_1958);
(*(P907)rt_nil_check(F->y_1961)).t = F->qt_1959;
(*(P907)rt_nil_check(F->y_1961)).c = F->c_1958;
f_bind_471(F->y_1961, &F->access_1962);
f_define_160(F->y_1961, rt_r_ichk((*(P897)rt_nil_check(F->inv_1956)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_575(F->inv_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1960, 1), rt_str(";", 1)); b_; }));
F->tests_1954 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->tests_1954))->all), rt_str("if (", 4)), f_wait_op_575(F->inv_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1960, 0)), rt_str(") { ", 4)), f_wait_op_575(F->inv_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1960, 1)), rt_str("; ", 2)), (*F->w_578)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1953))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->revokes_1955))->all), f_wait_op_575(F->inv_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1960, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1953 = rt_add(rt_r_ichk(F->i_1953), ((rt_int)1LL));
F->inv_1956 = (*(P897)rt_nil_check(F->inv_1956)).next;
}
F->a_1952 = (*(P897)rt_nil_check(F->a_1952)).next;
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_578)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P890)rt_nil_check(F->tests_1954))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_578), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_579)), rt_str(", ", 2)), (*F->arr_577)), rt_str("); if (", 7)), (*F->w_578)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_579)), rt_str(", ", 2)), (*F->arr_577)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_578)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_578)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P890)rt_nil_check(F->revokes_1955))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_582(P897 s_581) {
  struct f_st_wait_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_581 = s_581;
F->a_1963 = NULL;
F->a_1963 = (*(P897)rt_nil_check(F->s_581)).a;
F->n_1964 = RT_R_IUNDEF;
F->n_1964 = ((rt_int)0LL);
F->first_1965 = RT_R_EUNDEF;
F->first_1965 = 1;
F->inits_1966 = NULL;
F->inits_1966 = f_new_buffer_24();
F->user_1967 = RT_R_EUNDEF;
F->user_1967 = 0;
F->arr_1968 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1969 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1963 != NULL)) {
F->inv_1970 = NULL;
F->inv_1970 = (*(P897)rt_nil_check(F->a_1963)).a;
F->n_1964 = rt_add(rt_r_ichk(F->n_1964), f_list_len_67((*(P897)rt_nil_check(F->a_1963)).a));
while ((F->inv_1970 != NULL)) {
if ((!f_builtin_wait_570(F->inv_1970))) {
F->user_1967 = 1;
}
F->inv_1970 = (*(P897)rt_nil_check(F->inv_1970)).next;
}
F->a_1963 = (*(P897)rt_nil_check(F->a_1963)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1968), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1964))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1967)) {
f_user_wait_580(F->s_581, &F->arr_1968, &F->w_1969, rt_r_ichk(F->n_1964));
} else {
F->a_1963 = (*(P897)rt_nil_check(F->s_581)).a;
F->n_1964 = ((rt_int)0LL);
while ((F->a_1963 != NULL)) {
F->inv_1971 = NULL;
F->inv_1971 = (*(P897)rt_nil_check(F->a_1963)).a;
while ((F->inv_1971 != NULL)) {
f_put_27(F->inits_1966, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_568(F->inv_1971, &F->arr_1968, rt_r_ichk(F->n_1964), 0); b_; }));
F->n_1964 = rt_add(rt_r_ichk(F->n_1964), ((rt_int)1LL));
F->inv_1971 = (*(P897)rt_nil_check(F->inv_1971)).next;
}
F->a_1963 = (*(P897)rt_nil_check(F->a_1963)).next;
}
f_splice_34(g_code_947, F->inits_1966);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1969), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1964))), rt_str(", ", 2)), F->arr_1968), rt_str(");", 2)); b_; }));
}
F->a_1963 = (*(P897)rt_nil_check(F->s_581)).a;
F->n_1964 = ((rt_int)0LL);
while ((F->a_1963 != NULL)) {
F->conds_1972 = NULL;
F->conds_1972 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1974 = ((rt_int)1LL), hi1975 = f_list_len_67((*(P897)rt_nil_check(F->a_1963)).a);
for (rt_int it1976 = lo1974; it1976 <= hi1975; it1976++) {
F->i_1973 = it1976;
F->conds_1972 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->conds_1972))->all), rt_str(" || ", 4)), F->w_1969), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1964))); b_; }));
F->n_1964 = rt_add(rt_r_ichk(F->n_1964), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1965)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P890)rt_nil_check(F->conds_1972))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P890)rt_nil_check(F->conds_1972))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1965 = 0;
f_gen_body_505((*(P897)rt_nil_check(F->a_1963)).b);
F->a_1963 = (*(P897)rt_nil_check(F->a_1963)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P897 f_call_node_586(rstr *name_583, P897 arg_584, rt_int line_585) {
  struct f_call_node_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_583 = name_583;
F->arg_584 = arg_584;
F->line_585 = line_585;
F->x_1977 = NULL;
F->x_1977 = f_nn_61((((rt_int)10LL)), F->line_585);
F->f_1978 = NULL;
F->f_1978 = f_nn_61((((rt_int)7LL)), F->line_585);
(*(P897)rt_nil_check(F->f_1978)).name = f_mk_3(&(*F->name_583));
(*(P897)rt_nil_check(F->x_1977)).a = F->f_1978;
(*(P897)rt_nil_check(F->x_1977)).b = f_copy_node_739(F->arg_584);
(*(P897)rt_nil_check((*(P897)rt_nil_check(F->x_1977)).b)).next = NULL;
F->result_ = F->x_1977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_588(P897 s_587) {
  struct f_user_region_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_587 = s_587;
F->t_1979 = NULL;
F->f_1980 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1981 = rt_str_copy(f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P897)rt_nil_check(F->s_587)).a, rt_r_ichk((*(P897)rt_nil_check(F->s_587)).line)), 1, &F->t_1979));
F->unlock_1982 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P897)rt_nil_check(F->s_587)).a, rt_r_ichk((*(P897)rt_nil_check(F->s_587)).line)), 1, &F->t_1979)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1981), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1980), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1980), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1980), rt_str("); ", 3)), F->unlock_1982); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_587)).b);
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1980), rt_str("); ", 3)), F->unlock_1982); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1980), rt_str("); ", 3)), F->unlock_1982), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_590(P897 s_589) {
  struct f_st_region_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_589 = s_589;
F->lv_1983 = NULL;
F->t_1984 = NULL;
F->c_1985 = NULL;
F->ro_1986 = RT_R_EUNDEF;
F->lk_1987 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1988 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_669((*(P897)rt_nil_check(F->s_589)).a, &F->lv_1983, &F->t_1984, &F->c_1985, &F->ro_1986);
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_1984)).kind) != (((rt_int)13LL)))) {
f_user_region_588(F->s_589);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1987), rt_str(" = &", 4)), (((P890)rt_nil_check(F->lv_1983))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1987), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1988), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1988), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1988), rt_str("); rt_region_leave(", 19)), F->lk_1987), rt_str(");", 2)); b_; }));
f_gen_body_505((*(P897)rt_nil_check(F->s_589)).b);
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1988), rt_str("); rt_region_leave(", 19)), F->lk_1987), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1988), rt_str("); rt_region_leave(", 19)), F->lk_1987), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P897 f_gparam_593(P897 g_591, rstr *name_592) {
  struct f_gparam_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_591 = g_591;
F->name_592 = name_592;
F->p_1989 = NULL;
F->p_1989 = (*(P897)rt_nil_check(F->g_591)).a;
while ((F->p_1989 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1989)).name))->all), (*F->name_592))) {
F->result_ = F->p_1989;
goto ret_;
}
F->p_1989 = (*(P897)rt_nil_check(F->p_1989)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_bind_sym_595(P897 p_594) {
  struct f_bind_sym_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_594 = p_594;
F->y_1990 = NULL;
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_594)).ival) <= ((rt_int)2LL))) {
F->y_1990 = f_new_sym_173((((rt_int)5LL)), (*(P897)rt_nil_check(F->p_594)).name);
} else {
F->y_1990 = f_new_sym_173((((rt_int)2LL)), (*(P897)rt_nil_check(F->p_594)).name);
}
F->result_ = F->y_1990;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_598(P907 a_596, P907 b_597) {
  struct f_same_binds_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_596 = a_596;
F->b_597 = b_597;
F->x_1991 = NULL;
F->x_1991 = F->a_596;
F->y_1992 = NULL;
F->y_1992 = F->b_597;
while (((F->x_1991 != NULL) && (F->y_1992 != NULL))) {
if (((!rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->x_1991)).name))->all), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_1992)).name))->all))) || (!f_same_binding_601(F->x_1991, F->y_1992)))) {
F->result_ = 0;
goto ret_;
}
F->x_1991 = (*(P907)rt_nil_check(F->x_1991)).mnext;
F->y_1992 = (*(P907)rt_nil_check(F->y_1992)).mnext;
}
F->result_ = ((F->x_1991 == NULL) && (F->y_1992 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_601(P907 a_599, P907 b_600) {
  struct f_same_binding_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_599 = a_599;
F->b_600 = b_600;
if ((rt_r_ichk((*(P907)rt_nil_check(F->a_599)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P907)rt_nil_check(F->b_600)).kind) == (((rt_int)5LL))) && f_same_213((*(P907)rt_nil_check(F->a_599)).t, (*(P907)rt_nil_check(F->b_600)).t));
goto ret_;
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->a_599)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P907)rt_nil_check(F->a_599)).hasmv))) {
F->result_ = (rt_r_echk((*(P907)rt_nil_check(F->b_600)).hasmv) && (rt_r_ichk((*(P907)rt_nil_check(F->a_599)).mvalue) == rt_r_ichk((*(P907)rt_nil_check(F->b_600)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->a_599)).kind) == (((rt_int)2LL))) && ((*(P907)rt_nil_check(F->a_599)).mv != NULL))) {
if (((((*(P907)rt_nil_check(F->b_600)).mv == NULL) || (rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->a_599)).mv)).kind) != rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_600)).mv)).kind))) || (!f_same_213((*(P907)rt_nil_check(F->a_599)).t, (*(P907)rt_nil_check(F->b_600)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->a_599)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P890)rt_nil_check((*(P916)rt_nil_check((*(P907)rt_nil_check(F->a_599)).mv)).s))->all), (((P890)rt_nil_check((*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_600)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->a_599)).mv)).i) == rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_600)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P907)rt_nil_check(F->a_599)).cname != NULL) && ((*(P907)rt_nil_check(F->b_600)).cname != NULL)) && rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->a_599)).cname))->all), (((P890)rt_nil_check((*(P907)rt_nil_check(F->b_600)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_tt_binds_606(P897 gd_602, P897 formals_603, P897 actuals_604, rt_int line_605) {
  struct f_tt_binds_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_602 = gd_602;
F->formals_603 = formals_603;
F->actuals_604 = actuals_604;
F->line_605 = line_605;
F->f_1993 = NULL;
F->f_1993 = F->formals_603;
F->a_1994 = NULL;
F->a_1994 = F->actuals_604;
F->binds_1995 = NULL;
F->c_1996 = NULL;
F->at_1997 = NULL;
while (((F->f_1993 != NULL) && (F->a_1994 != NULL))) {
F->p_1998 = NULL;
F->p_1998 = f_gparam_593(F->gd_602, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->f_1993)).name))->all));
F->b_1999 = NULL;
if ((F->p_1998 == NULL)) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->f_1993)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1999 = f_bind_sym_595(F->p_1998);
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->a_1994)).kind) >= (((rt_int)70LL)))) {
(*(P907)rt_nil_check(F->b_1999)).t = f_resolve_subtype_257(F->a_1994, &F->c_1996);
} else {
F->st_2000 = NULL;
F->st_2000 = f_nn_61((((rt_int)80LL)), F->line_605);
(*(P897)rt_nil_check(F->st_2000)).name = (*(P897)rt_nil_check(F->a_1994)).name;
(*(P907)rt_nil_check(F->b_1999)).t = f_resolve_subtype_257(F->st_2000, &F->c_1996);
}
(*(P907)rt_nil_check(F->b_1999)).c = F->c_1996;
if ((((*(P897)rt_nil_check(F->p_1998)).b != NULL) && (!f_type_allowed_610((*(P907)rt_nil_check(F->b_1999)).t, (*(P897)rt_nil_check(F->p_1998)).b, F->binds_1995)))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1998)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->a_1994)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1998)).name))->all)); b_; }));
}
F->b_1999 = f_copy_sym_401(f_pick_operation_621(rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival), &(((P890)rt_nil_check((*(P897)rt_nil_check(F->a_1994)).name))->all), (*(P897)rt_nil_check(F->p_1998)).b, (*(P897)rt_nil_check(F->p_1998)).a, F->binds_1995, F->line_605));
(*(P907)rt_nil_check(F->b_1999)).name = (*(P897)rt_nil_check(F->p_1998)).name;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) == ((rt_int)8LL)))) {
F->ok_2001 = RT_R_EUNDEF;
(*(P907)rt_nil_check(F->b_1999)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700(F->a_1994, NULL, &F->at_1997)), rt_str(")", 1)); b_; }));
(*(P907)rt_nil_check(F->b_1999)).t = F->at_1997;
if ((((rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P903)rt_nil_check(F->at_1997)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P897)rt_nil_check(F->p_1998)).ival) == ((rt_int)8LL)) && ((*(P903)rt_nil_check(f_base_of_215(F->at_1997))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1998)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P907)rt_nil_check(F->b_1999)).mv = f_meval_343(F->a_1994, &F->ok_2001);
if ((!rt_r_echk(F->ok_2001))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1998)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_1999)).mv)).kind) == (((rt_int)4LL)))) {
(*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_1999)).mv)).i = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(F->at_1997))).lits, &(((P890)rt_nil_check((*(P916)rt_nil_check((*(P907)rt_nil_check(F->b_1999)).mv)).s))->all));
}
} else {
F->ok_2002 = RT_R_EUNDEF;
(*(P907)rt_nil_check(F->b_1999)).t = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_1998)).a, &F->c_1996);
(*(P907)rt_nil_check(F->b_1999)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_205((*(P907)rt_nil_check(F->b_1999)).t, F->c_1996, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->a_1994, (*(P907)rt_nil_check(F->b_1999)).t, &F->at_1997); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1997, (*(P907)rt_nil_check(F->b_1999)).t, F->line_605);
(*(P907)rt_nil_check(F->b_1999)).mvalue = f_manifest_334(F->a_1994, &F->ok_2002);
(*(P907)rt_nil_check(F->b_1999)).hasmv = rt_r_echk(F->ok_2002);
(*(P907)rt_nil_check(F->b_1999)).mv = f_meval_343(F->a_1994, &F->ok_2002);
if ((!rt_r_echk(F->ok_2002))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_1998)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P907)rt_nil_check(F->b_1999)).mnext = F->binds_1995;
F->binds_1995 = F->b_1999;
F->f_1993 = (*(P897)rt_nil_check(F->f_1993)).next;
F->a_1994 = (*(P897)rt_nil_check(F->a_1994)).next;
}
F->result_ = F->binds_1995;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_610(P903 t_607, P897 items_608, P907 binds_609) {
  struct f_type_allowed_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_607 = t_607;
F->items_608 = items_608;
F->binds_609 = binds_609;
F->it_2003 = NULL;
F->it_2003 = F->items_608;
F->b_2004 = NULL;
F->b_2004 = f_base_of_215(F->t_607);
while ((F->it_2003 != NULL)) {
if ((((rt_r_ichk((*(P897)rt_nil_check(F->it_2003)).kind) == (((rt_int)80LL))) && ((*(P897)rt_nil_check(F->it_2003)).b == NULL)) && (f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2003)).name))->all)) == NULL))) {
F->w_2005 = rt_str_copy((((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2003)).name))->all));
if (((((((((((rt_str_eq(F->w_2005, rt_str("INT", 3)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2005, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2005, rt_str("BOOL", 4)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2005, rt_str("ENUM", 4)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2005, rt_str("STRING", 6)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2005, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2005, rt_str("RECORD", 6)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2005, rt_str("UNION", 5)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2005, rt_str("SET", 3)) && (rt_r_ichk((*(P903)rt_nil_check(F->b_2004)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2005, rt_str("ASCII", 5)) && f_same_213(F->t_607, g_ty_ascii_980)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2006 = NULL;
if (f_same_213(f_resolve_in_binds_614(F->it_2003, F->binds_609, &F->c_2006), F->t_607)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2003 = (*(P897)rt_nil_check(F->it_2003)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_resolve_in_binds_614(P897 st_611, P907 binds_612, P899 *c_613) {
  struct f_resolve_in_binds_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_611 = st_611;
F->binds_612 = binds_612;
F->c_613 = c_613;
F->c_613v = *F->c_613;
F->b_2007 = NULL;
F->b_2007 = F->binds_612;
F->t_2008 = NULL;
f_open_scope_169();
while ((F->b_2007 != NULL)) {
F->z_2009 = NULL;
F->z_2009 = f_copy_sym_401(F->b_2007);
f_define_160(F->z_2009, rt_r_ichk((*(P897)rt_nil_check(F->st_611)).line));
F->b_2007 = (*(P907)rt_nil_check(F->b_2007)).mnext;
}
F->t_2008 = f_resolve_subtype_257(F->st_611, &F->c_613v);
f_close_scope_170();
F->result_ = F->t_2008;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_613) = F->c_613v;
  RT_FPOP();
  return F->result_;
}

static P907 f_pick_operation_621(rt_int kind_615, rstr *name_616, P897 sig_617, P897 res_618, P907 binds_619, rt_int line_620) {
  struct f_pick_operation_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_615 = kind_615;
F->name_616 = name_616;
F->sig_617 = sig_617;
F->res_618 = res_618;
F->binds_619 = binds_619;
F->line_620 = line_620;
F->y_2010 = NULL;
F->c_2011 = NULL;
F->want_2012 = RT_R_IUNDEF;
F->want_2012 = (((rt_int)4LL));
if ((F->kind_615 == ((rt_int)4LL))) {
F->want_2012 = (((rt_int)3LL));
} else if ((F->kind_615 == ((rt_int)5LL))) {
F->want_2012 = (((rt_int)9LL));
}
{ rt_int lo2014 = ((rt_int)1LL), hi2015 = ((rt_int)3LL);
for (rt_int it2016 = lo2014; it2016 <= hi2015; it2016++) {
F->pass_2013 = it2016;
F->y_2010 = f_overload_chain_828(&(*F->name_616), F->pass_2013);
while ((F->y_2010 != NULL)) {
if (((rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2010)).name))->all), (*F->name_616)) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_2010)).kind) == rt_r_ichk(F->want_2012)) || ((F->kind_615 == ((rt_int)0LL)) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_2010)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2010)).kind) == (((rt_int)3LL))))))) && ((F->pass_2013 != ((rt_int)1LL)) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2010)).depth) >= rt_r_ichk(g_gdepth_966))))) {
F->ok_2017 = RT_R_EUNDEF;
F->ok_2017 = 1;
if (((F->sig_617 != NULL) || (F->kind_615 == ((rt_int)0LL)))) {
F->s_2018 = NULL;
F->s_2018 = F->sig_617;
F->pm_2019 = NULL;
F->pm_2019 = (*(P907)rt_nil_check(F->y_2010)).params;
while (((rt_r_echk(F->ok_2017) && (F->s_2018 != NULL)) && (F->pm_2019 != NULL))) {
F->ok_2017 = f_same_213(f_resolve_in_binds_614(F->s_2018, F->binds_619, &F->c_2011), (*(P909)rt_nil_check(F->pm_2019)).t);
F->s_2018 = (*(P897)rt_nil_check(F->s_2018)).next;
F->pm_2019 = (*(P909)rt_nil_check(F->pm_2019)).next;
}
F->ok_2017 = ((rt_r_echk(F->ok_2017) && (F->s_2018 == NULL)) && (F->pm_2019 == NULL));
}
if ((rt_r_echk(F->ok_2017) && (F->res_618 != NULL))) {
F->ok_2017 = ((rt_r_ichk((*(P907)rt_nil_check(F->y_2010)).kind) == (((rt_int)3LL))) && f_same_213(f_resolve_in_binds_614(F->res_618, F->binds_619, &F->c_2011), (*(P907)rt_nil_check(F->y_2010)).result));
}
if (rt_r_echk(F->ok_2017)) {
F->result_ = F->y_2010;
goto ret_;
}
}
F->y_2010 = (*(P907)rt_nil_check(F->y_2010)).chain;
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

static P907 f_need_binds_627(P897 gd_624, P907 binds_625, rt_int line_626) {
  struct f_need_binds_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_624 = gd_624;
F->binds_625 = binds_625;
F->line_626 = line_626;
F->it_2020 = NULL;
F->it_2020 = (*(P897)rt_nil_check(F->gd_624)).d;
F->r_2021 = NULL;
F->r_2021 = F->binds_625;
while ((F->it_2020 != NULL)) {
F->found_2022 = RT_R_EUNDEF;
F->found_2022 = 0;
F->y_2023 = NULL;
F->y_2023 = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2020)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2023 != NULL) && (!rt_r_echk(F->found_2022)))) {
if ((rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2023)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2020)).name))->all)) && (((rt_r_ichk((*(P907)rt_nil_check(F->y_2023)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2023)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2023)).kind) == (((rt_int)9LL)))))) {
F->found_2022 = 1;
}
F->y_2023 = (*(P907)rt_nil_check(F->y_2023)).chain;
}
if (rt_r_echk(F->found_2022)) {
F->z_2024 = NULL;
F->z_2024 = f_copy_sym_401(f_pick_operation_621(rt_r_ichk((*(P897)rt_nil_check(F->it_2020)).ival), &(((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2020)).name))->all), (*(P897)rt_nil_check(F->it_2020)).b, (*(P897)rt_nil_check(F->it_2020)).a, F->r_2021, F->line_626));
(*(P907)rt_nil_check(F->z_2024)).mnext = F->r_2021;
F->r_2021 = F->z_2024;
} else if ((!f_is_definable_130(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2020)).name))->all)))) {
f_fail_23(F->line_626, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P890)rt_nil_check((*(P897)rt_nil_check(F->it_2020)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2020 = (*(P897)rt_nil_check(F->it_2020)).next;
}
F->result_ = F->r_2021;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_629(P897 st_628) {
  struct f_generic_use_629fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_628 = st_628;
if ((rt_r_ichk((*(P897)rt_nil_check(F->st_628)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P907)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P897)rt_nil_check(F->st_628)).kind) == (((rt_int)80LL))) && ((*(P897)rt_nil_check(F->st_628)).a != NULL)) && (f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->st_628)).name))->all)) != NULL)) && ((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->st_628)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_infer_from_634(P897 gd_630, P897 pat_631, P903 t_632, P907 known_633) {
  struct f_infer_from_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_630 = gd_630;
F->pat_631 = pat_631;
F->t_632 = t_632;
F->known_633 = known_633;
F->binds_2025 = NULL;
F->binds_2025 = F->known_633;
F->e_2026 = NULL;
F->e_2026 = (*(P897)rt_nil_check(F->pat_631)).a;
F->tp_2027 = NULL;
if (((F->t_632 == NULL) || ((*(P903)rt_nil_check(F->t_632)).gen == NULL))) {
F->result_ = F->binds_2025;
goto ret_;
}
F->tp_2027 = (*(P897)rt_nil_check((*(P907)rt_nil_check((*(P903)rt_nil_check(F->t_632)).gen)).decl)).a;
if ((rt_r_ichk((*(P897)rt_nil_check(F->pat_631)).kind) == (((rt_int)78LL)))) {
F->e_2026 = f_copy_node_739((*(P897)rt_nil_check(F->pat_631)).a);
(*(P897)rt_nil_check(F->e_2026)).next = NULL;
}
while (((F->e_2026 != NULL) && (F->tp_2027 != NULL))) {
F->nm_2028 = NULL;
if (((rt_r_ichk((*(P897)rt_nil_check(F->e_2026)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->e_2026)).kind) == (((rt_int)80LL))))) {
F->nm_2028 = (*(P897)rt_nil_check(F->e_2026)).name;
}
if ((((F->nm_2028 != NULL) && (f_gparam_593(F->gd_630, &(((P890)rt_nil_check(F->nm_2028))->all)) != NULL)) && ((*(P897)rt_nil_check(f_gparam_593(F->gd_630, &(((P890)rt_nil_check(F->nm_2028))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2029 = NULL;
F->q_2029 = F->binds_2025;
F->have_2030 = RT_R_EUNDEF;
F->have_2030 = 0;
while ((F->q_2029 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->q_2029)).name))->all), (((P890)rt_nil_check(F->nm_2028))->all))) {
F->have_2030 = 1;
}
F->q_2029 = (*(P907)rt_nil_check(F->q_2029)).mnext;
}
if ((!rt_r_echk(F->have_2030))) {
F->g_2031 = NULL;
F->g_2031 = (*(P903)rt_nil_check(F->t_632)).gbinds;
while ((F->g_2031 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->g_2031)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->tp_2027)).name))->all))) {
F->b_2032 = NULL;
F->b_2032 = f_bind_sym_595(f_gparam_593(F->gd_630, &(((P890)rt_nil_check(F->nm_2028))->all)));
(*(P907)rt_nil_check(F->b_2032)).t = (*(P907)rt_nil_check(F->g_2031)).t;
(*(P907)rt_nil_check(F->b_2032)).c = (*(P907)rt_nil_check(F->g_2031)).c;
(*(P907)rt_nil_check(F->b_2032)).mnext = F->binds_2025;
F->binds_2025 = F->b_2032;
}
F->g_2031 = (*(P907)rt_nil_check(F->g_2031)).mnext;
}
}
}
F->e_2026 = (*(P897)rt_nil_check(F->e_2026)).next;
F->tp_2027 = (*(P897)rt_nil_check(F->tp_2027)).next;
}
F->result_ = F->binds_2025;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_instantiate_type_640(P907 g_635, P897 tt_636, P897 args_637, P899 *c_638, rt_int line_639) {
  struct f_instantiate_type_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_635 = g_635;
F->tt_636 = tt_636;
F->args_637 = args_637;
F->c_638 = c_638;
F->c_638v = *F->c_638;
F->line_639 = line_639;
F->gd_2033 = NULL;
F->gd_2033 = (*(P907)rt_nil_check(F->g_635)).decl;
F->pat_2034 = NULL;
F->pat_2034 = (*(P897)rt_nil_check(F->gd_2033)).b;
F->binds_2035 = NULL;
F->binds_2035 = f_tt_binds_606(F->gd_2033, (*(P897)rt_nil_check(F->pat_2034)).e, F->tt_636, F->line_639);
F->inst_2036 = NULL;
F->inst_2036 = g_all_insts_935;
F->t_2037 = NULL;
F->saved_caps_2038 = NULL;
F->saved_caps_2038 = g_caps_952;
F->saved_env_2039 = NULL;
F->saved_env_2039 = g_genv_934;
F->saved_gdepth_2040 = RT_R_IUNDEF;
F->saved_gdepth_2040 = rt_r_ichk(g_gdepth_966);
F->c_638v = f_new_cons_176();
(*(P899)rt_nil_check(F->c_638v)).args = F->args_637;
while ((F->inst_2036 != NULL)) {
if ((((*(P907)rt_nil_check(F->inst_2036)).decl == F->pat_2034) && f_same_binds_598((*(P907)rt_nil_check(F->inst_2036)).members, F->binds_2035))) {
F->result_ = (*(P907)rt_nil_check(F->inst_2036)).t;
goto ret_;
}
F->inst_2036 = (*(P907)rt_nil_check(F->inst_2036)).insts;
}
f_open_scope_169();
{
F->b_2041 = NULL;
F->b_2041 = F->binds_2035;
while ((F->b_2041 != NULL)) {
f_define_160(F->b_2041, F->line_639);
F->b_2041 = (*(P907)rt_nil_check(F->b_2041)).mnext;
}
}
g_caps_952 = NULL;
g_genv_934 = (*(P907)rt_nil_check(F->g_635)).env;
g_gdepth_966 = rt_r_ichk(g_depth_936);
{
F->y_2042 = NULL;
F->y_2042 = f_new_sym_173((((rt_int)5LL)), (*(P897)rt_nil_check(F->pat_2034)).name);
F->yc_2043 = NULL;
(*(P907)rt_nil_check(F->y_2042)).decl = F->pat_2034;
if ((rt_r_ichk((*(P897)rt_nil_check(F->pat_2034)).kind) == (((rt_int)44LL)))) {
F->t_2037 = f_new_typ_175((((rt_int)8LL)));
(*(P903)rt_nil_check(F->t_2037)).name = (*(P897)rt_nil_check(F->pat_2034)).name;
(*(P903)rt_nil_check(F->t_2037)).decl = F->pat_2034;
(*(P907)rt_nil_check(F->y_2042)).t = F->t_2037;
f_define_160(F->y_2042, F->line_639);
f_finish_ptr_427(F->t_2037);
} else {
f_define_160(F->y_2042, F->line_639);
F->t_2037 = f_new_type_307(F->y_2042, f_nn_61((((rt_int)80LL)), F->line_639), &F->yc_2043);
}
}
g_caps_952 = F->saved_caps_2038;
g_genv_934 = F->saved_env_2039;
g_gdepth_966 = rt_r_ichk(F->saved_gdepth_2040);
(*(P903)rt_nil_check(F->t_2037)).gen = F->g_635;
(*(P903)rt_nil_check(F->t_2037)).gbinds = F->binds_2035;
f_close_scope_170();
{ R908 *cell2044 = rt_alloc(sizeof(R908));
(*cell2044).name = NULL;
(*cell2044).t = NULL;
(*cell2044).c = NULL;
(*cell2044).access = NULL;
(*cell2044).cname = NULL;
(*cell2044).st = NULL;
(*cell2044).decl = NULL;
(*cell2044).params = NULL;
(*cell2044).result = NULL;
(*cell2044).members = NULL;
(*cell2044).mnext = NULL;
(*cell2044).binds = NULL;
(*cell2044).insts = NULL;
(*cell2044).env = NULL;
(*cell2044).chain = NULL;
(*cell2044).stack = NULL;
(*cell2044).owner = NULL;
(*cell2044).gctx = NULL;
(*cell2044).mv = NULL;
(*cell2044).reqs = NULL;
(*cell2044).home = NULL;
(*cell2044).capn = NULL;
(*cell2044).tbinds = NULL;
F->inst_2036 = cell2044;
}
(*(P907)rt_nil_check(F->inst_2036)).kind = (((rt_int)5LL));
(*(P907)rt_nil_check(F->inst_2036)).name = (*(P907)rt_nil_check(F->g_635)).name;
(*(P907)rt_nil_check(F->inst_2036)).decl = F->pat_2034;
(*(P907)rt_nil_check(F->inst_2036)).t = F->t_2037;
(*(P907)rt_nil_check(F->inst_2036)).members = F->binds_2035;
(*(P907)rt_nil_check(F->inst_2036)).insts = g_all_insts_935;
g_all_insts_935 = F->inst_2036;
F->result_ = F->t_2037;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_638) = F->c_638v;
  RT_FPOP();
  return F->result_;
}

static P907 f_instantiate_645(P907 g_641, P897 tt_642, P897 args_643, rt_int line_644) {
  struct f_instantiate_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_641 = g_641;
F->tt_642 = tt_642;
F->args_643 = args_643;
F->line_644 = line_644;
F->gd_2045 = NULL;
F->gd_2045 = (*(P907)rt_nil_check(F->g_641)).decl;
F->pat_2046 = NULL;
F->pat_2046 = (*(P897)rt_nil_check(F->gd_2045)).b;
F->binds_2047 = NULL;
F->f_2048 = NULL;
F->f_2048 = (*(P897)rt_nil_check(F->pat_2046)).e;
F->a_2049 = NULL;
F->a_2049 = F->tt_642;
F->fp_2050 = NULL;
F->fp_2050 = (*(P897)rt_nil_check(F->pat_2046)).a;
F->inst_2051 = NULL;
F->at_2052 = NULL;
F->c_2053 = NULL;
F->saved_fctx_2054 = NULL;
F->saved_fctx_2054 = g_fctx_951;
F->saved_in_2055 = RT_R_EUNDEF;
F->saved_in_2055 = rt_r_echk(g_in_func_949);
F->saved_level_2056 = RT_R_IUNDEF;
F->saved_level_2056 = rt_r_ichk(g_cur_level_950);
F->saved_sym_2057 = NULL;
F->saved_sym_2057 = g_func_sym_961;
F->saved_code_2058 = NULL;
F->saved_code_2058 = g_code_947;
F->saved_env_2059 = NULL;
F->saved_env_2059 = g_genv_934;
F->saved_gdepth_2060 = RT_R_IUNDEF;
F->saved_gdepth_2060 = rt_r_ichk(g_gdepth_966);
F->binds_2047 = f_tt_binds_606(F->gd_2045, F->f_2048, F->a_2049, F->line_644);
F->a_2049 = F->args_643;
while (((F->fp_2050 != NULL) && (F->a_2049 != NULL))) {
if (f_generic_use_629((*(P897)rt_nil_check(F->fp_2050)).a)) {
F->v_2061 = rt_str_copy(f_gexpr_700(F->a_2049, NULL, &F->at_2052));
F->binds_2047 = f_infer_from_634(F->gd_2045, (*(P897)rt_nil_check(F->fp_2050)).a, F->at_2052, F->binds_2047);
} else if ((((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).kind) == (((rt_int)80LL))) && (f_gparam_593(F->gd_2045, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)) != NULL)) && ((*(P897)rt_nil_check(f_gparam_593(F->gd_2045, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2062 = RT_R_EUNDEF;
F->known_2062 = 0;
F->q_2063 = NULL;
F->q_2063 = F->binds_2047;
while ((F->q_2063 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->q_2063)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all))) {
F->known_2062 = 1;
}
F->q_2063 = (*(P907)rt_nil_check(F->q_2063)).mnext;
}
if ((!rt_r_echk(F->known_2062))) {
F->b_2064 = NULL;
F->b_2064 = f_bind_sym_595(f_gparam_593(F->gd_2045, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)));
F->v_2065 = rt_str_copy(f_gexpr_700(F->a_2049, NULL, &F->at_2052));
(*(P907)rt_nil_check(F->b_2064)).t = F->at_2052;
(*(P907)rt_nil_check(F->b_2064)).c = g_no_cons_991;
if ((((*(P897)rt_nil_check(f_gparam_593(F->gd_2045, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)))).b != NULL) && (!f_type_allowed_610(F->at_2052, (*(P897)rt_nil_check(f_gparam_593(F->gd_2045, &(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)))).b, F->binds_2047)))) {
f_fail_23(F->line_644, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2050)).a)).name))->all)); b_; }));
}
(*(P907)rt_nil_check(F->b_2064)).mnext = F->binds_2047;
F->binds_2047 = F->b_2064;
}
}
F->fp_2050 = (*(P897)rt_nil_check(F->fp_2050)).next;
F->a_2049 = (*(P897)rt_nil_check(F->a_2049)).next;
}
F->binds_2047 = f_need_binds_627(F->gd_2045, F->binds_2047, F->line_644);
F->inst_2051 = g_all_insts_935;
while ((F->inst_2051 != NULL)) {
if ((((*(P907)rt_nil_check(F->inst_2051)).decl == F->pat_2046) && f_same_binds_598((*(P907)rt_nil_check(F->inst_2051)).members, F->binds_2047))) {
F->result_ = F->inst_2051;
goto ret_;
}
F->inst_2051 = (*(P907)rt_nil_check(F->inst_2051)).insts;
}
g_fctx_951 = (*(P907)rt_nil_check(F->g_641)).gctx;
g_in_func_949 = (rt_r_ichk((*(P907)rt_nil_check(F->g_641)).level) > ((rt_int)0LL));
g_cur_level_950 = rt_r_ichk((*(P907)rt_nil_check(F->g_641)).level);
g_func_sym_961 = (*(P907)rt_nil_check(F->g_641)).owner;
g_code_947 = f_new_buffer_24();
f_open_scope_169();
g_gdepth_966 = rt_r_ichk(g_depth_936);
{
F->b_2066 = NULL;
F->b_2066 = F->binds_2047;
while ((F->b_2066 != NULL)) {
f_define_160(F->b_2066, F->line_644);
F->b_2066 = (*(P907)rt_nil_check(F->b_2066)).mnext;
}
}
g_genv_934 = (*(P907)rt_nil_check(F->g_641)).env;
F->inst_2051 = f_build_subprogram_454(F->pat_2046);
(*(P907)rt_nil_check(F->inst_2051)).members = F->binds_2047;
(*(P907)rt_nil_check(F->inst_2051)).insts = g_all_insts_935;
g_all_insts_935 = F->inst_2051;
f_define_160(F->inst_2051, F->line_644);
f_gen_subprogram_484(F->pat_2046, F->inst_2051);
f_close_scope_170();
g_fctx_951 = F->saved_fctx_2054;
g_in_func_949 = rt_r_echk(F->saved_in_2055);
g_cur_level_950 = rt_r_ichk(F->saved_level_2056);
g_func_sym_961 = F->saved_sym_2057;
g_code_947 = F->saved_code_2058;
g_genv_934 = F->saved_env_2059;
g_gdepth_966 = rt_r_ichk(F->saved_gdepth_2060);
F->result_ = F->inst_2051;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_647(P907 y_646) {
  struct f_access_of_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_646 = y_646;
F->p_2067 = NULL;
F->p_2067 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_646)).level) <= ((rt_int)0LL))) {
F->result_ = (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_646)).access))->all);
goto ret_;
}
{ rt_int lo2069 = ((rt_int)1LL), hi2070 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P907)rt_nil_check(F->y_646)).level));
for (rt_int it2071 = lo2069; it2071 <= hi2070; it2071++) {
F->i_2068 = it2071;
F->p_2067 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->p_2067))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P907)rt_nil_check(F->y_646)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P890)rt_nil_check(F->p_2067))->all)), rt_str("->", 2)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_646)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->p_2067))->all), rt_str("->", 2)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_646)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_import_of_650(P897 l_648, rstr *name_649) {
  struct f_import_of_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_648 = l_648;
F->name_649 = name_649;
F->p_2072 = NULL;
F->p_2072 = F->l_648;
while ((F->p_2072 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2072)).name))->all), (*F->name_649))) {
F->result_ = F->p_2072;
goto ret_;
}
F->p_2072 = (*(P897)rt_nil_check(F->p_2072)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_653(P907 y_651, rt_int line_652) {
  struct f_check_import_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_651 = y_651;
F->line_652 = line_652;
F->c_2073 = NULL;
F->c_2073 = g_fctx_951;
F->ro_2074 = RT_R_EUNDEF;
F->ro_2074 = 0;
while (((F->c_2073 != NULL) && (rt_r_ichk((*(P907)rt_nil_check(F->y_651)).depth) < rt_r_ichk((*(P914)rt_nil_check(F->c_2073)).depth)))) {
if ((!rt_r_echk((*(P914)rt_nil_check(F->c_2073)).all_imp))) {
F->imp_2075 = NULL;
F->imp_2075 = f_import_of_650((*(P914)rt_nil_check(F->c_2073)).imps, &(((P890)rt_nil_check((*(P907)rt_nil_check(F->y_651)).name))->all));
if ((F->imp_2075 == NULL)) {
f_fail_23(F->line_652, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_651)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->imp_2075)).ival) == ((rt_int)1LL))) {
F->ro_2074 = 1;
}
}
F->c_2073 = (*(P914)rt_nil_check(F->c_2073)).next;
}
F->result_ = rt_r_echk(F->ro_2074);
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
F->r_2076 = NULL;
F->r_2076 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2078 = ((rt_int)2LL), hi2079 = rt_sub(((rt_int)(((*F->s_654)).len)), ((rt_int)1LL));
for (rt_int it2080 = lo2078; it2080 <= hi2079; it2080++) {
F->i_2077 = it2080;
if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2077)) == 42)) {
F->r_2076 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_2076))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2077)) == 44)) {
F->r_2076 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_2076))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2077)) == 46)) {
F->r_2076 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_2076))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P890)rt_nil_check(F->r_2076))->all);
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

static rstr f_cell_deref_658(P903 t_656, rstr *p_657) {
  struct f_cell_deref_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_656 = t_656;
F->p_657 = p_657;
if ((((*(P903)rt_nil_check(F->t_656)).decl != NULL) && ((*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_656)).decl)).b != NULL))) {
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

static rstr f_deref_661(rstr *base_659, P903 t_660) {
  struct f_deref_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_659 = base_659;
F->t_660 = t_660;
if ((((*(P903)rt_nil_check(F->t_660)).decl != NULL) && ((*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_660)).decl)).b != NULL))) {
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

static int f_is_lvalue_663(P897 e_662) {
  struct f_is_lvalue_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_662 = e_662;
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_662)).kind) == (((rt_int)7LL)))) {
F->y_2081 = NULL;
F->y_2081 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_662)).name))->all));
F->result_ = ((F->y_2081 != NULL) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_2081)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P907)rt_nil_check(F->y_2081)).kind) == (((rt_int)2LL))) && ((*(P907)rt_nil_check(F->y_2081)).mv == NULL)) && (!rt_r_echk((*(P907)rt_nil_check(F->y_2081)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_662)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_663((*(P897)rt_nil_check(F->e_662)).a);
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_662)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_662)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_663((*(P897)rt_nil_check(F->e_662)).a));
goto ret_;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_662)).kind) == (((rt_int)10LL)))) {
if ((((*(P897)rt_nil_check(F->e_662)).b != NULL) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_662)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_663((*(P897)rt_nil_check(F->e_662)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_669(P897 e_664, P890 *code_665, P903 *t_666, P899 *c_667, int *ro_668) {
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
F->base_2082 = NULL;
F->bt_2083 = NULL;
F->bc_2084 = NULL;
if ((rt_r_ichk((*(P897)rt_nil_check(F->e_664)).kind) == (((rt_int)7LL)))) {
F->y_2085 = NULL;
F->y_2085 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_664)).name))->all));
if ((F->y_2085 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_664)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_2085)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2085)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_664)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_665v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_647(F->y_2085); b_; }));
F->t_666v = (*(P907)rt_nil_check(F->y_2085)).t;
F->c_667v = (*(P907)rt_nil_check(F->y_2085)).c;
F->ro_668v = rt_r_echk((*(P907)rt_nil_check(F->y_2085)).ro_flag);
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_2085)).kind) == (((rt_int)1LL))) && f_check_import_653(F->y_2085, rt_r_ichk((*(P897)rt_nil_check(F->e_664)).line)))) {
F->ro_668v = 1;
}
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_664)).kind) == (((rt_int)17LL)))) {
f_lvalue_669((*(P897)rt_nil_check(F->e_664)).a, &F->code_665v, &F->t_666v, &F->c_667v, &F->ro_668v);
} else if (((((rt_r_ichk((*(P897)rt_nil_check(F->e_664)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_664)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_664)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_665v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_836((*(P897)rt_nil_check(F->e_664)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_664)).line), &F->t_666v); b_; }));
F->c_667v = g_no_cons_991;
F->ro_668v = 0;
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_664)).kind) == (((rt_int)11LL)))) {
f_lvalue_669((*(P897)rt_nil_check(F->e_664)).a, &F->base_2082, &F->bt_2083, &F->bc_2084, &F->ro_668v);
f_select_on_677(&(((P890)rt_nil_check(F->base_2082))->all), F->bt_2083, F->e_664, &F->ro_668v, &F->code_665v, &F->t_666v, &F->c_667v);
} else if ((rt_r_ichk((*(P897)rt_nil_check(F->e_664)).kind) == (((rt_int)10LL)))) {
f_lvalue_669((*(P897)rt_nil_check(F->e_664)).a, &F->base_2082, &F->bt_2083, &F->bc_2084, &F->ro_668v);
f_index_on_694(&(((P890)rt_nil_check(F->base_2082))->all), F->bt_2083, F->e_664, &F->ro_668v, 1, &F->code_665v, &F->t_666v, &F->c_667v);
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_665) = F->code_665v;  (*F->t_666) = F->t_666v;  (*F->c_667) = F->c_667v;  if (!rt_r_undef_BOOL(F->ro_668v)) (*F->ro_668) = F->ro_668v;
  RT_FPOP();
  return;
}

static void f_select_on_677(rstr *base_670, P903 bt_671, P897 e_672, int *ro_673, P890 *code_674, P903 *t_675, P899 *c_676) {
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
F->c_676v = g_no_cons_991;
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_671)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->bt_671);
(*F->ro_673) = 0;
if (((*(P903)rt_nil_check(F->bt_671)).decl != NULL)) {
F->p_2086 = NULL;
F->p_2086 = (*(P897)rt_nil_check((*(P903)rt_nil_check(F->bt_671)).decl)).b;
while ((F->p_2086 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2086)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))) {
F->pc_2087 = NULL;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->bt_671)), rt_str(")rt_nil_check(", 14)), (*F->base_670)), rt_str("))->p_", 6)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2086)).name))->all))), rt_str(")", 1)); b_; }));
F->t_675v = f_resolve_subtype_257((*(P897)rt_nil_check(F->p_2086)).a, &F->pc_2087);
(*F->ro_673) = 1;
goto ret_;
}
F->p_2086 = (*(P897)rt_nil_check(F->p_2086)).next;
}
}
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_670), F->bt_671); b_; }));
F->t_675v = (*(P903)rt_nil_check(F->bt_671)).target;
goto ret_;
}
f_select_on_677(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_670), F->bt_671); b_; }), (*(P903)rt_nil_check(F->bt_671)).target, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_671)).kind) == (((rt_int)15LL)))) {
F->p_2088 = NULL;
F->p_2088 = (*(P903)rt_nil_check(F->bt_671)).tparams;
while ((F->p_2088 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all))); b_; }));
F->t_675v = f_tparam_type_322(F->bt_671, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all));
(*F->ro_673) = 1;
goto ret_;
}
F->p_2088 = (*(P897)rt_nil_check(F->p_2088)).next;
}
F->p_2088 = (*(P903)rt_nil_check(F->bt_671)).tparams;
if ((!f_opened_297(F->bt_671))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P890)rt_nil_check((*(P903)rt_nil_check(F->bt_671)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P903)rt_nil_check(F->bt_671)).tparams == NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(&(*F->base_670));
F->t_675v = (*(P903)rt_nil_check(F->bt_671)).under;
goto ret_;
}
f_select_on_677(&(*F->base_670), (*(P903)rt_nil_check(F->bt_671)).under, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_670), rt_str(".all", 4)); b_; }));
F->t_675v = (*(P903)rt_nil_check(F->bt_671)).under;
goto ret_;
}
while ((F->p_2088 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".p_", 3)), f_lower_s_15(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all))); b_; }));
F->t_675v = f_tparam_type_322(F->bt_671, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2088)).name))->all));
(*F->ro_673) = 1;
goto ret_;
}
F->p_2088 = (*(P897)rt_nil_check(F->p_2088)).next;
}
f_select_on_677(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_670), rt_str(".all", 4)); b_; }), (*(P903)rt_nil_check(F->bt_671)).under, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_671)).kind) == (((rt_int)17LL)))) {
F->f_2089 = NULL;
F->f_2089 = (*(P903)rt_nil_check(F->bt_671)).fields;
F->i_2090 = RT_R_IUNDEF;
F->i_2090 = ((rt_int)0LL);
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all), rt_str("TAG", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_670)), rt_str(").tag)", 6)); b_; }));
F->t_675v = (*(P903)rt_nil_check(F->bt_671)).elem;
(*F->ro_673) = 1;
goto ret_;
}
while ((F->f_2089 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2089)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))) {
F->fn_2091 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_670)), rt_str(").u.", 4)), f_field_c_17(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))));
F->c_676v = (*(P905)rt_nil_check(F->f_2089)).c;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_670)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2090))), rt_str(" \? &", 4)), F->fn_2091), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2091), rt_str(")))", 3)); b_; }));
F->t_675v = (*(P905)rt_nil_check(F->f_2089)).t;
goto ret_;
}
F->i_2090 = rt_add(rt_r_ichk(F->i_2090), ((rt_int)1LL));
F->f_2089 = (*(P905)rt_nil_check(F->f_2089)).next;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_671)).kind) == (((rt_int)7LL)))) {
F->f_2092 = NULL;
F->f_2092 = (*(P903)rt_nil_check(F->bt_671)).fields;
while ((F->f_2092 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2092)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))) {
F->c_676v = (*(P905)rt_nil_check(F->f_2092)).c;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all))); b_; }));
F->t_675v = (*(P905)rt_nil_check(F->f_2092)).t;
goto ret_;
}
F->f_2092 = (*(P905)rt_nil_check(F->f_2092)).next;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_672)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_674) = F->code_674v;  (*F->t_675) = F->t_675v;  (*F->c_676) = F->c_676v;
  RT_FPOP();
  return;
}

static int f_has_call_679(rstr *s_678) {
  struct f_has_call_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_678 = s_678;
{ rt_int lo2094 = ((rt_int)1LL), hi2095 = ((rt_int)(((*F->s_678)).len));
for (rt_int it2096 = lo2094; it2096 <= hi2095; it2096++) {
F->i_2093 = it2096;
if ((rt_r_echk(rt_str_get((*F->s_678), F->i_2093)) == 40)) {
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

static void f_need_slice_681(P903 t_680) {
  struct f_need_slice_681fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_680 = t_680;
F->c_2097 = rt_str_copy(f_ctype_226(F->t_680));
F->n_2098 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2097));
F->l_2099 = NULL;
if (f_seen_name_388(g_mcopies_976, &F->n_2098)) {
goto ret_;
}
{ R902 *cell2100 = rt_alloc(sizeof(R902));
(*cell2100).s = NULL;
(*cell2100).next = NULL;
F->l_2099 = cell2100;
}
(*(P901)rt_nil_check(F->l_2099)).s = f_mk_3(&F->n_2098);
(*(P901)rt_nil_check(F->l_2099)).next = g_mcopies_976;
g_mcopies_976 = F->l_2099;
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2097), rt_str(" ", 1)), F->n_2098), rt_str("(", 1)), F->c_2097), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2097), rt_str(" ", 1)), F->n_2098), rt_str("(", 1)), F->c_2097), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2097), rt_str(" rt_r_acat_", 11)), F->c_2097), rt_str("(", 1)), F->c_2097), rt_str(" a, ", 4)), F->c_2097), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2097), rt_str(" rt_r_acat_", 11)), F->c_2097), rt_str("(", 1)), F->c_2097), rt_str(" a, ", 4)), F->c_2097), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2097), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_377((*(P903)rt_nil_check(F->t_680)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_377((*(P903)rt_nil_check(F->t_680)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_944, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
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

static void f_index_on_694(rstr *base_686, P903 bt_687, P897 e_688, int *ro_689, int lv_690, P890 *code_691, P903 *t_692, P899 *c_693) {
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
F->a_2101 = NULL;
F->a_2101 = (*(P897)rt_nil_check(F->e_688)).b;
F->it_2102 = NULL;
F->c_693v = g_no_cons_991;
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->bt_687);
(*F->ro_689) = 0;
f_index_on_694(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_686), F->bt_687); b_; }), (*(P903)rt_nil_check(F->bt_687)).target, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_297(F->bt_687))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P890)rt_nil_check((*(P903)rt_nil_check(F->bt_687)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P903)rt_nil_check(F->bt_687)).tparams == NULL)) {
f_index_on_694(&(*F->base_686), (*(P903)rt_nil_check(F->bt_687)).under, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
} else {
f_index_on_694(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_686), rt_str(".all", 4)); b_; }), (*(P903)rt_nil_check(F->bt_687)).under, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).kind) == (((rt_int)6LL))) && (F->a_2101 != NULL)) && (rt_r_ichk((*(P897)rt_nil_check(F->a_2101)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).ndim) != ((rt_int)1LL)) || ((*(P897)rt_nil_check(F->a_2101)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2103 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->a_2101)).a, (*(P903)rt_nil_check(F->bt_687)).idx, &F->it_2102));
F->hi_2104 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->a_2101)).b, (*(P903)rt_nil_check(F->bt_687)).idx, &F->it_2102));
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_226(F->bt_687)), rt_str("(", 1)), (*F->base_686)), rt_str(", ", 2)), F->lo_2103), rt_str(", ", 2)), F->hi_2104), rt_str(")", 1)); b_; }));
f_need_slice_681(F->bt_687);
F->t_692v = F->bt_687;
(*F->ro_689) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).kind) == (((rt_int)6LL)))) {
F->off_2105 = NULL;
F->k_2106 = RT_R_IUNDEF;
F->k_2106 = ((rt_int)0LL);
F->b_2107 = NULL;
F->b_2107 = f_mk_3(&(*F->base_686));
F->pre_2108 = NULL;
F->pre_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_2101) != rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).ndim))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_690) && f_has_call_679(&(*F->base_686)))) {
F->pre_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->bt_687)), rt_str(" b_ = ", 6)), (*F->base_686)), rt_str("; ", 2)); b_; }));
F->b_2107 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2101 != NULL)) {
F->k_2106 = rt_add(rt_r_ichk(F->k_2106), ((rt_int)1LL));
{
F->i_2109 = rt_str_copy(f_gexpr_700(F->a_2101, f_idx_type_250(F->bt_687, rt_r_ichk(F->k_2106)), &F->it_2102));
F->l_2110 = rt_str_copy(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->b_2107))->all), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2106))));
F->h_2111 = rt_str_copy(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->b_2107))->all), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2106))));
f_check_type_224(F->it_2102, f_idx_type_250(F->bt_687, rt_r_ichk(F->k_2106)), rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line));
if ((F->off_2105 == NULL)) {
F->off_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_685(&F->i_2109, &F->l_2110, &F->h_2111)), rt_str(" - ", 3)), F->l_2110), rt_str(")", 1)); b_; }));
} else {
F->off_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->off_2105))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2110), rt_str(", ", 2)), F->h_2111), rt_str(") + ", 4)), f_ix_685(&F->i_2109, &F->l_2110, &F->h_2111)), rt_str(" - ", 3)), F->l_2110), rt_str(")", 1)); b_; }));
}
}
F->a_2101 = (*(P897)rt_nil_check(F->a_2101)).next;
}
if ((((rt_int)(((((P890)rt_nil_check(F->pre_2108))->all)).len)) > ((rt_int)0LL))) {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->pre_2108))->all), (((P890)rt_nil_check(F->b_2107))->all)), rt_str(".p[", 3)), (((P890)rt_nil_check(F->off_2105))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->b_2107))->all), rt_str(".p[", 3)), (((P890)rt_nil_check(F->off_2105))->all)), rt_str("]", 1)); b_; }));
}
F->t_692v = (*(P903)rt_nil_check(F->bt_687)).elem;
F->c_693v = (*(P903)rt_nil_check(F->bt_687)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_2101) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_687)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->a_2101)).kind) == (((rt_int)16LL)))) {
F->lo_2112 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->a_2101)).a, g_ty_int_977, &F->it_2102));
F->hi_2113 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->a_2101)).b, g_ty_int_977, &F->it_2102));
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_686)), rt_str(", ", 2)), F->lo_2112), rt_str(", ", 2)), F->hi_2113), rt_str(")", 1)); b_; }));
F->t_692v = F->bt_687;
(*F->ro_689) = 1;
goto ret_;
}
{
F->i_2114 = rt_str_copy(f_gexpr_700(F->a_2101, g_ty_int_977, &F->it_2102));
F->t_692v = f_str_elem_210(F->bt_687);
F->c_693v = (*(P903)rt_nil_check(F->bt_687)).elemcons;
if (F->lv_690) {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_686)), rt_str(", ", 2)), F->i_2114), rt_str("))", 2)); b_; }));
} else {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_686)), rt_str(", ", 2)), F->i_2114), rt_str(")", 1)); b_; }));
(*F->ro_689) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_691) = F->code_691v;  (*F->t_692) = F->t_692v;  (*F->c_693) = F->c_693v;
  RT_FPOP();
  return;
}

static int f_own_attribute_696(P897 e_695) {
  struct f_own_attribute_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_695 = e_695;
F->saved_2115 = NULL;
F->saved_2115 = g_code_947;
F->bt_2116 = NULL;
F->ok_2117 = RT_R_EUNDEF;
F->ok_2117 = 0;
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = f_new_buffer_24();
{ rt_frame xf2118;
if (RT_TRY(xf2118)) {
F->base_2120 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_695)).a, NULL, &F->bt_2116));
while (((F->bt_2116 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2116)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_427(F->bt_2116);
F->bt_2116 = (*(P903)rt_nil_check(F->bt_2116)).target;
}
while ((((F->bt_2116 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2116)).kind) == (((rt_int)15LL)))) && ((*(P903)rt_nil_check(F->bt_2116)).tparams == NULL))) {
F->bt_2116 = (*(P903)rt_nil_check(F->bt_2116)).under;
}
if (((F->bt_2116 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2116)).kind) == (((rt_int)15LL))))) {
F->p_2121 = NULL;
F->p_2121 = (*(P903)rt_nil_check(F->bt_2116)).tparams;
while ((F->p_2121 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2121)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_695)).name))->all))) {
F->ok_2117 = 1;
}
F->p_2121 = (*(P897)rt_nil_check(F->p_2121)).next;
}
F->bt_2116 = (*(P903)rt_nil_check(F->bt_2116)).under;
}
if (((F->bt_2116 != NULL) && ((rt_r_ichk((*(P903)rt_nil_check(F->bt_2116)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->bt_2116)).kind) == (((rt_int)17LL)))))) {
F->f_2122 = NULL;
F->f_2122 = (*(P903)rt_nil_check(F->bt_2116)).fields;
while ((F->f_2122 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2122)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_695)).name))->all))) {
F->ok_2117 = 1;
}
F->f_2122 = (*(P905)rt_nil_check(F->f_2122)).next;
}
}
RT_POP(xf2118);
} else {
RT_POP(xf2118);
int x2119 = rt_xcur;
if (0 || x2119 == ex_compile_error_1) {
F->ok_2117 = 0;
} else {
rt_raise(x2119);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = F->saved_2115;
F->result_ = rt_r_echk(F->ok_2117);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_700(P897 e_697, P903 want_698, P903 *t_699) {
  struct f_gexpr_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_697 = e_697;
F->want_698 = want_698;
F->t_699 = t_699;
F->t_699v = *F->t_699;
F->k_2123 = RT_R_IUNDEF;
F->k_2123 = rt_r_ichk((*(P897)rt_nil_check(F->e_697)).kind);
F->code_2124 = NULL;
F->c_2125 = NULL;
F->ro_2126 = RT_R_EUNDEF;
F->bt_2127 = NULL;
F->ctx_2128 = NULL;
F->ctx_2128 = g_cons_ctx_968;
g_cons_ctx_968 = NULL;
F->t_699v = g_ty_int_977;
if ((rt_r_ichk(F->k_2123) == (((rt_int)1LL)))) {
if (((F->want_698 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_698)).kind) == (((rt_int)3LL))))) {
F->t_699v = g_ty_float_979;
F->result_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)2LL)))) {
F->t_699v = g_ty_float_979;
F->result_ = (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)5LL)))) {
F->t_699v = g_ty_bool_978;
F->result_ = f_itos_7(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2123) == (((rt_int)3LL))) && (F->want_698 != NULL)) && (rt_r_ichk((*(P903)rt_nil_check(F->want_698)).kind) == (((rt_int)5LL)))) && (!f_same_213(f_str_elem_210(F->want_698), g_ty_ascii_980)))) {
F->r_2129 = NULL;
F->r_2129 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_699v = F->want_698;
{ rt_int lo2131 = ((rt_int)1LL), hi2132 = ((rt_int)(((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)).len));
for (rt_int it2133 = lo2131; it2133 <= hi2132; it2133++) {
F->i_2130 = it2133;
F->pos_2134 = RT_R_IUNDEF;
F->pos_2134 = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(f_str_elem_210(F->want_698)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_710(rt_r_echk(rt_str_get((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), F->i_2130))); b_; }));
if ((rt_r_ichk(F->pos_2134) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_710(rt_r_echk(rt_str_get((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), F->i_2130)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2129 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2129))->all), rt_str("\\", 1)), f_octal_712(rt_r_ichk(F->pos_2134))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P890)rt_nil_check(F->r_2129))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)3LL)))) {
F->t_699v = g_ty_string_981;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_743(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)6LL)))) {
F->t_699v = g_ty_nil_984;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)4LL)))) {
if (((F->want_698 != NULL) && ((*(P903)rt_nil_check(f_base_of_215(F->want_698))).kind == (((rt_int)4LL))))) {
F->t_699v = F->want_698;
} else {
F->t_699v = f_enum_type_of_746(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
}
{
F->i_2135 = RT_R_IUNDEF;
F->i_2135 = f_lit_index_254((*(P903)rt_nil_check(f_base_of_215(F->t_699v))).lits, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all));
if ((rt_r_ichk(F->i_2135) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2135));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)17LL)))) {
g_cons_ctx_968 = F->ctx_2128;
F->result_ = f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)7LL)))) {
F->y_2136 = NULL;
F->y_2136 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all));
if ((F->y_2136 == NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("ME", 2))) {
F->t_699v = g_ty_act_987;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_699v = g_ty_act_987;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
if (((((((((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_2136)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2136)).kind) == (((rt_int)2LL))))) {
F->ro_2137 = RT_R_EUNDEF;
F->t_699v = (*(P907)rt_nil_check(F->y_2136)).t;
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_2136)).kind) == (((rt_int)1LL)))) {
F->ro_2137 = f_check_import_653(F->y_2136, rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
F->result_ = f_init_chk_331((*(P907)rt_nil_check(F->y_2136)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_647(F->y_2136); b_; }));
goto ret_;
}
F->result_ = f_access_of_647(F->y_2136);
goto ret_;
}
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_2136)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2123) == (((rt_int)8LL))) && (f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all)) != NULL)) && (f_user_op_844(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), f_copy_node_739((*(P897)rt_nil_check(F->e_697)).a)) != NULL))) {
F->call_2138 = NULL;
F->call_2138 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
F->fname_2139 = NULL;
F->fname_2139 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
(*(P897)rt_nil_check(F->fname_2139)).name = (*(P897)rt_nil_check(F->e_697)).name;
(*(P897)rt_nil_check(F->call_2138)).a = F->fname_2139;
(*(P897)rt_nil_check(F->call_2138)).b = f_copy_node_739((*(P897)rt_nil_check(F->e_697)).a);
F->result_ = f_gcall_848(F->call_2138, 0, &F->t_699v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2123) == (((rt_int)8LL))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("NOT", 3))) && (F->want_698 != NULL)) && (rt_r_ichk((*(P903)rt_nil_check(F->want_698)).kind) == (((rt_int)16LL))))) {
F->a_2140 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2140), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)8LL)))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("NOT", 3))) {
F->a_2141 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, g_ty_bool_978, &F->t_699v));
f_check_type_224(F->t_699v, g_ty_bool_978, rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2141), rt_str(")", 1));
goto ret_;
}
{
F->a_2142 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v));
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2142;
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->t_699v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2142), rt_str(")", 1));
goto ret_;
}
f_check_type_224(F->t_699v, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2142), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_768(F->e_697, F->want_698, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_697)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_697)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2143 = NULL;
F->nm_2143 = (*(P897)rt_nil_check(F->e_697)).a;
F->y_2144 = NULL;
if ((rt_r_ichk((*(P897)rt_nil_check(F->nm_2143)).kind) == (((rt_int)12LL)))) {
F->nm_2143 = (*(P897)rt_nil_check(F->nm_2143)).a;
}
F->y_2144 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->nm_2143)).name))->all));
if (((((F->y_2144 == NULL) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2144)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2144)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2144)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_848(F->e_697, 0, &F->t_699v);
goto ret_;
}
}
if ((f_user_subscript_723(F->e_697) != NULL)) {
F->result_ = f_gcall_848(f_user_subscript_723(F->e_697), 0, &F->t_699v);
goto ret_;
}
{
F->base_2145 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, NULL, &F->bt_2127));
F->ro_2126 = 1;
f_index_on_694(&F->base_2145, F->bt_2127, F->e_697, &F->ro_2126, 0, &F->code_2124, &F->t_699v, &F->c_2125);
if ((((!f_is_lvalue_663(F->e_697)) || (rt_r_ichk((*(P903)rt_nil_check(F->t_699v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->t_699v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P890)rt_nil_check(F->code_2124))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_699v, &(((P890)rt_nil_check(F->code_2124))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2123) == (((rt_int)11LL))) && (f_user_dot_721(F->e_697) != NULL))) {
F->result_ = f_gcall_848(f_user_dot_721(F->e_697), 0, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_696(F->e_697)))) {
F->result_ = f_attribute_751(F->e_697, &F->t_699v);
goto ret_;
} else if (((f_as_subtype_286((*(P897)rt_nil_check(F->e_697)).a) != NULL) || f_ptr_attribute_748(F->e_697))) {
F->result_ = f_attribute_751(F->e_697, &F->t_699v);
goto ret_;
}
{
F->base_2146 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_697)).a, NULL, &F->bt_2127));
F->ro_2126 = 1;
f_select_on_677(&F->base_2146, F->bt_2127, F->e_697, &F->ro_2126, &F->code_2124, &F->t_699v, &F->c_2125);
if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_697)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_663(F->e_697)))) {
F->result_ = (((P890)rt_nil_check(F->code_2124))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_699v, &(((P890)rt_nil_check(F->code_2124))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)12LL)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)14LL)))) {
F->result_ = f_constructor_773(F->e_697, F->want_698, F->ctx_2128, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2123) == (((rt_int)13LL)))) {
F->result_ = f_resolved_703(F->e_697, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_699) = F->t_699v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_703(P897 e_701, P903 *t_702) {
  struct f_resolved_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_701 = e_701;
F->t_702 = t_702;
F->t_702v = *F->t_702;
F->c_2147 = NULL;
F->vt_2148 = NULL;
F->y_2149 = NULL;
F->y_2149 = f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2150 = NULL;
F->tt_2150 = f_copy_node_739((*(P897)rt_nil_check(F->e_701)).b);
(*(P897)rt_nil_check(F->tt_2150)).next = NULL;
if (((F->y_2149 != NULL) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_2149)).kind) == (((rt_int)10LL))) || (f_resolve_overload_822(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2150, f_copy_node_739((*(P897)rt_nil_check(F->e_701)).a), 0, rt_r_ichk((*(P897)rt_nil_check(F->e_701)).line)) != NULL)))) {
F->call_2151 = NULL;
F->call_2151 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_701)).line));
F->f_2152 = NULL;
F->f_2152 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_701)).line));
F->fname_2153 = NULL;
F->fname_2153 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_701)).line));
(*(P897)rt_nil_check(F->fname_2153)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P897)rt_nil_check(F->f_2152)).a = F->fname_2153;
(*(P897)rt_nil_check(F->f_2152)).b = F->tt_2150;
(*(P897)rt_nil_check(F->call_2151)).a = F->f_2152;
(*(P897)rt_nil_check(F->call_2151)).b = f_copy_node_739((*(P897)rt_nil_check(F->e_701)).a);
(*(P897)rt_nil_check((*(P897)rt_nil_check(F->call_2151)).b)).next = NULL;
F->result_ = f_gcall_848(F->call_2151, 0, &F->t_702v);
goto ret_;
}
F->t_702v = f_resolve_subtype_257((*(P897)rt_nil_check(F->e_701)).b, &F->c_2147);
{
F->v_2154 = rt_str_copy(f_gexpr_in_708((*(P897)rt_nil_check(F->e_701)).a, F->t_702v, F->c_2147, &F->vt_2148));
f_check_type_224(F->vt_2148, F->t_702v, rt_r_ichk((*(P897)rt_nil_check(F->e_701)).line));
F->result_ = f_checked_205(F->t_702v, F->c_2147, &F->v_2154);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_702) = F->t_702v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_708(P897 e_704, P903 want_705, P899 c_706, P903 *t_707) {
  struct f_gexpr_in_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_704 = e_704;
F->want_705 = want_705;
F->c_706 = c_706;
F->t_707 = t_707;
F->t_707v = *F->t_707;
g_cons_ctx_968 = F->c_706;
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
F->l_2155 = NULL;
F->l_2155 = (*(P903)rt_nil_check(g_ty_ascii_980)).lits;
{ rt_int lo2157 = ((rt_int)1LL), hi2158 = rt_sub(((rt_int)(F->ch_709) + 1), ((rt_int)1LL));
for (rt_int it2159 = lo2157; it2159 <= hi2158; it2159++) {
F->i_2156 = it2159;
F->l_2155 = (*(P897)rt_nil_check(F->l_2155)).next;
}
}
F->result_ = (((P890)rt_nil_check((*(P897)rt_nil_check(F->l_2155)).name))->all);
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
F->r_2160 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2160, rt_str("000", 3));
(*rt_str_at(&F->r_2160, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_711, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2160, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_711, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2160, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_711, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2160;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_str_cat_part_714(P903 t_713) {
  struct f_str_cat_part_714fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_713 = t_713;
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_713)).kind) == (((rt_int)5LL)))) {
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

static P903 f_peek_type_716(P897 e_715) {
  struct f_peek_type_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_715 = e_715;
F->saved_2161 = NULL;
F->saved_2161 = g_code_947;
F->t_2162 = NULL;
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = f_new_buffer_24();
{ rt_frame xf2163;
if (RT_TRY(xf2163)) {
F->v_2165 = rt_str_copy(f_gexpr_700(F->e_715, NULL, &F->t_2162));
RT_POP(xf2163);
} else {
RT_POP(xf2163);
int x2164 = rt_xcur;
if (0 || x2164 == ex_compile_error_1) {
F->t_2162 = NULL;
} else {
rt_raise(x2164);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = F->saved_2161;
F->result_ = F->t_2162;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_set_operands_719(P897 e_717, P903 want_718) {
  struct f_set_operands_719fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_717 = e_717;
F->want_718 = want_718;
F->t_2166 = NULL;
if (((F->want_718 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_718)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_718;
goto ret_;
} else if ((F->want_718 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_717)).a)).kind) != (((rt_int)14LL)))) {
F->t_2166 = f_peek_type_716((*(P897)rt_nil_check(F->e_717)).a);
} else if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_717)).b)).kind) != (((rt_int)14LL)))) {
F->t_2166 = f_peek_type_716((*(P897)rt_nil_check(F->e_717)).b);
}
if (((F->t_2166 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->t_2166)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2166;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_user_dot_721(P897 e_720) {
  struct f_user_dot_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_720 = e_720;
F->arg_2167 = NULL;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_720)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2167 = f_copy_node_739((*(P897)rt_nil_check(F->e_720)).a);
if ((f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_720)).name))->all)); b_; }), F->arg_2167) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_727(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_720)).name))->all)); b_; }), F->arg_2167, rt_r_ichk((*(P897)rt_nil_check(F->e_720)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_user_subscript_723(P897 e_722) {
  struct f_user_subscript_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_722 = e_722;
F->name_2168 = NULL;
F->name_2168 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2169 = NULL;
F->tail_2170 = NULL;
F->a_2171 = NULL;
F->a_2171 = (*(P897)rt_nil_check(F->e_722)).b;
if (((((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_722)).a)).kind) == (((rt_int)7LL))) && (f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_722)).a)).name))->all)) != NULL)) && ((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_722)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P907)rt_nil_check(f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_722)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_65(&F->args_2169, &F->tail_2170, f_copy_node_739((*(P897)rt_nil_check(F->e_722)).a));
while ((F->a_2171 != NULL)) {
if ((((rt_int)(((((P890)rt_nil_check(F->name_2168))->all)).len)) > ((rt_int)1LL))) {
F->name_2168 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->name_2168))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P897)rt_nil_check(F->a_2171)).kind) == (((rt_int)16LL)))) {
F->name_2168 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->name_2168))->all), rt_str("*..*", 4)); b_; }));
f_append_65(&F->args_2169, &F->tail_2170, f_copy_node_739((*(P897)rt_nil_check(F->a_2171)).a));
f_append_65(&F->args_2169, &F->tail_2170, f_copy_node_739((*(P897)rt_nil_check(F->a_2171)).b));
} else {
F->name_2168 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->name_2168))->all), rt_str("*", 1)); b_; }));
f_append_65(&F->args_2169, &F->tail_2170, f_copy_node_739(F->a_2171));
}
F->a_2171 = (*(P897)rt_nil_check(F->a_2171)).next;
}
F->name_2168 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->name_2168))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_155(&(((P890)rt_nil_check(F->name_2168))->all)) == NULL) || (f_user_op_844(&(((P890)rt_nil_check(F->name_2168))->all), F->args_2169) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_727(&(((P890)rt_nil_check(F->name_2168))->all), F->args_2169, rt_r_ichk((*(P897)rt_nil_check(F->e_722)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_op_call_727(rstr *name_724, P897 args_725, rt_int line_726) {
  struct f_op_call_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_724 = name_724;
F->args_725 = args_725;
F->line_726 = line_726;
F->call_2172 = NULL;
F->call_2172 = f_nn_61((((rt_int)10LL)), F->line_726);
F->f_2173 = NULL;
F->f_2173 = f_nn_61((((rt_int)7LL)), F->line_726);
(*(P897)rt_nil_check(F->f_2173)).name = f_mk_3(&(*F->name_724));
(*(P897)rt_nil_check(F->call_2172)).a = F->f_2173;
(*(P897)rt_nil_check(F->call_2172)).b = F->args_725;
F->result_ = F->call_2172;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_derived_relation_729(P897 e_728) {
  struct f_derived_relation_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_728 = e_728;
F->l_2174 = NULL;
F->r_2175 = NULL;
F->has_eq_2176 = RT_R_EUNDEF;
F->has_eq_2176 = 0;
F->has_lt_2177 = RT_R_EUNDEF;
F->has_lt_2177 = 0;
F->l_2174 = f_copy_node_739((*(P897)rt_nil_check(F->e_728)).a);
F->r_2175 = f_copy_node_739((*(P897)rt_nil_check(F->e_728)).b);
(*(P897)rt_nil_check(F->l_2174)).next = F->r_2175;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2176 = (f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2174) != NULL);
}
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2174 = f_copy_node_739((*(P897)rt_nil_check(F->e_728)).a);
F->r_2175 = f_copy_node_739((*(P897)rt_nil_check(F->e_728)).b);
(*(P897)rt_nil_check(F->l_2174)).next = F->r_2175;
F->has_lt_2177 = (f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2174) != NULL);
}
if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_728)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2176))) {
F->result_ = f_rel_not_737(f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).a, (*(P897)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line));
goto ret_;
} else if ((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_728)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2177))) {
F->result_ = f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).b, (*(P897)rt_nil_check(F->e_728)).a, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line));
goto ret_;
} else if (((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_728)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2177)) && rt_r_echk(F->has_eq_2176))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).a, (*(P897)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line)), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).a, (*(P897)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line));
goto ret_;
} else if (((rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_728)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2177)) && rt_r_echk(F->has_eq_2176))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).b, (*(P897)rt_nil_check(F->e_728)).a, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line)), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P897)rt_nil_check(F->e_728)).a, (*(P897)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P897)rt_nil_check(F->e_728)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_rel_node_734(rstr *op_730, P897 a_731, P897 b_732, rt_int line_733) {
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

static P897 f_rel_not_737(P897 x_735, rt_int line_736) {
  struct f_rel_not_737fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_735 = x_735;
F->line_736 = line_736;
F->n_2178 = NULL;
F->n_2178 = f_nn_61((((rt_int)8LL)), F->line_736);
(*(P897)rt_nil_check(F->n_2178)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P897)rt_nil_check(F->n_2178)).a = F->x_735;
F->result_ = F->n_2178;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_copy_node_739(P897 e_738) {
  struct f_copy_node_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_738 = e_738;
F->x_2179 = NULL;
{ R898 *cell2180 = rt_alloc(sizeof(R898));
(*cell2180).name = NULL;
(*cell2180).tag = NULL;
(*cell2180).prags = NULL;
(*cell2180).labels = NULL;
(*cell2180).a = NULL;
(*cell2180).b = NULL;
(*cell2180).c = NULL;
(*cell2180).d = NULL;
(*cell2180).e = NULL;
(*cell2180).next = NULL;
F->x_2179 = cell2180;
}
(*(P897)rt_nil_check(F->x_2179)).kind = rt_r_ichk((*(P897)rt_nil_check(F->e_738)).kind);
(*(P897)rt_nil_check(F->x_2179)).line = rt_r_ichk((*(P897)rt_nil_check(F->e_738)).line);
(*(P897)rt_nil_check(F->x_2179)).ival = rt_r_ichk((*(P897)rt_nil_check(F->e_738)).ival);
(*(P897)rt_nil_check(F->x_2179)).flag = rt_r_ichk((*(P897)rt_nil_check(F->e_738)).flag);
(*(P897)rt_nil_check(F->x_2179)).name = (*(P897)rt_nil_check(F->e_738)).name;
(*(P897)rt_nil_check(F->x_2179)).tag = (*(P897)rt_nil_check(F->e_738)).tag;
(*(P897)rt_nil_check(F->x_2179)).a = (*(P897)rt_nil_check(F->e_738)).a;
(*(P897)rt_nil_check(F->x_2179)).b = (*(P897)rt_nil_check(F->e_738)).b;
(*(P897)rt_nil_check(F->x_2179)).c = (*(P897)rt_nil_check(F->e_738)).c;
(*(P897)rt_nil_check(F->x_2179)).d = (*(P897)rt_nil_check(F->e_738)).d;
F->result_ = F->x_2179;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P897 f_wrap_apply_741(P897 e_740) {
  struct f_wrap_apply_741fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_740 = e_740;
F->x_2181 = NULL;
F->x_2181 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_740)).line));
(*(P897)rt_nil_check(F->x_2181)).a = F->e_740;
F->result_ = F->x_2181;
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
F->n_2182 = RT_R_IUNDEF;
F->n_2182 = ((rt_int)0LL);
{ rt_int lo2184 = ((rt_int)1LL), hi2185 = ((rt_int)(((*F->s_742)).len));
for (rt_int it2186 = lo2184; it2186 <= hi2185; it2186++) {
F->i_2183 = it2186;
if (((rt_r_echk(rt_str_get((*F->s_742), F->i_2183)) == 92) || (rt_r_echk(rt_str_get((*F->s_742), F->i_2183)) == 63))) {
F->n_2182 = rt_add(rt_r_ichk(F->n_2182), ((rt_int)1LL));
}
}
}
{
F->r_2187 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_742)).len)), rt_r_ichk(F->n_2182)), ((rt_int)2LL)));
F->j_2188 = RT_R_IUNDEF;
F->j_2188 = ((rt_int)1LL);
(*rt_str_at(&F->r_2187, ((rt_int)1LL))) = 34;
{ rt_int lo2190 = ((rt_int)1LL), hi2191 = ((rt_int)(((*F->s_742)).len));
for (rt_int it2192 = lo2190; it2192 <= hi2191; it2192++) {
F->i_2189 = it2192;
F->j_2188 = rt_add(rt_r_ichk(F->j_2188), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_742), F->i_2189)) == 92) || (rt_r_echk(rt_str_get((*F->s_742), F->i_2189)) == 63))) {
(*rt_str_at(&F->r_2187, rt_r_ichk(F->j_2188))) = 92;
F->j_2188 = rt_add(rt_r_ichk(F->j_2188), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2187, rt_r_ichk(F->j_2188))) = rt_r_echk(rt_str_get((*F->s_742), F->i_2189));
}
}
(*rt_str_at(&F->r_2187, rt_add(rt_r_ichk(F->j_2188), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2187;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P903 f_enum_type_of_746(rstr *lit_744, rt_int line_745) {
  struct f_enum_type_of_746fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_744 = lit_744;
F->line_745 = line_745;
F->y_2193 = NULL;
F->y_2193 = g_scope_stack_937;
F->c_2194 = NULL;
if ((f_lit_index_254((*(P903)rt_nil_check(g_ty_ascii_980)).lits, &(*F->lit_744)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_980;
goto ret_;
}
while ((F->y_2193 != NULL)) {
if (((((rt_r_ichk((*(P907)rt_nil_check(F->y_2193)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2193)).kind) == (((rt_int)5LL)))) && ((*(P907)rt_nil_check(F->y_2193)).st != NULL)) && (rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_2193)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_254((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_2193)).st)).a, &(*F->lit_744)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_2193)).kind) == (((rt_int)5LL)))) {
F->st_2195 = NULL;
F->st_2195 = f_nn_61((((rt_int)80LL)), F->line_745);
(*(P897)rt_nil_check(F->st_2195)).name = (*(P907)rt_nil_check(F->y_2193)).name;
F->result_ = f_resolve_subtype_257(F->st_2195, &F->c_2194);
goto ret_;
}
F->result_ = f_resolve_subtype_257((*(P907)rt_nil_check(F->y_2193)).st, &F->c_2194);
goto ret_;
}
}
F->y_2193 = (*(P907)rt_nil_check(F->y_2193)).stack;
}
f_fail_23(F->line_745, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_744)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_748(P897 e_747) {
  struct f_ptr_attribute_748fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_747 = e_747;
F->lv_2196 = NULL;
F->t_2197 = NULL;
F->c_2198 = NULL;
F->ro_2199 = RT_R_EUNDEF;
F->p_2200 = NULL;
F->saved_2201 = NULL;
F->saved_2201 = g_code_947;
if ((!f_is_lvalue_663((*(P897)rt_nil_check(F->e_747)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_947 = f_new_buffer_24();
f_lvalue_669((*(P897)rt_nil_check(F->e_747)).a, &F->lv_2196, &F->t_2197, &F->c_2198, &F->ro_2199);
g_code_947 = F->saved_2201;
if (((rt_r_ichk((*(P903)rt_nil_check(F->t_2197)).kind) != (((rt_int)8LL))) || ((*(P903)rt_nil_check(F->t_2197)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2200 = (*(P897)rt_nil_check((*(P903)rt_nil_check(F->t_2197)).decl)).d;
while ((F->p_2200 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2200)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_747)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2200 = (*(P897)rt_nil_check(F->p_2200)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_751(P897 e_749, P903 *t_750) {
  struct f_attribute_751fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_749 = e_749;
F->t_750 = t_750;
F->t_750v = *F->t_750;
F->bt_2202 = NULL;
F->c_2203 = NULL;
F->base_2204 = NULL;
F->sub_2205 = NULL;
F->sub_2205 = f_as_subtype_286((*(P897)rt_nil_check(F->e_749)).a);
F->name_2206 = rt_str_copy((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_749)).name))->all));
if ((F->sub_2205 != NULL)) {
F->bt_2202 = f_resolve_subtype_257(F->sub_2205, &F->c_2203);
} else {
F->bt_2202 = f_value_subtype_279((*(P897)rt_nil_check(F->e_749)).a, &F->c_2203, &F->base_2204);
}
if (((((rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)8LL))) && (F->c_2203 != NULL)) && ((*(P899)rt_nil_check(F->c_2203)).args != NULL)) && ((*(P903)rt_nil_check(F->bt_2202)).decl != NULL))) {
F->p_2207 = NULL;
F->p_2207 = (*(P897)rt_nil_check((*(P903)rt_nil_check(F->bt_2202)).decl)).d;
F->a_2208 = NULL;
F->a_2208 = (*(P899)rt_nil_check(F->c_2203)).args;
while (((F->p_2207 != NULL) && (F->a_2208 != NULL))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2207)).name))->all), F->name_2206)) {
F->pc_2209 = NULL;
F->v_2210 = rt_str_copy(f_gexpr_700(F->a_2208, f_resolve_subtype_257((*(P897)rt_nil_check(F->p_2207)).a, &F->pc_2209), &F->t_750v));
F->result_ = F->v_2210;
goto ret_;
}
F->p_2207 = (*(P897)rt_nil_check(F->p_2207)).next;
F->a_2208 = (*(P897)rt_nil_check(F->a_2208)).next;
}
}
while (((rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)8LL))) && (F->base_2204 != NULL))) {
f_finish_ptr_427(F->bt_2202);
F->base_2204 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(((P890)rt_nil_check(F->base_2204))->all), F->bt_2202); b_; }));
F->bt_2202 = (*(P903)rt_nil_check(F->bt_2202)).target;
F->c_2203 = NULL;
if ((rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)5LL)))) {
F->c_2203 = f_new_cons_176();
(*(P899)rt_nil_check(F->c_2203)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->base_2204))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->bt_2202)).tparams != NULL)) && (F->c_2203 != NULL)) && ((*(P899)rt_nil_check(F->c_2203)).args != NULL))) {
F->p_2211 = NULL;
F->p_2211 = (*(P903)rt_nil_check(F->bt_2202)).tparams;
F->a_2212 = NULL;
F->a_2212 = (*(P899)rt_nil_check(F->c_2203)).args;
while (((F->p_2211 != NULL) && (F->a_2212 != NULL))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2211)).name))->all), F->name_2206)) {
F->pt_2213 = f_tparam_type_322(F->bt_2202, &F->name_2206);
F->v_2214 = rt_str_copy(f_gexpr_700(F->a_2212, F->pt_2213, &F->t_750v));
F->result_ = F->v_2214;
goto ret_;
}
F->p_2211 = (*(P897)rt_nil_check(F->p_2211)).next;
F->a_2212 = (*(P897)rt_nil_check(F->a_2212)).next;
}
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->bt_2202)).tparams == NULL))) {
F->c_2203 = f_base_cons_218(F->bt_2202, F->c_2203);
F->bt_2202 = f_base_of_215(F->bt_2202);
}
F->t_750v = g_ty_int_977;
if ((rt_str_eq(F->name_2206, rt_str("LEN", 3)) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)5LL))))) {
if (((F->c_2203 != NULL) && ((*(P899)rt_nil_check(F->c_2203)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_2203)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2206, rt_str("LEN", 3)) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)12LL))))) {
if (((F->c_2203 != NULL) && ((*(P899)rt_nil_check(F->c_2203)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_2203)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2206, rt_str("MIN", 3)) || rt_str_eq(F->name_2206, rt_str("MAX", 3))) && f_scalar_kind_178(F->bt_2202))) {
F->t_750v = F->bt_2202;
if (rt_str_eq(F->name_2206, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_190(F->bt_2202, F->c_2203);
goto ret_;
}
F->result_ = f_sub_hi_193(F->bt_2202, F->c_2203);
goto ret_;
} else if ((rt_str_eq(F->name_2206, rt_str("PREC", 4)) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)3LL))))) {
if (((F->c_2203 != NULL) && ((*(P899)rt_nil_check(F->c_2203)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_2203)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2206, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2206, rt_str("USE", 3))) && (rt_r_ichk((*(P903)rt_nil_check(F->bt_2202)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_764(F->e_749, F->bt_2202, F->c_2203, F->base_2204, &F->t_750v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2206, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_750) = F->t_750v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_756(P897 sa_752, P897 sb_753, rstr *op_754, rt_int line_755) {
  struct f_subtype_compare_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_752 = sa_752;
F->sb_753 = sb_753;
F->op_754 = op_754;
F->line_755 = line_755;
F->ca_2215 = NULL;
F->cb_2216 = NULL;
F->ta_2217 = NULL;
F->ta_2217 = f_resolve_subtype_257(F->sa_752, &F->ca_2215);
F->tb_2218 = NULL;
F->tb_2218 = f_resolve_subtype_257(F->sb_753, &F->cb_2216);
F->r_2219 = NULL;
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2220 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2220, rt_str("1", 1));
F->no_2221 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2221, rt_str("0", 1));
if (rt_str_eq((*F->op_754), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2220, rt_str("0", 1));
rt_str_assign(&F->no_2221, rt_str("1", 1));
}
if ((!f_same_213(F->ta_2217, F->tb_2218))) {
F->result_ = F->no_2221;
goto ret_;
} else if ((((rt_r_ichk((*(P897)rt_nil_check(F->sa_752)).kind) == (((rt_int)80LL))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->sa_752)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P897)rt_nil_check(F->sb_753)).kind) == (((rt_int)80LL))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->sb_753)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2220;
goto ret_;
}
if (f_scalar_kind_178(F->ta_2217)) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_190(F->ta_2217, F->ca_2215)), rt_str(") == (", 6)), f_sub_lo_190(F->tb_2218, F->cb_2216)), rt_str(") && (", 6)), f_sub_hi_193(F->ta_2217, F->ca_2215)), rt_str(") == (", 6)), f_sub_hi_193(F->tb_2218, F->cb_2216)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).kind) == (((rt_int)3LL)))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2219))->all), rt_str(" && ", 4)), f_float_prec_758(F->ca_2215)), rt_str(" == ", 4)), f_float_prec_758(F->cb_2216)); b_; }));
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2215 != NULL) && (F->cb_2216 != NULL)) && ((*(P899)rt_nil_check(F->ca_2215)).slen != NULL)) && ((*(P899)rt_nil_check(F->cb_2216)).slen != NULL))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check((*(P899)rt_nil_check(F->ca_2215)).slen))->all)), rt_str(") == (", 6)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->cb_2216)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2215 == NULL) || ((*(P899)rt_nil_check(F->ca_2215)).slen == NULL)) && ((F->cb_2216 == NULL) || ((*(P899)rt_nil_check(F->cb_2216)).slen == NULL))))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2223 = ((rt_int)1LL), hi2224 = rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).ndim);
for (rt_int it2225 = lo2223; it2225 <= hi2224; it2225++) {
F->k_2222 = it2225;
if (((((F->ca_2215 != NULL) && (F->cb_2216 != NULL)) && (f_cons_lo_244(F->ca_2215, F->k_2222) != NULL)) && (f_cons_lo_244(F->cb_2216, F->k_2222) != NULL))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2219))->all), rt_str(" && (", 5)), (((P890)rt_nil_check(f_cons_lo_244(F->ca_2215, F->k_2222)))->all)), rt_str(") == (", 6)), (((P890)rt_nil_check(f_cons_lo_244(F->cb_2216, F->k_2222)))->all)), rt_str(") && (", 6)), (((P890)rt_nil_check(f_cons_hi_247(F->ca_2215, F->k_2222)))->all)), rt_str(") == (", 6)), (((P890)rt_nil_check(f_cons_hi_247(F->cb_2216, F->k_2222)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).kind) == (((rt_int)15LL))) && ((*(P903)rt_nil_check(F->ta_2217)).tparams != NULL)) && (F->ca_2215 != NULL)) && (F->cb_2216 != NULL))) {
F->a_2226 = NULL;
F->a_2226 = (*(P899)rt_nil_check(F->ca_2215)).args;
F->b_2227 = NULL;
F->b_2227 = (*(P899)rt_nil_check(F->cb_2216)).args;
F->at_2228 = NULL;
F->bt2_2229 = NULL;
while (((F->a_2226 != NULL) && (F->b_2227 != NULL))) {
F->x_2230 = rt_str_copy(f_gexpr_700(F->a_2226, NULL, &F->at_2228));
F->y_2231 = rt_str_copy(f_gexpr_700(F->b_2227, F->at_2228, &F->bt2_2229));
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2219))->all), rt_str(" && ", 4)), f_eq_code_381(F->at_2228, &F->x_2230, &F->y_2231)); b_; }));
F->a_2226 = (*(P897)rt_nil_check(F->a_2226)).next;
F->b_2227 = (*(P897)rt_nil_check(F->b_2227)).next;
}
} else if ((((rt_r_ichk((*(P903)rt_nil_check(F->ta_2217)).kind) == (((rt_int)17LL))) && (F->ca_2215 != NULL)) && (F->cb_2216 != NULL))) {
if ((((*(P899)rt_nil_check(F->ca_2215)).lo != NULL) && ((*(P899)rt_nil_check(F->cb_2216)).lo != NULL))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check((*(P899)rt_nil_check(F->ca_2215)).lo))->all)), rt_str(") == (", 6)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->cb_2216)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P899)rt_nil_check(F->ca_2215)).lo != NULL) || ((*(P899)rt_nil_check(F->cb_2216)).lo != NULL))) {
F->r_2219 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_754), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P890)rt_nil_check(F->r_2219))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->r_2219))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_758(P899 c_757) {
  struct f_float_prec_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_757 = c_757;
if (((F->c_757 != NULL) && ((*(P899)rt_nil_check(F->c_757)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_757)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_764(P897 e_759, P903 bt_760, P899 c_761, P890 base_762, P903 *t_763) {
  struct f_file_attribute_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_759 = e_759;
F->bt_760 = bt_760;
F->c_761 = c_761;
F->base_762 = base_762;
F->t_763 = t_763;
F->t_763v = *F->t_763;
F->t_763v = g_file_mode_type_988;
if ((F->base_762 != NULL)) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_759)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P890)rt_nil_check(F->base_762))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P890)rt_nil_check(F->base_762))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_761 != NULL) && ((*(P899)rt_nil_check(F->c_761)).args != NULL))) {
if (rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_759)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_700((*(P899)rt_nil_check(F->c_761)).args, F->t_763v, &F->t_763v);
goto ret_;
} else if (((*(P897)rt_nil_check((*(P899)rt_nil_check(F->c_761)).args)).next != NULL)) {
F->result_ = f_gexpr_700((*(P897)rt_nil_check((*(P899)rt_nil_check(F->c_761)).args)).next, F->t_763v, &F->t_763v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_759)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P890)rt_nil_check((*(P897)rt_nil_check(F->e_759)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_763) = F->t_763v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_768(P897 e_765, P903 want_766, P903 *t_767) {
  struct f_gbinop_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_765 = e_765;
F->want_766 = want_766;
F->t_767 = t_767;
F->t_767v = *F->t_767;
F->op_2232 = NULL;
F->op_2232 = (*(P897)rt_nil_check(F->e_765)).name;
F->ta_2233 = NULL;
F->tb_2234 = NULL;
F->hint_2235 = NULL;
F->uy_2236 = NULL;
F->t_767v = g_ty_bool_978;
if (((((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2)) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str(">", 1))) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("<=", 2))) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str(">=", 2))) && (f_derived_relation_729(F->e_765) != NULL))) {
F->result_ = f_gexpr_700(f_derived_relation_729(F->e_765), g_ty_bool_978, &F->t_767v);
goto ret_;
}
if ((f_lookup_155(&(((P890)rt_nil_check(F->op_2232))->all)) != NULL)) {
F->l_2237 = NULL;
F->r_2238 = NULL;
F->l_2237 = f_copy_node_739((*(P897)rt_nil_check(F->e_765)).a);
F->r_2238 = f_copy_node_739((*(P897)rt_nil_check(F->e_765)).b);
(*(P897)rt_nil_check(F->l_2237)).next = F->r_2238;
F->uy_2236 = f_user_op_844(&(((P890)rt_nil_check(F->op_2232))->all), F->l_2237);
if ((F->uy_2236 != NULL)) {
F->call_2239 = NULL;
F->call_2239 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->fname_2240 = NULL;
F->fname_2240 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
(*(P897)rt_nil_check(F->fname_2240)).name = F->op_2232;
(*(P897)rt_nil_check(F->call_2239)).a = F->fname_2240;
(*(P897)rt_nil_check(F->call_2239)).b = F->l_2237;
F->result_ = f_gcall_848(F->call_2239, 0, &F->t_767v);
goto ret_;
}
}
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("IN", 2))) {
F->s_2241 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, NULL, &F->tb_2234));
if ((rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2242 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, (*(P903)rt_nil_check(F->tb_2234)).elem, &F->ta_2233));
f_check_type_224(F->ta_2233, (*(P903)rt_nil_check(F->tb_2234)).elem, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->t_767v = g_ty_bool_978;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2242), rt_str(", ", 2)), F->s_2241), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("AND", 3)) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("OR", 2))) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("XOR", 3))) && (f_set_operands_719(F->e_765, F->want_766) != NULL))) {
F->a_2243 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, f_set_operands_719(F->e_765, F->want_766), &F->ta_2233));
F->b_2244 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, F->ta_2233, &F->tb_2234));
f_check_type_224(F->tb_2234, F->ta_2233, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->t_767v = F->ta_2233;
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2243), rt_str(", ", 2)), F->b_2244), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2243), rt_str(", ", 2)), F->b_2244), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2243), rt_str(", ", 2)), F->b_2244), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("AND", 3)) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("OR", 2))) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("XOR", 3)))) {
F->a_2245 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, g_ty_bool_978, &F->ta_2233));
F->b_2246 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, g_ty_bool_978, &F->tb_2234));
f_check_type_224(F->ta_2233, g_ty_bool_978, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2234, g_ty_bool_978, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2245), rt_str(" && ", 4)), F->b_2246), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2245), rt_str(" || ", 4)), F->b_2246), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2245), rt_str(" != ", 4)), F->b_2246), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("&", 1)) && (F->want_766 != NULL)) && ((*(P903)rt_nil_check(f_base_of_215(F->want_766))).kind == (((rt_int)6LL))))) {
F->at_2247 = NULL;
F->at_2247 = f_base_of_215(F->want_766);
F->a_2248 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, F->at_2247, &F->ta_2233));
F->b_2249 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, F->at_2247, &F->tb_2234));
f_check_type_224(F->ta_2233, F->at_2247, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2234, F->at_2247, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
if (((rt_r_ichk((*(P903)rt_nil_check(F->at_2247)).ndim) != ((rt_int)1LL)) || ((*(P903)rt_nil_check(f_base_of_215((*(P903)rt_nil_check(F->at_2247)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_681(F->at_2247);
F->t_767v = F->at_2247;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->at_2247)), rt_str("(", 1)), F->a_2248), rt_str(", ", 2)), F->b_2249), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("&", 1))) {
F->wa_2250 = NULL;
F->wb_2251 = NULL;
F->ws_2252 = NULL;
F->ce_2253 = NULL;
F->ce_2253 = g_ty_ascii_980;
if (((F->want_766 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_766)).kind) == (((rt_int)5LL))))) {
F->ws_2252 = F->want_766;
F->ce_2253 = f_str_elem_210(F->want_766);
}
if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2250 = F->ce_2253;
} else {
F->wa_2250 = F->ws_2252;
}
if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2251 = F->ce_2253;
} else {
F->wb_2251 = F->ws_2252;
}
{
F->a_2254 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, F->wa_2250, &F->ta_2233));
F->b_2255 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, F->wb_2251, &F->tb_2234));
F->t_767v = g_ty_string_981;
if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)5LL)))) {
F->t_767v = F->ta_2233;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)5LL)))) {
F->t_767v = F->tb_2234;
} else if ((!f_same_213(F->ta_2233, g_ty_ascii_980))) {
F->t_767v = f_new_typ_175((((rt_int)5LL)));
(*(P903)rt_nil_check(F->t_767v)).elem = F->ta_2233;
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)6LL))))) {
f_need_slice_681(F->ta_2233);
f_check_type_224(F->tb_2234, F->ta_2233, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->t_767v = F->ta_2233;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->ta_2233)), rt_str("(", 1)), F->a_2254), rt_str(", ", 2)), F->b_2255), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)5LL)))) {
f_check_type_224(f_str_cat_part_714(F->tb_2234), f_str_elem_210(F->ta_2233), rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)5LL)))) {
f_check_type_224(F->ta_2233, f_str_elem_210(F->tb_2234), rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
} else {
f_check_type_224(F->tb_2234, F->ta_2233, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
}
if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2254), rt_str(", ", 2)), F->b_2255), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2254), rt_str(", ", 2)), F->b_2255), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2254), rt_str(", ", 2)), F->b_2255), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2254), rt_str(", ", 2)), F->b_2255), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1)) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))) && (f_as_subtype_286((*(P897)rt_nil_check(F->e_765)).a) != NULL)) && (f_as_subtype_286((*(P897)rt_nil_check(F->e_765)).b) != NULL))) {
F->t_767v = g_ty_bool_978;
F->result_ = f_subtype_compare_756(f_as_subtype_286((*(P897)rt_nil_check(F->e_765)).a), f_as_subtype_286((*(P897)rt_nil_check(F->e_765)).b), &(((P890)rt_nil_check(F->op_2232))->all), rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P890)rt_nil_check(F->op_2232))->all)) && (!rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2256 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, NULL, &F->hint_2235));
} else if ((rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2235 = f_peek_type_716((*(P897)rt_nil_check(F->e_765)).b);
}
{
F->a_2257 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, F->hint_2235, &F->ta_2233));
F->b_2258 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, F->ta_2233, &F->tb_2234));
F->ct_2259 = NULL;
F->ct_2259 = f_base_of_215(F->ta_2233);
F->t_767v = g_ty_bool_978;
if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) != (((rt_int)11LL))))) {
f_check_type_224(F->tb_2234, F->ta_2233, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)11LL)))) {
F->ct_2259 = f_base_of_215(F->tb_2234);
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2258), rt_str(", ", 2)), F->a_2257), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2258), rt_str(", ", 2)), F->a_2257), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2258), rt_str(", ", 2)), F->a_2257), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2257), rt_str(", ", 2)), F->b_2258), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2258), rt_str(", ", 2)), F->a_2257), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P903)rt_nil_check(F->ct_2259)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1)))) && (!rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_357(F->ct_2259)) {
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_381(F->ct_2259, &F->a_2257, &F->b_2258);
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_381(F->ct_2259, &F->a_2257, &F->b_2258)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2257), rt_str(" == ", 4)), F->b_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2257), rt_str(" != ", 4)), F->b_2258), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2257), rt_str(" ", 1)), (((P890)rt_nil_check(F->op_2232))->all)), rt_str(" ", 1)), F->b_2258), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2260 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).a, F->want_766, &F->ta_2233));
F->b_2261 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->e_765)).b, f_exponent_want_875(&(((P890)rt_nil_check(F->op_2232))->all), F->ta_2233), &F->tb_2234));
if (((rt_r_ichk((*(P903)rt_nil_check(F->ta_2233)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P903)rt_nil_check(F->tb_2234)).kind) == (((rt_int)3LL))))) {
F->t_767v = g_ty_float_979;
if (((rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("+", 1)) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("-", 1))) || rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2260), rt_str(" ", 1)), (((P890)rt_nil_check(F->op_2232))->all)), rt_str(" ", 1)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("**", 2))) {
f_check_type_224(F->tb_2234, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
}
}
f_check_type_224(F->ta_2233, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2234, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line));
F->t_767v = g_ty_int_977;
if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P890)rt_nil_check(F->op_2232))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2260), rt_str(", ", 2)), F->b_2261), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P890)rt_nil_check(F->op_2232))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_767) = F->t_767v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_773(P897 e_769, P903 want_770, P899 ctx_771, P903 *t_772) {
  struct f_constructor_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_769 = e_769;
F->want_770 = want_770;
F->ctx_771 = ctx_771;
F->t_772 = t_772;
F->t_772v = *F->t_772;
F->it_2262 = NULL;
F->it_2262 = (*(P897)rt_nil_check(F->e_769)).a;
F->f_2263 = NULL;
F->vt_2264 = NULL;
if (((F->want_770 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_770)).kind) == (((rt_int)16LL))))) {
F->s_2265 = NULL;
F->s_2265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_295(F->want_770); b_; }));
F->t_772v = F->want_770;
while ((F->it_2262 != NULL)) {
F->v_2266 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->it_2262)).b, (*(P903)rt_nil_check(F->want_770)).elem, &F->vt_2264));
f_check_type_224(F->vt_2264, (*(P903)rt_nil_check(F->want_770)).elem, rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line));
F->s_2265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P890)rt_nil_check(F->s_2265))->all)), rt_str(", ", 2)), F->v_2266), rt_str(")", 1)); b_; }));
F->it_2262 = (*(P897)rt_nil_check(F->it_2262)).next;
}
F->result_ = (((P890)rt_nil_check(F->s_2265))->all);
goto ret_;
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_770)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P890)rt_nil_check((*(P903)rt_nil_check(F->want_770)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_770)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_787(F->e_769, F->want_770, F->ctx_771, &F->t_772v);
goto ret_;
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->want_770)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2262 == NULL) || ((*(P897)rt_nil_check(F->it_2262)).next != NULL)) || ((*(P897)rt_nil_check(F->it_2262)).a == NULL)) || ((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2262)).a)).next != NULL)) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2262)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2263 = (*(P903)rt_nil_check(F->want_770)).fields;
{
F->i_2267 = RT_R_IUNDEF;
F->i_2267 = ((rt_int)0LL);
F->tmp_2268 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2263 != NULL) && (!rt_str_eq((((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2262)).a)).a)).name))->all))))) {
F->i_2267 = rt_add(rt_r_ichk(F->i_2267), ((rt_int)1LL));
F->f_2263 = (*(P905)rt_nil_check(F->f_2263)).next;
}
if ((F->f_2263 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2262)).a)).a)).name))->all)); b_; }));
}
F->t_772v = F->want_770;
g_cons_ctx_968 = (*(P905)rt_nil_check(F->f_2263)).c;
{
F->v_2269 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->it_2262)).b, (*(P905)rt_nil_check(F->f_2263)).t, &F->vt_2264));
f_check_type_224(F->vt_2264, (*(P905)rt_nil_check(F->f_2263)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_770)), rt_str(" ", 1)), F->tmp_2268), rt_str("; ", 2)), F->tmp_2268), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2267))), rt_str("; ", 2)), F->tmp_2268), rt_str(".u.", 3)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P905)rt_nil_check(F->f_2263)).t, (*(P905)rt_nil_check(F->f_2263)).c, &F->v_2269)), rt_str("; ", 2)), F->tmp_2268), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_770 == NULL) || (rt_r_ichk((*(P903)rt_nil_check(F->want_770)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_772v = F->want_770;
F->f_2263 = (*(P903)rt_nil_check(F->want_770)).fields;
{
F->tmp_2270 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2271 = NULL;
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_770)), rt_str(" ", 1)), F->tmp_2270), rt_str(";", 1)); b_; }));
while ((F->it_2262 != NULL)) {
F->k_2272 = NULL;
F->k_2272 = (*(P897)rt_nil_check(F->it_2262)).a;
F->shared_2273 = NULL;
if ((F->k_2272 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2272 != NULL)) {
if (((((F->f_2263 == NULL) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->k_2272)).a)).kind) != (((rt_int)7LL)))) || ((*(P897)rt_nil_check(F->k_2272)).b != NULL)) || (!rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->k_2272)).a)).name))->all), (((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all))))) {
if ((F->f_2263 == NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2262)).a)).next == NULL)) {
g_cons_ctx_968 = (*(P905)rt_nil_check(F->f_2263)).c;
{
F->v_2274 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->it_2262)).b, (*(P905)rt_nil_check(F->f_2263)).t, &F->vt_2264));
f_check_type_224(F->vt_2264, (*(P905)rt_nil_check(F->f_2263)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line));
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), F->tmp_2270), rt_str(".", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P905)rt_nil_check(F->f_2263)).t, (*(P905)rt_nil_check(F->f_2263)).c, &F->v_2274)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2273 == NULL)) {
F->v_2275 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->it_2262)).b, (*(P905)rt_nil_check(F->f_2263)).t, &F->vt_2264));
F->shared_2273 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_224(F->vt_2264, (*(P905)rt_nil_check(F->f_2263)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line));
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), f_ctype_226((*(P905)rt_nil_check(F->f_2263)).t)), rt_str(" ", 1)), (((P890)rt_nil_check(F->shared_2273))->all)), rt_str(" = ", 3)), F->v_2275), rt_str(";", 1)); b_; }));
}
f_check_type_224(F->vt_2264, (*(P905)rt_nil_check(F->f_2263)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line));
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), F->tmp_2270), rt_str(".", 1)), f_field_c_17(&(((P890)rt_nil_check((*(P905)rt_nil_check(F->f_2263)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P905)rt_nil_check(F->f_2263)).t, (*(P905)rt_nil_check(F->f_2263)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377((*(P905)rt_nil_check(F->f_2263)).t, &(((P890)rt_nil_check(F->shared_2273))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2263 = (*(P905)rt_nil_check(F->f_2263)).next;
F->k_2272 = (*(P897)rt_nil_check(F->k_2272)).next;
}
F->it_2262 = (*(P897)rt_nil_check(F->it_2262)).next;
}
if ((F->f_2263 != NULL)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), F->tmp_2270), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_772) = F->t_772v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_777(P903 t_774, P899 c_775, rstr *v_776) {
  struct f_comp_value_777fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_774 = t_774;
F->c_775 = c_775;
F->v_776 = v_776;
if (((F->c_775 == NULL) || (((*(P899)rt_nil_check(F->c_775)).lo != NULL) && f_has_at_779(&(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_775)).lo))->all))))) {
F->result_ = f_copy_code_377(F->t_774, &(*F->v_776));
goto ret_;
} else if ((((rt_r_ichk((*(P903)rt_nil_check(F->t_774)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->c_775)).slen != NULL)) && (!f_has_at_779(&(((P890)rt_nil_check((*(P899)rt_nil_check(F->c_775)).slen))->all))))) {
F->result_ = f_copy_code_377(F->t_774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_776)), rt_str(", ", 2)), (((P890)rt_nil_check((*(P899)rt_nil_check(F->c_775)).slen))->all)), rt_str(")", 1)); b_; }));
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
{ rt_int lo2277 = ((rt_int)1LL), hi2278 = ((rt_int)(((*F->s_778)).len));
for (rt_int it2279 = lo2277; it2279 <= hi2278; it2279++) {
F->i_2276 = it2279;
if ((rt_r_echk(rt_str_get((*F->s_778), F->i_2276)) == 64)) {
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

static rstr f_set_elem_782(P903 st_780, rstr *v_781) {
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

static rstr f_array_cons_787(P897 e_783, P903 at_784, P899 ctx_785, P903 *t_786) {
  struct f_array_cons_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_783 = e_783;
F->at_784 = at_784;
F->ctx_785 = ctx_785;
F->t_786 = t_786;
F->t_786v = *F->t_786;
F->tmp_2280 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2281 = NULL;
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->at_784)), rt_str(" ", 1)), F->tmp_2280), rt_str(";", 1)); b_; }));
F->it_2282 = NULL;
F->it_2282 = (*(P897)rt_nil_check(F->e_783)).a;
F->positional_2283 = RT_R_EUNDEF;
F->positional_2283 = 1;
F->t_786v = F->at_784;
while ((F->it_2282 != NULL)) {
if (((*(P897)rt_nil_check(F->it_2282)).a != NULL)) {
F->positional_2283 = 0;
}
F->it_2282 = (*(P897)rt_nil_check(F->it_2282)).next;
}
{ rt_int lo2285 = ((rt_int)1LL), hi2286 = rt_r_ichk((*(P903)rt_nil_check(F->at_784)).ndim);
for (rt_int it2287 = lo2285; it2287 <= hi2286; it2287++) {
F->k_2284 = it2287;
F->lo_2288 = NULL;
F->hi_2289 = NULL;
if ((((F->ctx_785 != NULL) && (f_cons_lo_244(F->ctx_785, F->k_2284) != NULL)) && (!f_has_at_779(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P890)rt_nil_check(f_cons_lo_244(F->ctx_785, F->k_2284)))->all); b_; }))))) {
F->lo_2288 = f_cons_lo_244(F->ctx_785, F->k_2284);
F->hi_2289 = f_cons_hi_247(F->ctx_785, F->k_2284);
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->at_784)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2283))) {
if (((*(P903)rt_nil_check(f_base_of_215((*(P903)rt_nil_check(F->at_784)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2289 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->lo_2288))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P897)rt_nil_check(F->e_783)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_783)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2281))->all), rt_str(" ", 1)), F->tmp_2280), rt_str(".", 1)), f_dim_lo_234(F->k_2284)), rt_str(" = ", 3)), (((P890)rt_nil_check(F->lo_2288))->all)), rt_str("; ", 2)), F->tmp_2280), rt_str(".", 1)), f_dim_hi_236(F->k_2284)), rt_str(" = ", 3)), (((P890)rt_nil_check(F->hi_2289))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P903)rt_nil_check(F->at_784)).ndim) == ((rt_int)1LL))) {
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2281))->all), rt_str(" ", 1)), F->tmp_2280), rt_str(".lo2 = ", 7)), F->tmp_2280), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2281))->all), rt_str(" rt_int n_", 10)), F->tmp_2280), rt_str(" = ", 3)), f_acnt_241(F->at_784, &F->tmp_2280)), rt_str("; ", 2)), F->tmp_2280), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P903)rt_nil_check(F->at_784)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2280), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2280), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2280), rt_str(" + 1);", 6)); b_; }));
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->parts_2281))->all), f_fill_items_793((*(P897)rt_nil_check(F->e_783)).a, F->at_784, &F->tmp_2280, NULL, ((rt_int)1LL))); b_; }));
F->parts_2281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->parts_2281))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2280), rt_str("; i_++) if (seen_", 17)), F->tmp_2280), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2280), rt_str("; })", 4)); b_; }));
F->result_ = (((P890)rt_nil_check(F->parts_2281))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_786) = F->t_786v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_793(P897 items_788, P903 at_789, rstr *tmp_790, P901 prefix_791, rt_int dim_792) {
  struct f_fill_items_793fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_788 = items_788;
F->at_789 = at_789;
F->tmp_790 = tmp_790;
F->prefix_791 = prefix_791;
F->dim_792 = dim_792;
F->it_2290 = NULL;
F->it_2290 = F->items_788;
F->pos_2291 = RT_R_IUNDEF;
F->pos_2291 = ((rt_int)0LL);
F->r_2292 = NULL;
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2293 = NULL;
while ((F->it_2290 != NULL)) {
if (((*(P897)rt_nil_check(F->it_2290)).a == NULL)) {
if (((F->dim_792 < rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim)) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2290)).b)).kind) == (((rt_int)14LL))))) {
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_792)), rt_str(" = ", 3)), (*F->tmp_790)), rt_str(".", 1)), f_dim_lo_234(F->dim_792)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2291))), rt_str("; ", 2)), f_fill_items_793((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2290)).b)).a, F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)); b_; })), rt_add(F->dim_792, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2294 = rt_str_copy(f_item_value_803((*(P897)rt_nil_check(F->it_2290)).b, F->at_789, f_e_line_795(F->it_2290), &F->vt_2293));
if (((F->dim_792 == ((rt_int)1LL)) && (rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim) > ((rt_int)1LL)))) {
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" { ", 3)), F->v_2294), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2291))), rt_str(" >= n_", 6)), (*F->tmp_790)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_790)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2291))), rt_str("] = ", 4)), f_copy_code_377((*(P903)rt_nil_check(F->at_789)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_790)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2291))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" { ", 3)), F->v_2294), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_792)), rt_str(" = ", 3)), (*F->tmp_790)), rt_str(".", 1)), f_dim_lo_234(F->dim_792)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2291))), rt_str("; ", 2)), f_store_at_813(F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)); b_; })), F->dim_792)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2291 = rt_add(rt_r_ichk(F->pos_2291), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_792, f_list_len_67((*(P897)rt_nil_check(F->it_2290)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim))) {
F->k_2295 = NULL;
F->k_2295 = (*(P897)rt_nil_check(F->it_2290)).a;
F->d_2296 = RT_R_IUNDEF;
F->d_2296 = F->dim_792;
F->pre_2297 = NULL;
F->pre_2297 = F->prefix_791;
F->loops_2298 = NULL;
F->loops_2298 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2299 = NULL;
F->ends_2299 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2300 = rt_str_copy(f_item_value_803((*(P897)rt_nil_check(F->it_2290)).b, F->at_789, rt_r_ichk((*(P897)rt_nil_check(F->it_2290)).line), &F->vt_2293));
while ((F->k_2295 != NULL)) {
F->xv_2301 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2296))));
F->loops_2298 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->loops_2298))->all), f_key_loop_808(F->k_2295, F->at_789, rt_r_ichk(F->d_2296), &F->xv_2301)); b_; }));
F->ends_2299 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->ends_2299))->all), rt_str(" }", 2)); b_; }));
F->pre_2297 = f_add_line_798(F->pre_2297, &F->xv_2301);
F->d_2296 = rt_add(rt_r_ichk(F->d_2296), ((rt_int)1LL));
F->k_2295 = (*(P897)rt_nil_check(F->k_2295)).next;
}
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" { ", 3)), F->v_2300), (((P890)rt_nil_check(F->loops_2298))->all)), rt_str(" ", 1)), f_store_at_813(F->at_789, &(*F->tmp_790), F->pre_2297, rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim))), (((P890)rt_nil_check(F->ends_2299))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_792 == rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim)) || (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2290)).b)).kind) == (((rt_int)14LL))))) {
F->k_2302 = NULL;
F->k_2302 = (*(P897)rt_nil_check(F->it_2290)).a;
while ((F->k_2302 != NULL)) {
F->xv_2303 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)));
if ((F->dim_792 < rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim))) {
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" {", 2)), f_key_loop_808(F->k_2302, F->at_789, F->dim_792, &F->xv_2303)), rt_str(" ", 1)), f_fill_items_793((*(P897)rt_nil_check((*(P897)rt_nil_check(F->it_2290)).b)).a, F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, &F->xv_2303), rt_add(F->dim_792, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2304 = rt_str_copy(f_item_value_803((*(P897)rt_nil_check(F->it_2290)).b, F->at_789, rt_r_ichk((*(P897)rt_nil_check(F->it_2290)).line), &F->vt_2293));
F->r_2292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2292))->all), rt_str(" { ", 3)), F->v_2304), f_key_loop_808(F->k_2302, F->at_789, F->dim_792, &F->xv_2303)), rt_str(" ", 1)), f_store_at_813(F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, &F->xv_2303), F->dim_792)), rt_str(" } }", 4)); b_; }));
}
F->k_2302 = (*(P897)rt_nil_check(F->k_2302)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->it_2290)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P903)rt_nil_check(F->at_789)).ndim), F->dim_792), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2290 = (*(P897)rt_nil_check(F->it_2290)).next;
}
F->result_ = (((P890)rt_nil_check(F->r_2292))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_795(P897 e_794) {
  struct f_e_line_795fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_794 = e_794;
F->result_ = rt_r_ichk((*(P897)rt_nil_check(F->e_794)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P901 f_add_line_798(P901 l_796, rstr *s_797) {
  struct f_add_line_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_796 = l_796;
F->s_797 = s_797;
F->r_2305 = NULL;
F->tail_2306 = NULL;
F->x_2307 = NULL;
F->p_2308 = NULL;
F->p_2308 = F->l_796;
while ((F->p_2308 != NULL)) {
{ R902 *cell2309 = rt_alloc(sizeof(R902));
(*cell2309).s = NULL;
(*cell2309).next = NULL;
F->x_2307 = cell2309;
}
(*(P901)rt_nil_check(F->x_2307)).s = (*(P901)rt_nil_check(F->p_2308)).s;
if ((F->tail_2306 == NULL)) {
F->r_2305 = F->x_2307;
} else {
(*(P901)rt_nil_check(F->tail_2306)).next = F->x_2307;
}
F->tail_2306 = F->x_2307;
F->p_2308 = (*(P901)rt_nil_check(F->p_2308)).next;
}
{ R902 *cell2310 = rt_alloc(sizeof(R902));
(*cell2310).s = NULL;
(*cell2310).next = NULL;
F->x_2307 = cell2310;
}
(*(P901)rt_nil_check(F->x_2307)).s = f_mk_3(&(*F->s_797));
if ((F->tail_2306 == NULL)) {
F->r_2305 = F->x_2307;
} else {
(*(P901)rt_nil_check(F->tail_2306)).next = F->x_2307;
}
F->result_ = F->r_2305;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_803(P897 e_799, P903 at_800, rt_int line_801, P903 *vt_802) {
  struct f_item_value_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_799 = e_799;
F->at_800 = at_800;
F->line_801 = line_801;
F->vt_802 = vt_802;
F->vt_802v = *F->vt_802;
g_cons_ctx_968 = (*(P903)rt_nil_check(F->at_800)).elemcons;
{
F->v_2311 = rt_str_copy(f_gexpr_700(F->e_799, (*(P903)rt_nil_check(F->at_800)).elem, &F->vt_802v));
f_check_type_224(F->vt_802v, (*(P903)rt_nil_check(F->at_800)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P903)rt_nil_check(F->at_800)).elem), rt_str(" v_ = ", 6)), f_comp_value_777((*(P903)rt_nil_check(F->at_800)).elem, (*(P903)rt_nil_check(F->at_800)).elemcons, &F->v_2311)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_802) = F->vt_802v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_808(P897 k_804, P903 at_805, rt_int d_806, rstr *xv_807) {
  struct f_key_loop_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_804 = k_804;
F->at_805 = at_805;
F->d_806 = d_806;
F->xv_807 = xv_807;
F->it_2312 = NULL;
F->lo_2313 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->k_804)).a, f_idx_type_250(F->at_805, F->d_806), &F->it_2312));
f_check_type_224(F->it_2312, f_idx_type_250(F->at_805, F->d_806), rt_r_ichk((*(P897)rt_nil_check(F->k_804)).line));
if (((*(P897)rt_nil_check(F->k_804)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_807)), rt_str(" = ", 3)), F->lo_2313), rt_str(";", 1));
goto ret_;
}
{
F->hi_2314 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->k_804)).b, f_idx_type_250(F->at_805, F->d_806), &F->it_2312));
f_check_type_224(F->it_2312, f_idx_type_250(F->at_805, F->d_806), rt_r_ichk((*(P897)rt_nil_check(F->k_804)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_807)), rt_str(" = ", 3)), F->lo_2313), rt_str(", h", 3)), (*F->xv_807)), rt_str(" = ", 3)), F->hi_2314), rt_str("; ", 2)), (*F->xv_807)), rt_str(" <= h", 5)), (*F->xv_807)), rt_str("; ", 2)), (*F->xv_807)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_813(P903 at_809, rstr *tmp_810, P901 xs_811, rt_int n_812) {
  struct f_store_at_813fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_809 = at_809;
F->tmp_810 = tmp_810;
F->xs_811 = xs_811;
F->n_812 = n_812;
F->off_2315 = NULL;
F->x_2316 = NULL;
F->x_2316 = F->xs_811;
F->k_2317 = RT_R_IUNDEF;
F->k_2317 = ((rt_int)0LL);
while ((F->x_2316 != NULL)) {
F->k_2317 = rt_add(rt_r_ichk(F->k_2317), ((rt_int)1LL));
{
F->l_2318 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_810), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2317))));
F->h_2319 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_810), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2317))));
if ((F->off_2315 == NULL)) {
F->off_2315 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P890)rt_nil_check((*(P901)rt_nil_check(F->x_2316)).s))->all)), rt_str(", ", 2)), F->l_2318), rt_str(", ", 2)), F->h_2319), rt_str(") - ", 4)), F->l_2318), rt_str(")", 1)); b_; }));
} else {
F->off_2315 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->off_2315))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2318), rt_str(", ", 2)), F->h_2319), rt_str(") + rt_index(", 13)), (((P890)rt_nil_check((*(P901)rt_nil_check(F->x_2316)).s))->all)), rt_str(", ", 2)), F->l_2318), rt_str(", ", 2)), F->h_2319), rt_str(") - ", 4)), F->l_2318), rt_str(")", 1)); b_; }));
}
}
F->x_2316 = (*(P901)rt_nil_check(F->x_2316)).next;
}
if ((rt_r_ichk(F->k_2317) != rt_r_ichk((*(P903)rt_nil_check(F->at_809)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P903)rt_nil_check(F->at_809)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P890)rt_nil_check(F->off_2315))->all)), rt_str("; ", 2)), (*F->tmp_810)), rt_str(".p[o_] = ", 9)), f_copy_code_377((*(P903)rt_nil_check(F->at_809)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_810)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_816(P907 y_814, P897 args_815) {
  struct f_fits_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_814 = y_814;
F->args_815 = args_815;
F->a_2320 = NULL;
F->a_2320 = F->args_815;
F->pm_2321 = NULL;
F->pm_2321 = (*(P907)rt_nil_check(F->y_814)).params;
F->t_2322 = NULL;
F->saved_2323 = NULL;
F->saved_2323 = g_code_947;
F->ok_2324 = RT_R_EUNDEF;
F->ok_2324 = 1;
F->lv_2325 = NULL;
F->lc_2326 = NULL;
F->ro_2327 = RT_R_EUNDEF;
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = f_new_buffer_24();
{ rt_frame xf2328;
if (RT_TRY(xf2328)) {
while (((rt_r_echk(F->ok_2324) && (F->a_2320 != NULL)) && (F->pm_2321 != NULL))) {
if (((rt_r_ichk((*(P909)rt_nil_check(F->pm_2321)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P909)rt_nil_check(F->pm_2321)).mode) == (((rt_int)3LL))))) {
f_lvalue_669(F->a_2320, &F->lv_2325, &F->t_2322, &F->lc_2326, &F->ro_2327);
} else {
F->v_2330 = rt_str_copy(f_gexpr_700(F->a_2320, (*(P909)rt_nil_check(F->pm_2321)).t, &F->t_2322));
}
if ((!(f_same_213(F->t_2322, (*(P909)rt_nil_check(F->pm_2321)).t) || ((rt_r_ichk((*(P903)rt_nil_check(F->t_2322)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P903)rt_nil_check((*(P909)rt_nil_check(F->pm_2321)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2324 = 0;
}
F->a_2320 = (*(P897)rt_nil_check(F->a_2320)).next;
F->pm_2321 = (*(P909)rt_nil_check(F->pm_2321)).next;
}
if (((F->a_2320 != NULL) || (F->pm_2321 != NULL))) {
F->ok_2324 = 0;
}
RT_POP(xf2328);
} else {
RT_POP(xf2328);
int x2329 = rt_xcur;
if (0 || x2329 == ex_compile_error_1) {
F->ok_2324 = 0;
} else {
rt_raise(x2329);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = F->saved_2323;
F->result_ = rt_r_echk(F->ok_2324);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_resolve_overload_822(rstr *name_817, P897 tt_818, P897 args_819, int is_stmt_820, rt_int line_821) {
  struct f_resolve_overload_822fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_817 = name_817;
F->tt_818 = tt_818;
F->args_819 = args_819;
F->is_stmt_820 = is_stmt_820;
F->line_821 = line_821;
F->y_2331 = NULL;
F->first_2332 = NULL;
F->n_2333 = RT_R_IUNDEF;
F->n_2333 = ((rt_int)0LL);
{ rt_int lo2335 = ((rt_int)1LL), hi2336 = ((rt_int)3LL);
for (rt_int it2337 = lo2335; it2337 <= hi2336; it2337++) {
F->pass_2334 = it2337;
F->y_2331 = f_overload_chain_828(&(*F->name_817), F->pass_2334);
while ((F->y_2331 != NULL)) {
if (((rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2331)).name))->all), (*F->name_817)) && ((rt_r_ichk((*(P907)rt_nil_check(F->y_2331)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2331)).kind) == (((rt_int)4LL))))) && ((F->pass_2334 != ((rt_int)1LL)) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2331)).depth) >= rt_r_ichk(g_gdepth_966))))) {
F->n_2333 = rt_add(rt_r_ichk(F->n_2333), ((rt_int)1LL));
if ((F->first_2332 == NULL)) {
F->first_2332 = F->y_2331;
}
if (((((rt_r_ichk((*(P907)rt_nil_check(F->y_2331)).kind) == (((rt_int)4LL))) == F->is_stmt_820) && f_tt_fits_825(F->y_2331, F->tt_818)) && f_fits_816(F->y_2331, F->args_819))) {
F->result_ = F->y_2331;
goto ret_;
}
}
F->y_2331 = (*(P907)rt_nil_check(F->y_2331)).chain;
}
}
}
if (f_is_builtin_830(&(*F->name_817))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2333) > ((rt_int)1LL))) {
f_fail_23(F->line_821, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_817)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2332;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_825(P907 y_823, P897 tt_824) {
  struct f_tt_fits_825fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_823 = y_823;
F->tt_824 = tt_824;
F->f_2338 = NULL;
F->a_2339 = NULL;
F->saved_2340 = NULL;
F->saved_2340 = g_code_947;
F->ok_2341 = RT_R_EUNDEF;
F->ok_2341 = 1;
if ((((*(P907)rt_nil_check(F->y_823)).decl == NULL) || ((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_823)).decl)).e == NULL))) {
F->result_ = (F->tt_824 == NULL);
goto ret_;
} else if ((F->tt_824 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2338 = (*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_823)).decl)).e;
F->a_2339 = F->tt_824;
g_trial_975 = rt_add(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = f_new_buffer_24();
{ rt_frame xf2342;
if (RT_TRY(xf2342)) {
while (((rt_r_echk(F->ok_2341) && (F->f_2338 != NULL)) && (F->a_2339 != NULL))) {
F->fc_2344 = NULL;
F->ac_2345 = NULL;
F->fst_2346 = NULL;
F->fst_2346 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->f_2338)).line));
F->ft_2347 = NULL;
F->at_2348 = NULL;
(*(P897)rt_nil_check(F->fst_2346)).name = (*(P897)rt_nil_check(F->f_2338)).name;
F->ft_2347 = f_resolve_subtype_257(F->fst_2346, &F->fc_2344);
if ((rt_r_ichk((*(P897)rt_nil_check(F->a_2339)).kind) >= (((rt_int)70LL)))) {
F->at_2348 = f_resolve_subtype_257(F->a_2339, &F->ac_2345);
} else {
F->ast_2349 = NULL;
F->ast_2349 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P897)rt_nil_check(F->a_2339)).line));
(*(P897)rt_nil_check(F->ast_2349)).name = (*(P897)rt_nil_check(F->a_2339)).name;
F->at_2348 = f_resolve_subtype_257(F->ast_2349, &F->ac_2345);
}
F->ok_2341 = f_same_213(F->ft_2347, F->at_2348);
F->f_2338 = (*(P897)rt_nil_check(F->f_2338)).next;
F->a_2339 = (*(P897)rt_nil_check(F->a_2339)).next;
}
F->ok_2341 = ((rt_r_echk(F->ok_2341) && (F->f_2338 == NULL)) && (F->a_2339 == NULL));
RT_POP(xf2342);
} else {
RT_POP(xf2342);
int x2343 = rt_xcur;
if (0 || x2343 == ex_compile_error_1) {
F->ok_2341 = 0;
} else {
rt_raise(x2343);
}
}
}
g_trial_975 = rt_sub(rt_r_ichk(g_trial_975), ((rt_int)1LL));
g_code_947 = F->saved_2340;
F->result_ = rt_r_echk(F->ok_2341);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_overload_chain_828(rstr *name_826, rt_int pass_827) {
  struct f_overload_chain_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_826 = name_826;
F->pass_827 = pass_827;
if (((g_genv_934 == NULL) && (F->pass_827 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_827 == ((rt_int)2LL))) {
F->result_ = ({ A913 b_ = (((P911)rt_nil_check(g_genv_934))->all); b_.p[(rt_index(f_hash_153(&(*F->name_826)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A913 b_ = (((P911)rt_nil_check(g_table_933))->all); b_.p[(rt_index(f_hash_153(&(*F->name_826)), b_.lo, b_.hi) - b_.lo)]; });
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

static rstr f_me_high_836(P897 tt_833, rt_int line_834, P903 *t_835) {
  struct f_me_high_836fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_833 = tt_833;
F->line_834 = line_834;
F->t_835 = t_835;
F->t_835v = *F->t_835;
F->c_2350 = NULL;
if ((F->tt_833 == NULL)) {
f_fail_23(F->line_834, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_835v = f_resolve_subtype_257(F->tt_833, &F->c_2350);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_835v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_838(F->t_835v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_835) = F->t_835v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_838(P903 t_837) {
  struct f_type_tag_838fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_837 = t_837;
if (((*(P903)rt_nil_check(F->t_837)).name != NULL)) {
F->result_ = (((P890)rt_nil_check((*(P903)rt_nil_check(F->t_837)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_841(P897 e_839, rstr *name_840) {
  struct f_lock_ref_841fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_839 = e_839;
F->name_840 = name_840;
F->lv_2351 = NULL;
F->t_2352 = NULL;
F->c_2353 = NULL;
F->ro_2354 = RT_R_EUNDEF;
f_lvalue_669(F->e_839, &F->lv_2351, &F->t_2352, &F->c_2353, &F->ro_2354);
if ((rt_r_ichk((*(P903)rt_nil_check(F->t_2352)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_839)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_840), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P890)rt_nil_check(F->lv_2351))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P907 f_user_op_844(rstr *op_842, P897 args_843) {
  struct f_user_op_844fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_842 = op_842;
F->args_843 = args_843;
F->y_2355 = NULL;
{ rt_int lo2357 = ((rt_int)1LL), hi2358 = ((rt_int)3LL);
for (rt_int it2359 = lo2357; it2359 <= hi2358; it2359++) {
F->pass_2356 = it2359;
F->y_2355 = f_overload_chain_828(&(*F->op_842), F->pass_2356);
while ((F->y_2355 != NULL)) {
if ((((rt_str_eq((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2355)).name))->all), (*F->op_842)) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2355)).kind) == (((rt_int)3LL)))) && ((F->pass_2356 != ((rt_int)1LL)) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2355)).depth) >= rt_r_ichk(g_gdepth_966)))) && f_fits_816(F->y_2355, F->args_843))) {
F->result_ = F->y_2355;
goto ret_;
}
F->y_2355 = (*(P907)rt_nil_check(F->y_2355)).chain;
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

static rstr f_gcall_848(P897 e_845, int is_stmt_846, P903 *t_847) {
  struct f_gcall_848fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_845 = e_845;
F->is_stmt_846 = is_stmt_846;
F->t_847 = t_847;
F->t_847v = *F->t_847;
F->gd_2360 = NULL;
F->fn_2361 = NULL;
F->fn_2361 = (*(P897)rt_nil_check(F->e_845)).a;
F->tt_2362 = NULL;
F->y_2363 = NULL;
F->args_2364 = NULL;
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2365 = NULL;
F->a_2365 = (*(P897)rt_nil_check(F->e_845)).b;
F->pm_2366 = NULL;
F->lt_2367 = NULL;
F->vt_2368 = NULL;
F->lv_2369 = NULL;
F->lc_2370 = NULL;
F->ro_2371 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P897)rt_nil_check(F->fn_2361)).kind) == (((rt_int)12LL)))) {
F->tt_2362 = (*(P897)rt_nil_check(F->fn_2361)).b;
F->fn_2361 = (*(P897)rt_nil_check(F->fn_2361)).a;
}
F->y_2363 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all));
if ((F->y_2363 == NULL)) {
F->result_ = f_builtin_886(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
if ((((rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)10LL))))) {
F->alt_2372 = NULL;
F->alt_2372 = f_resolve_overload_822(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, F->is_stmt_846, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
if ((F->alt_2372 != NULL)) {
F->y_2363 = F->alt_2372;
} else if (f_is_builtin_830(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all))) {
F->result_ = f_builtin_886(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
}
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) == (((rt_int)10LL)))) {
F->gd_2360 = (*(P907)rt_nil_check(F->y_2363)).decl;
F->y_2363 = f_instantiate_645(F->y_2363, F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
} else if (((rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) == (((rt_int)4LL))))) {
F->y_2363 = f_resolve_overload_822(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, F->is_stmt_846, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
if ((F->y_2363 == NULL)) {
F->result_ = f_builtin_886(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), F->tt_2362, (*(P897)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
}
if (((rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_862(F->y_2363, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
if (((*(P907)rt_nil_check(F->y_2363)).capn != NULL)) {
F->cr_2373 = NULL;
F->cr_2373 = g_caps_952;
while ((F->cr_2373 != NULL)) {
if (((*(P924)rt_nil_check(F->cr_2373)).d == (*(P907)rt_nil_check(F->y_2363)).capn)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2363)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2373 = (*(P924)rt_nil_check(F->cr_2373)).next;
}
}
if ((F->is_stmt_846 && (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_846) && (rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2366 = (*(P907)rt_nil_check(F->y_2363)).params;
if ((rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).level) > ((rt_int)0LL))) {
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2375 = ((rt_int)1LL), hi2376 = rt_sub(rt_r_ichk(g_cur_level_950), rt_r_ichk((*(P907)rt_nil_check(F->y_2363)).level));
for (rt_int it2377 = lo2375; it2377 <= hi2376; it2377++) {
F->i_2374 = it2377;
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2365 != NULL) && (F->pm_2366 != NULL))) {
if ((((rt_int)(((((P890)rt_nil_check(F->args_2364))->all)).len)) > ((rt_int)0LL))) {
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P909)rt_nil_check(F->pm_2366)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P909)rt_nil_check(F->pm_2366)).mode) == (((rt_int)3LL))))) {
f_lvalue_669(F->a_2365, &F->lv_2369, &F->lt_2367, &F->lc_2370, &F->ro_2371);
if (rt_r_echk(F->ro_2371)) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check((*(P909)rt_nil_check(F->pm_2366)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_224(F->lt_2367, (*(P909)rt_nil_check(F->pm_2366)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str("&", 1)), (((P890)rt_nil_check(F->lv_2369))->all)), f_actual_bounds_879((*(P909)rt_nil_check(F->pm_2366)).t, F->lt_2367, F->lc_2370)); b_; }));
} else if (((rt_r_ichk((*(P909)rt_nil_check(F->pm_2366)).mode) == (((rt_int)4LL))) && f_is_lvalue_663(F->a_2365))) {
f_lvalue_669(F->a_2365, &F->lv_2369, &F->lt_2367, &F->lc_2370, &F->ro_2371);
f_check_type_224(F->lt_2367, (*(P909)rt_nil_check(F->pm_2366)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str("&", 1)), (((P890)rt_nil_check(F->lv_2369))->all)), f_actual_bounds_879((*(P909)rt_nil_check(F->pm_2366)).t, F->lt_2367, F->lc_2370)); b_; }));
} else if ((rt_r_ichk((*(P909)rt_nil_check(F->pm_2366)).mode) == (((rt_int)4LL)))) {
F->v_2378 = rt_str_copy(f_gexpr_in_708(F->a_2365, (*(P909)rt_nil_check(F->pm_2366)).t, (*(P909)rt_nil_check(F->pm_2366)).c, &F->vt_2368));
F->ct_2379 = rt_str_copy(f_ctype_226((*(P909)rt_nil_check(F->pm_2366)).t));
f_check_type_224(F->vt_2368, (*(P909)rt_nil_check(F->pm_2366)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str("({ ", 3)), F->ct_2379), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2379), rt_str(")); *b_ = ", 10)), F->v_2378), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_178((*(P909)rt_nil_check(F->pm_2366)).t)) {
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2380 = rt_str_copy(f_gexpr_in_708(F->a_2365, (*(P909)rt_nil_check(F->pm_2366)).t, (*(P909)rt_nil_check(F->pm_2366)).c, &F->vt_2368));
f_check_type_224(F->vt_2368, (*(P909)rt_nil_check(F->pm_2366)).t, rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line));
F->args_2364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->args_2364))->all), F->v_2380); b_; }));
}
F->a_2365 = (*(P897)rt_nil_check(F->a_2365)).next;
F->pm_2366 = (*(P909)rt_nil_check(F->pm_2366)).next;
}
if (((F->a_2365 != NULL) || (F->pm_2366 != NULL))) {
f_fail_23(rt_r_ichk((*(P897)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P897)rt_nil_check(F->fn_2361)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P897)rt_nil_check(F->e_845)).b), f_list_len_67(F->a_2365)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_847v = (*(P907)rt_nil_check(F->y_2363)).result;
if ((F->gd_2360 != NULL)) {
F->chk_2381 = rt_str_copy(f_same_subtypes_867(F->gd_2360, (*(P897)rt_nil_check(F->e_845)).b));
if ((!rt_str_eq(F->chk_2381, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2381), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2363)).cname))->all)), rt_str("(", 1)), (((P890)rt_nil_check(F->args_2364))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_2363)).cname))->all), rt_str("(", 1)), (((P890)rt_nil_check(F->args_2364))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_847) = F->t_847v;
  RT_FPOP();
  return F->result_;
}

static P901 f_requires_850(P907 y_849) {
  struct f_requires_850fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_849 = y_849;
if (rt_r_echk((*(P907)rt_nil_check(F->y_849)).reqdone)) {
F->result_ = (*(P907)rt_nil_check(F->y_849)).reqs;
goto ret_;
}
(*(P907)rt_nil_check(F->y_849)).reqdone = 1;
if ((((*(P907)rt_nil_check(F->y_849)).decl != NULL) && (((rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2382 = NULL;
F->imp_2382 = (*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_849)).decl)).d;
while ((F->imp_2382 != NULL)) {
f_add_req_853(F->y_849, &(((P890)rt_nil_check((*(P897)rt_nil_check(F->imp_2382)).name))->all));
F->imp_2382 = (*(P897)rt_nil_check(F->imp_2382)).next;
}
f_require_calls_856(F->y_849, (*(P897)rt_nil_check((*(P907)rt_nil_check(F->y_849)).decl)).c);
}
F->result_ = (*(P907)rt_nil_check(F->y_849)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_853(P907 y_851, rstr *name_852) {
  struct f_add_req_853fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_851 = y_851;
F->name_852 = name_852;
F->l_2383 = NULL;
if ((!f_seen_name_388((*(P907)rt_nil_check(F->y_851)).reqs, &(*F->name_852)))) {
{ R902 *cell2384 = rt_alloc(sizeof(R902));
(*cell2384).s = NULL;
(*cell2384).next = NULL;
F->l_2383 = cell2384;
}
(*(P901)rt_nil_check(F->l_2383)).s = f_mk_3(&(*F->name_852));
(*(P901)rt_nil_check(F->l_2383)).next = (*(P907)rt_nil_check(F->y_851)).reqs;
(*(P907)rt_nil_check(F->y_851)).reqs = F->l_2383;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_856(P907 y_854, P897 e_855) {
  struct f_require_calls_856fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_854 = y_854;
F->e_855 = e_855;
F->x_2385 = NULL;
F->x_2385 = F->e_855;
while ((F->x_2385 != NULL)) {
if ((((((rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)51LL))))) {
F->x_2385 = (*(P897)rt_nil_check(F->x_2385)).next;
} else {
F->callee_2386 = NULL;
if (((((rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->x_2385)).kind) == (((rt_int)21LL)))) && ((*(P897)rt_nil_check(F->x_2385)).a != NULL)) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->x_2385)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2386 = (*(P897)rt_nil_check(F->x_2385)).a;
}
if ((F->callee_2386 != NULL)) {
F->z_2387 = NULL;
F->z_2387 = f_lookup_155(&(((P890)rt_nil_check((*(P897)rt_nil_check(F->callee_2386)).name))->all));
if ((((F->z_2387 != NULL) && (F->z_2387 != F->y_854)) && ((rt_r_ichk((*(P907)rt_nil_check(F->z_2387)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P907)rt_nil_check(F->z_2387)).kind) == (((rt_int)3LL)))))) {
F->l_2388 = NULL;
F->l_2388 = f_requires_850(F->z_2387);
while ((F->l_2388 != NULL)) {
f_add_req_853(F->y_854, &(((P890)rt_nil_check((*(P901)rt_nil_check(F->l_2388)).s))->all));
F->l_2388 = (*(P901)rt_nil_check(F->l_2388)).next;
}
}
}
if (((*(P897)rt_nil_check(F->x_2385)).a != NULL)) {
f_require_calls_856(F->y_854, (*(P897)rt_nil_check(F->x_2385)).a);
}
if (((*(P897)rt_nil_check(F->x_2385)).b != NULL)) {
f_require_calls_856(F->y_854, (*(P897)rt_nil_check(F->x_2385)).b);
}
if (((*(P897)rt_nil_check(F->x_2385)).c != NULL)) {
f_require_calls_856(F->y_854, (*(P897)rt_nil_check(F->x_2385)).c);
}
F->x_2385 = (*(P897)rt_nil_check(F->x_2385)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_859(P897 elems_857, rstr *name_858) {
  struct f_declared_in_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_857 = elems_857;
F->name_858 = name_858;
F->e_2389 = NULL;
F->e_2389 = F->elems_857;
while ((F->e_2389 != NULL)) {
if ((((rt_r_ichk((*(P897)rt_nil_check(F->e_2389)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P897)rt_nil_check(F->e_2389)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check(F->e_2389)).name))->all), (*F->name_858)))) {
F->result_ = 1;
goto ret_;
}
F->e_2389 = (*(P897)rt_nil_check(F->e_2389)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_862(P907 y_860, rt_int line_861) {
  struct f_check_requires_862fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_860 = y_860;
F->line_861 = line_861;
F->l_2390 = NULL;
F->l_2390 = f_requires_850(F->y_860);
if ((((*(P907)rt_nil_check(F->y_860)).home == NULL) || (rt_r_ichk((*(P907)rt_nil_check(F->y_860)).level) != rt_r_ichk(g_cur_level_950)))) {
goto ret_;
}
while ((F->l_2390 != NULL)) {
F->z_2391 = NULL;
F->z_2391 = f_lookup_155(&(((P890)rt_nil_check((*(P901)rt_nil_check(F->l_2390)).s))->all));
if ((f_declared_in_859((*(P907)rt_nil_check(F->y_860)).home, &(((P890)rt_nil_check((*(P901)rt_nil_check(F->l_2390)).s))->all)) && ((F->z_2391 == NULL) || (rt_r_ichk((*(P907)rt_nil_check(F->z_2391)).depth) < rt_r_ichk((*(P907)rt_nil_check(F->y_860)).depth))))) {
f_fail_23(F->line_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check((*(P907)rt_nil_check(F->y_860)).name))->all), rt_str(" requires ", 10)), (((P890)rt_nil_check((*(P901)rt_nil_check(F->l_2390)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2390 = (*(P901)rt_nil_check(F->l_2390)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_864(P897 args_863) {
  struct f_act_delay_args_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_863 = args_863;
F->at_2392 = NULL;
F->t1_2393 = NULL;
F->t1_2393 = f_peek_type_716(F->args_863);
if (((F->t1_2393 != NULL) && (rt_r_ichk((*(P903)rt_nil_check(F->t1_2393)).kind) == (((rt_int)14LL))))) {
F->a_2394 = rt_str_copy(f_act_ref_551(F->args_863));
F->v_2395 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_863)).next, g_ty_int_977, &F->at_2392));
f_check_type_224(F->at_2392, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->args_863)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2395, rt_str(", ", 2)), F->a_2394);
goto ret_;
}
{
F->v_2396 = rt_str_copy(f_gexpr_700(F->args_863, g_ty_int_977, &F->at_2392));
f_check_type_224(F->at_2392, g_ty_int_977, rt_r_ichk((*(P897)rt_nil_check(F->args_863)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2396, rt_str(", ", 2)), f_act_ref_551((*(P897)rt_nil_check(F->args_863)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_867(P897 gd_865, P897 args_866) {
  struct f_same_subtypes_867fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_865 = gd_865;
F->args_866 = args_866;
F->p_2397 = NULL;
F->p_2397 = (*(P897)rt_nil_check(F->gd_865)).a;
F->r_2398 = NULL;
F->r_2398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2397 != NULL)) {
if ((rt_r_ichk((*(P897)rt_nil_check(F->p_2397)).ival) == ((rt_int)2LL))) {
F->fp_2399 = NULL;
F->fp_2399 = (*(P897)rt_nil_check((*(P897)rt_nil_check(F->gd_865)).b)).a;
F->a_2400 = NULL;
F->a_2400 = F->args_866;
F->flo_2401 = NULL;
F->fhi_2402 = NULL;
while (((F->fp_2399 != NULL) && (F->a_2400 != NULL))) {
if ((((((*(P897)rt_nil_check(F->fp_2399)).a != NULL) && (rt_r_ichk((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2399)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P890)rt_nil_check((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2399)).a)).name))->all), (((P890)rt_nil_check((*(P897)rt_nil_check(F->p_2397)).name))->all))) && ((*(P897)rt_nil_check((*(P897)rt_nil_check(F->fp_2399)).a)).b == NULL))) {
F->st_2403 = NULL;
F->c_2404 = NULL;
F->base_2405 = NULL;
F->lo_2406 = NULL;
F->hi_2407 = NULL;
F->st_2403 = f_value_subtype_279(F->a_2400, &F->c_2404, &F->base_2405);
if (f_scalar_kind_178(F->st_2403)) {
F->lo_2406 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_190(F->st_2403, F->c_2404); b_; }));
F->hi_2407 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_193(F->st_2403, F->c_2404); b_; }));
} else if (((rt_r_ichk((*(P903)rt_nil_check(F->st_2403)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->c_2404)).slen != NULL))) {
F->lo_2406 = (*(P899)rt_nil_check(F->c_2404)).slen;
F->hi_2407 = (*(P899)rt_nil_check(F->c_2404)).slen;
}
if (((F->lo_2406 != NULL) && (F->flo_2401 != NULL))) {
if ((((rt_int)(((((P890)rt_nil_check(F->r_2398))->all)).len)) > ((rt_int)0LL))) {
F->r_2398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P890)rt_nil_check(F->r_2398))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->r_2398))->all), rt_str("(", 1)), (((P890)rt_nil_check(F->flo_2401))->all)), rt_str(") != (", 6)), (((P890)rt_nil_check(F->lo_2406))->all)), rt_str(") || (", 6)), (((P890)rt_nil_check(F->fhi_2402))->all)), rt_str(") != (", 6)), (((P890)rt_nil_check(F->hi_2407))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2406 != NULL)) {
F->flo_2401 = F->lo_2406;
F->fhi_2402 = F->hi_2407;
}
}
F->fp_2399 = (*(P897)rt_nil_check(F->fp_2399)).next;
F->a_2400 = (*(P897)rt_nil_check(F->a_2400)).next;
}
}
F->p_2397 = (*(P897)rt_nil_check(F->p_2397)).next;
}
F->result_ = (((P890)rt_nil_check(F->r_2398))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_872(rstr *name_868, P897 args_869, rt_int line_870, P903 *t_871) {
  struct f_mailbox_low_872fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_868 = name_868;
F->args_869 = args_869;
F->line_870 = line_870;
F->t_871 = t_871;
F->t_871v = *F->t_871;
F->qv_2408 = NULL;
F->mv_2409 = NULL;
F->dv_2410 = NULL;
F->qt_2411 = NULL;
F->mt_2412 = NULL;
F->dt_2413 = NULL;
F->at_2414 = NULL;
F->c_2415 = NULL;
F->ro_2416 = RT_R_EUNDEF;
F->send_2417 = RT_R_EUNDEF;
F->send_2417 = rt_str_eq(rt_str_slice((*F->name_868), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_669(F->args_869, &F->qv_2408, &F->qt_2411, &F->c_2415, &F->ro_2416);
f_lvalue_669((*(P897)rt_nil_check(F->args_869)).next, &F->mv_2409, &F->mt_2412, &F->c_2415, &F->ro_2416);
if ((rt_r_ichk((*(P903)rt_nil_check(F->mt_2412)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_868), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_871v = g_ty_void_982;
if (((rt_r_echk(F->send_2417) && (F->qt_2411 != g_ty_send_st_989)) || ((!rt_r_echk(F->send_2417)) && (F->qt_2411 != g_ty_receive_st_990)))) {
f_fail_23(F->line_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_868), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_868), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_868), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_868), rt_str("RECEIVE_TEST", 12)))) {
F->t_871v = g_ty_bool_978;
if (rt_r_echk(F->send_2417)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P890)rt_nil_check(F->mv_2409))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P890)rt_nil_check(F->mv_2409))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_868), rt_str("SEND_COMPLETE", 13))) {
F->v_2418 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_869)).next)).next, (*(P903)rt_nil_check(F->mt_2412)).elem, &F->at_2414));
f_check_type_224(F->at_2414, (*(P903)rt_nil_check(F->mt_2412)).elem, F->line_870);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P903)rt_nil_check(F->mt_2412)).elem)), rt_str(" m_ = ", 6)), F->v_2418), rt_str("; if (!rt_cond_send(", 20)), (((P890)rt_nil_check(F->mv_2409))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_868), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_669((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_869)).next)).next, &F->dv_2410, &F->dt_2413, &F->c_2415, &F->ro_2416);
f_check_type_224(F->dt_2413, (*(P903)rt_nil_check(F->mt_2412)).elem, F->line_870);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P890)rt_nil_check(F->mv_2409))->all)), rt_str(", &", 3)), (((P890)rt_nil_check(F->dv_2410))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P890)rt_nil_check(F->qv_2408))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_871) = F->t_871v;
  RT_FPOP();
  return F->result_;
}

static P903 f_exponent_want_875(rstr *op_873, P903 ta_874) {
  struct f_exponent_want_875fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_873 = op_873;
F->ta_874 = ta_874;
if (rt_str_eq((*F->op_873), rt_str("**", 2))) {
F->result_ = g_ty_int_977;
goto ret_;
}
F->result_ = F->ta_874;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_879(P903 ft_876, P903 t_877, P899 c_878) {
  struct f_actual_bounds_879fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_876 = ft_876;
F->t_877 = t_877;
F->c_878 = c_878;
if ((!f_scalar_kind_178(F->ft_876))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_190(F->t_877, F->c_878)), rt_str(", ", 2)), f_sub_hi_193(F->t_877, F->c_878));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_886(rstr *name_880, P897 tt_881, P897 args_882, rt_int line_883, int is_stmt_884, P903 *t_885) {
  struct f_builtin_886fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_880 = name_880;
F->tt_881 = tt_881;
F->args_882 = args_882;
F->line_883 = line_883;
F->is_stmt_884 = is_stmt_884;
F->t_885 = t_885;
F->t_885v = *F->t_885;
F->at_2419 = NULL;
F->n_2420 = RT_R_IUNDEF;
F->n_2420 = f_list_len_67(F->args_882);
F->t_885v = g_ty_void_982;
if (((rt_str_eq((*F->name_880), rt_str("POS", 3)) || rt_str_eq((*F->name_880), rt_str("SUCC", 4))) || rt_str_eq((*F->name_880), rt_str("PRED", 4)))) {
F->a_2421 = rt_str_copy(f_gexpr_700(F->args_882, NULL, &F->at_2419));
if (rt_str_eq((*F->name_880), rt_str("POS", 3))) {
if (((*(P903)rt_nil_check(f_base_of_215(F->at_2419))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2421), rt_str(") + 1)", 6));
goto ret_;
}
F->t_885v = F->at_2419;
if ((rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_880), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2421), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2421), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_880), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2421), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P903)rt_nil_check(f_base_of_215(F->at_2419))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2421), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P903)rt_nil_check(f_base_of_215(F->at_2419))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("FLOOR", 5))) {
F->a_2422 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_float_979, &F->at_2419));
f_check_type_224(F->at_2419, g_ty_float_979, F->line_883);
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2422), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_880), rt_str("ACTP", 4)) || rt_str_eq((*F->name_880), rt_str("RADIX", 5))) || rt_str_eq((*F->name_880), rt_str("EMIN", 4))) || rt_str_eq((*F->name_880), rt_str("EMAX", 4)))) {
F->a_2423 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_float_979, &F->at_2419));
f_check_type_224(F->at_2419, g_ty_float_979, F->line_883);
F->t_885v = g_ty_int_977;
if (rt_str_eq((*F->name_880), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_880), rt_str("SQRT", 4)) || rt_str_eq((*F->name_880), rt_str("SIN", 3))) || rt_str_eq((*F->name_880), rt_str("COS", 3))) || rt_str_eq((*F->name_880), rt_str("EXP", 3))) || rt_str_eq((*F->name_880), rt_str("LN", 2)))) {
F->a_2424 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_float_979, &F->at_2419));
F->t_885v = g_ty_float_979;
if (rt_str_eq((*F->name_880), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2424), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_880)), rt_str("(", 1)), F->a_2424), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("IFLOAT", 6))) {
F->a_2425 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, g_ty_int_977, &F->at_2419));
F->t_885v = g_ty_float_979;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2425), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("IFIX", 4))) {
F->a_2426 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_float_979, &F->at_2419));
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2426), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("FORMAT", 6))) {
F->a_2427 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_float_979, &F->at_2419));
F->n1_2428 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, g_ty_int_977, &F->at_2419));
F->m1_2429 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_882)).next)).next, g_ty_int_977, &F->at_2419));
F->t_885v = g_ty_string_981;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2427), rt_str(", ", 2)), F->n1_2428), rt_str(", ", 2)), F->m1_2429), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("ABS", 3))) {
F->a_2430 = rt_str_copy(f_gexpr_700(F->args_882, NULL, &F->at_2419));
F->t_885v = F->at_2419;
if ((rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2430), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2430), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("CNVT", 4))) {
if ((F->tt_881 == NULL)) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2431 = rt_str_copy(f_gexpr_700(F->args_882, NULL, &F->at_2419));
if (((rt_r_ichk((*(P897)rt_nil_check(F->tt_881)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)1LL))))) {
F->t_885v = g_ty_string_981;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2431), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->tt_881)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)3LL))))) {
F->t_885v = g_ty_string_981;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2431), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->tt_881)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)2LL))))) {
F->t_885v = g_ty_string_981;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2431), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P897)rt_nil_check(F->tt_881)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)5LL))))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2431), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_880), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2420) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2432 = NULL;
F->last_2432 = F->args_882;
while (((*(P897)rt_nil_check(F->last_2432)).next != NULL)) {
F->last_2432 = (*(P897)rt_nil_check(F->last_2432)).next;
}
{
F->a_2433 = rt_str_copy(f_gexpr_700(F->last_2432, g_ty_string_981, &F->at_2419));
f_check_type_224(F->at_2419, g_ty_string_981, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2433), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_880), rt_str("WRITE", 5))) {
F->a_2434 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, NULL, &F->at_2419));
if ((rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2434), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P903)rt_nil_check(F->at_2419)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2434), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_880), rt_str("READLN", 6))) {
F->lv_2435 = NULL;
F->lc_2436 = NULL;
F->ro_2437 = RT_R_EUNDEF;
F->last_2438 = NULL;
F->last_2438 = F->args_882;
while (((*(P897)rt_nil_check(F->last_2438)).next != NULL)) {
F->last_2438 = (*(P897)rt_nil_check(F->last_2438)).next;
}
f_lvalue_669(F->last_2438, &F->lv_2435, &F->at_2419, &F->lc_2436, &F->ro_2437);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P890)rt_nil_check(F->lv_2435))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("SIZELN", 6))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("EOF", 3))) {
F->t_885v = g_ty_bool_978;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_880), rt_str("SYS_OUT", 7)))) {
F->t_885v = g_ty_file_983;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("OPEN", 4)) || rt_str_eq((*F->name_880), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("SEND", 4)) || rt_str_eq((*F->name_880), rt_str("RECEIVE", 7)))) {
F->lv_2439 = NULL;
F->dv_2440 = NULL;
F->lc_2441 = NULL;
F->ro_2442 = RT_R_EUNDEF;
F->mt_2443 = NULL;
F->dt_2444 = NULL;
f_lvalue_669(F->args_882, &F->lv_2439, &F->mt_2443, &F->lc_2441, &F->ro_2442);
if ((rt_r_ichk((*(P903)rt_nil_check(F->mt_2443)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_880), rt_str("RECEIVE", 7))) {
f_lvalue_669((*(P897)rt_nil_check(F->args_882)).next, &F->dv_2440, &F->dt_2444, &F->lc_2441, &F->ro_2442);
f_check_type_224(F->dt_2444, (*(P903)rt_nil_check(F->mt_2443)).elem, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P890)rt_nil_check(F->lv_2439))->all)), rt_str(", &", 3)), (((P890)rt_nil_check(F->dv_2440))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2445 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, (*(P903)rt_nil_check(F->mt_2443)).elem, &F->at_2419));
f_check_type_224(F->at_2419, (*(P903)rt_nil_check(F->mt_2443)).elem, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P903)rt_nil_check(F->mt_2443)).elem)), rt_str(" m_ = ", 6)), F->v_2445), rt_str("; rt_send(", 10)), (((P890)rt_nil_check(F->lv_2439))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_880), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_880), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2446 = NULL;
F->lc_2447 = NULL;
F->ro_2448 = RT_R_EUNDEF;
F->mt_2449 = NULL;
f_lvalue_669(F->args_882, &F->lv_2446, &F->mt_2449, &F->lc_2447, &F->ro_2448);
if ((rt_r_ichk((*(P903)rt_nil_check(F->mt_2449)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_880))), rt_str("(", 1)), (((P890)rt_nil_check(F->lv_2446))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_880), rt_str("COND_RECEIVE", 12)))) {
F->lv_2450 = NULL;
F->dv_2451 = NULL;
F->bv_2452 = NULL;
F->lc_2453 = NULL;
F->ro_2454 = RT_R_EUNDEF;
F->mt_2455 = NULL;
F->dt_2456 = NULL;
F->bt_2457 = NULL;
f_lvalue_669(F->args_882, &F->lv_2450, &F->mt_2455, &F->lc_2453, &F->ro_2454);
if ((rt_r_ichk((*(P903)rt_nil_check(F->mt_2455)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_669((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_882)).next)).next, &F->bv_2452, &F->bt_2457, &F->lc_2453, &F->ro_2454);
f_check_type_224(F->bt_2457, g_ty_bool_978, F->line_883);
if (rt_str_eq((*F->name_880), rt_str("COND_RECEIVE", 12))) {
f_lvalue_669((*(P897)rt_nil_check(F->args_882)).next, &F->dv_2451, &F->dt_2456, &F->lc_2453, &F->ro_2454);
f_check_type_224(F->dt_2456, (*(P903)rt_nil_check(F->mt_2455)).elem, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->bv_2452))->all), rt_str(" = rt_cond_receive(", 19)), (((P890)rt_nil_check(F->lv_2450))->all)), rt_str(", &", 3)), (((P890)rt_nil_check(F->dv_2451))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2458 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, (*(P903)rt_nil_check(F->mt_2455)).elem, &F->at_2419));
f_check_type_224(F->at_2419, (*(P903)rt_nil_check(F->mt_2455)).elem, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P903)rt_nil_check(F->mt_2455)).elem)), rt_str(" m_ = ", 6)), F->v_2458), rt_str("; ", 2)), (((P890)rt_nil_check(F->bv_2452))->all)), rt_str(" = rt_cond_send(", 16)), (((P890)rt_nil_check(F->lv_2450))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_880), rt_str("PRIORITY", 8))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("SET_PRIORITY", 12))) {
F->v_2459 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, g_ty_int_977, &F->at_2419));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_551(F->args_882)), rt_str(", ", 2)), F->v_2459), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("ACTIVE", 6))) {
F->t_885v = g_ty_bool_978;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("DELAY", 5))) {
F->v_2460 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_int_977, &F->at_2419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2460), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2420) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_864(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("DELAY_UNTIL", 11))) {
F->v_2461 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_int_977, &F->at_2419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2461), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2420) == ((rt_int)1LL)))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("TIME", 4))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_880), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_880), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_880), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_880), rt_str("HOURS", 5)))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_880));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("HALT", 4))) {
F->a_2462 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_int_977, &F->at_2419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2462), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("ME", 2)) && (F->tt_881 != NULL))) {
F->result_ = f_me_high_836(F->tt_881, F->line_883, &F->t_885v);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("WAITING", 7)) || rt_str_eq((*F->name_880), rt_str("SUSPENDED", 9)))) {
F->t_885v = g_ty_bool_978;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_880))), rt_str("(", 1)), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_880), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_880), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_880), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_880), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_880), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_880), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_880))), rt_str("(", 1)), f_act_ref_551(F->args_882)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2420) != ((rt_int)2LL))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_551(F->args_882)), rt_str(", ", 2)), f_act_ref_551((*(P897)rt_nil_check(F->args_882)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_880), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_880), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_880), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_880), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_880), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_880), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2420) != ((rt_int)0LL))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_880))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_841(F->args_882, &(*F->name_880))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("UNLOCK", 6)) && (f_peek_type_716(F->args_882) != g_ty_latch_986))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_841(F->args_882, &(*F->name_880))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_841(F->args_882, &(*F->name_880))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("COND_LOCK", 9))) {
F->bv_2463 = NULL;
F->bc_2464 = NULL;
F->ro_2465 = RT_R_EUNDEF;
F->bt_2466 = NULL;
F->l_2467 = rt_str_copy(f_lock_ref_841(F->args_882, &(*F->name_880)));
f_lvalue_669((*(P897)rt_nil_check(F->args_882)).next, &F->bv_2463, &F->bt_2466, &F->bc_2464, &F->ro_2465);
f_check_type_224(F->bt_2466, g_ty_bool_978, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P890)rt_nil_check(F->bv_2463))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2467), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("EXCESS_LOCKS", 12))) {
F->t_885v = g_ty_int_977;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_841(F->args_882, &(*F->name_880))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("OWNER", 5))) {
F->t_885v = g_ty_act_987;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_841(F->args_882, &(*F->name_880))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_880), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_880), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_880), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_880), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_880), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_880), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_880), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_880), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2420) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_872(&(*F->name_880), F->args_882, F->line_883, &F->t_885v);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("FREE", 4))) {
F->pv_2468 = NULL;
F->pc_2469 = NULL;
F->ro_2470 = RT_R_EUNDEF;
F->pt_2471 = NULL;
f_lvalue_669(F->args_882, &F->pv_2468, &F->pt_2471, &F->pc_2469, &F->ro_2470);
if (((rt_r_ichk((*(P903)rt_nil_check(F->pt_2471)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2470))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_958 = 1;
f_finish_ptr_427(F->pt_2471);
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_316((*(P903)rt_nil_check(F->pt_2471)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_658(F->pt_2471, &(((P890)rt_nil_check(F->pv_2468))->all)); b_; }), (*(P903)rt_nil_check(F->pt_2471)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_316((*(P903)rt_nil_check(F->pt_2471)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str("); if (", 7)), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_658(F->pt_2471, &(((P890)rt_nil_check(F->pv_2468))->all)); b_; }), (*(P903)rt_nil_check(F->pt_2471)).target)), rt_str(" } rt_free((void **)&", 21)), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P890)rt_nil_check(F->pv_2468))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("LOW_IO", 6))) {
F->dev_2472 = rt_str_copy(f_gexpr_700(F->args_882, g_ty_int_977, &F->at_2419));
F->cmd_2473 = rt_str_copy(f_gexpr_700((*(P897)rt_nil_check(F->args_882)).next, g_ty_int_977, &F->at_2419));
if ((rt_r_ichk(F->n_2420) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2472), rt_str(", ", 2)), F->cmd_2473), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2474 = NULL;
F->dc_2475 = NULL;
F->ro_2476 = RT_R_EUNDEF;
F->dt_2477 = NULL;
f_lvalue_669((*(P897)rt_nil_check((*(P897)rt_nil_check(F->args_882)).next)).next, &F->dv_2474, &F->dt_2477, &F->dc_2475, &F->ro_2476);
f_check_type_224(F->dt_2477, g_ty_int_977, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2472), rt_str(", ", 2)), F->cmd_2473), rt_str(", &", 3)), (((P890)rt_nil_check(F->dv_2474))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_885) = F->t_885v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_888(P897 units_887) {
  struct f_translate_888fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_887 = units_887;
F->u_2478 = NULL;
F->u_2478 = F->units_887;
while ((F->u_2478 != NULL)) {
if (((*(P897)rt_nil_check(F->u_2478)).next == NULL)) {
{ R925 *cell2479 = rt_alloc(sizeof(R925));
(*cell2479).d = NULL;
(*cell2479).next = NULL;
g_caps_952 = cell2479;
}
(*(P924)rt_nil_check(g_caps_952)).d = F->u_2478;
(*(P924)rt_nil_check(g_caps_952)).depth = rt_r_ichk(g_depth_936);
f_declare_labels_494((*(P897)rt_nil_check(F->u_2478)).c);
f_declare_body_393((*(P897)rt_nil_check(F->u_2478)).c);
f_capsule_body_501((*(P897)rt_nil_check(F->u_2478)).c);
f_await_tasks_490((*(P897)rt_nil_check(F->u_2478)).c);
{
F->l_2480 = NULL;
F->l_2480 = F->units_887;
while ((F->l_2480 != F->u_2478)) {
{
F->w_2481 = rt_str_copy(f_waits_of_486(F->l_2480));
if ((((rt_int)((F->w_2481).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2481);
}
}
F->l_2480 = (*(P897)rt_nil_check(F->l_2480)).next;
}
}
f_close_fins_477(NULL);
if (rt_r_echk(g_uses_findyn_960)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_403(F->u_2478);
}
F->u_2478 = (*(P897)rt_nil_check(F->u_2478)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_889(void) {
  struct f_print_program_889fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_389();
if (rt_r_echk(g_uses_free_958)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_940);
f_print_buffer_31(g_out_frames_956);
f_print_buffer_31(g_out_helpers_941);
f_print_buffer_31(g_out_protos_942);
f_print_buffer_31(g_out_globals_943);
f_print_buffer_31(g_out_funcs_944);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_957);
f_print_buffer_31(g_out_excs_946);
f_print_buffer_31(g_out_init_945);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R927(R927 *d, R927 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R927 cp_R927(R927 s) {
  R927 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R927(R927 a, R927 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R925(R925 *d, R925 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R925 cp_R925(R925 s) {
  R925 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R925(R925 a, R925 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R923(R923 *d, R923 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R923 cp_R923(R923 s) {
  R923 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R923(R923 a, R923 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R921(R921 *d, R921 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R921 cp_R921(R921 s) {
  R921 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R921(R921 a, R921 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R919(R919 *d, R919 s) {
  d->t = s.t;
  d->next = s.next;
}
static R919 cp_R919(R919 s) {
  R919 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R919(R919 a, R919 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R917(R917 *d, R917 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R917 cp_R917(R917 s) {
  R917 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R917(R917 a, R917 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R915(R915 *d, R915 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R915 cp_R915(R915 s) {
  R915 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R915(R915 a, R915 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A913(A913 *d, A913 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A913 cp_A913(A913 s) {
  A913 d = s; d.p = rt_alloc(sizeof(P907) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A913(A913 a, A913 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R910(R910 *d, R910 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R910 cp_R910(R910 s) {
  R910 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R910(R910 a, R910 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R908(R908 *d, R908 s) {
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
static R908 cp_R908(R908 s) {
  R908 d = s;
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
static int eq_R908(R908 a, R908 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R906(R906 *d, R906 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R906 cp_R906(R906 s) {
  R906 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R906(R906 a, R906 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R904(R904 *d, R904 s) {
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
static R904 cp_R904(R904 s) {
  R904 d = s;
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
static int eq_R904(R904 a, R904 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp);
}
static void as_R902(R902 *d, R902 s) {
  d->s = s.s;
  d->next = s.next;
}
static R902 cp_R902(R902 s) {
  R902 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R902(R902 a, R902 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R900(R900 *d, R900 s) {
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
static R900 cp_R900(R900 s) {
  R900 d = s;
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
static int eq_R900(R900 a, R900 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R898(R898 *d, R898 s) {
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
static R898 cp_R898(R898 s) {
  R898 d = s;
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
static int eq_R898(R898 a, R898 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A896(A896 *d, A896 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A896 cp_A896(A896 s) {
  A896 d = s; d.p = rt_alloc(sizeof(P892) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A896(A896 a, A896 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R893(R893 *d, R893 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R893 cp_R893(R893 s) {
  R893 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R893(R893 a, R893 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_928);
  RT_ROOT(g_ntoks_929);
  RT_ROOT(g_tpos_930);
  RT_ROOT(g_src_line_931);
  RT_ROOT(g_pending_prag_932);
  RT_ROOT(g_table_933);
  RT_ROOT(g_genv_934);
  RT_ROOT(g_all_insts_935);
  RT_ROOT(g_depth_936);
  RT_ROOT(g_scope_stack_937);
  RT_ROOT(g_all_types_938);
  RT_ROOT(g_serial_939);
  RT_ROOT(g_out_types_940);
  RT_ROOT(g_out_helpers_941);
  RT_ROOT(g_out_protos_942);
  RT_ROOT(g_out_globals_943);
  RT_ROOT(g_out_funcs_944);
  RT_ROOT(g_out_init_945);
  RT_ROOT(g_out_excs_946);
  RT_ROOT(g_code_947);
  RT_ROOT(g_fields_buf_948);
  RT_ROOT(g_in_func_949);
  RT_ROOT(g_cur_level_950);
  RT_ROOT(g_fctx_951);
  RT_ROOT(g_caps_952);
  RT_ROOT(g_cap_waits_953);
  RT_ROOT(g_psub_954);
  RT_ROOT(g_st_field_955);
  RT_ROOT(g_out_frames_956);
  RT_ROOT(g_out_roots_957);
  RT_ROOT(g_uses_free_958);
  RT_ROOT(g_fins_959);
  RT_ROOT(g_uses_findyn_960);
  RT_ROOT(g_func_sym_961);
  RT_ROOT(g_func_rc_962);
  RT_ROOT(g_cap_ret_963);
  RT_ROOT(g_cap_rflag_964);
  RT_ROOT(g_ret_frames_965);
  RT_ROOT(g_gdepth_966);
  RT_ROOT(g_suppress_967);
  RT_ROOT(g_cons_ctx_968);
  RT_ROOT(g_mark_uninit_969);
  RT_ROOT(g_exits_970);
  RT_ROOT(g_gotos_971);
  RT_ROOT(g_frames_972);
  RT_ROOT(g_handlers_973);
  RT_ROOT(g_cleanups_974);
  RT_ROOT(g_trial_975);
  RT_ROOT(g_mcopies_976);
  RT_ROOT(g_ty_int_977);
  RT_ROOT(g_ty_bool_978);
  RT_ROOT(g_ty_float_979);
  RT_ROOT(g_ty_ascii_980);
  RT_ROOT(g_ty_string_981);
  RT_ROOT(g_ty_void_982);
  RT_ROOT(g_ty_file_983);
  RT_ROOT(g_ty_nil_984);
  RT_ROOT(g_ty_lock_985);
  RT_ROOT(g_ty_latch_986);
  RT_ROOT(g_ty_act_987);
  RT_ROOT(g_file_mode_type_988);
  RT_ROOT(g_ty_send_st_989);
  RT_ROOT(g_ty_receive_st_990);
  RT_ROOT(g_no_cons_991);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_928 = NULL;
g_ntoks_929 = RT_R_IUNDEF;
g_ntoks_929 = ((rt_int)0LL);
g_tpos_930 = RT_R_IUNDEF;
g_tpos_930 = ((rt_int)1LL);
g_src_line_931 = RT_R_IUNDEF;
g_src_line_931 = ((rt_int)0LL);
g_pending_prag_932 = NULL;
g_table_933 = NULL;
g_genv_934 = NULL;
g_all_insts_935 = NULL;
g_depth_936 = RT_R_IUNDEF;
g_depth_936 = ((rt_int)0LL);
g_scope_stack_937 = NULL;
g_all_types_938 = NULL;
g_serial_939 = RT_R_IUNDEF;
g_serial_939 = ((rt_int)0LL);
g_out_types_940 = NULL;
g_out_helpers_941 = NULL;
g_out_protos_942 = NULL;
g_out_globals_943 = NULL;
g_out_funcs_944 = NULL;
g_out_init_945 = NULL;
g_out_excs_946 = NULL;
g_code_947 = NULL;
g_fields_buf_948 = NULL;
g_in_func_949 = RT_R_EUNDEF;
g_in_func_949 = 0;
g_cur_level_950 = RT_R_IUNDEF;
g_cur_level_950 = ((rt_int)0LL);
g_fctx_951 = NULL;
g_caps_952 = NULL;
g_cap_waits_953 = NULL;
g_psub_954 = NULL;
g_st_field_955 = NULL;
g_out_frames_956 = NULL;
g_out_roots_957 = NULL;
g_uses_free_958 = RT_R_EUNDEF;
g_uses_free_958 = 0;
g_fins_959 = NULL;
g_uses_findyn_960 = RT_R_EUNDEF;
g_uses_findyn_960 = 0;
g_func_sym_961 = NULL;
g_func_rc_962 = NULL;
g_cap_ret_963 = NULL;
g_cap_rflag_964 = NULL;
g_ret_frames_965 = RT_R_IUNDEF;
g_ret_frames_965 = ((rt_int)0LL);
g_gdepth_966 = RT_R_IUNDEF;
g_gdepth_966 = ((rt_int)0LL);
g_suppress_967 = NULL;
g_cons_ctx_968 = NULL;
g_mark_uninit_969 = RT_R_EUNDEF;
g_mark_uninit_969 = 0;
g_exits_970 = NULL;
g_gotos_971 = NULL;
g_frames_972 = RT_R_IUNDEF;
g_frames_972 = ((rt_int)0LL);
g_handlers_973 = NULL;
g_cleanups_974 = NULL;
g_trial_975 = RT_R_IUNDEF;
g_trial_975 = ((rt_int)0LL);
g_mcopies_976 = NULL;
g_ty_int_977 = NULL;
g_ty_bool_978 = NULL;
g_ty_float_979 = NULL;
g_ty_ascii_980 = NULL;
g_ty_string_981 = NULL;
g_ty_void_982 = NULL;
g_ty_file_983 = NULL;
g_ty_nil_984 = NULL;
g_ty_lock_985 = NULL;
g_ty_latch_986 = NULL;
g_ty_act_987 = NULL;
g_file_mode_type_988 = NULL;
g_ty_send_st_989 = NULL;
g_ty_receive_st_990 = NULL;
g_no_cons_991 = NULL;
{ P894 cell2482 = rt_alloc(sizeof *cell2482);
rt_int pv2483 = ((rt_int)1000000LL);
cell2482->p_n = pv2483;
cell2482->all.lo = ((rt_int)1LL); cell2482->all.hi = pv2483;
cell2482->all.lo2 = cell2482->all.hi2 = 1;
cell2482->all.p = rt_alloc(sizeof(P892) * (size_t)(RT_CNT(cell2482->all)) + 1);
for (rt_int i2484 = 0; i2484 < (RT_CNT(cell2482->all)); i2484++) {
cell2482->all.p[i2484] = NULL;
}
g_toks_928 = cell2482;
}
{ P911 cell2485 = rt_alloc(sizeof *cell2485);
rt_int pv2486 = (((rt_int)4093LL));
cell2485->p_n = pv2486;
cell2485->all.lo = ((rt_int)0LL); cell2485->all.hi = pv2486;
cell2485->all.lo2 = cell2485->all.hi2 = 1;
cell2485->all.p = rt_alloc(sizeof(P907) * (size_t)(RT_CNT(cell2485->all)) + 1);
for (rt_int i2487 = 0; i2487 < (RT_CNT(cell2485->all)); i2487++) {
cell2485->all.p[i2487] = NULL;
}
g_table_933 = cell2485;
}
g_out_types_940 = f_new_buffer_24();
g_out_helpers_941 = f_new_buffer_24();
g_out_protos_942 = f_new_buffer_24();
g_out_globals_943 = f_new_buffer_24();
g_out_funcs_944 = f_new_buffer_24();
g_out_init_945 = f_new_buffer_24();
g_out_excs_946 = f_new_buffer_24();
g_out_frames_956 = f_new_buffer_24();
g_out_roots_957 = f_new_buffer_24();
g_code_947 = g_out_init_945;
g_no_cons_991 = f_new_cons_176();
g_ty_int_977 = f_new_typ_175((((rt_int)1LL)));
g_ty_bool_978 = f_new_typ_175((((rt_int)2LL)));
g_ty_float_979 = f_new_typ_175((((rt_int)3LL)));
g_ty_string_981 = f_new_typ_175((((rt_int)5LL)));
g_ty_void_982 = f_new_typ_175((((rt_int)9LL)));
g_ty_file_983 = f_new_typ_175((((rt_int)10LL)));
g_ty_nil_984 = f_new_typ_175((((rt_int)11LL)));
g_ty_lock_985 = f_new_typ_175((((rt_int)13LL)));
g_ty_latch_986 = f_new_typ_175((((rt_int)13LL)));
g_ty_act_987 = f_new_typ_175((((rt_int)14LL)));
{ rt_frame xf2488;
if (RT_TRY(xf2488)) {
f_init_ascii_251();
f_read_source_58();
f_translate_888(f_program_151());
f_print_program_889();
RT_POP(xf2488);
} else {
RT_POP(xf2488);
int x2489 = rt_xcur;
if (0 || x2489 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2489);
}
}
}
  rt_main_done();
  return 0;
}
