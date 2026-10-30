#include "paleo.h"
#include <math.h>
typedef struct Pc820 *P819;
typedef struct R822 R822;
typedef struct R822 *P821;
struct R822 {  rt_int kind; rt_int line; rt_int ival; P819 s; P819 prags;  };
typedef struct Pc824 *P823;
typedef struct A825 A825;
struct A825 { rt_int lo, hi, lo2, hi2; P821 *p; };
typedef struct R827 R827;
typedef struct R827 *P826;
struct R827 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P819 name; P819 tag; P819 prags; P826 labels; P826 a; P826 b; P826 c; P826 d; P826 e; P826 next;  };
typedef struct R829 R829;
typedef struct R829 *P828;
typedef struct R831 R831;
typedef struct R831 *P830;
struct R831 {  P819 s; P830 next;  };
struct R829 {  P819 lo; P819 hi; P819 lo2; P819 hi2; P819 slen; rt_int mlo; rt_int mhi; int hasm; P826 args; int dyn; rt_int lvl; P819 prec; P830 bnds;  };
typedef struct R833 R833;
typedef struct R833 *P832;
typedef struct R835 R835;
typedef struct R835 *P834;
struct R835 {  P819 name; P832 t; P828 c; P826 st; P834 next;  };
typedef struct R837 R837;
typedef struct R837 *P836;
typedef struct R839 R839;
typedef struct R839 *P838;
struct R839 {  P819 name; rt_int mode; P832 t; P828 c; P819 cfield; P838 next;  };
typedef struct Pc841 *P840;
typedef struct A842 A842;
struct A842 { rt_int lo, hi, lo2, hi2; P836 *p; };
typedef struct R844 R844;
typedef struct R844 *P843;
struct R844 {  rt_int depth; P826 imps; int all_imp; P843 next;  };
typedef struct R846 R846;
typedef struct R846 *P845;
struct R846 {  rt_int kind; rt_int i; P819 s; P832 t;  };
struct R837 {  rt_int kind; P819 name; P832 t; P828 c; P819 access; P819 cname; int ro_flag; rt_int mvalue; int hasmv; P826 st; P826 decl; P838 params; P832 result; rt_int depth; rt_int level; int byref; P836 members; P836 mnext; P826 binds; P836 insts; P840 env; P836 chain; P836 stack; P836 owner; P843 gctx; P845 mv; P830 reqs; int reqdone; P826 home; P826 capn; P836 tbinds;  };
typedef struct R848 R848;
typedef struct R848 *P847;
struct R848 {  P832 t; P847 next;  };
struct R833 {  rt_int kind; P819 name; P826 lits; P832 elem; P832 idx; P832 idx2; P828 elemcons; P826 elemst; P832 under; P826 tparams; P826 ocap; P834 fields; P832 target; P826 decl; P819 cname; int forward; int defined; int helpers; P836 initp; P836 finalp; P836 tpsyms; P836 gen; P836 gbinds; P832 next; rt_int ndim; P847 idxs;  };
typedef struct R850 R850;
typedef struct R850 *P849;
struct R850 {  P830 head; P830 tail;  };
typedef struct R852 R852;
typedef struct R852 *P851;
struct R852 {  P819 match; P819 label; rt_int depth; P851 next;  };
typedef struct R854 R854;
typedef struct R854 *P853;
struct R854 {  P826 d; P853 next; rt_int depth;  };
typedef struct R856 R856;
typedef struct R856 *P855;
struct R856 {  P826 d; P819 w; P855 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P819 result_;
 P819 t_919;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_922;
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
 rstr r_923;
 rt_int i_924;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_928;
 rstr w_929;
 rt_int i_930;
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
 P849 result_;
 P849 b_934;
};
struct f_put_27fr { int dummy;
 P849 b_25;
 rstr *s_26;
 P830 l_936;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P849 b_30;
 P830 l_938;
};
struct f_splice_34fr { int dummy;
 P849 a_32;
 P849 b_33;
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
 P821 t_940;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_942;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_943;
 rt_int k_944;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_948;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_949;
 P819 r_950;
 int more_951;
 rt_int k_952;
 int go_953;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_954;
 rt_int k_955;
 rstr p_956;
 int ok_957;
 int known_958;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_959;
 rt_int j_960;
 rt_int n_961;
 int c_962;
 rstr w_963;
 rt_int k_964;
 rstr w_968;
 rt_int k_969;
 rstr two_973;
};
struct f_read_source_58fr { int dummy;
 rstr line_974;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P826 result_;
 P826 x_975;
};
struct f_append_65fr { int dummy;
 P826 *head_62;
 P826 *tail_63;
 P826 x_64;
};
struct f_list_len_67fr { int dummy;
 P826 l_66;
 rt_int result_;
 rt_int n_977;
 P826 p_978;
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
 P819 result_;
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
 P819 result_;
};
struct f_name_node_90fr { int dummy;
 P826 result_;
 P826 x_979;
};
struct f_id_list_91fr { int dummy;
 P826 result_;
 P826 head_980;
 P826 tail_981;
};
struct f_p_subtype_92fr { int dummy;
 P826 result_;
 rt_int line_982;
 P826 x_983;
 rstr w_984;
 P826 head_985;
 P826 tail_986;
 P826 head_987;
 P826 tail_988;
 int more_989;
 P826 names_990;
 P826 st_991;
 P826 cmp_992;
 P826 head_993;
 P826 tail_994;
 int more_995;
 P826 lit_996;
};
struct f_constraint_list_93fr { int dummy;
 P826 result_;
 P826 head_997;
 P826 tail_998;
 int more_999;
 rt_int line_1000;
 P826 lo_1001;
 P826 r_1002;
};
struct f_actual_params_94fr { int dummy;
 P826 result_;
 P826 head_1003;
 P826 tail_1004;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P826 result_;
 P826 head_1005;
 P826 tail_1006;
 int more_1007;
};
struct f_binop_102fr { int dummy;
 P819 op_98;
 P826 l_99;
 P826 r_100;
 rt_int line_101;
 P826 result_;
 P826 x_1008;
};
struct f_expr_103fr { int dummy;
 P826 result_;
 P826 l_1009;
 P819 op_1010;
 rt_int line_1011;
};
struct f_expr_and_104fr { int dummy;
 P826 result_;
 P826 l_1012;
 rt_int line_1013;
};
struct f_expr_not_105fr { int dummy;
 P826 result_;
 P826 x_1014;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P826 result_;
 P826 l_1015;
 P819 op_1016;
 rt_int line_1017;
};
struct f_expr_add_109fr { int dummy;
 P826 result_;
 P826 l_1018;
 P819 op_1019;
 rt_int line_1020;
};
struct f_expr_mul_110fr { int dummy;
 P826 result_;
 P826 l_1021;
 P819 op_1022;
 rt_int line_1023;
};
struct f_expr_pow_111fr { int dummy;
 P826 result_;
 P826 l_1024;
 rt_int line_1025;
};
struct f_expr_prefix_112fr { int dummy;
 P826 result_;
 P826 x_1026;
};
struct f_postfix_113fr { int dummy;
 P826 result_;
 P826 p_1027;
 rt_int line_1028;
 P826 x_1029;
 P826 head_1030;
 P826 tail_1031;
 int more_1032;
 P826 lo_1033;
 P826 r_1034;
 P826 x_1035;
 P826 x_1036;
 P826 x_1037;
};
struct f_primary_114fr { int dummy;
 P826 result_;
 rt_int line_1038;
 P826 x_1039;
 rt_int k_1040;
 rstr w_1041;
 P826 head_1042;
 P826 tail_1043;
 int more_1044;
};
struct f_constructor_item_115fr { int dummy;
 P826 result_;
 rt_int line_1045;
 P826 it_1046;
 P826 first_1047;
 P826 keys_1048;
 P826 ktail_1049;
 P826 lab_1050;
 rt_int save_1051;
 P826 more_1052;
 P826 tail2_1053;
 int ok_1054;
 int go_1055;
 P826 l2_1056;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P826 result_;
 P826 head_1057;
 P826 tail_1058;
 int stmts_1059;
 P826 after_1060;
 P826 x_1061;
};
struct f_body_element_118fr { int dummy;
 P826 result_;
 P826 x_1062;
 P819 pr_1063;
 P826 p_1064;
};
struct f_declaration_119fr { int dummy;
 P826 result_;
 rt_int line_1065;
 P826 head_1066;
 P826 tail_1067;
 P826 names_1068;
 P826 x_1069;
};
struct f_object_decl_120fr { int dummy;
 P826 result_;
 rt_int line_1070;
 int is_var_1071;
 P826 names_1072;
 P826 st_1073;
 P826 init_1074;
 P826 loc_1075;
 rt_int loc_kind_1076;
 P826 head_1077;
 P826 tail_1078;
 P826 x_1079;
};
struct f_abbrev_decl_121fr { int dummy;
 P826 result_;
 P826 x_1080;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1081;
};
struct f_type_decl_123fr { int dummy;
 P826 result_;
 rt_int line_1082;
 P819 name_1083;
 P826 params_1084;
 P826 x_1085;
 P826 tts_1086;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P826 result_;
 P826 head_1087;
 P826 tail_1088;
 int more_1089;
 rt_int mode_1090;
 P826 names_1091;
 P826 ntail_1092;
 P826 st_1093;
 P826 p_1094;
};
struct f_imports_list_128fr { int dummy;
 P826 owner_127;
 int result_;
 P826 head_1095;
 P826 tail_1096;
 int more_1097;
 int ro_1098;
 P826 x_1099;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P819 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P826 result_;
 rt_int line_1100;
 P826 x_1101;
 int is_abn_1102;
 int is_func_1103;
 int dummy_1104;
};
struct f_capsule_decl_133fr { int dummy;
 P826 result_;
 P826 x_1105;
 int dummy_1106;
 P826 head_1107;
 P826 tail_1108;
 int more_1109;
 P826 n_1110;
};
struct f_formal_tt_134fr { int dummy;
 P826 result_;
 P826 head_1111;
 P826 tail_1112;
 int more_1113;
};
struct f_generic_decl_135fr { int dummy;
 P826 result_;
 P826 x_1114;
 P826 head_1115;
 P826 tail_1116;
 int more_1117;
 P826 names_1118;
 rt_int kind_1119;
 P826 st_1120;
 P826 p_1121;
 P819 nm_1122;
 P826 st_1123;
};
struct f_task_decl_136fr { int dummy;
 P826 result_;
 P826 x_1124;
 int dummy_1125;
};
struct f_expose_decl_137fr { int dummy;
 P826 result_;
 P826 x_1126;
 P826 head_1127;
 P826 tail_1128;
 int more_1129;
 P826 n_1130;
 P826 head_1131;
 P826 tail_1132;
 int more_1133;
 P826 n_1134;
 P826 tgt_1135;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P826 result_;
 P826 labels_1136;
 P826 ltail_1137;
 P819 match_1138;
 P826 s_1139;
};
struct f_unlabeled_statement_141fr { int dummy;
 P826 result_;
 rt_int line_1140;
 P826 x_1141;
 P826 head_1142;
 P826 tail_1143;
 P826 invs_1144;
 P826 itail_1145;
 int more_1146;
 P826 target_1147;
};
struct f_arm_145fr { int dummy;
 P826 cond_142;
 P826 b_143;
 rt_int line_144;
 P826 result_;
 P826 x_1148;
};
struct f_if_stmt_146fr { int dummy;
 P826 result_;
 P826 x_1149;
 P826 head_1150;
 P826 tail_1151;
 P826 cond_1152;
 int go_1153;
};
struct f_case_stmt_147fr { int dummy;
 P826 result_;
 P826 x_1154;
 P826 head_1155;
 P826 tail_1156;
 P826 labs_1157;
 P826 ltail_1158;
 int more_1159;
 P826 l_1160;
};
struct f_repeat_stmt_148fr { int dummy;
 P826 result_;
 P826 x_1161;
};
struct f_guard_stmt_149fr { int dummy;
 P826 result_;
 P826 x_1162;
 P826 head_1163;
 P826 tail_1164;
 P826 h_1165;
};
struct f_program_150fr { int dummy;
 P826 result_;
 P826 head_1166;
 P826 tail_1167;
 P819 pr_1168;
 P826 u_1169;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1170;
 rt_int i_1171;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P836 result_;
 P836 y_1175;
};
struct f_lookup_decl_156fr { int dummy;
 P826 d_155;
 P836 result_;
 P836 y_1176;
};
struct f_define_159fr { int dummy;
 P836 y_157;
 rt_int line_158;
 rt_int h_1177;
 P836 z_1178;
};
struct f_overloadable_161fr { int dummy;
 P836 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P826 a_162;
 P826 b_163;
 int result_;
 P826 x_1179;
 P826 y_1180;
};
struct f_same_signature_167fr { int dummy;
 P838 a_165;
 P838 b_166;
 int result_;
 P838 x_1181;
 P838 y_1182;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P819 name_171;
 P836 result_;
 P836 y_1183;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P832 result_;
 P832 t_1185;
};
struct f_new_cons_175fr { int dummy;
 P828 result_;
 P828 c_1187;
};
struct f_scalar_kind_177fr { int dummy;
 P832 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P832 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P828 c_180;
 rstr *b_181;
 rstr result_;
 P819 p_1189;
 rt_int i_1190;
};
struct f_clo_184fr { int dummy;
 P828 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P828 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P832 t_187;
 P828 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P832 t_190;
 P828 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1194;
 rstr f_1195;
};
struct f_copy_cons_197fr { int dummy;
 P828 c_196;
 P828 result_;
 P828 r_1196;
};
struct f_freeze_200fr { int dummy;
 P828 c_198;
 P832 t_199;
 P828 result_;
 P828 r_1198;
 P819 saved_field_1199;
 rstr ct_1200;
 rstr la_1201;
 rstr lf_1202;
 rstr ha_1203;
 rstr hf_1204;
};
struct f_checked_204fr { int dummy;
 P832 t_201;
 P828 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P826 a_205;
 P826 b_206;
 int result_;
 P826 x_1205;
 P826 y_1206;
};
struct f_str_elem_209fr { int dummy;
 P832 t_208;
 P832 result_;
};
struct f_same_212fr { int dummy;
 P832 a_210;
 P832 b_211;
 int result_;
 P847 x_1207;
 P847 y_1208;
 P834 f_1209;
 P834 g_1210;
};
struct f_base_of_214fr { int dummy;
 P832 t_213;
 P832 result_;
};
struct f_base_cons_217fr { int dummy;
 P832 t_215;
 P828 c_216;
 P828 result_;
};
struct f_kind_name_219fr { int dummy;
 P832 t_218;
 rstr result_;
};
struct f_check_type_223fr { int dummy;
 P832 got_220;
 P832 want_221;
 rt_int line_222;
};
struct f_ctype_225fr { int dummy;
 P832 t_224;
 rstr result_;
};
struct f_struct_body_227fr { int dummy;
 P832 t_226;
 rstr result_;
};
struct f_field_decls_229fr { int dummy;
 P832 t_228;
 rstr result_;
 P834 f_1213;
 P819 s_1214;
};
struct f_declare_ctype_231fr { int dummy;
 P832 t_230;
 P832 u_1215;
 P826 p_1216;
 P819 fs_1217;
 rstr sn_1218;
 P828 pc_1219;
 P832 target_1220;
 P826 p_1221;
 P819 fs_1222;
};
struct f_dim_lo_233fr { int dummy;
 rt_int k_232;
 rstr result_;
};
struct f_dim_hi_235fr { int dummy;
 rt_int k_234;
 rstr result_;
};
struct f_more_dims_237fr { int dummy;
 P832 t_236;
 rstr result_;
 P819 r_1223;
 rt_int k_1224;
};
struct f_acnt_240fr { int dummy;
 P832 t_238;
 rstr *base_239;
 rstr result_;
 P819 r_1228;
 rt_int k_1229;
};
struct f_cons_lo_243fr { int dummy;
 P828 c_241;
 rt_int k_242;
 P819 result_;
 P830 l_1233;
 rt_int i_1234;
};
struct f_cons_hi_246fr { int dummy;
 P828 c_244;
 rt_int k_245;
 P819 result_;
 P830 l_1238;
 rt_int i_1239;
};
struct f_idx_type_249fr { int dummy;
 P832 t_247;
 rt_int k_248;
 P832 result_;
 P847 l_1243;
 rt_int i_1244;
};
struct f_init_ascii_250fr { int dummy;
 P826 head_1248;
 P826 tail_1249;
 rt_int start_1250;
 rt_int i_1251;
 P826 lit_1255;
 P826 h2_1256;
 P826 t2_1257;
 P826 l1_1258;
 P826 l2_1259;
 P826 l3_1260;
};
struct f_lit_index_253fr { int dummy;
 P826 lits_251;
 rstr *name_252;
 rt_int result_;
 rt_int i_1261;
 P826 l_1262;
};
struct f_resolve_subtype_256fr { int dummy;
 P826 st_254;
 P828 *c_255;
 P828 c_255v;
 P832 result_;
 P832 t_1263;
 int ok_1264;
 P832 dummy_1265;
 P832 et_1267;
 P828 ec_1268;
 P832 et_1269;
 P826 ix_1270;
 rt_int k_1271;
 P847 tail_1272;
 P830 btail_1273;
 P828 ic_1274;
 P832 it_1275;
 P819 lo_1276;
 P819 hi_1277;
 P847 tl_1278;
 P830 l1_1280;
 P830 l2_1281;
 P828 ec_1284;
 P826 comp_1285;
 P834 tail_1286;
 P828 cc_1287;
 P834 f_1288;
 P826 lits_1290;
 P826 ltail_1291;
 P834 f_1292;
 P826 l_1293;
 P826 gt_1294;
 P828 ec_1295;
 P819 base_1296;
};
struct f_float_lit_258fr { int dummy;
 P826 e_257;
 int result_;
};
struct f_tag_constraint_262fr { int dummy;
 P832 t_259;
 P826 e_260;
 P828 c_261;
 P832 dummy_1297;
};
struct f_named_subtype_265fr { int dummy;
 P826 st_263;
 P828 *c_264;
 P828 c_264v;
 P832 result_;
 P832 t_1298;
 P836 y_1299;
 rstr name_1300;
};
struct f_invoke_abbrev_269fr { int dummy;
 P836 y_266;
 P826 st_267;
 P828 *c_268;
 P828 c_268v;
 P832 result_;
 P826 p_1301;
 P826 a_1302;
 P832 t_1303;
 P836 z_1304;
 P828 pc_1305;
 P832 at_1306;
 int ok_1307;
};
struct f_apply_constraint_274fr { int dummy;
 P832 t_270;
 P826 args_271;
 P828 c_272;
 rt_int line_273;
 P832 dummy_1308;
 int ok_1309;
};
struct f_value_subtype_278fr { int dummy;
 P826 e_275;
 P828 *c_276;
 P828 c_276v;
 P819 *base_277;
 P819 base_277v;
 P832 result_;
 P832 t_1310;
 P828 c0_1311;
 int ro_1312;
 rt_int k_1313;
 rstr lo_1317;
 rstr hi_1318;
 P830 l1_1319;
 P830 l2_1320;
 P826 p_1323;
 P826 head_1324;
 P826 tail_1325;
 P826 sel_1326;
};
struct f_reverse_pairs_280fr { int dummy;
 P830 l_279;
 P830 result_;
 P830 r_1327;
 P830 p_1328;
 P830 a_1329;
 P830 b_1330;
};
struct f_inquiry_283fr { int dummy;
 P826 st_281;
 P828 *c_282;
 P828 c_282v;
 P832 result_;
 P819 base_1331;
 P832 t_1332;
 rstr name_1333;
 P826 sub_1334;
 P828 c2_1335;
 rt_int k_1336;
 int ok_1337;
 P828 ac_1338;
};
struct f_as_subtype_285fr { int dummy;
 P826 e_284;
 P826 result_;
 P826 st_1339;
 rstr name_1340;
 P836 y_1341;
};
struct f_tt_subtype_290fr { int dummy;
 P819 name_286;
 P826 tt_287;
 P826 args_288;
 rt_int line_289;
 P826 result_;
 P826 st_1342;
};
struct f_type_name_292fr { int dummy;
 rstr *name_291;
 int result_;
 P836 y_1343;
};
struct f_empty_set_294fr { int dummy;
 P832 t_293;
 rstr result_;
};
struct f_opened_296fr { int dummy;
 P832 t_295;
 int result_;
 P853 c_1344;
};
struct f_replace_all_300fr { int dummy;
 rstr *s_297;
 rstr *pat_298;
 rstr *r_299;
 rstr result_;
 rt_int i_1345;
};
struct f_subst_302fr { int dummy;
 rstr *s_301;
 rstr result_;
 P830 l_1346;
 P819 r_1347;
};
struct f_new_type_306fr { int dummy;
 P836 y_303;
 P826 st_304;
 P828 *c_305;
 P828 c_305v;
 P832 result_;
 P826 d_1348;
 P826 p_1349;
 P828 uc_1350;
 P836 z_1351;
 P828 zc_1352;
};
struct f_init_storage_310fr { int dummy;
 rstr *lval_307;
 P832 t_308;
 P828 c_309;
};
struct f_init_call_313fr { int dummy;
 P836 y_311;
 rstr *lval_312;
 rstr result_;
 P819 link_1353;
 rt_int i_1354;
};
struct f_needs_fin_315fr { int dummy;
 P832 t_314;
 int result_;
 P834 f_1358;
};
struct f_fin_code_318fr { int dummy;
 rstr *lval_316;
 P832 t_317;
 rstr result_;
 P819 r_1359;
 rstr i_1360;
 P834 f_1361;
 P834 f_1362;
 rt_int i_1363;
};
struct f_tparam_type_321fr { int dummy;
 P832 t_319;
 rstr *name_320;
 P832 result_;
 P836 z_1364;
};
struct f_make_storage_325fr { int dummy;
 rstr *lval_322;
 P832 t_323;
 P828 c_324;
 P826 p_1365;
 P826 a_1366;
 P828 uc_1367;
 P832 ut_1368;
 P832 at_1369;
 P832 pt_1370;
 rstr v_1371;
 P830 saved_1372;
 P830 l1_1373;
 P830 l2_1374;
 rt_int k_1377;
 rstr i_1381;
 P834 f_1382;
 P834 f_1383;
 rt_int i_1384;
};
struct f_uninit_value_327fr { int dummy;
 P832 t_326;
 rstr result_;
};
struct f_init_chk_330fr { int dummy;
 P832 t_328;
 rstr *v_329;
 rstr result_;
 P832 b_1388;
};
struct f_manifest_333fr { int dummy;
 P826 e_331;
 int *ok_332;
 int ok_332v;
 rt_int result_;
 P845 v_1389;
};
struct f_mk_mval_336fr { int dummy;
 rt_int kind_334;
 rt_int i_335;
 P845 result_;
 P845 v_1390;
};
struct f_ipow_339fr { int dummy;
 rt_int a_337;
 rt_int b_338;
 rt_int result_;
 rt_int r_1392;
 rt_int i_1393;
};
struct f_meval_342fr { int dummy;
 P826 e_340;
 int *ok_341;
 int ok_341v;
 P845 result_;
 P845 a_1397;
 P845 b_1398;
 int ok2_1399;
 P819 op_1400;
 P836 y_1401;
 P845 r_1402;
};
struct f_bool_text_344fr { int dummy;
 int b_343;
 rstr result_;
};
struct f_bool_i_346fr { int dummy;
 int b_345;
 rt_int result_;
};
struct f_mstr_348fr { int dummy;
 P845 v_347;
 rstr result_;
};
struct f_ascii_char_350fr { int dummy;
 rt_int i_349;
 int result_;
 rstr printable_1403;
};
struct f_user_defined_352fr { int dummy;
 rstr *op_351;
 int result_;
 P836 y_1404;
};
struct f_mcopy_354fr { int dummy;
 P832 t_353;
 rstr result_;
 rstr ct_1405;
 rstr name_1406;
 P830 l_1407;
};
struct f_composite_356fr { int dummy;
 P832 t_355;
 int result_;
};
struct f_assign_code_361fr { int dummy;
 rstr *lval_357;
 P832 t_358;
 rstr *v_359;
 P828 c_360;
 rstr result_;
};
struct f_copy_code_364fr { int dummy;
 P832 t_362;
 rstr *v_363;
 rstr result_;
};
struct f_eq_code_368fr { int dummy;
 P832 t_365;
 rstr *a_366;
 rstr *b_367;
 rstr result_;
};
struct f_elem_assign_372fr { int dummy;
 rstr *lval_369;
 P832 t_370;
 rstr *v_371;
 rstr result_;
};
struct f_seen_name_375fr { int dummy;
 P830 l_373;
 rstr *s_374;
 int result_;
 P830 p_1409;
};
struct f_emit_helpers_376fr { int dummy;
 P832 order_1410;
 P832 t_1411;
 P830 done_1412;
 P830 l_1413;
 rstr c_1414;
};
struct f_helper_bodies_378fr { int dummy;
 P832 t_377;
 rstr c_1416;
 P849 b_1417;
 P832 e_1418;
 P819 sizes_1419;
 P819 bounds_1420;
 rt_int k_1421;
 rstr l_1425;
 rstr h_1426;
 P830 saved_1427;
 P826 p_1428;
 P830 l1_1429;
 P830 l2_1430;
 P834 f_1433;
 rt_int i_1434;
 P819 cases_as_1435;
 P819 cases_cp_1436;
 P819 cases_eq_1437;
 rstr fn_1438;
 P834 f_1439;
 P819 conds_1440;
 rstr fn_1441;
 rstr fn_1442;
};
struct f_declare_body_380fr { int dummy;
 P826 elems_379;
 P826 e_1443;
 P836 g_1444;
 P836 y_1445;
 P836 y_1446;
 P836 y_1447;
 P832 t_1448;
 P836 y_1449;
 P836 y_1450;
 P840 snap_1451;
 rt_int i_1455;
 P836 g_1459;
 P836 y_1460;
};
struct f_manifest_const_382fr { int dummy;
 P826 d_381;
 int ok_1461;
 P845 v_1462;
 P836 y_1463;
 P832 t_1464;
 P819 ctext_1465;
 P849 saved_1466;
};
struct f_exported_386fr { int dummy;
 P826 d_383;
 rstr *name_384;
 int *ro_385;
 int ro_385v;
 int result_;
 P826 p_1469;
};
struct f_copy_sym_388fr { int dummy;
 P836 y_387;
 P836 result_;
 P836 z_1470;
};
struct f_gen_capsule_390fr { int dummy;
 P826 d_389;
 P836 y_1472;
 P819 saved_1473;
 P826 p_1474;
 P838 tail_1475;
 P838 pm_1476;
};
struct f_capsule_params_394fr { int dummy;
 P826 d_391;
 P826 args_392;
 rt_int line_393;
 P826 p_1478;
 P826 a_1479;
 P832 t_1480;
 P832 vt_1481;
 P828 c_1482;
 P819 lv_1483;
 P828 lc_1484;
 int ro_1485;
 P836 y_1486;
 rstr f_1487;
 rstr g_1488;
 P836 y_1489;
 rstr v_1490;
 rstr access_1491;
};
struct f_elaborate_capsule_399fr { int dummy;
 P826 d_395;
 P836 y_396;
 P826 args_397;
 P826 owner_398;
 P853 cr_1492;
 P843 ctx_1493;
 P851 saved_gotos_1494;
 P836 m_1495;
 P826 p_1496;
 int ro_1497;
 P855 w_1500;
 P836 z_1502;
};
struct f_exports_op_402fr { int dummy;
 P826 d_400;
 rstr *op_401;
 int result_;
 P826 p_1503;
};
struct f_renamed_405fr { int dummy;
 P826 d_403;
 P836 z_404;
 P819 result_;
 P826 r_1504;
};
struct f_pick_capsule_407fr { int dummy;
 P826 d_406;
 P836 result_;
 P836 y_1505;
 P836 first_1506;
 P836 fit_1507;
 rt_int n_1508;
};
struct f_capsule_instance_410fr { int dummy;
 P836 g_408;
 P826 d_409;
 P836 result_;
 P826 gd_1509;
 P826 pat_1510;
 P836 binds_1511;
 P836 inst_1512;
 P840 saved_env_1513;
 rt_int saved_gdepth_1514;
 P836 b_1515;
};
struct f_gen_expose_412fr { int dummy;
 P826 d_411;
 P836 y_1516;
 P836 m_1517;
 P826 p_1518;
 P826 r_1519;
 P836 inst_1520;
 int found_1521;
 P836 z_1522;
 int found_1523;
 P836 z_1524;
};
struct f_finish_ptr_414fr { int dummy;
 P832 t_413;
 P826 d_1525;
 P826 p_1526;
 P828 c_1527;
 rstr dummy_1528;
 rt_int pass_1529;
 P836 y_1533;
 P828 pc_1534;
};
struct f_ptr_args_416fr { int dummy;
 P828 c_415;
 P826 result_;
};
struct f_bind_ptr_params_421fr { int dummy;
 P826 formals_417;
 P826 actuals_418;
 rstr *cell_419;
 rt_int line_420;
 P826 p_1535;
 P826 a_1536;
 P832 vt_1537;
 P828 pc_1538;
 P836 y_1539;
 rstr v_1540;
 rstr pv_1541;
};
struct f_alloc_cell_426fr { int dummy;
 P826 s_422;
 rstr *lv_423;
 P832 t_424;
 P828 c_425;
 P826 d_1542;
 P828 tc_1543;
 P832 vt_1544;
 rstr pt_1545;
 rstr cell_1546;
 rstr fn_1547;
 rstr v_1548;
};
struct f_freeze_args_430fr { int dummy;
 P828 c_427;
 P832 t_428;
 rt_int line_429;
 P828 result_;
 P828 r_1549;
 P826 p_1550;
 P826 a_1551;
 P826 head_1552;
 P826 tail_1553;
 P819 saved_1554;
 P828 pc_1555;
 P832 vt_1556;
 P832 pt_1557;
 rstr nm_1558;
 P836 y_1559;
 P826 n_1560;
 rstr v_1561;
 rstr access_1562;
};
struct f_ptr_subtype_check_434fr { int dummy;
 P832 t_431;
 P828 c_432;
 P826 src_433;
 P819 lv_1563;
 P832 st_1564;
 P828 sc_1565;
 int ro_1566;
 P819 cond_1567;
 P826 a_1568;
 P826 b_1569;
 P832 at_1570;
 P832 bt_1571;
 rstr x_1572;
 rstr y_1573;
};
struct f_normal_function_437fr { int dummy;
 P826 d_435;
 P836 y_436;
 P838 p_1574;
 P826 imp_1575;
 int ro_1576;
 P836 z_1577;
};
struct f_declare_subprogram_439fr { int dummy;
 P826 d_438;
};
struct f_build_subprogram_441fr { int dummy;
 P826 d_440;
 P836 result_;
 P836 y_1578;
 P826 p_1579;
 P838 tail_1580;
 P838 pm_1581;
 P828 rc_1583;
 P838 pm_1584;
 P849 saved_1585;
 P836 z_1586;
};
struct f_has_pragmat_444fr { int dummy;
 P819 pr_442;
 rstr *p_443;
 int result_;
 rt_int i_1587;
};
struct f_suppressing_446fr { int dummy;
 P819 pr_445;
 P819 result_;
 P819 r_1591;
 rt_int i_1592;
 rt_int j_1593;
 rt_int k_1594;
};
struct f_suppressed_448fr { int dummy;
 rstr *x_447;
 int result_;
 rstr w_1595;
 rt_int i_1596;
};
struct f_element_450fr { int dummy;
 P826 e_449;
 P819 saved_1600;
};
struct f_element1_452fr { int dummy;
 P826 e_451;
 rt_int k_1601;
 P836 g_1602;
 rt_int i_1606;
 P832 t_1610;
 rstr c_1611;
};
struct f_storage_455fr { int dummy;
 rstr *name_453;
 P832 t_454;
 rstr result_;
 rstr g_1612;
 rstr f_1613;
};
struct f_bind_458fr { int dummy;
 P836 y_456;
 rstr *access_457;
};
struct f_var_decl_460fr { int dummy;
 P826 d_459;
 P828 c_1614;
 P832 t_1615;
 P836 y_1616;
 rstr access_1617;
 P832 it_1618;
 rstr n_1619;
 P832 vt_1620;
 rstr v_1621;
};
struct f_open_fin_462fr { int dummy;
 rstr *fc_461;
 rstr f_1622;
 P830 l_1623;
};
struct f_close_fins_464fr { int dummy;
 P830 saved_463;
};
struct f_const_decl_466fr { int dummy;
 P826 d_465;
 P828 c_1625;
 P832 t_1626;
 P832 vt_1627;
 P836 y_1628;
 int ok_1629;
 rstr v_1630;
 rstr access_1631;
};
struct f_subprogram_468fr { int dummy;
 P826 d_467;
};
struct f_gen_subprogram_471fr { int dummy;
 P826 d_469;
 P836 y_470;
 P849 saved_code_1632;
 P849 saved_fields_1633;
 int saved_in_1634;
 P836 saved_sym_1635;
 P851 saved_exits_1636;
 P851 saved_gotos_1637;
 rt_int saved_frames_1638;
 P819 args_1639;
 P838 pm_1640;
 P830 saved_handlers_1641;
 P830 saved_cleanups_1642;
 P843 ctx_1643;
 P819 head_1644;
 P819 frame_1645;
 P819 parent_1646;
 P819 copy_back_1647;
 P819 pfin_1648;
 P830 saved_fins_1649;
 P828 saved_rc_1650;
 P819 saved_ret_1651;
 P819 saved_rflag_1652;
 P826 pn_1653;
 P819 nonrec_end_1654;
 int has_pfin_1655;
 rstr ct_1657;
 rstr f_1658;
 P836 p_1659;
 P828 pc_1660;
 P828 ac_1661;
 P828 fc_1662;
 P832 ft_1663;
 rstr bt_1664;
 P828 rc_1665;
 P832 rt_1666;
 rstr g_1667;
 P819 leave_1668;
 rstr xu_1669;
};
struct f_waits_of_473fr { int dummy;
 P826 d_472;
 rstr result_;
 P855 w_1670;
};
struct f_task_waits_475fr { int dummy;
 P826 elems_474;
 rstr result_;
 P826 e_1671;
 P819 r_1672;
};
struct f_await_tasks_477fr { int dummy;
 P826 elems_476;
 rstr w_1673;
};
struct f_capsule_elements_479fr { int dummy;
 P826 elems_478;
 P826 e_1674;
};
struct f_declare_labels_481fr { int dummy;
 P826 elems_480;
 P826 e_1675;
 P826 l_1676;
 P851 x_1677;
};
struct f_start_labels_482fr { int dummy;
 P851 x_1679;
};
struct f_goto_label_484fr { int dummy;
 rstr *name_483;
 P851 result_;
 P851 x_1680;
};
struct f_has_return_486fr { int dummy;
 P826 e_485;
 int result_;
 P826 x_1681;
};
struct f_capsule_body_488fr { int dummy;
 P826 elems_487;
 P819 saved_ret_1682;
 P819 saved_flag_1683;
 rt_int saved_frames_1684;
 P826 e_1685;
 int stmt_1686;
};
struct f_body_elements_490fr { int dummy;
 P826 elems_489;
};
struct f_gen_body_492fr { int dummy;
 P826 elems_491;
 P830 saved_1687;
 P851 saved_gotos_1688;
 rstr xu_1689;
};
struct f_open_unhandled_494fr { int dummy;
 P826 elems_493;
 rstr result_;
 P826 e_1690;
 P819 conds_1691;
 rstr f_1692;
};
struct f_close_unhandled_496fr { int dummy;
 rstr *xu_495;
 rt_int i_1693;
 rstr f_1694;
};
struct f_pop_frames_498fr { int dummy;
 rt_int upto_497;
 rt_int i_1695;
 P830 c_1696;
};
struct f_push_cleanup_500fr { int dummy;
 rstr *s_499;
 P830 c_1697;
};
struct f_pop_cleanup_501fr { int dummy;
};
struct f_gen_statement_503fr { int dummy;
 P826 s_502;
 P819 label_1699;
 P826 gl_1700;
 P851 x_1701;
 P851 x_1704;
};
struct f_st_assign_505fr { int dummy;
 P826 s_504;
 P819 lv_1705;
 P832 t_1706;
 P832 vt_1707;
 P828 c_1708;
 int ro_1709;
 rstr lo_1710;
 rstr hi_1711;
 rstr v_1712;
 rstr lo_1713;
 rstr hi_1714;
 rstr v_1715;
 rstr v_1716;
};
struct f_st_call_507fr { int dummy;
 P826 s_506;
 P826 c_1717;
 P832 t_1718;
 P826 x_1719;
};
struct f_st_if_509fr { int dummy;
 P826 s_508;
 P826 a_1720;
 int first_1721;
 P832 t_1722;
 int taken_1723;
 int ok_1724;
 P845 mv_1725;
 rstr c_1726;
};
struct f_st_case_511fr { int dummy;
 P826 s_510;
 P832 st_1727;
 P832 vt_1728;
 int first_1729;
 P826 a_1730;
 rstr sel_1731;
 rstr tmp_1732;
 P826 lab_1733;
 P819 conds_1734;
 rstr v_1735;
 rstr lo_1736;
 rstr hi_1737;
};
struct f_st_repeat_513fr { int dummy;
 P826 s_512;
 P832 t_1738;
 P828 c_1739;
 rstr cond_1740;
 rstr access_1741;
 rstr lov_1742;
 rstr hiv_1743;
 rstr it_1744;
 P836 y_1745;
};
struct f_st_exit_515fr { int dummy;
 P826 s_514;
 P851 x_1746;
};
struct f_st_return_517fr { int dummy;
 P826 s_516;
 P832 vt_1747;
 rstr v_1748;
};
struct f_result_checked_521fr { int dummy;
 P832 t_518;
 P828 c_519;
 rstr *v_520;
 rstr result_;
};
struct f_exc_id_524fr { int dummy;
 rstr *name_522;
 rt_int line_523;
 rstr result_;
 P836 y_1749;
};
struct f_st_guard_526fr { int dummy;
 P826 s_525;
 P826 h_1750;
 int first_1751;
 P830 hv_1752;
 rstr f_1753;
 rstr x_1754;
 P826 h1_1756;
 P830 seen_1757;
 P826 n1_1758;
 P826 n_1759;
 P819 conds_1760;
};
struct f_st_alloc_528fr { int dummy;
 P826 s_527;
 P819 lv_1761;
 P832 t_1762;
 P832 target_1763;
 P832 vt_1764;
 P828 c_1765;
 P828 tc_1766;
 int ro_1767;
 P826 d_1768;
 P826 p_1769;
 P826 a_1770;
 rstr tcn_1771;
 rstr cell_1772;
 rstr fn_1773;
 rstr v_1774;
};
struct f_act_ref_530fr { int dummy;
 P826 e_529;
 rstr result_;
 P819 lv_1775;
 P832 t_1776;
 P828 c_1777;
 int ro_1778;
 rstr v_1779;
};
struct f_st_create_532fr { int dummy;
 P826 s_531;
 P836 y_1780;
 P838 pm_1781;
 P826 a_1782;
 P819 lv_1783;
 P832 lt_1784;
 P832 vt_1785;
 P828 lc_1786;
 int ro_1787;
 P832 at_1788;
 P828 ac_1789;
 int aro_1790;
 P819 act_1791;
 rstr nf_1792;
 P819 link_1793;
 rt_int i_1794;
 rstr v_1798;
};
struct f_hidden_var_536fr { int dummy;
 rstr *name_533;
 P832 t_534;
 rstr *place_535;
 P836 y_1799;
};
struct f_user_create_542fr { int dummy;
 P826 s_537;
 P836 y_538;
 rstr *uv_539;
 P832 ut_540;
 rstr *nf_541;
 P832 t_1800;
 P849 saved_1801;
 P849 hook_1802;
 P826 un_1803;
 rstr hn_1804;
 rstr aa_1805;
 rstr uname_1806;
 rstr aname_1807;
 P826 start_1808;
 P826 an_1809;
};
struct f_wait_alt_547fr { int dummy;
 P826 inv_543;
 rstr *arr_544;
 rt_int i_545;
 int mixed_546;
 rstr result_;
 P819 lv_1810;
 P832 t_1811;
 P832 vt_1812;
 P828 c_1813;
 int ro_1814;
 P826 fn_1815;
 P826 args_1816;
 rstr slot_1817;
 P819 dv_1818;
 P832 dt_1819;
 rstr tmp_1820;
 rstr v_1821;
 rstr v_1822;
};
struct f_builtin_wait_549fr { int dummy;
 P826 inv_548;
 int result_;
 P819 lv_1823;
 P832 t_1824;
 P828 c_1825;
 int ro_1826;
 P849 saved_1827;
 int ok_1828;
};
struct f_wait_op_554fr { int dummy;
 P826 inv_550;
 rstr *op_551;
 rstr *q_552;
 int is_stmt_553;
 rstr result_;
 P826 x_1831;
 P826 f_1832;
 P826 qn_1833;
 P832 t_1834;
 rstr r_1835;
};
struct f_user_wait_559fr { int dummy;
 P826 s_555;
 rstr *arr_556;
 rstr *w_557;
 rt_int n_558;
 P826 a_1836;
 rt_int i_1837;
 P819 tests_1838;
 P819 revokes_1839;
 P826 inv_1840;
 P826 st_1841;
 P828 c_1842;
 P832 qt_1843;
 rstr qname_1844;
 P836 y_1845;
 rstr access_1846;
};
struct f_st_wait_561fr { int dummy;
 P826 s_560;
 P826 a_1847;
 rt_int n_1848;
 int first_1849;
 P849 inits_1850;
 int user_1851;
 rstr arr_1852;
 rstr w_1853;
 P826 inv_1854;
 P826 inv_1855;
 P819 conds_1856;
 rt_int i_1857;
};
struct f_call_node_565fr { int dummy;
 rstr *name_562;
 P826 arg_563;
 rt_int line_564;
 P826 result_;
 P826 x_1861;
 P826 f_1862;
};
struct f_user_region_567fr { int dummy;
 P826 s_566;
 P832 t_1863;
 rstr f_1864;
 rstr lock_1865;
 rstr unlock_1866;
};
struct f_st_region_569fr { int dummy;
 P826 s_568;
 P819 lv_1867;
 P832 t_1868;
 P828 c_1869;
 int ro_1870;
 rstr lk_1871;
 rstr f_1872;
};
struct f_gparam_572fr { int dummy;
 P826 g_570;
 rstr *name_571;
 P826 result_;
 P826 p_1873;
};
struct f_bind_sym_574fr { int dummy;
 P826 p_573;
 P836 result_;
 P836 y_1874;
};
struct f_same_binds_577fr { int dummy;
 P836 a_575;
 P836 b_576;
 int result_;
 P836 x_1875;
 P836 y_1876;
};
struct f_same_binding_580fr { int dummy;
 P836 a_578;
 P836 b_579;
 int result_;
};
struct f_tt_binds_585fr { int dummy;
 P826 gd_581;
 P826 formals_582;
 P826 actuals_583;
 rt_int line_584;
 P836 result_;
 P826 f_1877;
 P826 a_1878;
 P836 binds_1879;
 P828 c_1880;
 P832 at_1881;
 P826 p_1882;
 P836 b_1883;
 P826 st_1884;
 int ok_1885;
};
struct f_generic_use_587fr { int dummy;
 P826 st_586;
 int result_;
};
struct f_infer_from_592fr { int dummy;
 P826 gd_588;
 P826 pat_589;
 P832 t_590;
 P836 known_591;
 P836 result_;
 P836 binds_1886;
 P826 e_1887;
 P826 tp_1888;
 P819 nm_1889;
 P836 q_1890;
 int have_1891;
 P836 g_1892;
 P836 b_1893;
};
struct f_instantiate_type_598fr { int dummy;
 P836 g_593;
 P826 tt_594;
 P826 args_595;
 P828 *c_596;
 P828 c_596v;
 rt_int line_597;
 P832 result_;
 P826 gd_1894;
 P826 pat_1895;
 P836 binds_1896;
 P836 inst_1897;
 P832 t_1898;
 P853 saved_caps_1899;
 P840 saved_env_1900;
 rt_int saved_gdepth_1901;
 P836 b_1902;
 P836 y_1903;
 P828 yc_1904;
};
struct f_instantiate_603fr { int dummy;
 P836 g_599;
 P826 tt_600;
 P826 args_601;
 rt_int line_602;
 P836 result_;
 P826 gd_1906;
 P826 pat_1907;
 P836 binds_1908;
 P826 f_1909;
 P826 a_1910;
 P826 fp_1911;
 P836 inst_1912;
 P832 at_1913;
 P828 c_1914;
 P843 saved_fctx_1915;
 int saved_in_1916;
 rt_int saved_level_1917;
 P836 saved_sym_1918;
 P849 saved_code_1919;
 P840 saved_env_1920;
 rt_int saved_gdepth_1921;
 rstr v_1922;
 int known_1923;
 P836 q_1924;
 P836 b_1925;
 rstr v_1926;
 P836 b_1927;
};
struct f_access_of_605fr { int dummy;
 P836 y_604;
 rstr result_;
 P819 p_1928;
 rt_int i_1929;
};
struct f_import_of_608fr { int dummy;
 P826 l_606;
 rstr *name_607;
 P826 result_;
 P826 p_1933;
};
struct f_check_import_611fr { int dummy;
 P836 y_609;
 rt_int line_610;
 int result_;
 P843 c_1934;
 int ro_1935;
 P826 imp_1936;
};
struct f_c_ident_613fr { int dummy;
 rstr *s_612;
 rstr result_;
};
struct f_cell_deref_616fr { int dummy;
 P832 t_614;
 rstr *p_615;
 rstr result_;
};
struct f_deref_619fr { int dummy;
 rstr *base_617;
 P832 t_618;
 rstr result_;
};
struct f_is_lvalue_621fr { int dummy;
 P826 e_620;
 int result_;
 P836 y_1937;
};
struct f_lvalue_627fr { int dummy;
 P826 e_622;
 P819 *code_623;
 P819 code_623v;
 P832 *t_624;
 P832 t_624v;
 P828 *c_625;
 P828 c_625v;
 int *ro_626;
 int ro_626v;
 P819 base_1938;
 P832 bt_1939;
 P828 bc_1940;
 P836 y_1941;
};
struct f_select_on_635fr { int dummy;
 rstr *base_628;
 P832 bt_629;
 P826 e_630;
 int *ro_631;
 P819 *code_632;
 P819 code_632v;
 P832 *t_633;
 P832 t_633v;
 P828 *c_634;
 P828 c_634v;
 P826 p_1942;
 P828 pc_1943;
 P826 p_1944;
 P834 f_1945;
 rt_int i_1946;
 rstr fn_1947;
 P834 f_1948;
};
struct f_has_call_637fr { int dummy;
 rstr *s_636;
 int result_;
 rt_int i_1949;
};
struct f_need_slice_639fr { int dummy;
 P832 t_638;
 rstr c_1953;
 rstr n_1954;
 P830 l_1955;
};
struct f_ix_643fr { int dummy;
 rstr *i_640;
 rstr *lo_641;
 rstr *hi_642;
 rstr result_;
};
struct f_index_on_652fr { int dummy;
 rstr *base_644;
 P832 bt_645;
 P826 e_646;
 int *ro_647;
 int lv_648;
 P819 *code_649;
 P819 code_649v;
 P832 *t_650;
 P832 t_650v;
 P828 *c_651;
 P828 c_651v;
 P826 a_1957;
 P832 it_1958;
 rstr lo_1959;
 rstr hi_1960;
 P819 off_1961;
 rt_int k_1962;
 P819 b_1963;
 P819 pre_1964;
 rstr i_1965;
 rstr l_1966;
 rstr h_1967;
 rstr lo_1968;
 rstr hi_1969;
 rstr i_1970;
};
struct f_own_attribute_654fr { int dummy;
 P826 e_653;
 int result_;
 P849 saved_1971;
 P832 bt_1972;
 int ok_1973;
 rstr base_1976;
 P826 p_1977;
 P834 f_1978;
};
struct f_gexpr_658fr { int dummy;
 P826 e_655;
 P832 want_656;
 P832 *t_657;
 P832 t_657v;
 rstr result_;
 rt_int k_1979;
 P819 code_1980;
 P828 c_1981;
 int ro_1982;
 P832 bt_1983;
 P828 ctx_1984;
 P819 r_1985;
 rt_int i_1986;
 rt_int pos_1990;
 rt_int i_1991;
 P836 y_1992;
 int ro_1993;
 P826 call_1994;
 P826 fname_1995;
 rstr a_1996;
 rstr a_1997;
 rstr a_1998;
 P826 nm_1999;
 P836 y_2000;
 rstr base_2001;
 rstr base_2002;
};
struct f_resolved_661fr { int dummy;
 P826 e_659;
 P832 *t_660;
 P832 t_660v;
 rstr result_;
 P828 c_2003;
 P832 vt_2004;
 P836 y_2005;
 P826 tt_2006;
 P826 call_2007;
 P826 f_2008;
 P826 fname_2009;
 rstr v_2010;
};
struct f_gexpr_in_666fr { int dummy;
 P826 e_662;
 P832 want_663;
 P828 c_664;
 P832 *t_665;
 P832 t_665v;
 rstr result_;
};
struct f_ascii_lit_668fr { int dummy;
 int ch_667;
 rstr result_;
 P826 l_2011;
 rt_int i_2012;
};
struct f_octal_670fr { int dummy;
 rt_int n_669;
 rstr result_;
 rstr r_2016;
};
struct f_str_cat_part_672fr { int dummy;
 P832 t_671;
 P832 result_;
};
struct f_peek_type_674fr { int dummy;
 P826 e_673;
 P832 result_;
 P849 saved_2017;
 P832 t_2018;
 rstr v_2021;
};
struct f_set_operands_677fr { int dummy;
 P826 e_675;
 P832 want_676;
 P832 result_;
 P832 t_2022;
};
struct f_copy_node_679fr { int dummy;
 P826 e_678;
 P826 result_;
 P826 x_2023;
};
struct f_wrap_apply_681fr { int dummy;
 P826 e_680;
 P826 result_;
 P826 x_2025;
};
struct f_c_string_683fr { int dummy;
 rstr *s_682;
 rstr result_;
 rt_int n_2026;
 rt_int i_2027;
 rstr r_2031;
 rt_int j_2032;
 rt_int i_2033;
};
struct f_enum_type_of_686fr { int dummy;
 rstr *lit_684;
 rt_int line_685;
 P832 result_;
 P836 y_2037;
 P828 c_2038;
 P826 st_2039;
};
struct f_ptr_attribute_688fr { int dummy;
 P826 e_687;
 int result_;
 P819 lv_2040;
 P832 t_2041;
 P828 c_2042;
 int ro_2043;
 P826 p_2044;
 P849 saved_2045;
};
struct f_attribute_691fr { int dummy;
 P826 e_689;
 P832 *t_690;
 P832 t_690v;
 rstr result_;
 P832 bt_2046;
 P828 c_2047;
 P819 base_2048;
 P826 sub_2049;
 rstr name_2050;
 P826 p_2051;
 P826 a_2052;
 P828 pc_2053;
 rstr v_2054;
 P826 p_2055;
 P826 a_2056;
 P832 pt_2057;
 rstr v_2058;
};
struct f_subtype_compare_696fr { int dummy;
 P826 sa_692;
 P826 sb_693;
 rstr *op_694;
 rt_int line_695;
 rstr result_;
 P828 ca_2059;
 P828 cb_2060;
 P832 ta_2061;
 P832 tb_2062;
 P819 r_2063;
 rstr yes_2064;
 rstr no_2065;
 rt_int k_2066;
 P826 a_2070;
 P826 b_2071;
 P832 at_2072;
 P832 bt2_2073;
 rstr x_2074;
 rstr y_2075;
};
struct f_float_prec_698fr { int dummy;
 P828 c_697;
 rstr result_;
};
struct f_file_attribute_704fr { int dummy;
 P826 e_699;
 P832 bt_700;
 P828 c_701;
 P819 base_702;
 P832 *t_703;
 P832 t_703v;
 rstr result_;
};
struct f_gbinop_708fr { int dummy;
 P826 e_705;
 P832 want_706;
 P832 *t_707;
 P832 t_707v;
 rstr result_;
 P819 op_2076;
 P832 ta_2077;
 P832 tb_2078;
 P832 hint_2079;
 P836 uy_2080;
 P826 l_2081;
 P826 r_2082;
 P826 call_2083;
 P826 fname_2084;
 rstr s_2085;
 rstr a_2086;
 rstr a_2087;
 rstr b_2088;
 rstr a_2089;
 rstr b_2090;
 P832 at_2091;
 rstr a_2092;
 rstr b_2093;
 P832 wa_2094;
 P832 wb_2095;
 P832 ws_2096;
 P832 ce_2097;
 rstr a_2098;
 rstr b_2099;
 rstr dummy_2100;
 rstr a_2101;
 rstr b_2102;
 P832 ct_2103;
 rstr a_2104;
 rstr b_2105;
};
struct f_constructor_713fr { int dummy;
 P826 e_709;
 P832 want_710;
 P828 ctx_711;
 P832 *t_712;
 P832 t_712v;
 rstr result_;
 P826 it_2106;
 P834 f_2107;
 P832 vt_2108;
 P819 s_2109;
 rstr v_2110;
 rt_int i_2111;
 rstr tmp_2112;
 rstr v_2113;
 rstr tmp_2114;
 P819 parts_2115;
 P826 k_2116;
 P819 shared_2117;
 rstr v_2118;
 rstr v_2119;
};
struct f_comp_value_717fr { int dummy;
 P832 t_714;
 P828 c_715;
 rstr *v_716;
 rstr result_;
};
struct f_has_at_719fr { int dummy;
 rstr *s_718;
 int result_;
 rt_int i_2120;
};
struct f_set_elem_722fr { int dummy;
 P832 st_720;
 rstr *v_721;
 rstr result_;
};
struct f_array_cons_727fr { int dummy;
 P826 e_723;
 P832 at_724;
 P828 ctx_725;
 P832 *t_726;
 P832 t_726v;
 rstr result_;
 rstr tmp_2124;
 P819 parts_2125;
 P826 it_2126;
 int positional_2127;
 rt_int k_2128;
 P819 lo_2132;
 P819 hi_2133;
};
struct f_fill_items_733fr { int dummy;
 P826 items_728;
 P832 at_729;
 rstr *tmp_730;
 P830 prefix_731;
 rt_int dim_732;
 rstr result_;
 P826 it_2134;
 rt_int pos_2135;
 P819 r_2136;
 P832 vt_2137;
 rstr v_2138;
 P826 k_2139;
 rt_int d_2140;
 P830 pre_2141;
 P819 loops_2142;
 P819 ends_2143;
 rstr v_2144;
 rstr xv_2145;
 P826 k_2146;
 rstr xv_2147;
 rstr v_2148;
};
struct f_e_line_735fr { int dummy;
 P826 e_734;
 rt_int result_;
};
struct f_add_line_738fr { int dummy;
 P830 l_736;
 rstr *s_737;
 P830 result_;
 P830 r_2149;
 P830 tail_2150;
 P830 x_2151;
 P830 p_2152;
};
struct f_item_value_743fr { int dummy;
 P826 e_739;
 P832 at_740;
 rt_int line_741;
 P832 *vt_742;
 P832 vt_742v;
 rstr result_;
 rstr v_2155;
};
struct f_key_loop_748fr { int dummy;
 P826 k_744;
 P832 at_745;
 rt_int d_746;
 rstr *xv_747;
 rstr result_;
 P832 it_2156;
 rstr lo_2157;
 rstr hi_2158;
};
struct f_store_at_753fr { int dummy;
 P832 at_749;
 rstr *tmp_750;
 P830 xs_751;
 rt_int n_752;
 rstr result_;
 P819 off_2159;
 P830 x_2160;
 rt_int k_2161;
 rstr l_2162;
 rstr h_2163;
};
struct f_fits_756fr { int dummy;
 P836 y_754;
 P826 args_755;
 int result_;
 P826 a_2164;
 P838 pm_2165;
 P832 t_2166;
 P849 saved_2167;
 int ok_2168;
 P819 lv_2169;
 P828 lc_2170;
 int ro_2171;
 rstr v_2174;
};
struct f_resolve_overload_762fr { int dummy;
 rstr *name_757;
 P826 tt_758;
 P826 args_759;
 int is_stmt_760;
 rt_int line_761;
 P836 result_;
 P836 y_2175;
 P836 first_2176;
 rt_int n_2177;
 rt_int pass_2178;
};
struct f_tt_fits_765fr { int dummy;
 P836 y_763;
 P826 tt_764;
 int result_;
 P826 f_2182;
 P826 a_2183;
 P849 saved_2184;
 int ok_2185;
 P828 fc_2188;
 P828 ac_2189;
 P826 fst_2190;
 P832 ft_2191;
 P832 at_2192;
 P826 ast_2193;
};
struct f_overload_chain_768fr { int dummy;
 rstr *name_766;
 rt_int pass_767;
 P836 result_;
};
struct f_is_builtin_770fr { int dummy;
 rstr *n_769;
 int result_;
};
struct f_is_low_level_772fr { int dummy;
 rstr *n_771;
 int result_;
};
struct f_me_high_776fr { int dummy;
 P826 tt_773;
 rt_int line_774;
 P832 *t_775;
 P832 t_775v;
 rstr result_;
 P828 c_2194;
};
struct f_type_tag_778fr { int dummy;
 P832 t_777;
 rstr result_;
};
struct f_lock_ref_781fr { int dummy;
 P826 e_779;
 rstr *name_780;
 rstr result_;
 P819 lv_2195;
 P832 t_2196;
 P828 c_2197;
 int ro_2198;
};
struct f_user_op_784fr { int dummy;
 rstr *op_782;
 P826 args_783;
 P836 result_;
 P836 y_2199;
 rt_int pass_2200;
};
struct f_gcall_788fr { int dummy;
 P826 e_785;
 int is_stmt_786;
 P832 *t_787;
 P832 t_787v;
 rstr result_;
 P826 fn_2204;
 P826 tt_2205;
 P836 y_2206;
 P819 args_2207;
 P826 a_2208;
 P838 pm_2209;
 P832 lt_2210;
 P832 vt_2211;
 P819 lv_2212;
 P828 lc_2213;
 int ro_2214;
 P836 alt_2215;
 P853 cr_2216;
 rt_int i_2217;
 rstr v_2221;
 rstr ct_2222;
 rstr v_2223;
};
struct f_requires_790fr { int dummy;
 P836 y_789;
 P830 result_;
 P826 imp_2224;
};
struct f_add_req_793fr { int dummy;
 P836 y_791;
 rstr *name_792;
 P830 l_2225;
};
struct f_require_calls_796fr { int dummy;
 P836 y_794;
 P826 e_795;
 P826 x_2227;
 P826 callee_2228;
 P836 z_2229;
 P830 l_2230;
};
struct f_declared_in_799fr { int dummy;
 P826 elems_797;
 rstr *name_798;
 int result_;
 P826 e_2231;
};
struct f_check_requires_802fr { int dummy;
 P836 y_800;
 rt_int line_801;
 P830 l_2232;
 P836 z_2233;
};
struct f_act_delay_args_804fr { int dummy;
 P826 args_803;
 rstr result_;
 P832 at_2234;
 P832 t1_2235;
 rstr a_2236;
 rstr v_2237;
 rstr v_2238;
};
struct f_actual_bounds_808fr { int dummy;
 P832 ft_805;
 P832 t_806;
 P828 c_807;
 rstr result_;
};
struct f_builtin_815fr { int dummy;
 rstr *name_809;
 P826 tt_810;
 P826 args_811;
 rt_int line_812;
 int is_stmt_813;
 P832 *t_814;
 P832 t_814v;
 rstr result_;
 P832 at_2239;
 rt_int n_2240;
 rstr a_2241;
 rstr a_2242;
 rstr a_2243;
 rstr a_2244;
 rstr a_2245;
 rstr n1_2246;
 rstr m1_2247;
 rstr a_2248;
 rstr a_2249;
 P826 last_2250;
 rstr a_2251;
 rstr a_2252;
 P819 lv_2253;
 P828 lc_2254;
 int ro_2255;
 P826 last_2256;
 P819 lv_2257;
 P819 dv_2258;
 P828 lc_2259;
 int ro_2260;
 P832 mt_2261;
 P832 dt_2262;
 rstr v_2263;
 P819 lv_2264;
 P828 lc_2265;
 int ro_2266;
 P832 mt_2267;
 P819 lv_2268;
 P819 dv_2269;
 P819 bv_2270;
 P828 lc_2271;
 int ro_2272;
 P832 mt_2273;
 P832 dt_2274;
 P832 bt_2275;
 rstr v_2276;
 rstr v_2277;
 rstr v_2278;
 rstr v_2279;
 rstr a_2280;
 P819 bv_2281;
 P828 bc_2282;
 int ro_2283;
 P832 bt_2284;
 rstr l_2285;
 P819 pv_2286;
 P828 pc_2287;
 int ro_2288;
 P832 pt_2289;
 rstr dev_2290;
 rstr cmd_2291;
 P819 dv_2292;
 P828 dc_2293;
 int ro_2294;
 P832 dt_2295;
};
struct f_translate_817fr { int dummy;
 P826 units_816;
 P826 u_2296;
 P826 l_2298;
 rstr w_2299;
};
struct f_print_program_818fr { int dummy;
};
struct Pc820 { rt_int p_n; rstr all; };
struct Pc824 { rt_int p_n; A825 all; };
struct Pc841 { rt_int p_n; A842 all; };
static void as_R856(R856 *d, R856 s);
static R856 cp_R856(R856 s);
static int eq_R856(R856 a, R856 b);
static void as_R854(R854 *d, R854 s);
static R854 cp_R854(R854 s);
static int eq_R854(R854 a, R854 b);
static void as_R852(R852 *d, R852 s);
static R852 cp_R852(R852 s);
static int eq_R852(R852 a, R852 b);
static void as_R850(R850 *d, R850 s);
static R850 cp_R850(R850 s);
static int eq_R850(R850 a, R850 b);
static void as_R848(R848 *d, R848 s);
static R848 cp_R848(R848 s);
static int eq_R848(R848 a, R848 b);
static void as_R846(R846 *d, R846 s);
static R846 cp_R846(R846 s);
static int eq_R846(R846 a, R846 b);
static void as_R844(R844 *d, R844 s);
static R844 cp_R844(R844 s);
static int eq_R844(R844 a, R844 b);
static void as_A842(A842 *d, A842 s);
static A842 cp_A842(A842 s);
static int eq_A842(A842 a, A842 b);
static void as_R839(R839 *d, R839 s);
static R839 cp_R839(R839 s);
static int eq_R839(R839 a, R839 b);
static void as_R837(R837 *d, R837 s);
static R837 cp_R837(R837 s);
static int eq_R837(R837 a, R837 b);
static void as_R835(R835 *d, R835 s);
static R835 cp_R835(R835 s);
static int eq_R835(R835 a, R835 b);
static void as_R833(R833 *d, R833 s);
static R833 cp_R833(R833 s);
static int eq_R833(R833 a, R833 b);
static void as_R831(R831 *d, R831 s);
static R831 cp_R831(R831 s);
static int eq_R831(R831 a, R831 b);
static void as_R829(R829 *d, R829 s);
static R829 cp_R829(R829 s);
static int eq_R829(R829 a, R829 b);
static void as_R827(R827 *d, R827 s);
static R827 cp_R827(R827 s);
static int eq_R827(R827 a, R827 b);
static void as_A825(A825 *d, A825 s);
static A825 cp_A825(A825 s);
static int eq_A825(A825 a, A825 b);
static void as_R822(R822 *d, R822 s);
static R822 cp_R822(R822 s);
static int eq_R822(R822 a, R822 b);
static P819 f_mk_3(rstr *s_2);
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
static P849 f_new_buffer_24(void);
static void f_put_27(P849 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P849 b_30);
static void f_splice_34(P849 a_32, P849 b_33);
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
static P826 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P826 *head_62, P826 *tail_63, P826 x_64);
static rt_int f_list_len_67(P826 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P819 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P819 f_expect_id_89(void);
static P826 f_name_node_90(void);
static P826 f_id_list_91(void);
static P826 f_p_subtype_92(void);
static P826 f_constraint_list_93(void);
static P826 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P826 f_actual_tt_97(void);
static P826 f_binop_102(P819 op_98, P826 l_99, P826 r_100, rt_int line_101);
static P826 f_expr_103(void);
static P826 f_expr_and_104(void);
static P826 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P826 f_expr_rel_108(void);
static P826 f_expr_add_109(void);
static P826 f_expr_mul_110(void);
static P826 f_expr_pow_111(void);
static P826 f_expr_prefix_112(void);
static P826 f_postfix_113(void);
static P826 f_primary_114(void);
static P826 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P826 f_body_117(void);
static P826 f_body_element_118(void);
static P826 f_declaration_119(void);
static P826 f_object_decl_120(void);
static P826 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P826 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P826 f_formal_params_126(void);
static int f_imports_list_128(P826 owner_127);
static int f_is_definable_130(rstr *w_129);
static P819 f_definable_name_131(void);
static P826 f_subprogram_decl_132(void);
static P826 f_capsule_decl_133(void);
static P826 f_formal_tt_134(void);
static P826 f_generic_decl_135(void);
static P826 f_task_decl_136(void);
static P826 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P826 f_statement_140(void);
static P826 f_unlabeled_statement_141(void);
static P826 f_arm_145(P826 cond_142, P826 b_143, rt_int line_144);
static P826 f_if_stmt_146(void);
static P826 f_case_stmt_147(void);
static P826 f_repeat_stmt_148(void);
static P826 f_guard_stmt_149(void);
static P826 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P836 f_lookup_154(rstr *name_153);
static P836 f_lookup_decl_156(P826 d_155);
static void f_define_159(P836 y_157, rt_int line_158);
static int f_overloadable_161(P836 y_160);
static int f_same_tt_164(P826 a_162, P826 b_163);
static int f_same_signature_167(P838 a_165, P838 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P836 f_new_sym_172(rt_int kind_170, P819 name_171);
static P832 f_new_typ_174(rt_int kind_173);
static P828 f_new_cons_175(void);
static int f_scalar_kind_177(P832 t_176);
static rstr f_bound_ctype_179(P832 t_178);
static rstr f_cbound_182(P828 c_180, rstr *b_181);
static rstr f_clo_184(P828 c_183);
static rstr f_chi_186(P828 c_185);
static rstr f_sub_lo_189(P832 t_187, P828 c_188);
static rstr f_sub_hi_192(P832 t_190, P828 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P828 f_copy_cons_197(P828 c_196);
static P828 f_freeze_200(P828 c_198, P832 t_199);
static rstr f_checked_204(P832 t_201, P828 c_202, rstr *v_203);
static int f_same_lits_207(P826 a_205, P826 b_206);
static P832 f_str_elem_209(P832 t_208);
static int f_same_212(P832 a_210, P832 b_211);
static P832 f_base_of_214(P832 t_213);
static P828 f_base_cons_217(P832 t_215, P828 c_216);
static rstr f_kind_name_219(P832 t_218);
static void f_check_type_223(P832 got_220, P832 want_221, rt_int line_222);
static rstr f_ctype_225(P832 t_224);
static rstr f_struct_body_227(P832 t_226);
static rstr f_field_decls_229(P832 t_228);
static void f_declare_ctype_231(P832 t_230);
static rstr f_dim_lo_233(rt_int k_232);
static rstr f_dim_hi_235(rt_int k_234);
static rstr f_more_dims_237(P832 t_236);
static rstr f_acnt_240(P832 t_238, rstr *base_239);
static P819 f_cons_lo_243(P828 c_241, rt_int k_242);
static P819 f_cons_hi_246(P828 c_244, rt_int k_245);
static P832 f_idx_type_249(P832 t_247, rt_int k_248);
static void f_init_ascii_250(void);
static rt_int f_lit_index_253(P826 lits_251, rstr *name_252);
static P832 f_resolve_subtype_256(P826 st_254, P828 *c_255);
static int f_float_lit_258(P826 e_257);
static void f_tag_constraint_262(P832 t_259, P826 e_260, P828 c_261);
static P832 f_named_subtype_265(P826 st_263, P828 *c_264);
static P832 f_invoke_abbrev_269(P836 y_266, P826 st_267, P828 *c_268);
static void f_apply_constraint_274(P832 t_270, P826 args_271, P828 c_272, rt_int line_273);
static P832 f_value_subtype_278(P826 e_275, P828 *c_276, P819 *base_277);
static P830 f_reverse_pairs_280(P830 l_279);
static P832 f_inquiry_283(P826 st_281, P828 *c_282);
static P826 f_as_subtype_285(P826 e_284);
static P826 f_tt_subtype_290(P819 name_286, P826 tt_287, P826 args_288, rt_int line_289);
static int f_type_name_292(rstr *name_291);
static rstr f_empty_set_294(P832 t_293);
static int f_opened_296(P832 t_295);
static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299);
static rstr f_subst_302(rstr *s_301);
static P832 f_new_type_306(P836 y_303, P826 st_304, P828 *c_305);
static void f_init_storage_310(rstr *lval_307, P832 t_308, P828 c_309);
static rstr f_init_call_313(P836 y_311, rstr *lval_312);
static int f_needs_fin_315(P832 t_314);
static rstr f_fin_code_318(rstr *lval_316, P832 t_317);
static P832 f_tparam_type_321(P832 t_319, rstr *name_320);
static void f_make_storage_325(rstr *lval_322, P832 t_323, P828 c_324);
static rstr f_uninit_value_327(P832 t_326);
static rstr f_init_chk_330(P832 t_328, rstr *v_329);
static rt_int f_manifest_333(P826 e_331, int *ok_332);
static P845 f_mk_mval_336(rt_int kind_334, rt_int i_335);
static rt_int f_ipow_339(rt_int a_337, rt_int b_338);
static P845 f_meval_342(P826 e_340, int *ok_341);
static rstr f_bool_text_344(int b_343);
static rt_int f_bool_i_346(int b_345);
static rstr f_mstr_348(P845 v_347);
static int f_ascii_char_350(rt_int i_349);
static int f_user_defined_352(rstr *op_351);
static rstr f_mcopy_354(P832 t_353);
static int f_composite_356(P832 t_355);
static rstr f_assign_code_361(rstr *lval_357, P832 t_358, rstr *v_359, P828 c_360);
static rstr f_copy_code_364(P832 t_362, rstr *v_363);
static rstr f_eq_code_368(P832 t_365, rstr *a_366, rstr *b_367);
static rstr f_elem_assign_372(rstr *lval_369, P832 t_370, rstr *v_371);
static int f_seen_name_375(P830 l_373, rstr *s_374);
static void f_emit_helpers_376(void);
static void f_helper_bodies_378(P832 t_377);
static void f_declare_body_380(P826 elems_379);
static void f_manifest_const_382(P826 d_381);
static int f_exported_386(P826 d_383, rstr *name_384, int *ro_385);
static P836 f_copy_sym_388(P836 y_387);
static void f_gen_capsule_390(P826 d_389);
static void f_capsule_params_394(P826 d_391, P826 args_392, rt_int line_393);
static void f_elaborate_capsule_399(P826 d_395, P836 y_396, P826 args_397, P826 owner_398);
static int f_exports_op_402(P826 d_400, rstr *op_401);
static P819 f_renamed_405(P826 d_403, P836 z_404);
static P836 f_pick_capsule_407(P826 d_406);
static P836 f_capsule_instance_410(P836 g_408, P826 d_409);
static void f_gen_expose_412(P826 d_411);
static void f_finish_ptr_414(P832 t_413);
static P826 f_ptr_args_416(P828 c_415);
static void f_bind_ptr_params_421(P826 formals_417, P826 actuals_418, rstr *cell_419, rt_int line_420);
static void f_alloc_cell_426(P826 s_422, rstr *lv_423, P832 t_424, P828 c_425);
static P828 f_freeze_args_430(P828 c_427, P832 t_428, rt_int line_429);
static void f_ptr_subtype_check_434(P832 t_431, P828 c_432, P826 src_433);
static void f_normal_function_437(P826 d_435, P836 y_436);
static void f_declare_subprogram_439(P826 d_438);
static P836 f_build_subprogram_441(P826 d_440);
static int f_has_pragmat_444(P819 pr_442, rstr *p_443);
static P819 f_suppressing_446(P819 pr_445);
static int f_suppressed_448(rstr *x_447);
static void f_element_450(P826 e_449);
static void f_element1_452(P826 e_451);
static rstr f_storage_455(rstr *name_453, P832 t_454);
static void f_bind_458(P836 y_456, rstr *access_457);
static void f_var_decl_460(P826 d_459);
static void f_open_fin_462(rstr *fc_461);
static void f_close_fins_464(P830 saved_463);
static void f_const_decl_466(P826 d_465);
static void f_subprogram_468(P826 d_467);
static void f_gen_subprogram_471(P826 d_469, P836 y_470);
static rstr f_waits_of_473(P826 d_472);
static rstr f_task_waits_475(P826 elems_474);
static void f_await_tasks_477(P826 elems_476);
static void f_capsule_elements_479(P826 elems_478);
static void f_declare_labels_481(P826 elems_480);
static void f_start_labels_482(void);
static P851 f_goto_label_484(rstr *name_483);
static int f_has_return_486(P826 e_485);
static void f_capsule_body_488(P826 elems_487);
static void f_body_elements_490(P826 elems_489);
static void f_gen_body_492(P826 elems_491);
static rstr f_open_unhandled_494(P826 elems_493);
static void f_close_unhandled_496(rstr *xu_495);
static void f_pop_frames_498(rt_int upto_497);
static void f_push_cleanup_500(rstr *s_499);
static void f_pop_cleanup_501(void);
static void f_gen_statement_503(P826 s_502);
static void f_st_assign_505(P826 s_504);
static void f_st_call_507(P826 s_506);
static void f_st_if_509(P826 s_508);
static void f_st_case_511(P826 s_510);
static void f_st_repeat_513(P826 s_512);
static void f_st_exit_515(P826 s_514);
static void f_st_return_517(P826 s_516);
static rstr f_result_checked_521(P832 t_518, P828 c_519, rstr *v_520);
static rstr f_exc_id_524(rstr *name_522, rt_int line_523);
static void f_st_guard_526(P826 s_525);
static void f_st_alloc_528(P826 s_527);
static rstr f_act_ref_530(P826 e_529);
static void f_st_create_532(P826 s_531);
static void f_hidden_var_536(rstr *name_533, P832 t_534, rstr *place_535);
static void f_user_create_542(P826 s_537, P836 y_538, rstr *uv_539, P832 ut_540, rstr *nf_541);
static rstr f_wait_alt_547(P826 inv_543, rstr *arr_544, rt_int i_545, int mixed_546);
static int f_builtin_wait_549(P826 inv_548);
static rstr f_wait_op_554(P826 inv_550, rstr *op_551, rstr *q_552, int is_stmt_553);
static void f_user_wait_559(P826 s_555, rstr *arr_556, rstr *w_557, rt_int n_558);
static void f_st_wait_561(P826 s_560);
static P826 f_call_node_565(rstr *name_562, P826 arg_563, rt_int line_564);
static void f_user_region_567(P826 s_566);
static void f_st_region_569(P826 s_568);
static P826 f_gparam_572(P826 g_570, rstr *name_571);
static P836 f_bind_sym_574(P826 p_573);
static int f_same_binds_577(P836 a_575, P836 b_576);
static int f_same_binding_580(P836 a_578, P836 b_579);
static P836 f_tt_binds_585(P826 gd_581, P826 formals_582, P826 actuals_583, rt_int line_584);
static int f_generic_use_587(P826 st_586);
static P836 f_infer_from_592(P826 gd_588, P826 pat_589, P832 t_590, P836 known_591);
static P832 f_instantiate_type_598(P836 g_593, P826 tt_594, P826 args_595, P828 *c_596, rt_int line_597);
static P836 f_instantiate_603(P836 g_599, P826 tt_600, P826 args_601, rt_int line_602);
static rstr f_access_of_605(P836 y_604);
static P826 f_import_of_608(P826 l_606, rstr *name_607);
static int f_check_import_611(P836 y_609, rt_int line_610);
static rstr f_c_ident_613(rstr *s_612);
static rstr f_cell_deref_616(P832 t_614, rstr *p_615);
static rstr f_deref_619(rstr *base_617, P832 t_618);
static int f_is_lvalue_621(P826 e_620);
static void f_lvalue_627(P826 e_622, P819 *code_623, P832 *t_624, P828 *c_625, int *ro_626);
static void f_select_on_635(rstr *base_628, P832 bt_629, P826 e_630, int *ro_631, P819 *code_632, P832 *t_633, P828 *c_634);
static int f_has_call_637(rstr *s_636);
static void f_need_slice_639(P832 t_638);
static rstr f_ix_643(rstr *i_640, rstr *lo_641, rstr *hi_642);
static void f_index_on_652(rstr *base_644, P832 bt_645, P826 e_646, int *ro_647, int lv_648, P819 *code_649, P832 *t_650, P828 *c_651);
static int f_own_attribute_654(P826 e_653);
static rstr f_gexpr_658(P826 e_655, P832 want_656, P832 *t_657);
static rstr f_resolved_661(P826 e_659, P832 *t_660);
static rstr f_gexpr_in_666(P826 e_662, P832 want_663, P828 c_664, P832 *t_665);
static rstr f_ascii_lit_668(int ch_667);
static rstr f_octal_670(rt_int n_669);
static P832 f_str_cat_part_672(P832 t_671);
static P832 f_peek_type_674(P826 e_673);
static P832 f_set_operands_677(P826 e_675, P832 want_676);
static P826 f_copy_node_679(P826 e_678);
static P826 f_wrap_apply_681(P826 e_680);
static rstr f_c_string_683(rstr *s_682);
static P832 f_enum_type_of_686(rstr *lit_684, rt_int line_685);
static int f_ptr_attribute_688(P826 e_687);
static rstr f_attribute_691(P826 e_689, P832 *t_690);
static rstr f_subtype_compare_696(P826 sa_692, P826 sb_693, rstr *op_694, rt_int line_695);
static rstr f_float_prec_698(P828 c_697);
static rstr f_file_attribute_704(P826 e_699, P832 bt_700, P828 c_701, P819 base_702, P832 *t_703);
static rstr f_gbinop_708(P826 e_705, P832 want_706, P832 *t_707);
static rstr f_constructor_713(P826 e_709, P832 want_710, P828 ctx_711, P832 *t_712);
static rstr f_comp_value_717(P832 t_714, P828 c_715, rstr *v_716);
static int f_has_at_719(rstr *s_718);
static rstr f_set_elem_722(P832 st_720, rstr *v_721);
static rstr f_array_cons_727(P826 e_723, P832 at_724, P828 ctx_725, P832 *t_726);
static rstr f_fill_items_733(P826 items_728, P832 at_729, rstr *tmp_730, P830 prefix_731, rt_int dim_732);
static rt_int f_e_line_735(P826 e_734);
static P830 f_add_line_738(P830 l_736, rstr *s_737);
static rstr f_item_value_743(P826 e_739, P832 at_740, rt_int line_741, P832 *vt_742);
static rstr f_key_loop_748(P826 k_744, P832 at_745, rt_int d_746, rstr *xv_747);
static rstr f_store_at_753(P832 at_749, rstr *tmp_750, P830 xs_751, rt_int n_752);
static int f_fits_756(P836 y_754, P826 args_755);
static P836 f_resolve_overload_762(rstr *name_757, P826 tt_758, P826 args_759, int is_stmt_760, rt_int line_761);
static int f_tt_fits_765(P836 y_763, P826 tt_764);
static P836 f_overload_chain_768(rstr *name_766, rt_int pass_767);
static int f_is_builtin_770(rstr *n_769);
static int f_is_low_level_772(rstr *n_771);
static rstr f_me_high_776(P826 tt_773, rt_int line_774, P832 *t_775);
static rstr f_type_tag_778(P832 t_777);
static rstr f_lock_ref_781(P826 e_779, rstr *name_780);
static P836 f_user_op_784(rstr *op_782, P826 args_783);
static rstr f_gcall_788(P826 e_785, int is_stmt_786, P832 *t_787);
static P830 f_requires_790(P836 y_789);
static void f_add_req_793(P836 y_791, rstr *name_792);
static void f_require_calls_796(P836 y_794, P826 e_795);
static int f_declared_in_799(P826 elems_797, rstr *name_798);
static void f_check_requires_802(P836 y_800, rt_int line_801);
static rstr f_act_delay_args_804(P826 args_803);
static rstr f_actual_bounds_808(P832 ft_805, P832 t_806, P828 c_807);
static rstr f_builtin_815(rstr *name_809, P826 tt_810, P826 args_811, rt_int line_812, int is_stmt_813, P832 *t_814);
static void f_translate_817(P826 units_816);
static void f_print_program_818(void);
static int ex_compile_error_1;
static P823 g_toks_857;
static rt_int g_ntoks_858;
static rt_int g_tpos_859;
static rt_int g_src_line_860;
static P819 g_pending_prag_861;
static P840 g_table_862;
static P840 g_genv_863;
static P836 g_all_insts_864;
static rt_int g_depth_865;
static P836 g_scope_stack_866;
static P832 g_all_types_867;
static rt_int g_serial_868;
static P849 g_out_types_869;
static P849 g_out_helpers_870;
static P849 g_out_protos_871;
static P849 g_out_globals_872;
static P849 g_out_funcs_873;
static P849 g_out_init_874;
static P849 g_out_excs_875;
static P849 g_code_876;
static P849 g_fields_buf_877;
static int g_in_func_878;
static rt_int g_cur_level_879;
static P843 g_fctx_880;
static P853 g_caps_881;
static P855 g_cap_waits_882;
static P830 g_psub_883;
static P819 g_st_field_884;
static P849 g_out_frames_885;
static P849 g_out_roots_886;
static int g_uses_free_887;
static P830 g_fins_888;
static int g_uses_findyn_889;
static P836 g_func_sym_890;
static P828 g_func_rc_891;
static P819 g_cap_ret_892;
static P819 g_cap_rflag_893;
static rt_int g_ret_frames_894;
static rt_int g_gdepth_895;
static P819 g_suppress_896;
static P828 g_cons_ctx_897;
static int g_mark_uninit_898;
static P851 g_exits_899;
static P851 g_gotos_900;
static rt_int g_frames_901;
static P830 g_handlers_902;
static P830 g_cleanups_903;
static rt_int g_trial_904;
static P830 g_mcopies_905;
static P832 g_ty_int_906;
static P832 g_ty_bool_907;
static P832 g_ty_float_908;
static P832 g_ty_ascii_909;
static P832 g_ty_string_910;
static P832 g_ty_void_911;
static P832 g_ty_file_912;
static P832 g_ty_nil_913;
static P832 g_ty_lock_914;
static P832 g_ty_latch_915;
static P832 g_ty_act_916;
static P832 g_file_mode_type_917;
static P828 g_no_cons_918;
static P819 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_919 = NULL;
{ P819 cell920 = rt_alloc(sizeof *cell920);
rt_int pv921 = ((rt_int)(((*F->s_2)).len));
cell920->p_n = pv921;
cell920->all = rt_str_new(pv921);
rt_str_assign(&cell920->all, (*F->s_2));
F->t_919 = cell920;
}
F->result_ = F->t_919;
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
F->r_922 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_922, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_922;
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
F->r_923 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_923, (*F->s_14));
{ rt_int lo925 = ((rt_int)1LL), hi926 = ((rt_int)(((*F->s_14)).len));
for (rt_int it927 = lo925; it927 <= hi926; it927++) {
F->i_924 = it927;
if (((65 <= rt_r_echk(rt_str_get(F->r_923, F->i_924))) && (rt_r_echk(rt_str_get(F->r_923, F->i_924)) <= 90))) {
(*rt_str_at(&F->r_923, F->i_924)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_923, F->i_924))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_923;
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
F->l_928 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_929 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_928), rt_str(" ", 1)));
{ rt_int lo931 = ((rt_int)1LL), hi932 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_929).len))), ((rt_int)1LL));
for (rt_int it933 = lo931; it933 <= hi932; it933++) {
F->i_930 = it933;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_930, rt_sub(rt_add(F->i_930, ((rt_int)((F->w_929).len))), ((rt_int)1LL))), F->w_929)) {
F->result_ = rt_str_cat(F->l_928, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_928;
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
g_serial_868 = rt_add(rt_r_ichk(g_serial_868), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_868)));
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
if ((rt_r_ichk(g_trial_904) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P849 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_934 = NULL;
{ R850 *cell935 = rt_alloc(sizeof(R850));
(*cell935).head = NULL;
(*cell935).tail = NULL;
F->b_934 = cell935;
}
F->result_ = F->b_934;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P849 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_936 = NULL;
{ R831 *cell937 = rt_alloc(sizeof(R831));
(*cell937).s = NULL;
(*cell937).next = NULL;
F->l_936 = cell937;
}
(*(P830)rt_nil_check(F->l_936)).s = f_mk_3(&(*F->s_26));
if (((*(P849)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P849)rt_nil_check(F->b_25)).head = F->l_936;
} else {
(*(P830)rt_nil_check((*(P849)rt_nil_check(F->b_25)).tail)).next = F->l_936;
}
(*(P849)rt_nil_check(F->b_25)).tail = F->l_936;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_876, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P849 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_938 = NULL;
F->l_938 = (*(P849)rt_nil_check(F->b_30)).head;
while ((F->l_938 != NULL)) {
rt_putln((((P819)rt_nil_check((*(P830)rt_nil_check(F->l_938)).s))->all));
F->l_938 = (*(P830)rt_nil_check(F->l_938)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P849 a_32, P849 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P849)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P849)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P849)rt_nil_check(F->a_32)).head = (*(P849)rt_nil_check(F->b_33)).head;
} else {
(*(P830)rt_nil_check((*(P849)rt_nil_check(F->a_32)).tail)).next = (*(P849)rt_nil_check(F->b_33)).head;
}
(*(P849)rt_nil_check(F->a_32)).tail = (*(P849)rt_nil_check(F->b_33)).tail;
(*(P849)rt_nil_check(F->b_33)).head = NULL;
(*(P849)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel939 = (*F->w_35);
if (0 || rt_str_eq(sel939, rt_str("ABBREV", 6)) || rt_str_eq(sel939, rt_str("ABNORMAL", 8)) || rt_str_eq(sel939, rt_str("ALL", 3)) || rt_str_eq(sel939, rt_str("ALLOC", 5)) || rt_str_eq(sel939, rt_str("ASSERT", 6)) || rt_str_eq(sel939, rt_str("BEGIN", 5)) || rt_str_eq(sel939, rt_str("BY", 2)) || rt_str_eq(sel939, rt_str("CAPSULE", 7)) || rt_str_eq(sel939, rt_str("CASE", 4)) || rt_str_eq(sel939, rt_str("CONST", 5)) || rt_str_eq(sel939, rt_str("CREATE", 6)) || rt_str_eq(sel939, rt_str("DO", 2)) || rt_str_eq(sel939, rt_str("ELSE", 4)) || rt_str_eq(sel939, rt_str("ELSEIF", 6)) || rt_str_eq(sel939, rt_str("END", 3)) || rt_str_eq(sel939, rt_str("EXCEPTION", 9)) || rt_str_eq(sel939, rt_str("EXIT", 4)) || rt_str_eq(sel939, rt_str("EXPORTS", 7)) || rt_str_eq(sel939, rt_str("EXPOSE", 6)) || rt_str_eq(sel939, rt_str("EXTERNAL", 8)) || rt_str_eq(sel939, rt_str("FOR", 3)) || rt_str_eq(sel939, rt_str("FROM", 4)) || rt_str_eq(sel939, rt_str("FUNC", 4)) || rt_str_eq(sel939, rt_str("GENERIC", 7)) || rt_str_eq(sel939, rt_str("GOTO", 4)) || rt_str_eq(sel939, rt_str("GUARD", 5)) || rt_str_eq(sel939, rt_str("IF", 2)) || rt_str_eq(sel939, rt_str("IMPORTS", 7)) || rt_str_eq(sel939, rt_str("LOCATION", 8)) || rt_str_eq(sel939, rt_str("NAMED", 5)) || rt_str_eq(sel939, rt_str("NEEDS", 5)) || rt_str_eq(sel939, rt_str("NEW", 3)) || rt_str_eq(sel939, rt_str("NONE", 4)) || rt_str_eq(sel939, rt_str("OUT", 3)) || rt_str_eq(sel939, rt_str("OF", 2)) || rt_str_eq(sel939, rt_str("PRAG", 4)) || rt_str_eq(sel939, rt_str("PROC", 4)) || rt_str_eq(sel939, rt_str("RAISE", 5)) || rt_str_eq(sel939, rt_str("READONLY", 8)) || rt_str_eq(sel939, rt_str("REVERSE", 7)) || rt_str_eq(sel939, rt_str("REGION", 6)) || rt_str_eq(sel939, rt_str("RENAMING", 8)) || rt_str_eq(sel939, rt_str("REP", 3)) || rt_str_eq(sel939, rt_str("REPEAT", 6)) || rt_str_eq(sel939, rt_str("RERAISE", 7)) || rt_str_eq(sel939, rt_str("RETURN", 6)) || rt_str_eq(sel939, rt_str("SUBTYPE", 7)) || rt_str_eq(sel939, rt_str("TASK", 4)) || rt_str_eq(sel939, rt_str("THEN", 4)) || rt_str_eq(sel939, rt_str("TO", 2)) || rt_str_eq(sel939, rt_str("TYPE", 4)) || rt_str_eq(sel939, rt_str("VAR", 3)) || rt_str_eq(sel939, rt_str("WAIT", 4)) || rt_str_eq(sel939, rt_str("WHEN", 4)) || rt_str_eq(sel939, rt_str("WHILE", 5))) {
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
F->t_940 = NULL;
{ R822 *cell941 = rt_alloc(sizeof(R822));
(*cell941).s = NULL;
(*cell941).prags = NULL;
F->t_940 = cell941;
}
(*(P821)rt_nil_check(F->t_940)).kind = F->kind_39;
(*(P821)rt_nil_check(F->t_940)).line = rt_r_ichk(g_src_line_860);
(*(P821)rt_nil_check(F->t_940)).ival = F->ival_41;
(*(P821)rt_nil_check(F->t_940)).s = f_mk_3(&(*F->s_40));
(*(P821)rt_nil_check(F->t_940)).prags = g_pending_prag_861;
g_pending_prag_861 = NULL;
g_ntoks_858 = rt_add(rt_r_ichk(g_ntoks_858), ((rt_int)1LL));
(((P823)rt_nil_check(g_toks_857))->all).p[(rt_index(rt_r_ichk(g_ntoks_858), (((P823)rt_nil_check(g_toks_857))->all).lo, (((P823)rt_nil_check(g_toks_857))->all).hi) - (((P823)rt_nil_check(g_toks_857))->all).lo)] = F->t_940;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_942 = RT_R_IUNDEF;
F->j_942 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_942) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_942)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_942))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_942))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_942))) == 95) && ((rt_r_ichk(F->j_942) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_942), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_942), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_942 = rt_add(rt_r_ichk(F->j_942), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_942);
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
F->w_943 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_943, (*F->s_46));
{ rt_int lo945 = ((rt_int)1LL), hi946 = ((rt_int)((F->w_943).len));
for (rt_int it947 = lo945; it947 <= hi946; it947++) {
F->k_944 = it947;
(*rt_str_at(&F->w_943, F->k_944)) = f_upper_13(rt_r_echk(rt_str_get(F->w_943, F->k_944)));
}
}
F->result_ = F->w_943;
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
F->j_948 = RT_R_IUNDEF;
F->j_948 = F->i_49;
while (((rt_r_ichk(F->j_948) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_948))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_948))) == 9)))) {
F->j_948 = rt_add(rt_r_ichk(F->j_948), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_948);
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
F->j_949 = RT_R_IUNDEF;
F->j_949 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_950 = NULL;
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_951 = RT_R_EUNDEF;
F->more_951 = 1;
if (((rt_r_ichk(F->j_949) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
while (rt_r_echk(F->more_951)) {
F->k_952 = RT_R_IUNDEF;
F->j_949 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_949));
if (((rt_r_ichk(F->j_949) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))))))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_952 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_949));
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_949), rt_sub(rt_r_ichk(F->k_952), ((rt_int)1LL))); b_; }))); b_; }));
F->j_949 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_952));
if (((rt_r_ichk(F->j_949) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) == 40))) {
F->go_953 = RT_R_EUNDEF;
F->go_953 = 1;
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), rt_str("(", 1)); b_; }));
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
while (rt_r_echk(F->go_953)) {
F->j_949 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_949));
if (((rt_r_ichk(F->j_949) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))))))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_952 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_949));
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_949), rt_sub(rt_r_ichk(F->k_952), ((rt_int)1LL))); b_; }))); b_; }));
F->j_949 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_952));
if (((rt_r_ichk(F->j_949) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) == 44))) {
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), rt_str(",", 1)); b_; }));
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_949) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) == 41))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
F->go_953 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), rt_str(")", 1)); b_; }));
}
F->r_950 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_950))->all), rt_str(";", 1)); b_; }));
F->j_949 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_949));
if (((rt_r_ichk(F->j_949) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) == 44))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_949) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_949))) == 41))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
F->more_951 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P819)rt_nil_check(F->r_950))->all));
if ((g_pending_prag_861 == NULL)) {
g_pending_prag_861 = F->r_950;
} else {
g_pending_prag_861 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(g_pending_prag_861))->all), (((P819)rt_nil_check(F->r_950))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_949);
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
F->i_954 = RT_R_IUNDEF;
F->i_954 = ((rt_int)1LL);
F->k_955 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_954) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_955 = rt_r_ichk(F->i_954);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_955))) != 59)) {
F->k_955 = rt_add(rt_r_ichk(F->k_955), ((rt_int)1LL));
}
{
F->p_956 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_954), rt_sub(rt_r_ichk(F->k_955), ((rt_int)1LL))));
F->ok_957 = ((((((((((rt_str_eq(F->p_956, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_956, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_956, rt_str("OPEN", 4))) || rt_str_eq(F->p_956, rt_str("CLOSED", 6))) || rt_str_eq(F->p_956, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_956, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_956, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_956, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_956, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_956, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_956).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_956, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_958 = ((((((((((rt_int)((F->p_956).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_956, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_956, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_956, rt_str("OPEN", 4))) || rt_str_eq(F->p_956, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_956).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_956, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_956, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_956, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_956).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_956, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_958 && (!F->ok_957))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_956); b_; }));
}
}
F->i_954 = rt_add(rt_r_ichk(F->k_955), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_959 = RT_R_IUNDEF;
F->i_959 = ((rt_int)1LL);
F->j_960 = RT_R_IUNDEF;
F->j_960 = ((rt_int)0LL);
F->n_961 = RT_R_IUNDEF;
F->n_961 = ((rt_int)(((*F->line_56)).len));
F->c_962 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_959) <= rt_r_ichk(F->n_961))) {
F->c_962 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_959)));
if (((((rt_r_echk(F->c_962) == 32) || (rt_r_echk(F->c_962) == 9)) || (rt_r_echk(F->c_962) == 13)) || (rt_r_echk(F->c_962) == 12))) {
F->i_959 = rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_962) == 37)) {
F->i_959 = rt_add(rt_r_ichk(F->n_961), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_962))) {
F->j_960 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_959));
{
F->w_963 = rt_str_new(rt_sub(rt_r_ichk(F->j_960), rt_r_ichk(F->i_959)));
rt_str_assign(&F->w_963, rt_str_slice((*F->line_56), rt_r_ichk(F->i_959), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))));
{ rt_int lo965 = ((rt_int)1LL), hi966 = ((rt_int)((F->w_963).len));
for (rt_int it967 = lo965; it967 <= hi966; it967++) {
F->k_964 = it967;
(*rt_str_at(&F->w_963, F->k_964)) = f_upper_13(rt_r_echk(rt_str_get(F->w_963, F->k_964)));
}
}
if (rt_str_eq(F->w_963, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) != 59))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
} else if (rt_str_eq(F->w_963, rt_str("PRAG", 4))) {
F->j_960 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_960));
} else if (f_is_reserved_36(&F->w_963)) {
f_add_token_42((((rt_int)2LL)), &F->w_963, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_963)) {
f_add_token_42((((rt_int)3LL)), &F->w_963, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_963, ((rt_int)0LL));
}
}
F->i_959 = rt_r_ichk(F->j_960);
} else if (f_is_digit_11(rt_r_echk(F->c_962))) {
F->j_960 = rt_r_ichk(F->i_959);
while (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960)))))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_960) < rt_r_ichk(F->n_961)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL))))))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
while (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960)))))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 101)))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
if (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 45)))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960)))))) {
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_959), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_959), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_959), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL)))));
}
F->i_959 = rt_r_ichk(F->j_960);
} else if ((((rt_r_echk(F->c_962) == 39) && (rt_r_ichk(F->i_959) < rt_r_ichk(F->n_961))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL)))) == 39))) {
F->j_960 = rt_add(rt_r_ichk(F->i_959), ((rt_int)2LL));
while (((rt_r_ichk(F->j_960) < rt_r_ichk(F->n_961)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_960) >= rt_r_ichk(F->n_961))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_959), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_959 = rt_add(rt_r_ichk(F->j_960), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_962) == 39)) {
F->j_960 = rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL));
if (((rt_r_ichk(F->j_960) > rt_r_ichk(F->n_961)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))))))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_960 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_960));
{
F->w_968 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_960), rt_r_ichk(F->i_959)), ((rt_int)1LL)));
rt_str_assign(&F->w_968, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))));
{ rt_int lo970 = ((rt_int)1LL), hi971 = ((rt_int)((F->w_968).len));
for (rt_int it972 = lo970; it972 <= hi971; it972++) {
F->k_969 = it972;
(*rt_str_at(&F->w_968, F->k_969)) = f_upper_13(rt_r_echk(rt_str_get(F->w_968, F->k_969)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_968, ((rt_int)0LL));
}
F->i_959 = rt_r_ichk(F->j_960);
} else if ((rt_r_echk(F->c_962) == 34)) {
F->j_960 = rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL));
while (((rt_r_ichk(F->j_960) <= rt_r_ichk(F->n_961)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_960))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_960 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_960) > rt_r_ichk(F->n_961))) {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_960), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_959 = rt_add(rt_r_ichk(F->j_960), ((rt_int)1LL));
} else {
{
F->two_973 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_973, rt_str("  ", 2));
(*rt_str_at(&F->two_973, ((rt_int)1LL))) = rt_r_echk(F->c_962);
if ((rt_r_ichk(F->i_959) < rt_r_ichk(F->n_961))) {
(*rt_str_at(&F->two_973, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_973, rt_str(":=", 2)) || rt_str_eq(F->two_973, rt_str("=>", 2))) || rt_str_eq(F->two_973, rt_str("..", 2))) || rt_str_eq(F->two_973, rt_str("**", 2))) || rt_str_eq(F->two_973, rt_str("/=", 2))) || rt_str_eq(F->two_973, rt_str("<=", 2))) || rt_str_eq(F->two_973, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_973, ((rt_int)0LL));
F->i_959 = rt_add(rt_r_ichk(F->i_959), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_973, rt_str("<<", 2)) || rt_str_eq(F->two_973, rt_str(">>", 2))) || rt_str_eq(F->two_973, rt_str("::", 2)))) {
if (rt_str_eq(F->two_973, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_973, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_959 = rt_add(rt_r_ichk(F->i_959), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_962) == 40) || (rt_r_echk(F->c_962) == 41)) || (rt_r_echk(F->c_962) == 91)) || (rt_r_echk(F->c_962) == 93)) || (rt_r_echk(F->c_962) == 44)) || (rt_r_echk(F->c_962) == 58)) || (rt_r_echk(F->c_962) == 59)) || (rt_r_echk(F->c_962) == 46)) || (rt_r_echk(F->c_962) == 35)) || (rt_r_echk(F->c_962) == 43)) || (rt_r_echk(F->c_962) == 45)) || (rt_r_echk(F->c_962) == 42)) || (rt_r_echk(F->c_962) == 47)) || (rt_r_echk(F->c_962) == 38)) || (rt_r_echk(F->c_962) == 61)) || (rt_r_echk(F->c_962) == 60)) || (rt_r_echk(F->c_962) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_962)); b_; }), ((rt_int)0LL));
F->i_959 = rt_add(rt_r_ichk(F->i_959), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_860), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_974 = rt_str_new(rt_sizeln());
rt_readln(&F->line_974);
g_src_line_860 = rt_add(rt_r_ichk(g_src_line_860), ((rt_int)1LL));
f_lex_line_57(&F->line_974);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P826 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_975 = NULL;
{ R827 *cell976 = rt_alloc(sizeof(R827));
(*cell976).name = NULL;
(*cell976).tag = NULL;
(*cell976).prags = NULL;
(*cell976).labels = NULL;
(*cell976).a = NULL;
(*cell976).b = NULL;
(*cell976).c = NULL;
(*cell976).d = NULL;
(*cell976).e = NULL;
(*cell976).next = NULL;
F->x_975 = cell976;
}
(*(P826)rt_nil_check(F->x_975)).kind = F->kind_59;
(*(P826)rt_nil_check(F->x_975)).line = F->line_60;
F->result_ = F->x_975;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P826 *head_62, P826 *tail_63, P826 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P826)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P826)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P826)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P826 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_977 = RT_R_IUNDEF;
F->n_977 = ((rt_int)0LL);
F->p_978 = NULL;
F->p_978 = F->l_66;
while ((F->p_978 != NULL)) {
F->n_977 = rt_add(rt_r_ichk(F->n_977), ((rt_int)1LL));
F->p_978 = (*(P826)rt_nil_check(F->p_978)).next;
}
F->result_ = rt_r_ichk(F->n_977);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_859), F->k_75) > rt_r_ichk(g_ntoks_858))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_859), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P819 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_859), F->k_77) > rt_r_ichk(g_ntoks_858))) {
F->result_ = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_858), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_859), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
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
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
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
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
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
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P819 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_859), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_979 = NULL;
F->x_979 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P826)rt_nil_check(F->x_979)).name = f_expect_id_89();
F->result_ = F->x_979;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_980 = NULL;
F->tail_981 = NULL;
f_append_65(&F->head_980, &F->tail_981, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_980, &F->tail_981, f_name_node_90());
}
F->result_ = F->head_980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_982 = RT_R_IUNDEF;
F->line_982 = f_cur_line_68();
F->x_983 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->x_983 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_982));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P826)rt_nil_check(F->x_983)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_983;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_984 = rt_str_copy((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if (rt_str_eq(F->w_984, rt_str("ARRAY", 5))) {
F->x_983 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_982));
{
F->head_985 = NULL;
F->tail_986 = NULL;
f_append_65(&F->head_985, &F->tail_986, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_985, &F->tail_986, f_p_subtype_92());
}
(*(P826)rt_nil_check(F->x_983)).a = F->head_985;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P826)rt_nil_check(F->x_983)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_984, rt_str("RECORD", 6)) || rt_str_eq(F->w_984, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_984, rt_str("RECORD", 6))) {
F->x_983 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_982));
} else {
F->x_983 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_982));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_987 = NULL;
F->tail_988 = NULL;
F->more_989 = RT_R_EUNDEF;
F->more_989 = 1;
while (rt_r_echk(F->more_989)) {
F->names_990 = NULL;
F->names_990 = f_id_list_91();
F->st_991 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_991 = f_p_subtype_92();
while ((F->names_990 != NULL)) {
F->cmp_992 = NULL;
F->cmp_992 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P826)rt_nil_check(F->names_990)).line));
(*(P826)rt_nil_check(F->cmp_992)).name = (*(P826)rt_nil_check(F->names_990)).name;
(*(P826)rt_nil_check(F->cmp_992)).a = F->st_991;
f_append_65(&F->head_987, &F->tail_988, F->cmp_992);
F->names_990 = (*(P826)rt_nil_check(F->names_990)).next;
}
F->more_989 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->x_983)).a = F->head_987;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_984, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_983)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_984, rt_str("ENUM", 4))) {
F->x_983 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_982));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_993 = NULL;
F->tail_994 = NULL;
F->more_995 = RT_R_EUNDEF;
F->more_995 = 1;
while (rt_r_echk(F->more_995)) {
F->lit_996 = NULL;
F->lit_996 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_982));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P826)rt_nil_check(F->lit_996)).name = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
f_append_65(&F->head_993, &F->tail_994, F->lit_996);
F->more_995 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->x_983)).a = F->head_993;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_983)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P826)rt_nil_check(F->x_983)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_984, rt_str("STRING", 6)) || rt_str_eq(F->w_984, rt_str("SET", 3))) || rt_str_eq(F->w_984, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_984, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_984, rt_str("STRING", 6))) {
F->x_983 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_982));
} else if (rt_str_eq(F->w_984, rt_str("SET", 3))) {
F->x_983 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_982));
} else if (rt_str_eq(F->w_984, rt_str("MAILBOX", 7))) {
F->x_983 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_982));
} else {
F->x_983 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_982));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P826)rt_nil_check(F->x_983)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_983)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_984, rt_str("INT", 3))) {
F->x_983 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_982));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_983)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P826)rt_nil_check(F->x_983)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_984, rt_str("FLOAT", 5))) {
F->x_983 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_982));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_983)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_983)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P826)rt_nil_check(F->x_983)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_983 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_982));
(*(P826)rt_nil_check(F->x_983)).name = f_mk_3(&F->w_984);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_983)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_983)).b = f_constraint_list_93();
(*(P826)rt_nil_check(F->x_983)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_983;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_997 = NULL;
F->tail_998 = NULL;
F->more_999 = RT_R_EUNDEF;
F->more_999 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_999)) {
F->line_1000 = RT_R_IUNDEF;
F->line_1000 = f_cur_line_68();
F->lo_1001 = NULL;
F->lo_1001 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1002 = NULL;
F->r_1002 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1000));
(*(P826)rt_nil_check(F->r_1002)).a = F->lo_1001;
(*(P826)rt_nil_check(F->r_1002)).b = f_expr_103();
f_append_65(&F->head_997, &F->tail_998, F->r_1002);
} else {
f_append_65(&F->head_997, &F->tail_998, F->lo_1001);
}
F->more_999 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_997;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1003 = NULL;
F->tail_1004 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1003, &F->tail_1004, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1003, &F->tail_1004, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1003;
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

static P826 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1005 = NULL;
F->tail_1006 = NULL;
F->more_1007 = RT_R_EUNDEF;
F->more_1007 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1007)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P819)rt_nil_check((*(P821)rt_nil_check((((P823)rt_nil_check(g_toks_857))->all).p[(rt_index(rt_r_ichk(g_tpos_859), (((P823)rt_nil_check(g_toks_857))->all).lo, (((P823)rt_nil_check(g_toks_857))->all).hi) - (((P823)rt_nil_check(g_toks_857))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1005, &F->tail_1006, f_p_subtype_92());
} else {
f_append_65(&F->head_1005, &F->tail_1006, f_expr_103());
}
F->more_1007 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1005;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_binop_102(P819 op_98, P826 l_99, P826 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1008 = NULL;
F->x_1008 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P826)rt_nil_check(F->x_1008)).name = F->op_98;
(*(P826)rt_nil_check(F->x_1008)).a = F->l_99;
(*(P826)rt_nil_check(F->x_1008)).b = F->r_100;
F->result_ = F->x_1008;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1009 = NULL;
F->l_1009 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1010 = NULL;
F->op_1010 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1011 = RT_R_IUNDEF;
F->line_1011 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1009 = f_binop_102(F->op_1010, F->l_1009, f_expr_and_104(), rt_r_ichk(F->line_1011));
}
F->result_ = F->l_1009;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1012 = NULL;
F->l_1012 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1013 = RT_R_IUNDEF;
F->line_1013 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1012 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1012, f_expr_not_105(), rt_r_ichk(F->line_1013));
}
F->result_ = F->l_1012;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1014 = NULL;
F->x_1014 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1014)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P826)rt_nil_check(F->x_1014)).a = f_expr_not_105();
F->result_ = F->x_1014;
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

static P826 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1015 = NULL;
F->l_1015 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P819)rt_nil_check((*(P821)rt_nil_check((((P823)rt_nil_check(g_toks_857))->all).p[(rt_index(rt_r_ichk(g_tpos_859), (((P823)rt_nil_check(g_toks_857))->all).lo, (((P823)rt_nil_check(g_toks_857))->all).hi) - (((P823)rt_nil_check(g_toks_857))->all).lo)])).s))->all)))) {
F->op_1016 = NULL;
F->op_1016 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1017 = RT_R_IUNDEF;
F->line_1017 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1015 = f_binop_102(F->op_1016, F->l_1015, f_expr_add_109(), rt_r_ichk(F->line_1017));
}
F->result_ = F->l_1015;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1018 = NULL;
F->l_1018 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1019 = NULL;
F->op_1019 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1020 = RT_R_IUNDEF;
F->line_1020 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1018 = f_binop_102(F->op_1019, F->l_1018, f_expr_mul_110(), rt_r_ichk(F->line_1020));
}
F->result_ = F->l_1018;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1021 = NULL;
F->l_1021 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1022 = NULL;
F->op_1022 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1023 = RT_R_IUNDEF;
F->line_1023 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1021 = f_binop_102(F->op_1022, F->l_1021, f_expr_pow_111(), rt_r_ichk(F->line_1023));
}
F->result_ = F->l_1021;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1024 = NULL;
F->l_1024 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1025 = RT_R_IUNDEF;
F->line_1025 = f_cur_line_68();
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->l_1024 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1024, f_expr_prefix_112(), rt_r_ichk(F->line_1025));
}
F->result_ = F->l_1024;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1026 = NULL;
F->x_1026 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P826)rt_nil_check(F->x_1026)).name = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1026)).a = f_expr_prefix_112();
F->result_ = F->x_1026;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1027 = NULL;
F->p_1027 = f_primary_114();
while (1) {
F->line_1028 = RT_R_IUNDEF;
F->line_1028 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1029 = NULL;
F->x_1029 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1028));
F->head_1030 = NULL;
F->tail_1031 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1032 = RT_R_EUNDEF;
F->more_1032 = 1;
while (rt_r_echk(F->more_1032)) {
F->lo_1033 = NULL;
F->lo_1033 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1034 = NULL;
F->r_1034 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1028));
(*(P826)rt_nil_check(F->r_1034)).a = F->lo_1033;
(*(P826)rt_nil_check(F->r_1034)).b = f_expr_103();
f_append_65(&F->head_1030, &F->tail_1031, F->r_1034);
} else {
f_append_65(&F->head_1030, &F->tail_1031, F->lo_1033);
}
F->more_1032 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P826)rt_nil_check(F->x_1029)).a = F->p_1027;
(*(P826)rt_nil_check(F->x_1029)).b = F->head_1030;
F->p_1027 = F->x_1029;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1035 = NULL;
F->x_1035 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1028));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1035)).a = F->p_1027;
(*(P826)rt_nil_check(F->x_1035)).name = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->p_1027 = F->x_1035;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P826)rt_nil_check(F->p_1027)).kind) == (((rt_int)7LL))))) {
F->x_1036 = NULL;
F->x_1036 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1028));
(*(P826)rt_nil_check(F->x_1036)).a = F->p_1027;
(*(P826)rt_nil_check(F->x_1036)).b = f_actual_tt_97();
F->p_1027 = F->x_1036;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1037 = NULL;
F->x_1037 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1028));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1037)).a = F->p_1027;
(*(P826)rt_nil_check(F->x_1037)).b = f_p_subtype_92();
F->p_1027 = F->x_1037;
} else {
F->result_ = F->p_1027;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1038 = RT_R_IUNDEF;
F->line_1038 = f_cur_line_68();
F->x_1039 = NULL;
F->k_1040 = RT_R_IUNDEF;
F->k_1040 = rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1040) == (((rt_int)4LL)))) {
F->x_1039 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1038));
(*(P826)rt_nil_check(F->x_1039)).ival = rt_r_ichk((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P826)rt_nil_check(F->x_1039)).name = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = F->x_1039;
goto ret_;
}
if ((((rt_r_ichk(F->k_1040) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1040) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1040) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1040) == (((rt_int)5LL)))) {
F->x_1039 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1038));
} else if ((rt_r_ichk(F->k_1040) == (((rt_int)7LL)))) {
F->x_1039 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1038));
} else {
F->x_1039 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1038));
}
(*(P826)rt_nil_check(F->x_1039)).name = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = F->x_1039;
goto ret_;
}
if ((rt_r_ichk(F->k_1040) == (((rt_int)1LL)))) {
F->w_1041 = rt_str_copy((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1041, rt_str("TRUE", 4)) || rt_str_eq(F->w_1041, rt_str("FALSE", 5)))) {
F->x_1039 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1038));
if (rt_str_eq(F->w_1041, rt_str("TRUE", 4))) {
(*(P826)rt_nil_check(F->x_1039)).ival = ((rt_int)1LL);
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = F->x_1039;
goto ret_;
}
if (rt_str_eq(F->w_1041, rt_str("NIL", 3))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1038));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1039 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1038));
(*(P826)rt_nil_check(F->x_1039)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1039;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1042 = NULL;
F->tail_1043 = NULL;
F->x_1039 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1038));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1044 = RT_R_EUNDEF;
F->more_1044 = 1;
while (rt_r_echk(F->more_1044)) {
f_append_65(&F->head_1042, &F->tail_1043, f_constructor_item_115());
F->more_1044 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P826)rt_nil_check(F->x_1039)).a = F->head_1042;
F->result_ = F->x_1039;
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

static P826 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1045 = RT_R_IUNDEF;
F->line_1045 = f_cur_line_68();
F->it_1046 = NULL;
F->it_1046 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1045));
F->first_1047 = NULL;
F->first_1047 = f_expr_103();
F->keys_1048 = NULL;
F->ktail_1049 = NULL;
F->lab_1050 = NULL;
F->lab_1050 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1045));
(*(P826)rt_nil_check(F->lab_1050)).a = F->first_1047;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P826)rt_nil_check(F->lab_1050)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1048, &F->ktail_1049, F->lab_1050);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1051 = RT_R_IUNDEF;
F->save_1051 = rt_r_ichk(g_tpos_859);
F->more_1052 = NULL;
F->tail2_1053 = NULL;
F->ok_1054 = RT_R_EUNDEF;
F->ok_1054 = 0;
F->go_1055 = RT_R_EUNDEF;
F->go_1055 = 1;
while ((rt_r_echk(F->go_1055) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1056 = NULL;
F->l2_1056 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1045));
(*(P826)rt_nil_check(F->l2_1056)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P826)rt_nil_check(F->l2_1056)).b = f_expr_103();
}
f_append_65(&F->more_1052, &F->tail2_1053, F->l2_1056);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1054 = 1;
F->go_1055 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1055 = 0;
}
}
if (rt_r_echk(F->ok_1054)) {
f_append_65(&F->keys_1048, &F->ktail_1049, F->lab_1050);
f_append_65(&F->keys_1048, &F->ktail_1049, F->more_1052);
} else {
g_tpos_859 = rt_r_ichk(F->save_1051);
}
}
if (((F->keys_1048 == NULL) && ((*(P826)rt_nil_check(F->lab_1050)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1048 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P826)rt_nil_check(F->it_1046)).a = F->keys_1048;
(*(P826)rt_nil_check(F->it_1046)).b = f_expr_103();
} else {
(*(P826)rt_nil_check(F->it_1046)).b = F->first_1047;
}
F->result_ = F->it_1046;
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

static P826 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1057 = NULL;
F->tail_1058 = NULL;
F->stmts_1059 = RT_R_EUNDEF;
F->stmts_1059 = 0;
F->after_1060 = NULL;
while ((!f_at_body_end_116())) {
F->x_1061 = NULL;
F->x_1061 = f_body_element_118();
if (((F->x_1061 != NULL) && ((((rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1059)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1061 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1059) && (F->after_1060 == NULL))) {
F->after_1060 = F->x_1061;
}
} else if (((F->x_1061 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1061)).kind) != (((rt_int)33LL))))) {
if ((F->after_1060 != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->after_1060)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1059 = 1;
}
f_append_65(&F->head_1057, &F->tail_1058, F->x_1061);
}
F->result_ = F->head_1057;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1062 = NULL;
F->pr_1063 = NULL;
F->pr_1063 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1062 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1062 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1062)).a = f_expr_103();
} else {
F->x_1062 = f_statement_140();
}
if ((F->pr_1063 != NULL)) {
F->p_1064 = NULL;
F->p_1064 = F->x_1062;
while ((F->p_1064 != NULL)) {
if (((*(P826)rt_nil_check(F->p_1064)).prags == NULL)) {
(*(P826)rt_nil_check(F->p_1064)).prags = F->pr_1063;
} else {
(*(P826)rt_nil_check(F->p_1064)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->pr_1063))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1064)).prags))->all)); b_; }));
}
F->p_1064 = (*(P826)rt_nil_check(F->p_1064)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1062;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1065 = RT_R_IUNDEF;
F->line_1065 = f_cur_line_68();
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
F->result_ = f_expose_decl_137();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_136();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_135();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_1066 = NULL;
F->tail_1067 = NULL;
F->names_1068 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->names_1068 = f_id_list_91();
while ((F->names_1068 != NULL)) {
F->x_1069 = NULL;
F->x_1069 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1065));
(*(P826)rt_nil_check(F->x_1069)).name = (*(P826)rt_nil_check(F->names_1068)).name;
f_append_65(&F->head_1066, &F->tail_1067, F->x_1069);
F->names_1068 = (*(P826)rt_nil_check(F->names_1068)).next;
}
F->result_ = F->head_1066;
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

static P826 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1070 = RT_R_IUNDEF;
F->line_1070 = f_cur_line_68();
F->is_var_1071 = RT_R_EUNDEF;
F->is_var_1071 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1072 = NULL;
F->st_1073 = NULL;
F->init_1074 = NULL;
F->loc_1075 = NULL;
F->loc_kind_1076 = RT_R_IUNDEF;
F->loc_kind_1076 = ((rt_int)0LL);
F->head_1077 = NULL;
F->tail_1078 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->names_1072 = f_id_list_91();
if (rt_r_echk(F->is_var_1071)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1073 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->loc_kind_1076 = ((rt_int)1LL);
} else {
F->loc_kind_1076 = ((rt_int)2LL);
}
F->loc_1075 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1074 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1073 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1074 = f_expr_103();
}
while ((F->names_1072 != NULL)) {
F->x_1079 = NULL;
if (rt_r_echk(F->is_var_1071)) {
F->x_1079 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1070));
} else {
F->x_1079 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1070));
}
(*(P826)rt_nil_check(F->x_1079)).name = (*(P826)rt_nil_check(F->names_1072)).name;
(*(P826)rt_nil_check(F->x_1079)).a = F->st_1073;
(*(P826)rt_nil_check(F->x_1079)).b = F->init_1074;
(*(P826)rt_nil_check(F->x_1079)).c = F->loc_1075;
(*(P826)rt_nil_check(F->x_1079)).ival = rt_r_ichk(F->loc_kind_1076);
f_append_65(&F->head_1077, &F->tail_1078, F->x_1079);
F->names_1072 = (*(P826)rt_nil_check(F->names_1072)).next;
}
F->result_ = F->head_1077;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1080 = NULL;
F->x_1080 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1080)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1080)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P826)rt_nil_check(F->x_1080)).a = f_p_subtype_92();
F->result_ = F->x_1080;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1081 = RT_R_IUNDEF;
F->depth_1081 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1081) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1081 = rt_add(rt_r_ichk(F->depth_1081), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1081 = rt_sub(rt_r_ichk(F->depth_1081), ((rt_int)1LL));
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P826 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1082 = RT_R_IUNDEF;
F->line_1082 = f_cur_line_68();
F->name_1083 = NULL;
F->params_1084 = NULL;
F->x_1085 = NULL;
F->tts_1086 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->name_1083 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1086 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1084 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->x_1085 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1082));
(*(P826)rt_nil_check(F->x_1085)).d = F->params_1084;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1085)).b = f_formal_params_126();
}
} else {
F->x_1085 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1082));
(*(P826)rt_nil_check(F->x_1085)).b = F->params_1084;
}
(*(P826)rt_nil_check(F->x_1085)).name = F->name_1083;
(*(P826)rt_nil_check(F->x_1085)).e = F->tts_1086;
(*(P826)rt_nil_check(F->x_1085)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1085;
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

static P826 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1087 = NULL;
F->tail_1088 = NULL;
F->more_1089 = RT_R_EUNDEF;
F->more_1089 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1089)) {
F->mode_1090 = RT_R_IUNDEF;
F->mode_1090 = (((rt_int)1LL));
F->names_1091 = NULL;
F->ntail_1092 = NULL;
F->st_1093 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1090 = f_mode_of_125(&(((P819)rt_nil_check((*(P821)rt_nil_check((((P823)rt_nil_check(g_toks_857))->all).p[(rt_index(rt_r_ichk(g_tpos_859), (((P823)rt_nil_check(g_toks_857))->all).lo, (((P823)rt_nil_check(g_toks_857))->all).hi) - (((P823)rt_nil_check(g_toks_857))->all).lo)])).s))->all));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
}
f_append_65(&F->names_1091, &F->ntail_1092, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P819)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P819)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
f_append_65(&F->names_1091, &F->ntail_1092, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1093 = f_p_subtype_92();
while ((F->names_1091 != NULL)) {
F->p_1094 = NULL;
F->p_1094 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P826)rt_nil_check(F->names_1091)).line));
(*(P826)rt_nil_check(F->p_1094)).name = (*(P826)rt_nil_check(F->names_1091)).name;
(*(P826)rt_nil_check(F->p_1094)).ival = rt_r_ichk(F->mode_1090);
(*(P826)rt_nil_check(F->p_1094)).a = F->st_1093;
f_append_65(&F->head_1087, &F->tail_1088, F->p_1094);
F->names_1091 = (*(P826)rt_nil_check(F->names_1091)).next;
}
F->more_1089 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1087;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P826 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1095 = NULL;
F->tail_1096 = NULL;
F->more_1097 = RT_R_EUNDEF;
F->more_1097 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P826)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P826)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1097)) {
F->ro_1098 = RT_R_EUNDEF;
F->ro_1098 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1099 = NULL;
F->x_1099 = f_name_node_90();
if (rt_r_echk(F->ro_1098)) {
(*(P826)rt_nil_check(F->x_1099)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1095, &F->tail_1096, F->x_1099);
F->more_1097 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->owner_127)).d = F->head_1095;
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

static P819 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P819)rt_nil_check((*(P821)rt_nil_check((((P823)rt_nil_check(g_toks_857))->all).p[(rt_index(rt_r_ichk(g_tpos_859), (((P823)rt_nil_check(g_toks_857))->all).lo, (((P823)rt_nil_check(g_toks_857))->all).hi) - (((P823)rt_nil_check(g_toks_857))->all).lo)])).s))->all))))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_859), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P826 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1100 = RT_R_IUNDEF;
F->line_1100 = f_cur_line_68();
F->x_1101 = NULL;
F->is_abn_1102 = RT_R_EUNDEF;
F->is_abn_1102 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1103 = RT_R_EUNDEF;
F->is_func_1103 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1104 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1103)) {
F->x_1101 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1100));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1101 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1100));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1102)) {
(*(P826)rt_nil_check(F->x_1101)).flag = ((rt_int)1LL);
}
(*(P826)rt_nil_check(F->x_1101)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1101)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1101)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1103)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P826)rt_nil_check(F->x_1101)).b = f_p_subtype_92();
}
F->dummy_1104 = f_imports_list_128(F->x_1101);
if (((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P826)rt_nil_check(F->x_1101)).prags == NULL)) {
(*(P826)rt_nil_check(F->x_1101)).prags = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P826)rt_nil_check(F->x_1101)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1101)).prags))->all), (((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P826)rt_nil_check(F->x_1101)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1103)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P819)rt_nil_check(f_definable_name_131()))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1101)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1101)).name))->all)); b_; }));
}
F->result_ = F->x_1101;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1105 = NULL;
F->x_1105 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1106 = RT_R_EUNDEF;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1105)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1105)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1105)).b = f_formal_params_126();
}
F->dummy_1106 = f_imports_list_128(F->x_1105);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P826)rt_nil_check(F->x_1105)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P826)rt_nil_check(F->x_1105)).ival = ((rt_int)0LL);
} else {
F->head_1107 = NULL;
F->tail_1108 = NULL;
F->more_1109 = RT_R_EUNDEF;
F->more_1109 = 1;
while (rt_r_echk(F->more_1109)) {
F->n_1110 = NULL;
F->n_1110 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P826)rt_nil_check(F->n_1110)).ival = ((rt_int)1LL);
}
(*(P826)rt_nil_check(F->n_1110)).name = f_definable_name_131();
f_append_65(&F->head_1107, &F->tail_1108, F->n_1110);
F->more_1109 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->x_1105)).a = F->head_1107;
(*(P826)rt_nil_check(F->x_1105)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P826)rt_nil_check(F->x_1105)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P819)rt_nil_check(f_expect_id_89()))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1105)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1105;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1111 = NULL;
F->tail_1112 = NULL;
F->more_1113 = RT_R_EUNDEF;
F->more_1113 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1113)) {
f_append_65(&F->head_1111, &F->tail_1112, f_name_node_90());
F->more_1113 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1111;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1114 = NULL;
F->x_1114 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1115 = NULL;
F->tail_1116 = NULL;
F->more_1117 = RT_R_EUNDEF;
F->more_1117 = 1;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
while (rt_r_echk(F->more_1117)) {
F->names_1118 = NULL;
F->names_1118 = f_id_list_91();
F->kind_1119 = RT_R_IUNDEF;
F->kind_1119 = ((rt_int)6LL);
F->st_1120 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1119 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1119 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1119 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1119 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1119 = ((rt_int)5LL);
} else {
F->st_1120 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1119) <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P826)rt_nil_check(F->x_1114)).e = f_actual_params_94();
} else if (((rt_r_ichk(F->kind_1119) >= ((rt_int)3LL)) && (rt_r_ichk(F->kind_1119) <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1120 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
}
if (((rt_r_ichk(F->kind_1119) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1120 = f_p_subtype_92();
}
}
while ((F->names_1118 != NULL)) {
F->p_1121 = NULL;
F->p_1121 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P826)rt_nil_check(F->names_1118)).line));
(*(P826)rt_nil_check(F->p_1121)).name = (*(P826)rt_nil_check(F->names_1118)).name;
(*(P826)rt_nil_check(F->p_1121)).ival = rt_r_ichk(F->kind_1119);
(*(P826)rt_nil_check(F->p_1121)).a = F->st_1120;
f_append_65(&F->head_1115, &F->tail_1116, F->p_1121);
F->names_1118 = (*(P826)rt_nil_check(F->names_1118)).next;
}
F->more_1117 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1117 = 1;
while (rt_r_echk(F->more_1117)) {
F->nm_1122 = NULL;
F->nm_1122 = f_definable_name_131();
F->st_1123 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1123 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1123 = f_p_subtype_92();
}
F->more_1117 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P826)rt_nil_check(F->x_1114)).a = F->head_1115;
(*(P826)rt_nil_check(F->x_1114)).b = f_declaration_119();
(*(P826)rt_nil_check(F->x_1114)).name = (*(P826)rt_nil_check((*(P826)rt_nil_check(F->x_1114)).b)).name;
F->result_ = F->x_1114;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1124 = NULL;
F->x_1124 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1125 = RT_R_EUNDEF;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1124)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1124)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1124)).a = f_formal_params_126();
}
F->dummy_1125 = f_imports_list_128(F->x_1124);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P826)rt_nil_check(F->x_1124)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P819)rt_nil_check(f_expect_id_89()))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1124)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1124)).name))->all)); b_; }));
}
F->result_ = F->x_1124;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1126 = NULL;
F->x_1126 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P826)rt_nil_check(F->x_1126)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1127 = NULL;
F->tail_1128 = NULL;
F->more_1129 = RT_R_EUNDEF;
F->more_1129 = 1;
while (rt_r_echk(F->more_1129)) {
F->n_1130 = NULL;
F->n_1130 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P826)rt_nil_check(F->n_1130)).ival = ((rt_int)1LL);
}
(*(P826)rt_nil_check(F->n_1130)).name = f_definable_name_131();
f_append_65(&F->head_1127, &F->tail_1128, F->n_1130);
F->more_1129 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->x_1126)).a = F->head_1127;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P826)rt_nil_check(F->x_1126)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P826)rt_nil_check(F->x_1126)).flag = rt_add(rt_r_ichk((*(P826)rt_nil_check(F->x_1126)).flag), ((rt_int)2LL));
}
(*(P826)rt_nil_check(F->x_1126)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1126)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1126)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1131 = NULL;
F->tail_1132 = NULL;
F->more_1133 = RT_R_EUNDEF;
F->more_1133 = 1;
while (rt_r_echk(F->more_1133)) {
F->n_1134 = NULL;
F->n_1134 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1135 = NULL;
F->tgt_1135 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P826)rt_nil_check(F->n_1134)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P826)rt_nil_check(F->tgt_1135)).name = f_definable_name_131();
(*(P826)rt_nil_check(F->n_1134)).a = F->tgt_1135;
f_append_65(&F->head_1131, &F->tail_1132, F->n_1134);
F->more_1133 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P826)rt_nil_check(F->x_1126)).c = F->head_1131;
}
F->result_ = F->x_1126;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_139(rstr *w_138) {
  struct f_is_compound_kw_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_138 = w_138;
F->result_ = (((((((rt_str_eq((*F->w_138), rt_str("IF", 2)) || rt_str_eq((*F->w_138), rt_str("CASE", 4))) || rt_str_eq((*F->w_138), rt_str("FOR", 3))) || rt_str_eq((*F->w_138), rt_str("WHILE", 5))) || rt_str_eq((*F->w_138), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_138), rt_str("GUARD", 5))) || rt_str_eq((*F->w_138), rt_str("WAIT", 4))) || rt_str_eq((*F->w_138), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1136 = NULL;
F->ltail_1137 = NULL;
F->match_1138 = NULL;
F->s_1139 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P819)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1136, &F->ltail_1137, f_name_node_90());
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P819)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1138 = f_expect_id_89();
}
F->s_1139 = f_unlabeled_statement_141();
if ((F->match_1138 != NULL)) {
if ((((((((rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P819)rt_nil_check(f_expect_id_89()))->all), (((P819)rt_nil_check(F->match_1138))->all)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_1139)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P819)rt_nil_check(F->match_1138))->all)); b_; }));
}
(*(P826)rt_nil_check(F->s_1139)).tag = F->match_1138;
}
(*(P826)rt_nil_check(F->s_1139)).labels = F->labels_1136;
F->result_ = F->s_1139;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1140 = RT_R_IUNDEF;
F->line_1140 = f_cur_line_68();
F->x_1141 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_146();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_147();
goto ret_;
} else if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_148();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).name = f_expect_id_89();
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P826)rt_nil_check(F->x_1141)).a = f_expr_103();
}
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).name = f_expect_id_89();
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).name = f_expect_id_89();
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1140));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1141)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1141)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P826)rt_nil_check(F->x_1141)).a = f_postfix_113();
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1142 = NULL;
F->tail_1143 = NULL;
F->x_1141 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1144 = NULL;
F->itail_1145 = NULL;
F->more_1146 = RT_R_EUNDEF;
F->more_1146 = 1;
while (rt_r_echk(F->more_1146)) {
f_append_65(&F->invs_1144, &F->itail_1145, f_postfix_113());
F->more_1146 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1142, &F->tail_1143, f_arm_145(F->invs_1144, f_body_117(), rt_r_ichk(F->line_1140)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P826)rt_nil_check(F->x_1141)).a = F->head_1142;
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P826)rt_nil_check(F->x_1141)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1141;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1140));
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1141)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P819)rt_nil_check((*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P826)rt_nil_check(F->x_1141)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P826)rt_nil_check(F->x_1141)).c = f_expr_103();
}
F->result_ = F->x_1141;
goto ret_;
}
{
F->target_1147 = NULL;
F->target_1147 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1141 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1140));
(*(P826)rt_nil_check(F->x_1141)).a = F->target_1147;
(*(P826)rt_nil_check(F->x_1141)).b = f_expr_103();
} else {
F->x_1141 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1140));
(*(P826)rt_nil_check(F->x_1141)).a = F->target_1147;
}
}
F->result_ = F->x_1141;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_arm_145(P826 cond_142, P826 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1148 = NULL;
F->x_1148 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P826)rt_nil_check(F->x_1148)).a = F->cond_142;
(*(P826)rt_nil_check(F->x_1148)).b = F->b_143;
F->result_ = F->x_1148;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1149 = NULL;
F->x_1149 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1150 = NULL;
F->tail_1151 = NULL;
F->cond_1152 = NULL;
F->go_1153 = RT_R_EUNDEF;
F->go_1153 = 1;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
F->cond_1152 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1150, &F->tail_1151, f_arm_145(F->cond_1152, f_body_117(), rt_r_ichk((*(P826)rt_nil_check(F->x_1149)).line)));
while (rt_r_echk(F->go_1153)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1152 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1150, &F->tail_1151, f_arm_145(F->cond_1152, f_body_117(), rt_r_ichk((*(P826)rt_nil_check(F->x_1149)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P826)rt_nil_check(F->x_1149)).flag = ((rt_int)1LL);
(*(P826)rt_nil_check(F->x_1149)).b = f_body_117();
} else {
F->go_1153 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P826)rt_nil_check(F->x_1149)).a = F->head_1150;
F->result_ = F->x_1149;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1154 = NULL;
F->x_1154 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1155 = NULL;
F->tail_1156 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1154)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1157 = NULL;
F->ltail_1158 = NULL;
F->more_1159 = RT_R_EUNDEF;
F->more_1159 = 1;
while (rt_r_echk(F->more_1159)) {
F->l_1160 = NULL;
F->l_1160 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P826)rt_nil_check(F->l_1160)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P826)rt_nil_check(F->l_1160)).b = f_expr_103();
}
f_append_65(&F->labs_1157, &F->ltail_1158, F->l_1160);
F->more_1159 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1155, &F->tail_1156, f_arm_145(F->labs_1157, f_body_117(), rt_r_ichk((*(P826)rt_nil_check(F->x_1154)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P826)rt_nil_check(F->x_1154)).flag = ((rt_int)1LL);
(*(P826)rt_nil_check(F->x_1154)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P826)rt_nil_check(F->x_1154)).b = F->head_1155;
F->result_ = F->x_1154;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1161 = NULL;
F->x_1161 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P826)rt_nil_check(F->x_1161)).flag = ((rt_int)1LL);
(*(P826)rt_nil_check(F->x_1161)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P826)rt_nil_check(F->x_1161)).ival = ((rt_int)1LL);
}
(*(P826)rt_nil_check(F->x_1161)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P826)rt_nil_check(F->x_1161)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P826)rt_nil_check(F->x_1161)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1161;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1162 = NULL;
F->x_1162 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1163 = NULL;
F->tail_1164 = NULL;
g_tpos_859 = rt_add(rt_r_ichk(g_tpos_859), ((rt_int)1LL));
(*(P826)rt_nil_check(F->x_1162)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1165 = NULL;
F->h_1165 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P826)rt_nil_check(F->h_1165)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P826)rt_nil_check(F->h_1165)).b = f_body_117();
f_append_65(&F->head_1163, &F->tail_1164, F->h_1165);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P826)rt_nil_check(F->x_1162)).flag = ((rt_int)1LL);
(*(P826)rt_nil_check(F->x_1162)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P826)rt_nil_check(F->x_1162)).b = F->head_1163;
F->result_ = F->x_1162;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1166 = NULL;
F->tail_1167 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1168 = NULL;
F->pr_1168 = (*(P821)rt_nil_check(({ A825 b_ = (((P823)rt_nil_check(g_toks_857))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_859), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1169 = NULL;
F->u_1169 = f_capsule_decl_133();
(*(P826)rt_nil_check(F->u_1169)).prags = F->pr_1168;
f_append_65(&F->head_1166, &F->tail_1167, F->u_1169);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1166;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_152(rstr *s_151) {
  struct f_hash_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_151 = s_151;
F->h_1170 = RT_R_IUNDEF;
F->h_1170 = ((rt_int)0LL);
{ rt_int lo1172 = ((rt_int)1LL), hi1173 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1174 = lo1172; it1174 <= hi1173; it1174++) {
F->i_1171 = it1174;
F->h_1170 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1170), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_151), F->i_1171))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1170);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1175 = NULL;
F->y_1175 = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_863 != NULL)) {
while ((F->y_1175 != NULL)) {
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1175)).depth) >= rt_r_ichk(g_gdepth_895)) && rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1175)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1175;
goto ret_;
}
F->y_1175 = (*(P836)rt_nil_check(F->y_1175)).chain;
}
F->y_1175 = ({ A842 b_ = (((P840)rt_nil_check(g_genv_863))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1175 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1175)).name))->all), (*F->name_153))) {
F->result_ = F->y_1175;
goto ret_;
}
F->y_1175 = (*(P836)rt_nil_check(F->y_1175)).chain;
}
F->y_1175 = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1175 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1175)).name))->all), (*F->name_153))) {
F->result_ = F->y_1175;
goto ret_;
}
F->y_1175 = (*(P836)rt_nil_check(F->y_1175)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_lookup_decl_156(P826 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1176 = NULL;
F->y_1176 = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(f_hash_152(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1176 != NULL)) {
if (((*(P836)rt_nil_check(F->y_1176)).decl == F->d_155)) {
F->result_ = F->y_1176;
goto ret_;
}
F->y_1176 = (*(P836)rt_nil_check(F->y_1176)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P836 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1177 = RT_R_IUNDEF;
F->h_1177 = f_hash_152(&(((P819)rt_nil_check((*(P836)rt_nil_check(F->y_157)).name))->all));
F->z_1178 = NULL;
F->z_1178 = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(rt_r_ichk(F->h_1177), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1178 != NULL)) {
if ((((rt_r_ichk((*(P836)rt_nil_check(F->z_1178)).depth) == rt_r_ichk(g_depth_865)) && rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->z_1178)).name))->all), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1178)) && (rt_r_ichk((*(P836)rt_nil_check(F->z_1178)).kind) == rt_r_ichk((*(P836)rt_nil_check(F->y_157)).kind))) && (!(f_same_signature_167((*(P836)rt_nil_check(F->y_157)).params, (*(P836)rt_nil_check(F->z_1178)).params) && f_same_tt_164((*(P836)rt_nil_check(F->y_157)).decl, (*(P836)rt_nil_check(F->z_1178)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1178 = (*(P836)rt_nil_check(F->z_1178)).chain;
}
(*(P836)rt_nil_check(F->y_157)).depth = rt_r_ichk(g_depth_865);
(*(P836)rt_nil_check(F->y_157)).chain = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(rt_r_ichk(F->h_1177), b_.lo, b_.hi) - b_.lo)]; });
(((P840)rt_nil_check(g_table_862))->all).p[(rt_index(rt_r_ichk(F->h_1177), (((P840)rt_nil_check(g_table_862))->all).lo, (((P840)rt_nil_check(g_table_862))->all).hi) - (((P840)rt_nil_check(g_table_862))->all).lo)] = F->y_157;
(*(P836)rt_nil_check(F->y_157)).stack = g_scope_stack_866;
g_scope_stack_866 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P836 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = ((((rt_r_ichk((*(P836)rt_nil_check(F->y_160)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_160)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_160)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_160)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P826 a_162, P826 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1179 = NULL;
F->y_1180 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1179 = (*(P826)rt_nil_check(F->a_162)).e;
F->y_1180 = (*(P826)rt_nil_check(F->b_163)).e;
while (((F->x_1179 != NULL) && (F->y_1180 != NULL))) {
if ((!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1179)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->y_1180)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1179 = (*(P826)rt_nil_check(F->x_1179)).next;
F->y_1180 = (*(P826)rt_nil_check(F->y_1180)).next;
}
F->result_ = ((F->x_1179 == NULL) && (F->y_1180 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P838 a_165, P838 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1181 = NULL;
F->x_1181 = F->a_165;
F->y_1182 = NULL;
F->y_1182 = F->b_166;
while (((F->x_1181 != NULL) && (F->y_1182 != NULL))) {
if ((!f_same_212((*(P838)rt_nil_check(F->x_1181)).t, (*(P838)rt_nil_check(F->y_1182)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1181 = (*(P838)rt_nil_check(F->x_1181)).next;
F->y_1182 = (*(P838)rt_nil_check(F->y_1182)).next;
}
F->result_ = ((F->x_1181 == NULL) && (F->y_1182 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_865 = rt_add(rt_r_ichk(g_depth_865), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_866 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(g_scope_stack_866)).depth) == rt_r_ichk(g_depth_865)))) {
(((P840)rt_nil_check(g_table_862))->all).p[(rt_index(f_hash_152(&(((P819)rt_nil_check((*(P836)rt_nil_check(g_scope_stack_866)).name))->all)), (((P840)rt_nil_check(g_table_862))->all).lo, (((P840)rt_nil_check(g_table_862))->all).hi) - (((P840)rt_nil_check(g_table_862))->all).lo)] = (*(P836)rt_nil_check(g_scope_stack_866)).chain;
g_scope_stack_866 = (*(P836)rt_nil_check(g_scope_stack_866)).stack;
}
g_depth_865 = rt_sub(rt_r_ichk(g_depth_865), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P836 f_new_sym_172(rt_int kind_170, P819 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1183 = NULL;
{ R837 *cell1184 = rt_alloc(sizeof(R837));
(*cell1184).name = NULL;
(*cell1184).t = NULL;
(*cell1184).c = NULL;
(*cell1184).access = NULL;
(*cell1184).cname = NULL;
(*cell1184).st = NULL;
(*cell1184).decl = NULL;
(*cell1184).params = NULL;
(*cell1184).result = NULL;
(*cell1184).members = NULL;
(*cell1184).mnext = NULL;
(*cell1184).binds = NULL;
(*cell1184).insts = NULL;
(*cell1184).env = NULL;
(*cell1184).chain = NULL;
(*cell1184).stack = NULL;
(*cell1184).owner = NULL;
(*cell1184).gctx = NULL;
(*cell1184).mv = NULL;
(*cell1184).reqs = NULL;
(*cell1184).home = NULL;
(*cell1184).capn = NULL;
(*cell1184).tbinds = NULL;
F->y_1183 = cell1184;
}
(*(P836)rt_nil_check(F->y_1183)).kind = F->kind_170;
(*(P836)rt_nil_check(F->y_1183)).name = F->name_171;
F->result_ = F->y_1183;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1185 = NULL;
{ R833 *cell1186 = rt_alloc(sizeof(R833));
(*cell1186).name = NULL;
(*cell1186).lits = NULL;
(*cell1186).elem = NULL;
(*cell1186).idx = NULL;
(*cell1186).idx2 = NULL;
(*cell1186).elemcons = NULL;
(*cell1186).elemst = NULL;
(*cell1186).under = NULL;
(*cell1186).tparams = NULL;
(*cell1186).ocap = NULL;
(*cell1186).fields = NULL;
(*cell1186).target = NULL;
(*cell1186).decl = NULL;
(*cell1186).cname = NULL;
(*cell1186).initp = NULL;
(*cell1186).finalp = NULL;
(*cell1186).tpsyms = NULL;
(*cell1186).gen = NULL;
(*cell1186).gbinds = NULL;
(*cell1186).next = NULL;
(*cell1186).idxs = NULL;
F->t_1185 = cell1186;
}
(*(P832)rt_nil_check(F->t_1185)).kind = F->kind_173;
F->result_ = F->t_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P828 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1187 = NULL;
{ R829 *cell1188 = rt_alloc(sizeof(R829));
(*cell1188).lo = NULL;
(*cell1188).hi = NULL;
(*cell1188).lo2 = NULL;
(*cell1188).hi2 = NULL;
(*cell1188).slen = NULL;
(*cell1188).args = NULL;
(*cell1188).prec = NULL;
(*cell1188).bnds = NULL;
F->c_1187 = cell1188;
}
F->result_ = F->c_1187;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P832 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && (((rt_r_ichk((*(P832)rt_nil_check(F->t_176)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_176)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_176)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P832 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_178)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P828 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1189 = NULL;
F->p_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P828)rt_nil_check(F->c_180)).dyn)) || (rt_r_ichk((*(P828)rt_nil_check(F->c_180)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1191 = ((rt_int)1LL), hi1192 = rt_sub(rt_r_ichk(g_cur_level_879), rt_r_ichk((*(P828)rt_nil_check(F->c_180)).lvl));
for (rt_int it1193 = lo1191; it1193 <= hi1192; it1193++) {
F->i_1190 = it1193;
F->p_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->p_1189))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->p_1189))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P828 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P828 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P832 t_187, P828 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P828)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_187)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P832 t_190, P828 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P828)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_190)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_190)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P832)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194) {
  struct f_raw_storage_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_193 = name_193;
F->ct_194 = ct_194;
if ((!rt_r_echk(g_in_func_878))) {
F->g_1194 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1194), rt_str(";", 1)); b_; }));
g_st_field_884 = f_mk_3(&F->g_1194);
F->result_ = F->g_1194;
goto ret_;
}
{
F->f_1195 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1195), rt_str(";", 1)); b_; }));
g_st_field_884 = f_mk_3(&F->f_1195);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1195);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P828 f_copy_cons_197(P828 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1196 = NULL;
{ R829 *cell1197 = rt_alloc(sizeof(R829));
(*cell1197).lo = NULL;
(*cell1197).hi = NULL;
(*cell1197).lo2 = NULL;
(*cell1197).hi2 = NULL;
(*cell1197).slen = NULL;
(*cell1197).args = NULL;
(*cell1197).prec = NULL;
(*cell1197).bnds = NULL;
F->r_1196 = cell1197;
}
(*(P828)rt_nil_check(F->r_1196)).lo = (*(P828)rt_nil_check(F->c_196)).lo;
(*(P828)rt_nil_check(F->r_1196)).hi = (*(P828)rt_nil_check(F->c_196)).hi;
(*(P828)rt_nil_check(F->r_1196)).lo2 = (*(P828)rt_nil_check(F->c_196)).lo2;
(*(P828)rt_nil_check(F->r_1196)).hi2 = (*(P828)rt_nil_check(F->c_196)).hi2;
(*(P828)rt_nil_check(F->r_1196)).slen = (*(P828)rt_nil_check(F->c_196)).slen;
(*(P828)rt_nil_check(F->r_1196)).mlo = rt_r_ichk((*(P828)rt_nil_check(F->c_196)).mlo);
(*(P828)rt_nil_check(F->r_1196)).mhi = rt_r_ichk((*(P828)rt_nil_check(F->c_196)).mhi);
(*(P828)rt_nil_check(F->r_1196)).hasm = rt_r_echk((*(P828)rt_nil_check(F->c_196)).hasm);
(*(P828)rt_nil_check(F->r_1196)).args = (*(P828)rt_nil_check(F->c_196)).args;
(*(P828)rt_nil_check(F->r_1196)).dyn = rt_r_echk((*(P828)rt_nil_check(F->c_196)).dyn);
(*(P828)rt_nil_check(F->r_1196)).lvl = rt_r_ichk((*(P828)rt_nil_check(F->c_196)).lvl);
(*(P828)rt_nil_check(F->r_1196)).prec = (*(P828)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1196;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P828 f_freeze_200(P828 c_198, P832 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1198 = NULL;
F->saved_field_1199 = NULL;
F->saved_field_1199 = g_st_field_884;
if ((((((F->c_198 == NULL) || ((*(P828)rt_nil_check(F->c_198)).lo == NULL)) || rt_r_echk((*(P828)rt_nil_check(F->c_198)).hasm)) || rt_r_echk((*(P828)rt_nil_check(F->c_198)).dyn)) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1198 = f_copy_cons_197(F->c_198);
{
F->ct_1200 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1201 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1200));
F->lf_1202 = rt_str_copy((((P819)rt_nil_check(g_st_field_884))->all));
F->ha_1203 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1200));
F->hf_1204 = rt_str_copy((((P819)rt_nil_check(g_st_field_884))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1201, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1203), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_878)) {
(*(P828)rt_nil_check(F->r_1198)).lo = f_mk_3(&F->lf_1202);
(*(P828)rt_nil_check(F->r_1198)).hi = f_mk_3(&F->hf_1204);
(*(P828)rt_nil_check(F->r_1198)).dyn = 1;
(*(P828)rt_nil_check(F->r_1198)).lvl = rt_r_ichk(g_cur_level_879);
} else {
(*(P828)rt_nil_check(F->r_1198)).lo = f_mk_3(&F->la_1201);
(*(P828)rt_nil_check(F->r_1198)).hi = f_mk_3(&F->ha_1203);
(*(P828)rt_nil_check(F->r_1198)).dyn = 0;
}
}
g_st_field_884 = F->saved_field_1199;
F->result_ = F->r_1198;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P832 t_201, P828 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_201)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P828)rt_nil_check(F->c_202)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P828)rt_nil_check(F->c_202)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P828)rt_nil_check(F->c_202)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P828)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_201)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_203)), rt_str(", ", 2)), f_clo_184(F->c_202)), rt_str(", ", 2)), f_chi_186(F->c_202)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_clo_184(F->c_202)), rt_str(", ", 2)), f_chi_186(F->c_202)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_207(P826 a_205, P826 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1205 = NULL;
F->x_1205 = F->a_205;
F->y_1206 = NULL;
F->y_1206 = F->b_206;
while (((F->x_1205 != NULL) && (F->y_1206 != NULL))) {
if ((!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->x_1205)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->y_1206)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1205 = (*(P826)rt_nil_check(F->x_1205)).next;
F->y_1206 = (*(P826)rt_nil_check(F->y_1206)).next;
}
F->result_ = ((F->x_1205 == NULL) && (F->y_1206 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_str_elem_209(P832 t_208) {
  struct f_str_elem_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if (((*(P832)rt_nil_check(F->t_208)).elem == NULL)) {
F->result_ = g_ty_ascii_909;
goto ret_;
}
F->result_ = (*(P832)rt_nil_check(F->t_208)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_212(P832 a_210, P832 b_211) {
  struct f_same_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
if ((F->a_210 == F->b_211)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_210 == NULL) || (F->b_211 == NULL)) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) != rt_r_ichk((*(P832)rt_nil_check(F->b_211)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_212(f_str_elem_209(F->a_210), f_str_elem_209(F->b_211));
goto ret_;
}
if ((((((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P832)rt_nil_check(F->a_210)).lits, (*(P832)rt_nil_check(F->b_211)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)6LL)))) {
F->x_1207 = NULL;
F->x_1207 = (*(P832)rt_nil_check(F->a_210)).idxs;
F->y_1208 = NULL;
F->y_1208 = (*(P832)rt_nil_check(F->b_211)).idxs;
while (((F->x_1207 != NULL) && (F->y_1208 != NULL))) {
if ((!f_same_212((*(P847)rt_nil_check(F->x_1207)).t, (*(P847)rt_nil_check(F->y_1208)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1207 = (*(P847)rt_nil_check(F->x_1207)).next;
F->y_1208 = (*(P847)rt_nil_check(F->y_1208)).next;
}
F->result_ = (((F->x_1207 == NULL) && (F->y_1208 == NULL)) && f_same_212((*(P832)rt_nil_check(F->a_210)).elem, (*(P832)rt_nil_check(F->b_211)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_212((*(P832)rt_nil_check(F->a_210)).elem, (*(P832)rt_nil_check(F->b_211)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->a_210)).kind) == (((rt_int)17LL))))) {
F->f_1209 = NULL;
F->f_1209 = (*(P832)rt_nil_check(F->a_210)).fields;
F->g_1210 = NULL;
F->g_1210 = (*(P832)rt_nil_check(F->b_211)).fields;
while (((F->f_1209 != NULL) && (F->g_1210 != NULL))) {
if (((!rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1209)).name))->all), (((P819)rt_nil_check((*(P834)rt_nil_check(F->g_1210)).name))->all))) || (!f_same_212((*(P834)rt_nil_check(F->f_1209)).t, (*(P834)rt_nil_check(F->g_1210)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1209 = (*(P834)rt_nil_check(F->f_1209)).next;
F->g_1210 = (*(P834)rt_nil_check(F->g_1210)).next;
}
F->result_ = ((F->f_1209 == NULL) && (F->g_1210 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_base_of_214(P832 t_213) {
  struct f_base_of_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if ((((F->t_213 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->t_213)).kind) == (((rt_int)15LL)))) && ((*(P832)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_base_of_214((*(P832)rt_nil_check(F->t_213)).under);
goto ret_;
}
F->result_ = F->t_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P828 f_base_cons_217(P832 t_215, P828 c_216) {
  struct f_base_cons_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
F->c_216 = c_216;
if (((((F->t_215 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->t_215)).kind) == (((rt_int)15LL)))) && ((*(P832)rt_nil_check(F->t_215)).tparams == NULL)) && ((*(P832)rt_nil_check(F->t_215)).elemcons != NULL))) {
F->result_ = f_base_cons_217((*(P832)rt_nil_check(F->t_215)).under, (*(P832)rt_nil_check(F->t_215)).elemcons);
goto ret_;
}
F->result_ = F->c_216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_219(P832 t_218) {
  struct f_kind_name_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
{ rt_int sel1211 = rt_r_ichk((*(P832)rt_nil_check(F->t_218)).kind);
if (0 || (sel1211 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1211 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_218)).name))->all));
goto ret_;
} else if (0 || (sel1211 == (((rt_int)11LL)))) {
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

static void f_check_type_223(P832 got_220, P832 want_221, rt_int line_222) {
  struct f_check_type_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_220 = got_220;
F->want_221 = want_221;
F->line_222 = line_222;
if ((F->want_221 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->got_220)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->want_221)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_212(F->got_220, F->want_221))) {
f_fail_23(F->line_222, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_219(F->got_220)), rt_str(" where ", 7)), f_kind_name_219(F->want_221)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_225(P832 t_224) {
  struct f_ctype_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
{ rt_int sel1212 = rt_r_ichk((*(P832)rt_nil_check(F->t_224)).kind);
if (0 || (sel1212 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)2LL))) || (sel1212 == (((rt_int)4LL))) || (sel1212 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1212 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P832)rt_nil_check(F->t_224)).cname == NULL)) {
f_declare_ctype_231(F->t_224);
} else if (((((rt_r_ichk((*(P832)rt_nil_check(F->t_224)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_224)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P832)rt_nil_check(F->t_224)).forward)) && (!rt_r_echk((*(P832)rt_nil_check(F->t_224)).defined)))) {
(*(P832)rt_nil_check(F->t_224)).defined = 1;
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_224)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_224)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_224)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_227(P832 t_226) {
  struct f_struct_body_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_226)).kind) == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_229(F->t_226)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_229(F->t_226)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_229(P832 t_228) {
  struct f_field_decls_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->f_1213 = NULL;
F->f_1213 = (*(P832)rt_nil_check(F->t_228)).fields;
F->s_1214 = NULL;
F->s_1214 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1213 != NULL)) {
F->s_1214 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->s_1214))->all), f_ctype_225((*(P834)rt_nil_check(F->f_1213)).t)), rt_str(" ", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1213)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1213 = (*(P834)rt_nil_check(F->f_1213)).next;
}
F->result_ = (((P819)rt_nil_check(F->s_1214))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_231(P832 t_230) {
  struct f_declare_ctype_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_230 = t_230;
F->u_1215 = NULL;
F->u_1215 = g_all_types_867;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P832)rt_nil_check(F->t_230)).target == NULL))) {
f_finish_ptr_414(F->t_230);
if (((*(P832)rt_nil_check(F->t_230)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) != (((rt_int)8LL)))) {
while ((F->u_1215 != NULL)) {
if (((rt_r_ichk((*(P832)rt_nil_check(F->u_1215)).kind) == rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind)) && f_same_212(F->u_1215, F->t_230))) {
(*(P832)rt_nil_check(F->t_230)).cname = (*(P832)rt_nil_check(F->u_1215)).cname;
goto ret_;
}
F->u_1215 = (*(P832)rt_nil_check(F->u_1215)).next;
}
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_230)).tparams == NULL))) {
(*(P832)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225((*(P832)rt_nil_check(F->t_230)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
(*(P832)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
(*(P832)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)17LL))))) {
(*(P832)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P832)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P832)rt_nil_check(F->t_230)).next = g_all_types_867;
g_all_types_867 = F->t_230;
if ((((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P832)rt_nil_check(F->t_230)).decl != NULL)) && ((*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_230)).decl)).b != NULL))) {
F->p_1216 = NULL;
F->p_1216 = (*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_230)).decl)).b;
F->fs_1217 = NULL;
F->fs_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1218 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1216 != NULL)) {
F->pc_1219 = NULL;
F->fs_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->fs_1217))->all), rt_str(" ", 1)), f_ctype_225(f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1216)).a, &F->pc_1219))), rt_str(" p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1216)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1216 = (*(P826)rt_nil_check(F->p_1216)).next;
}
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1218), rt_str(" *", 2)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1218), rt_str(" {", 2)), (((P819)rt_nil_check(F->fs_1217))->all)), rt_str(" ", 1)), f_ctype_225((*(P832)rt_nil_check(F->t_230)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL)))) {
F->target_1220 = NULL;
F->target_1220 = (*(P832)rt_nil_check(F->t_230)).target;
if (((rt_r_ichk((*(P832)rt_nil_check(F->target_1220)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->target_1220)).kind) == (((rt_int)17LL))))) {
if (((*(P832)rt_nil_check(F->target_1220)).cname == NULL)) {
(*(P832)rt_nil_check(F->target_1220)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P832)rt_nil_check(F->target_1220)).next = g_all_types_867;
g_all_types_867 = F->target_1220;
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P819)rt_nil_check((*(P832)rt_nil_check(F->target_1220)).cname))->all)), rt_str(" ", 1)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->target_1220)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P832)rt_nil_check(F->target_1220)).forward = 1;
}
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P819)rt_nil_check((*(P832)rt_nil_check(F->target_1220)).cname))->all)), rt_str(" *", 2)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_225(F->target_1220)), rt_str(" *", 2)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_225((*(P832)rt_nil_check(F->t_230)).elem)), rt_str(" *p;", 4)), f_more_dims_237(F->t_230)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
F->p_1221 = NULL;
F->p_1221 = (*(P832)rt_nil_check(F->t_230)).tparams;
F->fs_1222 = NULL;
F->fs_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1221 != NULL)) {
F->fs_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->fs_1222))->all), f_ctype_225(f_tparam_type_321(F->t_230, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1221)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1221)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1221 = (*(P826)rt_nil_check(F->p_1221)).next;
}
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" {", 2)), (((P819)rt_nil_check(F->fs_1222))->all)), f_ctype_225((*(P832)rt_nil_check(F->t_230)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P832)rt_nil_check(F->t_230)).defined = 1;
f_put_27(g_out_types_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_230)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_233(rt_int k_232) {
  struct f_dim_lo_233fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_232 = k_232;
if ((F->k_232 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_232));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_235(rt_int k_234) {
  struct f_dim_hi_235fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_234 = k_234;
if ((F->k_234 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_234));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_237(P832 t_236) {
  struct f_more_dims_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->r_1223 = NULL;
F->r_1223 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1225 = ((rt_int)3LL), hi1226 = rt_r_ichk((*(P832)rt_nil_check(F->t_236)).ndim);
for (rt_int it1227 = lo1225; it1227 <= hi1226; it1227++) {
F->k_1224 = it1227;
F->r_1223 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1223))->all), rt_str(" rt_int ", 8)), f_dim_lo_233(F->k_1224)), rt_str(", ", 2)), f_dim_hi_235(F->k_1224)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P819)rt_nil_check(F->r_1223))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_240(P832 t_238, rstr *base_239) {
  struct f_acnt_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_238 = t_238;
F->base_239 = base_239;
F->r_1228 = NULL;
F->r_1228 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_239)), rt_str(")", 1)); b_; }));
{ rt_int lo1230 = ((rt_int)3LL), hi1231 = rt_r_ichk((*(P832)rt_nil_check(F->t_238)).ndim);
for (rt_int it1232 = lo1230; it1232 <= hi1231; it1232++) {
F->k_1229 = it1232;
F->r_1228 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1228))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_239)), rt_str(".", 1)), f_dim_lo_233(F->k_1229)), rt_str(", ", 2)), (*F->base_239)), rt_str(".", 1)), f_dim_hi_235(F->k_1229)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->r_1228))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P819 f_cons_lo_243(P828 c_241, rt_int k_242) {
  struct f_cons_lo_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1233 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P828)rt_nil_check(F->c_241)).lo;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P828)rt_nil_check(F->c_241)).lo2;
goto ret_;
}
F->l_1233 = (*(P828)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1235 = ((rt_int)1LL), hi1236 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)6LL));
for (rt_int it1237 = lo1235; it1237 <= hi1236; it1237++) {
F->i_1234 = it1237;
if ((F->l_1233 != NULL)) {
F->l_1233 = (*(P830)rt_nil_check(F->l_1233)).next;
}
}
}
if ((F->l_1233 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P830)rt_nil_check(F->l_1233)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P819 f_cons_hi_246(P828 c_244, rt_int k_245) {
  struct f_cons_hi_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_244 = c_244;
F->k_245 = k_245;
F->l_1238 = NULL;
if ((F->k_245 == ((rt_int)1LL))) {
F->result_ = (*(P828)rt_nil_check(F->c_244)).hi;
goto ret_;
} else if ((F->k_245 == ((rt_int)2LL))) {
F->result_ = (*(P828)rt_nil_check(F->c_244)).hi2;
goto ret_;
}
F->l_1238 = (*(P828)rt_nil_check(F->c_244)).bnds;
{ rt_int lo1240 = ((rt_int)1LL), hi1241 = rt_sub(rt_add(F->k_245, F->k_245), ((rt_int)5LL));
for (rt_int it1242 = lo1240; it1242 <= hi1241; it1242++) {
F->i_1239 = it1242;
if ((F->l_1238 != NULL)) {
F->l_1238 = (*(P830)rt_nil_check(F->l_1238)).next;
}
}
}
if ((F->l_1238 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P830)rt_nil_check(F->l_1238)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_idx_type_249(P832 t_247, rt_int k_248) {
  struct f_idx_type_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->k_248 = k_248;
F->l_1243 = NULL;
F->l_1243 = (*(P832)rt_nil_check(F->t_247)).idxs;
{ rt_int lo1245 = ((rt_int)2LL), hi1246 = F->k_248;
for (rt_int it1247 = lo1245; it1247 <= hi1246; it1247++) {
F->i_1244 = it1247;
F->l_1243 = (*(P847)rt_nil_check(F->l_1243)).next;
}
}
F->result_ = (*(P847)rt_nil_check(F->l_1243)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_250(void) {
  struct f_init_ascii_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1248 = NULL;
F->tail_1249 = NULL;
F->start_1250 = RT_R_IUNDEF;
F->start_1250 = ((rt_int)1LL);
{ rt_int lo1252 = ((rt_int)1LL), hi1253 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1254 = lo1252; it1254 <= hi1253; it1254++) {
F->i_1251 = it1254;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1251) == 32)) {
F->lit_1255 = NULL;
F->lit_1255 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P826)rt_nil_check(F->lit_1255)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1250), rt_sub(F->i_1251, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1248, &F->tail_1249, F->lit_1255);
F->start_1250 = rt_add(F->i_1251, ((rt_int)1LL));
}
}
}
g_ty_ascii_909 = f_new_typ_174((((rt_int)4LL)));
(*(P832)rt_nil_check(g_ty_ascii_909)).lits = F->head_1248;
(*(P832)rt_nil_check(g_ty_ascii_909)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1256 = NULL;
F->t2_1257 = NULL;
F->l1_1258 = NULL;
F->l1_1258 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1259 = NULL;
F->l2_1259 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1260 = NULL;
F->l3_1260 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P826)rt_nil_check(F->l1_1258)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P826)rt_nil_check(F->l2_1259)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P826)rt_nil_check(F->l3_1260)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1256, &F->t2_1257, F->l1_1258);
f_append_65(&F->h2_1256, &F->t2_1257, F->l2_1259);
f_append_65(&F->h2_1256, &F->t2_1257, F->l3_1260);
g_file_mode_type_917 = f_new_typ_174((((rt_int)4LL)));
(*(P832)rt_nil_check(g_file_mode_type_917)).lits = F->h2_1256;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_253(P826 lits_251, rstr *name_252) {
  struct f_lit_index_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_251 = lits_251;
F->name_252 = name_252;
F->i_1261 = RT_R_IUNDEF;
F->i_1261 = ((rt_int)0LL);
F->l_1262 = NULL;
F->l_1262 = F->lits_251;
while ((F->l_1262 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->l_1262)).name))->all), (*F->name_252))) {
F->result_ = rt_r_ichk(F->i_1261);
goto ret_;
}
F->i_1261 = rt_add(rt_r_ichk(F->i_1261), ((rt_int)1LL));
F->l_1262 = (*(P826)rt_nil_check(F->l_1262)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_resolve_subtype_256(P826 st_254, P828 *c_255) {
  struct f_resolve_subtype_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_254 = st_254;
F->c_255 = c_255;
F->c_255v = *F->c_255;
F->t_1263 = NULL;
F->ok_1264 = RT_R_EUNDEF;
F->dummy_1265 = NULL;
F->c_255v = f_new_cons_175();
{ rt_int sel1266 = rt_r_ichk((*(P826)rt_nil_check(F->st_254)).kind);
if (0 || (sel1266 == (((rt_int)70LL)))) {
if (((*(P826)rt_nil_check(F->st_254)).a != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).a, g_ty_int_906, &F->dummy_1265); b_; }));
(*(P828)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).b, g_ty_int_906, &F->dummy_1265); b_; }));
(*(P828)rt_nil_check(F->c_255v)).mlo = f_manifest_333((*(P826)rt_nil_check(F->st_254)).a, &F->ok_1264);
(*(P828)rt_nil_check(F->c_255v)).hasm = rt_r_echk(F->ok_1264);
(*(P828)rt_nil_check(F->c_255v)).mhi = f_manifest_333((*(P826)rt_nil_check(F->st_254)).b, &F->ok_1264);
(*(P828)rt_nil_check(F->c_255v)).hasm = (rt_r_echk((*(P828)rt_nil_check(F->c_255v)).hasm) && rt_r_echk(F->ok_1264));
}
F->result_ = g_ty_int_906;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)71LL)))) {
if (((*(P826)rt_nil_check(F->st_254)).a != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).a, g_ty_int_906, &F->dummy_1265); b_; }));
}
if (((*(P826)rt_nil_check(F->st_254)).b != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).b, g_ty_float_908, &F->dummy_1265); b_; }));
(*(P828)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).c, g_ty_float_908, &F->dummy_1265); b_; }));
(*(P828)rt_nil_check(F->c_255v)).hasm = (f_float_lit_258((*(P826)rt_nil_check(F->st_254)).b) && f_float_lit_258((*(P826)rt_nil_check(F->st_254)).c));
}
F->result_ = g_ty_float_908;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)72LL)))) {
F->t_1263 = f_new_typ_174((((rt_int)4LL)));
(*(P832)rt_nil_check(F->t_1263)).lits = (*(P826)rt_nil_check(F->st_254)).a;
if (((*(P826)rt_nil_check(F->st_254)).b != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).b, F->t_1263, &F->dummy_1265); b_; }));
(*(P828)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).c, F->t_1263, &F->dummy_1265); b_; }));
if (((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_254)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_254)).c)).kind) == (((rt_int)4LL))))) {
(*(P828)rt_nil_check(F->c_255v)).mlo = f_lit_index_253((*(P832)rt_nil_check(F->t_1263)).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_254)).b)).name))->all));
(*(P828)rt_nil_check(F->c_255v)).mhi = f_lit_index_253((*(P832)rt_nil_check(F->t_1263)).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_254)).c)).name))->all));
(*(P828)rt_nil_check(F->c_255v)).hasm = 1;
}
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)73LL)))) {
F->t_1263 = f_resolve_subtype_256((*(P826)rt_nil_check(F->st_254)).a, &F->c_255v);
if (((*(P832)rt_nil_check(f_base_of_214(F->t_1263))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_212(F->t_1263, g_ty_ascii_909) && ((F->c_255v == NULL) || ((*(P828)rt_nil_check(F->c_255v)).lo == NULL)))) {
F->t_1263 = g_ty_string_910;
} else {
F->et_1267 = NULL;
F->et_1267 = F->t_1263;
F->t_1263 = f_new_typ_174((((rt_int)5LL)));
(*(P832)rt_nil_check(F->t_1263)).elem = F->et_1267;
(*(P832)rt_nil_check(F->t_1263)).elemcons = F->c_255v;
}
F->c_255v = f_new_cons_175();
if (((*(P826)rt_nil_check(F->st_254)).b != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).b, g_ty_int_906, &F->dummy_1265); b_; }));
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)74LL)))) {
{
F->ec_1268 = NULL;
F->et_1269 = NULL;
F->et_1269 = f_resolve_subtype_256((*(P826)rt_nil_check(F->st_254)).b, &F->ec_1268);
F->ix_1270 = NULL;
F->ix_1270 = (*(P826)rt_nil_check(F->st_254)).a;
F->k_1271 = RT_R_IUNDEF;
F->k_1271 = ((rt_int)0LL);
F->tail_1272 = NULL;
F->btail_1273 = NULL;
F->t_1263 = f_new_typ_174((((rt_int)6LL)));
(*(P832)rt_nil_check(F->t_1263)).elem = F->et_1269;
(*(P832)rt_nil_check(F->t_1263)).elemcons = F->ec_1268;
(*(P832)rt_nil_check(F->t_1263)).elemst = (*(P826)rt_nil_check(F->st_254)).b;
(*(P828)rt_nil_check(F->c_255v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P828)rt_nil_check(F->c_255v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1270 != NULL)) {
F->ic_1274 = NULL;
F->it_1275 = NULL;
F->it_1275 = f_resolve_subtype_256(F->ix_1270, &F->ic_1274);
F->lo_1276 = NULL;
F->hi_1277 = NULL;
F->tl_1278 = NULL;
if ((((*(P832)rt_nil_check(f_base_of_214(F->it_1275))).kind != (((rt_int)1LL))) && ((*(P832)rt_nil_check(f_base_of_214(F->it_1275))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1274 = f_base_cons_217(F->it_1275, F->ic_1274);
F->k_1271 = rt_add(rt_r_ichk(F->k_1271), ((rt_int)1LL));
{ R848 *cell1279 = rt_alloc(sizeof(R848));
(*cell1279).t = NULL;
(*cell1279).next = NULL;
F->tl_1278 = cell1279;
}
(*(P847)rt_nil_check(F->tl_1278)).t = F->it_1275;
if ((F->tail_1272 == NULL)) {
(*(P832)rt_nil_check(F->t_1263)).idxs = F->tl_1278;
} else {
(*(P847)rt_nil_check(F->tail_1272)).next = F->tl_1278;
}
F->tail_1272 = F->tl_1278;
if (((F->ic_1274 != NULL) && ((*(P828)rt_nil_check(F->ic_1274)).lo != NULL))) {
F->lo_1276 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1274); b_; }));
F->hi_1277 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1274); b_; }));
} else if (((*(P832)rt_nil_check(f_base_of_214(F->it_1275))).kind == (((rt_int)4LL)))) {
F->lo_1276 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1277 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P832)rt_nil_check(f_base_of_214(F->it_1275))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1271) == ((rt_int)1LL))) {
(*(P832)rt_nil_check(F->t_1263)).idx = F->it_1275;
(*(P828)rt_nil_check(F->c_255v)).lo = F->lo_1276;
(*(P828)rt_nil_check(F->c_255v)).hi = F->hi_1277;
} else if ((rt_r_ichk(F->k_1271) == ((rt_int)2LL))) {
(*(P832)rt_nil_check(F->t_1263)).idx2 = F->it_1275;
(*(P828)rt_nil_check(F->c_255v)).lo2 = F->lo_1276;
(*(P828)rt_nil_check(F->c_255v)).hi2 = F->hi_1277;
} else if ((F->lo_1276 != NULL)) {
F->l1_1280 = NULL;
F->l2_1281 = NULL;
{ R831 *cell1282 = rt_alloc(sizeof(R831));
(*cell1282).s = NULL;
(*cell1282).next = NULL;
F->l1_1280 = cell1282;
}
{ R831 *cell1283 = rt_alloc(sizeof(R831));
(*cell1283).s = NULL;
(*cell1283).next = NULL;
F->l2_1281 = cell1283;
}
(*(P830)rt_nil_check(F->l1_1280)).s = F->lo_1276;
(*(P830)rt_nil_check(F->l2_1281)).s = F->hi_1277;
(*(P830)rt_nil_check(F->l1_1280)).next = F->l2_1281;
if ((F->btail_1273 == NULL)) {
(*(P828)rt_nil_check(F->c_255v)).bnds = F->l1_1280;
} else {
(*(P830)rt_nil_check(F->btail_1273)).next = F->l1_1280;
}
F->btail_1273 = F->l2_1281;
}
F->ix_1270 = (*(P826)rt_nil_check(F->ix_1270)).next;
}
(*(P832)rt_nil_check(F->t_1263)).ndim = rt_r_ichk(F->k_1271);
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)77LL)))) {
F->t_1263 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1284 = NULL;
(*(P832)rt_nil_check(F->t_1263)).elem = f_resolve_subtype_256((*(P826)rt_nil_check(F->st_254)).a, &F->ec_1284);
(*(P832)rt_nil_check(F->t_1263)).elemcons = F->ec_1284;
if ((((*(P832)rt_nil_check(f_base_of_214((*(P832)rt_nil_check(F->t_1263)).elem))).kind != (((rt_int)1LL))) && ((*(P832)rt_nil_check(f_base_of_214((*(P832)rt_nil_check(F->t_1263)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P832)rt_nil_check(f_base_of_214((*(P832)rt_nil_check(F->t_1263)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1284 == NULL) || ((*(P828)rt_nil_check(F->ec_1284)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)75LL))) || (sel1266 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->st_254)).kind) == (((rt_int)76LL)))) {
F->t_1263 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1263 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1285 = NULL;
F->comp_1285 = (*(P826)rt_nil_check(F->st_254)).a;
F->tail_1286 = NULL;
while ((F->comp_1285 != NULL)) {
F->cc_1287 = NULL;
F->f_1288 = NULL;
{ R835 *cell1289 = rt_alloc(sizeof(R835));
(*cell1289).name = NULL;
(*cell1289).t = NULL;
(*cell1289).c = NULL;
(*cell1289).st = NULL;
(*cell1289).next = NULL;
F->f_1288 = cell1289;
}
(*(P834)rt_nil_check(F->f_1288)).name = (*(P826)rt_nil_check(F->comp_1285)).name;
(*(P834)rt_nil_check(F->f_1288)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->comp_1285)).a, &F->cc_1287);
(*(P834)rt_nil_check(F->f_1288)).c = F->cc_1287;
(*(P834)rt_nil_check(F->f_1288)).st = (*(P826)rt_nil_check(F->comp_1285)).a;
if ((F->tail_1286 == NULL)) {
(*(P832)rt_nil_check(F->t_1263)).fields = F->f_1288;
} else {
(*(P834)rt_nil_check(F->tail_1286)).next = F->f_1288;
}
F->tail_1286 = F->f_1288;
F->comp_1285 = (*(P826)rt_nil_check(F->comp_1285)).next;
}
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1263)).kind) == (((rt_int)17LL)))) {
F->lits_1290 = NULL;
F->ltail_1291 = NULL;
F->f_1292 = NULL;
F->f_1292 = (*(P832)rt_nil_check(F->t_1263)).fields;
while ((F->f_1292 != NULL)) {
F->l_1293 = NULL;
F->l_1293 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line));
if (rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1292)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P826)rt_nil_check(F->l_1293)).name = (*(P834)rt_nil_check(F->f_1292)).name;
f_append_65(&F->lits_1290, &F->ltail_1291, F->l_1293);
F->f_1292 = (*(P834)rt_nil_check(F->f_1292)).next;
}
(*(P832)rt_nil_check(F->t_1263)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_1263)).elem)).lits = F->lits_1290;
if (((*(P826)rt_nil_check(F->st_254)).b != NULL)) {
f_tag_constraint_262(F->t_1263, (*(P826)rt_nil_check(F->st_254)).b, F->c_255v);
}
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_912;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P836)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1294 = NULL;
F->gt_1294 = f_copy_node_679((*(P826)rt_nil_check(F->st_254)).a);
(*(P826)rt_nil_check(F->gt_1294)).next = NULL;
F->result_ = f_instantiate_type_598(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1294, (*(P826)rt_nil_check(F->st_254)).b, &F->c_255v, rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line));
goto ret_;
}
{
F->ec_1295 = NULL;
F->t_1263 = f_new_typ_174((((rt_int)12LL)));
(*(P832)rt_nil_check(F->t_1263)).elem = f_resolve_subtype_256((*(P826)rt_nil_check(F->st_254)).a, &F->ec_1295);
(*(P832)rt_nil_check(F->t_1263)).elemcons = F->ec_1295;
if (((*(P826)rt_nil_check(F->st_254)).b != NULL)) {
(*(P828)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->st_254)).b, g_ty_int_906, &F->dummy_1265); b_; }));
}
}
F->result_ = F->t_1263;
goto ret_;
} else if (0 || (sel1266 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_265(F->st_254, &F->c_255v);
goto ret_;
} else if (0 || (sel1266 == (((rt_int)81LL)))) {
{
F->base_1296 = NULL;
F->result_ = f_value_subtype_278((*(P826)rt_nil_check(F->st_254)).a, &F->c_255v, &F->base_1296);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_255) = F->c_255v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_258(P826 e_257) {
  struct f_float_lit_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_257 = e_257;
if (((rt_r_ichk((*(P826)rt_nil_check(F->e_257)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_257)).name))->all), rt_str("-", 1)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_257)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_258((*(P826)rt_nil_check(F->e_257)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P826)rt_nil_check(F->e_257)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->e_257)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_262(P832 t_259, P826 e_260, P828 c_261) {
  struct f_tag_constraint_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_259 = t_259;
F->e_260 = e_260;
F->c_261 = c_261;
F->dummy_1297 = NULL;
(*(P828)rt_nil_check(F->c_261)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->e_260, (*(P832)rt_nil_check(F->t_259)).elem, &F->dummy_1297); b_; }));
f_check_type_223(F->dummy_1297, (*(P832)rt_nil_check(F->t_259)).elem, rt_r_ichk((*(P826)rt_nil_check(F->e_260)).line));
(*(P828)rt_nil_check(F->c_261)).hi = (*(P828)rt_nil_check(F->c_261)).lo;
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_260)).kind) == (((rt_int)4LL)))) {
(*(P828)rt_nil_check(F->c_261)).mlo = f_lit_index_253((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_259)).elem)).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_260)).name))->all));
(*(P828)rt_nil_check(F->c_261)).mhi = rt_r_ichk((*(P828)rt_nil_check(F->c_261)).mlo);
(*(P828)rt_nil_check(F->c_261)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P832 f_named_subtype_265(P826 st_263, P828 *c_264) {
  struct f_named_subtype_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_263 = st_263;
F->c_264 = c_264;
F->c_264v = *F->c_264;
F->t_1298 = NULL;
F->y_1299 = NULL;
F->y_1299 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->st_263)).name))->all));
F->name_1300 = rt_str_copy((((P819)rt_nil_check((*(P826)rt_nil_check(F->st_263)).name))->all));
F->c_264v = f_new_cons_175();
if (((F->y_1299 == NULL) && ((rt_str_eq(F->name_1300, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1300, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1300, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_283(F->st_263, &F->c_264v);
goto ret_;
}
if ((F->y_1299 == NULL)) {
if (rt_str_eq(F->name_1300, rt_str("BOOL", 4))) {
F->t_1298 = g_ty_bool_907;
} else if (rt_str_eq(F->name_1300, rt_str("ASCII", 5))) {
F->t_1298 = g_ty_ascii_909;
} else if (rt_str_eq(F->name_1300, rt_str("DATA_LOCK", 9))) {
F->t_1298 = g_ty_lock_914;
} else if (rt_str_eq(F->name_1300, rt_str("LATCH", 5))) {
F->t_1298 = g_ty_latch_915;
} else if (rt_str_eq(F->name_1300, rt_str("ACT", 3))) {
F->t_1298 = g_ty_act_916;
} else if (rt_str_eq(F->name_1300, rt_str("INT", 3))) {
F->t_1298 = g_ty_int_906;
} else if (rt_str_eq(F->name_1300, rt_str("FLOAT", 5))) {
F->t_1298 = g_ty_float_908;
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1300); b_; }));
}
if (((*(P826)rt_nil_check(F->st_263)).b != NULL)) {
f_apply_constraint_274(F->t_1298, (*(P826)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P826)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1298;
goto ret_;
}
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_598(F->y_1299, (*(P826)rt_nil_check(F->st_263)).a, (*(P826)rt_nil_check(F->st_263)).b, &F->c_264v, rt_r_ichk((*(P826)rt_nil_check(F->st_263)).line));
goto ret_;
}
if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)5LL))) && ((*(P836)rt_nil_check(F->y_1299)).t != NULL)) && (rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_306(F->y_1299, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)5LL))) && ((*(P836)rt_nil_check(F->y_1299)).t != NULL)) && (rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).t)).kind) == (((rt_int)8LL))))) {
(*(P828)rt_nil_check(F->c_264v)).args = (*(P826)rt_nil_check(F->st_263)).b;
F->result_ = (*(P836)rt_nil_check(F->y_1299)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)6LL))) && ((*(P836)rt_nil_check(F->y_1299)).decl != NULL)) && ((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_269(F->y_1299, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)5LL)))) && ((*(P836)rt_nil_check(F->y_1299)).t != NULL))) {
if (((*(P836)rt_nil_check(F->y_1299)).c != NULL)) {
F->c_264v = (*(P836)rt_nil_check(F->y_1299)).c;
}
F->t_1298 = (*(P836)rt_nil_check(F->y_1299)).t;
} else if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)5LL))) && ((*(P836)rt_nil_check(F->y_1299)).decl != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1299)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_306(F->y_1299, F->st_263, &F->c_264v);
goto ret_;
} else if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1299)).kind) == (((rt_int)5LL))))) {
F->t_1298 = f_resolve_subtype_256((*(P836)rt_nil_check(F->y_1299)).st, &F->c_264v);
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1300, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P826)rt_nil_check(F->st_263)).b != NULL)) {
F->c_264v = f_copy_cons_197(F->c_264v);
f_apply_constraint_274(F->t_1298, (*(P826)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P826)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1298;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_264) = F->c_264v;
  RT_FPOP();
  return F->result_;
}

static P832 f_invoke_abbrev_269(P836 y_266, P826 st_267, P828 *c_268) {
  struct f_invoke_abbrev_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_266 = y_266;
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->p_1301 = NULL;
F->p_1301 = (*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_266)).decl)).b;
F->a_1302 = NULL;
F->a_1302 = (*(P826)rt_nil_check(F->st_267)).b;
F->t_1303 = NULL;
if ((f_list_len_67(F->p_1301) != f_list_len_67(F->a_1302))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_266)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1301))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1301 != NULL)) {
F->z_1304 = NULL;
F->z_1304 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_1301)).name);
F->pc_1305 = NULL;
F->at_1306 = NULL;
F->ok_1307 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P826)rt_nil_check(F->p_1301)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P836)rt_nil_check(F->z_1304)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1301)).a, &F->pc_1305);
(*(P836)rt_nil_check(F->z_1304)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_658(F->a_1302, (*(P836)rt_nil_check(F->z_1304)).t, &F->at_1306)), rt_str(")", 1)); b_; }));
f_check_type_223(F->at_1306, (*(P836)rt_nil_check(F->z_1304)).t, rt_r_ichk((*(P826)rt_nil_check(F->st_267)).line));
(*(P836)rt_nil_check(F->z_1304)).mvalue = f_manifest_333(F->a_1302, &F->ok_1307);
(*(P836)rt_nil_check(F->z_1304)).hasmv = rt_r_echk(F->ok_1307);
(*(P836)rt_nil_check(F->z_1304)).mv = f_meval_342(F->a_1302, &F->ok_1307);
if ((!rt_r_echk(F->ok_1307))) {
(*(P836)rt_nil_check(F->z_1304)).mv = NULL;
}
(*(P836)rt_nil_check(F->z_1304)).ro_flag = 1;
f_define_159(F->z_1304, rt_r_ichk((*(P826)rt_nil_check(F->st_267)).line));
F->p_1301 = (*(P826)rt_nil_check(F->p_1301)).next;
F->a_1302 = (*(P826)rt_nil_check(F->a_1302)).next;
}
F->t_1303 = f_resolve_subtype_256((*(P836)rt_nil_check(F->y_266)).st, &F->c_268v);
f_close_scope_169();
F->result_ = F->t_1303;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_274(P832 t_270, P826 args_271, P828 c_272, rt_int line_273) {
  struct f_apply_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_270 = t_270;
F->args_271 = args_271;
F->c_272 = c_272;
F->line_273 = line_273;
F->dummy_1308 = NULL;
F->ok_1309 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->args_271)).kind) != (((rt_int)16LL))) || ((*(P826)rt_nil_check(F->args_271)).next != NULL))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P828)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->args_271)).a, F->t_270, &F->dummy_1308); b_; }));
f_check_type_223(F->dummy_1308, F->t_270, F->line_273);
(*(P828)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check(F->args_271)).b, F->t_270, &F->dummy_1308); b_; }));
f_check_type_223(F->dummy_1308, F->t_270, F->line_273);
(*(P828)rt_nil_check(F->c_272)).hasm = 0;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL)))) {
(*(P828)rt_nil_check(F->c_272)).mlo = f_manifest_333((*(P826)rt_nil_check(F->args_271)).a, &F->ok_1309);
(*(P828)rt_nil_check(F->c_272)).hasm = rt_r_echk(F->ok_1309);
(*(P828)rt_nil_check(F->c_272)).mhi = f_manifest_333((*(P826)rt_nil_check(F->args_271)).b, &F->ok_1309);
(*(P828)rt_nil_check(F->c_272)).hasm = (rt_r_echk((*(P828)rt_nil_check(F->c_272)).hasm) && rt_r_echk(F->ok_1309));
} else if (((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).b)).kind) == (((rt_int)4LL))))) {
(*(P828)rt_nil_check(F->c_272)).mlo = f_lit_index_253((*(P832)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).a)).name))->all));
(*(P828)rt_nil_check(F->c_272)).mhi = f_lit_index_253((*(P832)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).b)).name))->all));
(*(P828)rt_nil_check(F->c_272)).hasm = 1;
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)3LL)))) {
(*(P828)rt_nil_check(F->c_272)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->args_271, g_ty_int_906, &F->dummy_1308); b_; }));
if (((*(P826)rt_nil_check(F->args_271)).next != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P828)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).next)).a, g_ty_float_908, &F->dummy_1308); b_; }));
(*(P828)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).next)).b, g_ty_float_908, &F->dummy_1308); b_; }));
(*(P828)rt_nil_check(F->c_272)).hasm = (f_float_lit_258((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).next)).a) && f_float_lit_258((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_271)).next)).b));
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)5LL)))) {
(*(P828)rt_nil_check(F->c_272)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->args_271, g_ty_int_906, &F->dummy_1308); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)12LL)))) {
(*(P828)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->args_271, g_ty_int_906, &F->dummy_1308); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_270)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_262(F->t_270, F->args_271, F->c_272);
} else {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P832 f_value_subtype_278(P826 e_275, P828 *c_276, P819 *base_277) {
  struct f_value_subtype_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_275 = e_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->base_277 = base_277;
F->base_277v = *F->base_277;
F->t_1310 = NULL;
F->c0_1311 = NULL;
F->ro_1312 = RT_R_EUNDEF;
if (f_is_lvalue_621(F->e_275)) {
f_lvalue_627(F->e_275, &F->base_277v, &F->t_1310, &F->c0_1311, &F->ro_1312);
} else {
F->base_277v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->e_275, NULL, &F->t_1310); b_; }));
}
if ((F->c0_1311 == NULL)) {
F->c_276v = f_new_cons_175();
} else {
F->c_276v = f_copy_cons_197(F->c0_1311);
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1310)).kind) == (((rt_int)5LL)))) {
(*(P828)rt_nil_check(F->c_276v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->base_277v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1310)).kind) == (((rt_int)6LL)))) {
(*(P828)rt_nil_check(F->c_276v)).bnds = NULL;
{ rt_int lo1314 = ((rt_int)1LL), hi1315 = rt_r_ichk((*(P832)rt_nil_check(F->t_1310)).ndim);
for (rt_int it1316 = lo1314; it1316 <= hi1315; it1316++) {
F->k_1313 = it1316;
F->lo_1317 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_lo_233(F->k_1313)));
F->hi_1318 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_hi_235(F->k_1313)));
if ((F->k_1313 == ((rt_int)1LL))) {
(*(P828)rt_nil_check(F->c_276v)).lo = f_mk_3(&F->lo_1317);
(*(P828)rt_nil_check(F->c_276v)).hi = f_mk_3(&F->hi_1318);
} else if ((F->k_1313 == ((rt_int)2LL))) {
(*(P828)rt_nil_check(F->c_276v)).lo2 = f_mk_3(&F->lo_1317);
(*(P828)rt_nil_check(F->c_276v)).hi2 = f_mk_3(&F->hi_1318);
} else {
F->l1_1319 = NULL;
F->l2_1320 = NULL;
{ R831 *cell1321 = rt_alloc(sizeof(R831));
(*cell1321).s = NULL;
(*cell1321).next = NULL;
F->l1_1319 = cell1321;
}
{ R831 *cell1322 = rt_alloc(sizeof(R831));
(*cell1322).s = NULL;
(*cell1322).next = NULL;
F->l2_1320 = cell1322;
}
(*(P830)rt_nil_check(F->l1_1319)).s = f_mk_3(&F->lo_1317);
(*(P830)rt_nil_check(F->l2_1320)).s = f_mk_3(&F->hi_1318);
(*(P830)rt_nil_check(F->l1_1319)).next = F->l2_1320;
(*(P830)rt_nil_check(F->l2_1320)).next = (*(P828)rt_nil_check(F->c_276v)).bnds;
(*(P828)rt_nil_check(F->c_276v)).bnds = F->l1_1319;
}
}
}
(*(P828)rt_nil_check(F->c_276v)).bnds = f_reverse_pairs_280((*(P828)rt_nil_check(F->c_276v)).bnds);
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1310)).kind) == (((rt_int)12LL)))) {
(*(P828)rt_nil_check(F->c_276v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->base_277v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_1310)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_1310)).tparams != NULL))) {
F->p_1323 = NULL;
F->p_1323 = (*(P832)rt_nil_check(F->t_1310)).tparams;
F->head_1324 = NULL;
F->tail_1325 = NULL;
while ((F->p_1323 != NULL)) {
F->sel_1326 = NULL;
F->sel_1326 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_275)).line));
(*(P826)rt_nil_check(F->sel_1326)).a = F->e_275;
(*(P826)rt_nil_check(F->sel_1326)).name = (*(P826)rt_nil_check(F->p_1323)).name;
f_append_65(&F->head_1324, &F->tail_1325, F->sel_1326);
F->p_1323 = (*(P826)rt_nil_check(F->p_1323)).next;
}
(*(P828)rt_nil_check(F->c_276v)).args = F->head_1324;
}
F->result_ = F->t_1310;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;  (*F->base_277) = F->base_277v;
  RT_FPOP();
  return F->result_;
}

static P830 f_reverse_pairs_280(P830 l_279) {
  struct f_reverse_pairs_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_279 = l_279;
F->r_1327 = NULL;
F->p_1328 = NULL;
F->p_1328 = F->l_279;
while ((F->p_1328 != NULL)) {
F->a_1329 = NULL;
F->a_1329 = F->p_1328;
F->b_1330 = NULL;
F->b_1330 = (*(P830)rt_nil_check(F->p_1328)).next;
F->p_1328 = (*(P830)rt_nil_check(F->b_1330)).next;
(*(P830)rt_nil_check(F->b_1330)).next = F->r_1327;
F->r_1327 = F->a_1329;
}
F->result_ = F->r_1327;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_inquiry_283(P826 st_281, P828 *c_282) {
  struct f_inquiry_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_281 = st_281;
F->c_282 = c_282;
F->c_282v = *F->c_282;
F->base_1331 = NULL;
F->t_1332 = NULL;
F->name_1333 = rt_str_copy((((P819)rt_nil_check((*(P826)rt_nil_check(F->st_281)).name))->all));
if (((*(P826)rt_nil_check(F->st_281)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1333, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1333, rt_str("TYPEOF", 6))) {
F->sub_1334 = NULL;
F->sub_1334 = f_as_subtype_285((*(P826)rt_nil_check(F->st_281)).b);
F->c2_1335 = NULL;
if ((F->sub_1334 != NULL)) {
F->t_1332 = f_resolve_subtype_256(F->sub_1334, &F->c2_1335);
} else {
F->t_1332 = f_value_subtype_278((*(P826)rt_nil_check(F->st_281)).b, &F->c2_1335, &F->base_1331);
}
F->c_282v = f_new_cons_175();
F->result_ = F->t_1332;
goto ret_;
}
F->t_1332 = f_value_subtype_278((*(P826)rt_nil_check(F->st_281)).b, &F->c_282v, &F->base_1331);
if (rt_str_eq(F->name_1333, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1332;
goto ret_;
}
{
F->k_1336 = RT_R_IUNDEF;
F->k_1336 = ((rt_int)1LL);
F->ok_1337 = RT_R_EUNDEF;
F->ok_1337 = 1;
F->ac_1338 = NULL;
F->ac_1338 = F->c_282v;
if (((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_281)).b)).next != NULL)) {
F->k_1336 = f_manifest_333((*(P826)rt_nil_check((*(P826)rt_nil_check(F->st_281)).b)).next, &F->ok_1337);
}
while (((rt_r_ichk((*(P832)rt_nil_check(F->t_1332)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_1332)).tparams == NULL))) {
F->t_1332 = (*(P832)rt_nil_check(F->t_1332)).under;
}
if (((((rt_r_ichk((*(P832)rt_nil_check(F->t_1332)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1337))) || (rt_r_ichk(F->k_1336) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1336) > rt_r_ichk((*(P832)rt_nil_check(F->t_1332)).ndim)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_282v = f_new_cons_175();
(*(P828)rt_nil_check(F->c_282v)).lo = f_cons_lo_243(F->ac_1338, rt_r_ichk(F->k_1336));
(*(P828)rt_nil_check(F->c_282v)).hi = f_cons_hi_246(F->ac_1338, rt_r_ichk(F->k_1336));
F->result_ = f_idx_type_249(F->t_1332, rt_r_ichk(F->k_1336));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_282) = F->c_282v;
  RT_FPOP();
  return F->result_;
}

static P826 f_as_subtype_285(P826 e_284) {
  struct f_as_subtype_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->st_1339 = NULL;
if ((F->e_284 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_284)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_285((*(P826)rt_nil_check(F->e_284)).a);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_284)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_292(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_284)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1339 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
(*(P826)rt_nil_check(F->st_1339)).name = (*(P826)rt_nil_check(F->e_284)).name;
F->result_ = F->st_1339;
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->e_284)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).name, (*(P826)rt_nil_check(F->e_284)).b, NULL, rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_284)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).a)).name, (*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).b, (*(P826)rt_nil_check(F->e_284)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1340 = rt_str_copy((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).name))->all));
F->y_1341 = NULL;
F->y_1341 = f_lookup_154(&F->name_1340);
if ((rt_str_eq(F->name_1340, rt_str("INT", 3)) && (F->y_1341 == NULL))) {
if (((((*(P826)rt_nil_check(F->e_284)).b == NULL) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).kind) != (((rt_int)16LL)))) || ((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1339 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
(*(P826)rt_nil_check(F->st_1339)).a = (*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).a;
(*(P826)rt_nil_check(F->st_1339)).b = (*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).b;
F->result_ = F->st_1339;
goto ret_;
} else if ((rt_str_eq(F->name_1340, rt_str("FLOAT", 5)) && (F->y_1341 == NULL))) {
F->st_1339 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
(*(P826)rt_nil_check(F->st_1339)).a = (*(P826)rt_nil_check(F->e_284)).b;
if ((((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).next != NULL) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P826)rt_nil_check(F->st_1339)).b = (*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).next)).a;
(*(P826)rt_nil_check(F->st_1339)).c = (*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).b)).next)).b;
}
F->result_ = F->st_1339;
goto ret_;
} else if (((!f_type_name_292(&F->name_1340)) && (!((F->y_1341 == NULL) && ((rt_str_eq(F->name_1340, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1340, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1340, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1339 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_284)).line));
(*(P826)rt_nil_check(F->st_1339)).name = (*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_284)).a)).name;
(*(P826)rt_nil_check(F->st_1339)).b = (*(P826)rt_nil_check(F->e_284)).b;
(*(P826)rt_nil_check(F->st_1339)).flag = ((rt_int)1LL);
F->result_ = F->st_1339;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_tt_subtype_290(P819 name_286, P826 tt_287, P826 args_288, rt_int line_289) {
  struct f_tt_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->tt_287 = tt_287;
F->args_288 = args_288;
F->line_289 = line_289;
F->st_1342 = NULL;
if (rt_str_eq((((P819)rt_nil_check(F->name_286))->all), rt_str("STRING", 6))) {
F->st_1342 = f_nn_61((((rt_int)73LL)), F->line_289);
} else if (rt_str_eq((((P819)rt_nil_check(F->name_286))->all), rt_str("SET", 3))) {
F->st_1342 = f_nn_61((((rt_int)77LL)), F->line_289);
} else if ((rt_str_eq((((P819)rt_nil_check(F->name_286))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P836)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1342 = f_nn_61((((rt_int)78LL)), F->line_289);
} else if (rt_str_eq((((P819)rt_nil_check(F->name_286))->all), rt_str("FILE", 4))) {
F->st_1342 = f_nn_61((((rt_int)79LL)), F->line_289);
} else if (f_type_name_292(&(((P819)rt_nil_check(F->name_286))->all))) {
F->st_1342 = f_nn_61((((rt_int)80LL)), F->line_289);
(*(P826)rt_nil_check(F->st_1342)).name = F->name_286;
(*(P826)rt_nil_check(F->st_1342)).a = F->tt_287;
(*(P826)rt_nil_check(F->st_1342)).b = F->args_288;
F->result_ = F->st_1342;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P826)rt_nil_check(F->st_1342)).a = F->tt_287;
(*(P826)rt_nil_check(F->st_1342)).b = F->args_288;
F->result_ = F->st_1342;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_292(rstr *name_291) {
  struct f_type_name_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_291 = name_291;
F->y_1343 = NULL;
F->y_1343 = f_lookup_154(&(*F->name_291));
if ((F->y_1343 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_291), rt_str("INT", 3)) || rt_str_eq((*F->name_291), rt_str("BOOL", 4))) || rt_str_eq((*F->name_291), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_291), rt_str("ASCII", 5))) || rt_str_eq((*F->name_291), rt_str("ACT", 3))) || rt_str_eq((*F->name_291), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_291), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P836)rt_nil_check(F->y_1343)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1343)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P836)rt_nil_check(F->y_1343)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1343)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1343)).decl)).b)).kind) == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_294(P832 t_293) {
  struct f_empty_set_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_293 = t_293;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_189(f_base_of_214((*(P832)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P832)rt_nil_check(F->t_293)).elem, (*(P832)rt_nil_check(F->t_293)).elemcons))), rt_str(", ", 2)), f_sub_hi_192(f_base_of_214((*(P832)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P832)rt_nil_check(F->t_293)).elem, (*(P832)rt_nil_check(F->t_293)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_296(P832 t_295) {
  struct f_opened_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1344 = NULL;
F->c_1344 = g_caps_881;
if ((((rt_r_ichk((*(P832)rt_nil_check(F->t_295)).kind) != (((rt_int)15LL))) || ((*(P832)rt_nil_check(F->t_295)).ocap == NULL)) || (rt_r_ichk((*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_295)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1344 != NULL)) {
if (((*(P853)rt_nil_check(F->c_1344)).d == (*(P832)rt_nil_check(F->t_295)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1344 = (*(P853)rt_nil_check(F->c_1344)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299) {
  struct f_replace_all_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_297 = s_297;
F->pat_298 = pat_298;
F->r_299 = r_299;
F->i_1345 = RT_R_IUNDEF;
F->i_1345 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_298)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_297)).len)) < ((rt_int)(((*F->pat_298)).len))))) {
F->result_ = (*F->s_297);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1345), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_297)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_297), rt_r_ichk(F->i_1345), rt_sub(rt_add(rt_r_ichk(F->i_1345), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL))), (*F->pat_298))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_297), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1345), ((rt_int)1LL))), (*F->r_299)), f_replace_all_300(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_297), rt_add(rt_r_ichk(F->i_1345), ((rt_int)(((*F->pat_298)).len))), ((rt_int)(((*F->s_297)).len))); b_; }), &(*F->pat_298), &(*F->r_299)));
goto ret_;
}
F->i_1345 = rt_add(rt_r_ichk(F->i_1345), ((rt_int)1LL));
}
F->result_ = (*F->s_297);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_302(rstr *s_301) {
  struct f_subst_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_301 = s_301;
F->l_1346 = NULL;
F->l_1346 = g_psub_883;
F->r_1347 = NULL;
F->r_1347 = f_mk_3(&(*F->s_301));
while ((F->l_1346 != NULL)) {
F->r_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_300(&(((P819)rt_nil_check(F->r_1347))->all), &(((P819)rt_nil_check((*(P830)rt_nil_check(F->l_1346)).s))->all), &(((P819)rt_nil_check((*(P830)rt_nil_check((*(P830)rt_nil_check(F->l_1346)).next)).s))->all)); b_; }));
F->l_1346 = (*(P830)rt_nil_check((*(P830)rt_nil_check(F->l_1346)).next)).next;
}
F->result_ = (((P819)rt_nil_check(F->r_1347))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_new_type_306(P836 y_303, P826 st_304, P828 *c_305) {
  struct f_new_type_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_303 = y_303;
F->st_304 = st_304;
F->c_305 = c_305;
F->c_305v = *F->c_305;
F->d_1348 = NULL;
F->d_1348 = (*(P836)rt_nil_check(F->y_303)).decl;
F->p_1349 = NULL;
F->uc_1350 = NULL;
F->c_305v = f_new_cons_175();
if (((*(P836)rt_nil_check(F->y_303)).t == NULL)) {
(*(P836)rt_nil_check(F->y_303)).t = f_new_typ_174((((rt_int)15LL)));
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).name = (*(P836)rt_nil_check(F->y_303)).name;
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).decl = F->d_1348;
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).tparams = (*(P826)rt_nil_check(F->d_1348)).b;
if ((g_caps_881 != NULL)) {
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).ocap = (*(P853)rt_nil_check(g_caps_881)).d;
}
f_open_scope_168();
F->p_1349 = (*(P826)rt_nil_check(F->d_1348)).b;
while ((F->p_1349 != NULL)) {
F->z_1351 = NULL;
F->z_1351 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_1349)).name);
F->zc_1352 = NULL;
(*(P836)rt_nil_check(F->z_1351)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1349)).a, &F->zc_1352);
(*(P836)rt_nil_check(F->z_1351)).mnext = (*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).tpsyms;
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).tpsyms = F->z_1351;
(*(P836)rt_nil_check(F->z_1351)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1349)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1351, rt_r_ichk((*(P826)rt_nil_check(F->d_1348)).line));
F->p_1349 = (*(P826)rt_nil_check(F->p_1349)).next;
}
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).under = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_1348)).a, &F->uc_1350);
(*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_303)).t)).elemcons = F->uc_1350;
f_close_scope_169();
}
(*(P828)rt_nil_check(F->c_305v)).args = (*(P826)rt_nil_check(F->st_304)).b;
F->result_ = (*(P836)rt_nil_check(F->y_303)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_305) = F->c_305v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_310(rstr *lval_307, P832 t_308, P828 c_309) {
  struct f_init_storage_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_307 = lval_307;
F->t_308 = t_308;
F->c_309 = c_309;
f_make_storage_325(&(*F->lval_307), F->t_308, F->c_309);
if (((*(P832)rt_nil_check(F->t_308)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P832)rt_nil_check(F->t_308)).initp, &(*F->lval_307)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_313(P836 y_311, rstr *lval_312) {
  struct f_init_call_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->lval_312 = lval_312;
F->link_1353 = NULL;
F->link_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_311)).level) > ((rt_int)0LL))) {
F->link_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1355 = ((rt_int)1LL), hi1356 = rt_sub(rt_r_ichk(g_cur_level_879), rt_r_ichk((*(P836)rt_nil_check(F->y_311)).level));
for (rt_int it1357 = lo1355; it1357 <= hi1356; it1357++) {
F->i_1354 = it1357;
F->link_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->link_1353))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->link_1353))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_311)).cname))->all), rt_str("(", 1)), (((P819)rt_nil_check(F->link_1353))->all)), rt_str("&", 1)), (*F->lval_312)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_315(P832 t_314) {
  struct f_needs_fin_315fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_314 = t_314;
if ((F->t_314 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P832)rt_nil_check(F->t_314)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_314)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_315((*(P832)rt_nil_check(F->t_314)).under);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_314)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_315((*(P832)rt_nil_check(F->t_314)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_314)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_314)).kind) == (((rt_int)17LL))))) {
F->f_1358 = NULL;
F->f_1358 = (*(P832)rt_nil_check(F->t_314)).fields;
while ((F->f_1358 != NULL)) {
if (f_needs_fin_315((*(P834)rt_nil_check(F->f_1358)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1358 = (*(P834)rt_nil_check(F->f_1358)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_318(rstr *lval_316, P832 t_317) {
  struct f_fin_code_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_316 = lval_316;
F->t_317 = t_317;
F->r_1359 = NULL;
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P832)rt_nil_check(F->t_317)).finalp != NULL)) {
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_313((*(P832)rt_nil_check(F->t_317)).finalp, &(*F->lval_316)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_317)).tparams == NULL))) {
F->result_ = rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), f_fin_code_318(&(*F->lval_316), (*(P832)rt_nil_check(F->t_317)).under));
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_316), rt_str(".all", 4)); b_; }), (*(P832)rt_nil_check(F->t_317)).under));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_317)).kind) == (((rt_int)6LL))) && f_needs_fin_315((*(P832)rt_nil_check(F->t_317)).elem))) {
F->i_1360 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), rt_str("for (rt_int ", 12)), F->i_1360), rt_str(" = 0; ", 6)), F->i_1360), rt_str(" < ", 3)), f_acnt_240(F->t_317, &(*F->lval_316))), rt_str("; ", 2)), F->i_1360), rt_str("++) { ", 6)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".p[", 3)), F->i_1360), rt_str("]", 1)); b_; }), (*(P832)rt_nil_check(F->t_317)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_317)).kind) == (((rt_int)7LL)))) {
F->f_1361 = NULL;
F->f_1361 = (*(P832)rt_nil_check(F->t_317)).fields;
while ((F->f_1361 != NULL)) {
if (f_needs_fin_315((*(P834)rt_nil_check(F->f_1361)).t)) {
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1361)).name))->all))); b_; }), (*(P834)rt_nil_check(F->f_1361)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1361 = (*(P834)rt_nil_check(F->f_1361)).next;
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_317)).kind) == (((rt_int)17LL)))) {
F->f_1362 = NULL;
F->f_1362 = (*(P832)rt_nil_check(F->t_317)).fields;
F->i_1363 = RT_R_IUNDEF;
F->i_1363 = ((rt_int)0LL);
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), rt_str("switch (", 8)), (*F->lval_316)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1362 != NULL)) {
if (f_needs_fin_315((*(P834)rt_nil_check(F->f_1362)).t)) {
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1363))), rt_str(": ", 2)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".u.", 3)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1362)).name))->all))); b_; }), (*(P834)rt_nil_check(F->f_1362)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1363 = rt_add(rt_r_ichk(F->i_1363), ((rt_int)1LL));
F->f_1362 = (*(P834)rt_nil_check(F->f_1362)).next;
}
F->r_1359 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_1359))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P819)rt_nil_check(F->r_1359))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_tparam_type_321(P832 t_319, rstr *name_320) {
  struct f_tparam_type_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->name_320 = name_320;
F->z_1364 = NULL;
F->z_1364 = (*(P832)rt_nil_check(F->t_319)).tpsyms;
while ((F->z_1364 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->z_1364)).name))->all), (*F->name_320))) {
F->result_ = (*(P836)rt_nil_check(F->z_1364)).t;
goto ret_;
}
F->z_1364 = (*(P836)rt_nil_check(F->z_1364)).mnext;
}
F->result_ = g_ty_int_906;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_325(rstr *lval_322, P832 t_323, P828 c_324) {
  struct f_make_storage_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_322 = lval_322;
F->t_323 = t_323;
F->c_324 = c_324;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)15LL)))) {
F->p_1365 = NULL;
F->p_1365 = (*(P832)rt_nil_check(F->t_323)).tparams;
F->a_1366 = NULL;
F->a_1366 = (*(P828)rt_nil_check(F->c_324)).args;
F->uc_1367 = NULL;
F->ut_1368 = NULL;
F->at_1369 = NULL;
if ((f_list_len_67(F->a_1366) != f_list_len_67(F->p_1365))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_323)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1365))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1365 != NULL)) {
F->pt_1370 = f_tparam_type_321(F->t_323, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1365)).name))->all));
F->v_1371 = rt_str_copy(f_gexpr_658(F->a_1366, F->pt_1370, &F->at_1369));
f_check_type_223(F->at_1369, F->pt_1370, rt_r_ichk((*(P826)rt_nil_check(F->a_1366)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1365)).name))->all))), rt_str(" = ", 3)), F->v_1371), rt_str(";", 1)); b_; }));
F->p_1365 = (*(P826)rt_nil_check(F->p_1365)).next;
F->a_1366 = (*(P826)rt_nil_check(F->a_1366)).next;
}
{
F->saved_1372 = NULL;
F->saved_1372 = g_psub_883;
F->p_1365 = (*(P832)rt_nil_check(F->t_323)).tparams;
while ((F->p_1365 != NULL)) {
F->l1_1373 = NULL;
F->l2_1374 = NULL;
{ R831 *cell1375 = rt_alloc(sizeof(R831));
(*cell1375).s = NULL;
(*cell1375).next = NULL;
F->l1_1373 = cell1375;
}
{ R831 *cell1376 = rt_alloc(sizeof(R831));
(*cell1376).s = NULL;
(*cell1376).next = NULL;
F->l2_1374 = cell1376;
}
(*(P830)rt_nil_check(F->l1_1373)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1365)).name))->all))), rt_str("@", 1)); b_; }));
(*(P830)rt_nil_check(F->l2_1374)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1365)).name))->all))); b_; }));
(*(P830)rt_nil_check(F->l1_1373)).next = F->l2_1374;
(*(P830)rt_nil_check(F->l2_1374)).next = g_psub_883;
g_psub_883 = F->l1_1373;
F->p_1365 = (*(P826)rt_nil_check(F->p_1365)).next;
}
if (((*(P832)rt_nil_check(F->t_323)).tparams == NULL)) {
f_init_storage_310(&(*F->lval_322), (*(P832)rt_nil_check(F->t_323)).under, (*(P832)rt_nil_check(F->t_323)).elemcons);
} else {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".all", 4)); b_; }), (*(P832)rt_nil_check(F->t_323)).under, (*(P832)rt_nil_check(F->t_323)).elemcons);
}
g_psub_883 = F->saved_1372;
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)12LL)))) {
if (((*(P828)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_322)), rt_str(", ", 2)), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_324)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_225((*(P832)rt_nil_check(F->t_323)).elem)), rt_str("), ", 3)), f_mcopy_354((*(P832)rt_nil_check(F->t_323)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_322)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_empty_set_294(F->t_323)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)5LL)))) {
if (((*(P828)rt_nil_check(F->c_324)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = rt_str_new(", 14)), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_324)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)6LL)))) {
if (((*(P828)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1378 = ((rt_int)1LL), hi1379 = rt_r_ichk((*(P832)rt_nil_check(F->t_323)).ndim);
for (rt_int it1380 = lo1378; it1380 <= hi1379; it1380++) {
F->k_1377 = it1380;
if ((f_cons_lo_243(F->c_324, F->k_1377) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_dim_lo_233(F->k_1377)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P819)rt_nil_check(f_cons_lo_243(F->c_324, F->k_1377)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_322)), rt_str(".", 1)), f_dim_hi_235(F->k_1377)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P819)rt_nil_check(f_cons_hi_246(F->c_324, F->k_1377)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".lo2 = ", 7)), (*F->lval_322)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P832)rt_nil_check(F->t_323)).elem)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_898) && (!rt_str_eq(f_uninit_value_327((*(P832)rt_nil_check(F->t_323)).elem), rt_str("", 0)))))) {
F->i_1381 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1381), rt_str(" = 0; ", 6)), F->i_1381), rt_str(" < ", 3)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str("; ", 2)), F->i_1381), rt_str("++) {", 5)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p[", 3)), F->i_1381), rt_str("]", 1)); b_; }), (*(P832)rt_nil_check(F->t_323)).elem, (*(P832)rt_nil_check(F->t_323)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)7LL)))) {
F->f_1382 = NULL;
F->f_1382 = (*(P832)rt_nil_check(F->t_323)).fields;
while ((F->f_1382 != NULL)) {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1382)).name))->all))); b_; }), (*(P834)rt_nil_check(F->f_1382)).t, (*(P834)rt_nil_check(F->f_1382)).c);
F->f_1382 = (*(P834)rt_nil_check(F->f_1382)).next;
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_323)).kind) == (((rt_int)17LL)))) {
if (((F->c_324 != NULL) && rt_r_echk((*(P828)rt_nil_check(F->c_324)).hasm))) {
F->f_1383 = NULL;
F->f_1383 = (*(P832)rt_nil_check(F->t_323)).fields;
{ rt_int lo1385 = ((rt_int)1LL), hi1386 = rt_r_ichk((*(P828)rt_nil_check(F->c_324)).mlo);
for (rt_int it1387 = lo1385; it1387 <= hi1386; it1387++) {
F->i_1384 = it1387;
F->f_1383 = (*(P834)rt_nil_check(F->f_1383)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P828)rt_nil_check(F->c_324)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".u.", 3)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1383)).name))->all))); b_; }), (*(P834)rt_nil_check(F->f_1383)).t, (*(P834)rt_nil_check(F->f_1383)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_898) && (!rt_str_eq(f_uninit_value_327(F->t_323), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_uninit_value_327(F->t_323)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_327(P832 t_326) {
  struct f_uninit_value_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_326 = t_326;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_326)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_326)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_326)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_326)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_330(P832 t_328, rstr *v_329) {
  struct f_init_chk_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_328 = t_328;
F->v_329 = v_329;
F->b_1388 = NULL;
F->b_1388 = f_base_of_214(F->t_328);
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_329);
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->b_1388)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->b_1388)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->b_1388)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->b_1388)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_329);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_333(P826 e_331, int *ok_332) {
  struct f_manifest_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_331 = e_331;
F->ok_332 = ok_332;
F->ok_332v = *F->ok_332;
F->v_1389 = NULL;
F->v_1389 = f_meval_342(F->e_331, &F->ok_332v);
if ((rt_r_echk(F->ok_332v) && (rt_r_ichk((*(P845)rt_nil_check(F->v_1389)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P845)rt_nil_check(F->v_1389)).i);
goto ret_;
}
F->ok_332v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_332v)) (*F->ok_332) = F->ok_332v;
  RT_FPOP();
  return F->result_;
}

static P845 f_mk_mval_336(rt_int kind_334, rt_int i_335) {
  struct f_mk_mval_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_334 = kind_334;
F->i_335 = i_335;
F->v_1390 = NULL;
{ R846 *cell1391 = rt_alloc(sizeof(R846));
(*cell1391).s = NULL;
(*cell1391).t = NULL;
F->v_1390 = cell1391;
}
(*(P845)rt_nil_check(F->v_1390)).kind = F->kind_334;
(*(P845)rt_nil_check(F->v_1390)).i = F->i_335;
F->result_ = F->v_1390;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_339(rt_int a_337, rt_int b_338) {
  struct f_ipow_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_337 = a_337;
F->b_338 = b_338;
F->r_1392 = RT_R_IUNDEF;
F->r_1392 = ((rt_int)1LL);
{ rt_int lo1394 = ((rt_int)1LL), hi1395 = F->b_338;
for (rt_int it1396 = lo1394; it1396 <= hi1395; it1396++) {
F->i_1393 = it1396;
F->r_1392 = rt_mul(rt_r_ichk(F->r_1392), F->a_337);
}
}
F->result_ = rt_r_ichk(F->r_1392);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P845 f_meval_342(P826 e_340, int *ok_341) {
  struct f_meval_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_340 = e_340;
F->ok_341 = ok_341;
F->ok_341v = *F->ok_341;
F->a_1397 = NULL;
F->b_1398 = NULL;
F->ok2_1399 = RT_R_EUNDEF;
F->op_1400 = NULL;
F->ok_341v = 0;
if ((F->e_340 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)1LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)5LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)2LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)3LL)))) {
F->ok_341v = 1;
F->a_1397 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
(*(P845)rt_nil_check(F->a_1397)).s = (*(P826)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1397;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_253((*(P832)rt_nil_check(g_ty_ascii_909)).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all)) >= ((rt_int)0LL))) {
F->ok_341v = 1;
F->a_1397 = f_mk_mval_336((((rt_int)4LL)), f_lit_index_253((*(P832)rt_nil_check(g_ty_ascii_909)).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all)));
(*(P845)rt_nil_check(F->a_1397)).t = g_ty_ascii_909;
(*(P845)rt_nil_check(F->a_1397)).s = (*(P826)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1397;
goto ret_;
}
F->a_1397 = f_mk_mval_336((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P845)rt_nil_check(F->a_1397)).s = (*(P826)rt_nil_check(F->e_340)).name;
F->ok_341v = 1;
F->result_ = F->a_1397;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_342((*(P826)rt_nil_check(F->e_340)).a, &F->ok_341v);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)7LL)))) {
F->y_1401 = NULL;
F->y_1401 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all));
if ((((F->y_1401 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1401)).kind) == (((rt_int)2LL)))) && ((*(P836)rt_nil_check(F->y_1401)).mv != NULL))) {
F->ok_341v = 1;
F->result_ = (*(P836)rt_nil_check(F->y_1401)).mv;
goto ret_;
} else if ((((F->y_1401 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1401)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P836)rt_nil_check(F->y_1401)).hasmv))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P836)rt_nil_check(F->y_1401)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) == (((rt_int)8LL)))) {
F->a_1397 = f_meval_342((*(P826)rt_nil_check(F->e_340)).a, &F->ok_341v);
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i)));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i)));
goto ret_;
} else if (((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all), rt_str("+", 1)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1397;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->e_340)).kind) != (((rt_int)9LL))) || f_user_defined_352(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_340)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1400 = (*(P826)rt_nil_check(F->e_340)).name;
F->a_1397 = f_meval_342((*(P826)rt_nil_check(F->e_340)).a, &F->ok_341v);
F->b_1398 = f_meval_342((*(P826)rt_nil_check(F->e_340)).b, &F->ok2_1399);
F->ok_341v = (rt_r_echk(F->ok_341v) && rt_r_echk(F->ok2_1399));
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_341v = 0;
if (((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)1LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_add(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_div(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("**", 2)) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), f_ipow_339(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) == rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) != rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) < rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) <= rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) > rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) >= rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("+", 1)) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("-", 1))) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("*", 1))) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("/", 1))))) {
F->ok_341v = 1;
F->result_ = F->a_1397;
goto ret_;
} else if ((((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("**", 2)))) {
F->ok_341v = 1;
F->result_ = F->a_1397;
goto ret_;
} else if (((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)2LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_add(rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i), rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("XOR", 3)) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) != rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).i) == rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1)) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P819)rt_nil_check((*(P845)rt_nil_check(F->a_1397)).s))->all), (((P819)rt_nil_check((*(P845)rt_nil_check(F->b_1398)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P819)rt_nil_check((*(P845)rt_nil_check(F->a_1397)).s))->all), (((P819)rt_nil_check((*(P845)rt_nil_check(F->b_1398)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1)) || rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P819)rt_nil_check((*(P845)rt_nil_check(F->a_1397)).s))->all), (((P819)rt_nil_check((*(P845)rt_nil_check(F->b_1398)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P819)rt_nil_check((*(P845)rt_nil_check(F->a_1397)).s))->all), (((P819)rt_nil_check((*(P845)rt_nil_check(F->b_1398)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P819)rt_nil_check(F->op_1400))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P845)rt_nil_check(F->a_1397)).kind) == (((rt_int)5LL))) || ((*(P845)rt_nil_check(F->a_1397)).t == g_ty_ascii_909))) && ((rt_r_ichk((*(P845)rt_nil_check(F->b_1398)).kind) == (((rt_int)5LL))) || ((*(P845)rt_nil_check(F->b_1398)).t == g_ty_ascii_909)))) {
F->r_1402 = NULL;
F->r_1402 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
F->ok_341v = 1;
(*(P845)rt_nil_check(F->r_1402)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_348(F->a_1397), f_mstr_348(F->b_1398)); b_; }));
F->result_ = F->r_1402;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_341v)) (*F->ok_341) = F->ok_341v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_344(int b_343) {
  struct f_bool_text_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_343 = b_343;
if (F->b_343) {
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

static rt_int f_bool_i_346(int b_345) {
  struct f_bool_i_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_345 = b_345;
if (F->b_345) {
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

static rstr f_mstr_348(P845 v_347) {
  struct f_mstr_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_347 = v_347;
if ((rt_r_ichk((*(P845)rt_nil_check(F->v_347)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P819)rt_nil_check((*(P845)rt_nil_check(F->v_347)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_350(rt_r_ichk((*(P845)rt_nil_check(F->v_347)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_350(rt_int i_349) {
  struct f_ascii_char_350fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_349 = i_349;
F->printable_1403 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_349 >= ((rt_int)32LL)) && (F->i_349 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1403, rt_sub(F->i_349, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_352(rstr *op_351) {
  struct f_user_defined_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_351 = op_351;
F->y_1404 = NULL;
F->y_1404 = f_lookup_154(&(*F->op_351));
F->result_ = ((F->y_1404 != NULL) && ((rt_r_ichk((*(P836)rt_nil_check(F->y_1404)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1404)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_354(P832 t_353) {
  struct f_mcopy_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
F->ct_1405 = rt_str_copy(f_ctype_225(F->t_353));
F->name_1406 = rt_str_new(rt_add(((rt_int)((F->ct_1405).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1406, rt_str_cat(rt_str("mc_", 3), F->ct_1405));
F->l_1407 = NULL;
if ((!f_seen_name_375(g_mcopies_905, &F->name_1406))) {
{ R831 *cell1408 = rt_alloc(sizeof(R831));
(*cell1408).s = NULL;
(*cell1408).next = NULL;
F->l_1407 = cell1408;
}
(*(P830)rt_nil_check(F->l_1407)).s = f_mk_3(&F->name_1406);
(*(P830)rt_nil_check(F->l_1407)).next = g_mcopies_905;
g_mcopies_905 = F->l_1407;
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1406), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1406), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1405), rt_str(" *)d = ", 7)), f_copy_code_364(F->t_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1405), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1406;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_356(P832 t_355) {
  struct f_composite_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->result_ = ((((rt_r_ichk((*(P832)rt_nil_check(F->t_355)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_355)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_355)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P832)rt_nil_check(F->t_355)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_355)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_361(rstr *lval_357, P832 t_358, rstr *v_359, P828 c_360) {
  struct f_assign_code_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_357 = lval_357;
F->t_358 = t_358;
F->v_359 = v_359;
F->c_360 = c_360;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_358)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_358)).tparams == NULL))) {
F->result_ = f_assign_code_361(&(*F->lval_357), (*(P832)rt_nil_check(F->t_358)).under, &(*F->v_359), F->c_360);
goto ret_;
}
if ((((rt_r_ichk((*(P832)rt_nil_check(F->t_358)).kind) == (((rt_int)17LL))) && (F->c_360 != NULL)) && ((*(P828)rt_nil_check(F->c_360)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_358)), rt_str(" u_ = ", 6)), (*F->v_359)), rt_str("; if (u_.tag != (", 17)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_360)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_356(F->t_358)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_358)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_358)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_358)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_357), rt_str(" = ", 3)), f_checked_204(F->t_358, F->c_360, &(*F->v_359))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_364(P832 t_362, rstr *v_363) {
  struct f_copy_code_364fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
F->v_363 = v_363;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_362)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_copy_code_364((*(P832)rt_nil_check(F->t_362)).under, &(*F->v_363));
goto ret_;
}
if (f_composite_356(F->t_362)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_362)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_363)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_362)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_362)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_363);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_368(P832 t_365, rstr *a_366, rstr *b_367) {
  struct f_eq_code_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_365 = t_365;
F->a_366 = a_366;
F->b_367 = b_367;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_365)).tparams == NULL))) {
F->result_ = f_eq_code_368((*(P832)rt_nil_check(F->t_365)).under, &(*F->a_366), &(*F->b_367));
goto ret_;
}
if (f_composite_356(F->t_365)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_365)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_372(rstr *lval_369, P832 t_370, rstr *v_371) {
  struct f_elem_assign_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_369 = lval_369;
F->t_370 = t_370;
F->v_371 = v_371;
F->result_ = f_assign_code_361(&(*F->lval_369), F->t_370, &(*F->v_371), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_375(P830 l_373, rstr *s_374) {
  struct f_seen_name_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_373 = l_373;
F->s_374 = s_374;
F->p_1409 = NULL;
F->p_1409 = F->l_373;
while ((F->p_1409 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P830)rt_nil_check(F->p_1409)).s))->all), (*F->s_374))) {
F->result_ = 1;
goto ret_;
}
F->p_1409 = (*(P830)rt_nil_check(F->p_1409)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_376(void) {
  struct f_emit_helpers_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1410 = NULL;
F->t_1411 = NULL;
F->t_1411 = g_all_types_867;
F->done_1412 = NULL;
while ((F->t_1411 != NULL)) {
if ((f_composite_356(F->t_1411) && (!f_seen_name_375(F->done_1412, &(((P819)rt_nil_check((*(P832)rt_nil_check(F->t_1411)).cname))->all))))) {
F->l_1413 = NULL;
F->c_1414 = rt_str_new(((rt_int)(((((P819)rt_nil_check((*(P832)rt_nil_check(F->t_1411)).cname))->all)).len)));
rt_str_assign(&F->c_1414, (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_1411)).cname))->all));
{ R831 *cell1415 = rt_alloc(sizeof(R831));
(*cell1415).s = NULL;
(*cell1415).next = NULL;
F->l_1413 = cell1415;
}
(*(P830)rt_nil_check(F->l_1413)).s = (*(P832)rt_nil_check(F->t_1411)).cname;
(*(P830)rt_nil_check(F->l_1413)).next = F->done_1412;
F->done_1412 = F->l_1413;
f_put_27(g_out_helpers_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1414), rt_str("(", 1)), F->c_1414), rt_str(" *d, ", 5)), F->c_1414), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1414), rt_str(" cp_", 4)), F->c_1414), rt_str("(", 1)), F->c_1414), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_870, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1414), rt_str("(", 1)), F->c_1414), rt_str(" a, ", 4)), F->c_1414), rt_str(" b);", 4)); b_; }));
f_helper_bodies_378(F->t_1411);
}
F->t_1411 = (*(P832)rt_nil_check(F->t_1411)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_378(P832 t_377) {
  struct f_helper_bodies_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_377 = t_377;
F->c_1416 = rt_str_new(((rt_int)(((((P819)rt_nil_check((*(P832)rt_nil_check(F->t_377)).cname))->all)).len)));
rt_str_assign(&F->c_1416, (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_377)).cname))->all));
F->b_1417 = NULL;
F->b_1417 = g_out_funcs_873;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_377)).kind) == (((rt_int)6LL)))) {
F->e_1418 = NULL;
F->e_1418 = (*(P832)rt_nil_check(F->t_377)).elem;
F->sizes_1419 = NULL;
F->sizes_1419 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1420 = NULL;
F->bounds_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1422 = ((rt_int)1LL), hi1423 = rt_r_ichk((*(P832)rt_nil_check(F->t_377)).ndim);
for (rt_int it1424 = lo1422; it1424 <= hi1423; it1424++) {
F->k_1421 = it1424;
F->l_1425 = rt_str_copy(f_dim_lo_233(F->k_1421));
F->h_1426 = rt_str_copy(f_dim_hi_235(F->k_1421));
F->sizes_1419 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->sizes_1419))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1425), rt_str(", d->", 5)), F->h_1426), rt_str(") != RT_R_EXT(s.", 16)), F->l_1425), rt_str(", s.", 4)), F->h_1426), rt_str(")", 1)); b_; }));
F->bounds_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->bounds_1420))->all), rt_str(" || a.", 6)), F->l_1425), rt_str(" != b.", 6)), F->l_1425), rt_str(" || a.", 6)), F->h_1426), rt_str(" != b.", 6)), F->h_1426); b_; }));
}
}
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" *d, ", 5)), F->c_1416), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P819)rt_nil_check(F->sizes_1419))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1416), rt_str(" cp_", 4)), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1416), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_225(F->e_1418)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_364(F->e_1418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" a, ", 4)), F->c_1416), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P819)rt_nil_check(F->bounds_1420))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_368(F->e_1418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_377)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" *d, ", 5)), F->c_1416), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P832)rt_nil_check(F->t_377)).under) && ((*(P832)rt_nil_check(F->t_377)).elemcons != NULL)) && ((*(P828)rt_nil_check((*(P832)rt_nil_check(F->t_377)).elemcons)).lo != NULL))) {
F->saved_1427 = NULL;
F->saved_1427 = g_psub_883;
F->p_1428 = NULL;
F->p_1428 = (*(P832)rt_nil_check(F->t_377)).tparams;
while ((F->p_1428 != NULL)) {
F->l1_1429 = NULL;
F->l2_1430 = NULL;
{ R831 *cell1431 = rt_alloc(sizeof(R831));
(*cell1431).s = NULL;
(*cell1431).next = NULL;
F->l1_1429 = cell1431;
}
{ R831 *cell1432 = rt_alloc(sizeof(R831));
(*cell1432).s = NULL;
(*cell1432).next = NULL;
F->l2_1430 = cell1432;
}
(*(P830)rt_nil_check(F->l1_1429)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1428)).name))->all))), rt_str("@", 1)); b_; }));
(*(P830)rt_nil_check(F->l2_1430)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1428)).name))->all))); b_; }));
(*(P830)rt_nil_check(F->l1_1429)).next = F->l2_1430;
(*(P830)rt_nil_check(F->l2_1430)).next = g_psub_883;
g_psub_883 = F->l1_1429;
F->p_1428 = (*(P826)rt_nil_check(F->p_1428)).next;
}
if ((rt_r_ichk((*(P832)rt_nil_check((*(P832)rt_nil_check(F->t_377)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check((*(P832)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check((*(P832)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check((*(P832)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P819)rt_nil_check((*(P828)rt_nil_check((*(P832)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_883 = F->saved_1427;
} else {
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P832)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1416), rt_str(" cp_", 4)), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" s) { s.all = ", 14)), f_copy_code_364((*(P832)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" a, ", 4)), F->c_1416), rt_str(" b) { return ", 13)), f_eq_code_368((*(P832)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_377)).kind) == (((rt_int)17LL)))) {
F->f_1433 = NULL;
F->f_1433 = (*(P832)rt_nil_check(F->t_377)).fields;
F->i_1434 = RT_R_IUNDEF;
F->i_1434 = ((rt_int)0LL);
F->cases_as_1435 = NULL;
F->cases_as_1435 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1436 = NULL;
F->cases_cp_1436 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1437 = NULL;
F->cases_eq_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1433 != NULL)) {
F->fn_1438 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1433)).name))->all))));
F->cases_as_1435 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->cases_as_1435))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1434))), rt_str(": d->", 5)), F->fn_1438), rt_str(" = ", 3)), f_copy_code_364((*(P834)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1438); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1436 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->cases_cp_1436))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1434))), rt_str(": d.", 4)), F->fn_1438), rt_str(" = ", 3)), f_copy_code_364((*(P834)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1438); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->cases_eq_1437))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1434))), rt_str(": return ", 9)), f_eq_code_368((*(P834)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1438); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1438); b_; }))), rt_str(";", 1)); b_; }));
F->i_1434 = rt_add(rt_r_ichk(F->i_1434), ((rt_int)1LL));
F->f_1433 = (*(P834)rt_nil_check(F->f_1433)).next;
}
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" *d, ", 5)), F->c_1416), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P819)rt_nil_check(F->cases_as_1435))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1416), rt_str(" cp_", 4)), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1416), rt_str(" d = s; switch (s.tag) {", 24)), (((P819)rt_nil_check(F->cases_cp_1436))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" a, ", 4)), F->c_1416), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P819)rt_nil_check(F->cases_eq_1437))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1439 = NULL;
F->f_1439 = (*(P832)rt_nil_check(F->t_377)).fields;
F->conds_1440 = NULL;
F->conds_1440 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" *d, ", 5)), F->c_1416), rt_str(" s) {", 5)); b_; }));
while ((F->f_1439 != NULL)) {
F->fn_1441 = rt_str_copy(f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1439)).name))->all)));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1441); b_; }), (*(P834)rt_nil_check(F->f_1439)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1441); b_; }))); b_; }));
F->f_1439 = (*(P834)rt_nil_check(F->f_1439)).next;
}
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1416), rt_str(" cp_", 4)), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1416), rt_str(" d = s;", 7)); b_; }));
F->f_1439 = (*(P832)rt_nil_check(F->t_377)).fields;
while ((F->f_1439 != NULL)) {
F->fn_1442 = rt_str_copy(f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1439)).name))->all)));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1442), rt_str(" = ", 3)), f_copy_code_364((*(P834)rt_nil_check(F->f_1439)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1442); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1440 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1440))->all), rt_str(" && ", 4)), f_eq_code_368((*(P834)rt_nil_check(F->f_1439)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1442); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1442); b_; }))); b_; }));
F->f_1439 = (*(P834)rt_nil_check(F->f_1439)).next;
}
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1416), rt_str("(", 1)), F->c_1416), rt_str(" a, ", 4)), F->c_1416), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P819)rt_nil_check(F->conds_1440))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_380(P826 elems_379) {
  struct f_declare_body_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_379 = elems_379;
F->e_1443 = NULL;
F->e_1443 = F->elems_379;
while ((F->e_1443 != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)51LL)))) {
F->g_1444 = NULL;
F->g_1444 = f_new_sym_172((((rt_int)10LL)), (*(P826)rt_nil_check(F->e_1443)).name);
(*(P836)rt_nil_check(F->g_1444)).decl = F->e_1443;
(*(P836)rt_nil_check(F->g_1444)).level = rt_r_ichk(g_cur_level_879);
(*(P836)rt_nil_check(F->g_1444)).owner = g_func_sym_890;
(*(P836)rt_nil_check(F->g_1444)).gctx = g_fctx_880;
f_define_159(F->g_1444, rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).line));
}
F->e_1443 = (*(P826)rt_nil_check(F->e_1443)).next;
}
F->e_1443 = F->elems_379;
while ((F->e_1443 != NULL)) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).flag) == ((rt_int)0LL)))) {
f_manifest_const_382(F->e_1443);
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_390(F->e_1443);
} else if ((((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).flag) != ((rt_int)3LL)))) {
f_gen_expose_412(F->e_1443);
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)49LL)))) {
F->y_1445 = NULL;
F->y_1445 = f_new_sym_172((((rt_int)7LL)), (*(P826)rt_nil_check(F->e_1443)).name);
(*(P836)rt_nil_check(F->y_1445)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1445, rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).line));
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1445)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1445)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)42LL)))) {
F->y_1446 = NULL;
F->y_1446 = f_new_sym_172((((rt_int)6LL)), (*(P826)rt_nil_check(F->e_1443)).name);
(*(P836)rt_nil_check(F->y_1446)).st = (*(P826)rt_nil_check(F->e_1443)).a;
(*(P836)rt_nil_check(F->y_1446)).decl = F->e_1443;
f_define_159(F->y_1446, rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).line));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)44LL)))) {
F->y_1447 = NULL;
F->y_1447 = f_new_sym_172((((rt_int)5LL)), (*(P826)rt_nil_check(F->e_1443)).name);
F->t_1448 = NULL;
F->t_1448 = f_new_typ_174((((rt_int)8LL)));
(*(P832)rt_nil_check(F->t_1448)).name = (*(P826)rt_nil_check(F->e_1443)).name;
(*(P832)rt_nil_check(F->t_1448)).decl = F->e_1443;
(*(P836)rt_nil_check(F->y_1447)).t = F->t_1448;
f_define_159(F->y_1447, rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).line));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)43LL)))) {
F->y_1449 = NULL;
F->y_1449 = f_new_sym_172((((rt_int)5LL)), (*(P826)rt_nil_check(F->e_1443)).name);
(*(P836)rt_nil_check(F->y_1449)).st = (*(P826)rt_nil_check(F->e_1443)).a;
(*(P836)rt_nil_check(F->y_1449)).decl = F->e_1443;
f_define_159(F->y_1449, rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).line));
}
F->e_1443 = (*(P826)rt_nil_check(F->e_1443)).next;
}
F->e_1443 = F->elems_379;
while ((F->e_1443 != NULL)) {
if ((((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)50LL))))) {
F->y_1450 = NULL;
f_declare_subprogram_439(F->e_1443);
F->y_1450 = f_lookup_decl_156(F->e_1443);
(*(P836)rt_nil_check(F->y_1450)).home = F->elems_379;
f_normal_function_437(F->e_1443, F->y_1450);
}
F->e_1443 = (*(P826)rt_nil_check(F->e_1443)).next;
}
F->e_1443 = F->elems_379;
{
F->snap_1451 = NULL;
while ((F->e_1443 != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1451 == NULL)) {
{ P840 cell1452 = rt_alloc(sizeof *cell1452);
rt_int pv1453 = (((rt_int)4093LL));
cell1452->p_n = pv1453;
cell1452->all.lo = ((rt_int)0LL); cell1452->all.hi = pv1453;
cell1452->all.lo2 = cell1452->all.hi2 = 1;
cell1452->all.p = rt_alloc(sizeof(P836) * (size_t)(RT_CNT(cell1452->all)) + 1);
for (rt_int i1454 = 0; i1454 < (RT_CNT(cell1452->all)); i1454++) {
cell1452->all.p[i1454] = NULL;
}
F->snap_1451 = cell1452;
}
{ rt_int lo1456 = ((rt_int)0LL), hi1457 = (((rt_int)4093LL));
for (rt_int it1458 = lo1456; it1458 <= hi1457; it1458++) {
F->i_1455 = it1458;
(((P840)rt_nil_check(F->snap_1451))->all).p[(rt_index(F->i_1455, (((P840)rt_nil_check(F->snap_1451))->all).lo, (((P840)rt_nil_check(F->snap_1451))->all).hi) - (((P840)rt_nil_check(F->snap_1451))->all).lo)] = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(F->i_1455, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1459 = NULL;
F->g_1459 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all));
(*(P836)rt_nil_check(F->g_1459)).env = F->snap_1451;
}
}
F->e_1443 = (*(P826)rt_nil_check(F->e_1443)).next;
}
}
F->e_1443 = F->elems_379;
while ((F->e_1443 != NULL)) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->e_1443)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1460 = NULL;
F->y_1460 = f_lookup_decl_156(F->e_1443);
if (((((F->y_1460 != NULL) && ((*(P836)rt_nil_check(F->y_1460)).params != NULL)) && ((*(P838)rt_nil_check((*(P836)rt_nil_check(F->y_1460)).params)).next == NULL)) && ((rt_r_ichk((*(P832)rt_nil_check((*(P838)rt_nil_check((*(P836)rt_nil_check(F->y_1460)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P832)rt_nil_check((*(P838)rt_nil_check((*(P836)rt_nil_check(F->y_1460)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1443)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P832)rt_nil_check((*(P838)rt_nil_check((*(P836)rt_nil_check(F->y_1460)).params)).t)).initp = F->y_1460;
} else {
(*(P832)rt_nil_check((*(P838)rt_nil_check((*(P836)rt_nil_check(F->y_1460)).params)).t)).finalp = F->y_1460;
}
}
}
F->e_1443 = (*(P826)rt_nil_check(F->e_1443)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_382(P826 d_381) {
  struct f_manifest_const_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_381 = d_381;
F->ok_1461 = RT_R_EUNDEF;
F->v_1462 = NULL;
F->y_1463 = NULL;
F->t_1464 = NULL;
F->ctext_1465 = NULL;
if (((*(P826)rt_nil_check(F->d_381)).a != NULL)) {
if (((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->d_381)).a)).kind) != (((rt_int)70LL))) || ((*(P826)rt_nil_check((*(P826)rt_nil_check(F->d_381)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1462 = f_meval_342((*(P826)rt_nil_check(F->d_381)).b, &F->ok_1461);
if ((!rt_r_echk(F->ok_1461))) {
goto ret_;
}
{
F->saved_1466 = NULL;
F->saved_1466 = g_code_876;
g_code_876 = f_new_buffer_24();
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
{ rt_frame xf1467;
if (RT_TRY(xf1467)) {
F->ctext_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_658((*(P826)rt_nil_check(F->d_381)).b, NULL, &F->t_1464)), rt_str(")", 1)); b_; }));
RT_POP(xf1467);
} else {
RT_POP(xf1467);
int x1468 = rt_xcur;
if (0 || x1468 == ex_compile_error_1) {
F->ok_1461 = 0;
} else {
rt_raise(x1468);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
F->ok_1461 = (rt_r_echk(F->ok_1461) && ((*(P849)rt_nil_check(g_code_876)).head == NULL));
g_code_876 = F->saved_1466;
}
if (((!rt_r_echk(F->ok_1461)) || (((*(P826)rt_nil_check(F->d_381)).a != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->t_1464)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P845)rt_nil_check(F->v_1462)).kind) == (((rt_int)4LL)))) {
(*(P845)rt_nil_check(F->v_1462)).t = F->t_1464;
(*(P845)rt_nil_check(F->v_1462)).i = f_lit_index_253((*(P832)rt_nil_check(f_base_of_214(F->t_1464))).lits, &(((P819)rt_nil_check((*(P845)rt_nil_check(F->v_1462)).s))->all));
}
(*(P826)rt_nil_check(F->d_381)).flag = ((rt_int)1LL);
F->y_1463 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->d_381)).name);
(*(P836)rt_nil_check(F->y_1463)).t = F->t_1464;
(*(P836)rt_nil_check(F->y_1463)).c = f_new_cons_175();
(*(P836)rt_nil_check(F->y_1463)).mv = F->v_1462;
if ((rt_r_ichk((*(P845)rt_nil_check(F->v_1462)).kind) == (((rt_int)1LL)))) {
(*(P836)rt_nil_check(F->y_1463)).mvalue = rt_r_ichk((*(P845)rt_nil_check(F->v_1462)).i);
(*(P836)rt_nil_check(F->y_1463)).hasmv = 1;
}
(*(P836)rt_nil_check(F->y_1463)).ro_flag = 1;
(*(P836)rt_nil_check(F->y_1463)).access = F->ctext_1465;
f_define_159(F->y_1463, rt_r_ichk((*(P826)rt_nil_check(F->d_381)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_386(P826 d_383, rstr *name_384, int *ro_385) {
  struct f_exported_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_383 = d_383;
F->name_384 = name_384;
F->ro_385 = ro_385;
F->ro_385v = *F->ro_385;
F->p_1469 = NULL;
F->p_1469 = (*(P826)rt_nil_check(F->d_383)).a;
F->ro_385v = 0;
if ((rt_r_ichk((*(P826)rt_nil_check(F->d_383)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1469 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1469)).name))->all), (*F->name_384))) {
F->ro_385v = (rt_r_ichk((*(P826)rt_nil_check(F->p_1469)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1469 = (*(P826)rt_nil_check(F->p_1469)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_385v)) (*F->ro_385) = F->ro_385v;
  RT_FPOP();
  return F->result_;
}

static P836 f_copy_sym_388(P836 y_387) {
  struct f_copy_sym_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_387 = y_387;
F->z_1470 = NULL;
{ R837 *cell1471 = rt_alloc(sizeof(R837));
(*cell1471).name = NULL;
(*cell1471).t = NULL;
(*cell1471).c = NULL;
(*cell1471).access = NULL;
(*cell1471).cname = NULL;
(*cell1471).st = NULL;
(*cell1471).decl = NULL;
(*cell1471).params = NULL;
(*cell1471).result = NULL;
(*cell1471).members = NULL;
(*cell1471).mnext = NULL;
(*cell1471).binds = NULL;
(*cell1471).insts = NULL;
(*cell1471).env = NULL;
(*cell1471).chain = NULL;
(*cell1471).stack = NULL;
(*cell1471).owner = NULL;
(*cell1471).gctx = NULL;
(*cell1471).mv = NULL;
(*cell1471).reqs = NULL;
(*cell1471).home = NULL;
(*cell1471).capn = NULL;
(*cell1471).tbinds = NULL;
F->z_1470 = cell1471;
}
(*(P836)rt_nil_check(F->z_1470)).kind = rt_r_ichk((*(P836)rt_nil_check(F->y_387)).kind);
(*(P836)rt_nil_check(F->z_1470)).name = (*(P836)rt_nil_check(F->y_387)).name;
(*(P836)rt_nil_check(F->z_1470)).t = (*(P836)rt_nil_check(F->y_387)).t;
(*(P836)rt_nil_check(F->z_1470)).c = (*(P836)rt_nil_check(F->y_387)).c;
(*(P836)rt_nil_check(F->z_1470)).access = (*(P836)rt_nil_check(F->y_387)).access;
(*(P836)rt_nil_check(F->z_1470)).cname = (*(P836)rt_nil_check(F->y_387)).cname;
(*(P836)rt_nil_check(F->z_1470)).ro_flag = rt_r_echk((*(P836)rt_nil_check(F->y_387)).ro_flag);
(*(P836)rt_nil_check(F->z_1470)).mvalue = rt_r_ichk((*(P836)rt_nil_check(F->y_387)).mvalue);
(*(P836)rt_nil_check(F->z_1470)).hasmv = rt_r_echk((*(P836)rt_nil_check(F->y_387)).hasmv);
(*(P836)rt_nil_check(F->z_1470)).st = (*(P836)rt_nil_check(F->y_387)).st;
(*(P836)rt_nil_check(F->z_1470)).decl = (*(P836)rt_nil_check(F->y_387)).decl;
(*(P836)rt_nil_check(F->z_1470)).params = (*(P836)rt_nil_check(F->y_387)).params;
(*(P836)rt_nil_check(F->z_1470)).result = (*(P836)rt_nil_check(F->y_387)).result;
(*(P836)rt_nil_check(F->z_1470)).level = rt_r_ichk((*(P836)rt_nil_check(F->y_387)).level);
(*(P836)rt_nil_check(F->z_1470)).byref = rt_r_echk((*(P836)rt_nil_check(F->y_387)).byref);
(*(P836)rt_nil_check(F->z_1470)).members = (*(P836)rt_nil_check(F->y_387)).members;
(*(P836)rt_nil_check(F->z_1470)).env = (*(P836)rt_nil_check(F->y_387)).env;
F->result_ = F->z_1470;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_390(P826 d_389) {
  struct f_gen_capsule_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_389 = d_389;
F->y_1472 = NULL;
F->y_1472 = f_new_sym_172((((rt_int)8LL)), (*(P826)rt_nil_check(F->d_389)).name);
F->saved_1473 = NULL;
F->saved_1473 = g_suppress_896;
F->p_1474 = NULL;
F->p_1474 = (*(P826)rt_nil_check(F->d_389)).b;
F->tail_1475 = NULL;
(*(P836)rt_nil_check(F->y_1472)).decl = F->d_389;
while ((F->p_1474 != NULL)) {
F->pm_1476 = NULL;
{ R839 *cell1477 = rt_alloc(sizeof(R839));
(*cell1477).name = NULL;
(*cell1477).t = NULL;
(*cell1477).c = NULL;
(*cell1477).cfield = NULL;
(*cell1477).next = NULL;
F->pm_1476 = cell1477;
}
(*(P838)rt_nil_check(F->pm_1476)).name = (*(P826)rt_nil_check(F->p_1474)).name;
(*(P838)rt_nil_check(F->pm_1476)).mode = rt_r_ichk((*(P826)rt_nil_check(F->p_1474)).ival);
(*(P838)rt_nil_check(F->pm_1476)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1474)).a, &(*(P838)rt_nil_check(F->pm_1476)).c);
if ((F->tail_1475 == NULL)) {
(*(P836)rt_nil_check(F->y_1472)).params = F->pm_1476;
} else {
(*(P838)rt_nil_check(F->tail_1475)).next = F->pm_1476;
}
F->tail_1475 = F->pm_1476;
F->p_1474 = (*(P826)rt_nil_check(F->p_1474)).next;
}
if (((*(P826)rt_nil_check(F->d_389)).b == NULL)) {
g_suppress_896 = f_suppressing_446((*(P826)rt_nil_check(F->d_389)).prags);
f_elaborate_capsule_399(F->d_389, F->y_1472, NULL, F->d_389);
g_suppress_896 = F->saved_1473;
}
f_define_159(F->y_1472, rt_r_ichk((*(P826)rt_nil_check(F->d_389)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_394(P826 d_391, P826 args_392, rt_int line_393) {
  struct f_capsule_params_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->args_392 = args_392;
F->line_393 = line_393;
F->p_1478 = NULL;
F->p_1478 = (*(P826)rt_nil_check(F->d_391)).b;
F->a_1479 = NULL;
F->a_1479 = F->args_392;
F->t_1480 = NULL;
F->vt_1481 = NULL;
F->c_1482 = NULL;
while (((F->p_1478 != NULL) && (F->a_1479 != NULL))) {
F->t_1480 = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1478)).a, &F->c_1482);
if ((rt_r_ichk((*(P826)rt_nil_check(F->p_1478)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->p_1478)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->p_1478)).ival) == (((rt_int)4LL))))) {
F->lv_1483 = NULL;
F->lc_1484 = NULL;
F->ro_1485 = RT_R_EUNDEF;
F->y_1486 = NULL;
F->y_1486 = f_new_sym_172((((rt_int)1LL)), (*(P826)rt_nil_check(F->p_1478)).name);
f_lvalue_627(F->a_1479, &F->lv_1483, &F->vt_1481, &F->lc_1484, &F->ro_1485);
f_check_type_223(F->vt_1481, F->t_1480, F->line_393);
if ((rt_r_echk(F->ro_1485) && (rt_r_ichk((*(P826)rt_nil_check(F->p_1478)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1478)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_878)) {
F->f_1487 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1478)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_1480)), rt_str(" *", 2)), F->f_1487), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1487), rt_str(" = &", 4)), (((P819)rt_nil_check(F->lv_1483))->all)), rt_str(";", 1)); b_; }));
(*(P836)rt_nil_check(F->y_1486)).level = rt_r_ichk(g_cur_level_879);
(*(P836)rt_nil_check(F->y_1486)).access = f_mk_3(&F->f_1487);
(*(P836)rt_nil_check(F->y_1486)).byref = 1;
} else {
F->g_1488 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1478)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_1480)), rt_str(" *", 2)), F->g_1488), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_886, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1488), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1488, rt_str(" = &", 4)), (((P819)rt_nil_check(F->lv_1483))->all)), rt_str(";", 1)); b_; }));
(*(P836)rt_nil_check(F->y_1486)).level = ((rt_int)0LL);
(*(P836)rt_nil_check(F->y_1486)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1488), rt_str(")", 1)); b_; }));
}
(*(P836)rt_nil_check(F->y_1486)).t = F->t_1480;
(*(P836)rt_nil_check(F->y_1486)).c = F->lc_1484;
(*(P836)rt_nil_check(F->y_1486)).ro_flag = (rt_r_ichk((*(P826)rt_nil_check(F->p_1478)).ival) == (((rt_int)4LL)));
f_define_159(F->y_1486, F->line_393);
} else {
F->y_1489 = NULL;
F->y_1489 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_1478)).name);
F->v_1490 = rt_str_copy(f_gexpr_658(F->a_1479, F->t_1480, &F->vt_1481));
f_check_type_223(F->vt_1481, F->t_1480, F->line_393);
{
F->access_1491 = rt_str_copy(f_storage_455(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1478)).name))->all), F->t_1480));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1491, rt_str(" = ", 3)), f_copy_code_364(F->t_1480, &F->v_1490)), rt_str(";", 1)); b_; }));
f_bind_458(F->y_1489, &F->access_1491);
}
(*(P836)rt_nil_check(F->y_1489)).t = F->t_1480;
(*(P836)rt_nil_check(F->y_1489)).c = F->c_1482;
(*(P836)rt_nil_check(F->y_1489)).ro_flag = 1;
f_define_159(F->y_1489, F->line_393);
}
F->p_1478 = (*(P826)rt_nil_check(F->p_1478)).next;
F->a_1479 = (*(P826)rt_nil_check(F->a_1479)).next;
}
if (((F->p_1478 != NULL) || (F->a_1479 != NULL))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_391)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_399(P826 d_395, P836 y_396, P826 args_397, P826 owner_398) {
  struct f_elaborate_capsule_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_395 = d_395;
F->y_396 = y_396;
F->args_397 = args_397;
F->owner_398 = owner_398;
F->cr_1492 = NULL;
F->ctx_1493 = NULL;
F->saved_gotos_1494 = NULL;
F->m_1495 = NULL;
F->p_1496 = NULL;
F->p_1496 = (*(P826)rt_nil_check(F->d_395)).a;
F->ro_1497 = RT_R_EUNDEF;
{ R854 *cell1498 = rt_alloc(sizeof(R854));
(*cell1498).d = NULL;
(*cell1498).next = NULL;
F->cr_1492 = cell1498;
}
(*(P853)rt_nil_check(F->cr_1492)).d = F->d_395;
(*(P853)rt_nil_check(F->cr_1492)).next = g_caps_881;
g_caps_881 = F->cr_1492;
f_open_scope_168();
(*(P853)rt_nil_check(F->cr_1492)).depth = rt_r_ichk(g_depth_865);
if (((*(P826)rt_nil_check(F->d_395)).b != NULL)) {
f_capsule_params_394(F->d_395, F->args_397, rt_r_ichk((*(P826)rt_nil_check(F->owner_398)).line));
}
{ R844 *cell1499 = rt_alloc(sizeof(R844));
(*cell1499).imps = NULL;
(*cell1499).next = NULL;
F->ctx_1493 = cell1499;
}
(*(P843)rt_nil_check(F->ctx_1493)).depth = rt_r_ichk(g_depth_865);
(*(P843)rt_nil_check(F->ctx_1493)).imps = (*(P826)rt_nil_check(F->d_395)).d;
(*(P843)rt_nil_check(F->ctx_1493)).all_imp = (rt_r_ichk((*(P826)rt_nil_check(F->d_395)).flag) >= ((rt_int)2LL));
(*(P843)rt_nil_check(F->ctx_1493)).next = g_fctx_880;
g_fctx_880 = F->ctx_1493;
F->saved_gotos_1494 = g_gotos_900;
g_gotos_900 = NULL;
f_declare_labels_481((*(P826)rt_nil_check(F->d_395)).c);
f_declare_body_380((*(P826)rt_nil_check(F->d_395)).c);
f_capsule_body_488((*(P826)rt_nil_check(F->d_395)).c);
{
F->w_1500 = NULL;
{ R856 *cell1501 = rt_alloc(sizeof(R856));
(*cell1501).d = NULL;
(*cell1501).w = NULL;
(*cell1501).next = NULL;
F->w_1500 = cell1501;
}
(*(P855)rt_nil_check(F->w_1500)).d = F->owner_398;
(*(P855)rt_nil_check(F->w_1500)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_475((*(P826)rt_nil_check(F->d_395)).c); b_; }));
(*(P855)rt_nil_check(F->w_1500)).next = g_cap_waits_882;
g_cap_waits_882 = F->w_1500;
}
g_fctx_880 = (*(P843)rt_nil_check(g_fctx_880)).next;
F->m_1495 = g_scope_stack_866;
while (((F->m_1495 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).depth) == rt_r_ichk(g_depth_865)))) {
if (((((rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).kind) == (((rt_int)5LL))) && ((*(P836)rt_nil_check(F->m_1495)).t == NULL)) && ((*(P836)rt_nil_check(F->m_1495)).decl != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->m_1495)).decl)).kind) == (((rt_int)43LL))))) {
(*(P836)rt_nil_check(F->m_1495)).t = f_new_type_306(F->m_1495, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->d_395)).line)), &(*(P836)rt_nil_check(F->m_1495)).c);
} else if ((((rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).kind) == (((rt_int)6LL)))) && ((*(P836)rt_nil_check(F->m_1495)).t == NULL))) {
(*(P836)rt_nil_check(F->m_1495)).t = f_resolve_subtype_256((*(P836)rt_nil_check(F->m_1495)).st, &(*(P836)rt_nil_check(F->m_1495)).c);
} else if (((rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(F->m_1495)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_414((*(P836)rt_nil_check(F->m_1495)).t);
}
F->m_1495 = (*(P836)rt_nil_check(F->m_1495)).stack;
}
F->m_1495 = g_scope_stack_866;
while (((F->m_1495 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->m_1495)).depth) == rt_r_ichk(g_depth_865)))) {
if (f_exported_386(F->d_395, &(((P819)rt_nil_check((*(P836)rt_nil_check(F->m_1495)).name))->all), &F->ro_1497)) {
F->z_1502 = NULL;
F->z_1502 = f_copy_sym_388(F->m_1495);
if (rt_r_echk(F->ro_1497)) {
(*(P836)rt_nil_check(F->z_1502)).ro_flag = 1;
}
(*(P836)rt_nil_check(F->z_1502)).mnext = (*(P836)rt_nil_check(F->y_396)).members;
(*(P836)rt_nil_check(F->y_396)).members = F->z_1502;
}
F->m_1495 = (*(P836)rt_nil_check(F->m_1495)).stack;
}
while ((F->p_1496 != NULL)) {
if ((((!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1496)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1496)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1496)).name))->all)) == NULL) || ((*(P836)rt_nil_check(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1496)).name))->all)))).depth != rt_r_ichk(g_depth_865))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_395)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1496)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_395)).name))->all)); b_; }));
}
F->p_1496 = (*(P826)rt_nil_check(F->p_1496)).next;
}
f_close_scope_169();
g_caps_881 = (*(P853)rt_nil_check(g_caps_881)).next;
g_gotos_900 = F->saved_gotos_1494;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_402(P826 d_400, rstr *op_401) {
  struct f_exports_op_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_400 = d_400;
F->op_401 = op_401;
F->p_1503 = NULL;
if ((F->d_400 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1503 = (*(P826)rt_nil_check(F->d_400)).a;
while ((F->p_1503 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1503)).name))->all), (*F->op_401))) {
F->result_ = 1;
goto ret_;
}
F->p_1503 = (*(P826)rt_nil_check(F->p_1503)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P819 f_renamed_405(P826 d_403, P836 z_404) {
  struct f_renamed_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_403 = d_403;
F->z_404 = z_404;
F->r_1504 = NULL;
F->r_1504 = (*(P826)rt_nil_check(F->d_403)).c;
while ((F->r_1504 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->r_1504)).name))->all), (((P819)rt_nil_check((*(P836)rt_nil_check(F->z_404)).name))->all))) {
F->result_ = (*(P826)rt_nil_check((*(P826)rt_nil_check(F->r_1504)).a)).name;
goto ret_;
}
F->r_1504 = (*(P826)rt_nil_check(F->r_1504)).next;
}
F->result_ = (*(P836)rt_nil_check(F->z_404)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_pick_capsule_407(P826 d_406) {
  struct f_pick_capsule_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_406 = d_406;
F->y_1505 = NULL;
F->y_1505 = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(f_hash_152(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_406)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1506 = NULL;
F->fit_1507 = NULL;
F->n_1508 = RT_R_IUNDEF;
F->n_1508 = ((rt_int)0LL);
while ((F->y_1505 != NULL)) {
if ((rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1505)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_406)).name))->all)) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1505)).kind) == (((rt_int)8LL))))) {
F->n_1508 = rt_add(rt_r_ichk(F->n_1508), ((rt_int)1LL));
if ((F->first_1506 == NULL)) {
F->first_1506 = F->y_1505;
}
if (((F->fit_1507 == NULL) && f_fits_756(F->y_1505, (*(P826)rt_nil_check(F->d_406)).b))) {
F->fit_1507 = F->y_1505;
}
}
F->y_1505 = (*(P836)rt_nil_check(F->y_1505)).chain;
}
if ((rt_r_ichk(F->n_1508) > ((rt_int)1LL))) {
if ((F->fit_1507 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_406)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1507;
goto ret_;
}
if ((F->first_1506 == NULL)) {
F->result_ = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_406)).name))->all));
goto ret_;
}
F->result_ = F->first_1506;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_capsule_instance_410(P836 g_408, P826 d_409) {
  struct f_capsule_instance_410fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_408 = g_408;
F->d_409 = d_409;
F->gd_1509 = NULL;
F->gd_1509 = (*(P836)rt_nil_check(F->g_408)).decl;
F->pat_1510 = NULL;
F->pat_1510 = (*(P826)rt_nil_check(F->gd_1509)).b;
F->binds_1511 = NULL;
F->binds_1511 = f_tt_binds_585(F->gd_1509, (*(P826)rt_nil_check(F->pat_1510)).e, (*(P826)rt_nil_check(F->d_409)).e, rt_r_ichk((*(P826)rt_nil_check(F->d_409)).line));
F->inst_1512 = NULL;
F->inst_1512 = (*(P836)rt_nil_check(F->g_408)).insts;
F->saved_env_1513 = NULL;
F->saved_env_1513 = g_genv_863;
F->saved_gdepth_1514 = RT_R_IUNDEF;
F->saved_gdepth_1514 = rt_r_ichk(g_gdepth_895);
if (((rt_r_ichk((*(P826)rt_nil_check(F->d_409)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P826)rt_nil_check(F->d_409)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1512 != NULL)) {
if (f_same_binds_577((*(P836)rt_nil_check(F->inst_1512)).tbinds, F->binds_1511)) {
F->result_ = F->inst_1512;
goto ret_;
}
F->inst_1512 = (*(P836)rt_nil_check(F->inst_1512)).insts;
}
}
F->inst_1512 = f_new_sym_172((((rt_int)8LL)), (*(P826)rt_nil_check(F->pat_1510)).name);
(*(P836)rt_nil_check(F->inst_1512)).decl = F->pat_1510;
(*(P836)rt_nil_check(F->inst_1512)).tbinds = F->binds_1511;
f_open_scope_168();
{
F->b_1515 = NULL;
F->b_1515 = F->binds_1511;
while ((F->b_1515 != NULL)) {
f_define_159(F->b_1515, rt_r_ichk((*(P826)rt_nil_check(F->d_409)).line));
F->b_1515 = (*(P836)rt_nil_check(F->b_1515)).mnext;
}
}
g_genv_863 = (*(P836)rt_nil_check(F->g_408)).env;
g_gdepth_895 = rt_r_ichk(g_depth_865);
f_elaborate_capsule_399(F->pat_1510, F->inst_1512, (*(P826)rt_nil_check(F->d_409)).b, F->d_409);
g_genv_863 = F->saved_env_1513;
g_gdepth_895 = rt_r_ichk(F->saved_gdepth_1514);
f_close_scope_169();
if (((rt_r_ichk((*(P826)rt_nil_check(F->d_409)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P826)rt_nil_check(F->d_409)).flag) != ((rt_int)3LL)))) {
(*(P836)rt_nil_check(F->inst_1512)).insts = (*(P836)rt_nil_check(F->g_408)).insts;
(*(P836)rt_nil_check(F->g_408)).insts = F->inst_1512;
}
F->result_ = F->inst_1512;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_412(P826 d_411) {
  struct f_gen_expose_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_411 = d_411;
F->y_1516 = NULL;
F->y_1516 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all));
F->m_1517 = NULL;
F->p_1518 = NULL;
F->p_1518 = (*(P826)rt_nil_check(F->d_411)).a;
F->r_1519 = NULL;
F->r_1519 = (*(P826)rt_nil_check(F->d_411)).c;
if ((((F->y_1516 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1516)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1516)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1516 = f_capsule_instance_410(F->y_1516, F->d_411);
} else {
F->y_1516 = f_pick_capsule_407(F->d_411);
if (((F->y_1516 == NULL) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1516)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P826)rt_nil_check(F->d_411)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P836)rt_nil_check(F->y_1516)).tbinds != NULL) || (((*(P836)rt_nil_check(F->y_1516)).decl != NULL) && ((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1516)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->d_411)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P826)rt_nil_check(F->d_411)).flag) == ((rt_int)3LL)))) {
F->inst_1520 = NULL;
F->inst_1520 = f_new_sym_172((((rt_int)8LL)), (*(P836)rt_nil_check(F->y_1516)).name);
(*(P836)rt_nil_check(F->inst_1520)).decl = (*(P836)rt_nil_check(F->y_1516)).decl;
f_elaborate_capsule_399((*(P836)rt_nil_check(F->y_1516)).decl, F->inst_1520, (*(P826)rt_nil_check(F->d_411)).b, F->d_411);
F->y_1516 = F->inst_1520;
} else if ((((*(P836)rt_nil_check(F->y_1516)).decl != NULL) && ((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_1516)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P826)rt_nil_check(F->d_411)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1519 != NULL)) {
F->found_1521 = RT_R_EUNDEF;
F->found_1521 = 0;
F->m_1517 = (*(P836)rt_nil_check(F->y_1516)).members;
while ((F->m_1517 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->m_1517)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->r_1519)).name))->all))) {
F->found_1521 = 1;
}
F->m_1517 = (*(P836)rt_nil_check(F->m_1517)).mnext;
}
if ((!rt_r_echk(F->found_1521))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->r_1519)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all)); b_; }));
}
F->r_1519 = (*(P826)rt_nil_check(F->r_1519)).next;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->d_411)).ival) == ((rt_int)1LL))) {
F->m_1517 = (*(P836)rt_nil_check(F->y_1516)).members;
while ((F->m_1517 != NULL)) {
F->z_1522 = NULL;
F->z_1522 = f_copy_sym_388(F->m_1517);
(*(P836)rt_nil_check(F->z_1522)).name = f_renamed_405(F->d_411, F->m_1517);
f_define_159(F->z_1522, rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line));
F->m_1517 = (*(P836)rt_nil_check(F->m_1517)).mnext;
}
goto ret_;
}
while ((F->p_1518 != NULL)) {
F->found_1523 = RT_R_EUNDEF;
F->found_1523 = 0;
F->m_1517 = (*(P836)rt_nil_check(F->y_1516)).members;
while ((F->m_1517 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->m_1517)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1518)).name))->all))) {
F->z_1524 = NULL;
F->z_1524 = f_copy_sym_388(F->m_1517);
if ((rt_r_ichk((*(P826)rt_nil_check(F->p_1518)).ival) == ((rt_int)1LL))) {
(*(P836)rt_nil_check(F->z_1524)).ro_flag = 1;
}
(*(P836)rt_nil_check(F->z_1524)).name = f_renamed_405(F->d_411, F->m_1517);
f_define_159(F->z_1524, rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line));
F->found_1523 = 1;
}
F->m_1517 = (*(P836)rt_nil_check(F->m_1517)).mnext;
}
if ((!rt_r_echk(F->found_1523))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1518)).name))->all), rt_str(" is not exported by ", 20)), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_411)).name))->all)); b_; }));
}
F->p_1518 = (*(P826)rt_nil_check(F->p_1518)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_414(P832 t_413) {
  struct f_finish_ptr_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_413 = t_413;
F->d_1525 = NULL;
F->d_1525 = (*(P832)rt_nil_check(F->t_413)).decl;
F->p_1526 = NULL;
F->c_1527 = NULL;
F->dummy_1528 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1528, rt_str(" ", 1));
if (((*(P832)rt_nil_check(F->t_413)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1530 = ((rt_int)1LL), hi1531 = ((rt_int)2LL);
for (rt_int it1532 = lo1530; it1532 <= hi1531; it1532++) {
F->pass_1529 = it1532;
if ((F->pass_1529 == ((rt_int)1LL))) {
F->p_1526 = (*(P826)rt_nil_check(F->d_1525)).d;
} else {
F->p_1526 = (*(P826)rt_nil_check(F->d_1525)).b;
}
while ((F->p_1526 != NULL)) {
F->y_1533 = NULL;
F->y_1533 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_1526)).name);
F->pc_1534 = NULL;
(*(P836)rt_nil_check(F->y_1533)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1526)).a, &F->pc_1534);
(*(P836)rt_nil_check(F->y_1533)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1533, rt_r_ichk((*(P826)rt_nil_check(F->d_1525)).line));
F->p_1526 = (*(P826)rt_nil_check(F->p_1526)).next;
}
}
}
(*(P832)rt_nil_check(F->t_413)).target = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_1525)).a, &F->c_1527);
f_close_scope_169();
(*rt_str_at(&F->dummy_1528, ((rt_int)1LL))) = rt_str_get(f_ctype_225(F->t_413), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1528, ((rt_int)1LL))) = rt_str_get(f_ctype_225((*(P832)rt_nil_check(F->t_413)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P826 f_ptr_args_416(P828 c_415) {
  struct f_ptr_args_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_415 = c_415;
if ((F->c_415 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P828)rt_nil_check(F->c_415)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_421(P826 formals_417, P826 actuals_418, rstr *cell_419, rt_int line_420) {
  struct f_bind_ptr_params_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_417 = formals_417;
F->actuals_418 = actuals_418;
F->cell_419 = cell_419;
F->line_420 = line_420;
F->p_1535 = NULL;
F->p_1535 = F->formals_417;
F->a_1536 = NULL;
F->a_1536 = F->actuals_418;
F->vt_1537 = NULL;
if ((f_list_len_67(F->formals_417) != f_list_len_67(F->actuals_418))) {
f_fail_23(F->line_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_417))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1535 != NULL)) {
F->pc_1538 = NULL;
F->y_1539 = NULL;
F->y_1539 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_1535)).name);
(*(P836)rt_nil_check(F->y_1539)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1535)).a, &F->pc_1538);
{
F->v_1540 = rt_str_copy(f_gexpr_658(F->a_1536, (*(P836)rt_nil_check(F->y_1539)).t, &F->vt_1537));
F->pv_1541 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_223(F->vt_1537, (*(P836)rt_nil_check(F->y_1539)).t, F->line_420);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P836)rt_nil_check(F->y_1539)).t), rt_str(" ", 1)), F->pv_1541), rt_str(" = ", 3)), f_checked_204((*(P836)rt_nil_check(F->y_1539)).t, F->pc_1538, &F->v_1540)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_419), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_419), rt_str("->p_", 4)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1535)).name))->all))), rt_str(" = ", 3)), F->pv_1541), rt_str(";", 1)); b_; }));
}
(*(P836)rt_nil_check(F->y_1539)).access = f_mk_3(&F->pv_1541);
}
f_define_159(F->y_1539, F->line_420);
F->p_1535 = (*(P826)rt_nil_check(F->p_1535)).next;
F->a_1536 = (*(P826)rt_nil_check(F->a_1536)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_426(P826 s_422, rstr *lv_423, P832 t_424, P828 c_425) {
  struct f_alloc_cell_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_422 = s_422;
F->lv_423 = lv_423;
F->t_424 = t_424;
F->c_425 = c_425;
F->d_1542 = NULL;
F->d_1542 = (*(P832)rt_nil_check(F->t_424)).decl;
F->tc_1543 = NULL;
F->vt_1544 = NULL;
F->pt_1545 = rt_str_copy(f_ctype_225(F->t_424));
F->cell_1546 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315((*(P832)rt_nil_check(F->t_424)).target)) {
F->fn_1547 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_887 = 1;
g_uses_findyn_889 = 1;
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1547), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1547), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P819)rt_nil_check((*(P836)rt_nil_check(g_func_sym_890)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1545), rt_str(")cell_)->all)", 13)); b_; }), (*(P832)rt_nil_check(F->t_424)).target)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1545), rt_str(" ", 1)), F->cell_1546), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1546), rt_str(", ", 2)), F->fn_1547), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1545), rt_str(" ", 1)), F->cell_1546), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1546), rt_str(", ", 2)), F->fn_1547), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1545), rt_str(" ", 1)), F->cell_1546), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1546), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_421((*(P826)rt_nil_check(F->d_1542)).d, f_ptr_args_416(F->c_425), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P826)rt_nil_check(F->s_422)).line));
f_bind_ptr_params_421((*(P826)rt_nil_check(F->d_1542)).b, (*(P826)rt_nil_check(F->s_422)).b, &F->cell_1546, rt_r_ichk((*(P826)rt_nil_check(F->s_422)).line));
F->vt_1544 = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_1542)).a, &F->tc_1543);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1546, rt_str("->all", 5)); b_; }), (*(P832)rt_nil_check(F->t_424)).target, F->tc_1543);
f_close_scope_169();
if (((*(P826)rt_nil_check(F->s_422)).c != NULL)) {
F->v_1548 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->s_422)).c, (*(P832)rt_nil_check(F->t_424)).target, F->tc_1543, &F->vt_1544));
f_check_type_223(F->vt_1544, (*(P832)rt_nil_check(F->t_424)).target, rt_r_ichk((*(P826)rt_nil_check(F->s_422)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1546, rt_str("->all", 5)); b_; }), (*(P832)rt_nil_check(F->t_424)).target, &F->v_1548, F->tc_1543); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_423), rt_str(" = ", 3)), F->cell_1546), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P828 f_freeze_args_430(P828 c_427, P832 t_428, rt_int line_429) {
  struct f_freeze_args_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_427 = c_427;
F->t_428 = t_428;
F->line_429 = line_429;
F->r_1549 = NULL;
F->r_1549 = f_copy_cons_197(F->c_427);
F->p_1550 = NULL;
F->p_1550 = (*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_428)).decl)).d;
F->a_1551 = NULL;
F->a_1551 = (*(P828)rt_nil_check(F->c_427)).args;
F->head_1552 = NULL;
F->tail_1553 = NULL;
F->saved_1554 = NULL;
F->saved_1554 = g_st_field_884;
if ((f_list_len_67(F->p_1550) != f_list_len_67(F->a_1551))) {
f_fail_23(F->line_429, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P832)rt_nil_check(F->t_428)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1550))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1551 != NULL)) {
F->pc_1555 = NULL;
F->vt_1556 = NULL;
F->pt_1557 = NULL;
F->pt_1557 = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1550)).a, &F->pc_1555);
F->nm_1558 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1559 = NULL;
F->y_1559 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1558));
F->n_1560 = NULL;
F->n_1560 = f_nn_61((((rt_int)7LL)), F->line_429);
F->v_1561 = rt_str_copy(f_gexpr_658(F->a_1551, F->pt_1557, &F->vt_1556));
F->access_1562 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225(F->pt_1557); b_; })));
f_check_type_223(F->vt_1556, F->pt_1557, F->line_429);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1562, rt_str(" = ", 3)), f_checked_204(F->pt_1557, F->pc_1555, &F->v_1561)), rt_str(";", 1)); b_; }));
(*(P836)rt_nil_check(F->y_1559)).t = F->pt_1557;
(*(P836)rt_nil_check(F->y_1559)).ro_flag = 1;
f_bind_458(F->y_1559, &F->access_1562);
f_define_159(F->y_1559, F->line_429);
(*(P826)rt_nil_check(F->n_1560)).name = f_mk_3(&F->nm_1558);
f_append_65(&F->head_1552, &F->tail_1553, F->n_1560);
F->a_1551 = (*(P826)rt_nil_check(F->a_1551)).next;
F->p_1550 = (*(P826)rt_nil_check(F->p_1550)).next;
}
(*(P828)rt_nil_check(F->r_1549)).args = F->head_1552;
g_st_field_884 = F->saved_1554;
F->result_ = F->r_1549;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_434(P832 t_431, P828 c_432, P826 src_433) {
  struct f_ptr_subtype_check_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_431 = t_431;
F->c_432 = c_432;
F->src_433 = src_433;
F->lv_1563 = NULL;
F->st_1564 = NULL;
F->sc_1565 = NULL;
F->ro_1566 = RT_R_EUNDEF;
F->cond_1567 = NULL;
F->cond_1567 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1568 = NULL;
F->b_1569 = NULL;
F->at_1570 = NULL;
F->bt_1571 = NULL;
if ((((((rt_r_ichk((*(P832)rt_nil_check(F->t_431)).kind) != (((rt_int)8LL))) || (F->c_432 == NULL)) || ((*(P828)rt_nil_check(F->c_432)).args == NULL)) || (F->src_433 == NULL)) || (!f_is_lvalue_621(F->src_433)))) {
goto ret_;
}
f_lvalue_627(F->src_433, &F->lv_1563, &F->st_1564, &F->sc_1565, &F->ro_1566);
if (((F->sc_1565 == NULL) || ((*(P828)rt_nil_check(F->sc_1565)).args == NULL))) {
goto ret_;
}
F->a_1568 = (*(P828)rt_nil_check(F->c_432)).args;
F->b_1569 = (*(P828)rt_nil_check(F->sc_1565)).args;
while (((F->a_1568 != NULL) && (F->b_1569 != NULL))) {
F->x_1572 = rt_str_copy(f_gexpr_658(F->a_1568, NULL, &F->at_1570));
F->y_1573 = rt_str_copy(f_gexpr_658(F->b_1569, F->at_1570, &F->bt_1571));
F->cond_1567 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->cond_1567))->all), rt_str(" || !", 5)), f_eq_code_368(F->at_1570, &F->x_1572, &F->y_1573)); b_; }));
F->a_1568 = (*(P826)rt_nil_check(F->a_1568)).next;
F->b_1569 = (*(P826)rt_nil_check(F->b_1569)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P819)rt_nil_check(F->cond_1567))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_437(P826 d_435, P836 y_436) {
  struct f_normal_function_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_435 = d_435;
F->y_436 = y_436;
F->p_1574 = NULL;
F->p_1574 = (*(P836)rt_nil_check(F->y_436)).params;
F->imp_1575 = NULL;
F->imp_1575 = (*(P826)rt_nil_check(F->d_435)).d;
if (((rt_r_ichk((*(P826)rt_nil_check(F->d_435)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P826)rt_nil_check(F->d_435)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1574 != NULL)) {
if (((rt_r_ichk((*(P838)rt_nil_check(F->p_1574)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P838)rt_nil_check(F->p_1574)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_435)).name))->all)); b_; }));
}
F->p_1574 = (*(P838)rt_nil_check(F->p_1574)).next;
}
if ((((*(P826)rt_nil_check(F->d_435)).d == NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->d_435)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_881 == NULL) || (rt_r_ichk(g_depth_865) != rt_r_ichk((*(P853)rt_nil_check(g_caps_881)).depth)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_435)).name))->all)); b_; }));
}
while ((F->imp_1575 != NULL)) {
F->ro_1576 = RT_R_EUNDEF;
F->z_1577 = NULL;
F->z_1577 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->imp_1575)).name))->all));
if ((((F->z_1577 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->z_1577)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P836)rt_nil_check(F->z_1577)).depth) != rt_r_ichk((*(P853)rt_nil_check(g_caps_881)).depth)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P819)rt_nil_check((*(P826)rt_nil_check(F->imp_1575)).name))->all)); b_; }));
}
if ((f_exported_386((*(P853)rt_nil_check(g_caps_881)).d, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->imp_1575)).name))->all), &F->ro_1576) && (rt_r_ichk((*(P826)rt_nil_check((*(P853)rt_nil_check(g_caps_881)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P819)rt_nil_check((*(P826)rt_nil_check(F->imp_1575)).name))->all)); b_; }));
}
F->imp_1575 = (*(P826)rt_nil_check(F->imp_1575)).next;
}
(*(P836)rt_nil_check(F->y_436)).capn = (*(P853)rt_nil_check(g_caps_881)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_439(P826 d_438) {
  struct f_declare_subprogram_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_438 = d_438;
f_define_159(f_build_subprogram_441(F->d_438), rt_r_ichk((*(P826)rt_nil_check(F->d_438)).line));
ret_:
  RT_FPOP();
  return;
}

static P836 f_build_subprogram_441(P826 d_440) {
  struct f_build_subprogram_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_440 = d_440;
F->y_1578 = NULL;
F->p_1579 = NULL;
F->p_1579 = (*(P826)rt_nil_check(F->d_440)).a;
F->tail_1580 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->d_440)).kind) == (((rt_int)46LL)))) {
F->y_1578 = f_new_sym_172((((rt_int)3LL)), (*(P826)rt_nil_check(F->d_440)).name);
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->d_440)).kind) == (((rt_int)50LL)))) {
F->y_1578 = f_new_sym_172((((rt_int)9LL)), (*(P826)rt_nil_check(F->d_440)).name);
} else {
F->y_1578 = f_new_sym_172((((rt_int)4LL)), (*(P826)rt_nil_check(F->d_440)).name);
}
while ((F->p_1579 != NULL)) {
F->pm_1581 = NULL;
if (((rt_r_ichk((*(P826)rt_nil_check(F->d_440)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->p_1579)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_440)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R839 *cell1582 = rt_alloc(sizeof(R839));
(*cell1582).name = NULL;
(*cell1582).t = NULL;
(*cell1582).c = NULL;
(*cell1582).cfield = NULL;
(*cell1582).next = NULL;
F->pm_1581 = cell1582;
}
(*(P838)rt_nil_check(F->pm_1581)).name = (*(P826)rt_nil_check(F->p_1579)).name;
(*(P838)rt_nil_check(F->pm_1581)).mode = rt_r_ichk((*(P826)rt_nil_check(F->p_1579)).ival);
(*(P838)rt_nil_check(F->pm_1581)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1579)).a, &(*(P838)rt_nil_check(F->pm_1581)).c);
(*(P838)rt_nil_check(F->pm_1581)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1579)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1580 == NULL)) {
(*(P836)rt_nil_check(F->y_1578)).params = F->pm_1581;
} else {
(*(P838)rt_nil_check(F->tail_1580)).next = F->pm_1581;
}
F->tail_1580 = F->pm_1581;
F->p_1579 = (*(P826)rt_nil_check(F->p_1579)).next;
}
(*(P836)rt_nil_check(F->y_1578)).result = g_ty_void_911;
if (((*(P826)rt_nil_check(F->d_440)).b != NULL)) {
F->rc_1583 = NULL;
F->pm_1584 = NULL;
F->pm_1584 = (*(P836)rt_nil_check(F->y_1578)).params;
F->saved_1585 = NULL;
F->saved_1585 = g_code_876;
g_code_876 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1584 != NULL)) {
F->z_1586 = NULL;
F->z_1586 = f_new_sym_172((((rt_int)2LL)), (*(P838)rt_nil_check(F->pm_1584)).name);
(*(P836)rt_nil_check(F->z_1586)).t = (*(P838)rt_nil_check(F->pm_1584)).t;
(*(P836)rt_nil_check(F->z_1586)).c = (*(P838)rt_nil_check(F->pm_1584)).c;
(*(P836)rt_nil_check(F->z_1586)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1586, rt_r_ichk((*(P826)rt_nil_check(F->d_440)).line));
F->pm_1584 = (*(P838)rt_nil_check(F->pm_1584)).next;
}
(*(P836)rt_nil_check(F->y_1578)).result = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_440)).b, &F->rc_1583);
f_close_scope_169();
g_code_876 = F->saved_1585;
}
(*(P836)rt_nil_check(F->y_1578)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_613(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_440)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P836)rt_nil_check(F->y_1578)).decl = F->d_440;
(*(P836)rt_nil_check(F->y_1578)).level = rt_r_ichk(g_cur_level_879);
if ((rt_r_ichk((*(P826)rt_nil_check(F->d_440)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1578)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1578;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_444(P819 pr_442, rstr *p_443) {
  struct f_has_pragmat_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_442 = pr_442;
F->p_443 = p_443;
if ((F->pr_442 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1588 = ((rt_int)1LL), hi1589 = rt_sub(((rt_int)(((((P819)rt_nil_check(F->pr_442))->all)).len)), ((rt_int)(((*F->p_443)).len)));
for (rt_int it1590 = lo1588; it1590 <= hi1589; it1590++) {
F->i_1587 = it1590;
if (((rt_str_eq(rt_str_slice((((P819)rt_nil_check(F->pr_442))->all), F->i_1587, rt_sub(rt_add(F->i_1587, ((rt_int)(((*F->p_443)).len))), ((rt_int)1LL))), (*F->p_443)) && (rt_r_echk(rt_str_get((((P819)rt_nil_check(F->pr_442))->all), rt_add(F->i_1587, ((rt_int)(((*F->p_443)).len))))) == 59)) && ((F->i_1587 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P819)rt_nil_check(F->pr_442))->all), rt_sub(F->i_1587, ((rt_int)1LL)))) == 59)))) {
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

static P819 f_suppressing_446(P819 pr_445) {
  struct f_suppressing_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_445 = pr_445;
F->r_1591 = NULL;
F->r_1591 = g_suppress_896;
F->i_1592 = RT_R_IUNDEF;
F->i_1592 = ((rt_int)1LL);
if ((F->pr_445 == NULL)) {
F->result_ = F->r_1591;
goto ret_;
}
if ((F->r_1591 == NULL)) {
F->r_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1592), ((rt_int)9LL)) <= ((rt_int)(((((P819)rt_nil_check(F->pr_445))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P819)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->i_1592), rt_add(rt_r_ichk(F->i_1592), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1593 = RT_R_IUNDEF;
F->j_1593 = rt_add(rt_r_ichk(F->i_1592), ((rt_int)9LL));
F->k_1594 = RT_R_IUNDEF;
F->k_1594 = rt_r_ichk(F->j_1593);
while ((rt_r_echk(rt_str_get((((P819)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->k_1594))) != 41)) {
if ((rt_r_echk(rt_str_get((((P819)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->k_1594))) == 44)) {
F->r_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1591))->all), rt_str_slice((((P819)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->j_1593), rt_sub(rt_r_ichk(F->k_1594), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1593 = rt_add(rt_r_ichk(F->k_1594), ((rt_int)1LL));
}
F->k_1594 = rt_add(rt_r_ichk(F->k_1594), ((rt_int)1LL));
}
F->r_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1591))->all), rt_str_slice((((P819)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->j_1593), rt_sub(rt_r_ichk(F->k_1594), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1592 = rt_r_ichk(F->k_1594);
}
F->i_1592 = rt_add(rt_r_ichk(F->i_1592), ((rt_int)1LL));
}
F->result_ = F->r_1591;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_448(rstr *x_447) {
  struct f_suppressed_448fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_447 = x_447;
F->w_1595 = rt_str_new(rt_add(((rt_int)(((*F->x_447)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1595, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_447)), rt_str(" ", 1)));
if ((g_suppress_896 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1597 = ((rt_int)1LL), hi1598 = rt_add(rt_sub(((rt_int)(((((P819)rt_nil_check(g_suppress_896))->all)).len)), ((rt_int)((F->w_1595).len))), ((rt_int)1LL));
for (rt_int it1599 = lo1597; it1599 <= hi1598; it1599++) {
F->i_1596 = it1599;
if (rt_str_eq(rt_str_slice((((P819)rt_nil_check(g_suppress_896))->all), F->i_1596, rt_sub(rt_add(F->i_1596, ((rt_int)((F->w_1595).len))), ((rt_int)1LL))), F->w_1595)) {
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

static void f_element_450(P826 e_449) {
  struct f_element_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_449 = e_449;
F->saved_1600 = NULL;
F->saved_1600 = g_suppress_896;
g_suppress_896 = f_suppressing_446((*(P826)rt_nil_check(F->e_449)).prags);
f_element1_452(F->e_449);
g_suppress_896 = F->saved_1600;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_452(P826 e_451) {
  struct f_element1_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_451 = e_451;
F->k_1601 = RT_R_IUNDEF;
F->k_1601 = rt_r_ichk((*(P826)rt_nil_check(F->e_451)).kind);
if (((rt_r_ichk(F->k_1601) == (((rt_int)48LL))) && ((rt_r_ichk((*(P826)rt_nil_check(F->e_451)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P826)rt_nil_check(F->e_451)).flag) == ((rt_int)3LL))))) {
f_gen_expose_412(F->e_451);
} else if ((((rt_r_ichk(F->k_1601) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1601) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1601) == (((rt_int)50LL))))) {
f_subprogram_468(F->e_451);
} else if ((rt_r_ichk(F->k_1601) == (((rt_int)51LL)))) {
F->g_1602 = NULL;
F->g_1602 = f_lookup_decl_156(F->e_451);
if ((F->g_1602 != NULL)) {
{ P840 cell1603 = rt_alloc(sizeof *cell1603);
rt_int pv1604 = (((rt_int)4093LL));
cell1603->p_n = pv1604;
cell1603->all.lo = ((rt_int)0LL); cell1603->all.hi = pv1604;
cell1603->all.lo2 = cell1603->all.hi2 = 1;
cell1603->all.p = rt_alloc(sizeof(P836) * (size_t)(RT_CNT(cell1603->all)) + 1);
for (rt_int i1605 = 0; i1605 < (RT_CNT(cell1603->all)); i1605++) {
cell1603->all.p[i1605] = NULL;
}
(*(P836)rt_nil_check(F->g_1602)).env = cell1603;
}
{ rt_int lo1607 = ((rt_int)0LL), hi1608 = (((rt_int)4093LL));
for (rt_int it1609 = lo1607; it1609 <= hi1608; it1609++) {
F->i_1606 = it1609;
(((P840)rt_nil_check((*(P836)rt_nil_check(F->g_1602)).env))->all).p[(rt_index(F->i_1606, (((P840)rt_nil_check((*(P836)rt_nil_check(F->g_1602)).env))->all).lo, (((P840)rt_nil_check((*(P836)rt_nil_check(F->g_1602)).env))->all).hi) - (((P840)rt_nil_check((*(P836)rt_nil_check(F->g_1602)).env))->all).lo)] = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(F->i_1606, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1601) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1601) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1601) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1601) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1601) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1601) == (((rt_int)44LL)))) {
f_finish_ptr_414((*(P836)rt_nil_check(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_451)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1601) == (((rt_int)40LL)))) {
f_var_decl_460(F->e_451);
} else if (((rt_r_ichk(F->k_1601) == (((rt_int)41LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_451)).flag) == ((rt_int)0LL)))) {
f_const_decl_466(F->e_451);
} else if ((rt_r_ichk(F->k_1601) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1601) == (((rt_int)33LL)))) {
F->t_1610 = NULL;
F->c_1611 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_451)).a, g_ty_bool_907, &F->t_1610));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1611), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_503(F->e_451);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_455(rstr *name_453, P832 t_454) {
  struct f_storage_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_453 = name_453;
F->t_454 = t_454;
if ((!rt_r_echk(g_in_func_878))) {
F->g_1612 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_453))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_454)), rt_str(" ", 1)), F->g_1612), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_886, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1612), rt_str(");", 2)); b_; }));
g_st_field_884 = f_mk_3(&F->g_1612);
F->result_ = F->g_1612;
goto ret_;
}
{
F->f_1613 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_453)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_454)), rt_str(" ", 1)), F->f_1613), rt_str(";", 1)); b_; }));
g_st_field_884 = f_mk_3(&F->f_1613);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1613);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_458(P836 y_456, rstr *access_457) {
  struct f_bind_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_456 = y_456;
F->access_457 = access_457;
if (rt_r_echk(g_in_func_878)) {
(*(P836)rt_nil_check(F->y_456)).level = rt_r_ichk(g_cur_level_879);
(*(P836)rt_nil_check(F->y_456)).access = g_st_field_884;
} else {
(*(P836)rt_nil_check(F->y_456)).level = ((rt_int)0LL);
(*(P836)rt_nil_check(F->y_456)).access = f_mk_3(&(*F->access_457));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_460(P826 d_459) {
  struct f_var_decl_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->c_1614 = NULL;
F->t_1615 = NULL;
F->t_1615 = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_459)).a, &F->c_1614);
F->y_1616 = NULL;
F->y_1616 = f_new_sym_172((((rt_int)1LL)), (*(P826)rt_nil_check(F->d_459)).name);
F->access_1617 = rt_str_copy(f_storage_455(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_459)).name))->all), F->t_1615));
F->c_1614 = f_freeze_200(F->c_1614, F->t_1615);
if ((((rt_r_ichk((*(P832)rt_nil_check(F->t_1615)).kind) == (((rt_int)8LL))) && (F->c_1614 != NULL)) && ((*(P828)rt_nil_check(F->c_1614)).args != NULL))) {
F->c_1614 = f_freeze_args_430(F->c_1614, F->t_1615, rt_r_ichk((*(P826)rt_nil_check(F->d_459)).line));
}
g_mark_uninit_898 = 1;
f_init_storage_310(&F->access_1617, F->t_1615, F->c_1614);
g_mark_uninit_898 = 0;
if ((rt_r_ichk((*(P826)rt_nil_check(F->d_459)).ival) == ((rt_int)1LL))) {
F->it_1618 = NULL;
F->n_1619 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->d_459)).c, g_ty_int_906, &F->it_1618));
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1615)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_459)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_212((*(P832)rt_nil_check(F->t_1615)).elem, g_ty_ascii_909)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1617), rt_str(", ", 2)), F->n_1619), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1617), rt_str(", ", 2)), F->n_1619), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->d_459)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->d_459)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P826)rt_nil_check(F->d_459)).b != NULL)) {
F->vt_1620 = NULL;
F->v_1621 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->d_459)).b, F->t_1615, F->c_1614, &F->vt_1620));
f_check_type_223(F->vt_1620, F->t_1615, rt_r_ichk((*(P826)rt_nil_check(F->d_459)).line));
f_ptr_subtype_check_434(F->t_1615, F->c_1614, (*(P826)rt_nil_check(F->d_459)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&F->access_1617, F->t_1615, &F->v_1621, F->c_1614); b_; }));
}
(*(P836)rt_nil_check(F->y_1616)).t = F->t_1615;
(*(P836)rt_nil_check(F->y_1616)).c = F->c_1614;
f_bind_458(F->y_1616, &F->access_1617);
f_define_159(F->y_1616, rt_r_ichk((*(P826)rt_nil_check(F->d_459)).line));
if (f_needs_fin_315(F->t_1615)) {
f_open_fin_462(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1617, F->t_1615); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_462(rstr *fc_461) {
  struct f_open_fin_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_461 = fc_461;
F->f_1622 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1623 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1622), rt_str("; if (RT_TRY(", 13)), F->f_1622), rt_str(")) {", 4)); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1622), rt_str("); ", 3)), (*F->fc_461)); b_; }));
{ R831 *cell1624 = rt_alloc(sizeof(R831));
(*cell1624).s = NULL;
(*cell1624).next = NULL;
F->l_1623 = cell1624;
}
(*(P830)rt_nil_check(F->l_1623)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1622), rt_str("); ", 3)), (*F->fc_461)), rt_str(" } else { RT_POP(", 17)), F->f_1622), rt_str("); ", 3)), (*F->fc_461)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P830)rt_nil_check(F->l_1623)).next = g_fins_888;
g_fins_888 = F->l_1623;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_464(P830 saved_463) {
  struct f_close_fins_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_463 = saved_463;
while (((g_fins_888 != F->saved_463) && (g_fins_888 != NULL))) {
f_emit_29(&(((P819)rt_nil_check((*(P830)rt_nil_check(g_fins_888)).s))->all));
f_pop_cleanup_501();
g_fins_888 = (*(P830)rt_nil_check(g_fins_888)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_466(P826 d_465) {
  struct f_const_decl_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_465 = d_465;
F->c_1625 = NULL;
F->c_1625 = f_new_cons_175();
F->t_1626 = NULL;
F->vt_1627 = NULL;
F->y_1628 = NULL;
F->y_1628 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->d_465)).name);
F->ok_1629 = RT_R_EUNDEF;
if (((*(P826)rt_nil_check(F->d_465)).a != NULL)) {
F->t_1626 = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_465)).a, &F->c_1625);
}
{
F->v_1630 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->d_465)).b, F->t_1626, F->c_1625, &F->vt_1627));
if ((F->t_1626 != NULL)) {
f_check_type_223(F->vt_1627, F->t_1626, rt_r_ichk((*(P826)rt_nil_check(F->d_465)).line));
} else {
F->t_1626 = F->vt_1627;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1626)).kind) == (((rt_int)1LL)))) {
(*(P836)rt_nil_check(F->y_1628)).mvalue = f_manifest_333((*(P826)rt_nil_check(F->d_465)).b, &F->ok_1629);
(*(P836)rt_nil_check(F->y_1628)).hasmv = rt_r_echk(F->ok_1629);
}
{
F->access_1631 = rt_str_copy(f_storage_455(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->d_465)).name))->all), F->t_1626));
if (((*(P832)rt_nil_check(F->t_1626)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P832)rt_nil_check(F->t_1626)).initp, &F->access_1631); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1631, rt_str(" = ", 3)), f_checked_204(F->t_1626, F->c_1625, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_1626, &F->v_1630); b_; }))), rt_str(";", 1)); b_; }));
f_bind_458(F->y_1628, &F->access_1631);
if (f_needs_fin_315(F->t_1626)) {
f_open_fin_462(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1631, F->t_1626); b_; }));
}
}
}
(*(P836)rt_nil_check(F->y_1628)).t = F->t_1626;
(*(P836)rt_nil_check(F->y_1628)).c = F->c_1625;
(*(P836)rt_nil_check(F->y_1628)).ro_flag = 1;
f_define_159(F->y_1628, rt_r_ichk((*(P826)rt_nil_check(F->d_465)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_468(P826 d_467) {
  struct f_subprogram_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_467 = d_467;
f_gen_subprogram_471(F->d_467, f_lookup_decl_156(F->d_467));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_471(P826 d_469, P836 y_470) {
  struct f_gen_subprogram_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_469 = d_469;
F->y_470 = y_470;
F->saved_code_1632 = NULL;
F->saved_code_1632 = g_code_876;
F->saved_fields_1633 = NULL;
F->saved_fields_1633 = g_fields_buf_877;
F->saved_in_1634 = RT_R_EUNDEF;
F->saved_in_1634 = rt_r_echk(g_in_func_878);
F->saved_sym_1635 = NULL;
F->saved_sym_1635 = g_func_sym_890;
F->saved_exits_1636 = NULL;
F->saved_exits_1636 = g_exits_899;
F->saved_gotos_1637 = NULL;
F->saved_gotos_1637 = g_gotos_900;
F->saved_frames_1638 = RT_R_IUNDEF;
F->saved_frames_1638 = rt_r_ichk(g_frames_901);
F->args_1639 = NULL;
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1640 = NULL;
F->pm_1640 = (*(P836)rt_nil_check(F->y_470)).params;
F->saved_handlers_1641 = NULL;
F->saved_handlers_1641 = g_handlers_902;
F->saved_cleanups_1642 = NULL;
F->saved_cleanups_1642 = g_cleanups_903;
F->ctx_1643 = NULL;
F->head_1644 = NULL;
F->frame_1645 = NULL;
F->frame_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_470)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1646 = NULL;
F->copy_back_1647 = NULL;
F->copy_back_1647 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1648 = NULL;
F->pfin_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1649 = NULL;
F->saved_fins_1649 = g_fins_888;
F->saved_rc_1650 = NULL;
F->saved_rc_1650 = g_func_rc_891;
F->saved_ret_1651 = NULL;
F->saved_ret_1651 = g_cap_ret_892;
F->saved_rflag_1652 = NULL;
F->saved_rflag_1652 = g_cap_rflag_893;
F->pn_1653 = NULL;
F->pn_1653 = (*(P826)rt_nil_check(F->d_469)).a;
F->nonrec_end_1654 = NULL;
F->has_pfin_1655 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_878)) {
F->parent_1646 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(g_func_sym_890)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_888 = NULL;
g_func_rc_891 = NULL;
g_cap_ret_892 = NULL;
g_cap_rflag_893 = NULL;
g_code_876 = f_new_buffer_24();
g_fields_buf_877 = f_new_buffer_24();
g_in_func_878 = 1;
g_func_sym_890 = F->y_470;
g_exits_899 = NULL;
g_gotos_900 = NULL;
g_frames_901 = ((rt_int)0LL);
g_handlers_902 = NULL;
g_cleanups_903 = NULL;
g_cur_level_879 = rt_add(rt_r_ichk(g_cur_level_879), ((rt_int)1LL));
f_open_scope_168();
{ R844 *cell1656 = rt_alloc(sizeof(R844));
(*cell1656).imps = NULL;
(*cell1656).next = NULL;
F->ctx_1643 = cell1656;
}
(*(P843)rt_nil_check(F->ctx_1643)).depth = rt_r_ichk(g_depth_865);
(*(P843)rt_nil_check(F->ctx_1643)).imps = (*(P826)rt_nil_check(F->d_469)).d;
(*(P843)rt_nil_check(F->ctx_1643)).all_imp = (rt_r_ichk((*(P826)rt_nil_check(F->d_469)).flag) >= ((rt_int)2LL));
(*(P843)rt_nil_check(F->ctx_1643)).next = g_fctx_880;
g_fctx_880 = F->ctx_1643;
if ((F->parent_1646 != NULL)) {
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P819)rt_nil_check(F->parent_1646))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check(F->parent_1646))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1640 != NULL)) {
F->ct_1657 = rt_str_copy(f_ctype_225((*(P838)rt_nil_check(F->pm_1640)).t));
F->f_1658 = rt_str_copy((((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_1640)).cfield))->all));
F->p_1659 = NULL;
F->pc_1660 = NULL;
F->pc_1660 = (*(P838)rt_nil_check(F->pm_1640)).c;
F->ac_1661 = NULL;
if ((((rt_int)(((((P819)rt_nil_check(F->args_1639))->all)).len)) > ((rt_int)0LL))) {
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->args_1639))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P838)rt_nil_check(F->pm_1640)).t)) {
F->fc_1662 = NULL;
F->ft_1663 = NULL;
F->ft_1663 = f_resolve_subtype_256((*(P826)rt_nil_check(F->pn_1653)).a, &F->fc_1662);
F->pc_1660 = f_freeze_200(F->fc_1662, (*(P838)rt_nil_check(F->pm_1640)).t);
}
if ((rt_r_ichk((*(P838)rt_nil_check(F->pm_1640)).mode) == (((rt_int)1LL)))) {
F->p_1659 = f_new_sym_172((((rt_int)2LL)), (*(P838)rt_nil_check(F->pm_1640)).name);
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1657), rt_str(" ", 1)), F->f_1658), rt_str(";", 1)); b_; }));
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_1639))->all), F->ct_1657), rt_str(" ", 1)), F->f_1658); b_; }));
(*(P836)rt_nil_check(F->p_1659)).access = f_mk_3(&F->f_1658);
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
if (((*(P832)rt_nil_check((*(P838)rt_nil_check(F->pm_1640)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P832)rt_nil_check((*(P838)rt_nil_check(F->pm_1640)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1658); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str(" = ", 3)), f_checked_204((*(P838)rt_nil_check(F->pm_1640)).t, F->pc_1660, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P838)rt_nil_check(F->pm_1640)).t, &F->f_1658); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_315((*(P838)rt_nil_check(F->pm_1640)).t)) {
F->pfin_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->pfin_1648))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1658); b_; }), (*(P838)rt_nil_check(F->pm_1640)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1659 = f_new_sym_172((((rt_int)1LL)), (*(P838)rt_nil_check(F->pm_1640)).name);
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1657), rt_str(" *", 2)), F->f_1658), rt_str(";", 1)); b_; }));
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_1639))->all), F->ct_1657), rt_str(" *", 2)), F->f_1658); b_; }));
(*(P836)rt_nil_check(F->p_1659)).access = f_mk_3(&F->f_1658);
(*(P836)rt_nil_check(F->p_1659)).byref = 1;
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str(" = ", 3)), F->f_1658), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P838)rt_nil_check(F->pm_1640)).t)) {
F->bt_1664 = rt_str_copy(f_bound_ctype_179((*(P838)rt_nil_check(F->pm_1640)).t));
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1664), rt_str(" ", 1)), F->f_1658), rt_str("lo, ", 4)), F->f_1658), rt_str("hi;", 3)); b_; }));
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_1639))->all), rt_str(", ", 2)), F->bt_1664), rt_str(" ", 1)), F->f_1658), rt_str("lo, ", 4)), F->bt_1664), rt_str(" ", 1)), F->f_1658), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("lo = ", 5)), F->f_1658), rt_str("lo; F->", 7)), F->f_1658), rt_str("hi = ", 5)), F->f_1658), rt_str("hi;", 3)); b_; }));
}
F->ac_1661 = f_new_cons_175();
(*(P828)rt_nil_check(F->ac_1661)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1658, rt_str("lo", 2)); b_; }));
(*(P828)rt_nil_check(F->ac_1661)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1658, rt_str("hi", 2)); b_; }));
(*(P828)rt_nil_check(F->ac_1661)).dyn = 1;
(*(P828)rt_nil_check(F->ac_1661)).lvl = rt_r_ichk(g_cur_level_879);
if (((F->pc_1660 == NULL) || ((*(P828)rt_nil_check(F->pc_1660)).lo == NULL))) {
F->pc_1660 = F->ac_1661;
} else if ((rt_r_ichk((*(P838)rt_nil_check(F->pm_1640)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1658), rt_str("lo <= F->", 9)), F->f_1658), rt_str("hi && (F->", 10)), F->f_1658), rt_str("lo != ", 6)), f_sub_lo_189((*(P838)rt_nil_check(F->pm_1640)).t, F->pc_1660)), rt_str(" || F->", 7)), F->f_1658), rt_str("hi != ", 6)), f_sub_hi_192((*(P838)rt_nil_check(F->pm_1640)).t, F->pc_1660)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P838)rt_nil_check(F->pm_1640)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1657), rt_str(" ", 1)), F->f_1658), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("v = ", 4)), f_copy_code_364((*(P838)rt_nil_check(F->pm_1640)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1658); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P832)rt_nil_check((*(P838)rt_nil_check(F->pm_1640)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P832)rt_nil_check((*(P838)rt_nil_check(F->pm_1640)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1661 == NULL)) {
F->ac_1661 = (*(P838)rt_nil_check(F->pm_1640)).c;
}
if ((!rt_str_eq(f_uninit_value_327(f_base_of_214((*(P838)rt_nil_check(F->pm_1640)).t)), rt_str("", 0)))) {
F->copy_back_1647 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->copy_back_1647))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_219(f_base_of_214((*(P838)rt_nil_check(F->pm_1640)).t))), rt_str("(F->", 4)), F->f_1658), rt_str("v)) ", 4)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1658), rt_str(")", 1)); b_; }), (*(P838)rt_nil_check(F->pm_1640)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("v", 1)); b_; }), F->ac_1661)); b_; }));
} else {
F->copy_back_1647 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->copy_back_1647))->all), rt_str("  ", 2)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1658), rt_str(")", 1)); b_; }), (*(P838)rt_nil_check(F->pm_1640)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("v", 1)); b_; }), F->ac_1661)); b_; }));
}
if (f_needs_fin_315((*(P838)rt_nil_check(F->pm_1640)).t)) {
F->pfin_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->pfin_1648))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1658), rt_str("v", 1)); b_; }), (*(P838)rt_nil_check(F->pm_1640)).t)), rt_str(" ", 1)); b_; }));
}
(*(P836)rt_nil_check(F->p_1659)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1658, rt_str("v", 1)); b_; }));
(*(P836)rt_nil_check(F->p_1659)).byref = 0;
}
}
(*(P836)rt_nil_check(F->p_1659)).t = (*(P838)rt_nil_check(F->pm_1640)).t;
(*(P836)rt_nil_check(F->p_1659)).c = F->pc_1660;
(*(P836)rt_nil_check(F->p_1659)).level = rt_r_ichk(g_cur_level_879);
(*(P836)rt_nil_check(F->p_1659)).ro_flag = ((rt_r_ichk((*(P838)rt_nil_check(F->pm_1640)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P838)rt_nil_check(F->pm_1640)).mode) == (((rt_int)4LL))));
f_define_159(F->p_1659, rt_r_ichk((*(P826)rt_nil_check(F->d_469)).line));
F->pm_1640 = (*(P838)rt_nil_check(F->pm_1640)).next;
F->pn_1653 = (*(P826)rt_nil_check(F->pn_1653)).next;
}
if ((rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_470)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P826)rt_nil_check(F->d_469)).b != NULL)) {
F->rc_1665 = NULL;
F->rt_1666 = NULL;
F->rt_1666 = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_469)).b, &F->rc_1665);
g_func_rc_891 = f_freeze_200(F->rc_1665, (*(P836)rt_nil_check(F->y_470)).result);
}
f_put_27(g_fields_buf_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225((*(P836)rt_nil_check(F->y_470)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_470)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_470)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1655 = (((rt_int)(((((P819)rt_nil_check(F->pfin_1648))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1655)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_444((*(P826)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_444((*(P826)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1667 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1668 = NULL;
F->leave_1668 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1667), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1667), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1667), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_444((*(P826)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_444((*(P826)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P819)rt_nil_check((*(P826)rt_nil_check(F->d_469)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1647 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->copy_back_1647))->all), rt_str("  ", 2)), (((P819)rt_nil_check(F->leave_1668))->all)); b_; }));
F->nonrec_end_1654 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P819)rt_nil_check(F->leave_1668))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_481((*(P826)rt_nil_check(F->d_469)).c);
f_declare_body_380((*(P826)rt_nil_check(F->d_469)).c);
{
F->xu_1669 = rt_str_copy(f_open_unhandled_494((*(P826)rt_nil_check(F->d_469)).c));
f_body_elements_490((*(P826)rt_nil_check(F->d_469)).c);
f_close_fins_464(NULL);
f_close_unhandled_496(&F->xu_1669);
}
if ((F->nonrec_end_1654 != NULL)) {
f_emit_29(&(((P819)rt_nil_check(F->nonrec_end_1654))->all));
f_pop_cleanup_501();
}
if (rt_r_echk(F->has_pfin_1655)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P819)rt_nil_check(F->pfin_1648))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_501();
F->copy_back_1647 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->copy_back_1647))->all), rt_str("  ", 2)), (((P819)rt_nil_check(F->pfin_1648))->all)); b_; }));
}
f_close_scope_169();
g_fctx_880 = (*(P843)rt_nil_check(g_fctx_880)).next;
g_cur_level_879 = rt_sub(rt_r_ichk(g_cur_level_879), ((rt_int)1LL));
if (((((rt_int)(((((P819)rt_nil_check(F->args_1639))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL))))) {
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL)))) {
F->args_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1644 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225((*(P836)rt_nil_check(F->y_470)).result)), rt_str(" ", 1)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_470)).cname))->all)), rt_str("(", 1)), (((P819)rt_nil_check(F->args_1639))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->head_1644))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->head_1644))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_885, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P819)rt_nil_check(F->frame_1645))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_885, g_fields_buf_877);
f_put_27(g_out_frames_885, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P819)rt_nil_check(F->frame_1645))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P819)rt_nil_check(F->frame_1645))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_873, g_code_876);
if ((rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(F->y_470)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P819)rt_nil_check(F->copy_back_1647))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_873, &(((P819)rt_nil_check(F->copy_back_1647))->all));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P819)rt_nil_check(F->copy_back_1647))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_873, &(((P819)rt_nil_check(F->copy_back_1647))->all));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_876 = F->saved_code_1632;
g_fields_buf_877 = F->saved_fields_1633;
g_in_func_878 = rt_r_echk(F->saved_in_1634);
g_func_sym_890 = F->saved_sym_1635;
g_exits_899 = F->saved_exits_1636;
g_gotos_900 = F->saved_gotos_1637;
g_frames_901 = rt_r_ichk(F->saved_frames_1638);
g_handlers_902 = F->saved_handlers_1641;
g_cleanups_903 = F->saved_cleanups_1642;
g_fins_888 = F->saved_fins_1649;
g_func_rc_891 = F->saved_rc_1650;
g_cap_ret_892 = F->saved_ret_1651;
g_cap_rflag_893 = F->saved_rflag_1652;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_473(P826 d_472) {
  struct f_waits_of_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->w_1670 = NULL;
F->w_1670 = g_cap_waits_882;
while ((F->w_1670 != NULL)) {
if (((*(P855)rt_nil_check(F->w_1670)).d == F->d_472)) {
F->result_ = (((P819)rt_nil_check((*(P855)rt_nil_check(F->w_1670)).w))->all);
goto ret_;
}
F->w_1670 = (*(P855)rt_nil_check(F->w_1670)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_475(P826 elems_474) {
  struct f_task_waits_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_474 = elems_474;
F->e_1671 = NULL;
F->e_1671 = F->elems_474;
F->r_1672 = NULL;
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1671 != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1671)).kind) == (((rt_int)50LL)))) {
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1672))->all), rt_str(" rt_await_decl(&", 16)), (((P819)rt_nil_check((*(P836)rt_nil_check(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1671)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->e_1671)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P826)rt_nil_check(F->e_1671)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P826)rt_nil_check(F->e_1671)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P826)rt_nil_check(F->e_1671)).flag) == ((rt_int)3LL)))))) {
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->r_1672))->all), f_waits_of_473(F->e_1671)); b_; }));
}
F->e_1671 = (*(P826)rt_nil_check(F->e_1671)).next;
}
F->result_ = (((P819)rt_nil_check(F->r_1672))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_477(P826 elems_476) {
  struct f_await_tasks_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_476 = elems_476;
F->w_1673 = rt_str_copy(f_task_waits_475(F->elems_476));
if ((((rt_int)((F->w_1673).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1673);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_479(P826 elems_478) {
  struct f_capsule_elements_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_478 = elems_478;
F->e_1674 = NULL;
F->e_1674 = F->elems_478;
while ((F->e_1674 != NULL)) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->e_1674)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_1674)).kind) <= (((rt_int)36LL))))) {
f_start_labels_482();
}
f_element_450(F->e_1674);
F->e_1674 = (*(P826)rt_nil_check(F->e_1674)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_481(P826 elems_480) {
  struct f_declare_labels_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_480 = elems_480;
F->e_1675 = NULL;
F->e_1675 = F->elems_480;
while ((F->e_1675 != NULL)) {
F->l_1676 = NULL;
F->l_1676 = (*(P826)rt_nil_check(F->e_1675)).labels;
while ((F->l_1676 != NULL)) {
F->x_1677 = NULL;
F->x_1677 = g_gotos_900;
while (((F->x_1677 != NULL) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1677)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P819)rt_nil_check((*(P851)rt_nil_check(F->x_1677)).match))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->l_1676)).name))->all))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->l_1676)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P819)rt_nil_check((*(P826)rt_nil_check(F->l_1676)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1677 = (*(P851)rt_nil_check(F->x_1677)).next;
}
{ R852 *cell1678 = rt_alloc(sizeof(R852));
(*cell1678).match = NULL;
(*cell1678).label = NULL;
(*cell1678).next = NULL;
F->x_1677 = cell1678;
}
(*(P851)rt_nil_check(F->x_1677)).match = (*(P826)rt_nil_check(F->l_1676)).name;
(*(P851)rt_nil_check(F->x_1677)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P851)rt_nil_check(F->x_1677)).depth = rt_neg(((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1677)).next = g_gotos_900;
g_gotos_900 = F->x_1677;
F->l_1676 = (*(P826)rt_nil_check(F->l_1676)).next;
}
F->e_1675 = (*(P826)rt_nil_check(F->e_1675)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_482(void) {
  struct f_start_labels_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1679 = NULL;
F->x_1679 = g_gotos_900;
while (((F->x_1679 != NULL) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1679)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P851)rt_nil_check(F->x_1679)).depth = rt_r_ichk(g_frames_901);
F->x_1679 = (*(P851)rt_nil_check(F->x_1679)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P851 f_goto_label_484(rstr *name_483) {
  struct f_goto_label_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_483 = name_483;
F->x_1680 = NULL;
F->x_1680 = g_gotos_900;
while ((F->x_1680 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P851)rt_nil_check(F->x_1680)).match))->all), (*F->name_483))) {
F->result_ = F->x_1680;
goto ret_;
}
F->x_1680 = (*(P851)rt_nil_check(F->x_1680)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_486(P826 e_485) {
  struct f_has_return_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_485 = e_485;
F->x_1681 = NULL;
F->x_1681 = F->e_485;
while ((F->x_1681 != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->x_1681)).kind) != (((rt_int)51LL))))) {
if ((((((*(P826)rt_nil_check(F->x_1681)).a != NULL) && f_has_return_486((*(P826)rt_nil_check(F->x_1681)).a)) || (((*(P826)rt_nil_check(F->x_1681)).b != NULL) && f_has_return_486((*(P826)rt_nil_check(F->x_1681)).b))) || (((*(P826)rt_nil_check(F->x_1681)).c != NULL) && f_has_return_486((*(P826)rt_nil_check(F->x_1681)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1681 = (*(P826)rt_nil_check(F->x_1681)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_488(P826 elems_487) {
  struct f_capsule_body_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_487 = elems_487;
F->saved_ret_1682 = NULL;
F->saved_ret_1682 = g_cap_ret_892;
F->saved_flag_1683 = NULL;
F->saved_flag_1683 = g_cap_rflag_893;
F->saved_frames_1684 = RT_R_IUNDEF;
F->saved_frames_1684 = rt_r_ichk(g_ret_frames_894);
F->e_1685 = NULL;
F->e_1685 = F->elems_487;
if ((!f_has_return_486(F->elems_487))) {
g_cap_ret_892 = NULL;
g_cap_rflag_893 = NULL;
f_capsule_elements_479(F->elems_487);
} else {
g_cap_rflag_893 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(g_cap_rflag_893))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1685 != NULL)) {
F->stmt_1686 = RT_R_EUNDEF;
F->stmt_1686 = ((rt_r_ichk((*(P826)rt_nil_check(F->e_1685)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->e_1685)).kind) <= (((rt_int)36LL))));
g_cap_ret_892 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_894 = rt_r_ichk(g_frames_901);
if (rt_r_echk(F->stmt_1686)) {
f_start_labels_482();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P819)rt_nil_check(g_cap_rflag_893))->all)), rt_str(") {", 3)); b_; }));
}
f_element_450(F->e_1685);
if (rt_r_echk(F->stmt_1686)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(g_cap_ret_892))->all), rt_str(": ;", 3)); b_; }));
F->e_1685 = (*(P826)rt_nil_check(F->e_1685)).next;
}
}
g_cap_ret_892 = F->saved_ret_1682;
g_cap_rflag_893 = F->saved_flag_1683;
g_ret_frames_894 = rt_r_ichk(F->saved_frames_1684);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_490(P826 elems_489) {
  struct f_body_elements_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_489 = elems_489;
f_capsule_elements_479(F->elems_489);
f_await_tasks_477(F->elems_489);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_492(P826 elems_491) {
  struct f_gen_body_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_491 = elems_491;
F->saved_1687 = NULL;
F->saved_1687 = g_fins_888;
F->saved_gotos_1688 = NULL;
F->saved_gotos_1688 = g_gotos_900;
f_open_scope_168();
f_declare_labels_481(F->elems_491);
f_declare_body_380(F->elems_491);
{
F->xu_1689 = rt_str_copy(f_open_unhandled_494(F->elems_491));
f_body_elements_490(F->elems_491);
f_close_fins_464(F->saved_1687);
f_close_unhandled_496(&F->xu_1689);
}
f_close_scope_169();
g_gotos_900 = F->saved_gotos_1688;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_494(P826 elems_493) {
  struct f_open_unhandled_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_493 = elems_493;
F->e_1690 = NULL;
F->e_1690 = F->elems_493;
F->conds_1691 = NULL;
F->conds_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1690 != NULL)) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_1690)).kind) == (((rt_int)49LL)))) {
F->conds_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1691))->all), rt_str(" || rt_xcur == ", 15)), (((P819)rt_nil_check((*(P836)rt_nil_check(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_1690)).name))->all)))).cname))->all)); b_; }));
}
F->e_1690 = (*(P826)rt_nil_check(F->e_1690)).next;
}
if ((((rt_int)(((((P819)rt_nil_check(F->conds_1691))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1692 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1692), rt_str("; if (RT_TRY(", 13)), F->f_1692), rt_str(")) {", 4)); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1692), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1692, rt_str(":", 1)), (((P819)rt_nil_check(F->conds_1691))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_496(rstr *xu_495) {
  struct f_close_unhandled_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_495 = xu_495;
F->i_1693 = RT_R_IUNDEF;
F->i_1693 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_495), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_495), rt_r_ichk(F->i_1693))) != 58)) {
F->i_1693 = rt_add(rt_r_ichk(F->i_1693), ((rt_int)1LL));
}
{
F->f_1694 = rt_str_copy(rt_str_slice((*F->xu_495), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1693), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1694), rt_str("); } else { RT_POP(", 19)), F->f_1694), rt_str("); if (", 7)), rt_str_slice((*F->xu_495), rt_add(rt_r_ichk(F->i_1693), ((rt_int)1LL)), ((rt_int)(((*F->xu_495)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_501();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_498(rt_int upto_497) {
  struct f_pop_frames_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_497 = upto_497;
F->i_1695 = RT_R_IUNDEF;
F->i_1695 = rt_r_ichk(g_frames_901);
F->c_1696 = NULL;
F->c_1696 = g_cleanups_903;
while ((rt_r_ichk(F->i_1695) > F->upto_497)) {
f_emit_29(&(((P819)rt_nil_check((*(P830)rt_nil_check(F->c_1696)).s))->all));
F->c_1696 = (*(P830)rt_nil_check(F->c_1696)).next;
F->i_1695 = rt_sub(rt_r_ichk(F->i_1695), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_500(rstr *s_499) {
  struct f_push_cleanup_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_499 = s_499;
F->c_1697 = NULL;
{ R831 *cell1698 = rt_alloc(sizeof(R831));
(*cell1698).s = NULL;
(*cell1698).next = NULL;
F->c_1697 = cell1698;
}
(*(P830)rt_nil_check(F->c_1697)).s = f_mk_3(&(*F->s_499));
(*(P830)rt_nil_check(F->c_1697)).next = g_cleanups_903;
g_cleanups_903 = F->c_1697;
g_frames_901 = rt_add(rt_r_ichk(g_frames_901), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_501(void) {
  struct f_pop_cleanup_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_903 = (*(P830)rt_nil_check(g_cleanups_903)).next;
g_frames_901 = rt_sub(rt_r_ichk(g_frames_901), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_503(P826 s_502) {
  struct f_gen_statement_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_502 = s_502;
F->label_1699 = NULL;
F->gl_1700 = NULL;
F->gl_1700 = (*(P826)rt_nil_check(F->s_502)).labels;
while ((F->gl_1700 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P851)rt_nil_check(f_goto_label_484(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->gl_1700)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1700 = (*(P826)rt_nil_check(F->gl_1700)).next;
}
if (((*(P826)rt_nil_check(F->s_502)).tag != NULL)) {
F->x_1701 = NULL;
{ R852 *cell1702 = rt_alloc(sizeof(R852));
(*cell1702).match = NULL;
(*cell1702).label = NULL;
(*cell1702).next = NULL;
F->x_1701 = cell1702;
}
F->label_1699 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P851)rt_nil_check(F->x_1701)).match = (*(P826)rt_nil_check(F->s_502)).tag;
(*(P851)rt_nil_check(F->x_1701)).label = F->label_1699;
(*(P851)rt_nil_check(F->x_1701)).depth = rt_r_ichk(g_frames_901);
(*(P851)rt_nil_check(F->x_1701)).next = g_exits_899;
g_exits_899 = F->x_1701;
}
{ rt_int sel1703 = rt_r_ichk((*(P826)rt_nil_check(F->s_502)).kind);
if (0 || (sel1703 == (((rt_int)20LL)))) {
f_st_assign_505(F->s_502);
} else if (0 || (sel1703 == (((rt_int)21LL)))) {
f_st_call_507(F->s_502);
} else if (0 || (sel1703 == (((rt_int)22LL)))) {
f_st_if_509(F->s_502);
} else if (0 || (sel1703 == (((rt_int)23LL)))) {
f_st_case_511(F->s_502);
} else if (0 || (sel1703 == (((rt_int)24LL)))) {
f_st_repeat_513(F->s_502);
} else if (0 || (sel1703 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_492((*(P826)rt_nil_check(F->s_502)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1703 == (((rt_int)27LL)))) {
f_st_exit_515(F->s_502);
} else if (0 || (sel1703 == (((rt_int)29LL)))) {
{
F->x_1704 = NULL;
F->x_1704 = f_goto_label_484(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->s_502)).name))->all));
if ((F->x_1704 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_502)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->s_502)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_498(rt_r_ichk((*(P851)rt_nil_check(F->x_1704)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P819)rt_nil_check((*(P851)rt_nil_check(F->x_1704)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1703 == (((rt_int)28LL)))) {
f_st_return_517(F->s_502);
} else if (0 || (sel1703 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_524(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->s_502)).name))->all), rt_r_ichk((*(P826)rt_nil_check(F->s_502)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1703 == (((rt_int)31LL)))) {
if ((g_handlers_902 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_502)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P819)rt_nil_check((*(P830)rt_nil_check(g_handlers_902)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1703 == (((rt_int)26LL)))) {
f_st_guard_526(F->s_502);
} else if (0 || (sel1703 == (((rt_int)32LL)))) {
f_st_alloc_528(F->s_502);
} else if (0 || (sel1703 == (((rt_int)34LL)))) {
f_st_create_532(F->s_502);
} else if (0 || (sel1703 == (((rt_int)35LL)))) {
f_st_wait_561(F->s_502);
} else if (0 || (sel1703 == (((rt_int)36LL)))) {
f_st_region_569(F->s_502);
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_502)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P826)rt_nil_check(F->s_502)).tag != NULL)) {
g_exits_899 = (*(P851)rt_nil_check(g_exits_899)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->label_1699))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_505(P826 s_504) {
  struct f_st_assign_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_504 = s_504;
F->lv_1705 = NULL;
F->t_1706 = NULL;
F->vt_1707 = NULL;
F->c_1708 = NULL;
F->ro_1709 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).kind) == (((rt_int)10LL))) && ((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_627((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).a, &F->lv_1705, &F->t_1706, &F->c_1708, &F->ro_1709);
while ((rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->t_1706);
F->lv_1705 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_619(&(((P819)rt_nil_check(F->lv_1705))->all), F->t_1706); b_; }));
F->t_1706 = (*(P832)rt_nil_check(F->t_1706)).target;
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->t_1706)).tparams == NULL))) {
F->t_1706 = (*(P832)rt_nil_check(F->t_1706)).under;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).kind) == (((rt_int)15LL)))) {
F->lv_1705 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->lv_1705))->all), rt_str(".all", 4)); b_; }));
F->t_1706 = (*(P832)rt_nil_check(F->t_1706)).under;
}
if ((((!rt_r_echk(F->ro_1709)) && (rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).ndim) == ((rt_int)1LL)))) {
F->lo_1710 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b)).a, (*(P832)rt_nil_check(F->t_1706)).idx, &F->vt_1707));
F->hi_1711 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b)).b, (*(P832)rt_nil_check(F->t_1706)).idx, &F->vt_1707));
F->v_1712 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->s_504)).b, F->t_1706, &F->vt_1707));
f_need_slice_639(F->t_1706);
f_check_type_223(F->vt_1707, F->t_1706, rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_1706)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_225(F->t_1706)), rt_str("(", 1)), (((P819)rt_nil_check(F->lv_1705))->all)), rt_str(", ", 2)), F->lo_1710), rt_str(", ", 2)), F->hi_1711), rt_str("); as_", 6)), f_ctype_225(F->t_1706)), rt_str("(&sl_, ", 7)), F->v_1712), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1709) || (rt_r_ichk((*(P832)rt_nil_check(F->t_1706)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1713 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b)).a, g_ty_int_906, &F->vt_1707));
F->hi_1714 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->s_504)).a)).b)).b, g_ty_int_906, &F->vt_1707));
F->v_1715 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->s_504)).b, g_ty_string_910, &F->vt_1707));
f_check_type_223(F->vt_1707, g_ty_string_910, rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P819)rt_nil_check(F->lv_1705))->all)), rt_str(", ", 2)), F->lo_1713), rt_str(", ", 2)), F->hi_1714), rt_str(", ", 2)), F->v_1715), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_627((*(P826)rt_nil_check(F->s_504)).a, &F->lv_1705, &F->t_1706, &F->c_1708, &F->ro_1709);
if (rt_r_echk(F->ro_1709)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_296(F->t_1706)) && (!f_exports_op_402((*(P832)rt_nil_check(F->t_1706)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_1706)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1716 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->s_504)).b, F->t_1706, F->c_1708, &F->vt_1707));
f_check_type_223(F->vt_1707, F->t_1706, rt_r_ichk((*(P826)rt_nil_check(F->s_504)).line));
f_ptr_subtype_check_434(F->t_1706, F->c_1708, (*(P826)rt_nil_check(F->s_504)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&(((P819)rt_nil_check(F->lv_1705))->all), F->t_1706, &F->v_1716, F->c_1708); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_507(P826 s_506) {
  struct f_st_call_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_506 = s_506;
F->c_1717 = NULL;
F->c_1717 = (*(P826)rt_nil_check(F->s_506)).a;
F->t_1718 = NULL;
if (((rt_r_ichk((*(P826)rt_nil_check(F->c_1717)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->c_1717)).kind) == (((rt_int)12LL))))) {
F->x_1719 = NULL;
F->x_1719 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->c_1717)).line));
(*(P826)rt_nil_check(F->x_1719)).a = F->c_1717;
F->c_1717 = F->x_1719;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->c_1717)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_506)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_788(F->c_1717, 1, &F->t_1718), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_509(P826 s_508) {
  struct f_st_if_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_508 = s_508;
F->a_1720 = NULL;
F->a_1720 = (*(P826)rt_nil_check(F->s_508)).a;
F->first_1721 = RT_R_EUNDEF;
F->first_1721 = 1;
F->t_1722 = NULL;
F->taken_1723 = RT_R_EUNDEF;
F->taken_1723 = 0;
F->ok_1724 = RT_R_EUNDEF;
F->mv_1725 = NULL;
while (((F->a_1720 != NULL) && (!rt_r_echk(F->taken_1723)))) {
F->mv_1725 = f_meval_342((*(P826)rt_nil_check(F->a_1720)).a, &F->ok_1724);
if (((rt_r_echk(F->ok_1724) && (rt_r_ichk((*(P845)rt_nil_check(F->mv_1725)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P845)rt_nil_check(F->mv_1725)).i) == ((rt_int)0LL)))) {
F->a_1720 = (*(P826)rt_nil_check(F->a_1720)).next;
} else {
if ((rt_r_echk(F->ok_1724) && (rt_r_ichk((*(P845)rt_nil_check(F->mv_1725)).kind) == (((rt_int)2LL))))) {
F->taken_1723 = 1;
if (rt_r_echk(F->first_1721)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1726 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->a_1720)).a, g_ty_bool_907, &F->t_1722));
f_check_type_223(F->t_1722, g_ty_bool_907, rt_r_ichk((*(P826)rt_nil_check(F->s_508)).line));
if (rt_r_echk(F->first_1721)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1726), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1726), rt_str(") {", 3)); b_; }));
}
}
F->first_1721 = 0;
f_gen_body_492((*(P826)rt_nil_check(F->a_1720)).b);
F->a_1720 = (*(P826)rt_nil_check(F->a_1720)).next;
}
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->s_508)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1723)))) {
if (rt_r_echk(F->first_1721)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1721 = 0;
f_gen_body_492((*(P826)rt_nil_check(F->s_508)).b);
}
if ((!rt_r_echk(F->first_1721))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_511(P826 s_510) {
  struct f_st_case_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_510 = s_510;
F->st_1727 = NULL;
F->vt_1728 = NULL;
F->first_1729 = RT_R_EUNDEF;
F->first_1729 = 1;
F->a_1730 = NULL;
F->a_1730 = (*(P826)rt_nil_check(F->s_510)).b;
F->sel_1731 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->s_510)).a, NULL, &F->st_1727));
F->tmp_1732 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->st_1727)), rt_str(" ", 1)), F->tmp_1732), rt_str(" = ", 3)), F->sel_1731), rt_str(";", 1)); b_; }));
while ((F->a_1730 != NULL)) {
F->lab_1733 = NULL;
F->lab_1733 = (*(P826)rt_nil_check(F->a_1730)).a;
F->conds_1734 = NULL;
F->conds_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1733 != NULL)) {
if (((*(P826)rt_nil_check(F->lab_1733)).b == NULL)) {
F->v_1735 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->lab_1733)).a, F->st_1727, &F->vt_1728));
f_check_type_223(F->vt_1728, F->st_1727, rt_r_ichk((*(P826)rt_nil_check(F->s_510)).line));
F->conds_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1734))->all), rt_str(" || ", 4)), f_eq_code_368(F->st_1727, &F->tmp_1732, &F->v_1735)); b_; }));
} else {
F->lo_1736 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->lab_1733)).a, F->st_1727, &F->vt_1728));
F->hi_1737 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->lab_1733)).b, F->st_1727, &F->vt_1728));
F->conds_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1734))->all), rt_str(" || (", 5)), F->tmp_1732), rt_str(" >= ", 4)), F->lo_1736), rt_str(" && ", 4)), F->tmp_1732), rt_str(" <= ", 4)), F->hi_1737), rt_str(")", 1)); b_; }));
}
F->lab_1733 = (*(P826)rt_nil_check(F->lab_1733)).next;
}
if (rt_r_echk(F->first_1729)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P819)rt_nil_check(F->conds_1734))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P819)rt_nil_check(F->conds_1734))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1729 = 0;
f_gen_body_492((*(P826)rt_nil_check(F->a_1730)).b);
F->a_1730 = (*(P826)rt_nil_check(F->a_1730)).next;
}
if (rt_r_echk(F->first_1729)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->s_510)).flag) == ((rt_int)1LL))) {
f_gen_body_492((*(P826)rt_nil_check(F->s_510)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_513(P826 s_512) {
  struct f_st_repeat_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_512 = s_512;
F->t_1738 = NULL;
F->c_1739 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->s_512)).flag) == ((rt_int)0LL))) {
F->cond_1740 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->s_512)).a, g_ty_bool_907, &F->t_1738));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1740), rt_str(") {", 3)); b_; }));
f_gen_body_492((*(P826)rt_nil_check(F->s_512)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1738 = f_resolve_subtype_256((*(P826)rt_nil_check(F->s_512)).a, &F->c_1739);
F->c_1739 = f_base_cons_217(F->t_1738, F->c_1739);
if ((((*(P832)rt_nil_check(f_base_of_214(F->t_1738))).kind == (((rt_int)4LL))) && ((*(P828)rt_nil_check(F->c_1739)).lo == NULL))) {
F->c_1739 = f_new_cons_175();
(*(P828)rt_nil_check(F->c_1739)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P828)rt_nil_check(F->c_1739)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P832)rt_nil_check(f_base_of_214(F->t_1738))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P828)rt_nil_check(F->c_1739)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_512)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1741 = rt_str_copy(f_storage_455(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->s_512)).name))->all), F->t_1738));
F->lov_1742 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1743 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1744 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1745 = NULL;
F->y_1745 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->s_512)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1742), rt_str(" = ", 3)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_1739)).lo))->all)), rt_str(", ", 2)), F->hiv_1743), rt_str(" = ", 3)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_1739)).hi))->all)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P826)rt_nil_check(F->s_512)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1744), rt_str(" = ", 3)), F->hiv_1743), rt_str("; ", 2)), F->it_1744), rt_str(" >= ", 4)), F->lov_1742), rt_str("; ", 2)), F->it_1744), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1744), rt_str(" = ", 3)), F->lov_1742), rt_str("; ", 2)), F->it_1744), rt_str(" <= ", 4)), F->hiv_1743), rt_str("; ", 2)), F->it_1744), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1741, rt_str(" = ", 3)), F->it_1744), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P836)rt_nil_check(F->y_1745)).t = F->t_1738;
(*(P836)rt_nil_check(F->y_1745)).c = F->c_1739;
f_bind_458(F->y_1745, &F->access_1741);
(*(P836)rt_nil_check(F->y_1745)).ro_flag = 1;
f_define_159(F->y_1745, rt_r_ichk((*(P826)rt_nil_check(F->s_512)).line));
f_gen_body_492((*(P826)rt_nil_check(F->s_512)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_515(P826 s_514) {
  struct f_st_exit_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_514 = s_514;
F->x_1746 = NULL;
F->x_1746 = g_exits_899;
while ((F->x_1746 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P851)rt_nil_check(F->x_1746)).match))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->s_514)).name))->all))) {
f_pop_frames_498(rt_r_ichk((*(P851)rt_nil_check(F->x_1746)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P819)rt_nil_check((*(P851)rt_nil_check(F->x_1746)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1746 = (*(P851)rt_nil_check(F->x_1746)).next;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_514)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P819)rt_nil_check((*(P826)rt_nil_check(F->s_514)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_517(P826 s_516) {
  struct f_st_return_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_516 = s_516;
F->vt_1747 = NULL;
if ((g_cap_ret_892 != NULL)) {
if (((*(P826)rt_nil_check(F->s_516)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_516)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_498(rt_r_ichk(g_ret_frames_894));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(g_cap_rflag_893))->all), rt_str(" = 1; goto ", 11)), (((P819)rt_nil_check(g_cap_ret_892))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_878))) {
f_pop_frames_498(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check((*(P836)rt_nil_check(g_func_sym_890)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P826)rt_nil_check(F->s_516)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_516)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_498(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P826)rt_nil_check(F->s_516)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_516)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1748 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->s_516)).a, (*(P836)rt_nil_check(g_func_sym_890)).result, g_func_rc_891, &F->vt_1747));
f_check_type_223(F->vt_1747, (*(P836)rt_nil_check(g_func_sym_890)).result, rt_r_ichk((*(P826)rt_nil_check(F->s_516)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_521((*(P836)rt_nil_check(g_func_sym_890)).result, g_func_rc_891, &F->v_1748)), rt_str(";", 1)); b_; }));
f_pop_frames_498(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_521(P832 t_518, P828 c_519, rstr *v_520) {
  struct f_result_checked_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_518 = t_518;
F->c_519 = c_519;
F->v_520 = v_520;
if ((F->c_519 == NULL)) {
F->result_ = (*F->v_520);
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_518)).kind) == (((rt_int)5LL))) && ((*(P828)rt_nil_check(F->c_519)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_520)), rt_str(", ", 2)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_519)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->t_518)).kind) == (((rt_int)6LL))) && ((*(P828)rt_nil_check(F->c_519)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->t_518)), rt_str(" r_ = ", 6)), (*F->v_520)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_519)).lo))->all)), rt_str(", ", 2)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_519)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_518, F->c_519, &(*F->v_520));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_524(rstr *name_522, rt_int line_523) {
  struct f_exc_id_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_522 = name_522;
F->line_523 = line_523;
F->y_1749 = NULL;
F->y_1749 = f_lookup_154(&(*F->name_522));
if (((F->y_1749 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1749)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1749)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_522)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_522), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_522)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_522), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_526(P826 s_525) {
  struct f_st_guard_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_525 = s_525;
F->h_1750 = NULL;
F->h_1750 = (*(P826)rt_nil_check(F->s_525)).b;
F->first_1751 = RT_R_EUNDEF;
F->first_1751 = 1;
F->hv_1752 = NULL;
{
F->f_1753 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1754 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1753), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1753), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1753), rt_str(")) {", 4)); b_; }));
f_gen_body_492((*(P826)rt_nil_check(F->s_525)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1753), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_501();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1753), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1754), rt_str(" = rt_xcur;", 11)); b_; }));
{ R831 *cell1755 = rt_alloc(sizeof(R831));
(*cell1755).s = NULL;
(*cell1755).next = NULL;
F->hv_1752 = cell1755;
}
(*(P830)rt_nil_check(F->hv_1752)).s = f_mk_3(&F->x_1754);
(*(P830)rt_nil_check(F->hv_1752)).next = g_handlers_902;
g_handlers_902 = F->hv_1752;
{
F->h1_1756 = NULL;
F->h1_1756 = (*(P826)rt_nil_check(F->s_525)).b;
F->seen_1757 = NULL;
while ((F->h1_1756 != NULL)) {
F->n1_1758 = NULL;
F->n1_1758 = (*(P826)rt_nil_check(F->h1_1756)).a;
while ((F->n1_1758 != NULL)) {
if (f_seen_name_375(F->seen_1757, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->n1_1758)).name))->all))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->n1_1758)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->n1_1758)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_1757 = f_add_line_738(F->seen_1757, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->n1_1758)).name))->all));
F->n1_1758 = (*(P826)rt_nil_check(F->n1_1758)).next;
}
F->h1_1756 = (*(P826)rt_nil_check(F->h1_1756)).next;
}
}
while ((F->h_1750 != NULL)) {
F->n_1759 = NULL;
F->n_1759 = (*(P826)rt_nil_check(F->h_1750)).a;
F->conds_1760 = NULL;
F->conds_1760 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1759 != NULL)) {
F->conds_1760 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1760))->all), rt_str(" || ", 4)), F->x_1754), rt_str(" == ", 4)), f_exc_id_524(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->n_1759)).name))->all), rt_r_ichk((*(P826)rt_nil_check(F->s_525)).line))); b_; }));
F->n_1759 = (*(P826)rt_nil_check(F->n_1759)).next;
}
if (rt_r_echk(F->first_1751)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P819)rt_nil_check(F->conds_1760))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P819)rt_nil_check(F->conds_1760))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1751 = 0;
f_gen_body_492((*(P826)rt_nil_check(F->h_1750)).b);
F->h_1750 = (*(P826)rt_nil_check(F->h_1750)).next;
}
if (rt_r_echk(F->first_1751)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->s_525)).flag) == ((rt_int)1LL))) {
f_gen_body_492((*(P826)rt_nil_check(F->s_525)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1754), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_902 = (*(P830)rt_nil_check(g_handlers_902)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_528(P826 s_527) {
  struct f_st_alloc_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_527 = s_527;
F->lv_1761 = NULL;
F->t_1762 = NULL;
F->target_1763 = NULL;
F->vt_1764 = NULL;
F->c_1765 = NULL;
F->tc_1766 = NULL;
F->ro_1767 = RT_R_EUNDEF;
F->d_1768 = NULL;
F->p_1769 = NULL;
F->a_1770 = NULL;
f_lvalue_627((*(P826)rt_nil_check(F->s_527)).a, &F->lv_1761, &F->t_1762, &F->c_1765, &F->ro_1767);
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1762)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_527)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_414(F->t_1762);
F->d_1768 = (*(P832)rt_nil_check(F->t_1762)).decl;
F->target_1763 = (*(P832)rt_nil_check(F->t_1762)).target;
if ((f_list_len_67((*(P826)rt_nil_check(F->s_527)).b) != f_list_len_67((*(P826)rt_nil_check(F->d_1768)).b))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_527)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P826)rt_nil_check(F->d_1768)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P826)rt_nil_check(F->d_1768)).b != NULL)) {
f_alloc_cell_426(F->s_527, &(((P819)rt_nil_check(F->lv_1761))->all), F->t_1762, F->c_1765);
goto ret_;
}
{
F->tcn_1771 = rt_str_copy(f_ctype_225(F->target_1763));
F->cell_1772 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315(F->target_1763)) {
F->fn_1773 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_887 = 1;
g_uses_findyn_889 = 1;
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1773), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1773), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P819)rt_nil_check((*(P836)rt_nil_check(g_func_sym_890)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1771), rt_str(" *)cell_)", 9)); b_; }), F->target_1763)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1771), rt_str(" *", 2)), F->cell_1772), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1771), rt_str("), ", 3)), F->fn_1773), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1771), rt_str(" *", 2)), F->cell_1772), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1771), rt_str("), ", 3)), F->fn_1773), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1771), rt_str(" *", 2)), F->cell_1772), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1771), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_421((*(P826)rt_nil_check(F->d_1768)).d, f_ptr_args_416(F->c_1765), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P826)rt_nil_check(F->s_527)).line));
F->vt_1764 = f_resolve_subtype_256((*(P826)rt_nil_check(F->d_1768)).a, &F->tc_1766);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1772), rt_str(")", 1)); b_; }), F->target_1763, F->tc_1766);
f_close_scope_169();
if (((*(P826)rt_nil_check(F->s_527)).c != NULL)) {
F->v_1774 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->s_527)).c, F->target_1763, F->tc_1766, &F->vt_1764));
f_check_type_223(F->vt_1764, F->target_1763, rt_r_ichk((*(P826)rt_nil_check(F->s_527)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1772), rt_str(")", 1)); b_; }), F->target_1763, &F->v_1774, F->tc_1766); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->lv_1761))->all), rt_str(" = ", 3)), F->cell_1772), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_530(P826 e_529) {
  struct f_act_ref_530fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_529 = e_529;
F->lv_1775 = NULL;
F->t_1776 = NULL;
F->c_1777 = NULL;
F->ro_1778 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P826)rt_nil_check(F->e_529)).kind) == (((rt_int)7LL))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_529)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_621(F->e_529))) {
F->v_1779 = rt_str_copy(f_gexpr_658(F->e_529, g_ty_act_916, &F->t_1776));
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1776)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_529)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1779;
goto ret_;
}
f_lvalue_627(F->e_529, &F->lv_1775, &F->t_1776, &F->c_1777, &F->ro_1778);
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1776)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_529)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P819)rt_nil_check(F->lv_1775))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_532(P826 s_531) {
  struct f_st_create_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_531 = s_531;
F->y_1780 = NULL;
F->y_1780 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->s_531)).name))->all));
F->pm_1781 = NULL;
F->a_1782 = NULL;
F->a_1782 = (*(P826)rt_nil_check(F->s_531)).b;
F->lv_1783 = NULL;
F->lt_1784 = NULL;
F->vt_1785 = NULL;
F->lc_1786 = NULL;
F->ro_1787 = RT_R_EUNDEF;
if (((F->y_1780 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1780)).kind) == (((rt_int)10LL))))) {
F->y_1780 = f_instantiate_603(F->y_1780, (*(P826)rt_nil_check(F->s_531)).e, (*(P826)rt_nil_check(F->s_531)).b, rt_r_ichk((*(P826)rt_nil_check(F->s_531)).line));
}
if (((F->y_1780 == NULL) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1780)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_531)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->s_531)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1781 = (*(P836)rt_nil_check(F->y_1780)).params;
{
F->at_1788 = NULL;
F->ac_1789 = NULL;
F->aro_1790 = RT_R_EUNDEF;
F->act_1791 = NULL;
F->nf_1792 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_627((*(P826)rt_nil_check(F->s_531)).a, &F->lv_1783, &F->at_1788, &F->ac_1789, &F->aro_1790);
if ((rt_r_ichk((*(P832)rt_nil_check(F->at_1788)).kind) == (((rt_int)14LL)))) {
F->act_1791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_530((*(P826)rt_nil_check(F->s_531)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1780)).cname))->all)), rt_str("fr *", 4)), F->nf_1792), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1792), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_1780)).level) > ((rt_int)0LL))) {
F->link_1793 = NULL;
F->link_1793 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1795 = ((rt_int)1LL), hi1796 = rt_sub(rt_r_ichk(g_cur_level_879), rt_r_ichk((*(P836)rt_nil_check(F->y_1780)).level));
for (rt_int it1797 = lo1795; it1797 <= hi1796; it1797++) {
F->i_1794 = it1797;
F->link_1793 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->link_1793))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1792, rt_str("->up = ", 7)), (((P819)rt_nil_check(F->link_1793))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1782 != NULL) && (F->pm_1781 != NULL))) {
if ((rt_r_ichk((*(P838)rt_nil_check(F->pm_1781)).mode) == (((rt_int)1LL)))) {
F->v_1798 = rt_str_copy(f_gexpr_in_666(F->a_1782, (*(P838)rt_nil_check(F->pm_1781)).t, (*(P838)rt_nil_check(F->pm_1781)).c, &F->vt_1785));
f_check_type_223(F->vt_1785, (*(P838)rt_nil_check(F->pm_1781)).t, rt_r_ichk((*(P826)rt_nil_check(F->s_531)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1792, rt_str("->", 2)), (((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_1781)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_364((*(P838)rt_nil_check(F->pm_1781)).t, &F->v_1798)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_627(F->a_1782, &F->lv_1783, &F->lt_1784, &F->lc_1786, &F->ro_1787);
f_check_type_223(F->lt_1784, (*(P838)rt_nil_check(F->pm_1781)).t, rt_r_ichk((*(P826)rt_nil_check(F->s_531)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1792, rt_str("->", 2)), (((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_1781)).cfield))->all)), rt_str(" = &", 4)), (((P819)rt_nil_check(F->lv_1783))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P838)rt_nil_check(F->pm_1781)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1792, rt_str("->", 2)), (((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_1781)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1784, F->lc_1786)), rt_str("; ", 2)), F->nf_1792), rt_str("->", 2)), (((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_1781)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1784, F->lc_1786)), rt_str(";", 1)); b_; }));
}
}
F->a_1782 = (*(P826)rt_nil_check(F->a_1782)).next;
F->pm_1781 = (*(P838)rt_nil_check(F->pm_1781)).next;
}
if (((F->a_1782 != NULL) || (F->pm_1781 != NULL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->s_531)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P819)rt_nil_check((*(P826)rt_nil_check(F->s_531)).name))->all)); b_; }));
}
if ((F->act_1791 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P819)rt_nil_check(F->act_1791))->all)), rt_str(", &", 3)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1780)).cname))->all)), rt_str("decl, ", 6)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1780)).cname))->all)), rt_str(", ", 2)), F->nf_1792), rt_str("); }", 4)); b_; }));
} else {
f_user_create_542(F->s_531, F->y_1780, &(((P819)rt_nil_check(F->lv_1783))->all), F->at_1788, &F->nf_1792);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_536(rstr *name_533, P832 t_534, rstr *place_535) {
  struct f_hidden_var_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_533 = name_533;
F->t_534 = t_534;
F->place_535 = place_535;
F->y_1799 = NULL;
F->y_1799 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_533)));
(*(P836)rt_nil_check(F->y_1799)).t = F->t_534;
(*(P836)rt_nil_check(F->y_1799)).level = ((rt_int)0LL);
(*(P836)rt_nil_check(F->y_1799)).access = f_mk_3(&(*F->place_535));
f_define_159(F->y_1799, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_542(P826 s_537, P836 y_538, rstr *uv_539, P832 ut_540, rstr *nf_541) {
  struct f_user_create_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_537 = s_537;
F->y_538 = y_538;
F->uv_539 = uv_539;
F->ut_540 = ut_540;
F->nf_541 = nf_541;
F->t_1800 = NULL;
F->saved_1801 = NULL;
F->saved_1801 = g_code_876;
F->hook_1802 = NULL;
F->hook_1802 = f_new_buffer_24();
F->un_1803 = NULL;
F->un_1803 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line));
F->hn_1804 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1805 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1806 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1807 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_536(&F->uname_1806, F->ut_540, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->ut_540)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P826)rt_nil_check(F->un_1803)).name = f_mk_3(&F->uname_1806);
g_code_876 = F->hook_1802;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1803, rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line)), 1, &F->t_1800)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1803, rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line)), 1, &F->t_1800)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1803, rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line)), 1, &F->t_1800)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1803, rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line)), 1, &F->t_1800)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_876 = F->saved_1801;
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1804), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1804), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P819)rt_nil_check((*(P836)rt_nil_check(g_func_sym_890)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_873, F->hook_1802);
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1805), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1805, rt_str("->hook = ", 9)), F->hn_1804), rt_str("; ", 2)), F->aa_1805), rt_str("->ua = &", 8)), (*F->uv_539)), rt_str("; ", 2)), F->aa_1805), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_778(F->ut_540)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_878)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1805, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1805), rt_str(", &", 3)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_538)).cname))->all)), rt_str("decl, ", 6)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_538)).cname))->all)), rt_str(", ", 2)), (*F->nf_541)), rt_str(");", 2)); b_; }));
f_hidden_var_536(&F->aname_1807, g_ty_act_916, &F->aa_1805);
{
F->start_1808 = NULL;
F->start_1808 = f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P826)rt_nil_check(F->s_537)).a, rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line));
F->an_1809 = NULL;
F->an_1809 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->s_537)).line));
(*(P826)rt_nil_check(F->an_1809)).name = f_mk_3(&F->aname_1807);
(*(P826)rt_nil_check((*(P826)rt_nil_check(F->start_1808)).b)).next = F->an_1809;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_788(F->start_1808, 1, &F->t_1800), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_547(P826 inv_543, rstr *arr_544, rt_int i_545, int mixed_546) {
  struct f_wait_alt_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_543 = inv_543;
F->arr_544 = arr_544;
F->i_545 = i_545;
F->mixed_546 = mixed_546;
F->lv_1810 = NULL;
F->t_1811 = NULL;
F->vt_1812 = NULL;
F->c_1813 = NULL;
F->ro_1814 = RT_R_EUNDEF;
F->fn_1815 = NULL;
F->args_1816 = NULL;
F->slot_1817 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_544), rt_str("[", 1)), f_itos_7(F->i_545)), rt_str("]", 1)));
if (((rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_543)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1815 = (*(P826)rt_nil_check(F->inv_543)).a;
F->args_1816 = (*(P826)rt_nil_check(F->inv_543)).b;
if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_627(F->args_1816, &F->lv_1810, &F->t_1811, &F->c_1813, &F->ro_1814);
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1811)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1818 = NULL;
F->dt_1819 = NULL;
f_lvalue_627((*(P826)rt_nil_check(F->args_1816)).next, &F->dv_1818, &F->dt_1819, &F->c_1813, &F->ro_1814);
f_check_type_223(F->dt_1819, (*(P832)rt_nil_check(F->t_1811)).elem, rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P819)rt_nil_check(F->lv_1810))->all)), rt_str(", &", 3)), (((P819)rt_nil_check(F->dv_1818))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1820 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1821 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_1816)).next, (*(P832)rt_nil_check(F->t_1811)).elem, &F->vt_1812));
f_check_type_223(F->vt_1812, (*(P832)rt_nil_check(F->t_1811)).elem, rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P832)rt_nil_check(F->t_1811)).elem), rt_str(" ", 1)), F->tmp_1820), rt_str(" = ", 3)), F->v_1821), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P819)rt_nil_check(F->lv_1810))->all)), rt_str(", &", 3)), F->tmp_1820), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_1816) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_804(F->args_1816)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1822 = rt_str_copy(f_gexpr_658(F->args_1816, g_ty_int_906, &F->vt_1812));
if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY", 5)) && F->mixed_546)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1822), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1822), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1822), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1817, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_530(F->args_1816)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->inv_543)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_1815)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_549(P826 inv_548) {
  struct f_builtin_wait_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_548 = inv_548;
F->lv_1823 = NULL;
F->t_1824 = NULL;
F->c_1825 = NULL;
F->ro_1826 = RT_R_EUNDEF;
F->saved_1827 = NULL;
F->saved_1827 = g_code_876;
F->ok_1828 = RT_R_EUNDEF;
F->ok_1828 = 0;
if (((rt_r_ichk((*(P826)rt_nil_check(F->inv_548)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_548)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = f_new_buffer_24();
{ rt_frame xf1829;
if (RT_TRY(xf1829)) {
f_lvalue_627((*(P826)rt_nil_check(F->inv_548)).b, &F->lv_1823, &F->t_1824, &F->c_1825, &F->ro_1826);
F->ok_1828 = (rt_r_ichk((*(P832)rt_nil_check(F->t_1824)).kind) == (((rt_int)12LL)));
RT_POP(xf1829);
} else {
RT_POP(xf1829);
int x1830 = rt_xcur;
if (0 || x1830 == ex_compile_error_1) {
F->ok_1828 = 0;
} else {
rt_raise(x1830);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = F->saved_1827;
F->result_ = rt_r_echk(F->ok_1828);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_554(P826 inv_550, rstr *op_551, rstr *q_552, int is_stmt_553) {
  struct f_wait_op_554fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_550 = inv_550;
F->op_551 = op_551;
F->q_552 = q_552;
F->is_stmt_553 = is_stmt_553;
F->x_1831 = NULL;
F->x_1831 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->inv_550)).line));
F->f_1832 = NULL;
F->f_1832 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->inv_550)).line));
F->qn_1833 = NULL;
F->qn_1833 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->inv_550)).line));
F->t_1834 = NULL;
(*(P826)rt_nil_check(F->f_1832)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_550)).a)).name))->all), rt_str("_", 1)), (*F->op_551)); b_; }));
(*(P826)rt_nil_check(F->qn_1833)).name = f_mk_3(&(*F->q_552));
(*(P826)rt_nil_check(F->qn_1833)).next = (*(P826)rt_nil_check(F->inv_550)).b;
(*(P826)rt_nil_check(F->x_1831)).a = F->f_1832;
(*(P826)rt_nil_check(F->x_1831)).b = F->qn_1833;
{
F->r_1835 = rt_str_copy(f_gcall_788(F->x_1831, F->is_stmt_553, &F->t_1834));
if ((!F->is_stmt_553)) {
f_check_type_223(F->t_1834, g_ty_bool_907, rt_r_ichk((*(P826)rt_nil_check(F->inv_550)).line));
}
F->result_ = F->r_1835;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_559(P826 s_555, rstr *arr_556, rstr *w_557, rt_int n_558) {
  struct f_user_wait_559fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_555 = s_555;
F->arr_556 = arr_556;
F->w_557 = w_557;
F->n_558 = n_558;
F->a_1836 = NULL;
F->a_1836 = (*(P826)rt_nil_check(F->s_555)).a;
F->i_1837 = RT_R_IUNDEF;
F->i_1837 = ((rt_int)0LL);
F->tests_1838 = NULL;
F->tests_1838 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1839 = NULL;
F->revokes_1839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1836 != NULL)) {
F->inv_1840 = NULL;
F->inv_1840 = (*(P826)rt_nil_check(F->a_1836)).a;
while ((F->inv_1840 != NULL)) {
if (f_builtin_wait_549(F->inv_1840)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_547(F->inv_1840, &(*F->arr_556), rt_r_ichk(F->i_1837), 1); b_; }));
} else {
F->st_1841 = NULL;
F->st_1841 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->inv_1840)).line));
F->c_1842 = NULL;
F->qt_1843 = NULL;
F->qname_1844 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1845 = NULL;
F->y_1845 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1844));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_556), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1837))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P826)rt_nil_check(F->st_1841)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->inv_1840)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1843 = f_resolve_subtype_256(F->st_1841, &F->c_1842);
{
F->access_1846 = rt_str_copy(f_storage_455(&F->qname_1844, F->qt_1843));
f_init_storage_310(&F->access_1846, F->qt_1843, F->c_1842);
(*(P836)rt_nil_check(F->y_1845)).t = F->qt_1843;
(*(P836)rt_nil_check(F->y_1845)).c = F->c_1842;
f_bind_458(F->y_1845, &F->access_1846);
f_define_159(F->y_1845, rt_r_ichk((*(P826)rt_nil_check(F->inv_1840)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_554(F->inv_1840, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1844, 1), rt_str(";", 1)); b_; }));
F->tests_1838 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->tests_1838))->all), rt_str("if (", 4)), f_wait_op_554(F->inv_1840, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1844, 0)), rt_str(") { ", 4)), f_wait_op_554(F->inv_1840, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1844, 1)), rt_str("; ", 2)), (*F->w_557)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1837))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->revokes_1839))->all), f_wait_op_554(F->inv_1840, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1844, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1837 = rt_add(rt_r_ichk(F->i_1837), ((rt_int)1LL));
F->inv_1840 = (*(P826)rt_nil_check(F->inv_1840)).next;
}
F->a_1836 = (*(P826)rt_nil_check(F->a_1836)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_557)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P819)rt_nil_check(F->tests_1838))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_557), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_558)), rt_str(", ", 2)), (*F->arr_556)), rt_str("); if (", 7)), (*F->w_557)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_558)), rt_str(", ", 2)), (*F->arr_556)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_557)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_557)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P819)rt_nil_check(F->revokes_1839))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_561(P826 s_560) {
  struct f_st_wait_561fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_560 = s_560;
F->a_1847 = NULL;
F->a_1847 = (*(P826)rt_nil_check(F->s_560)).a;
F->n_1848 = RT_R_IUNDEF;
F->n_1848 = ((rt_int)0LL);
F->first_1849 = RT_R_EUNDEF;
F->first_1849 = 1;
F->inits_1850 = NULL;
F->inits_1850 = f_new_buffer_24();
F->user_1851 = RT_R_EUNDEF;
F->user_1851 = 0;
F->arr_1852 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1853 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1847 != NULL)) {
F->inv_1854 = NULL;
F->inv_1854 = (*(P826)rt_nil_check(F->a_1847)).a;
F->n_1848 = rt_add(rt_r_ichk(F->n_1848), f_list_len_67((*(P826)rt_nil_check(F->a_1847)).a));
while ((F->inv_1854 != NULL)) {
if ((!f_builtin_wait_549(F->inv_1854))) {
F->user_1851 = 1;
}
F->inv_1854 = (*(P826)rt_nil_check(F->inv_1854)).next;
}
F->a_1847 = (*(P826)rt_nil_check(F->a_1847)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1852), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1848))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1851)) {
f_user_wait_559(F->s_560, &F->arr_1852, &F->w_1853, rt_r_ichk(F->n_1848));
} else {
F->a_1847 = (*(P826)rt_nil_check(F->s_560)).a;
F->n_1848 = ((rt_int)0LL);
while ((F->a_1847 != NULL)) {
F->inv_1855 = NULL;
F->inv_1855 = (*(P826)rt_nil_check(F->a_1847)).a;
while ((F->inv_1855 != NULL)) {
f_put_27(F->inits_1850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_547(F->inv_1855, &F->arr_1852, rt_r_ichk(F->n_1848), 0); b_; }));
F->n_1848 = rt_add(rt_r_ichk(F->n_1848), ((rt_int)1LL));
F->inv_1855 = (*(P826)rt_nil_check(F->inv_1855)).next;
}
F->a_1847 = (*(P826)rt_nil_check(F->a_1847)).next;
}
f_splice_34(g_code_876, F->inits_1850);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1853), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1848))), rt_str(", ", 2)), F->arr_1852), rt_str(");", 2)); b_; }));
}
F->a_1847 = (*(P826)rt_nil_check(F->s_560)).a;
F->n_1848 = ((rt_int)0LL);
while ((F->a_1847 != NULL)) {
F->conds_1856 = NULL;
F->conds_1856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1858 = ((rt_int)1LL), hi1859 = f_list_len_67((*(P826)rt_nil_check(F->a_1847)).a);
for (rt_int it1860 = lo1858; it1860 <= hi1859; it1860++) {
F->i_1857 = it1860;
F->conds_1856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->conds_1856))->all), rt_str(" || ", 4)), F->w_1853), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1848))); b_; }));
F->n_1848 = rt_add(rt_r_ichk(F->n_1848), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1849)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P819)rt_nil_check(F->conds_1856))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P819)rt_nil_check(F->conds_1856))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1849 = 0;
f_gen_body_492((*(P826)rt_nil_check(F->a_1847)).b);
F->a_1847 = (*(P826)rt_nil_check(F->a_1847)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P826 f_call_node_565(rstr *name_562, P826 arg_563, rt_int line_564) {
  struct f_call_node_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_562 = name_562;
F->arg_563 = arg_563;
F->line_564 = line_564;
F->x_1861 = NULL;
F->x_1861 = f_nn_61((((rt_int)10LL)), F->line_564);
F->f_1862 = NULL;
F->f_1862 = f_nn_61((((rt_int)7LL)), F->line_564);
(*(P826)rt_nil_check(F->f_1862)).name = f_mk_3(&(*F->name_562));
(*(P826)rt_nil_check(F->x_1861)).a = F->f_1862;
(*(P826)rt_nil_check(F->x_1861)).b = f_copy_node_679(F->arg_563);
(*(P826)rt_nil_check((*(P826)rt_nil_check(F->x_1861)).b)).next = NULL;
F->result_ = F->x_1861;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_567(P826 s_566) {
  struct f_user_region_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_566 = s_566;
F->t_1863 = NULL;
F->f_1864 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1865 = rt_str_copy(f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P826)rt_nil_check(F->s_566)).a, rt_r_ichk((*(P826)rt_nil_check(F->s_566)).line)), 1, &F->t_1863));
F->unlock_1866 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_788(f_call_node_565(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P826)rt_nil_check(F->s_566)).a, rt_r_ichk((*(P826)rt_nil_check(F->s_566)).line)), 1, &F->t_1863)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1865), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1864), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1864), rt_str(")) {", 4)); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1864), rt_str("); ", 3)), F->unlock_1866); b_; }));
f_gen_body_492((*(P826)rt_nil_check(F->s_566)).b);
f_pop_cleanup_501();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1864), rt_str("); ", 3)), F->unlock_1866); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1864), rt_str("); ", 3)), F->unlock_1866), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_569(P826 s_568) {
  struct f_st_region_569fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_568 = s_568;
F->lv_1867 = NULL;
F->t_1868 = NULL;
F->c_1869 = NULL;
F->ro_1870 = RT_R_EUNDEF;
F->lk_1871 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1872 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_627((*(P826)rt_nil_check(F->s_568)).a, &F->lv_1867, &F->t_1868, &F->c_1869, &F->ro_1870);
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_1868)).kind) != (((rt_int)13LL)))) {
f_user_region_567(F->s_568);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1871), rt_str(" = &", 4)), (((P819)rt_nil_check(F->lv_1867))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1871), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1872), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1872), rt_str(")) {", 4)); b_; }));
f_push_cleanup_500(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1872), rt_str("); rt_region_leave(", 19)), F->lk_1871), rt_str(");", 2)); b_; }));
f_gen_body_492((*(P826)rt_nil_check(F->s_568)).b);
f_pop_cleanup_501();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1872), rt_str("); rt_region_leave(", 19)), F->lk_1871), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1872), rt_str("); rt_region_leave(", 19)), F->lk_1871), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P826 f_gparam_572(P826 g_570, rstr *name_571) {
  struct f_gparam_572fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_570 = g_570;
F->name_571 = name_571;
F->p_1873 = NULL;
F->p_1873 = (*(P826)rt_nil_check(F->g_570)).a;
while ((F->p_1873 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1873)).name))->all), (*F->name_571))) {
F->result_ = F->p_1873;
goto ret_;
}
F->p_1873 = (*(P826)rt_nil_check(F->p_1873)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_bind_sym_574(P826 p_573) {
  struct f_bind_sym_574fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_573 = p_573;
F->y_1874 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->p_573)).ival) <= ((rt_int)2LL))) {
F->y_1874 = f_new_sym_172((((rt_int)5LL)), (*(P826)rt_nil_check(F->p_573)).name);
} else {
F->y_1874 = f_new_sym_172((((rt_int)2LL)), (*(P826)rt_nil_check(F->p_573)).name);
}
F->result_ = F->y_1874;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_577(P836 a_575, P836 b_576) {
  struct f_same_binds_577fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_575 = a_575;
F->b_576 = b_576;
F->x_1875 = NULL;
F->x_1875 = F->a_575;
F->y_1876 = NULL;
F->y_1876 = F->b_576;
while (((F->x_1875 != NULL) && (F->y_1876 != NULL))) {
if (((!rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->x_1875)).name))->all), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_1876)).name))->all))) || (!f_same_binding_580(F->x_1875, F->y_1876)))) {
F->result_ = 0;
goto ret_;
}
F->x_1875 = (*(P836)rt_nil_check(F->x_1875)).mnext;
F->y_1876 = (*(P836)rt_nil_check(F->y_1876)).mnext;
}
F->result_ = ((F->x_1875 == NULL) && (F->y_1876 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_580(P836 a_578, P836 b_579) {
  struct f_same_binding_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_578 = a_578;
F->b_579 = b_579;
if ((rt_r_ichk((*(P836)rt_nil_check(F->a_578)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P836)rt_nil_check(F->b_579)).kind) == (((rt_int)5LL))) && f_same_212((*(P836)rt_nil_check(F->a_578)).t, (*(P836)rt_nil_check(F->b_579)).t));
goto ret_;
}
if (((rt_r_ichk((*(P836)rt_nil_check(F->a_578)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P836)rt_nil_check(F->a_578)).hasmv))) {
F->result_ = (rt_r_echk((*(P836)rt_nil_check(F->b_579)).hasmv) && (rt_r_ichk((*(P836)rt_nil_check(F->a_578)).mvalue) == rt_r_ichk((*(P836)rt_nil_check(F->b_579)).mvalue)));
goto ret_;
}
F->result_ = ((((*(P836)rt_nil_check(F->a_578)).cname != NULL) && ((*(P836)rt_nil_check(F->b_579)).cname != NULL)) && rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->a_578)).cname))->all), (((P819)rt_nil_check((*(P836)rt_nil_check(F->b_579)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_tt_binds_585(P826 gd_581, P826 formals_582, P826 actuals_583, rt_int line_584) {
  struct f_tt_binds_585fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_581 = gd_581;
F->formals_582 = formals_582;
F->actuals_583 = actuals_583;
F->line_584 = line_584;
F->f_1877 = NULL;
F->f_1877 = F->formals_582;
F->a_1878 = NULL;
F->a_1878 = F->actuals_583;
F->binds_1879 = NULL;
F->c_1880 = NULL;
F->at_1881 = NULL;
while (((F->f_1877 != NULL) && (F->a_1878 != NULL))) {
F->p_1882 = NULL;
F->p_1882 = f_gparam_572(F->gd_581, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->f_1877)).name))->all));
F->b_1883 = NULL;
if ((F->p_1882 == NULL)) {
f_fail_23(F->line_584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->f_1877)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1883 = f_bind_sym_574(F->p_1882);
if ((rt_r_ichk((*(P826)rt_nil_check(F->p_1882)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_1878)).kind) >= (((rt_int)70LL)))) {
(*(P836)rt_nil_check(F->b_1883)).t = f_resolve_subtype_256(F->a_1878, &F->c_1880);
} else {
F->st_1884 = NULL;
F->st_1884 = f_nn_61((((rt_int)80LL)), F->line_584);
(*(P826)rt_nil_check(F->st_1884)).name = (*(P826)rt_nil_check(F->a_1878)).name;
(*(P836)rt_nil_check(F->b_1883)).t = f_resolve_subtype_256(F->st_1884, &F->c_1880);
}
(*(P836)rt_nil_check(F->b_1883)).c = F->c_1880;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->p_1882)).ival) <= ((rt_int)5LL))) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->a_1878)).kind) != (((rt_int)7LL))) || (f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->a_1878)).name))->all)) == NULL))) {
f_fail_23(F->line_584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1882)).name))->all)); b_; }));
}
F->b_1883 = f_copy_sym_388(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->a_1878)).name))->all)));
(*(P836)rt_nil_check(F->b_1883)).name = (*(P826)rt_nil_check(F->p_1882)).name;
} else {
F->ok_1885 = RT_R_EUNDEF;
(*(P836)rt_nil_check(F->b_1883)).t = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1882)).a, &F->c_1880);
(*(P836)rt_nil_check(F->b_1883)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_658(F->a_1878, (*(P836)rt_nil_check(F->b_1883)).t, &F->at_1881); b_; }));
(*(P836)rt_nil_check(F->b_1883)).mvalue = f_manifest_333(F->a_1878, &F->ok_1885);
(*(P836)rt_nil_check(F->b_1883)).hasmv = rt_r_echk(F->ok_1885);
}
(*(P836)rt_nil_check(F->b_1883)).mnext = F->binds_1879;
F->binds_1879 = F->b_1883;
F->f_1877 = (*(P826)rt_nil_check(F->f_1877)).next;
F->a_1878 = (*(P826)rt_nil_check(F->a_1878)).next;
}
F->result_ = F->binds_1879;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_587(P826 st_586) {
  struct f_generic_use_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_586 = st_586;
if ((rt_r_ichk((*(P826)rt_nil_check(F->st_586)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P836)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P826)rt_nil_check(F->st_586)).kind) == (((rt_int)80LL))) && ((*(P826)rt_nil_check(F->st_586)).a != NULL)) && (f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->st_586)).name))->all)) != NULL)) && ((*(P836)rt_nil_check(f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->st_586)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_infer_from_592(P826 gd_588, P826 pat_589, P832 t_590, P836 known_591) {
  struct f_infer_from_592fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_588 = gd_588;
F->pat_589 = pat_589;
F->t_590 = t_590;
F->known_591 = known_591;
F->binds_1886 = NULL;
F->binds_1886 = F->known_591;
F->e_1887 = NULL;
F->e_1887 = (*(P826)rt_nil_check(F->pat_589)).a;
F->tp_1888 = NULL;
if (((F->t_590 == NULL) || ((*(P832)rt_nil_check(F->t_590)).gen == NULL))) {
F->result_ = F->binds_1886;
goto ret_;
}
F->tp_1888 = (*(P826)rt_nil_check((*(P836)rt_nil_check((*(P832)rt_nil_check(F->t_590)).gen)).decl)).a;
if ((rt_r_ichk((*(P826)rt_nil_check(F->pat_589)).kind) == (((rt_int)78LL)))) {
F->e_1887 = f_copy_node_679((*(P826)rt_nil_check(F->pat_589)).a);
(*(P826)rt_nil_check(F->e_1887)).next = NULL;
}
while (((F->e_1887 != NULL) && (F->tp_1888 != NULL))) {
F->nm_1889 = NULL;
if (((rt_r_ichk((*(P826)rt_nil_check(F->e_1887)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->e_1887)).kind) == (((rt_int)80LL))))) {
F->nm_1889 = (*(P826)rt_nil_check(F->e_1887)).name;
}
if ((((F->nm_1889 != NULL) && (f_gparam_572(F->gd_588, &(((P819)rt_nil_check(F->nm_1889))->all)) != NULL)) && ((*(P826)rt_nil_check(f_gparam_572(F->gd_588, &(((P819)rt_nil_check(F->nm_1889))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1890 = NULL;
F->q_1890 = F->binds_1886;
F->have_1891 = RT_R_EUNDEF;
F->have_1891 = 0;
while ((F->q_1890 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->q_1890)).name))->all), (((P819)rt_nil_check(F->nm_1889))->all))) {
F->have_1891 = 1;
}
F->q_1890 = (*(P836)rt_nil_check(F->q_1890)).mnext;
}
if ((!rt_r_echk(F->have_1891))) {
F->g_1892 = NULL;
F->g_1892 = (*(P832)rt_nil_check(F->t_590)).gbinds;
while ((F->g_1892 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->g_1892)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->tp_1888)).name))->all))) {
F->b_1893 = NULL;
F->b_1893 = f_bind_sym_574(f_gparam_572(F->gd_588, &(((P819)rt_nil_check(F->nm_1889))->all)));
(*(P836)rt_nil_check(F->b_1893)).t = (*(P836)rt_nil_check(F->g_1892)).t;
(*(P836)rt_nil_check(F->b_1893)).c = (*(P836)rt_nil_check(F->g_1892)).c;
(*(P836)rt_nil_check(F->b_1893)).mnext = F->binds_1886;
F->binds_1886 = F->b_1893;
}
F->g_1892 = (*(P836)rt_nil_check(F->g_1892)).mnext;
}
}
}
F->e_1887 = (*(P826)rt_nil_check(F->e_1887)).next;
F->tp_1888 = (*(P826)rt_nil_check(F->tp_1888)).next;
}
F->result_ = F->binds_1886;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_instantiate_type_598(P836 g_593, P826 tt_594, P826 args_595, P828 *c_596, rt_int line_597) {
  struct f_instantiate_type_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_593 = g_593;
F->tt_594 = tt_594;
F->args_595 = args_595;
F->c_596 = c_596;
F->c_596v = *F->c_596;
F->line_597 = line_597;
F->gd_1894 = NULL;
F->gd_1894 = (*(P836)rt_nil_check(F->g_593)).decl;
F->pat_1895 = NULL;
F->pat_1895 = (*(P826)rt_nil_check(F->gd_1894)).b;
F->binds_1896 = NULL;
F->binds_1896 = f_tt_binds_585(F->gd_1894, (*(P826)rt_nil_check(F->pat_1895)).e, F->tt_594, F->line_597);
F->inst_1897 = NULL;
F->inst_1897 = g_all_insts_864;
F->t_1898 = NULL;
F->saved_caps_1899 = NULL;
F->saved_caps_1899 = g_caps_881;
F->saved_env_1900 = NULL;
F->saved_env_1900 = g_genv_863;
F->saved_gdepth_1901 = RT_R_IUNDEF;
F->saved_gdepth_1901 = rt_r_ichk(g_gdepth_895);
F->c_596v = f_new_cons_175();
(*(P828)rt_nil_check(F->c_596v)).args = F->args_595;
while ((F->inst_1897 != NULL)) {
if ((((*(P836)rt_nil_check(F->inst_1897)).decl == F->pat_1895) && f_same_binds_577((*(P836)rt_nil_check(F->inst_1897)).members, F->binds_1896))) {
F->result_ = (*(P836)rt_nil_check(F->inst_1897)).t;
goto ret_;
}
F->inst_1897 = (*(P836)rt_nil_check(F->inst_1897)).insts;
}
f_open_scope_168();
{
F->b_1902 = NULL;
F->b_1902 = F->binds_1896;
while ((F->b_1902 != NULL)) {
f_define_159(F->b_1902, F->line_597);
F->b_1902 = (*(P836)rt_nil_check(F->b_1902)).mnext;
}
}
g_caps_881 = NULL;
g_genv_863 = (*(P836)rt_nil_check(F->g_593)).env;
g_gdepth_895 = rt_r_ichk(g_depth_865);
{
F->y_1903 = NULL;
F->y_1903 = f_new_sym_172((((rt_int)5LL)), (*(P826)rt_nil_check(F->pat_1895)).name);
F->yc_1904 = NULL;
(*(P836)rt_nil_check(F->y_1903)).decl = F->pat_1895;
if ((rt_r_ichk((*(P826)rt_nil_check(F->pat_1895)).kind) == (((rt_int)44LL)))) {
F->t_1898 = f_new_typ_174((((rt_int)8LL)));
(*(P832)rt_nil_check(F->t_1898)).name = (*(P826)rt_nil_check(F->pat_1895)).name;
(*(P832)rt_nil_check(F->t_1898)).decl = F->pat_1895;
(*(P836)rt_nil_check(F->y_1903)).t = F->t_1898;
f_define_159(F->y_1903, F->line_597);
f_finish_ptr_414(F->t_1898);
} else {
f_define_159(F->y_1903, F->line_597);
F->t_1898 = f_new_type_306(F->y_1903, f_nn_61((((rt_int)80LL)), F->line_597), &F->yc_1904);
}
}
g_caps_881 = F->saved_caps_1899;
g_genv_863 = F->saved_env_1900;
g_gdepth_895 = rt_r_ichk(F->saved_gdepth_1901);
(*(P832)rt_nil_check(F->t_1898)).gen = F->g_593;
(*(P832)rt_nil_check(F->t_1898)).gbinds = F->binds_1896;
f_close_scope_169();
{ R837 *cell1905 = rt_alloc(sizeof(R837));
(*cell1905).name = NULL;
(*cell1905).t = NULL;
(*cell1905).c = NULL;
(*cell1905).access = NULL;
(*cell1905).cname = NULL;
(*cell1905).st = NULL;
(*cell1905).decl = NULL;
(*cell1905).params = NULL;
(*cell1905).result = NULL;
(*cell1905).members = NULL;
(*cell1905).mnext = NULL;
(*cell1905).binds = NULL;
(*cell1905).insts = NULL;
(*cell1905).env = NULL;
(*cell1905).chain = NULL;
(*cell1905).stack = NULL;
(*cell1905).owner = NULL;
(*cell1905).gctx = NULL;
(*cell1905).mv = NULL;
(*cell1905).reqs = NULL;
(*cell1905).home = NULL;
(*cell1905).capn = NULL;
(*cell1905).tbinds = NULL;
F->inst_1897 = cell1905;
}
(*(P836)rt_nil_check(F->inst_1897)).kind = (((rt_int)5LL));
(*(P836)rt_nil_check(F->inst_1897)).name = (*(P836)rt_nil_check(F->g_593)).name;
(*(P836)rt_nil_check(F->inst_1897)).decl = F->pat_1895;
(*(P836)rt_nil_check(F->inst_1897)).t = F->t_1898;
(*(P836)rt_nil_check(F->inst_1897)).members = F->binds_1896;
(*(P836)rt_nil_check(F->inst_1897)).insts = g_all_insts_864;
g_all_insts_864 = F->inst_1897;
F->result_ = F->t_1898;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_596) = F->c_596v;
  RT_FPOP();
  return F->result_;
}

static P836 f_instantiate_603(P836 g_599, P826 tt_600, P826 args_601, rt_int line_602) {
  struct f_instantiate_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_599 = g_599;
F->tt_600 = tt_600;
F->args_601 = args_601;
F->line_602 = line_602;
F->gd_1906 = NULL;
F->gd_1906 = (*(P836)rt_nil_check(F->g_599)).decl;
F->pat_1907 = NULL;
F->pat_1907 = (*(P826)rt_nil_check(F->gd_1906)).b;
F->binds_1908 = NULL;
F->f_1909 = NULL;
F->f_1909 = (*(P826)rt_nil_check(F->pat_1907)).e;
F->a_1910 = NULL;
F->a_1910 = F->tt_600;
F->fp_1911 = NULL;
F->fp_1911 = (*(P826)rt_nil_check(F->pat_1907)).a;
F->inst_1912 = NULL;
F->at_1913 = NULL;
F->c_1914 = NULL;
F->saved_fctx_1915 = NULL;
F->saved_fctx_1915 = g_fctx_880;
F->saved_in_1916 = RT_R_EUNDEF;
F->saved_in_1916 = rt_r_echk(g_in_func_878);
F->saved_level_1917 = RT_R_IUNDEF;
F->saved_level_1917 = rt_r_ichk(g_cur_level_879);
F->saved_sym_1918 = NULL;
F->saved_sym_1918 = g_func_sym_890;
F->saved_code_1919 = NULL;
F->saved_code_1919 = g_code_876;
F->saved_env_1920 = NULL;
F->saved_env_1920 = g_genv_863;
F->saved_gdepth_1921 = RT_R_IUNDEF;
F->saved_gdepth_1921 = rt_r_ichk(g_gdepth_895);
F->binds_1908 = f_tt_binds_585(F->gd_1906, F->f_1909, F->a_1910, F->line_602);
F->a_1910 = F->args_601;
while (((F->fp_1911 != NULL) && (F->a_1910 != NULL))) {
if (f_generic_use_587((*(P826)rt_nil_check(F->fp_1911)).a)) {
F->v_1922 = rt_str_copy(f_gexpr_658(F->a_1910, NULL, &F->at_1913));
F->binds_1908 = f_infer_from_592(F->gd_1906, (*(P826)rt_nil_check(F->fp_1911)).a, F->at_1913, F->binds_1908);
} else if ((((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->fp_1911)).a)).kind) == (((rt_int)80LL))) && (f_gparam_572(F->gd_1906, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->fp_1911)).a)).name))->all)) != NULL)) && ((*(P826)rt_nil_check(f_gparam_572(F->gd_1906, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->fp_1911)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1923 = RT_R_EUNDEF;
F->known_1923 = 0;
F->q_1924 = NULL;
F->q_1924 = F->binds_1908;
while ((F->q_1924 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->q_1924)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->fp_1911)).a)).name))->all))) {
F->known_1923 = 1;
}
F->q_1924 = (*(P836)rt_nil_check(F->q_1924)).mnext;
}
if ((!rt_r_echk(F->known_1923))) {
F->b_1925 = NULL;
F->b_1925 = f_bind_sym_574(f_gparam_572(F->gd_1906, &(((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->fp_1911)).a)).name))->all)));
F->v_1926 = rt_str_copy(f_gexpr_658(F->a_1910, NULL, &F->at_1913));
(*(P836)rt_nil_check(F->b_1925)).t = F->at_1913;
(*(P836)rt_nil_check(F->b_1925)).c = g_no_cons_918;
(*(P836)rt_nil_check(F->b_1925)).mnext = F->binds_1908;
F->binds_1908 = F->b_1925;
}
}
F->fp_1911 = (*(P826)rt_nil_check(F->fp_1911)).next;
F->a_1910 = (*(P826)rt_nil_check(F->a_1910)).next;
}
F->inst_1912 = g_all_insts_864;
while ((F->inst_1912 != NULL)) {
if ((((*(P836)rt_nil_check(F->inst_1912)).decl == F->pat_1907) && f_same_binds_577((*(P836)rt_nil_check(F->inst_1912)).members, F->binds_1908))) {
F->result_ = F->inst_1912;
goto ret_;
}
F->inst_1912 = (*(P836)rt_nil_check(F->inst_1912)).insts;
}
g_fctx_880 = (*(P836)rt_nil_check(F->g_599)).gctx;
g_in_func_878 = (rt_r_ichk((*(P836)rt_nil_check(F->g_599)).level) > ((rt_int)0LL));
g_cur_level_879 = rt_r_ichk((*(P836)rt_nil_check(F->g_599)).level);
g_func_sym_890 = (*(P836)rt_nil_check(F->g_599)).owner;
g_code_876 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_895 = rt_r_ichk(g_depth_865);
{
F->b_1927 = NULL;
F->b_1927 = F->binds_1908;
while ((F->b_1927 != NULL)) {
f_define_159(F->b_1927, F->line_602);
F->b_1927 = (*(P836)rt_nil_check(F->b_1927)).mnext;
}
}
g_genv_863 = (*(P836)rt_nil_check(F->g_599)).env;
F->inst_1912 = f_build_subprogram_441(F->pat_1907);
(*(P836)rt_nil_check(F->inst_1912)).members = F->binds_1908;
(*(P836)rt_nil_check(F->inst_1912)).insts = g_all_insts_864;
g_all_insts_864 = F->inst_1912;
f_define_159(F->inst_1912, F->line_602);
f_gen_subprogram_471(F->pat_1907, F->inst_1912);
f_close_scope_169();
g_fctx_880 = F->saved_fctx_1915;
g_in_func_878 = rt_r_echk(F->saved_in_1916);
g_cur_level_879 = rt_r_ichk(F->saved_level_1917);
g_func_sym_890 = F->saved_sym_1918;
g_code_876 = F->saved_code_1919;
g_genv_863 = F->saved_env_1920;
g_gdepth_895 = rt_r_ichk(F->saved_gdepth_1921);
F->result_ = F->inst_1912;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_605(P836 y_604) {
  struct f_access_of_605fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_604 = y_604;
F->p_1928 = NULL;
F->p_1928 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_604)).level) <= ((rt_int)0LL))) {
F->result_ = (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_604)).access))->all);
goto ret_;
}
{ rt_int lo1930 = ((rt_int)1LL), hi1931 = rt_sub(rt_r_ichk(g_cur_level_879), rt_r_ichk((*(P836)rt_nil_check(F->y_604)).level));
for (rt_int it1932 = lo1930; it1932 <= hi1931; it1932++) {
F->i_1929 = it1932;
F->p_1928 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->p_1928))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P836)rt_nil_check(F->y_604)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P819)rt_nil_check(F->p_1928))->all)), rt_str("->", 2)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_604)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->p_1928))->all), rt_str("->", 2)), (((P819)rt_nil_check((*(P836)rt_nil_check(F->y_604)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_import_of_608(P826 l_606, rstr *name_607) {
  struct f_import_of_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_606 = l_606;
F->name_607 = name_607;
F->p_1933 = NULL;
F->p_1933 = F->l_606;
while ((F->p_1933 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1933)).name))->all), (*F->name_607))) {
F->result_ = F->p_1933;
goto ret_;
}
F->p_1933 = (*(P826)rt_nil_check(F->p_1933)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_611(P836 y_609, rt_int line_610) {
  struct f_check_import_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_609 = y_609;
F->line_610 = line_610;
F->c_1934 = NULL;
F->c_1934 = g_fctx_880;
F->ro_1935 = RT_R_EUNDEF;
F->ro_1935 = 0;
while (((F->c_1934 != NULL) && (rt_r_ichk((*(P836)rt_nil_check(F->y_609)).depth) < rt_r_ichk((*(P843)rt_nil_check(F->c_1934)).depth)))) {
if ((!rt_r_echk((*(P843)rt_nil_check(F->c_1934)).all_imp))) {
F->imp_1936 = NULL;
F->imp_1936 = f_import_of_608((*(P843)rt_nil_check(F->c_1934)).imps, &(((P819)rt_nil_check((*(P836)rt_nil_check(F->y_609)).name))->all));
if ((F->imp_1936 == NULL)) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_609)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->imp_1936)).ival) == ((rt_int)1LL))) {
F->ro_1935 = 1;
}
}
F->c_1934 = (*(P843)rt_nil_check(F->c_1934)).next;
}
F->result_ = rt_r_echk(F->ro_1935);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_613(rstr *s_612) {
  struct f_c_ident_613fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_612 = s_612;
if (rt_str_eq((*F->s_612), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_612), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_612));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_616(P832 t_614, rstr *p_615) {
  struct f_cell_deref_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_614 = t_614;
F->p_615 = p_615;
if ((((*(P832)rt_nil_check(F->t_614)).decl != NULL) && ((*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_614)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_615)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_615)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_619(rstr *base_617, P832 t_618) {
  struct f_deref_619fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_617 = base_617;
F->t_618 = t_618;
if ((((*(P832)rt_nil_check(F->t_618)).decl != NULL) && ((*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_618)).decl)).b != NULL))) {
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_617)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->t_618)), rt_str(")rt_nil_check(", 14)), (*F->base_617)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_618)), rt_str(")(", 2)), (*F->base_617)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_618)), rt_str(")rt_nil_check(", 14)), (*F->base_617)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_621(P826 e_620) {
  struct f_is_lvalue_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_620 = e_620;
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_620)).kind) == (((rt_int)7LL)))) {
F->y_1937 = NULL;
F->y_1937 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_620)).name))->all));
F->result_ = ((F->y_1937 != NULL) && ((rt_r_ichk((*(P836)rt_nil_check(F->y_1937)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P836)rt_nil_check(F->y_1937)).kind) == (((rt_int)2LL))) && ((*(P836)rt_nil_check(F->y_1937)).mv == NULL)) && (!rt_r_echk((*(P836)rt_nil_check(F->y_1937)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_620)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_621((*(P826)rt_nil_check(F->e_620)).a);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_620)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_620)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_621((*(P826)rt_nil_check(F->e_620)).a));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_620)).kind) == (((rt_int)10LL)))) {
if ((((*(P826)rt_nil_check(F->e_620)).b != NULL) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_620)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_621((*(P826)rt_nil_check(F->e_620)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_627(P826 e_622, P819 *code_623, P832 *t_624, P828 *c_625, int *ro_626) {
  struct f_lvalue_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_622 = e_622;
F->code_623 = code_623;
F->code_623v = *F->code_623;
F->t_624 = t_624;
F->t_624v = *F->t_624;
F->c_625 = c_625;
F->c_625v = *F->c_625;
F->ro_626 = ro_626;
F->ro_626v = *F->ro_626;
F->base_1938 = NULL;
F->bt_1939 = NULL;
F->bc_1940 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->e_622)).kind) == (((rt_int)7LL)))) {
F->y_1941 = NULL;
F->y_1941 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_622)).name))->all));
if ((F->y_1941 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_622)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_622)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1941)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P836)rt_nil_check(F->y_1941)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_622)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_622)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_605(F->y_1941); b_; }));
F->t_624v = (*(P836)rt_nil_check(F->y_1941)).t;
F->c_625v = (*(P836)rt_nil_check(F->y_1941)).c;
F->ro_626v = rt_r_echk((*(P836)rt_nil_check(F->y_1941)).ro_flag);
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1941)).kind) == (((rt_int)1LL))) && f_check_import_611(F->y_1941, rt_r_ichk((*(P826)rt_nil_check(F->e_622)).line)))) {
F->ro_626v = 1;
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_622)).kind) == (((rt_int)17LL)))) {
f_lvalue_627((*(P826)rt_nil_check(F->e_622)).a, &F->code_623v, &F->t_624v, &F->c_625v, &F->ro_626v);
} else if (((((rt_r_ichk((*(P826)rt_nil_check(F->e_622)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_622)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_622)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_776((*(P826)rt_nil_check(F->e_622)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_622)).line), &F->t_624v); b_; }));
F->c_625v = g_no_cons_918;
F->ro_626v = 0;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_622)).kind) == (((rt_int)11LL)))) {
f_lvalue_627((*(P826)rt_nil_check(F->e_622)).a, &F->base_1938, &F->bt_1939, &F->bc_1940, &F->ro_626v);
f_select_on_635(&(((P819)rt_nil_check(F->base_1938))->all), F->bt_1939, F->e_622, &F->ro_626v, &F->code_623v, &F->t_624v, &F->c_625v);
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->e_622)).kind) == (((rt_int)10LL)))) {
f_lvalue_627((*(P826)rt_nil_check(F->e_622)).a, &F->base_1938, &F->bt_1939, &F->bc_1940, &F->ro_626v);
f_index_on_652(&(((P819)rt_nil_check(F->base_1938))->all), F->bt_1939, F->e_622, &F->ro_626v, 1, &F->code_623v, &F->t_624v, &F->c_625v);
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_622)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_623) = F->code_623v;  (*F->t_624) = F->t_624v;  (*F->c_625) = F->c_625v;  if (!rt_r_undef_BOOL(F->ro_626v)) (*F->ro_626) = F->ro_626v;
  RT_FPOP();
  return;
}

static void f_select_on_635(rstr *base_628, P832 bt_629, P826 e_630, int *ro_631, P819 *code_632, P832 *t_633, P828 *c_634) {
  struct f_select_on_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_628 = base_628;
F->bt_629 = bt_629;
F->e_630 = e_630;
F->ro_631 = ro_631;
F->code_632 = code_632;
F->code_632v = *F->code_632;
F->t_633 = t_633;
F->t_633v = *F->t_633;
F->c_634 = c_634;
F->c_634v = *F->c_634;
F->c_634v = g_no_cons_918;
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_629)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->bt_629);
(*F->ro_631) = 0;
if (((*(P832)rt_nil_check(F->bt_629)).decl != NULL)) {
F->p_1942 = NULL;
F->p_1942 = (*(P826)rt_nil_check((*(P832)rt_nil_check(F->bt_629)).decl)).b;
while ((F->p_1942 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1942)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))) {
F->pc_1943 = NULL;
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->bt_629)), rt_str(")rt_nil_check(", 14)), (*F->base_628)), rt_str("))->p_", 6)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1942)).name))->all))), rt_str(")", 1)); b_; }));
F->t_633v = f_resolve_subtype_256((*(P826)rt_nil_check(F->p_1942)).a, &F->pc_1943);
(*F->ro_631) = 1;
goto ret_;
}
F->p_1942 = (*(P826)rt_nil_check(F->p_1942)).next;
}
}
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all), rt_str("ALL", 3))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_619(&(*F->base_628), F->bt_629); b_; }));
F->t_633v = (*(P832)rt_nil_check(F->bt_629)).target;
goto ret_;
}
f_select_on_635(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_619(&(*F->base_628), F->bt_629); b_; }), (*(P832)rt_nil_check(F->bt_629)).target, F->e_630, &(*F->ro_631), &F->code_632v, &F->t_633v, &F->c_634v);
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_629)).kind) == (((rt_int)15LL)))) {
F->p_1944 = NULL;
F->p_1944 = (*(P832)rt_nil_check(F->bt_629)).tparams;
while ((F->p_1944 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_628), rt_str(".p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all))); b_; }));
F->t_633v = f_tparam_type_321(F->bt_629, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all));
(*F->ro_631) = 1;
goto ret_;
}
F->p_1944 = (*(P826)rt_nil_check(F->p_1944)).next;
}
F->p_1944 = (*(P832)rt_nil_check(F->bt_629)).tparams;
if ((!f_opened_296(F->bt_629))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P819)rt_nil_check((*(P832)rt_nil_check(F->bt_629)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P832)rt_nil_check(F->bt_629)).tparams == NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all), rt_str("ALL", 3))) {
F->code_632v = f_mk_3(&(*F->base_628));
F->t_633v = (*(P832)rt_nil_check(F->bt_629)).under;
goto ret_;
}
f_select_on_635(&(*F->base_628), (*(P832)rt_nil_check(F->bt_629)).under, F->e_630, &(*F->ro_631), &F->code_632v, &F->t_633v, &F->c_634v);
goto ret_;
}
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all), rt_str("ALL", 3))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_628), rt_str(".all", 4)); b_; }));
F->t_633v = (*(P832)rt_nil_check(F->bt_629)).under;
goto ret_;
}
while ((F->p_1944 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_628), rt_str(".p_", 3)), f_lower_s_15(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all))); b_; }));
F->t_633v = f_tparam_type_321(F->bt_629, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1944)).name))->all));
(*F->ro_631) = 1;
goto ret_;
}
F->p_1944 = (*(P826)rt_nil_check(F->p_1944)).next;
}
f_select_on_635(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_628), rt_str(".all", 4)); b_; }), (*(P832)rt_nil_check(F->bt_629)).under, F->e_630, &(*F->ro_631), &F->code_632v, &F->t_633v, &F->c_634v);
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_629)).kind) == (((rt_int)17LL)))) {
F->f_1945 = NULL;
F->f_1945 = (*(P832)rt_nil_check(F->bt_629)).fields;
F->i_1946 = RT_R_IUNDEF;
F->i_1946 = ((rt_int)0LL);
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all), rt_str("TAG", 3))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_628)), rt_str(").tag)", 6)); b_; }));
F->t_633v = (*(P832)rt_nil_check(F->bt_629)).elem;
(*F->ro_631) = 1;
goto ret_;
}
while ((F->f_1945 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1945)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))) {
F->fn_1947 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_628)), rt_str(").u.", 4)), f_field_c_17(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))));
F->c_634v = (*(P834)rt_nil_check(F->f_1945)).c;
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_628)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_1946))), rt_str(" \? &", 4)), F->fn_1947), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1947), rt_str(")))", 3)); b_; }));
F->t_633v = (*(P834)rt_nil_check(F->f_1945)).t;
goto ret_;
}
F->i_1946 = rt_add(rt_r_ichk(F->i_1946), ((rt_int)1LL));
F->f_1945 = (*(P834)rt_nil_check(F->f_1945)).next;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_629)).kind) == (((rt_int)7LL)))) {
F->f_1948 = NULL;
F->f_1948 = (*(P832)rt_nil_check(F->bt_629)).fields;
while ((F->f_1948 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1948)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))) {
F->c_634v = (*(P834)rt_nil_check(F->f_1948)).c;
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_628), rt_str(".", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all))); b_; }));
F->t_633v = (*(P834)rt_nil_check(F->f_1948)).t;
goto ret_;
}
F->f_1948 = (*(P834)rt_nil_check(F->f_1948)).next;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_630)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_632) = F->code_632v;  (*F->t_633) = F->t_633v;  (*F->c_634) = F->c_634v;
  RT_FPOP();
  return;
}

static int f_has_call_637(rstr *s_636) {
  struct f_has_call_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_636 = s_636;
{ rt_int lo1950 = ((rt_int)1LL), hi1951 = ((rt_int)(((*F->s_636)).len));
for (rt_int it1952 = lo1950; it1952 <= hi1951; it1952++) {
F->i_1949 = it1952;
if ((rt_r_echk(rt_str_get((*F->s_636), F->i_1949)) == 40)) {
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

static void f_need_slice_639(P832 t_638) {
  struct f_need_slice_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_638 = t_638;
F->c_1953 = rt_str_copy(f_ctype_225(F->t_638));
F->n_1954 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1953));
F->l_1955 = NULL;
if (f_seen_name_375(g_mcopies_905, &F->n_1954)) {
goto ret_;
}
{ R831 *cell1956 = rt_alloc(sizeof(R831));
(*cell1956).s = NULL;
(*cell1956).next = NULL;
F->l_1955 = cell1956;
}
(*(P830)rt_nil_check(F->l_1955)).s = f_mk_3(&F->n_1954);
(*(P830)rt_nil_check(F->l_1955)).next = g_mcopies_905;
g_mcopies_905 = F->l_1955;
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1953), rt_str(" ", 1)), F->n_1954), rt_str("(", 1)), F->c_1953), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1953), rt_str(" ", 1)), F->n_1954), rt_str("(", 1)), F->c_1953), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1953), rt_str(" rt_r_acat_", 11)), F->c_1953), rt_str("(", 1)), F->c_1953), rt_str(" a, ", 4)), F->c_1953), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1953), rt_str(" rt_r_acat_", 11)), F->c_1953), rt_str("(", 1)), F->c_1953), rt_str(" a, ", 4)), F->c_1953), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1953), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_364((*(P832)rt_nil_check(F->t_638)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_364((*(P832)rt_nil_check(F->t_638)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_643(rstr *i_640, rstr *lo_641, rstr *hi_642) {
  struct f_ix_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_640 = i_640;
F->lo_641 = lo_641;
F->hi_642 = hi_642;
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_640)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_640)), rt_str(", ", 2)), (*F->lo_641)), rt_str(", ", 2)), (*F->hi_642)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_652(rstr *base_644, P832 bt_645, P826 e_646, int *ro_647, int lv_648, P819 *code_649, P832 *t_650, P828 *c_651) {
  struct f_index_on_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_644 = base_644;
F->bt_645 = bt_645;
F->e_646 = e_646;
F->ro_647 = ro_647;
F->lv_648 = lv_648;
F->code_649 = code_649;
F->code_649v = *F->code_649;
F->t_650 = t_650;
F->t_650v = *F->t_650;
F->c_651 = c_651;
F->c_651v = *F->c_651;
F->a_1957 = NULL;
F->a_1957 = (*(P826)rt_nil_check(F->e_646)).b;
F->it_1958 = NULL;
F->c_651v = g_no_cons_918;
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->bt_645);
(*F->ro_647) = 0;
f_index_on_652(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_619(&(*F->base_644), F->bt_645); b_; }), (*(P832)rt_nil_check(F->bt_645)).target, F->e_646, &(*F->ro_647), F->lv_648, &F->code_649v, &F->t_650v, &F->c_651v);
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_296(F->bt_645))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P819)rt_nil_check((*(P832)rt_nil_check(F->bt_645)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P832)rt_nil_check(F->bt_645)).tparams == NULL)) {
f_index_on_652(&(*F->base_644), (*(P832)rt_nil_check(F->bt_645)).under, F->e_646, &(*F->ro_647), F->lv_648, &F->code_649v, &F->t_650v, &F->c_651v);
} else {
f_index_on_652(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_644), rt_str(".all", 4)); b_; }), (*(P832)rt_nil_check(F->bt_645)).under, F->e_646, &(*F->ro_647), F->lv_648, &F->code_649v, &F->t_650v, &F->c_651v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).kind) == (((rt_int)6LL))) && (F->a_1957 != NULL)) && (rt_r_ichk((*(P826)rt_nil_check(F->a_1957)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).ndim) != ((rt_int)1LL)) || ((*(P826)rt_nil_check(F->a_1957)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1959 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->a_1957)).a, (*(P832)rt_nil_check(F->bt_645)).idx, &F->it_1958));
F->hi_1960 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->a_1957)).b, (*(P832)rt_nil_check(F->bt_645)).idx, &F->it_1958));
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_225(F->bt_645)), rt_str("(", 1)), (*F->base_644)), rt_str(", ", 2)), F->lo_1959), rt_str(", ", 2)), F->hi_1960), rt_str(")", 1)); b_; }));
f_need_slice_639(F->bt_645);
F->t_650v = F->bt_645;
(*F->ro_647) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).kind) == (((rt_int)6LL)))) {
F->off_1961 = NULL;
F->k_1962 = RT_R_IUNDEF;
F->k_1962 = ((rt_int)0LL);
F->b_1963 = NULL;
F->b_1963 = f_mk_3(&(*F->base_644));
F->pre_1964 = NULL;
F->pre_1964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1957) != rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).ndim))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_648) && f_has_call_637(&(*F->base_644)))) {
F->pre_1964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->bt_645)), rt_str(" b_ = ", 6)), (*F->base_644)), rt_str("; ", 2)); b_; }));
F->b_1963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1957 != NULL)) {
F->k_1962 = rt_add(rt_r_ichk(F->k_1962), ((rt_int)1LL));
{
F->i_1965 = rt_str_copy(f_gexpr_658(F->a_1957, f_idx_type_249(F->bt_645, rt_r_ichk(F->k_1962)), &F->it_1958));
F->l_1966 = rt_str_copy(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->b_1963))->all), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_1962))));
F->h_1967 = rt_str_copy(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->b_1963))->all), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_1962))));
f_check_type_223(F->it_1958, f_idx_type_249(F->bt_645, rt_r_ichk(F->k_1962)), rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line));
if ((F->off_1961 == NULL)) {
F->off_1961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_643(&F->i_1965, &F->l_1966, &F->h_1967)), rt_str(" - ", 3)), F->l_1966), rt_str(")", 1)); b_; }));
} else {
F->off_1961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->off_1961))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1966), rt_str(", ", 2)), F->h_1967), rt_str(") + ", 4)), f_ix_643(&F->i_1965, &F->l_1966, &F->h_1967)), rt_str(" - ", 3)), F->l_1966), rt_str(")", 1)); b_; }));
}
}
F->a_1957 = (*(P826)rt_nil_check(F->a_1957)).next;
}
if ((((rt_int)(((((P819)rt_nil_check(F->pre_1964))->all)).len)) > ((rt_int)0LL))) {
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->pre_1964))->all), (((P819)rt_nil_check(F->b_1963))->all)), rt_str(".p[", 3)), (((P819)rt_nil_check(F->off_1961))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->b_1963))->all), rt_str(".p[", 3)), (((P819)rt_nil_check(F->off_1961))->all)), rt_str("]", 1)); b_; }));
}
F->t_650v = (*(P832)rt_nil_check(F->bt_645)).elem;
F->c_651v = (*(P832)rt_nil_check(F->bt_645)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1957) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_645)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_1957)).kind) == (((rt_int)16LL)))) {
F->lo_1968 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->a_1957)).a, g_ty_int_906, &F->it_1958));
F->hi_1969 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->a_1957)).b, g_ty_int_906, &F->it_1958));
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_644)), rt_str(", ", 2)), F->lo_1968), rt_str(", ", 2)), F->hi_1969), rt_str(")", 1)); b_; }));
F->t_650v = F->bt_645;
(*F->ro_647) = 1;
goto ret_;
}
{
F->i_1970 = rt_str_copy(f_gexpr_658(F->a_1957, g_ty_int_906, &F->it_1958));
F->t_650v = f_str_elem_209(F->bt_645);
F->c_651v = (*(P832)rt_nil_check(F->bt_645)).elemcons;
if (F->lv_648) {
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_644)), rt_str(", ", 2)), F->i_1970), rt_str("))", 2)); b_; }));
} else {
F->code_649v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_644)), rt_str(", ", 2)), F->i_1970), rt_str(")", 1)); b_; }));
(*F->ro_647) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_649) = F->code_649v;  (*F->t_650) = F->t_650v;  (*F->c_651) = F->c_651v;
  RT_FPOP();
  return;
}

static int f_own_attribute_654(P826 e_653) {
  struct f_own_attribute_654fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_653 = e_653;
F->saved_1971 = NULL;
F->saved_1971 = g_code_876;
F->bt_1972 = NULL;
F->ok_1973 = RT_R_EUNDEF;
F->ok_1973 = 0;
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = f_new_buffer_24();
{ rt_frame xf1974;
if (RT_TRY(xf1974)) {
F->base_1976 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_653)).a, NULL, &F->bt_1972));
while (((F->bt_1972 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_1972)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_414(F->bt_1972);
F->bt_1972 = (*(P832)rt_nil_check(F->bt_1972)).target;
}
while ((((F->bt_1972 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_1972)).kind) == (((rt_int)15LL)))) && ((*(P832)rt_nil_check(F->bt_1972)).tparams == NULL))) {
F->bt_1972 = (*(P832)rt_nil_check(F->bt_1972)).under;
}
if (((F->bt_1972 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_1972)).kind) == (((rt_int)15LL))))) {
F->p_1977 = NULL;
F->p_1977 = (*(P832)rt_nil_check(F->bt_1972)).tparams;
while ((F->p_1977 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_1977)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_653)).name))->all))) {
F->ok_1973 = 1;
}
F->p_1977 = (*(P826)rt_nil_check(F->p_1977)).next;
}
F->bt_1972 = (*(P832)rt_nil_check(F->bt_1972)).under;
}
if (((F->bt_1972 != NULL) && ((rt_r_ichk((*(P832)rt_nil_check(F->bt_1972)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->bt_1972)).kind) == (((rt_int)17LL)))))) {
F->f_1978 = NULL;
F->f_1978 = (*(P832)rt_nil_check(F->bt_1972)).fields;
while ((F->f_1978 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_1978)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_653)).name))->all))) {
F->ok_1973 = 1;
}
F->f_1978 = (*(P834)rt_nil_check(F->f_1978)).next;
}
}
RT_POP(xf1974);
} else {
RT_POP(xf1974);
int x1975 = rt_xcur;
if (0 || x1975 == ex_compile_error_1) {
F->ok_1973 = 0;
} else {
rt_raise(x1975);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = F->saved_1971;
F->result_ = rt_r_echk(F->ok_1973);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_658(P826 e_655, P832 want_656, P832 *t_657) {
  struct f_gexpr_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_655 = e_655;
F->want_656 = want_656;
F->t_657 = t_657;
F->t_657v = *F->t_657;
F->k_1979 = RT_R_IUNDEF;
F->k_1979 = rt_r_ichk((*(P826)rt_nil_check(F->e_655)).kind);
F->code_1980 = NULL;
F->c_1981 = NULL;
F->ro_1982 = RT_R_EUNDEF;
F->bt_1983 = NULL;
F->ctx_1984 = NULL;
F->ctx_1984 = g_cons_ctx_897;
g_cons_ctx_897 = NULL;
F->t_657v = g_ty_int_906;
if ((rt_r_ichk(F->k_1979) == (((rt_int)1LL)))) {
if (((F->want_656 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_656)).kind) == (((rt_int)3LL))))) {
F->t_657v = g_ty_float_908;
F->result_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)2LL)))) {
F->t_657v = g_ty_float_908;
F->result_ = (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)5LL)))) {
F->t_657v = g_ty_bool_907;
F->result_ = f_itos_7(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_1979) == (((rt_int)3LL))) && (F->want_656 != NULL)) && (rt_r_ichk((*(P832)rt_nil_check(F->want_656)).kind) == (((rt_int)5LL)))) && (!f_same_212(f_str_elem_209(F->want_656), g_ty_ascii_909)))) {
F->r_1985 = NULL;
F->r_1985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_657v = F->want_656;
{ rt_int lo1987 = ((rt_int)1LL), hi1988 = ((rt_int)(((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)).len));
for (rt_int it1989 = lo1987; it1989 <= hi1988; it1989++) {
F->i_1986 = it1989;
F->pos_1990 = RT_R_IUNDEF;
F->pos_1990 = f_lit_index_253((*(P832)rt_nil_check(f_base_of_214(f_str_elem_209(F->want_656)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_668(rt_r_echk(rt_str_get((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), F->i_1986))); b_; }));
if ((rt_r_ichk(F->pos_1990) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_668(rt_r_echk(rt_str_get((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), F->i_1986)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_1985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_1985))->all), rt_str("\\", 1)), f_octal_670(rt_r_ichk(F->pos_1990))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P819)rt_nil_check(F->r_1985))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)3LL)))) {
F->t_657v = g_ty_string_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_683(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)6LL)))) {
F->t_657v = g_ty_nil_913;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)4LL)))) {
if (((F->want_656 != NULL) && ((*(P832)rt_nil_check(f_base_of_214(F->want_656))).kind == (((rt_int)4LL))))) {
F->t_657v = F->want_656;
} else {
F->t_657v = f_enum_type_of_686(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
}
{
F->i_1991 = RT_R_IUNDEF;
F->i_1991 = f_lit_index_253((*(P832)rt_nil_check(f_base_of_214(F->t_657v))).lits, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all));
if ((rt_r_ichk(F->i_1991) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_1991));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)17LL)))) {
g_cons_ctx_897 = F->ctx_1984;
F->result_ = f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, F->want_656, &F->t_657v);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)7LL)))) {
F->y_1992 = NULL;
F->y_1992 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all));
if ((F->y_1992 == NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("ME", 2))) {
F->t_657v = g_ty_act_916;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_657v = g_ty_act_916;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_788(f_wrap_apply_681(F->e_655), 0, &F->t_657v);
goto ret_;
}
if (((((((((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_788(f_wrap_apply_681(F->e_655), 0, &F->t_657v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_1992)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_1992)).kind) == (((rt_int)2LL))))) {
F->ro_1993 = RT_R_EUNDEF;
F->t_657v = (*(P836)rt_nil_check(F->y_1992)).t;
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_1992)).kind) == (((rt_int)1LL)))) {
F->ro_1993 = f_check_import_611(F->y_1992, rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
F->result_ = f_init_chk_330((*(P836)rt_nil_check(F->y_1992)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_605(F->y_1992); b_; }));
goto ret_;
}
F->result_ = f_access_of_605(F->y_1992);
goto ret_;
}
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_1992)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_788(f_wrap_apply_681(F->e_655), 0, &F->t_657v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_1979) == (((rt_int)8LL))) && (f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all)) != NULL)) && (f_user_op_784(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), f_copy_node_679((*(P826)rt_nil_check(F->e_655)).a)) != NULL))) {
F->call_1994 = NULL;
F->call_1994 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
F->fname_1995 = NULL;
F->fname_1995 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
(*(P826)rt_nil_check(F->fname_1995)).name = (*(P826)rt_nil_check(F->e_655)).name;
(*(P826)rt_nil_check(F->call_1994)).a = F->fname_1995;
(*(P826)rt_nil_check(F->call_1994)).b = f_copy_node_679((*(P826)rt_nil_check(F->e_655)).a);
F->result_ = f_gcall_788(F->call_1994, 0, &F->t_657v);
goto ret_;
} else if (((((rt_r_ichk(F->k_1979) == (((rt_int)8LL))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("NOT", 3))) && (F->want_656 != NULL)) && (rt_r_ichk((*(P832)rt_nil_check(F->want_656)).kind) == (((rt_int)16LL))))) {
F->a_1996 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, F->want_656, &F->t_657v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_1996), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)8LL)))) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("NOT", 3))) {
F->a_1997 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, g_ty_bool_907, &F->t_657v));
f_check_type_223(F->t_657v, g_ty_bool_907, rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1997), rt_str(")", 1));
goto ret_;
}
{
F->a_1998 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, F->want_656, &F->t_657v));
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1998;
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->t_657v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1998), rt_str(")", 1));
goto ret_;
}
f_check_type_223(F->t_657v, g_ty_int_906, rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1998), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_708(F->e_655, F->want_656, &F->t_657v);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_655)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_655)).a)).kind) == (((rt_int)12LL))))) {
F->nm_1999 = NULL;
F->nm_1999 = (*(P826)rt_nil_check(F->e_655)).a;
F->y_2000 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->nm_1999)).kind) == (((rt_int)12LL)))) {
F->nm_1999 = (*(P826)rt_nil_check(F->nm_1999)).a;
}
F->y_2000 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->nm_1999)).name))->all));
if (((((F->y_2000 == NULL) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2000)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2000)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2000)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_788(F->e_655, 0, &F->t_657v);
goto ret_;
}
}
{
F->base_2001 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, NULL, &F->bt_1983));
F->ro_1982 = 1;
f_index_on_652(&F->base_2001, F->bt_1983, F->e_655, &F->ro_1982, 0, &F->code_1980, &F->t_657v, &F->c_1981);
if ((((!f_is_lvalue_621(F->e_655)) || (rt_r_ichk((*(P832)rt_nil_check(F->t_657v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->t_657v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P819)rt_nil_check(F->code_1980))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_657v, &(((P819)rt_nil_check(F->code_1980))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_654(F->e_655)))) {
F->result_ = f_attribute_691(F->e_655, &F->t_657v);
goto ret_;
} else if (((f_as_subtype_285((*(P826)rt_nil_check(F->e_655)).a) != NULL) || f_ptr_attribute_688(F->e_655))) {
F->result_ = f_attribute_691(F->e_655, &F->t_657v);
goto ret_;
}
{
F->base_2002 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_655)).a, NULL, &F->bt_1983));
F->ro_1982 = 1;
f_select_on_635(&F->base_2002, F->bt_1983, F->e_655, &F->ro_1982, &F->code_1980, &F->t_657v, &F->c_1981);
if ((rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_655)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_621(F->e_655)))) {
F->result_ = (((P819)rt_nil_check(F->code_1980))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_657v, &(((P819)rt_nil_check(F->code_1980))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)12LL)))) {
F->result_ = f_gcall_788(f_wrap_apply_681(F->e_655), 0, &F->t_657v);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)14LL)))) {
F->result_ = f_constructor_713(F->e_655, F->want_656, F->ctx_1984, &F->t_657v);
goto ret_;
} else if ((rt_r_ichk(F->k_1979) == (((rt_int)13LL)))) {
F->result_ = f_resolved_661(F->e_655, &F->t_657v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_655)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_657) = F->t_657v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_661(P826 e_659, P832 *t_660) {
  struct f_resolved_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_659 = e_659;
F->t_660 = t_660;
F->t_660v = *F->t_660;
F->c_2003 = NULL;
F->vt_2004 = NULL;
F->y_2005 = NULL;
F->y_2005 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2006 = NULL;
F->tt_2006 = f_copy_node_679((*(P826)rt_nil_check(F->e_659)).b);
(*(P826)rt_nil_check(F->tt_2006)).next = NULL;
if (((F->y_2005 != NULL) && ((rt_r_ichk((*(P836)rt_nil_check(F->y_2005)).kind) == (((rt_int)10LL))) || (f_resolve_overload_762(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2006, f_copy_node_679((*(P826)rt_nil_check(F->e_659)).a), 0, rt_r_ichk((*(P826)rt_nil_check(F->e_659)).line)) != NULL)))) {
F->call_2007 = NULL;
F->call_2007 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_659)).line));
F->f_2008 = NULL;
F->f_2008 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_659)).line));
F->fname_2009 = NULL;
F->fname_2009 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_659)).line));
(*(P826)rt_nil_check(F->fname_2009)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P826)rt_nil_check(F->f_2008)).a = F->fname_2009;
(*(P826)rt_nil_check(F->f_2008)).b = F->tt_2006;
(*(P826)rt_nil_check(F->call_2007)).a = F->f_2008;
(*(P826)rt_nil_check(F->call_2007)).b = f_copy_node_679((*(P826)rt_nil_check(F->e_659)).a);
(*(P826)rt_nil_check((*(P826)rt_nil_check(F->call_2007)).b)).next = NULL;
F->result_ = f_gcall_788(F->call_2007, 0, &F->t_660v);
goto ret_;
}
F->t_660v = f_resolve_subtype_256((*(P826)rt_nil_check(F->e_659)).b, &F->c_2003);
{
F->v_2010 = rt_str_copy(f_gexpr_in_666((*(P826)rt_nil_check(F->e_659)).a, F->t_660v, F->c_2003, &F->vt_2004));
f_check_type_223(F->vt_2004, F->t_660v, rt_r_ichk((*(P826)rt_nil_check(F->e_659)).line));
F->result_ = f_checked_204(F->t_660v, F->c_2003, &F->v_2010);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_660) = F->t_660v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_666(P826 e_662, P832 want_663, P828 c_664, P832 *t_665) {
  struct f_gexpr_in_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_662 = e_662;
F->want_663 = want_663;
F->c_664 = c_664;
F->t_665 = t_665;
F->t_665v = *F->t_665;
g_cons_ctx_897 = F->c_664;
F->result_ = f_gexpr_658(F->e_662, F->want_663, &F->t_665v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_665) = F->t_665v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_668(int ch_667) {
  struct f_ascii_lit_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_667 = ch_667;
F->l_2011 = NULL;
F->l_2011 = (*(P832)rt_nil_check(g_ty_ascii_909)).lits;
{ rt_int lo2013 = ((rt_int)1LL), hi2014 = rt_sub(((rt_int)(F->ch_667) + 1), ((rt_int)1LL));
for (rt_int it2015 = lo2013; it2015 <= hi2014; it2015++) {
F->i_2012 = it2015;
F->l_2011 = (*(P826)rt_nil_check(F->l_2011)).next;
}
}
F->result_ = (((P819)rt_nil_check((*(P826)rt_nil_check(F->l_2011)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_670(rt_int n_669) {
  struct f_octal_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_669 = n_669;
F->r_2016 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2016, rt_str("000", 3));
(*rt_str_at(&F->r_2016, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_669, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2016, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_669, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2016, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_669, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2016;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_str_cat_part_672(P832 t_671) {
  struct f_str_cat_part_672fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_671 = t_671;
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_671)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_209(F->t_671);
goto ret_;
}
F->result_ = F->t_671;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_peek_type_674(P826 e_673) {
  struct f_peek_type_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_673 = e_673;
F->saved_2017 = NULL;
F->saved_2017 = g_code_876;
F->t_2018 = NULL;
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = f_new_buffer_24();
{ rt_frame xf2019;
if (RT_TRY(xf2019)) {
F->v_2021 = rt_str_copy(f_gexpr_658(F->e_673, NULL, &F->t_2018));
RT_POP(xf2019);
} else {
RT_POP(xf2019);
int x2020 = rt_xcur;
if (0 || x2020 == ex_compile_error_1) {
F->t_2018 = NULL;
} else {
rt_raise(x2020);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = F->saved_2017;
F->result_ = F->t_2018;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_set_operands_677(P826 e_675, P832 want_676) {
  struct f_set_operands_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_675 = e_675;
F->want_676 = want_676;
F->t_2022 = NULL;
if (((F->want_676 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_676)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_676;
goto ret_;
} else if ((F->want_676 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_675)).a)).kind) != (((rt_int)14LL)))) {
F->t_2022 = f_peek_type_674((*(P826)rt_nil_check(F->e_675)).a);
} else if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_675)).b)).kind) != (((rt_int)14LL)))) {
F->t_2022 = f_peek_type_674((*(P826)rt_nil_check(F->e_675)).b);
}
if (((F->t_2022 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->t_2022)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2022;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_copy_node_679(P826 e_678) {
  struct f_copy_node_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_678 = e_678;
F->x_2023 = NULL;
{ R827 *cell2024 = rt_alloc(sizeof(R827));
(*cell2024).name = NULL;
(*cell2024).tag = NULL;
(*cell2024).prags = NULL;
(*cell2024).labels = NULL;
(*cell2024).a = NULL;
(*cell2024).b = NULL;
(*cell2024).c = NULL;
(*cell2024).d = NULL;
(*cell2024).e = NULL;
(*cell2024).next = NULL;
F->x_2023 = cell2024;
}
(*(P826)rt_nil_check(F->x_2023)).kind = rt_r_ichk((*(P826)rt_nil_check(F->e_678)).kind);
(*(P826)rt_nil_check(F->x_2023)).line = rt_r_ichk((*(P826)rt_nil_check(F->e_678)).line);
(*(P826)rt_nil_check(F->x_2023)).ival = rt_r_ichk((*(P826)rt_nil_check(F->e_678)).ival);
(*(P826)rt_nil_check(F->x_2023)).flag = rt_r_ichk((*(P826)rt_nil_check(F->e_678)).flag);
(*(P826)rt_nil_check(F->x_2023)).name = (*(P826)rt_nil_check(F->e_678)).name;
(*(P826)rt_nil_check(F->x_2023)).tag = (*(P826)rt_nil_check(F->e_678)).tag;
(*(P826)rt_nil_check(F->x_2023)).a = (*(P826)rt_nil_check(F->e_678)).a;
(*(P826)rt_nil_check(F->x_2023)).b = (*(P826)rt_nil_check(F->e_678)).b;
(*(P826)rt_nil_check(F->x_2023)).c = (*(P826)rt_nil_check(F->e_678)).c;
(*(P826)rt_nil_check(F->x_2023)).d = (*(P826)rt_nil_check(F->e_678)).d;
F->result_ = F->x_2023;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_wrap_apply_681(P826 e_680) {
  struct f_wrap_apply_681fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_680 = e_680;
F->x_2025 = NULL;
F->x_2025 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_680)).line));
(*(P826)rt_nil_check(F->x_2025)).a = F->e_680;
F->result_ = F->x_2025;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_683(rstr *s_682) {
  struct f_c_string_683fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_682 = s_682;
F->n_2026 = RT_R_IUNDEF;
F->n_2026 = ((rt_int)0LL);
{ rt_int lo2028 = ((rt_int)1LL), hi2029 = ((rt_int)(((*F->s_682)).len));
for (rt_int it2030 = lo2028; it2030 <= hi2029; it2030++) {
F->i_2027 = it2030;
if (((rt_r_echk(rt_str_get((*F->s_682), F->i_2027)) == 92) || (rt_r_echk(rt_str_get((*F->s_682), F->i_2027)) == 63))) {
F->n_2026 = rt_add(rt_r_ichk(F->n_2026), ((rt_int)1LL));
}
}
}
{
F->r_2031 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_682)).len)), rt_r_ichk(F->n_2026)), ((rt_int)2LL)));
F->j_2032 = RT_R_IUNDEF;
F->j_2032 = ((rt_int)1LL);
(*rt_str_at(&F->r_2031, ((rt_int)1LL))) = 34;
{ rt_int lo2034 = ((rt_int)1LL), hi2035 = ((rt_int)(((*F->s_682)).len));
for (rt_int it2036 = lo2034; it2036 <= hi2035; it2036++) {
F->i_2033 = it2036;
F->j_2032 = rt_add(rt_r_ichk(F->j_2032), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_682), F->i_2033)) == 92) || (rt_r_echk(rt_str_get((*F->s_682), F->i_2033)) == 63))) {
(*rt_str_at(&F->r_2031, rt_r_ichk(F->j_2032))) = 92;
F->j_2032 = rt_add(rt_r_ichk(F->j_2032), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2031, rt_r_ichk(F->j_2032))) = rt_r_echk(rt_str_get((*F->s_682), F->i_2033));
}
}
(*rt_str_at(&F->r_2031, rt_add(rt_r_ichk(F->j_2032), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2031;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P832 f_enum_type_of_686(rstr *lit_684, rt_int line_685) {
  struct f_enum_type_of_686fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_684 = lit_684;
F->line_685 = line_685;
F->y_2037 = NULL;
F->y_2037 = g_scope_stack_866;
F->c_2038 = NULL;
if ((f_lit_index_253((*(P832)rt_nil_check(g_ty_ascii_909)).lits, &(*F->lit_684)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_909;
goto ret_;
}
while ((F->y_2037 != NULL)) {
if (((((rt_r_ichk((*(P836)rt_nil_check(F->y_2037)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2037)).kind) == (((rt_int)5LL)))) && ((*(P836)rt_nil_check(F->y_2037)).st != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_2037)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_253((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_2037)).st)).a, &(*F->lit_684)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_2037)).kind) == (((rt_int)5LL)))) {
F->st_2039 = NULL;
F->st_2039 = f_nn_61((((rt_int)80LL)), F->line_685);
(*(P826)rt_nil_check(F->st_2039)).name = (*(P836)rt_nil_check(F->y_2037)).name;
F->result_ = f_resolve_subtype_256(F->st_2039, &F->c_2038);
goto ret_;
}
F->result_ = f_resolve_subtype_256((*(P836)rt_nil_check(F->y_2037)).st, &F->c_2038);
goto ret_;
}
}
F->y_2037 = (*(P836)rt_nil_check(F->y_2037)).stack;
}
f_fail_23(F->line_685, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_684)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_688(P826 e_687) {
  struct f_ptr_attribute_688fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_687 = e_687;
F->lv_2040 = NULL;
F->t_2041 = NULL;
F->c_2042 = NULL;
F->ro_2043 = RT_R_EUNDEF;
F->p_2044 = NULL;
F->saved_2045 = NULL;
F->saved_2045 = g_code_876;
if ((!f_is_lvalue_621((*(P826)rt_nil_check(F->e_687)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_876 = f_new_buffer_24();
f_lvalue_627((*(P826)rt_nil_check(F->e_687)).a, &F->lv_2040, &F->t_2041, &F->c_2042, &F->ro_2043);
g_code_876 = F->saved_2045;
if (((rt_r_ichk((*(P832)rt_nil_check(F->t_2041)).kind) != (((rt_int)8LL))) || ((*(P832)rt_nil_check(F->t_2041)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2044 = (*(P826)rt_nil_check((*(P832)rt_nil_check(F->t_2041)).decl)).d;
while ((F->p_2044 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_2044)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_687)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2044 = (*(P826)rt_nil_check(F->p_2044)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_691(P826 e_689, P832 *t_690) {
  struct f_attribute_691fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_689 = e_689;
F->t_690 = t_690;
F->t_690v = *F->t_690;
F->bt_2046 = NULL;
F->c_2047 = NULL;
F->base_2048 = NULL;
F->sub_2049 = NULL;
F->sub_2049 = f_as_subtype_285((*(P826)rt_nil_check(F->e_689)).a);
F->name_2050 = rt_str_copy((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_689)).name))->all));
if ((F->sub_2049 != NULL)) {
F->bt_2046 = f_resolve_subtype_256(F->sub_2049, &F->c_2047);
} else {
F->bt_2046 = f_value_subtype_278((*(P826)rt_nil_check(F->e_689)).a, &F->c_2047, &F->base_2048);
}
if (((((rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)8LL))) && (F->c_2047 != NULL)) && ((*(P828)rt_nil_check(F->c_2047)).args != NULL)) && ((*(P832)rt_nil_check(F->bt_2046)).decl != NULL))) {
F->p_2051 = NULL;
F->p_2051 = (*(P826)rt_nil_check((*(P832)rt_nil_check(F->bt_2046)).decl)).d;
F->a_2052 = NULL;
F->a_2052 = (*(P828)rt_nil_check(F->c_2047)).args;
while (((F->p_2051 != NULL) && (F->a_2052 != NULL))) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_2051)).name))->all), F->name_2050)) {
F->pc_2053 = NULL;
F->v_2054 = rt_str_copy(f_gexpr_658(F->a_2052, f_resolve_subtype_256((*(P826)rt_nil_check(F->p_2051)).a, &F->pc_2053), &F->t_690v));
F->result_ = F->v_2054;
goto ret_;
}
F->p_2051 = (*(P826)rt_nil_check(F->p_2051)).next;
F->a_2052 = (*(P826)rt_nil_check(F->a_2052)).next;
}
}
while (((rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)8LL))) && (F->base_2048 != NULL))) {
f_finish_ptr_414(F->bt_2046);
F->base_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_619(&(((P819)rt_nil_check(F->base_2048))->all), F->bt_2046); b_; }));
F->bt_2046 = (*(P832)rt_nil_check(F->bt_2046)).target;
F->c_2047 = NULL;
if ((rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)5LL)))) {
F->c_2047 = f_new_cons_175();
(*(P828)rt_nil_check(F->c_2047)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->base_2048))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->bt_2046)).tparams != NULL)) && (F->c_2047 != NULL)) && ((*(P828)rt_nil_check(F->c_2047)).args != NULL))) {
F->p_2055 = NULL;
F->p_2055 = (*(P832)rt_nil_check(F->bt_2046)).tparams;
F->a_2056 = NULL;
F->a_2056 = (*(P828)rt_nil_check(F->c_2047)).args;
while (((F->p_2055 != NULL) && (F->a_2056 != NULL))) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->p_2055)).name))->all), F->name_2050)) {
F->pt_2057 = f_tparam_type_321(F->bt_2046, &F->name_2050);
F->v_2058 = rt_str_copy(f_gexpr_658(F->a_2056, F->pt_2057, &F->t_690v));
F->result_ = F->v_2058;
goto ret_;
}
F->p_2055 = (*(P826)rt_nil_check(F->p_2055)).next;
F->a_2056 = (*(P826)rt_nil_check(F->a_2056)).next;
}
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->bt_2046)).tparams == NULL))) {
F->c_2047 = f_base_cons_217(F->bt_2046, F->c_2047);
F->bt_2046 = f_base_of_214(F->bt_2046);
}
F->t_690v = g_ty_int_906;
if ((rt_str_eq(F->name_2050, rt_str("LEN", 3)) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)5LL))))) {
if (((F->c_2047 != NULL) && ((*(P828)rt_nil_check(F->c_2047)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_2047)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_689)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2050, rt_str("LEN", 3)) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)12LL))))) {
if (((F->c_2047 != NULL) && ((*(P828)rt_nil_check(F->c_2047)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_2047)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_689)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2050, rt_str("MIN", 3)) || rt_str_eq(F->name_2050, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_2046))) {
F->t_690v = F->bt_2046;
if (rt_str_eq(F->name_2050, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_2046, F->c_2047);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_2046, F->c_2047);
goto ret_;
} else if ((rt_str_eq(F->name_2050, rt_str("PREC", 4)) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)3LL))))) {
if (((F->c_2047 != NULL) && ((*(P828)rt_nil_check(F->c_2047)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_2047)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2050, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2050, rt_str("USE", 3))) && (rt_r_ichk((*(P832)rt_nil_check(F->bt_2046)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_704(F->e_689, F->bt_2046, F->c_2047, F->base_2048, &F->t_690v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_689)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2050, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_690) = F->t_690v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_696(P826 sa_692, P826 sb_693, rstr *op_694, rt_int line_695) {
  struct f_subtype_compare_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_692 = sa_692;
F->sb_693 = sb_693;
F->op_694 = op_694;
F->line_695 = line_695;
F->ca_2059 = NULL;
F->cb_2060 = NULL;
F->ta_2061 = NULL;
F->ta_2061 = f_resolve_subtype_256(F->sa_692, &F->ca_2059);
F->tb_2062 = NULL;
F->tb_2062 = f_resolve_subtype_256(F->sb_693, &F->cb_2060);
F->r_2063 = NULL;
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2064 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2064, rt_str("1", 1));
F->no_2065 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2065, rt_str("0", 1));
if (rt_str_eq((*F->op_694), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2064, rt_str("0", 1));
rt_str_assign(&F->no_2065, rt_str("1", 1));
}
if ((!f_same_212(F->ta_2061, F->tb_2062))) {
F->result_ = F->no_2065;
goto ret_;
} else if ((((rt_r_ichk((*(P826)rt_nil_check(F->sa_692)).kind) == (((rt_int)80LL))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->sa_692)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P826)rt_nil_check(F->sb_693)).kind) == (((rt_int)80LL))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->sb_693)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2064;
goto ret_;
}
if (f_scalar_kind_177(F->ta_2061)) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_2061, F->ca_2059)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_2062, F->cb_2060)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_2061, F->ca_2059)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_2062, F->cb_2060)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).kind) == (((rt_int)3LL)))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2063))->all), rt_str(" && ", 4)), f_float_prec_698(F->ca_2059)), rt_str(" == ", 4)), f_float_prec_698(F->cb_2060)); b_; }));
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2059 != NULL) && (F->cb_2060 != NULL)) && ((*(P828)rt_nil_check(F->ca_2059)).slen != NULL)) && ((*(P828)rt_nil_check(F->cb_2060)).slen != NULL))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check((*(P828)rt_nil_check(F->ca_2059)).slen))->all)), rt_str(") == (", 6)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->cb_2060)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2059 == NULL) || ((*(P828)rt_nil_check(F->ca_2059)).slen == NULL)) && ((F->cb_2060 == NULL) || ((*(P828)rt_nil_check(F->cb_2060)).slen == NULL))))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2067 = ((rt_int)1LL), hi2068 = rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).ndim);
for (rt_int it2069 = lo2067; it2069 <= hi2068; it2069++) {
F->k_2066 = it2069;
if (((((F->ca_2059 != NULL) && (F->cb_2060 != NULL)) && (f_cons_lo_243(F->ca_2059, F->k_2066) != NULL)) && (f_cons_lo_243(F->cb_2060, F->k_2066) != NULL))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2063))->all), rt_str(" && (", 5)), (((P819)rt_nil_check(f_cons_lo_243(F->ca_2059, F->k_2066)))->all)), rt_str(") == (", 6)), (((P819)rt_nil_check(f_cons_lo_243(F->cb_2060, F->k_2066)))->all)), rt_str(") && (", 6)), (((P819)rt_nil_check(f_cons_hi_246(F->ca_2059, F->k_2066)))->all)), rt_str(") == (", 6)), (((P819)rt_nil_check(f_cons_hi_246(F->cb_2060, F->k_2066)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).kind) == (((rt_int)15LL))) && ((*(P832)rt_nil_check(F->ta_2061)).tparams != NULL)) && (F->ca_2059 != NULL)) && (F->cb_2060 != NULL))) {
F->a_2070 = NULL;
F->a_2070 = (*(P828)rt_nil_check(F->ca_2059)).args;
F->b_2071 = NULL;
F->b_2071 = (*(P828)rt_nil_check(F->cb_2060)).args;
F->at_2072 = NULL;
F->bt2_2073 = NULL;
while (((F->a_2070 != NULL) && (F->b_2071 != NULL))) {
F->x_2074 = rt_str_copy(f_gexpr_658(F->a_2070, NULL, &F->at_2072));
F->y_2075 = rt_str_copy(f_gexpr_658(F->b_2071, F->at_2072, &F->bt2_2073));
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2063))->all), rt_str(" && ", 4)), f_eq_code_368(F->at_2072, &F->x_2074, &F->y_2075)); b_; }));
F->a_2070 = (*(P826)rt_nil_check(F->a_2070)).next;
F->b_2071 = (*(P826)rt_nil_check(F->b_2071)).next;
}
} else if ((((rt_r_ichk((*(P832)rt_nil_check(F->ta_2061)).kind) == (((rt_int)17LL))) && (F->ca_2059 != NULL)) && (F->cb_2060 != NULL))) {
if ((((*(P828)rt_nil_check(F->ca_2059)).lo != NULL) && ((*(P828)rt_nil_check(F->cb_2060)).lo != NULL))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check((*(P828)rt_nil_check(F->ca_2059)).lo))->all)), rt_str(") == (", 6)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->cb_2060)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P828)rt_nil_check(F->ca_2059)).lo != NULL) || ((*(P828)rt_nil_check(F->cb_2060)).lo != NULL))) {
F->r_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_694), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P819)rt_nil_check(F->r_2063))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->r_2063))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_698(P828 c_697) {
  struct f_float_prec_698fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_697 = c_697;
if (((F->c_697 != NULL) && ((*(P828)rt_nil_check(F->c_697)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_697)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_704(P826 e_699, P832 bt_700, P828 c_701, P819 base_702, P832 *t_703) {
  struct f_file_attribute_704fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_699 = e_699;
F->bt_700 = bt_700;
F->c_701 = c_701;
F->base_702 = base_702;
F->t_703 = t_703;
F->t_703v = *F->t_703;
F->t_703v = g_file_mode_type_917;
if ((F->base_702 != NULL)) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_699)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P819)rt_nil_check(F->base_702))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P819)rt_nil_check(F->base_702))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_701 != NULL) && ((*(P828)rt_nil_check(F->c_701)).args != NULL))) {
if (rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_699)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_658((*(P828)rt_nil_check(F->c_701)).args, F->t_703v, &F->t_703v);
goto ret_;
} else if (((*(P826)rt_nil_check((*(P828)rt_nil_check(F->c_701)).args)).next != NULL)) {
F->result_ = f_gexpr_658((*(P826)rt_nil_check((*(P828)rt_nil_check(F->c_701)).args)).next, F->t_703v, &F->t_703v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_699)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P819)rt_nil_check((*(P826)rt_nil_check(F->e_699)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_703) = F->t_703v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_708(P826 e_705, P832 want_706, P832 *t_707) {
  struct f_gbinop_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_705 = e_705;
F->want_706 = want_706;
F->t_707 = t_707;
F->t_707v = *F->t_707;
F->op_2076 = NULL;
F->op_2076 = (*(P826)rt_nil_check(F->e_705)).name;
F->ta_2077 = NULL;
F->tb_2078 = NULL;
F->hint_2079 = NULL;
F->uy_2080 = NULL;
F->t_707v = g_ty_bool_907;
if ((f_lookup_154(&(((P819)rt_nil_check(F->op_2076))->all)) != NULL)) {
F->l_2081 = NULL;
F->r_2082 = NULL;
F->l_2081 = f_copy_node_679((*(P826)rt_nil_check(F->e_705)).a);
F->r_2082 = f_copy_node_679((*(P826)rt_nil_check(F->e_705)).b);
(*(P826)rt_nil_check(F->l_2081)).next = F->r_2082;
F->uy_2080 = f_user_op_784(&(((P819)rt_nil_check(F->op_2076))->all), F->l_2081);
if ((F->uy_2080 != NULL)) {
F->call_2083 = NULL;
F->call_2083 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
F->fname_2084 = NULL;
F->fname_2084 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
(*(P826)rt_nil_check(F->fname_2084)).name = F->op_2076;
(*(P826)rt_nil_check(F->call_2083)).a = F->fname_2084;
(*(P826)rt_nil_check(F->call_2083)).b = F->l_2081;
F->result_ = f_gcall_788(F->call_2083, 0, &F->t_707v);
goto ret_;
}
}
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("IN", 2))) {
F->s_2085 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, NULL, &F->tb_2078));
if ((rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2086 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, (*(P832)rt_nil_check(F->tb_2078)).elem, &F->ta_2077));
f_check_type_223(F->ta_2077, (*(P832)rt_nil_check(F->tb_2078)).elem, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
F->t_707v = g_ty_bool_907;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2086), rt_str(", ", 2)), F->s_2085), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("AND", 3)) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("OR", 2))) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("XOR", 3))) && (f_set_operands_677(F->e_705, F->want_706) != NULL))) {
F->a_2087 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, f_set_operands_677(F->e_705, F->want_706), &F->ta_2077));
F->b_2088 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, F->ta_2077, &F->tb_2078));
f_check_type_223(F->tb_2078, F->ta_2077, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
F->t_707v = F->ta_2077;
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2087), rt_str(", ", 2)), F->b_2088), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2087), rt_str(", ", 2)), F->b_2088), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2087), rt_str(", ", 2)), F->b_2088), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("AND", 3)) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("OR", 2))) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("XOR", 3)))) {
F->a_2089 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, g_ty_bool_907, &F->ta_2077));
F->b_2090 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, g_ty_bool_907, &F->tb_2078));
f_check_type_223(F->ta_2077, g_ty_bool_907, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
f_check_type_223(F->tb_2078, g_ty_bool_907, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2089), rt_str(" && ", 4)), F->b_2090), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2089), rt_str(" || ", 4)), F->b_2090), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2089), rt_str(" != ", 4)), F->b_2090), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("&", 1)) && (F->want_706 != NULL)) && ((*(P832)rt_nil_check(f_base_of_214(F->want_706))).kind == (((rt_int)6LL))))) {
F->at_2091 = NULL;
F->at_2091 = f_base_of_214(F->want_706);
F->a_2092 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, F->at_2091, &F->ta_2077));
F->b_2093 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, F->at_2091, &F->tb_2078));
f_check_type_223(F->ta_2077, F->at_2091, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
f_check_type_223(F->tb_2078, F->at_2091, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
if (((rt_r_ichk((*(P832)rt_nil_check(F->at_2091)).ndim) != ((rt_int)1LL)) || ((*(P832)rt_nil_check(f_base_of_214((*(P832)rt_nil_check(F->at_2091)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_639(F->at_2091);
F->t_707v = F->at_2091;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->at_2091)), rt_str("(", 1)), F->a_2092), rt_str(", ", 2)), F->b_2093), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("&", 1))) {
F->wa_2094 = NULL;
F->wb_2095 = NULL;
F->ws_2096 = NULL;
F->ce_2097 = NULL;
F->ce_2097 = g_ty_ascii_909;
if (((F->want_706 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_706)).kind) == (((rt_int)5LL))))) {
F->ws_2096 = F->want_706;
F->ce_2097 = f_str_elem_209(F->want_706);
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2094 = F->ce_2097;
} else {
F->wa_2094 = F->ws_2096;
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2095 = F->ce_2097;
} else {
F->wb_2095 = F->ws_2096;
}
{
F->a_2098 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, F->wa_2094, &F->ta_2077));
F->b_2099 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, F->wb_2095, &F->tb_2078));
F->t_707v = g_ty_string_910;
if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)5LL)))) {
F->t_707v = F->ta_2077;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)5LL)))) {
F->t_707v = F->tb_2078;
} else if ((!f_same_212(F->ta_2077, g_ty_ascii_909))) {
F->t_707v = f_new_typ_174((((rt_int)5LL)));
(*(P832)rt_nil_check(F->t_707v)).elem = F->ta_2077;
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)6LL))))) {
f_need_slice_639(F->ta_2077);
f_check_type_223(F->tb_2078, F->ta_2077, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
F->t_707v = F->ta_2077;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->ta_2077)), rt_str("(", 1)), F->a_2098), rt_str(", ", 2)), F->b_2099), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)5LL)))) {
f_check_type_223(f_str_cat_part_672(F->tb_2078), f_str_elem_209(F->ta_2077), rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)5LL)))) {
f_check_type_223(F->ta_2077, f_str_elem_209(F->tb_2078), rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
} else {
f_check_type_223(F->tb_2078, F->ta_2077, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2098), rt_str(", ", 2)), F->b_2099), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2098), rt_str(", ", 2)), F->b_2099), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2098), rt_str(", ", 2)), F->b_2099), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2098), rt_str(", ", 2)), F->b_2099), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1)) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))) && (f_as_subtype_285((*(P826)rt_nil_check(F->e_705)).a) != NULL)) && (f_as_subtype_285((*(P826)rt_nil_check(F->e_705)).b) != NULL))) {
F->t_707v = g_ty_bool_907;
F->result_ = f_subtype_compare_696(f_as_subtype_285((*(P826)rt_nil_check(F->e_705)).a), f_as_subtype_285((*(P826)rt_nil_check(F->e_705)).b), &(((P819)rt_nil_check(F->op_2076))->all), rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P819)rt_nil_check(F->op_2076))->all)) && (!rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2100 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, NULL, &F->hint_2079));
} else if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->e_705)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2079 = f_peek_type_674((*(P826)rt_nil_check(F->e_705)).b);
}
{
F->a_2101 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, F->hint_2079, &F->ta_2077));
F->b_2102 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, F->ta_2077, &F->tb_2078));
F->ct_2103 = NULL;
F->ct_2103 = f_base_of_214(F->ta_2077);
F->t_707v = g_ty_bool_907;
if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) != (((rt_int)11LL))))) {
f_check_type_223(F->tb_2078, F->ta_2077, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)11LL)))) {
F->ct_2103 = f_base_of_214(F->tb_2078);
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2102), rt_str(", ", 2)), F->a_2101), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2102), rt_str(", ", 2)), F->a_2101), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2102), rt_str(", ", 2)), F->a_2101), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2101), rt_str(", ", 2)), F->b_2102), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2102), rt_str(", ", 2)), F->a_2101), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P832)rt_nil_check(F->ct_2103)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1)))) && (!rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_356(F->ct_2103)) {
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_368(F->ct_2103, &F->a_2101, &F->b_2102);
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_368(F->ct_2103, &F->a_2101, &F->b_2102)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2101), rt_str(" == ", 4)), F->b_2102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2101), rt_str(" != ", 4)), F->b_2102), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2101), rt_str(" ", 1)), (((P819)rt_nil_check(F->op_2076))->all)), rt_str(" ", 1)), F->b_2102), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2104 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).a, F->want_706, &F->ta_2077));
F->b_2105 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->e_705)).b, F->ta_2077, &F->tb_2078));
if (((rt_r_ichk((*(P832)rt_nil_check(F->ta_2077)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->tb_2078)).kind) == (((rt_int)3LL))))) {
F->t_707v = g_ty_float_908;
if (((rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("+", 1)) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("-", 1))) || rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2104), rt_str(" ", 1)), (((P819)rt_nil_check(F->op_2076))->all)), rt_str(" ", 1)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
}
}
f_check_type_223(F->ta_2077, g_ty_int_906, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
f_check_type_223(F->tb_2078, g_ty_int_906, rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line));
F->t_707v = g_ty_int_906;
if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P819)rt_nil_check(F->op_2076))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2104), rt_str(", ", 2)), F->b_2105), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P819)rt_nil_check(F->op_2076))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_707) = F->t_707v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_713(P826 e_709, P832 want_710, P828 ctx_711, P832 *t_712) {
  struct f_constructor_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_709 = e_709;
F->want_710 = want_710;
F->ctx_711 = ctx_711;
F->t_712 = t_712;
F->t_712v = *F->t_712;
F->it_2106 = NULL;
F->it_2106 = (*(P826)rt_nil_check(F->e_709)).a;
F->f_2107 = NULL;
F->vt_2108 = NULL;
if (((F->want_710 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_710)).kind) == (((rt_int)16LL))))) {
F->s_2109 = NULL;
F->s_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_294(F->want_710); b_; }));
F->t_712v = F->want_710;
while ((F->it_2106 != NULL)) {
F->v_2110 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->it_2106)).b, (*(P832)rt_nil_check(F->want_710)).elem, &F->vt_2108));
f_check_type_223(F->vt_2108, (*(P832)rt_nil_check(F->want_710)).elem, rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line));
F->s_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P819)rt_nil_check(F->s_2109))->all)), rt_str(", ", 2)), F->v_2110), rt_str(")", 1)); b_; }));
F->it_2106 = (*(P826)rt_nil_check(F->it_2106)).next;
}
F->result_ = (((P819)rt_nil_check(F->s_2109))->all);
goto ret_;
}
if (((F->want_710 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_710)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P819)rt_nil_check((*(P832)rt_nil_check(F->want_710)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_710 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_710)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_727(F->e_709, F->want_710, F->ctx_711, &F->t_712v);
goto ret_;
}
if (((F->want_710 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->want_710)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2106 == NULL) || ((*(P826)rt_nil_check(F->it_2106)).next != NULL)) || ((*(P826)rt_nil_check(F->it_2106)).a == NULL)) || ((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2106)).a)).next != NULL)) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2106)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2107 = (*(P832)rt_nil_check(F->want_710)).fields;
{
F->i_2111 = RT_R_IUNDEF;
F->i_2111 = ((rt_int)0LL);
F->tmp_2112 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2107 != NULL) && (!rt_str_eq((((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all), (((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2106)).a)).a)).name))->all))))) {
F->i_2111 = rt_add(rt_r_ichk(F->i_2111), ((rt_int)1LL));
F->f_2107 = (*(P834)rt_nil_check(F->f_2107)).next;
}
if ((F->f_2107 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2106)).a)).a)).name))->all)); b_; }));
}
F->t_712v = F->want_710;
g_cons_ctx_897 = (*(P834)rt_nil_check(F->f_2107)).c;
{
F->v_2113 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->it_2106)).b, (*(P834)rt_nil_check(F->f_2107)).t, &F->vt_2108));
f_check_type_223(F->vt_2108, (*(P834)rt_nil_check(F->f_2107)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_710)), rt_str(" ", 1)), F->tmp_2112), rt_str("; ", 2)), F->tmp_2112), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2111))), rt_str("; ", 2)), F->tmp_2112), rt_str(".u.", 3)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all))), rt_str(" = ", 3)), f_comp_value_717((*(P834)rt_nil_check(F->f_2107)).t, (*(P834)rt_nil_check(F->f_2107)).c, &F->v_2113)), rt_str("; ", 2)), F->tmp_2112), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_710 == NULL) || (rt_r_ichk((*(P832)rt_nil_check(F->want_710)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_712v = F->want_710;
F->f_2107 = (*(P832)rt_nil_check(F->want_710)).fields;
{
F->tmp_2114 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2115 = NULL;
F->parts_2115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_710)), rt_str(" ", 1)), F->tmp_2114), rt_str(";", 1)); b_; }));
while ((F->it_2106 != NULL)) {
F->k_2116 = NULL;
F->k_2116 = (*(P826)rt_nil_check(F->it_2106)).a;
F->shared_2117 = NULL;
if ((F->k_2116 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2116 != NULL)) {
if (((((F->f_2107 == NULL) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->k_2116)).a)).kind) != (((rt_int)7LL)))) || ((*(P826)rt_nil_check(F->k_2116)).b != NULL)) || (!rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check((*(P826)rt_nil_check(F->k_2116)).a)).name))->all), (((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all))))) {
if ((F->f_2107 == NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2106)).a)).next == NULL)) {
g_cons_ctx_897 = (*(P834)rt_nil_check(F->f_2107)).c;
{
F->v_2118 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->it_2106)).b, (*(P834)rt_nil_check(F->f_2107)).t, &F->vt_2108));
f_check_type_223(F->vt_2108, (*(P834)rt_nil_check(F->f_2107)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line));
F->parts_2115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2115))->all), rt_str(" ", 1)), F->tmp_2114), rt_str(".", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all))), rt_str(" = ", 3)), f_comp_value_717((*(P834)rt_nil_check(F->f_2107)).t, (*(P834)rt_nil_check(F->f_2107)).c, &F->v_2118)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2117 == NULL)) {
F->v_2119 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->it_2106)).b, (*(P834)rt_nil_check(F->f_2107)).t, &F->vt_2108));
F->shared_2117 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_223(F->vt_2108, (*(P834)rt_nil_check(F->f_2107)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line));
F->parts_2115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2115))->all), rt_str(" ", 1)), f_ctype_225((*(P834)rt_nil_check(F->f_2107)).t)), rt_str(" ", 1)), (((P819)rt_nil_check(F->shared_2117))->all)), rt_str(" = ", 3)), F->v_2119), rt_str(";", 1)); b_; }));
}
f_check_type_223(F->vt_2108, (*(P834)rt_nil_check(F->f_2107)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line));
F->parts_2115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2115))->all), rt_str(" ", 1)), F->tmp_2114), rt_str(".", 1)), f_field_c_17(&(((P819)rt_nil_check((*(P834)rt_nil_check(F->f_2107)).name))->all))), rt_str(" = ", 3)), f_comp_value_717((*(P834)rt_nil_check(F->f_2107)).t, (*(P834)rt_nil_check(F->f_2107)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P834)rt_nil_check(F->f_2107)).t, &(((P819)rt_nil_check(F->shared_2117))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2107 = (*(P834)rt_nil_check(F->f_2107)).next;
F->k_2116 = (*(P826)rt_nil_check(F->k_2116)).next;
}
F->it_2106 = (*(P826)rt_nil_check(F->it_2106)).next;
}
if ((F->f_2107 != NULL)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_709)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2115))->all), rt_str(" ", 1)), F->tmp_2114), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_712) = F->t_712v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_717(P832 t_714, P828 c_715, rstr *v_716) {
  struct f_comp_value_717fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_714 = t_714;
F->c_715 = c_715;
F->v_716 = v_716;
if (((F->c_715 == NULL) || (((*(P828)rt_nil_check(F->c_715)).lo != NULL) && f_has_at_719(&(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_715)).lo))->all))))) {
F->result_ = f_copy_code_364(F->t_714, &(*F->v_716));
goto ret_;
} else if ((((rt_r_ichk((*(P832)rt_nil_check(F->t_714)).kind) == (((rt_int)5LL))) && ((*(P828)rt_nil_check(F->c_715)).slen != NULL)) && (!f_has_at_719(&(((P819)rt_nil_check((*(P828)rt_nil_check(F->c_715)).slen))->all))))) {
F->result_ = f_copy_code_364(F->t_714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_716)), rt_str(", ", 2)), (((P819)rt_nil_check((*(P828)rt_nil_check(F->c_715)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_714, F->c_715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_714, &(*F->v_716)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_719(rstr *s_718) {
  struct f_has_at_719fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_718 = s_718;
{ rt_int lo2121 = ((rt_int)1LL), hi2122 = ((rt_int)(((*F->s_718)).len));
for (rt_int it2123 = lo2121; it2123 <= hi2122; it2123++) {
F->i_2120 = it2123;
if ((rt_r_echk(rt_str_get((*F->s_718), F->i_2120)) == 64)) {
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

static rstr f_set_elem_722(P832 st_720, rstr *v_721) {
  struct f_set_elem_722fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_720 = st_720;
F->v_721 = v_721;
F->result_ = (*F->v_721);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_727(P826 e_723, P832 at_724, P828 ctx_725, P832 *t_726) {
  struct f_array_cons_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_723 = e_723;
F->at_724 = at_724;
F->ctx_725 = ctx_725;
F->t_726 = t_726;
F->t_726v = *F->t_726;
F->tmp_2124 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2125 = NULL;
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->at_724)), rt_str(" ", 1)), F->tmp_2124), rt_str(";", 1)); b_; }));
F->it_2126 = NULL;
F->it_2126 = (*(P826)rt_nil_check(F->e_723)).a;
F->positional_2127 = RT_R_EUNDEF;
F->positional_2127 = 1;
F->t_726v = F->at_724;
while ((F->it_2126 != NULL)) {
if (((*(P826)rt_nil_check(F->it_2126)).a != NULL)) {
F->positional_2127 = 0;
}
F->it_2126 = (*(P826)rt_nil_check(F->it_2126)).next;
}
{ rt_int lo2129 = ((rt_int)1LL), hi2130 = rt_r_ichk((*(P832)rt_nil_check(F->at_724)).ndim);
for (rt_int it2131 = lo2129; it2131 <= hi2130; it2131++) {
F->k_2128 = it2131;
F->lo_2132 = NULL;
F->hi_2133 = NULL;
if ((((F->ctx_725 != NULL) && (f_cons_lo_243(F->ctx_725, F->k_2128) != NULL)) && (!f_has_at_719(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P819)rt_nil_check(f_cons_lo_243(F->ctx_725, F->k_2128)))->all); b_; }))))) {
F->lo_2132 = f_cons_lo_243(F->ctx_725, F->k_2128);
F->hi_2133 = f_cons_hi_246(F->ctx_725, F->k_2128);
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->at_724)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2127))) {
if (((*(P832)rt_nil_check(f_base_of_214((*(P832)rt_nil_check(F->at_724)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2133 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->lo_2132))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P826)rt_nil_check(F->e_723)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_723)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2125))->all), rt_str(" ", 1)), F->tmp_2124), rt_str(".", 1)), f_dim_lo_233(F->k_2128)), rt_str(" = ", 3)), (((P819)rt_nil_check(F->lo_2132))->all)), rt_str("; ", 2)), F->tmp_2124), rt_str(".", 1)), f_dim_hi_235(F->k_2128)), rt_str(" = ", 3)), (((P819)rt_nil_check(F->hi_2133))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->at_724)).ndim) == ((rt_int)1LL))) {
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2125))->all), rt_str(" ", 1)), F->tmp_2124), rt_str(".lo2 = ", 7)), F->tmp_2124), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2125))->all), rt_str(" rt_int n_", 10)), F->tmp_2124), rt_str(" = ", 3)), f_acnt_240(F->at_724, &F->tmp_2124)), rt_str("; ", 2)), F->tmp_2124), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P832)rt_nil_check(F->at_724)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2124), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2124), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2124), rt_str(" + 1);", 6)); b_; }));
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->parts_2125))->all), f_fill_items_733((*(P826)rt_nil_check(F->e_723)).a, F->at_724, &F->tmp_2124, NULL, ((rt_int)1LL))); b_; }));
F->parts_2125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->parts_2125))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2124), rt_str("; i_++) if (seen_", 17)), F->tmp_2124), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2124), rt_str("; })", 4)); b_; }));
F->result_ = (((P819)rt_nil_check(F->parts_2125))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_726) = F->t_726v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_733(P826 items_728, P832 at_729, rstr *tmp_730, P830 prefix_731, rt_int dim_732) {
  struct f_fill_items_733fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_728 = items_728;
F->at_729 = at_729;
F->tmp_730 = tmp_730;
F->prefix_731 = prefix_731;
F->dim_732 = dim_732;
F->it_2134 = NULL;
F->it_2134 = F->items_728;
F->pos_2135 = RT_R_IUNDEF;
F->pos_2135 = ((rt_int)0LL);
F->r_2136 = NULL;
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2137 = NULL;
while ((F->it_2134 != NULL)) {
if (((*(P826)rt_nil_check(F->it_2134)).a == NULL)) {
if (((F->dim_732 < rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim)) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2134)).b)).kind) == (((rt_int)14LL))))) {
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_732)), rt_str(" = ", 3)), (*F->tmp_730)), rt_str(".", 1)), f_dim_lo_233(F->dim_732)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2135))), rt_str("; ", 2)), f_fill_items_733((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2134)).b)).a, F->at_729, &(*F->tmp_730), f_add_line_738(F->prefix_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_732)); b_; })), rt_add(F->dim_732, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2138 = rt_str_copy(f_item_value_743((*(P826)rt_nil_check(F->it_2134)).b, F->at_729, f_e_line_735(F->it_2134), &F->vt_2137));
if (((F->dim_732 == ((rt_int)1LL)) && (rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim) > ((rt_int)1LL)))) {
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" { ", 3)), F->v_2138), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2135))), rt_str(" >= n_", 6)), (*F->tmp_730)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_730)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2135))), rt_str("] = ", 4)), f_copy_code_364((*(P832)rt_nil_check(F->at_729)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_730)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2135))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" { ", 3)), F->v_2138), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_732)), rt_str(" = ", 3)), (*F->tmp_730)), rt_str(".", 1)), f_dim_lo_233(F->dim_732)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2135))), rt_str("; ", 2)), f_store_at_753(F->at_729, &(*F->tmp_730), f_add_line_738(F->prefix_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_732)); b_; })), F->dim_732)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2135 = rt_add(rt_r_ichk(F->pos_2135), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_732, f_list_len_67((*(P826)rt_nil_check(F->it_2134)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim))) {
F->k_2139 = NULL;
F->k_2139 = (*(P826)rt_nil_check(F->it_2134)).a;
F->d_2140 = RT_R_IUNDEF;
F->d_2140 = F->dim_732;
F->pre_2141 = NULL;
F->pre_2141 = F->prefix_731;
F->loops_2142 = NULL;
F->loops_2142 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2143 = NULL;
F->ends_2143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2144 = rt_str_copy(f_item_value_743((*(P826)rt_nil_check(F->it_2134)).b, F->at_729, rt_r_ichk((*(P826)rt_nil_check(F->it_2134)).line), &F->vt_2137));
while ((F->k_2139 != NULL)) {
F->xv_2145 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2140))));
F->loops_2142 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->loops_2142))->all), f_key_loop_748(F->k_2139, F->at_729, rt_r_ichk(F->d_2140), &F->xv_2145)); b_; }));
F->ends_2143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->ends_2143))->all), rt_str(" }", 2)); b_; }));
F->pre_2141 = f_add_line_738(F->pre_2141, &F->xv_2145);
F->d_2140 = rt_add(rt_r_ichk(F->d_2140), ((rt_int)1LL));
F->k_2139 = (*(P826)rt_nil_check(F->k_2139)).next;
}
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" { ", 3)), F->v_2144), (((P819)rt_nil_check(F->loops_2142))->all)), rt_str(" ", 1)), f_store_at_753(F->at_729, &(*F->tmp_730), F->pre_2141, rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim))), (((P819)rt_nil_check(F->ends_2143))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_732 == rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim)) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2134)).b)).kind) == (((rt_int)14LL))))) {
F->k_2146 = NULL;
F->k_2146 = (*(P826)rt_nil_check(F->it_2134)).a;
while ((F->k_2146 != NULL)) {
F->xv_2147 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_732)));
if ((F->dim_732 < rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim))) {
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" {", 2)), f_key_loop_748(F->k_2146, F->at_729, F->dim_732, &F->xv_2147)), rt_str(" ", 1)), f_fill_items_733((*(P826)rt_nil_check((*(P826)rt_nil_check(F->it_2134)).b)).a, F->at_729, &(*F->tmp_730), f_add_line_738(F->prefix_731, &F->xv_2147), rt_add(F->dim_732, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2148 = rt_str_copy(f_item_value_743((*(P826)rt_nil_check(F->it_2134)).b, F->at_729, rt_r_ichk((*(P826)rt_nil_check(F->it_2134)).line), &F->vt_2137));
F->r_2136 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->r_2136))->all), rt_str(" { ", 3)), F->v_2148), f_key_loop_748(F->k_2146, F->at_729, F->dim_732, &F->xv_2147)), rt_str(" ", 1)), f_store_at_753(F->at_729, &(*F->tmp_730), f_add_line_738(F->prefix_731, &F->xv_2147), F->dim_732)), rt_str(" } }", 4)); b_; }));
}
F->k_2146 = (*(P826)rt_nil_check(F->k_2146)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->it_2134)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P832)rt_nil_check(F->at_729)).ndim), F->dim_732), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2134 = (*(P826)rt_nil_check(F->it_2134)).next;
}
F->result_ = (((P819)rt_nil_check(F->r_2136))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_735(P826 e_734) {
  struct f_e_line_735fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_734 = e_734;
F->result_ = rt_r_ichk((*(P826)rt_nil_check(F->e_734)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_add_line_738(P830 l_736, rstr *s_737) {
  struct f_add_line_738fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_736 = l_736;
F->s_737 = s_737;
F->r_2149 = NULL;
F->tail_2150 = NULL;
F->x_2151 = NULL;
F->p_2152 = NULL;
F->p_2152 = F->l_736;
while ((F->p_2152 != NULL)) {
{ R831 *cell2153 = rt_alloc(sizeof(R831));
(*cell2153).s = NULL;
(*cell2153).next = NULL;
F->x_2151 = cell2153;
}
(*(P830)rt_nil_check(F->x_2151)).s = (*(P830)rt_nil_check(F->p_2152)).s;
if ((F->tail_2150 == NULL)) {
F->r_2149 = F->x_2151;
} else {
(*(P830)rt_nil_check(F->tail_2150)).next = F->x_2151;
}
F->tail_2150 = F->x_2151;
F->p_2152 = (*(P830)rt_nil_check(F->p_2152)).next;
}
{ R831 *cell2154 = rt_alloc(sizeof(R831));
(*cell2154).s = NULL;
(*cell2154).next = NULL;
F->x_2151 = cell2154;
}
(*(P830)rt_nil_check(F->x_2151)).s = f_mk_3(&(*F->s_737));
if ((F->tail_2150 == NULL)) {
F->r_2149 = F->x_2151;
} else {
(*(P830)rt_nil_check(F->tail_2150)).next = F->x_2151;
}
F->result_ = F->r_2149;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_743(P826 e_739, P832 at_740, rt_int line_741, P832 *vt_742) {
  struct f_item_value_743fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_739 = e_739;
F->at_740 = at_740;
F->line_741 = line_741;
F->vt_742 = vt_742;
F->vt_742v = *F->vt_742;
g_cons_ctx_897 = (*(P832)rt_nil_check(F->at_740)).elemcons;
{
F->v_2155 = rt_str_copy(f_gexpr_658(F->e_739, (*(P832)rt_nil_check(F->at_740)).elem, &F->vt_742v));
f_check_type_223(F->vt_742v, (*(P832)rt_nil_check(F->at_740)).elem, F->line_741);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P832)rt_nil_check(F->at_740)).elem), rt_str(" v_ = ", 6)), f_comp_value_717((*(P832)rt_nil_check(F->at_740)).elem, (*(P832)rt_nil_check(F->at_740)).elemcons, &F->v_2155)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_742) = F->vt_742v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_748(P826 k_744, P832 at_745, rt_int d_746, rstr *xv_747) {
  struct f_key_loop_748fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_744 = k_744;
F->at_745 = at_745;
F->d_746 = d_746;
F->xv_747 = xv_747;
F->it_2156 = NULL;
F->lo_2157 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->k_744)).a, f_idx_type_249(F->at_745, F->d_746), &F->it_2156));
f_check_type_223(F->it_2156, f_idx_type_249(F->at_745, F->d_746), rt_r_ichk((*(P826)rt_nil_check(F->k_744)).line));
if (((*(P826)rt_nil_check(F->k_744)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_747)), rt_str(" = ", 3)), F->lo_2157), rt_str(";", 1));
goto ret_;
}
{
F->hi_2158 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->k_744)).b, f_idx_type_249(F->at_745, F->d_746), &F->it_2156));
f_check_type_223(F->it_2156, f_idx_type_249(F->at_745, F->d_746), rt_r_ichk((*(P826)rt_nil_check(F->k_744)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_747)), rt_str(" = ", 3)), F->lo_2157), rt_str(", h", 3)), (*F->xv_747)), rt_str(" = ", 3)), F->hi_2158), rt_str("; ", 2)), (*F->xv_747)), rt_str(" <= h", 5)), (*F->xv_747)), rt_str("; ", 2)), (*F->xv_747)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_753(P832 at_749, rstr *tmp_750, P830 xs_751, rt_int n_752) {
  struct f_store_at_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_749 = at_749;
F->tmp_750 = tmp_750;
F->xs_751 = xs_751;
F->n_752 = n_752;
F->off_2159 = NULL;
F->x_2160 = NULL;
F->x_2160 = F->xs_751;
F->k_2161 = RT_R_IUNDEF;
F->k_2161 = ((rt_int)0LL);
while ((F->x_2160 != NULL)) {
F->k_2161 = rt_add(rt_r_ichk(F->k_2161), ((rt_int)1LL));
{
F->l_2162 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_750), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_2161))));
F->h_2163 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_750), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_2161))));
if ((F->off_2159 == NULL)) {
F->off_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P819)rt_nil_check((*(P830)rt_nil_check(F->x_2160)).s))->all)), rt_str(", ", 2)), F->l_2162), rt_str(", ", 2)), F->h_2163), rt_str(") - ", 4)), F->l_2162), rt_str(")", 1)); b_; }));
} else {
F->off_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P819)rt_nil_check(F->off_2159))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2162), rt_str(", ", 2)), F->h_2163), rt_str(") + rt_index(", 13)), (((P819)rt_nil_check((*(P830)rt_nil_check(F->x_2160)).s))->all)), rt_str(", ", 2)), F->l_2162), rt_str(", ", 2)), F->h_2163), rt_str(") - ", 4)), F->l_2162), rt_str(")", 1)); b_; }));
}
}
F->x_2160 = (*(P830)rt_nil_check(F->x_2160)).next;
}
if ((rt_r_ichk(F->k_2161) != rt_r_ichk((*(P832)rt_nil_check(F->at_749)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P832)rt_nil_check(F->at_749)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P819)rt_nil_check(F->off_2159))->all)), rt_str("; ", 2)), (*F->tmp_750)), rt_str(".p[o_] = ", 9)), f_copy_code_364((*(P832)rt_nil_check(F->at_749)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_750)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_756(P836 y_754, P826 args_755) {
  struct f_fits_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_754 = y_754;
F->args_755 = args_755;
F->a_2164 = NULL;
F->a_2164 = F->args_755;
F->pm_2165 = NULL;
F->pm_2165 = (*(P836)rt_nil_check(F->y_754)).params;
F->t_2166 = NULL;
F->saved_2167 = NULL;
F->saved_2167 = g_code_876;
F->ok_2168 = RT_R_EUNDEF;
F->ok_2168 = 1;
F->lv_2169 = NULL;
F->lc_2170 = NULL;
F->ro_2171 = RT_R_EUNDEF;
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = f_new_buffer_24();
{ rt_frame xf2172;
if (RT_TRY(xf2172)) {
while (((rt_r_echk(F->ok_2168) && (F->a_2164 != NULL)) && (F->pm_2165 != NULL))) {
if (((rt_r_ichk((*(P838)rt_nil_check(F->pm_2165)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P838)rt_nil_check(F->pm_2165)).mode) == (((rt_int)3LL))))) {
f_lvalue_627(F->a_2164, &F->lv_2169, &F->t_2166, &F->lc_2170, &F->ro_2171);
} else {
F->v_2174 = rt_str_copy(f_gexpr_658(F->a_2164, (*(P838)rt_nil_check(F->pm_2165)).t, &F->t_2166));
}
if ((!(f_same_212(F->t_2166, (*(P838)rt_nil_check(F->pm_2165)).t) || ((rt_r_ichk((*(P832)rt_nil_check(F->t_2166)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P832)rt_nil_check((*(P838)rt_nil_check(F->pm_2165)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2168 = 0;
}
F->a_2164 = (*(P826)rt_nil_check(F->a_2164)).next;
F->pm_2165 = (*(P838)rt_nil_check(F->pm_2165)).next;
}
if (((F->a_2164 != NULL) || (F->pm_2165 != NULL))) {
F->ok_2168 = 0;
}
RT_POP(xf2172);
} else {
RT_POP(xf2172);
int x2173 = rt_xcur;
if (0 || x2173 == ex_compile_error_1) {
F->ok_2168 = 0;
} else {
rt_raise(x2173);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = F->saved_2167;
F->result_ = rt_r_echk(F->ok_2168);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_resolve_overload_762(rstr *name_757, P826 tt_758, P826 args_759, int is_stmt_760, rt_int line_761) {
  struct f_resolve_overload_762fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_757 = name_757;
F->tt_758 = tt_758;
F->args_759 = args_759;
F->is_stmt_760 = is_stmt_760;
F->line_761 = line_761;
F->y_2175 = NULL;
F->first_2176 = NULL;
F->n_2177 = RT_R_IUNDEF;
F->n_2177 = ((rt_int)0LL);
{ rt_int lo2179 = ((rt_int)1LL), hi2180 = ((rt_int)3LL);
for (rt_int it2181 = lo2179; it2181 <= hi2180; it2181++) {
F->pass_2178 = it2181;
F->y_2175 = f_overload_chain_768(&(*F->name_757), F->pass_2178);
while ((F->y_2175 != NULL)) {
if (((rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_2175)).name))->all), (*F->name_757)) && ((rt_r_ichk((*(P836)rt_nil_check(F->y_2175)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2175)).kind) == (((rt_int)4LL))))) && ((F->pass_2178 != ((rt_int)1LL)) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2175)).depth) >= rt_r_ichk(g_gdepth_895))))) {
F->n_2177 = rt_add(rt_r_ichk(F->n_2177), ((rt_int)1LL));
if ((F->first_2176 == NULL)) {
F->first_2176 = F->y_2175;
}
if (((((rt_r_ichk((*(P836)rt_nil_check(F->y_2175)).kind) == (((rt_int)4LL))) == F->is_stmt_760) && f_tt_fits_765(F->y_2175, F->tt_758)) && f_fits_756(F->y_2175, F->args_759))) {
F->result_ = F->y_2175;
goto ret_;
}
}
F->y_2175 = (*(P836)rt_nil_check(F->y_2175)).chain;
}
}
}
if (f_is_builtin_770(&(*F->name_757))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2177) > ((rt_int)1LL))) {
f_fail_23(F->line_761, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_757)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2176;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_765(P836 y_763, P826 tt_764) {
  struct f_tt_fits_765fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_763 = y_763;
F->tt_764 = tt_764;
F->f_2182 = NULL;
F->a_2183 = NULL;
F->saved_2184 = NULL;
F->saved_2184 = g_code_876;
F->ok_2185 = RT_R_EUNDEF;
F->ok_2185 = 1;
if ((((*(P836)rt_nil_check(F->y_763)).decl == NULL) || ((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_763)).decl)).e == NULL))) {
F->result_ = (F->tt_764 == NULL);
goto ret_;
} else if ((F->tt_764 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2182 = (*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_763)).decl)).e;
F->a_2183 = F->tt_764;
g_trial_904 = rt_add(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = f_new_buffer_24();
{ rt_frame xf2186;
if (RT_TRY(xf2186)) {
while (((rt_r_echk(F->ok_2185) && (F->f_2182 != NULL)) && (F->a_2183 != NULL))) {
F->fc_2188 = NULL;
F->ac_2189 = NULL;
F->fst_2190 = NULL;
F->fst_2190 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->f_2182)).line));
F->ft_2191 = NULL;
F->at_2192 = NULL;
(*(P826)rt_nil_check(F->fst_2190)).name = (*(P826)rt_nil_check(F->f_2182)).name;
F->ft_2191 = f_resolve_subtype_256(F->fst_2190, &F->fc_2188);
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_2183)).kind) >= (((rt_int)70LL)))) {
F->at_2192 = f_resolve_subtype_256(F->a_2183, &F->ac_2189);
} else {
F->ast_2193 = NULL;
F->ast_2193 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P826)rt_nil_check(F->a_2183)).line));
(*(P826)rt_nil_check(F->ast_2193)).name = (*(P826)rt_nil_check(F->a_2183)).name;
F->at_2192 = f_resolve_subtype_256(F->ast_2193, &F->ac_2189);
}
F->ok_2185 = f_same_212(F->ft_2191, F->at_2192);
F->f_2182 = (*(P826)rt_nil_check(F->f_2182)).next;
F->a_2183 = (*(P826)rt_nil_check(F->a_2183)).next;
}
F->ok_2185 = ((rt_r_echk(F->ok_2185) && (F->f_2182 == NULL)) && (F->a_2183 == NULL));
RT_POP(xf2186);
} else {
RT_POP(xf2186);
int x2187 = rt_xcur;
if (0 || x2187 == ex_compile_error_1) {
F->ok_2185 = 0;
} else {
rt_raise(x2187);
}
}
}
g_trial_904 = rt_sub(rt_r_ichk(g_trial_904), ((rt_int)1LL));
g_code_876 = F->saved_2184;
F->result_ = rt_r_echk(F->ok_2185);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_overload_chain_768(rstr *name_766, rt_int pass_767) {
  struct f_overload_chain_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_766 = name_766;
F->pass_767 = pass_767;
if (((g_genv_863 == NULL) && (F->pass_767 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_767 == ((rt_int)2LL))) {
F->result_ = ({ A842 b_ = (((P840)rt_nil_check(g_genv_863))->all); b_.p[(rt_index(f_hash_152(&(*F->name_766)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A842 b_ = (((P840)rt_nil_check(g_table_862))->all); b_.p[(rt_index(f_hash_152(&(*F->name_766)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_770(rstr *n_769) {
  struct f_is_builtin_770fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_769 = n_769;
F->result_ = (((((((((((((((rt_str_eq((*F->n_769), rt_str("ABS", 3)) || rt_str_eq((*F->n_769), rt_str("POS", 3))) || rt_str_eq((*F->n_769), rt_str("SUCC", 4))) || rt_str_eq((*F->n_769), rt_str("PRED", 4))) || rt_str_eq((*F->n_769), rt_str("SQRT", 4))) || rt_str_eq((*F->n_769), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_769), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_769), rt_str("WRITE", 5))) || rt_str_eq((*F->n_769), rt_str("READLN", 6))) || rt_str_eq((*F->n_769), rt_str("SEND", 4))) || rt_str_eq((*F->n_769), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_769), rt_str("DELAY", 5))) || rt_str_eq((*F->n_769), rt_str("TIME", 4))) || rt_str_eq((*F->n_769), rt_str("CNVT", 4))) || rt_str_eq((*F->n_769), rt_str("FORMAT", 6))) || f_is_low_level_772(&(*F->n_769)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_772(rstr *n_771) {
  struct f_is_low_level_772fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_771 = n_771;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_771), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_771), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_771), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_771), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_771), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_771), rt_str("LOCK", 4))) || rt_str_eq((*F->n_771), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_771), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_771), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_771), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_771), rt_str("WAITING", 7))) || rt_str_eq((*F->n_771), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_771), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_771), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_771), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_771), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_771), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_771), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_771), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_776(P826 tt_773, rt_int line_774, P832 *t_775) {
  struct f_me_high_776fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_773 = tt_773;
F->line_774 = line_774;
F->t_775 = t_775;
F->t_775v = *F->t_775;
F->c_2194 = NULL;
if ((F->tt_773 == NULL)) {
f_fail_23(F->line_774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_775v = f_resolve_subtype_256(F->tt_773, &F->c_2194);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_775v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_778(F->t_775v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_775) = F->t_775v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_778(P832 t_777) {
  struct f_type_tag_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_777 = t_777;
if (((*(P832)rt_nil_check(F->t_777)).name != NULL)) {
F->result_ = (((P819)rt_nil_check((*(P832)rt_nil_check(F->t_777)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_781(P826 e_779, rstr *name_780) {
  struct f_lock_ref_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_779 = e_779;
F->name_780 = name_780;
F->lv_2195 = NULL;
F->t_2196 = NULL;
F->c_2197 = NULL;
F->ro_2198 = RT_R_EUNDEF;
f_lvalue_627(F->e_779, &F->lv_2195, &F->t_2196, &F->c_2197, &F->ro_2198);
if ((rt_r_ichk((*(P832)rt_nil_check(F->t_2196)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_780), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P819)rt_nil_check(F->lv_2195))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P836 f_user_op_784(rstr *op_782, P826 args_783) {
  struct f_user_op_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_782 = op_782;
F->args_783 = args_783;
F->y_2199 = NULL;
{ rt_int lo2201 = ((rt_int)1LL), hi2202 = ((rt_int)3LL);
for (rt_int it2203 = lo2201; it2203 <= hi2202; it2203++) {
F->pass_2200 = it2203;
F->y_2199 = f_overload_chain_768(&(*F->op_782), F->pass_2200);
while ((F->y_2199 != NULL)) {
if ((((rt_str_eq((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_2199)).name))->all), (*F->op_782)) && (rt_r_ichk((*(P836)rt_nil_check(F->y_2199)).kind) == (((rt_int)3LL)))) && ((F->pass_2200 != ((rt_int)1LL)) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2199)).depth) >= rt_r_ichk(g_gdepth_895)))) && f_fits_756(F->y_2199, F->args_783))) {
F->result_ = F->y_2199;
goto ret_;
}
F->y_2199 = (*(P836)rt_nil_check(F->y_2199)).chain;
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

static rstr f_gcall_788(P826 e_785, int is_stmt_786, P832 *t_787) {
  struct f_gcall_788fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_785 = e_785;
F->is_stmt_786 = is_stmt_786;
F->t_787 = t_787;
F->t_787v = *F->t_787;
F->fn_2204 = NULL;
F->fn_2204 = (*(P826)rt_nil_check(F->e_785)).a;
F->tt_2205 = NULL;
F->y_2206 = NULL;
F->args_2207 = NULL;
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2208 = NULL;
F->a_2208 = (*(P826)rt_nil_check(F->e_785)).b;
F->pm_2209 = NULL;
F->lt_2210 = NULL;
F->vt_2211 = NULL;
F->lv_2212 = NULL;
F->lc_2213 = NULL;
F->ro_2214 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P826)rt_nil_check(F->fn_2204)).kind) == (((rt_int)12LL)))) {
F->tt_2205 = (*(P826)rt_nil_check(F->fn_2204)).b;
F->fn_2204 = (*(P826)rt_nil_check(F->fn_2204)).a;
}
F->y_2206 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all));
if ((F->y_2206 == NULL)) {
F->result_ = f_builtin_815(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), F->is_stmt_786, &F->t_787v);
goto ret_;
}
if ((((rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)10LL))))) {
F->alt_2215 = NULL;
F->alt_2215 = f_resolve_overload_762(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, F->is_stmt_786, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
if ((F->alt_2215 != NULL)) {
F->y_2206 = F->alt_2215;
} else if (f_is_builtin_770(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all))) {
F->result_ = f_builtin_815(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), F->is_stmt_786, &F->t_787v);
goto ret_;
}
}
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) == (((rt_int)10LL)))) {
F->y_2206 = f_instantiate_603(F->y_2206, F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
} else if (((rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) == (((rt_int)4LL))))) {
F->y_2206 = f_resolve_overload_762(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, F->is_stmt_786, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
if ((F->y_2206 == NULL)) {
F->result_ = f_builtin_815(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), F->tt_2205, (*(P826)rt_nil_check(F->e_785)).b, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), F->is_stmt_786, &F->t_787v);
goto ret_;
}
}
if (((rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_802(F->y_2206, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
if (((*(P836)rt_nil_check(F->y_2206)).capn != NULL)) {
F->cr_2216 = NULL;
F->cr_2216 = g_caps_881;
while ((F->cr_2216 != NULL)) {
if (((*(P853)rt_nil_check(F->cr_2216)).d == (*(P836)rt_nil_check(F->y_2206)).capn)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_2206)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2216 = (*(P853)rt_nil_check(F->cr_2216)).next;
}
}
if ((F->is_stmt_786 && (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_786) && (rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2209 = (*(P836)rt_nil_check(F->y_2206)).params;
if ((rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).level) > ((rt_int)0LL))) {
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2218 = ((rt_int)1LL), hi2219 = rt_sub(rt_r_ichk(g_cur_level_879), rt_r_ichk((*(P836)rt_nil_check(F->y_2206)).level));
for (rt_int it2220 = lo2218; it2220 <= hi2219; it2220++) {
F->i_2217 = it2220;
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2208 != NULL) && (F->pm_2209 != NULL))) {
if ((((rt_int)(((((P819)rt_nil_check(F->args_2207))->all)).len)) > ((rt_int)0LL))) {
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P838)rt_nil_check(F->pm_2209)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P838)rt_nil_check(F->pm_2209)).mode) == (((rt_int)3LL))))) {
f_lvalue_627(F->a_2208, &F->lv_2212, &F->lt_2210, &F->lc_2213, &F->ro_2214);
if (rt_r_echk(F->ro_2214)) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check((*(P838)rt_nil_check(F->pm_2209)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_223(F->lt_2210, (*(P838)rt_nil_check(F->pm_2209)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str("&", 1)), (((P819)rt_nil_check(F->lv_2212))->all)), f_actual_bounds_808((*(P838)rt_nil_check(F->pm_2209)).t, F->lt_2210, F->lc_2213)); b_; }));
} else if (((rt_r_ichk((*(P838)rt_nil_check(F->pm_2209)).mode) == (((rt_int)4LL))) && f_is_lvalue_621(F->a_2208))) {
f_lvalue_627(F->a_2208, &F->lv_2212, &F->lt_2210, &F->lc_2213, &F->ro_2214);
f_check_type_223(F->lt_2210, (*(P838)rt_nil_check(F->pm_2209)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str("&", 1)), (((P819)rt_nil_check(F->lv_2212))->all)), f_actual_bounds_808((*(P838)rt_nil_check(F->pm_2209)).t, F->lt_2210, F->lc_2213)); b_; }));
} else if ((rt_r_ichk((*(P838)rt_nil_check(F->pm_2209)).mode) == (((rt_int)4LL)))) {
F->v_2221 = rt_str_copy(f_gexpr_in_666(F->a_2208, (*(P838)rt_nil_check(F->pm_2209)).t, (*(P838)rt_nil_check(F->pm_2209)).c, &F->vt_2211));
F->ct_2222 = rt_str_copy(f_ctype_225((*(P838)rt_nil_check(F->pm_2209)).t));
f_check_type_223(F->vt_2211, (*(P838)rt_nil_check(F->pm_2209)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str("({ ", 3)), F->ct_2222), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2222), rt_str(")); *b_ = ", 10)), F->v_2221), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P838)rt_nil_check(F->pm_2209)).t)) {
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2223 = rt_str_copy(f_gexpr_in_666(F->a_2208, (*(P838)rt_nil_check(F->pm_2209)).t, (*(P838)rt_nil_check(F->pm_2209)).c, &F->vt_2211));
f_check_type_223(F->vt_2211, (*(P838)rt_nil_check(F->pm_2209)).t, rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line));
F->args_2207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P819)rt_nil_check(F->args_2207))->all), F->v_2223); b_; }));
}
F->a_2208 = (*(P826)rt_nil_check(F->a_2208)).next;
F->pm_2209 = (*(P838)rt_nil_check(F->pm_2209)).next;
}
if (((F->a_2208 != NULL) || (F->pm_2209 != NULL))) {
f_fail_23(rt_r_ichk((*(P826)rt_nil_check(F->e_785)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P826)rt_nil_check(F->fn_2204)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(F->e_785)).b), f_list_len_67(F->a_2208)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_787v = (*(P836)rt_nil_check(F->y_2206)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_2206)).cname))->all), rt_str("(", 1)), (((P819)rt_nil_check(F->args_2207))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_787) = F->t_787v;
  RT_FPOP();
  return F->result_;
}

static P830 f_requires_790(P836 y_789) {
  struct f_requires_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_789 = y_789;
if (rt_r_echk((*(P836)rt_nil_check(F->y_789)).reqdone)) {
F->result_ = (*(P836)rt_nil_check(F->y_789)).reqs;
goto ret_;
}
(*(P836)rt_nil_check(F->y_789)).reqdone = 1;
if ((((*(P836)rt_nil_check(F->y_789)).decl != NULL) && (((rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_789)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_789)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_789)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2224 = NULL;
F->imp_2224 = (*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_789)).decl)).d;
while ((F->imp_2224 != NULL)) {
f_add_req_793(F->y_789, &(((P819)rt_nil_check((*(P826)rt_nil_check(F->imp_2224)).name))->all));
F->imp_2224 = (*(P826)rt_nil_check(F->imp_2224)).next;
}
f_require_calls_796(F->y_789, (*(P826)rt_nil_check((*(P836)rt_nil_check(F->y_789)).decl)).c);
}
F->result_ = (*(P836)rt_nil_check(F->y_789)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_793(P836 y_791, rstr *name_792) {
  struct f_add_req_793fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_791 = y_791;
F->name_792 = name_792;
F->l_2225 = NULL;
if ((!f_seen_name_375((*(P836)rt_nil_check(F->y_791)).reqs, &(*F->name_792)))) {
{ R831 *cell2226 = rt_alloc(sizeof(R831));
(*cell2226).s = NULL;
(*cell2226).next = NULL;
F->l_2225 = cell2226;
}
(*(P830)rt_nil_check(F->l_2225)).s = f_mk_3(&(*F->name_792));
(*(P830)rt_nil_check(F->l_2225)).next = (*(P836)rt_nil_check(F->y_791)).reqs;
(*(P836)rt_nil_check(F->y_791)).reqs = F->l_2225;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_796(P836 y_794, P826 e_795) {
  struct f_require_calls_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_794 = y_794;
F->e_795 = e_795;
F->x_2227 = NULL;
F->x_2227 = F->e_795;
while ((F->x_2227 != NULL)) {
if ((((((rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)51LL))))) {
F->x_2227 = (*(P826)rt_nil_check(F->x_2227)).next;
} else {
F->callee_2228 = NULL;
if (((((rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->x_2227)).kind) == (((rt_int)21LL)))) && ((*(P826)rt_nil_check(F->x_2227)).a != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->x_2227)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2228 = (*(P826)rt_nil_check(F->x_2227)).a;
}
if ((F->callee_2228 != NULL)) {
F->z_2229 = NULL;
F->z_2229 = f_lookup_154(&(((P819)rt_nil_check((*(P826)rt_nil_check(F->callee_2228)).name))->all));
if ((((F->z_2229 != NULL) && (F->z_2229 != F->y_794)) && ((rt_r_ichk((*(P836)rt_nil_check(F->z_2229)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P836)rt_nil_check(F->z_2229)).kind) == (((rt_int)3LL)))))) {
F->l_2230 = NULL;
F->l_2230 = f_requires_790(F->z_2229);
while ((F->l_2230 != NULL)) {
f_add_req_793(F->y_794, &(((P819)rt_nil_check((*(P830)rt_nil_check(F->l_2230)).s))->all));
F->l_2230 = (*(P830)rt_nil_check(F->l_2230)).next;
}
}
}
if (((*(P826)rt_nil_check(F->x_2227)).a != NULL)) {
f_require_calls_796(F->y_794, (*(P826)rt_nil_check(F->x_2227)).a);
}
if (((*(P826)rt_nil_check(F->x_2227)).b != NULL)) {
f_require_calls_796(F->y_794, (*(P826)rt_nil_check(F->x_2227)).b);
}
if (((*(P826)rt_nil_check(F->x_2227)).c != NULL)) {
f_require_calls_796(F->y_794, (*(P826)rt_nil_check(F->x_2227)).c);
}
F->x_2227 = (*(P826)rt_nil_check(F->x_2227)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_799(P826 elems_797, rstr *name_798) {
  struct f_declared_in_799fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_797 = elems_797;
F->name_798 = name_798;
F->e_2231 = NULL;
F->e_2231 = F->elems_797;
while ((F->e_2231 != NULL)) {
if ((((rt_r_ichk((*(P826)rt_nil_check(F->e_2231)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->e_2231)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P819)rt_nil_check((*(P826)rt_nil_check(F->e_2231)).name))->all), (*F->name_798)))) {
F->result_ = 1;
goto ret_;
}
F->e_2231 = (*(P826)rt_nil_check(F->e_2231)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_802(P836 y_800, rt_int line_801) {
  struct f_check_requires_802fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_800 = y_800;
F->line_801 = line_801;
F->l_2232 = NULL;
F->l_2232 = f_requires_790(F->y_800);
if ((((*(P836)rt_nil_check(F->y_800)).home == NULL) || (rt_r_ichk((*(P836)rt_nil_check(F->y_800)).level) != rt_r_ichk(g_cur_level_879)))) {
goto ret_;
}
while ((F->l_2232 != NULL)) {
F->z_2233 = NULL;
F->z_2233 = f_lookup_154(&(((P819)rt_nil_check((*(P830)rt_nil_check(F->l_2232)).s))->all));
if ((f_declared_in_799((*(P836)rt_nil_check(F->y_800)).home, &(((P819)rt_nil_check((*(P830)rt_nil_check(F->l_2232)).s))->all)) && ((F->z_2233 == NULL) || (rt_r_ichk((*(P836)rt_nil_check(F->z_2233)).depth) < rt_r_ichk((*(P836)rt_nil_check(F->y_800)).depth))))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check((*(P836)rt_nil_check(F->y_800)).name))->all), rt_str(" requires ", 10)), (((P819)rt_nil_check((*(P830)rt_nil_check(F->l_2232)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2232 = (*(P830)rt_nil_check(F->l_2232)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_804(P826 args_803) {
  struct f_act_delay_args_804fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_803 = args_803;
F->at_2234 = NULL;
F->t1_2235 = NULL;
F->t1_2235 = f_peek_type_674(F->args_803);
if (((F->t1_2235 != NULL) && (rt_r_ichk((*(P832)rt_nil_check(F->t1_2235)).kind) == (((rt_int)14LL))))) {
F->a_2236 = rt_str_copy(f_act_ref_530(F->args_803));
F->v_2237 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_803)).next, g_ty_int_906, &F->at_2234));
f_check_type_223(F->at_2234, g_ty_int_906, rt_r_ichk((*(P826)rt_nil_check(F->args_803)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2237, rt_str(", ", 2)), F->a_2236);
goto ret_;
}
{
F->v_2238 = rt_str_copy(f_gexpr_658(F->args_803, g_ty_int_906, &F->at_2234));
f_check_type_223(F->at_2234, g_ty_int_906, rt_r_ichk((*(P826)rt_nil_check(F->args_803)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2238, rt_str(", ", 2)), f_act_ref_530((*(P826)rt_nil_check(F->args_803)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_808(P832 ft_805, P832 t_806, P828 c_807) {
  struct f_actual_bounds_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_805 = ft_805;
F->t_806 = t_806;
F->c_807 = c_807;
if ((!f_scalar_kind_177(F->ft_805))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_806, F->c_807)), rt_str(", ", 2)), f_sub_hi_192(F->t_806, F->c_807));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_815(rstr *name_809, P826 tt_810, P826 args_811, rt_int line_812, int is_stmt_813, P832 *t_814) {
  struct f_builtin_815fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_809 = name_809;
F->tt_810 = tt_810;
F->args_811 = args_811;
F->line_812 = line_812;
F->is_stmt_813 = is_stmt_813;
F->t_814 = t_814;
F->t_814v = *F->t_814;
F->at_2239 = NULL;
F->n_2240 = RT_R_IUNDEF;
F->n_2240 = f_list_len_67(F->args_811);
F->t_814v = g_ty_void_911;
if (((rt_str_eq((*F->name_809), rt_str("POS", 3)) || rt_str_eq((*F->name_809), rt_str("SUCC", 4))) || rt_str_eq((*F->name_809), rt_str("PRED", 4)))) {
F->a_2241 = rt_str_copy(f_gexpr_658(F->args_811, NULL, &F->at_2239));
if (rt_str_eq((*F->name_809), rt_str("POS", 3))) {
if (((*(P832)rt_nil_check(f_base_of_214(F->at_2239))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2241), rt_str(") + 1)", 6));
goto ret_;
}
F->t_814v = F->at_2239;
if ((rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_809), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2241), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2241), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_809), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2241), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P832)rt_nil_check(f_base_of_214(F->at_2239))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2241), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P832)rt_nil_check(f_base_of_214(F->at_2239))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_809), rt_str("SQRT", 4)) || rt_str_eq((*F->name_809), rt_str("SIN", 3))) || rt_str_eq((*F->name_809), rt_str("COS", 3))) || rt_str_eq((*F->name_809), rt_str("EXP", 3))) || rt_str_eq((*F->name_809), rt_str("LN", 2))) || rt_str_eq((*F->name_809), rt_str("FLOOR", 5)))) {
F->a_2242 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_float_908, &F->at_2239));
F->t_814v = g_ty_float_908;
if (rt_str_eq((*F->name_809), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2242), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_809)), rt_str("(", 1)), F->a_2242), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("IFLOAT", 6))) {
F->a_2243 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, g_ty_int_906, &F->at_2239));
F->t_814v = g_ty_float_908;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2243), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("IFIX", 4))) {
F->a_2244 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_float_908, &F->at_2239));
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2244), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("FORMAT", 6))) {
F->a_2245 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_float_908, &F->at_2239));
F->n1_2246 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, g_ty_int_906, &F->at_2239));
F->m1_2247 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_811)).next)).next, g_ty_int_906, &F->at_2239));
F->t_814v = g_ty_string_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2245), rt_str(", ", 2)), F->n1_2246), rt_str(", ", 2)), F->m1_2247), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("ABS", 3))) {
F->a_2248 = rt_str_copy(f_gexpr_658(F->args_811, NULL, &F->at_2239));
F->t_814v = F->at_2239;
if ((rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2248), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("CNVT", 4))) {
if ((F->tt_810 == NULL)) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2249 = rt_str_copy(f_gexpr_658(F->args_811, NULL, &F->at_2239));
if (((rt_r_ichk((*(P826)rt_nil_check(F->tt_810)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)1LL))))) {
F->t_814v = g_ty_string_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2249), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->tt_810)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)3LL))))) {
F->t_814v = g_ty_string_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2249), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->tt_810)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)2LL))))) {
F->t_814v = g_ty_string_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2249), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->tt_810)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)5LL))))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2249), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_809), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2240) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2250 = NULL;
F->last_2250 = F->args_811;
while (((*(P826)rt_nil_check(F->last_2250)).next != NULL)) {
F->last_2250 = (*(P826)rt_nil_check(F->last_2250)).next;
}
{
F->a_2251 = rt_str_copy(f_gexpr_658(F->last_2250, g_ty_string_910, &F->at_2239));
f_check_type_223(F->at_2239, g_ty_string_910, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2251), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_809), rt_str("WRITE", 5))) {
F->a_2252 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, NULL, &F->at_2239));
if ((rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2252), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->at_2239)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2252), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_809), rt_str("READLN", 6))) {
F->lv_2253 = NULL;
F->lc_2254 = NULL;
F->ro_2255 = RT_R_EUNDEF;
F->last_2256 = NULL;
F->last_2256 = F->args_811;
while (((*(P826)rt_nil_check(F->last_2256)).next != NULL)) {
F->last_2256 = (*(P826)rt_nil_check(F->last_2256)).next;
}
f_lvalue_627(F->last_2256, &F->lv_2253, &F->at_2239, &F->lc_2254, &F->ro_2255);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P819)rt_nil_check(F->lv_2253))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("SIZELN", 6))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("EOF", 3))) {
F->t_814v = g_ty_bool_907;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_809), rt_str("SYS_OUT", 7)))) {
F->t_814v = g_ty_file_912;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("OPEN", 4)) || rt_str_eq((*F->name_809), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("SEND", 4)) || rt_str_eq((*F->name_809), rt_str("RECEIVE", 7)))) {
F->lv_2257 = NULL;
F->dv_2258 = NULL;
F->lc_2259 = NULL;
F->ro_2260 = RT_R_EUNDEF;
F->mt_2261 = NULL;
F->dt_2262 = NULL;
f_lvalue_627(F->args_811, &F->lv_2257, &F->mt_2261, &F->lc_2259, &F->ro_2260);
if ((rt_r_ichk((*(P832)rt_nil_check(F->mt_2261)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_809), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_809), rt_str("RECEIVE", 7))) {
f_lvalue_627((*(P826)rt_nil_check(F->args_811)).next, &F->dv_2258, &F->dt_2262, &F->lc_2259, &F->ro_2260);
f_check_type_223(F->dt_2262, (*(P832)rt_nil_check(F->mt_2261)).elem, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P819)rt_nil_check(F->lv_2257))->all)), rt_str(", &", 3)), (((P819)rt_nil_check(F->dv_2258))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2263 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, (*(P832)rt_nil_check(F->mt_2261)).elem, &F->at_2239));
f_check_type_223(F->at_2239, (*(P832)rt_nil_check(F->mt_2261)).elem, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P832)rt_nil_check(F->mt_2261)).elem)), rt_str(" m_ = ", 6)), F->v_2263), rt_str("; rt_send(", 10)), (((P819)rt_nil_check(F->lv_2257))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_809), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_809), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2264 = NULL;
F->lc_2265 = NULL;
F->ro_2266 = RT_R_EUNDEF;
F->mt_2267 = NULL;
f_lvalue_627(F->args_811, &F->lv_2264, &F->mt_2267, &F->lc_2265, &F->ro_2266);
if ((rt_r_ichk((*(P832)rt_nil_check(F->mt_2267)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_809), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_809))), rt_str("(", 1)), (((P819)rt_nil_check(F->lv_2264))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_809), rt_str("COND_RECEIVE", 12)))) {
F->lv_2268 = NULL;
F->dv_2269 = NULL;
F->bv_2270 = NULL;
F->lc_2271 = NULL;
F->ro_2272 = RT_R_EUNDEF;
F->mt_2273 = NULL;
F->dt_2274 = NULL;
F->bt_2275 = NULL;
f_lvalue_627(F->args_811, &F->lv_2268, &F->mt_2273, &F->lc_2271, &F->ro_2272);
if ((rt_r_ichk((*(P832)rt_nil_check(F->mt_2273)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_809), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_627((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_811)).next)).next, &F->bv_2270, &F->bt_2275, &F->lc_2271, &F->ro_2272);
f_check_type_223(F->bt_2275, g_ty_bool_907, F->line_812);
if (rt_str_eq((*F->name_809), rt_str("COND_RECEIVE", 12))) {
f_lvalue_627((*(P826)rt_nil_check(F->args_811)).next, &F->dv_2269, &F->dt_2274, &F->lc_2271, &F->ro_2272);
f_check_type_223(F->dt_2274, (*(P832)rt_nil_check(F->mt_2273)).elem, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->bv_2270))->all), rt_str(" = rt_cond_receive(", 19)), (((P819)rt_nil_check(F->lv_2268))->all)), rt_str(", &", 3)), (((P819)rt_nil_check(F->dv_2269))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2276 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, (*(P832)rt_nil_check(F->mt_2273)).elem, &F->at_2239));
f_check_type_223(F->at_2239, (*(P832)rt_nil_check(F->mt_2273)).elem, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P832)rt_nil_check(F->mt_2273)).elem)), rt_str(" m_ = ", 6)), F->v_2276), rt_str("; ", 2)), (((P819)rt_nil_check(F->bv_2270))->all)), rt_str(" = rt_cond_send(", 16)), (((P819)rt_nil_check(F->lv_2268))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_809), rt_str("PRIORITY", 8))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("SET_PRIORITY", 12))) {
F->v_2277 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, g_ty_int_906, &F->at_2239));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_530(F->args_811)), rt_str(", ", 2)), F->v_2277), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("ACTIVE", 6))) {
F->t_814v = g_ty_bool_907;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("DELAY", 5))) {
F->v_2278 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_int_906, &F->at_2239));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2278), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2240) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_804(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("DELAY_UNTIL", 11))) {
F->v_2279 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_int_906, &F->at_2239));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2279), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2240) == ((rt_int)1LL)))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("TIME", 4))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_809), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_809), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_809), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_809), rt_str("HOURS", 5)))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_809));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("HALT", 4))) {
F->a_2280 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_int_906, &F->at_2239));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2280), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("ME", 2)) && (F->tt_810 != NULL))) {
F->result_ = f_me_high_776(F->tt_810, F->line_812, &F->t_814v);
goto ret_;
} else if ((rt_str_eq((*F->name_809), rt_str("WAITING", 7)) || rt_str_eq((*F->name_809), rt_str("SUSPENDED", 9)))) {
F->t_814v = g_ty_bool_907;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_809))), rt_str("(", 1)), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_809), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_809), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_809), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_809), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_809), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_809), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_809))), rt_str("(", 1)), f_act_ref_530(F->args_811)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2240) != ((rt_int)2LL))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_530(F->args_811)), rt_str(", ", 2)), f_act_ref_530((*(P826)rt_nil_check(F->args_811)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_809), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_809), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_809), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_809), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_809), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_809), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2240) != ((rt_int)0LL))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_809), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_809))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_781(F->args_811, &(*F->name_809))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_781(F->args_811, &(*F->name_809))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("COND_LOCK", 9))) {
F->bv_2281 = NULL;
F->bc_2282 = NULL;
F->ro_2283 = RT_R_EUNDEF;
F->bt_2284 = NULL;
F->l_2285 = rt_str_copy(f_lock_ref_781(F->args_811, &(*F->name_809)));
f_lvalue_627((*(P826)rt_nil_check(F->args_811)).next, &F->bv_2281, &F->bt_2284, &F->bc_2282, &F->ro_2283);
f_check_type_223(F->bt_2284, g_ty_bool_907, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P819)rt_nil_check(F->bv_2281))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2285), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("EXCESS_LOCKS", 12))) {
F->t_814v = g_ty_int_906;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_781(F->args_811, &(*F->name_809))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("OWNER", 5))) {
F->t_814v = g_ty_act_916;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_781(F->args_811, &(*F->name_809))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("FREE", 4))) {
F->pv_2286 = NULL;
F->pc_2287 = NULL;
F->ro_2288 = RT_R_EUNDEF;
F->pt_2289 = NULL;
f_lvalue_627(F->args_811, &F->pv_2286, &F->pt_2289, &F->pc_2287, &F->ro_2288);
if (((rt_r_ichk((*(P832)rt_nil_check(F->pt_2289)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2288))) {
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_887 = 1;
f_finish_ptr_414(F->pt_2289);
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_315((*(P832)rt_nil_check(F->pt_2289)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_616(F->pt_2289, &(((P819)rt_nil_check(F->pv_2286))->all)); b_; }), (*(P832)rt_nil_check(F->pt_2289)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_315((*(P832)rt_nil_check(F->pt_2289)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str("); if (", 7)), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_616(F->pt_2289, &(((P819)rt_nil_check(F->pv_2286))->all)); b_; }), (*(P832)rt_nil_check(F->pt_2289)).target)), rt_str(" } rt_free((void **)&", 21)), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P819)rt_nil_check(F->pv_2286))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_809), rt_str("LOW_IO", 6))) {
F->dev_2290 = rt_str_copy(f_gexpr_658(F->args_811, g_ty_int_906, &F->at_2239));
F->cmd_2291 = rt_str_copy(f_gexpr_658((*(P826)rt_nil_check(F->args_811)).next, g_ty_int_906, &F->at_2239));
if ((rt_r_ichk(F->n_2240) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2290), rt_str(", ", 2)), F->cmd_2291), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2292 = NULL;
F->dc_2293 = NULL;
F->ro_2294 = RT_R_EUNDEF;
F->dt_2295 = NULL;
f_lvalue_627((*(P826)rt_nil_check((*(P826)rt_nil_check(F->args_811)).next)).next, &F->dv_2292, &F->dt_2295, &F->dc_2293, &F->ro_2294);
f_check_type_223(F->dt_2295, g_ty_int_906, F->line_812);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2290), rt_str(", ", 2)), F->cmd_2291), rt_str(", &", 3)), (((P819)rt_nil_check(F->dv_2292))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_812, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_809), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_814) = F->t_814v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_817(P826 units_816) {
  struct f_translate_817fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_816 = units_816;
F->u_2296 = NULL;
F->u_2296 = F->units_816;
while ((F->u_2296 != NULL)) {
if (((*(P826)rt_nil_check(F->u_2296)).next == NULL)) {
{ R854 *cell2297 = rt_alloc(sizeof(R854));
(*cell2297).d = NULL;
(*cell2297).next = NULL;
g_caps_881 = cell2297;
}
(*(P853)rt_nil_check(g_caps_881)).d = F->u_2296;
(*(P853)rt_nil_check(g_caps_881)).depth = rt_r_ichk(g_depth_865);
f_declare_labels_481((*(P826)rt_nil_check(F->u_2296)).c);
f_declare_body_380((*(P826)rt_nil_check(F->u_2296)).c);
f_capsule_body_488((*(P826)rt_nil_check(F->u_2296)).c);
f_await_tasks_477((*(P826)rt_nil_check(F->u_2296)).c);
{
F->l_2298 = NULL;
F->l_2298 = F->units_816;
while ((F->l_2298 != F->u_2296)) {
{
F->w_2299 = rt_str_copy(f_waits_of_473(F->l_2298));
if ((((rt_int)((F->w_2299).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2299);
}
}
F->l_2298 = (*(P826)rt_nil_check(F->l_2298)).next;
}
}
f_close_fins_464(NULL);
if (rt_r_echk(g_uses_findyn_889)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_390(F->u_2296);
}
F->u_2296 = (*(P826)rt_nil_check(F->u_2296)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_818(void) {
  struct f_print_program_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_376();
if (rt_r_echk(g_uses_free_887)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_869);
f_print_buffer_31(g_out_frames_885);
f_print_buffer_31(g_out_helpers_870);
f_print_buffer_31(g_out_protos_871);
f_print_buffer_31(g_out_globals_872);
f_print_buffer_31(g_out_funcs_873);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_886);
f_print_buffer_31(g_out_excs_875);
f_print_buffer_31(g_out_init_874);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R856(R856 *d, R856 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R856 cp_R856(R856 s) {
  R856 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R856(R856 a, R856 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R854(R854 *d, R854 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R854 cp_R854(R854 s) {
  R854 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R854(R854 a, R854 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R852(R852 *d, R852 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R852 cp_R852(R852 s) {
  R852 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R852(R852 a, R852 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R850(R850 *d, R850 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R850 cp_R850(R850 s) {
  R850 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R850(R850 a, R850 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R848(R848 *d, R848 s) {
  d->t = s.t;
  d->next = s.next;
}
static R848 cp_R848(R848 s) {
  R848 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R848(R848 a, R848 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R846(R846 *d, R846 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R846 cp_R846(R846 s) {
  R846 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R846(R846 a, R846 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R844(R844 *d, R844 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R844 cp_R844(R844 s) {
  R844 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R844(R844 a, R844 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A842(A842 *d, A842 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A842 cp_A842(A842 s) {
  A842 d = s; d.p = rt_alloc(sizeof(P836) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A842(A842 a, A842 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R839(R839 *d, R839 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R839 cp_R839(R839 s) {
  R839 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R839(R839 a, R839 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R837(R837 *d, R837 s) {
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
static R837 cp_R837(R837 s) {
  R837 d = s;
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
static int eq_R837(R837 a, R837 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R835(R835 *d, R835 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R835 cp_R835(R835 s) {
  R835 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R835(R835 a, R835 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R833(R833 *d, R833 s) {
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
}
static R833 cp_R833(R833 s) {
  R833 d = s;
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
  return d;
}
static int eq_R833(R833 a, R833 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R831(R831 *d, R831 s) {
  d->s = s.s;
  d->next = s.next;
}
static R831 cp_R831(R831 s) {
  R831 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R831(R831 a, R831 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R829(R829 *d, R829 s) {
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
static R829 cp_R829(R829 s) {
  R829 d = s;
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
static int eq_R829(R829 a, R829 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R827(R827 *d, R827 s) {
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
static R827 cp_R827(R827 s) {
  R827 d = s;
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
static int eq_R827(R827 a, R827 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A825(A825 *d, A825 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A825 cp_A825(A825 s) {
  A825 d = s; d.p = rt_alloc(sizeof(P821) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A825(A825 a, A825 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R822(R822 *d, R822 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R822 cp_R822(R822 s) {
  R822 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R822(R822 a, R822 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_857);
  RT_ROOT(g_ntoks_858);
  RT_ROOT(g_tpos_859);
  RT_ROOT(g_src_line_860);
  RT_ROOT(g_pending_prag_861);
  RT_ROOT(g_table_862);
  RT_ROOT(g_genv_863);
  RT_ROOT(g_all_insts_864);
  RT_ROOT(g_depth_865);
  RT_ROOT(g_scope_stack_866);
  RT_ROOT(g_all_types_867);
  RT_ROOT(g_serial_868);
  RT_ROOT(g_out_types_869);
  RT_ROOT(g_out_helpers_870);
  RT_ROOT(g_out_protos_871);
  RT_ROOT(g_out_globals_872);
  RT_ROOT(g_out_funcs_873);
  RT_ROOT(g_out_init_874);
  RT_ROOT(g_out_excs_875);
  RT_ROOT(g_code_876);
  RT_ROOT(g_fields_buf_877);
  RT_ROOT(g_in_func_878);
  RT_ROOT(g_cur_level_879);
  RT_ROOT(g_fctx_880);
  RT_ROOT(g_caps_881);
  RT_ROOT(g_cap_waits_882);
  RT_ROOT(g_psub_883);
  RT_ROOT(g_st_field_884);
  RT_ROOT(g_out_frames_885);
  RT_ROOT(g_out_roots_886);
  RT_ROOT(g_uses_free_887);
  RT_ROOT(g_fins_888);
  RT_ROOT(g_uses_findyn_889);
  RT_ROOT(g_func_sym_890);
  RT_ROOT(g_func_rc_891);
  RT_ROOT(g_cap_ret_892);
  RT_ROOT(g_cap_rflag_893);
  RT_ROOT(g_ret_frames_894);
  RT_ROOT(g_gdepth_895);
  RT_ROOT(g_suppress_896);
  RT_ROOT(g_cons_ctx_897);
  RT_ROOT(g_mark_uninit_898);
  RT_ROOT(g_exits_899);
  RT_ROOT(g_gotos_900);
  RT_ROOT(g_frames_901);
  RT_ROOT(g_handlers_902);
  RT_ROOT(g_cleanups_903);
  RT_ROOT(g_trial_904);
  RT_ROOT(g_mcopies_905);
  RT_ROOT(g_ty_int_906);
  RT_ROOT(g_ty_bool_907);
  RT_ROOT(g_ty_float_908);
  RT_ROOT(g_ty_ascii_909);
  RT_ROOT(g_ty_string_910);
  RT_ROOT(g_ty_void_911);
  RT_ROOT(g_ty_file_912);
  RT_ROOT(g_ty_nil_913);
  RT_ROOT(g_ty_lock_914);
  RT_ROOT(g_ty_latch_915);
  RT_ROOT(g_ty_act_916);
  RT_ROOT(g_file_mode_type_917);
  RT_ROOT(g_no_cons_918);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_857 = NULL;
g_ntoks_858 = RT_R_IUNDEF;
g_ntoks_858 = ((rt_int)0LL);
g_tpos_859 = RT_R_IUNDEF;
g_tpos_859 = ((rt_int)1LL);
g_src_line_860 = RT_R_IUNDEF;
g_src_line_860 = ((rt_int)0LL);
g_pending_prag_861 = NULL;
g_table_862 = NULL;
g_genv_863 = NULL;
g_all_insts_864 = NULL;
g_depth_865 = RT_R_IUNDEF;
g_depth_865 = ((rt_int)0LL);
g_scope_stack_866 = NULL;
g_all_types_867 = NULL;
g_serial_868 = RT_R_IUNDEF;
g_serial_868 = ((rt_int)0LL);
g_out_types_869 = NULL;
g_out_helpers_870 = NULL;
g_out_protos_871 = NULL;
g_out_globals_872 = NULL;
g_out_funcs_873 = NULL;
g_out_init_874 = NULL;
g_out_excs_875 = NULL;
g_code_876 = NULL;
g_fields_buf_877 = NULL;
g_in_func_878 = RT_R_EUNDEF;
g_in_func_878 = 0;
g_cur_level_879 = RT_R_IUNDEF;
g_cur_level_879 = ((rt_int)0LL);
g_fctx_880 = NULL;
g_caps_881 = NULL;
g_cap_waits_882 = NULL;
g_psub_883 = NULL;
g_st_field_884 = NULL;
g_out_frames_885 = NULL;
g_out_roots_886 = NULL;
g_uses_free_887 = RT_R_EUNDEF;
g_uses_free_887 = 0;
g_fins_888 = NULL;
g_uses_findyn_889 = RT_R_EUNDEF;
g_uses_findyn_889 = 0;
g_func_sym_890 = NULL;
g_func_rc_891 = NULL;
g_cap_ret_892 = NULL;
g_cap_rflag_893 = NULL;
g_ret_frames_894 = RT_R_IUNDEF;
g_ret_frames_894 = ((rt_int)0LL);
g_gdepth_895 = RT_R_IUNDEF;
g_gdepth_895 = ((rt_int)0LL);
g_suppress_896 = NULL;
g_cons_ctx_897 = NULL;
g_mark_uninit_898 = RT_R_EUNDEF;
g_mark_uninit_898 = 0;
g_exits_899 = NULL;
g_gotos_900 = NULL;
g_frames_901 = RT_R_IUNDEF;
g_frames_901 = ((rt_int)0LL);
g_handlers_902 = NULL;
g_cleanups_903 = NULL;
g_trial_904 = RT_R_IUNDEF;
g_trial_904 = ((rt_int)0LL);
g_mcopies_905 = NULL;
g_ty_int_906 = NULL;
g_ty_bool_907 = NULL;
g_ty_float_908 = NULL;
g_ty_ascii_909 = NULL;
g_ty_string_910 = NULL;
g_ty_void_911 = NULL;
g_ty_file_912 = NULL;
g_ty_nil_913 = NULL;
g_ty_lock_914 = NULL;
g_ty_latch_915 = NULL;
g_ty_act_916 = NULL;
g_file_mode_type_917 = NULL;
g_no_cons_918 = NULL;
{ P823 cell2300 = rt_alloc(sizeof *cell2300);
rt_int pv2301 = ((rt_int)1000000LL);
cell2300->p_n = pv2301;
cell2300->all.lo = ((rt_int)1LL); cell2300->all.hi = pv2301;
cell2300->all.lo2 = cell2300->all.hi2 = 1;
cell2300->all.p = rt_alloc(sizeof(P821) * (size_t)(RT_CNT(cell2300->all)) + 1);
for (rt_int i2302 = 0; i2302 < (RT_CNT(cell2300->all)); i2302++) {
cell2300->all.p[i2302] = NULL;
}
g_toks_857 = cell2300;
}
{ P840 cell2303 = rt_alloc(sizeof *cell2303);
rt_int pv2304 = (((rt_int)4093LL));
cell2303->p_n = pv2304;
cell2303->all.lo = ((rt_int)0LL); cell2303->all.hi = pv2304;
cell2303->all.lo2 = cell2303->all.hi2 = 1;
cell2303->all.p = rt_alloc(sizeof(P836) * (size_t)(RT_CNT(cell2303->all)) + 1);
for (rt_int i2305 = 0; i2305 < (RT_CNT(cell2303->all)); i2305++) {
cell2303->all.p[i2305] = NULL;
}
g_table_862 = cell2303;
}
g_out_types_869 = f_new_buffer_24();
g_out_helpers_870 = f_new_buffer_24();
g_out_protos_871 = f_new_buffer_24();
g_out_globals_872 = f_new_buffer_24();
g_out_funcs_873 = f_new_buffer_24();
g_out_init_874 = f_new_buffer_24();
g_out_excs_875 = f_new_buffer_24();
g_out_frames_885 = f_new_buffer_24();
g_out_roots_886 = f_new_buffer_24();
g_code_876 = g_out_init_874;
g_no_cons_918 = f_new_cons_175();
g_ty_int_906 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_907 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_908 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_910 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_911 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_912 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_913 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_914 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_915 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_916 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2306;
if (RT_TRY(xf2306)) {
f_init_ascii_250();
f_read_source_58();
f_translate_817(f_program_150());
f_print_program_818();
RT_POP(xf2306);
} else {
RT_POP(xf2306);
int x2307 = rt_xcur;
if (0 || x2307 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2307);
}
}
}
  rt_main_done();
  return 0;
}
