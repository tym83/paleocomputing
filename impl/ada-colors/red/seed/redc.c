#include "paleo.h"
#include <math.h>
typedef struct Pc801 *P800;
typedef struct R803 R803;
typedef struct R803 *P802;
struct R803 {  rt_int kind; rt_int line; rt_int ival; P800 s; P800 prags;  };
typedef struct Pc805 *P804;
typedef struct A806 A806;
struct A806 { rt_int lo, hi, lo2, hi2; P802 *p; };
typedef struct R808 R808;
typedef struct R808 *P807;
struct R808 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P800 name; P800 tag; P800 prags; P807 labels; P807 a; P807 b; P807 c; P807 d; P807 e; P807 next;  };
typedef struct R810 R810;
typedef struct R810 *P809;
typedef struct R812 R812;
typedef struct R812 *P811;
struct R812 {  P800 s; P811 next;  };
struct R810 {  P800 lo; P800 hi; P800 lo2; P800 hi2; P800 slen; rt_int mlo; rt_int mhi; int hasm; P807 args; int dyn; rt_int lvl; P800 prec; P811 bnds;  };
typedef struct R814 R814;
typedef struct R814 *P813;
typedef struct R816 R816;
typedef struct R816 *P815;
struct R816 {  P800 name; P813 t; P809 c; P807 st; P815 next;  };
typedef struct R818 R818;
typedef struct R818 *P817;
typedef struct R820 R820;
typedef struct R820 *P819;
struct R820 {  P800 name; rt_int mode; P813 t; P809 c; P800 cfield; P819 next;  };
typedef struct Pc822 *P821;
typedef struct A823 A823;
struct A823 { rt_int lo, hi, lo2, hi2; P817 *p; };
typedef struct R825 R825;
typedef struct R825 *P824;
struct R825 {  rt_int depth; P807 imps; int all_imp; P824 next;  };
typedef struct R827 R827;
typedef struct R827 *P826;
struct R827 {  rt_int kind; rt_int i; P800 s; P813 t;  };
struct R818 {  rt_int kind; P800 name; P813 t; P809 c; P800 access; P800 cname; int ro_flag; rt_int mvalue; int hasmv; P807 st; P807 decl; P819 params; P813 result; rt_int depth; rt_int level; int byref; P817 members; P817 mnext; P807 binds; P817 insts; P821 env; P817 chain; P817 stack; P817 owner; P824 gctx; P826 mv; P811 reqs; int reqdone; P807 home;  };
typedef struct R829 R829;
typedef struct R829 *P828;
struct R829 {  P813 t; P828 next;  };
struct R814 {  rt_int kind; P800 name; P807 lits; P813 elem; P813 idx; P813 idx2; P809 elemcons; P807 elemst; P813 under; P807 tparams; P807 ocap; P815 fields; P813 target; P807 decl; P800 cname; int forward; int defined; int helpers; P817 initp; P817 finalp; P817 tpsyms; P817 gen; P817 gbinds; P813 next; rt_int ndim; P828 idxs;  };
typedef struct R831 R831;
typedef struct R831 *P830;
struct R831 {  P811 head; P811 tail;  };
typedef struct R833 R833;
typedef struct R833 *P832;
struct R833 {  P800 match; P800 label; rt_int depth; P832 next;  };
typedef struct R835 R835;
typedef struct R835 *P834;
struct R835 {  P807 d; P834 next;  };
typedef struct R837 R837;
typedef struct R837 *P836;
struct R837 {  P807 d; P800 w; P836 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P800 result_;
 P800 t_899;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_902;
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
 rstr r_903;
 rt_int i_904;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_908;
 rstr w_909;
 rt_int i_910;
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
 P830 result_;
 P830 b_914;
};
struct f_put_27fr { int dummy;
 P830 b_25;
 rstr *s_26;
 P811 l_916;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P830 b_30;
 P811 l_918;
};
struct f_splice_34fr { int dummy;
 P830 a_32;
 P830 b_33;
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
 P802 t_920;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_922;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_923;
 rt_int k_924;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_928;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_929;
 P800 r_930;
 int more_931;
 rt_int k_932;
 int go_933;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_934;
 rt_int k_935;
 rstr p_936;
 int ok_937;
 int known_938;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_939;
 rt_int j_940;
 rt_int n_941;
 int c_942;
 rstr w_943;
 rt_int k_944;
 rstr w_948;
 rt_int k_949;
 rstr two_953;
};
struct f_read_source_58fr { int dummy;
 rstr line_954;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P807 result_;
 P807 x_955;
};
struct f_append_65fr { int dummy;
 P807 *head_62;
 P807 *tail_63;
 P807 x_64;
};
struct f_list_len_67fr { int dummy;
 P807 l_66;
 rt_int result_;
 rt_int n_957;
 P807 p_958;
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
 P800 result_;
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
 P800 result_;
};
struct f_name_node_90fr { int dummy;
 P807 result_;
 P807 x_959;
};
struct f_id_list_91fr { int dummy;
 P807 result_;
 P807 head_960;
 P807 tail_961;
};
struct f_p_subtype_92fr { int dummy;
 P807 result_;
 rt_int line_962;
 P807 x_963;
 rstr w_964;
 P807 head_965;
 P807 tail_966;
 P807 head_967;
 P807 tail_968;
 int more_969;
 P807 names_970;
 P807 st_971;
 P807 cmp_972;
 P807 head_973;
 P807 tail_974;
 int more_975;
 P807 lit_976;
};
struct f_constraint_list_93fr { int dummy;
 P807 result_;
 P807 head_977;
 P807 tail_978;
 int more_979;
 rt_int line_980;
 P807 lo_981;
 P807 r_982;
};
struct f_actual_params_94fr { int dummy;
 P807 result_;
 P807 head_983;
 P807 tail_984;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P807 result_;
 P807 head_985;
 P807 tail_986;
 int more_987;
};
struct f_binop_102fr { int dummy;
 P800 op_98;
 P807 l_99;
 P807 r_100;
 rt_int line_101;
 P807 result_;
 P807 x_988;
};
struct f_expr_103fr { int dummy;
 P807 result_;
 P807 l_989;
 P800 op_990;
 rt_int line_991;
};
struct f_expr_and_104fr { int dummy;
 P807 result_;
 P807 l_992;
 rt_int line_993;
};
struct f_expr_not_105fr { int dummy;
 P807 result_;
 P807 x_994;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P807 result_;
 P807 l_995;
 P800 op_996;
 rt_int line_997;
};
struct f_expr_add_109fr { int dummy;
 P807 result_;
 P807 l_998;
 P800 op_999;
 rt_int line_1000;
};
struct f_expr_mul_110fr { int dummy;
 P807 result_;
 P807 l_1001;
 P800 op_1002;
 rt_int line_1003;
};
struct f_expr_pow_111fr { int dummy;
 P807 result_;
 P807 l_1004;
 rt_int line_1005;
};
struct f_expr_prefix_112fr { int dummy;
 P807 result_;
 P807 x_1006;
};
struct f_postfix_113fr { int dummy;
 P807 result_;
 P807 p_1007;
 rt_int line_1008;
 P807 x_1009;
 P807 head_1010;
 P807 tail_1011;
 int more_1012;
 P807 lo_1013;
 P807 r_1014;
 P807 x_1015;
 P807 x_1016;
 P807 x_1017;
};
struct f_primary_114fr { int dummy;
 P807 result_;
 rt_int line_1018;
 P807 x_1019;
 rt_int k_1020;
 rstr w_1021;
 P807 head_1022;
 P807 tail_1023;
 int more_1024;
};
struct f_constructor_item_115fr { int dummy;
 P807 result_;
 rt_int line_1025;
 P807 it_1026;
 P807 first_1027;
 P807 keys_1028;
 P807 ktail_1029;
 P807 lab_1030;
 rt_int save_1031;
 P807 more_1032;
 P807 tail2_1033;
 int ok_1034;
 int go_1035;
 P807 l2_1036;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P807 result_;
 P807 head_1037;
 P807 tail_1038;
 int stmts_1039;
 P807 after_1040;
 P807 x_1041;
};
struct f_body_element_118fr { int dummy;
 P807 result_;
 P807 x_1042;
 P800 pr_1043;
 P807 p_1044;
};
struct f_declaration_119fr { int dummy;
 P807 result_;
 rt_int line_1045;
 P807 head_1046;
 P807 tail_1047;
 P807 names_1048;
 P807 x_1049;
};
struct f_object_decl_120fr { int dummy;
 P807 result_;
 rt_int line_1050;
 int is_var_1051;
 P807 names_1052;
 P807 st_1053;
 P807 init_1054;
 P807 loc_1055;
 rt_int loc_kind_1056;
 P807 head_1057;
 P807 tail_1058;
 P807 x_1059;
};
struct f_abbrev_decl_121fr { int dummy;
 P807 result_;
 P807 x_1060;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1061;
};
struct f_type_decl_123fr { int dummy;
 P807 result_;
 rt_int line_1062;
 P800 name_1063;
 P807 params_1064;
 P807 x_1065;
 P807 tts_1066;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P807 result_;
 P807 head_1067;
 P807 tail_1068;
 int more_1069;
 rt_int mode_1070;
 P807 names_1071;
 P807 ntail_1072;
 P807 st_1073;
 P807 p_1074;
};
struct f_imports_list_128fr { int dummy;
 P807 owner_127;
 int result_;
 P807 head_1075;
 P807 tail_1076;
 int more_1077;
 int ro_1078;
 P807 x_1079;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P800 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P807 result_;
 rt_int line_1080;
 P807 x_1081;
 int is_abn_1082;
 int is_func_1083;
 int dummy_1084;
};
struct f_capsule_decl_133fr { int dummy;
 P807 result_;
 P807 x_1085;
 int dummy_1086;
 P807 head_1087;
 P807 tail_1088;
 int more_1089;
 P807 n_1090;
};
struct f_formal_tt_134fr { int dummy;
 P807 result_;
 P807 head_1091;
 P807 tail_1092;
 int more_1093;
};
struct f_generic_decl_135fr { int dummy;
 P807 result_;
 P807 x_1094;
 P807 head_1095;
 P807 tail_1096;
 int more_1097;
 P807 names_1098;
 rt_int kind_1099;
 P807 st_1100;
 P807 p_1101;
 P800 nm_1102;
 P807 st_1103;
};
struct f_task_decl_136fr { int dummy;
 P807 result_;
 P807 x_1104;
 int dummy_1105;
};
struct f_expose_decl_137fr { int dummy;
 P807 result_;
 P807 x_1106;
 P807 head_1107;
 P807 tail_1108;
 int more_1109;
 P807 n_1110;
 P807 head_1111;
 P807 tail_1112;
 int more_1113;
 P807 n_1114;
 P807 tgt_1115;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P807 result_;
 P807 labels_1116;
 P807 ltail_1117;
 P800 match_1118;
 P807 s_1119;
};
struct f_unlabeled_statement_141fr { int dummy;
 P807 result_;
 rt_int line_1120;
 P807 x_1121;
 P807 head_1122;
 P807 tail_1123;
 P807 invs_1124;
 P807 itail_1125;
 int more_1126;
 P807 target_1127;
};
struct f_arm_145fr { int dummy;
 P807 cond_142;
 P807 b_143;
 rt_int line_144;
 P807 result_;
 P807 x_1128;
};
struct f_if_stmt_146fr { int dummy;
 P807 result_;
 P807 x_1129;
 P807 head_1130;
 P807 tail_1131;
 P807 cond_1132;
 int go_1133;
};
struct f_case_stmt_147fr { int dummy;
 P807 result_;
 P807 x_1134;
 P807 head_1135;
 P807 tail_1136;
 P807 labs_1137;
 P807 ltail_1138;
 int more_1139;
 P807 l_1140;
};
struct f_repeat_stmt_148fr { int dummy;
 P807 result_;
 P807 x_1141;
};
struct f_guard_stmt_149fr { int dummy;
 P807 result_;
 P807 x_1142;
 P807 head_1143;
 P807 tail_1144;
 P807 h_1145;
};
struct f_program_150fr { int dummy;
 P807 result_;
 P807 head_1146;
 P807 tail_1147;
 P800 pr_1148;
 P807 u_1149;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1150;
 rt_int i_1151;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P817 result_;
 P817 y_1155;
};
struct f_lookup_decl_156fr { int dummy;
 P807 d_155;
 P817 result_;
 P817 y_1156;
};
struct f_define_159fr { int dummy;
 P817 y_157;
 rt_int line_158;
 rt_int h_1157;
 P817 z_1158;
};
struct f_overloadable_161fr { int dummy;
 P817 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P807 a_162;
 P807 b_163;
 int result_;
 P807 x_1159;
 P807 y_1160;
};
struct f_same_signature_167fr { int dummy;
 P819 a_165;
 P819 b_166;
 int result_;
 P819 x_1161;
 P819 y_1162;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P800 name_171;
 P817 result_;
 P817 y_1163;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P813 result_;
 P813 t_1165;
};
struct f_new_cons_175fr { int dummy;
 P809 result_;
 P809 c_1167;
};
struct f_scalar_kind_177fr { int dummy;
 P813 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P813 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P809 c_180;
 rstr *b_181;
 rstr result_;
 P800 p_1169;
 rt_int i_1170;
};
struct f_clo_184fr { int dummy;
 P809 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P809 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P813 t_187;
 P809 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P813 t_190;
 P809 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1174;
 rstr f_1175;
};
struct f_copy_cons_197fr { int dummy;
 P809 c_196;
 P809 result_;
 P809 r_1176;
};
struct f_freeze_200fr { int dummy;
 P809 c_198;
 P813 t_199;
 P809 result_;
 P809 r_1178;
 P800 saved_field_1179;
 rstr ct_1180;
 rstr la_1181;
 rstr lf_1182;
 rstr ha_1183;
 rstr hf_1184;
};
struct f_checked_204fr { int dummy;
 P813 t_201;
 P809 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P807 a_205;
 P807 b_206;
 int result_;
 P807 x_1185;
 P807 y_1186;
};
struct f_str_elem_209fr { int dummy;
 P813 t_208;
 P813 result_;
};
struct f_same_212fr { int dummy;
 P813 a_210;
 P813 b_211;
 int result_;
 P828 x_1187;
 P828 y_1188;
 P815 f_1189;
 P815 g_1190;
};
struct f_base_of_214fr { int dummy;
 P813 t_213;
 P813 result_;
};
struct f_base_cons_217fr { int dummy;
 P813 t_215;
 P809 c_216;
 P809 result_;
};
struct f_kind_name_219fr { int dummy;
 P813 t_218;
 rstr result_;
};
struct f_check_type_223fr { int dummy;
 P813 got_220;
 P813 want_221;
 rt_int line_222;
};
struct f_ctype_225fr { int dummy;
 P813 t_224;
 rstr result_;
};
struct f_struct_body_227fr { int dummy;
 P813 t_226;
 rstr result_;
};
struct f_field_decls_229fr { int dummy;
 P813 t_228;
 rstr result_;
 P815 f_1193;
 P800 s_1194;
};
struct f_declare_ctype_231fr { int dummy;
 P813 t_230;
 P813 u_1195;
 P807 p_1196;
 P800 fs_1197;
 rstr sn_1198;
 P809 pc_1199;
 P813 target_1200;
 P807 p_1201;
 P800 fs_1202;
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
 P813 t_236;
 rstr result_;
 P800 r_1203;
 rt_int k_1204;
};
struct f_acnt_240fr { int dummy;
 P813 t_238;
 rstr *base_239;
 rstr result_;
 P800 r_1208;
 rt_int k_1209;
};
struct f_cons_lo_243fr { int dummy;
 P809 c_241;
 rt_int k_242;
 P800 result_;
 P811 l_1213;
 rt_int i_1214;
};
struct f_cons_hi_246fr { int dummy;
 P809 c_244;
 rt_int k_245;
 P800 result_;
 P811 l_1218;
 rt_int i_1219;
};
struct f_idx_type_249fr { int dummy;
 P813 t_247;
 rt_int k_248;
 P813 result_;
 P828 l_1223;
 rt_int i_1224;
};
struct f_init_ascii_250fr { int dummy;
 P807 head_1228;
 P807 tail_1229;
 rt_int start_1230;
 rt_int i_1231;
 P807 lit_1235;
 P807 h2_1236;
 P807 t2_1237;
 P807 l1_1238;
 P807 l2_1239;
 P807 l3_1240;
};
struct f_lit_index_253fr { int dummy;
 P807 lits_251;
 rstr *name_252;
 rt_int result_;
 rt_int i_1241;
 P807 l_1242;
};
struct f_resolve_subtype_256fr { int dummy;
 P807 st_254;
 P809 *c_255;
 P809 c_255v;
 P813 result_;
 P813 t_1243;
 int ok_1244;
 P813 dummy_1245;
 P813 et_1247;
 P809 ec_1248;
 P813 et_1249;
 P807 ix_1250;
 rt_int k_1251;
 P828 tail_1252;
 P811 btail_1253;
 P809 ic_1254;
 P813 it_1255;
 P800 lo_1256;
 P800 hi_1257;
 P828 tl_1258;
 P811 l1_1260;
 P811 l2_1261;
 P809 ec_1264;
 P807 comp_1265;
 P815 tail_1266;
 P809 cc_1267;
 P815 f_1268;
 P807 lits_1270;
 P807 ltail_1271;
 P815 f_1272;
 P807 l_1273;
 P807 gt_1274;
 P809 ec_1275;
 P800 base_1276;
};
struct f_float_lit_258fr { int dummy;
 P807 e_257;
 int result_;
};
struct f_tag_constraint_262fr { int dummy;
 P813 t_259;
 P807 e_260;
 P809 c_261;
 P813 dummy_1277;
};
struct f_named_subtype_265fr { int dummy;
 P807 st_263;
 P809 *c_264;
 P809 c_264v;
 P813 result_;
 P813 t_1278;
 P817 y_1279;
 rstr name_1280;
};
struct f_invoke_abbrev_269fr { int dummy;
 P817 y_266;
 P807 st_267;
 P809 *c_268;
 P809 c_268v;
 P813 result_;
 P807 p_1281;
 P807 a_1282;
 P813 t_1283;
 P817 z_1284;
 P809 pc_1285;
 P813 at_1286;
 int ok_1287;
};
struct f_apply_constraint_274fr { int dummy;
 P813 t_270;
 P807 args_271;
 P809 c_272;
 rt_int line_273;
 P813 dummy_1288;
 int ok_1289;
};
struct f_value_subtype_278fr { int dummy;
 P807 e_275;
 P809 *c_276;
 P809 c_276v;
 P800 *base_277;
 P800 base_277v;
 P813 result_;
 P813 t_1290;
 P809 c0_1291;
 int ro_1292;
 rt_int k_1293;
 rstr lo_1297;
 rstr hi_1298;
 P811 l1_1299;
 P811 l2_1300;
 P807 p_1303;
 P807 head_1304;
 P807 tail_1305;
 P807 sel_1306;
};
struct f_reverse_pairs_280fr { int dummy;
 P811 l_279;
 P811 result_;
 P811 r_1307;
 P811 p_1308;
 P811 a_1309;
 P811 b_1310;
};
struct f_inquiry_283fr { int dummy;
 P807 st_281;
 P809 *c_282;
 P809 c_282v;
 P813 result_;
 P800 base_1311;
 P813 t_1312;
 rstr name_1313;
 P807 sub_1314;
 P809 c2_1315;
 rt_int k_1316;
 int ok_1317;
 P809 ac_1318;
};
struct f_as_subtype_285fr { int dummy;
 P807 e_284;
 P807 result_;
 P807 st_1319;
 rstr name_1320;
 P817 y_1321;
};
struct f_tt_subtype_290fr { int dummy;
 P800 name_286;
 P807 tt_287;
 P807 args_288;
 rt_int line_289;
 P807 result_;
 P807 st_1322;
};
struct f_type_name_292fr { int dummy;
 rstr *name_291;
 int result_;
 P817 y_1323;
};
struct f_empty_set_294fr { int dummy;
 P813 t_293;
 rstr result_;
};
struct f_opened_296fr { int dummy;
 P813 t_295;
 int result_;
 P834 c_1324;
};
struct f_replace_all_300fr { int dummy;
 rstr *s_297;
 rstr *pat_298;
 rstr *r_299;
 rstr result_;
 rt_int i_1325;
};
struct f_subst_302fr { int dummy;
 rstr *s_301;
 rstr result_;
 P811 l_1326;
 P800 r_1327;
};
struct f_new_type_306fr { int dummy;
 P817 y_303;
 P807 st_304;
 P809 *c_305;
 P809 c_305v;
 P813 result_;
 P807 d_1328;
 P807 p_1329;
 P809 uc_1330;
 P817 z_1331;
 P809 zc_1332;
};
struct f_init_storage_310fr { int dummy;
 rstr *lval_307;
 P813 t_308;
 P809 c_309;
};
struct f_init_call_313fr { int dummy;
 P817 y_311;
 rstr *lval_312;
 rstr result_;
 P800 link_1333;
 rt_int i_1334;
};
struct f_needs_fin_315fr { int dummy;
 P813 t_314;
 int result_;
 P815 f_1338;
};
struct f_fin_code_318fr { int dummy;
 rstr *lval_316;
 P813 t_317;
 rstr result_;
 P800 r_1339;
 rstr i_1340;
 P815 f_1341;
 P815 f_1342;
 rt_int i_1343;
};
struct f_tparam_type_321fr { int dummy;
 P813 t_319;
 rstr *name_320;
 P813 result_;
 P817 z_1344;
};
struct f_make_storage_325fr { int dummy;
 rstr *lval_322;
 P813 t_323;
 P809 c_324;
 P807 p_1345;
 P807 a_1346;
 P809 uc_1347;
 P813 ut_1348;
 P813 at_1349;
 P813 pt_1350;
 rstr v_1351;
 P811 saved_1352;
 P811 l1_1353;
 P811 l2_1354;
 rt_int k_1357;
 rstr i_1361;
 P815 f_1362;
 P815 f_1363;
 rt_int i_1364;
};
struct f_manifest_328fr { int dummy;
 P807 e_326;
 int *ok_327;
 int ok_327v;
 rt_int result_;
 P826 v_1368;
};
struct f_mk_mval_331fr { int dummy;
 rt_int kind_329;
 rt_int i_330;
 P826 result_;
 P826 v_1369;
};
struct f_ipow_334fr { int dummy;
 rt_int a_332;
 rt_int b_333;
 rt_int result_;
 rt_int r_1371;
 rt_int i_1372;
};
struct f_meval_337fr { int dummy;
 P807 e_335;
 int *ok_336;
 int ok_336v;
 P826 result_;
 P826 a_1376;
 P826 b_1377;
 int ok2_1378;
 P800 op_1379;
 P817 y_1380;
 P826 r_1381;
};
struct f_bool_text_339fr { int dummy;
 int b_338;
 rstr result_;
};
struct f_bool_i_341fr { int dummy;
 int b_340;
 rt_int result_;
};
struct f_mstr_343fr { int dummy;
 P826 v_342;
 rstr result_;
};
struct f_ascii_char_345fr { int dummy;
 rt_int i_344;
 int result_;
 rstr printable_1382;
};
struct f_user_defined_347fr { int dummy;
 rstr *op_346;
 int result_;
 P817 y_1383;
};
struct f_mcopy_349fr { int dummy;
 P813 t_348;
 rstr result_;
 rstr ct_1384;
 rstr name_1385;
 P811 l_1386;
};
struct f_composite_351fr { int dummy;
 P813 t_350;
 int result_;
};
struct f_assign_code_356fr { int dummy;
 rstr *lval_352;
 P813 t_353;
 rstr *v_354;
 P809 c_355;
 rstr result_;
};
struct f_copy_code_359fr { int dummy;
 P813 t_357;
 rstr *v_358;
 rstr result_;
};
struct f_eq_code_363fr { int dummy;
 P813 t_360;
 rstr *a_361;
 rstr *b_362;
 rstr result_;
};
struct f_elem_assign_367fr { int dummy;
 rstr *lval_364;
 P813 t_365;
 rstr *v_366;
 rstr result_;
};
struct f_seen_name_370fr { int dummy;
 P811 l_368;
 rstr *s_369;
 int result_;
 P811 p_1388;
};
struct f_emit_helpers_371fr { int dummy;
 P813 order_1389;
 P813 t_1390;
 P811 done_1391;
 P811 l_1392;
 rstr c_1393;
};
struct f_helper_bodies_373fr { int dummy;
 P813 t_372;
 rstr c_1395;
 P830 b_1396;
 P813 e_1397;
 P800 sizes_1398;
 P800 bounds_1399;
 rt_int k_1400;
 rstr l_1404;
 rstr h_1405;
 P811 saved_1406;
 P807 p_1407;
 P811 l1_1408;
 P811 l2_1409;
 P815 f_1412;
 rt_int i_1413;
 P800 cases_as_1414;
 P800 cases_cp_1415;
 P800 cases_eq_1416;
 rstr fn_1417;
 P815 f_1418;
 P800 conds_1419;
 rstr fn_1420;
 rstr fn_1421;
};
struct f_declare_body_375fr { int dummy;
 P807 elems_374;
 P807 e_1422;
 P817 y_1423;
 P817 y_1424;
 P817 y_1425;
 P813 t_1426;
 P817 y_1427;
 P817 y_1428;
 P817 g_1429;
 P821 snap_1430;
 rt_int i_1434;
 P817 g_1438;
 P817 y_1439;
};
struct f_manifest_const_377fr { int dummy;
 P807 d_376;
 int ok_1440;
 P826 v_1441;
 P817 y_1442;
 P813 t_1443;
 P800 ctext_1444;
 P830 saved_1445;
};
struct f_exported_381fr { int dummy;
 P807 d_378;
 rstr *name_379;
 int *ro_380;
 int ro_380v;
 int result_;
 P807 p_1448;
};
struct f_copy_sym_383fr { int dummy;
 P817 y_382;
 P817 result_;
 P817 z_1449;
};
struct f_gen_capsule_385fr { int dummy;
 P807 d_384;
 P817 y_1451;
 P800 saved_1452;
};
struct f_capsule_params_389fr { int dummy;
 P807 d_386;
 P807 args_387;
 rt_int line_388;
 P807 p_1453;
 P807 a_1454;
 P813 t_1455;
 P813 vt_1456;
 P809 c_1457;
 P800 lv_1458;
 P809 lc_1459;
 int ro_1460;
 P817 y_1461;
 rstr f_1462;
 rstr g_1463;
 P817 y_1464;
 rstr v_1465;
 rstr access_1466;
};
struct f_elaborate_capsule_394fr { int dummy;
 P807 d_390;
 P817 y_391;
 P807 args_392;
 P807 owner_393;
 P834 cr_1467;
 P824 ctx_1468;
 P832 saved_gotos_1469;
 P817 m_1470;
 P807 p_1471;
 int ro_1472;
 P836 w_1475;
 P817 z_1477;
};
struct f_exports_op_397fr { int dummy;
 P807 d_395;
 rstr *op_396;
 int result_;
 P807 p_1478;
};
struct f_renamed_400fr { int dummy;
 P807 d_398;
 P817 z_399;
 P800 result_;
 P807 r_1479;
};
struct f_gen_expose_402fr { int dummy;
 P807 d_401;
 P817 y_1480;
 P817 m_1481;
 P807 p_1482;
 P807 r_1483;
 P817 inst_1484;
 int found_1485;
 P817 z_1486;
 int found_1487;
 P817 z_1488;
};
struct f_finish_ptr_404fr { int dummy;
 P813 t_403;
 P807 d_1489;
 P807 p_1490;
 P809 c_1491;
 rstr dummy_1492;
 rt_int pass_1493;
 P817 y_1497;
 P809 pc_1498;
};
struct f_ptr_args_406fr { int dummy;
 P809 c_405;
 P807 result_;
};
struct f_bind_ptr_params_411fr { int dummy;
 P807 formals_407;
 P807 actuals_408;
 rstr *cell_409;
 rt_int line_410;
 P807 p_1499;
 P807 a_1500;
 P813 vt_1501;
 P809 pc_1502;
 P817 y_1503;
 rstr v_1504;
 rstr pv_1505;
};
struct f_alloc_cell_416fr { int dummy;
 P807 s_412;
 rstr *lv_413;
 P813 t_414;
 P809 c_415;
 P807 d_1506;
 P809 tc_1507;
 P813 vt_1508;
 rstr pt_1509;
 rstr cell_1510;
 rstr fn_1511;
 rstr v_1512;
};
struct f_freeze_args_420fr { int dummy;
 P809 c_417;
 P813 t_418;
 rt_int line_419;
 P809 result_;
 P809 r_1513;
 P807 p_1514;
 P807 a_1515;
 P807 head_1516;
 P807 tail_1517;
 P800 saved_1518;
 P809 pc_1519;
 P813 vt_1520;
 P813 pt_1521;
 rstr nm_1522;
 P817 y_1523;
 P807 n_1524;
 rstr v_1525;
 rstr access_1526;
};
struct f_ptr_subtype_check_424fr { int dummy;
 P813 t_421;
 P809 c_422;
 P807 src_423;
 P800 lv_1527;
 P813 st_1528;
 P809 sc_1529;
 int ro_1530;
 P800 cond_1531;
 P807 a_1532;
 P807 b_1533;
 P813 at_1534;
 P813 bt_1535;
 rstr x_1536;
 rstr y_1537;
};
struct f_declare_subprogram_426fr { int dummy;
 P807 d_425;
};
struct f_build_subprogram_428fr { int dummy;
 P807 d_427;
 P817 result_;
 P817 y_1538;
 P807 p_1539;
 P819 tail_1540;
 P819 pm_1541;
 P809 rc_1543;
 P819 pm_1544;
 P830 saved_1545;
 P817 z_1546;
};
struct f_has_pragmat_431fr { int dummy;
 P800 pr_429;
 rstr *p_430;
 int result_;
 rt_int i_1547;
};
struct f_suppressing_433fr { int dummy;
 P800 pr_432;
 P800 result_;
 P800 r_1551;
 rt_int i_1552;
 rt_int j_1553;
 rt_int k_1554;
};
struct f_suppressed_435fr { int dummy;
 rstr *x_434;
 int result_;
 rstr w_1555;
 rt_int i_1556;
};
struct f_element_437fr { int dummy;
 P807 e_436;
 P800 saved_1560;
};
struct f_element1_439fr { int dummy;
 P807 e_438;
 rt_int k_1561;
 P817 g_1562;
 rt_int i_1566;
 P813 t_1570;
 rstr c_1571;
};
struct f_storage_442fr { int dummy;
 rstr *name_440;
 P813 t_441;
 rstr result_;
 rstr g_1572;
 rstr f_1573;
};
struct f_bind_445fr { int dummy;
 P817 y_443;
 rstr *access_444;
};
struct f_var_decl_447fr { int dummy;
 P807 d_446;
 P809 c_1574;
 P813 t_1575;
 P817 y_1576;
 rstr access_1577;
 P813 it_1578;
 rstr n_1579;
 P813 vt_1580;
 rstr v_1581;
};
struct f_open_fin_449fr { int dummy;
 rstr *fc_448;
 rstr f_1582;
 P811 l_1583;
};
struct f_close_fins_451fr { int dummy;
 P811 saved_450;
};
struct f_const_decl_453fr { int dummy;
 P807 d_452;
 P809 c_1585;
 P813 t_1586;
 P813 vt_1587;
 P817 y_1588;
 int ok_1589;
 rstr v_1590;
 rstr access_1591;
};
struct f_subprogram_455fr { int dummy;
 P807 d_454;
};
struct f_gen_subprogram_458fr { int dummy;
 P807 d_456;
 P817 y_457;
 P830 saved_code_1592;
 P830 saved_fields_1593;
 int saved_in_1594;
 P817 saved_sym_1595;
 P832 saved_exits_1596;
 P832 saved_gotos_1597;
 rt_int saved_frames_1598;
 P800 args_1599;
 P819 pm_1600;
 P811 saved_handlers_1601;
 P811 saved_cleanups_1602;
 P824 ctx_1603;
 P800 head_1604;
 P800 frame_1605;
 P800 parent_1606;
 P800 copy_back_1607;
 P800 pfin_1608;
 P811 saved_fins_1609;
 P809 saved_rc_1610;
 P800 saved_ret_1611;
 P800 saved_rflag_1612;
 P807 pn_1613;
 P800 nonrec_end_1614;
 int has_pfin_1615;
 rstr ct_1617;
 rstr f_1618;
 P817 p_1619;
 P809 pc_1620;
 P809 ac_1621;
 P809 fc_1622;
 P813 ft_1623;
 rstr bt_1624;
 P809 rc_1625;
 P813 rt_1626;
 rstr g_1627;
 P800 leave_1628;
};
struct f_waits_of_460fr { int dummy;
 P807 d_459;
 rstr result_;
 P836 w_1629;
};
struct f_task_waits_462fr { int dummy;
 P807 elems_461;
 rstr result_;
 P807 e_1630;
 P800 r_1631;
};
struct f_await_tasks_464fr { int dummy;
 P807 elems_463;
 rstr w_1632;
};
struct f_capsule_elements_466fr { int dummy;
 P807 elems_465;
 P807 e_1633;
};
struct f_declare_labels_468fr { int dummy;
 P807 elems_467;
 P807 e_1634;
 P807 l_1635;
 P832 x_1636;
};
struct f_start_labels_469fr { int dummy;
 P832 x_1638;
};
struct f_goto_label_471fr { int dummy;
 rstr *name_470;
 P832 result_;
 P832 x_1639;
};
struct f_has_return_473fr { int dummy;
 P807 e_472;
 int result_;
 P807 x_1640;
};
struct f_capsule_body_475fr { int dummy;
 P807 elems_474;
 P800 saved_ret_1641;
 P800 saved_flag_1642;
 rt_int saved_frames_1643;
 P807 e_1644;
 int stmt_1645;
};
struct f_body_elements_477fr { int dummy;
 P807 elems_476;
};
struct f_gen_body_479fr { int dummy;
 P807 elems_478;
 P811 saved_1646;
 P832 saved_gotos_1647;
};
struct f_pop_frames_481fr { int dummy;
 rt_int upto_480;
 rt_int i_1648;
 P811 c_1649;
};
struct f_push_cleanup_483fr { int dummy;
 rstr *s_482;
 P811 c_1650;
};
struct f_pop_cleanup_484fr { int dummy;
};
struct f_gen_statement_486fr { int dummy;
 P807 s_485;
 P800 label_1652;
 P807 gl_1653;
 P832 x_1654;
 P832 x_1657;
};
struct f_st_assign_488fr { int dummy;
 P807 s_487;
 P800 lv_1658;
 P813 t_1659;
 P813 vt_1660;
 P809 c_1661;
 int ro_1662;
 rstr lo_1663;
 rstr hi_1664;
 rstr v_1665;
 rstr lo_1666;
 rstr hi_1667;
 rstr v_1668;
 rstr v_1669;
};
struct f_st_call_490fr { int dummy;
 P807 s_489;
 P807 c_1670;
 P813 t_1671;
 P807 x_1672;
};
struct f_st_if_492fr { int dummy;
 P807 s_491;
 P807 a_1673;
 int first_1674;
 P813 t_1675;
 int taken_1676;
 int ok_1677;
 P826 mv_1678;
 rstr c_1679;
};
struct f_st_case_494fr { int dummy;
 P807 s_493;
 P813 st_1680;
 P813 vt_1681;
 int first_1682;
 P807 a_1683;
 rstr sel_1684;
 rstr tmp_1685;
 P807 lab_1686;
 P800 conds_1687;
 rstr v_1688;
 rstr lo_1689;
 rstr hi_1690;
};
struct f_st_repeat_496fr { int dummy;
 P807 s_495;
 P813 t_1691;
 P809 c_1692;
 rstr cond_1693;
 rstr access_1694;
 rstr lov_1695;
 rstr hiv_1696;
 rstr it_1697;
 P817 y_1698;
};
struct f_st_exit_498fr { int dummy;
 P807 s_497;
 P832 x_1699;
};
struct f_st_return_500fr { int dummy;
 P807 s_499;
 P813 vt_1700;
 rstr v_1701;
};
struct f_result_checked_504fr { int dummy;
 P813 t_501;
 P809 c_502;
 rstr *v_503;
 rstr result_;
};
struct f_exc_id_507fr { int dummy;
 rstr *name_505;
 rt_int line_506;
 rstr result_;
 P817 y_1702;
};
struct f_st_guard_509fr { int dummy;
 P807 s_508;
 P807 h_1703;
 int first_1704;
 P811 hv_1705;
 rstr f_1706;
 rstr x_1707;
 P807 n_1709;
 P800 conds_1710;
};
struct f_st_alloc_511fr { int dummy;
 P807 s_510;
 P800 lv_1711;
 P813 t_1712;
 P813 target_1713;
 P813 vt_1714;
 P809 c_1715;
 P809 tc_1716;
 int ro_1717;
 P807 d_1718;
 P807 p_1719;
 P807 a_1720;
 rstr tcn_1721;
 rstr cell_1722;
 rstr fn_1723;
 rstr v_1724;
};
struct f_act_ref_513fr { int dummy;
 P807 e_512;
 rstr result_;
 P800 lv_1725;
 P813 t_1726;
 P809 c_1727;
 int ro_1728;
 rstr v_1729;
};
struct f_st_create_515fr { int dummy;
 P807 s_514;
 P817 y_1730;
 P819 pm_1731;
 P807 a_1732;
 P800 lv_1733;
 P813 lt_1734;
 P813 vt_1735;
 P809 lc_1736;
 int ro_1737;
 P813 at_1738;
 P809 ac_1739;
 int aro_1740;
 P800 act_1741;
 rstr nf_1742;
 P800 link_1743;
 rt_int i_1744;
 rstr v_1748;
};
struct f_hidden_var_519fr { int dummy;
 rstr *name_516;
 P813 t_517;
 rstr *place_518;
 P817 y_1749;
};
struct f_user_create_525fr { int dummy;
 P807 s_520;
 P817 y_521;
 rstr *uv_522;
 P813 ut_523;
 rstr *nf_524;
 P813 t_1750;
 P830 saved_1751;
 P830 hook_1752;
 P807 un_1753;
 rstr hn_1754;
 rstr aa_1755;
 rstr uname_1756;
 rstr aname_1757;
 P807 start_1758;
 P807 an_1759;
};
struct f_wait_alt_530fr { int dummy;
 P807 inv_526;
 rstr *arr_527;
 rt_int i_528;
 int mixed_529;
 rstr result_;
 P800 lv_1760;
 P813 t_1761;
 P813 vt_1762;
 P809 c_1763;
 int ro_1764;
 P807 fn_1765;
 P807 args_1766;
 rstr slot_1767;
 P800 dv_1768;
 P813 dt_1769;
 rstr tmp_1770;
 rstr v_1771;
 rstr v_1772;
};
struct f_builtin_wait_532fr { int dummy;
 P807 inv_531;
 int result_;
 P800 lv_1773;
 P813 t_1774;
 P809 c_1775;
 int ro_1776;
 P830 saved_1777;
 int ok_1778;
};
struct f_wait_op_537fr { int dummy;
 P807 inv_533;
 rstr *op_534;
 rstr *q_535;
 int is_stmt_536;
 rstr result_;
 P807 x_1781;
 P807 f_1782;
 P807 qn_1783;
 P813 t_1784;
 rstr r_1785;
};
struct f_user_wait_542fr { int dummy;
 P807 s_538;
 rstr *arr_539;
 rstr *w_540;
 rt_int n_541;
 P807 a_1786;
 rt_int i_1787;
 P800 tests_1788;
 P800 revokes_1789;
 P807 inv_1790;
 P807 st_1791;
 P809 c_1792;
 P813 qt_1793;
 rstr qname_1794;
 P817 y_1795;
 rstr access_1796;
};
struct f_st_wait_544fr { int dummy;
 P807 s_543;
 P807 a_1797;
 rt_int n_1798;
 int first_1799;
 P830 inits_1800;
 int user_1801;
 rstr arr_1802;
 rstr w_1803;
 P807 inv_1804;
 P807 inv_1805;
 P800 conds_1806;
 rt_int i_1807;
};
struct f_call_node_548fr { int dummy;
 rstr *name_545;
 P807 arg_546;
 rt_int line_547;
 P807 result_;
 P807 x_1811;
 P807 f_1812;
};
struct f_user_region_550fr { int dummy;
 P807 s_549;
 P813 t_1813;
 rstr f_1814;
 rstr lock_1815;
 rstr unlock_1816;
};
struct f_st_region_552fr { int dummy;
 P807 s_551;
 P800 lv_1817;
 P813 t_1818;
 P809 c_1819;
 int ro_1820;
 rstr lk_1821;
 rstr f_1822;
};
struct f_gparam_555fr { int dummy;
 P807 g_553;
 rstr *name_554;
 P807 result_;
 P807 p_1823;
};
struct f_bind_sym_557fr { int dummy;
 P807 p_556;
 P817 result_;
 P817 y_1824;
};
struct f_same_binds_560fr { int dummy;
 P817 a_558;
 P817 b_559;
 int result_;
 P817 x_1825;
 P817 y_1826;
};
struct f_same_binding_563fr { int dummy;
 P817 a_561;
 P817 b_562;
 int result_;
};
struct f_tt_binds_568fr { int dummy;
 P807 gd_564;
 P807 formals_565;
 P807 actuals_566;
 rt_int line_567;
 P817 result_;
 P807 f_1827;
 P807 a_1828;
 P817 binds_1829;
 P809 c_1830;
 P813 at_1831;
 P807 p_1832;
 P817 b_1833;
 P807 st_1834;
 int ok_1835;
};
struct f_generic_use_570fr { int dummy;
 P807 st_569;
 int result_;
};
struct f_infer_from_575fr { int dummy;
 P807 gd_571;
 P807 pat_572;
 P813 t_573;
 P817 known_574;
 P817 result_;
 P817 binds_1836;
 P807 e_1837;
 P807 tp_1838;
 P800 nm_1839;
 P817 q_1840;
 int have_1841;
 P817 g_1842;
 P817 b_1843;
};
struct f_instantiate_type_581fr { int dummy;
 P817 g_576;
 P807 tt_577;
 P807 args_578;
 P809 *c_579;
 P809 c_579v;
 rt_int line_580;
 P813 result_;
 P807 gd_1844;
 P807 pat_1845;
 P817 binds_1846;
 P817 inst_1847;
 P813 t_1848;
 P834 saved_caps_1849;
 P821 saved_env_1850;
 rt_int saved_gdepth_1851;
 P817 b_1852;
 P817 y_1853;
 P809 yc_1854;
};
struct f_instantiate_586fr { int dummy;
 P817 g_582;
 P807 tt_583;
 P807 args_584;
 rt_int line_585;
 P817 result_;
 P807 gd_1856;
 P807 pat_1857;
 P817 binds_1858;
 P807 f_1859;
 P807 a_1860;
 P807 fp_1861;
 P817 inst_1862;
 P813 at_1863;
 P809 c_1864;
 P824 saved_fctx_1865;
 int saved_in_1866;
 rt_int saved_level_1867;
 P817 saved_sym_1868;
 P830 saved_code_1869;
 P821 saved_env_1870;
 rt_int saved_gdepth_1871;
 rstr v_1872;
 int known_1873;
 P817 q_1874;
 P817 b_1875;
 rstr v_1876;
 P817 b_1877;
};
struct f_access_of_588fr { int dummy;
 P817 y_587;
 rstr result_;
 P800 p_1878;
 rt_int i_1879;
};
struct f_import_of_591fr { int dummy;
 P807 l_589;
 rstr *name_590;
 P807 result_;
 P807 p_1883;
};
struct f_check_import_594fr { int dummy;
 P817 y_592;
 rt_int line_593;
 int result_;
 P824 c_1884;
 int ro_1885;
 P807 imp_1886;
};
struct f_c_ident_596fr { int dummy;
 rstr *s_595;
 rstr result_;
};
struct f_cell_deref_599fr { int dummy;
 P813 t_597;
 rstr *p_598;
 rstr result_;
};
struct f_deref_602fr { int dummy;
 rstr *base_600;
 P813 t_601;
 rstr result_;
};
struct f_is_lvalue_604fr { int dummy;
 P807 e_603;
 int result_;
 P817 y_1887;
};
struct f_lvalue_610fr { int dummy;
 P807 e_605;
 P800 *code_606;
 P800 code_606v;
 P813 *t_607;
 P813 t_607v;
 P809 *c_608;
 P809 c_608v;
 int *ro_609;
 int ro_609v;
 P800 base_1888;
 P813 bt_1889;
 P809 bc_1890;
 P817 y_1891;
};
struct f_select_on_618fr { int dummy;
 rstr *base_611;
 P813 bt_612;
 P807 e_613;
 int *ro_614;
 P800 *code_615;
 P800 code_615v;
 P813 *t_616;
 P813 t_616v;
 P809 *c_617;
 P809 c_617v;
 P807 p_1892;
 P809 pc_1893;
 P807 p_1894;
 P815 f_1895;
 rt_int i_1896;
 rstr fn_1897;
 P815 f_1898;
};
struct f_has_call_620fr { int dummy;
 rstr *s_619;
 int result_;
 rt_int i_1899;
};
struct f_need_slice_622fr { int dummy;
 P813 t_621;
 rstr c_1903;
 rstr n_1904;
 P811 l_1905;
};
struct f_ix_626fr { int dummy;
 rstr *i_623;
 rstr *lo_624;
 rstr *hi_625;
 rstr result_;
};
struct f_index_on_635fr { int dummy;
 rstr *base_627;
 P813 bt_628;
 P807 e_629;
 int *ro_630;
 int lv_631;
 P800 *code_632;
 P800 code_632v;
 P813 *t_633;
 P813 t_633v;
 P809 *c_634;
 P809 c_634v;
 P807 a_1907;
 P813 it_1908;
 rstr lo_1909;
 rstr hi_1910;
 P800 off_1911;
 rt_int k_1912;
 P800 b_1913;
 P800 pre_1914;
 rstr i_1915;
 rstr l_1916;
 rstr h_1917;
 rstr lo_1918;
 rstr hi_1919;
 rstr i_1920;
};
struct f_own_attribute_637fr { int dummy;
 P807 e_636;
 int result_;
 P830 saved_1921;
 P813 bt_1922;
 int ok_1923;
 rstr base_1926;
 P807 p_1927;
 P815 f_1928;
};
struct f_gexpr_641fr { int dummy;
 P807 e_638;
 P813 want_639;
 P813 *t_640;
 P813 t_640v;
 rstr result_;
 rt_int k_1929;
 P800 code_1930;
 P809 c_1931;
 int ro_1932;
 P813 bt_1933;
 P809 ctx_1934;
 P800 r_1935;
 rt_int i_1936;
 rt_int pos_1940;
 rt_int i_1941;
 P817 y_1942;
 int ro_1943;
 P807 call_1944;
 P807 fname_1945;
 rstr a_1946;
 rstr a_1947;
 rstr a_1948;
 P807 nm_1949;
 P817 y_1950;
 rstr base_1951;
 rstr base_1952;
};
struct f_resolved_644fr { int dummy;
 P807 e_642;
 P813 *t_643;
 P813 t_643v;
 rstr result_;
 P809 c_1953;
 P813 vt_1954;
 P817 y_1955;
 P807 tt_1956;
 P807 call_1957;
 P807 f_1958;
 P807 fname_1959;
 rstr v_1960;
};
struct f_gexpr_in_649fr { int dummy;
 P807 e_645;
 P813 want_646;
 P809 c_647;
 P813 *t_648;
 P813 t_648v;
 rstr result_;
};
struct f_ascii_lit_651fr { int dummy;
 int ch_650;
 rstr result_;
 P807 l_1961;
 rt_int i_1962;
};
struct f_octal_653fr { int dummy;
 rt_int n_652;
 rstr result_;
 rstr r_1966;
};
struct f_str_cat_part_655fr { int dummy;
 P813 t_654;
 P813 result_;
};
struct f_peek_type_657fr { int dummy;
 P807 e_656;
 P813 result_;
 P830 saved_1967;
 P813 t_1968;
 rstr v_1971;
};
struct f_set_operands_660fr { int dummy;
 P807 e_658;
 P813 want_659;
 P813 result_;
 P813 t_1972;
};
struct f_copy_node_662fr { int dummy;
 P807 e_661;
 P807 result_;
 P807 x_1973;
};
struct f_wrap_apply_664fr { int dummy;
 P807 e_663;
 P807 result_;
 P807 x_1975;
};
struct f_c_string_666fr { int dummy;
 rstr *s_665;
 rstr result_;
 rt_int n_1976;
 rt_int i_1977;
 rstr r_1981;
 rt_int j_1982;
 rt_int i_1983;
};
struct f_enum_type_of_669fr { int dummy;
 rstr *lit_667;
 rt_int line_668;
 P813 result_;
 P817 y_1987;
 P809 c_1988;
 P807 st_1989;
};
struct f_ptr_attribute_671fr { int dummy;
 P807 e_670;
 int result_;
 P800 lv_1990;
 P813 t_1991;
 P809 c_1992;
 int ro_1993;
 P807 p_1994;
 P830 saved_1995;
};
struct f_attribute_674fr { int dummy;
 P807 e_672;
 P813 *t_673;
 P813 t_673v;
 rstr result_;
 P813 bt_1996;
 P809 c_1997;
 P800 base_1998;
 P807 sub_1999;
 rstr name_2000;
 P807 p_2001;
 P807 a_2002;
 P809 pc_2003;
 rstr v_2004;
 P807 p_2005;
 P807 a_2006;
 P813 pt_2007;
 rstr v_2008;
};
struct f_subtype_compare_679fr { int dummy;
 P807 sa_675;
 P807 sb_676;
 rstr *op_677;
 rt_int line_678;
 rstr result_;
 P809 ca_2009;
 P809 cb_2010;
 P813 ta_2011;
 P813 tb_2012;
 P800 r_2013;
 rstr yes_2014;
 rstr no_2015;
 rt_int k_2016;
 P807 a_2020;
 P807 b_2021;
 P813 at_2022;
 P813 bt2_2023;
 rstr x_2024;
 rstr y_2025;
};
struct f_float_prec_681fr { int dummy;
 P809 c_680;
 rstr result_;
};
struct f_file_attribute_687fr { int dummy;
 P807 e_682;
 P813 bt_683;
 P809 c_684;
 P800 base_685;
 P813 *t_686;
 P813 t_686v;
 rstr result_;
};
struct f_gbinop_691fr { int dummy;
 P807 e_688;
 P813 want_689;
 P813 *t_690;
 P813 t_690v;
 rstr result_;
 P800 op_2026;
 P813 ta_2027;
 P813 tb_2028;
 P813 hint_2029;
 P817 uy_2030;
 P807 l_2031;
 P807 r_2032;
 P807 call_2033;
 P807 fname_2034;
 rstr s_2035;
 rstr a_2036;
 rstr a_2037;
 rstr b_2038;
 rstr a_2039;
 rstr b_2040;
 P813 at_2041;
 rstr a_2042;
 rstr b_2043;
 P813 wa_2044;
 P813 wb_2045;
 P813 ws_2046;
 P813 ce_2047;
 rstr a_2048;
 rstr b_2049;
 rstr dummy_2050;
 rstr a_2051;
 rstr b_2052;
 P813 ct_2053;
 rstr a_2054;
 rstr b_2055;
};
struct f_constructor_696fr { int dummy;
 P807 e_692;
 P813 want_693;
 P809 ctx_694;
 P813 *t_695;
 P813 t_695v;
 rstr result_;
 P807 it_2056;
 P815 f_2057;
 P813 vt_2058;
 P800 s_2059;
 rstr v_2060;
 rt_int i_2061;
 rstr tmp_2062;
 rstr v_2063;
 rstr tmp_2064;
 P800 parts_2065;
 P807 k_2066;
 P800 shared_2067;
 rstr v_2068;
 rstr v_2069;
};
struct f_comp_value_700fr { int dummy;
 P813 t_697;
 P809 c_698;
 rstr *v_699;
 rstr result_;
};
struct f_has_at_702fr { int dummy;
 rstr *s_701;
 int result_;
 rt_int i_2070;
};
struct f_set_elem_705fr { int dummy;
 P813 st_703;
 rstr *v_704;
 rstr result_;
};
struct f_array_cons_710fr { int dummy;
 P807 e_706;
 P813 at_707;
 P809 ctx_708;
 P813 *t_709;
 P813 t_709v;
 rstr result_;
 rstr tmp_2074;
 P800 parts_2075;
 P807 it_2076;
 int positional_2077;
 rt_int k_2078;
 P800 lo_2082;
 P800 hi_2083;
};
struct f_fill_items_716fr { int dummy;
 P807 items_711;
 P813 at_712;
 rstr *tmp_713;
 P811 prefix_714;
 rt_int dim_715;
 rstr result_;
 P807 it_2084;
 rt_int pos_2085;
 P800 r_2086;
 P813 vt_2087;
 rstr v_2088;
 P807 k_2089;
 rt_int d_2090;
 P811 pre_2091;
 P800 loops_2092;
 P800 ends_2093;
 rstr v_2094;
 rstr xv_2095;
 P807 k_2096;
 rstr xv_2097;
 rstr v_2098;
};
struct f_e_line_718fr { int dummy;
 P807 e_717;
 rt_int result_;
};
struct f_add_line_721fr { int dummy;
 P811 l_719;
 rstr *s_720;
 P811 result_;
 P811 r_2099;
 P811 tail_2100;
 P811 x_2101;
 P811 p_2102;
};
struct f_item_value_726fr { int dummy;
 P807 e_722;
 P813 at_723;
 rt_int line_724;
 P813 *vt_725;
 P813 vt_725v;
 rstr result_;
 rstr v_2105;
};
struct f_key_loop_731fr { int dummy;
 P807 k_727;
 P813 at_728;
 rt_int d_729;
 rstr *xv_730;
 rstr result_;
 P813 it_2106;
 rstr lo_2107;
 rstr hi_2108;
};
struct f_store_at_736fr { int dummy;
 P813 at_732;
 rstr *tmp_733;
 P811 xs_734;
 rt_int n_735;
 rstr result_;
 P800 off_2109;
 P811 x_2110;
 rt_int k_2111;
 rstr l_2112;
 rstr h_2113;
};
struct f_fits_739fr { int dummy;
 P817 y_737;
 P807 args_738;
 int result_;
 P807 a_2114;
 P819 pm_2115;
 P813 t_2116;
 P830 saved_2117;
 int ok_2118;
 P800 lv_2119;
 P809 lc_2120;
 int ro_2121;
 rstr v_2124;
};
struct f_resolve_overload_745fr { int dummy;
 rstr *name_740;
 P807 tt_741;
 P807 args_742;
 int is_stmt_743;
 rt_int line_744;
 P817 result_;
 P817 y_2125;
 P817 first_2126;
 rt_int n_2127;
 rt_int pass_2128;
};
struct f_tt_fits_748fr { int dummy;
 P817 y_746;
 P807 tt_747;
 int result_;
 P807 f_2132;
 P807 a_2133;
 P830 saved_2134;
 int ok_2135;
 P809 fc_2138;
 P809 ac_2139;
 P807 fst_2140;
 P813 ft_2141;
 P813 at_2142;
 P807 ast_2143;
};
struct f_overload_chain_751fr { int dummy;
 rstr *name_749;
 rt_int pass_750;
 P817 result_;
};
struct f_is_builtin_753fr { int dummy;
 rstr *n_752;
 int result_;
};
struct f_is_low_level_755fr { int dummy;
 rstr *n_754;
 int result_;
};
struct f_me_high_759fr { int dummy;
 P807 tt_756;
 rt_int line_757;
 P813 *t_758;
 P813 t_758v;
 rstr result_;
 P809 c_2144;
};
struct f_type_tag_761fr { int dummy;
 P813 t_760;
 rstr result_;
};
struct f_lock_ref_764fr { int dummy;
 P807 e_762;
 rstr *name_763;
 rstr result_;
 P800 lv_2145;
 P813 t_2146;
 P809 c_2147;
 int ro_2148;
};
struct f_user_op_767fr { int dummy;
 rstr *op_765;
 P807 args_766;
 P817 result_;
 P817 y_2149;
 rt_int pass_2150;
};
struct f_gcall_771fr { int dummy;
 P807 e_768;
 int is_stmt_769;
 P813 *t_770;
 P813 t_770v;
 rstr result_;
 P807 fn_2154;
 P807 tt_2155;
 P817 y_2156;
 P800 args_2157;
 P807 a_2158;
 P819 pm_2159;
 P813 lt_2160;
 P813 vt_2161;
 P800 lv_2162;
 P809 lc_2163;
 int ro_2164;
 P817 alt_2165;
 rt_int i_2166;
 rstr v_2170;
 rstr ct_2171;
 rstr v_2172;
};
struct f_requires_773fr { int dummy;
 P817 y_772;
 P811 result_;
 P807 imp_2173;
};
struct f_add_req_776fr { int dummy;
 P817 y_774;
 rstr *name_775;
 P811 l_2174;
};
struct f_require_calls_779fr { int dummy;
 P817 y_777;
 P807 e_778;
 P807 x_2176;
 P807 callee_2177;
 P817 z_2178;
 P811 l_2179;
};
struct f_declared_in_782fr { int dummy;
 P807 elems_780;
 rstr *name_781;
 int result_;
 P807 e_2180;
};
struct f_check_requires_785fr { int dummy;
 P817 y_783;
 rt_int line_784;
 P811 l_2181;
 P817 z_2182;
};
struct f_actual_bounds_789fr { int dummy;
 P813 ft_786;
 P813 t_787;
 P809 c_788;
 rstr result_;
};
struct f_builtin_796fr { int dummy;
 rstr *name_790;
 P807 tt_791;
 P807 args_792;
 rt_int line_793;
 int is_stmt_794;
 P813 *t_795;
 P813 t_795v;
 rstr result_;
 P813 at_2183;
 rt_int n_2184;
 rstr a_2185;
 rstr a_2186;
 rstr a_2187;
 rstr a_2188;
 rstr a_2189;
 rstr n1_2190;
 rstr m1_2191;
 rstr a_2192;
 rstr a_2193;
 P807 last_2194;
 rstr a_2195;
 rstr a_2196;
 P800 lv_2197;
 P809 lc_2198;
 int ro_2199;
 P807 last_2200;
 P800 lv_2201;
 P800 dv_2202;
 P809 lc_2203;
 int ro_2204;
 P813 mt_2205;
 P813 dt_2206;
 rstr v_2207;
 P800 lv_2208;
 P809 lc_2209;
 int ro_2210;
 P813 mt_2211;
 P800 lv_2212;
 P800 dv_2213;
 P800 bv_2214;
 P809 lc_2215;
 int ro_2216;
 P813 mt_2217;
 P813 dt_2218;
 P813 bt_2219;
 rstr v_2220;
 rstr v_2221;
 rstr v_2222;
 rstr v_2223;
 rstr a_2224;
 P800 bv_2225;
 P809 bc_2226;
 int ro_2227;
 P813 bt_2228;
 rstr l_2229;
 P800 pv_2230;
 P809 pc_2231;
 int ro_2232;
 P813 pt_2233;
 rstr dev_2234;
 rstr cmd_2235;
 P800 dv_2236;
 P809 dc_2237;
 int ro_2238;
 P813 dt_2239;
};
struct f_translate_798fr { int dummy;
 P807 units_797;
 P807 u_2240;
 P807 l_2242;
 rstr w_2243;
};
struct f_print_program_799fr { int dummy;
};
struct Pc801 { rt_int p_n; rstr all; };
struct Pc805 { rt_int p_n; A806 all; };
struct Pc822 { rt_int p_n; A823 all; };
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
static void as_R825(R825 *d, R825 s);
static R825 cp_R825(R825 s);
static int eq_R825(R825 a, R825 b);
static void as_A823(A823 *d, A823 s);
static A823 cp_A823(A823 s);
static int eq_A823(A823 a, A823 b);
static void as_R820(R820 *d, R820 s);
static R820 cp_R820(R820 s);
static int eq_R820(R820 a, R820 b);
static void as_R818(R818 *d, R818 s);
static R818 cp_R818(R818 s);
static int eq_R818(R818 a, R818 b);
static void as_R816(R816 *d, R816 s);
static R816 cp_R816(R816 s);
static int eq_R816(R816 a, R816 b);
static void as_R814(R814 *d, R814 s);
static R814 cp_R814(R814 s);
static int eq_R814(R814 a, R814 b);
static void as_R812(R812 *d, R812 s);
static R812 cp_R812(R812 s);
static int eq_R812(R812 a, R812 b);
static void as_R810(R810 *d, R810 s);
static R810 cp_R810(R810 s);
static int eq_R810(R810 a, R810 b);
static void as_R808(R808 *d, R808 s);
static R808 cp_R808(R808 s);
static int eq_R808(R808 a, R808 b);
static void as_A806(A806 *d, A806 s);
static A806 cp_A806(A806 s);
static int eq_A806(A806 a, A806 b);
static void as_R803(R803 *d, R803 s);
static R803 cp_R803(R803 s);
static int eq_R803(R803 a, R803 b);
static P800 f_mk_3(rstr *s_2);
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
static P830 f_new_buffer_24(void);
static void f_put_27(P830 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P830 b_30);
static void f_splice_34(P830 a_32, P830 b_33);
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
static P807 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P807 *head_62, P807 *tail_63, P807 x_64);
static rt_int f_list_len_67(P807 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P800 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P800 f_expect_id_89(void);
static P807 f_name_node_90(void);
static P807 f_id_list_91(void);
static P807 f_p_subtype_92(void);
static P807 f_constraint_list_93(void);
static P807 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P807 f_actual_tt_97(void);
static P807 f_binop_102(P800 op_98, P807 l_99, P807 r_100, rt_int line_101);
static P807 f_expr_103(void);
static P807 f_expr_and_104(void);
static P807 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P807 f_expr_rel_108(void);
static P807 f_expr_add_109(void);
static P807 f_expr_mul_110(void);
static P807 f_expr_pow_111(void);
static P807 f_expr_prefix_112(void);
static P807 f_postfix_113(void);
static P807 f_primary_114(void);
static P807 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P807 f_body_117(void);
static P807 f_body_element_118(void);
static P807 f_declaration_119(void);
static P807 f_object_decl_120(void);
static P807 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P807 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P807 f_formal_params_126(void);
static int f_imports_list_128(P807 owner_127);
static int f_is_definable_130(rstr *w_129);
static P800 f_definable_name_131(void);
static P807 f_subprogram_decl_132(void);
static P807 f_capsule_decl_133(void);
static P807 f_formal_tt_134(void);
static P807 f_generic_decl_135(void);
static P807 f_task_decl_136(void);
static P807 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P807 f_statement_140(void);
static P807 f_unlabeled_statement_141(void);
static P807 f_arm_145(P807 cond_142, P807 b_143, rt_int line_144);
static P807 f_if_stmt_146(void);
static P807 f_case_stmt_147(void);
static P807 f_repeat_stmt_148(void);
static P807 f_guard_stmt_149(void);
static P807 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P817 f_lookup_154(rstr *name_153);
static P817 f_lookup_decl_156(P807 d_155);
static void f_define_159(P817 y_157, rt_int line_158);
static int f_overloadable_161(P817 y_160);
static int f_same_tt_164(P807 a_162, P807 b_163);
static int f_same_signature_167(P819 a_165, P819 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P817 f_new_sym_172(rt_int kind_170, P800 name_171);
static P813 f_new_typ_174(rt_int kind_173);
static P809 f_new_cons_175(void);
static int f_scalar_kind_177(P813 t_176);
static rstr f_bound_ctype_179(P813 t_178);
static rstr f_cbound_182(P809 c_180, rstr *b_181);
static rstr f_clo_184(P809 c_183);
static rstr f_chi_186(P809 c_185);
static rstr f_sub_lo_189(P813 t_187, P809 c_188);
static rstr f_sub_hi_192(P813 t_190, P809 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P809 f_copy_cons_197(P809 c_196);
static P809 f_freeze_200(P809 c_198, P813 t_199);
static rstr f_checked_204(P813 t_201, P809 c_202, rstr *v_203);
static int f_same_lits_207(P807 a_205, P807 b_206);
static P813 f_str_elem_209(P813 t_208);
static int f_same_212(P813 a_210, P813 b_211);
static P813 f_base_of_214(P813 t_213);
static P809 f_base_cons_217(P813 t_215, P809 c_216);
static rstr f_kind_name_219(P813 t_218);
static void f_check_type_223(P813 got_220, P813 want_221, rt_int line_222);
static rstr f_ctype_225(P813 t_224);
static rstr f_struct_body_227(P813 t_226);
static rstr f_field_decls_229(P813 t_228);
static void f_declare_ctype_231(P813 t_230);
static rstr f_dim_lo_233(rt_int k_232);
static rstr f_dim_hi_235(rt_int k_234);
static rstr f_more_dims_237(P813 t_236);
static rstr f_acnt_240(P813 t_238, rstr *base_239);
static P800 f_cons_lo_243(P809 c_241, rt_int k_242);
static P800 f_cons_hi_246(P809 c_244, rt_int k_245);
static P813 f_idx_type_249(P813 t_247, rt_int k_248);
static void f_init_ascii_250(void);
static rt_int f_lit_index_253(P807 lits_251, rstr *name_252);
static P813 f_resolve_subtype_256(P807 st_254, P809 *c_255);
static int f_float_lit_258(P807 e_257);
static void f_tag_constraint_262(P813 t_259, P807 e_260, P809 c_261);
static P813 f_named_subtype_265(P807 st_263, P809 *c_264);
static P813 f_invoke_abbrev_269(P817 y_266, P807 st_267, P809 *c_268);
static void f_apply_constraint_274(P813 t_270, P807 args_271, P809 c_272, rt_int line_273);
static P813 f_value_subtype_278(P807 e_275, P809 *c_276, P800 *base_277);
static P811 f_reverse_pairs_280(P811 l_279);
static P813 f_inquiry_283(P807 st_281, P809 *c_282);
static P807 f_as_subtype_285(P807 e_284);
static P807 f_tt_subtype_290(P800 name_286, P807 tt_287, P807 args_288, rt_int line_289);
static int f_type_name_292(rstr *name_291);
static rstr f_empty_set_294(P813 t_293);
static int f_opened_296(P813 t_295);
static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299);
static rstr f_subst_302(rstr *s_301);
static P813 f_new_type_306(P817 y_303, P807 st_304, P809 *c_305);
static void f_init_storage_310(rstr *lval_307, P813 t_308, P809 c_309);
static rstr f_init_call_313(P817 y_311, rstr *lval_312);
static int f_needs_fin_315(P813 t_314);
static rstr f_fin_code_318(rstr *lval_316, P813 t_317);
static P813 f_tparam_type_321(P813 t_319, rstr *name_320);
static void f_make_storage_325(rstr *lval_322, P813 t_323, P809 c_324);
static rt_int f_manifest_328(P807 e_326, int *ok_327);
static P826 f_mk_mval_331(rt_int kind_329, rt_int i_330);
static rt_int f_ipow_334(rt_int a_332, rt_int b_333);
static P826 f_meval_337(P807 e_335, int *ok_336);
static rstr f_bool_text_339(int b_338);
static rt_int f_bool_i_341(int b_340);
static rstr f_mstr_343(P826 v_342);
static int f_ascii_char_345(rt_int i_344);
static int f_user_defined_347(rstr *op_346);
static rstr f_mcopy_349(P813 t_348);
static int f_composite_351(P813 t_350);
static rstr f_assign_code_356(rstr *lval_352, P813 t_353, rstr *v_354, P809 c_355);
static rstr f_copy_code_359(P813 t_357, rstr *v_358);
static rstr f_eq_code_363(P813 t_360, rstr *a_361, rstr *b_362);
static rstr f_elem_assign_367(rstr *lval_364, P813 t_365, rstr *v_366);
static int f_seen_name_370(P811 l_368, rstr *s_369);
static void f_emit_helpers_371(void);
static void f_helper_bodies_373(P813 t_372);
static void f_declare_body_375(P807 elems_374);
static void f_manifest_const_377(P807 d_376);
static int f_exported_381(P807 d_378, rstr *name_379, int *ro_380);
static P817 f_copy_sym_383(P817 y_382);
static void f_gen_capsule_385(P807 d_384);
static void f_capsule_params_389(P807 d_386, P807 args_387, rt_int line_388);
static void f_elaborate_capsule_394(P807 d_390, P817 y_391, P807 args_392, P807 owner_393);
static int f_exports_op_397(P807 d_395, rstr *op_396);
static P800 f_renamed_400(P807 d_398, P817 z_399);
static void f_gen_expose_402(P807 d_401);
static void f_finish_ptr_404(P813 t_403);
static P807 f_ptr_args_406(P809 c_405);
static void f_bind_ptr_params_411(P807 formals_407, P807 actuals_408, rstr *cell_409, rt_int line_410);
static void f_alloc_cell_416(P807 s_412, rstr *lv_413, P813 t_414, P809 c_415);
static P809 f_freeze_args_420(P809 c_417, P813 t_418, rt_int line_419);
static void f_ptr_subtype_check_424(P813 t_421, P809 c_422, P807 src_423);
static void f_declare_subprogram_426(P807 d_425);
static P817 f_build_subprogram_428(P807 d_427);
static int f_has_pragmat_431(P800 pr_429, rstr *p_430);
static P800 f_suppressing_433(P800 pr_432);
static int f_suppressed_435(rstr *x_434);
static void f_element_437(P807 e_436);
static void f_element1_439(P807 e_438);
static rstr f_storage_442(rstr *name_440, P813 t_441);
static void f_bind_445(P817 y_443, rstr *access_444);
static void f_var_decl_447(P807 d_446);
static void f_open_fin_449(rstr *fc_448);
static void f_close_fins_451(P811 saved_450);
static void f_const_decl_453(P807 d_452);
static void f_subprogram_455(P807 d_454);
static void f_gen_subprogram_458(P807 d_456, P817 y_457);
static rstr f_waits_of_460(P807 d_459);
static rstr f_task_waits_462(P807 elems_461);
static void f_await_tasks_464(P807 elems_463);
static void f_capsule_elements_466(P807 elems_465);
static void f_declare_labels_468(P807 elems_467);
static void f_start_labels_469(void);
static P832 f_goto_label_471(rstr *name_470);
static int f_has_return_473(P807 e_472);
static void f_capsule_body_475(P807 elems_474);
static void f_body_elements_477(P807 elems_476);
static void f_gen_body_479(P807 elems_478);
static void f_pop_frames_481(rt_int upto_480);
static void f_push_cleanup_483(rstr *s_482);
static void f_pop_cleanup_484(void);
static void f_gen_statement_486(P807 s_485);
static void f_st_assign_488(P807 s_487);
static void f_st_call_490(P807 s_489);
static void f_st_if_492(P807 s_491);
static void f_st_case_494(P807 s_493);
static void f_st_repeat_496(P807 s_495);
static void f_st_exit_498(P807 s_497);
static void f_st_return_500(P807 s_499);
static rstr f_result_checked_504(P813 t_501, P809 c_502, rstr *v_503);
static rstr f_exc_id_507(rstr *name_505, rt_int line_506);
static void f_st_guard_509(P807 s_508);
static void f_st_alloc_511(P807 s_510);
static rstr f_act_ref_513(P807 e_512);
static void f_st_create_515(P807 s_514);
static void f_hidden_var_519(rstr *name_516, P813 t_517, rstr *place_518);
static void f_user_create_525(P807 s_520, P817 y_521, rstr *uv_522, P813 ut_523, rstr *nf_524);
static rstr f_wait_alt_530(P807 inv_526, rstr *arr_527, rt_int i_528, int mixed_529);
static int f_builtin_wait_532(P807 inv_531);
static rstr f_wait_op_537(P807 inv_533, rstr *op_534, rstr *q_535, int is_stmt_536);
static void f_user_wait_542(P807 s_538, rstr *arr_539, rstr *w_540, rt_int n_541);
static void f_st_wait_544(P807 s_543);
static P807 f_call_node_548(rstr *name_545, P807 arg_546, rt_int line_547);
static void f_user_region_550(P807 s_549);
static void f_st_region_552(P807 s_551);
static P807 f_gparam_555(P807 g_553, rstr *name_554);
static P817 f_bind_sym_557(P807 p_556);
static int f_same_binds_560(P817 a_558, P817 b_559);
static int f_same_binding_563(P817 a_561, P817 b_562);
static P817 f_tt_binds_568(P807 gd_564, P807 formals_565, P807 actuals_566, rt_int line_567);
static int f_generic_use_570(P807 st_569);
static P817 f_infer_from_575(P807 gd_571, P807 pat_572, P813 t_573, P817 known_574);
static P813 f_instantiate_type_581(P817 g_576, P807 tt_577, P807 args_578, P809 *c_579, rt_int line_580);
static P817 f_instantiate_586(P817 g_582, P807 tt_583, P807 args_584, rt_int line_585);
static rstr f_access_of_588(P817 y_587);
static P807 f_import_of_591(P807 l_589, rstr *name_590);
static int f_check_import_594(P817 y_592, rt_int line_593);
static rstr f_c_ident_596(rstr *s_595);
static rstr f_cell_deref_599(P813 t_597, rstr *p_598);
static rstr f_deref_602(rstr *base_600, P813 t_601);
static int f_is_lvalue_604(P807 e_603);
static void f_lvalue_610(P807 e_605, P800 *code_606, P813 *t_607, P809 *c_608, int *ro_609);
static void f_select_on_618(rstr *base_611, P813 bt_612, P807 e_613, int *ro_614, P800 *code_615, P813 *t_616, P809 *c_617);
static int f_has_call_620(rstr *s_619);
static void f_need_slice_622(P813 t_621);
static rstr f_ix_626(rstr *i_623, rstr *lo_624, rstr *hi_625);
static void f_index_on_635(rstr *base_627, P813 bt_628, P807 e_629, int *ro_630, int lv_631, P800 *code_632, P813 *t_633, P809 *c_634);
static int f_own_attribute_637(P807 e_636);
static rstr f_gexpr_641(P807 e_638, P813 want_639, P813 *t_640);
static rstr f_resolved_644(P807 e_642, P813 *t_643);
static rstr f_gexpr_in_649(P807 e_645, P813 want_646, P809 c_647, P813 *t_648);
static rstr f_ascii_lit_651(int ch_650);
static rstr f_octal_653(rt_int n_652);
static P813 f_str_cat_part_655(P813 t_654);
static P813 f_peek_type_657(P807 e_656);
static P813 f_set_operands_660(P807 e_658, P813 want_659);
static P807 f_copy_node_662(P807 e_661);
static P807 f_wrap_apply_664(P807 e_663);
static rstr f_c_string_666(rstr *s_665);
static P813 f_enum_type_of_669(rstr *lit_667, rt_int line_668);
static int f_ptr_attribute_671(P807 e_670);
static rstr f_attribute_674(P807 e_672, P813 *t_673);
static rstr f_subtype_compare_679(P807 sa_675, P807 sb_676, rstr *op_677, rt_int line_678);
static rstr f_float_prec_681(P809 c_680);
static rstr f_file_attribute_687(P807 e_682, P813 bt_683, P809 c_684, P800 base_685, P813 *t_686);
static rstr f_gbinop_691(P807 e_688, P813 want_689, P813 *t_690);
static rstr f_constructor_696(P807 e_692, P813 want_693, P809 ctx_694, P813 *t_695);
static rstr f_comp_value_700(P813 t_697, P809 c_698, rstr *v_699);
static int f_has_at_702(rstr *s_701);
static rstr f_set_elem_705(P813 st_703, rstr *v_704);
static rstr f_array_cons_710(P807 e_706, P813 at_707, P809 ctx_708, P813 *t_709);
static rstr f_fill_items_716(P807 items_711, P813 at_712, rstr *tmp_713, P811 prefix_714, rt_int dim_715);
static rt_int f_e_line_718(P807 e_717);
static P811 f_add_line_721(P811 l_719, rstr *s_720);
static rstr f_item_value_726(P807 e_722, P813 at_723, rt_int line_724, P813 *vt_725);
static rstr f_key_loop_731(P807 k_727, P813 at_728, rt_int d_729, rstr *xv_730);
static rstr f_store_at_736(P813 at_732, rstr *tmp_733, P811 xs_734, rt_int n_735);
static int f_fits_739(P817 y_737, P807 args_738);
static P817 f_resolve_overload_745(rstr *name_740, P807 tt_741, P807 args_742, int is_stmt_743, rt_int line_744);
static int f_tt_fits_748(P817 y_746, P807 tt_747);
static P817 f_overload_chain_751(rstr *name_749, rt_int pass_750);
static int f_is_builtin_753(rstr *n_752);
static int f_is_low_level_755(rstr *n_754);
static rstr f_me_high_759(P807 tt_756, rt_int line_757, P813 *t_758);
static rstr f_type_tag_761(P813 t_760);
static rstr f_lock_ref_764(P807 e_762, rstr *name_763);
static P817 f_user_op_767(rstr *op_765, P807 args_766);
static rstr f_gcall_771(P807 e_768, int is_stmt_769, P813 *t_770);
static P811 f_requires_773(P817 y_772);
static void f_add_req_776(P817 y_774, rstr *name_775);
static void f_require_calls_779(P817 y_777, P807 e_778);
static int f_declared_in_782(P807 elems_780, rstr *name_781);
static void f_check_requires_785(P817 y_783, rt_int line_784);
static rstr f_actual_bounds_789(P813 ft_786, P813 t_787, P809 c_788);
static rstr f_builtin_796(rstr *name_790, P807 tt_791, P807 args_792, rt_int line_793, int is_stmt_794, P813 *t_795);
static void f_translate_798(P807 units_797);
static void f_print_program_799(void);
static int ex_compile_error_1;
static P804 g_toks_838;
static rt_int g_ntoks_839;
static rt_int g_tpos_840;
static rt_int g_src_line_841;
static P800 g_pending_prag_842;
static P821 g_table_843;
static P821 g_genv_844;
static P817 g_all_insts_845;
static rt_int g_depth_846;
static P817 g_scope_stack_847;
static P813 g_all_types_848;
static rt_int g_serial_849;
static P830 g_out_types_850;
static P830 g_out_helpers_851;
static P830 g_out_protos_852;
static P830 g_out_globals_853;
static P830 g_out_funcs_854;
static P830 g_out_init_855;
static P830 g_out_excs_856;
static P830 g_code_857;
static P830 g_fields_buf_858;
static int g_in_func_859;
static rt_int g_cur_level_860;
static P824 g_fctx_861;
static P834 g_caps_862;
static P836 g_cap_waits_863;
static P811 g_psub_864;
static P800 g_st_field_865;
static P830 g_out_frames_866;
static P830 g_out_roots_867;
static int g_uses_free_868;
static P811 g_fins_869;
static int g_uses_findyn_870;
static P817 g_func_sym_871;
static P809 g_func_rc_872;
static P800 g_cap_ret_873;
static P800 g_cap_rflag_874;
static rt_int g_ret_frames_875;
static rt_int g_gdepth_876;
static P800 g_suppress_877;
static P809 g_cons_ctx_878;
static P832 g_exits_879;
static P832 g_gotos_880;
static rt_int g_frames_881;
static P811 g_handlers_882;
static P811 g_cleanups_883;
static rt_int g_trial_884;
static P811 g_mcopies_885;
static P813 g_ty_int_886;
static P813 g_ty_bool_887;
static P813 g_ty_float_888;
static P813 g_ty_ascii_889;
static P813 g_ty_string_890;
static P813 g_ty_void_891;
static P813 g_ty_file_892;
static P813 g_ty_nil_893;
static P813 g_ty_lock_894;
static P813 g_ty_latch_895;
static P813 g_ty_act_896;
static P813 g_file_mode_type_897;
static P809 g_no_cons_898;
static P800 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_899 = NULL;
{ P800 cell900 = rt_alloc(sizeof *cell900);
rt_int pv901 = ((rt_int)(((*F->s_2)).len));
cell900->p_n = pv901;
cell900->all = rt_str_new(pv901);
rt_str_assign(&cell900->all, (*F->s_2));
F->t_899 = cell900;
}
F->result_ = F->t_899;
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
F->r_902 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_902, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_902;
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
F->r_903 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_903, (*F->s_14));
{ rt_int lo905 = ((rt_int)1LL), hi906 = ((rt_int)(((*F->s_14)).len));
for (rt_int it907 = lo905; it907 <= hi906; it907++) {
F->i_904 = it907;
if (((65 <= rt_str_get(F->r_903, F->i_904)) && (rt_str_get(F->r_903, F->i_904) <= 90))) {
(*rt_str_at(&F->r_903, F->i_904)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_903, F->i_904)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_903;
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
F->l_908 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_909 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_908), rt_str(" ", 1)));
{ rt_int lo911 = ((rt_int)1LL), hi912 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_909).len))), ((rt_int)1LL));
for (rt_int it913 = lo911; it913 <= hi912; it913++) {
F->i_910 = it913;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_910, rt_sub(rt_add(F->i_910, ((rt_int)((F->w_909).len))), ((rt_int)1LL))), F->w_909)) {
F->result_ = rt_str_cat(F->l_908, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_908;
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
g_serial_849 = rt_add(g_serial_849, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_849));
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
if ((g_trial_884 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P830 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_914 = NULL;
{ R831 *cell915 = rt_alloc(sizeof(R831));
(*cell915).head = NULL;
(*cell915).tail = NULL;
F->b_914 = cell915;
}
F->result_ = F->b_914;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P830 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_916 = NULL;
{ R812 *cell917 = rt_alloc(sizeof(R812));
(*cell917).s = NULL;
(*cell917).next = NULL;
F->l_916 = cell917;
}
(*(P811)rt_nil_check(F->l_916)).s = f_mk_3(&(*F->s_26));
if (((*(P830)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P830)rt_nil_check(F->b_25)).head = F->l_916;
} else {
(*(P811)rt_nil_check((*(P830)rt_nil_check(F->b_25)).tail)).next = F->l_916;
}
(*(P830)rt_nil_check(F->b_25)).tail = F->l_916;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_857, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P830 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_918 = NULL;
F->l_918 = (*(P830)rt_nil_check(F->b_30)).head;
while ((F->l_918 != NULL)) {
rt_putln((((P800)rt_nil_check((*(P811)rt_nil_check(F->l_918)).s))->all));
F->l_918 = (*(P811)rt_nil_check(F->l_918)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P830 a_32, P830 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P830)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P830)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P830)rt_nil_check(F->a_32)).head = (*(P830)rt_nil_check(F->b_33)).head;
} else {
(*(P811)rt_nil_check((*(P830)rt_nil_check(F->a_32)).tail)).next = (*(P830)rt_nil_check(F->b_33)).head;
}
(*(P830)rt_nil_check(F->a_32)).tail = (*(P830)rt_nil_check(F->b_33)).tail;
(*(P830)rt_nil_check(F->b_33)).head = NULL;
(*(P830)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel919 = (*F->w_35);
if (0 || rt_str_eq(sel919, rt_str("ABBREV", 6)) || rt_str_eq(sel919, rt_str("ABNORMAL", 8)) || rt_str_eq(sel919, rt_str("ALL", 3)) || rt_str_eq(sel919, rt_str("ALLOC", 5)) || rt_str_eq(sel919, rt_str("ASSERT", 6)) || rt_str_eq(sel919, rt_str("BEGIN", 5)) || rt_str_eq(sel919, rt_str("BY", 2)) || rt_str_eq(sel919, rt_str("CAPSULE", 7)) || rt_str_eq(sel919, rt_str("CASE", 4)) || rt_str_eq(sel919, rt_str("CONST", 5)) || rt_str_eq(sel919, rt_str("CREATE", 6)) || rt_str_eq(sel919, rt_str("DO", 2)) || rt_str_eq(sel919, rt_str("ELSE", 4)) || rt_str_eq(sel919, rt_str("ELSEIF", 6)) || rt_str_eq(sel919, rt_str("END", 3)) || rt_str_eq(sel919, rt_str("EXCEPTION", 9)) || rt_str_eq(sel919, rt_str("EXIT", 4)) || rt_str_eq(sel919, rt_str("EXPORTS", 7)) || rt_str_eq(sel919, rt_str("EXPOSE", 6)) || rt_str_eq(sel919, rt_str("EXTERNAL", 8)) || rt_str_eq(sel919, rt_str("FOR", 3)) || rt_str_eq(sel919, rt_str("FROM", 4)) || rt_str_eq(sel919, rt_str("FUNC", 4)) || rt_str_eq(sel919, rt_str("GENERIC", 7)) || rt_str_eq(sel919, rt_str("GOTO", 4)) || rt_str_eq(sel919, rt_str("GUARD", 5)) || rt_str_eq(sel919, rt_str("IF", 2)) || rt_str_eq(sel919, rt_str("IMPORTS", 7)) || rt_str_eq(sel919, rt_str("LOCATION", 8)) || rt_str_eq(sel919, rt_str("NAMED", 5)) || rt_str_eq(sel919, rt_str("NEEDS", 5)) || rt_str_eq(sel919, rt_str("NEW", 3)) || rt_str_eq(sel919, rt_str("NONE", 4)) || rt_str_eq(sel919, rt_str("OUT", 3)) || rt_str_eq(sel919, rt_str("OF", 2)) || rt_str_eq(sel919, rt_str("PRAG", 4)) || rt_str_eq(sel919, rt_str("PROC", 4)) || rt_str_eq(sel919, rt_str("RAISE", 5)) || rt_str_eq(sel919, rt_str("READONLY", 8)) || rt_str_eq(sel919, rt_str("REVERSE", 7)) || rt_str_eq(sel919, rt_str("REGION", 6)) || rt_str_eq(sel919, rt_str("RENAMING", 8)) || rt_str_eq(sel919, rt_str("REP", 3)) || rt_str_eq(sel919, rt_str("REPEAT", 6)) || rt_str_eq(sel919, rt_str("RERAISE", 7)) || rt_str_eq(sel919, rt_str("RETURN", 6)) || rt_str_eq(sel919, rt_str("SUBTYPE", 7)) || rt_str_eq(sel919, rt_str("TASK", 4)) || rt_str_eq(sel919, rt_str("THEN", 4)) || rt_str_eq(sel919, rt_str("TO", 2)) || rt_str_eq(sel919, rt_str("TYPE", 4)) || rt_str_eq(sel919, rt_str("VAR", 3)) || rt_str_eq(sel919, rt_str("WAIT", 4)) || rt_str_eq(sel919, rt_str("WHEN", 4)) || rt_str_eq(sel919, rt_str("WHILE", 5))) {
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
F->t_920 = NULL;
{ R803 *cell921 = rt_alloc(sizeof(R803));
(*cell921).s = NULL;
(*cell921).prags = NULL;
F->t_920 = cell921;
}
(*(P802)rt_nil_check(F->t_920)).kind = F->kind_39;
(*(P802)rt_nil_check(F->t_920)).line = g_src_line_841;
(*(P802)rt_nil_check(F->t_920)).ival = F->ival_41;
(*(P802)rt_nil_check(F->t_920)).s = f_mk_3(&(*F->s_40));
(*(P802)rt_nil_check(F->t_920)).prags = g_pending_prag_842;
g_pending_prag_842 = NULL;
g_ntoks_839 = rt_add(g_ntoks_839, ((rt_int)1LL));
(((P804)rt_nil_check(g_toks_838))->all).p[(rt_index(g_ntoks_839, (((P804)rt_nil_check(g_toks_838))->all).lo, (((P804)rt_nil_check(g_toks_838))->all).hi) - (((P804)rt_nil_check(g_toks_838))->all).lo)] = F->t_920;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_922 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_922 <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_922)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_922))) || (rt_str_get((*F->line_43), F->j_922) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_922) == 95) && ((F->j_922 == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_922, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_922, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_922 = rt_add(F->j_922, ((rt_int)1LL));
}
F->result_ = F->j_922;
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
F->w_923 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_923, (*F->s_46));
{ rt_int lo925 = ((rt_int)1LL), hi926 = ((rt_int)((F->w_923).len));
for (rt_int it927 = lo925; it927 <= hi926; it927++) {
F->k_924 = it927;
(*rt_str_at(&F->w_923, F->k_924)) = f_upper_13(rt_str_get(F->w_923, F->k_924));
}
}
F->result_ = F->w_923;
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
F->j_928 = F->i_49;
while (((F->j_928 <= ((rt_int)(((*F->line_48)).len))) && ((rt_str_get((*F->line_48), F->j_928) == 32) || (rt_str_get((*F->line_48), F->j_928) == 9)))) {
F->j_928 = rt_add(F->j_928, ((rt_int)1LL));
}
F->result_ = F->j_928;
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
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_930 = NULL;
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_931 = 1;
if (((F->j_929 > ((rt_int)(((*F->line_51)).len))) || (rt_str_get((*F->line_51), F->j_929) != 40))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
while (F->more_931) {
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->j_929);
if (((F->j_929 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_929))))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_932 = f_ident_end_45(&(*F->line_51), F->j_929);
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_929, rt_sub(F->k_932, ((rt_int)1LL))); b_; }))); b_; }));
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->k_932);
if (((F->j_929 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_929) == 40))) {
F->go_933 = 1;
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), rt_str("(", 1)); b_; }));
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
while (F->go_933) {
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->j_929);
if (((F->j_929 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_929))))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_932 = f_ident_end_45(&(*F->line_51), F->j_929);
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_929, rt_sub(F->k_932, ((rt_int)1LL))); b_; }))); b_; }));
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->k_932);
if (((F->j_929 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_929) == 44))) {
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), rt_str(",", 1)); b_; }));
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
} else if (((F->j_929 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_929) == 41))) {
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
F->go_933 = 0;
} else {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), rt_str(")", 1)); b_; }));
}
F->r_930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_930))->all), rt_str(";", 1)); b_; }));
F->j_929 = f_skip_blanks_50(&(*F->line_51), F->j_929);
if (((F->j_929 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_929) == 44))) {
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
} else if (((F->j_929 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_929) == 41))) {
F->j_929 = rt_add(F->j_929, ((rt_int)1LL));
F->more_931 = 0;
} else {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P800)rt_nil_check(F->r_930))->all));
if ((g_pending_prag_842 == NULL)) {
g_pending_prag_842 = F->r_930;
} else {
g_pending_prag_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(g_pending_prag_842))->all), (((P800)rt_nil_check(F->r_930))->all)); b_; }));
}
F->result_ = F->j_929;
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
F->i_934 = ((rt_int)1LL);
while ((F->i_934 <= ((rt_int)(((*F->r_54)).len)))) {
F->k_935 = F->i_934;
while ((rt_str_get((*F->r_54), F->k_935) != 59)) {
F->k_935 = rt_add(F->k_935, ((rt_int)1LL));
}
{
F->p_936 = rt_str_copy(rt_str_slice((*F->r_54), F->i_934, rt_sub(F->k_935, ((rt_int)1LL))));
F->ok_937 = ((((((((((rt_str_eq(F->p_936, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_936, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_936, rt_str("OPEN", 4))) || rt_str_eq(F->p_936, rt_str("CLOSED", 6))) || rt_str_eq(F->p_936, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_936, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_936, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_936, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_936, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_936, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_936).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_936, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_938 = ((((((((((rt_int)((F->p_936).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_936, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_936, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_936, rt_str("OPEN", 4))) || rt_str_eq(F->p_936, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_936).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_936, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_936, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_936, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_936).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_936, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_938 && (!F->ok_937))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_936); b_; }));
}
}
F->i_934 = rt_add(F->k_935, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_939 = ((rt_int)1LL);
F->j_940 = ((rt_int)0LL);
F->n_941 = ((rt_int)(((*F->line_56)).len));
while ((F->i_939 <= F->n_941)) {
F->c_942 = rt_str_get((*F->line_56), F->i_939);
if (((((F->c_942 == 32) || (F->c_942 == 9)) || (F->c_942 == 13)) || (F->c_942 == 12))) {
F->i_939 = rt_add(F->i_939, ((rt_int)1LL));
} else if ((F->c_942 == 37)) {
F->i_939 = rt_add(F->n_941, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_942)) {
F->j_940 = f_ident_end_45(&(*F->line_56), F->i_939);
{
F->w_943 = rt_str_new(rt_sub(F->j_940, F->i_939));
rt_str_assign(&F->w_943, rt_str_slice((*F->line_56), F->i_939, rt_sub(F->j_940, ((rt_int)1LL))));
{ rt_int lo945 = ((rt_int)1LL), hi946 = ((rt_int)((F->w_943).len));
for (rt_int it947 = lo945; it947 <= hi946; it947++) {
F->k_944 = it947;
(*rt_str_at(&F->w_943, F->k_944)) = f_upper_13(rt_str_get(F->w_943, F->k_944));
}
}
if (rt_str_eq(F->w_943, rt_str("PRAGMAT", 7))) {
while (((F->j_940 <= F->n_941) && (rt_str_get((*F->line_56), F->j_940) != 59))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
} else if (rt_str_eq(F->w_943, rt_str("PRAG", 4))) {
F->j_940 = f_lex_prag_53(&(*F->line_56), F->j_940);
} else if (f_is_reserved_36(&F->w_943)) {
f_add_token_42((((rt_int)2LL)), &F->w_943, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_943)) {
f_add_token_42((((rt_int)3LL)), &F->w_943, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_943, ((rt_int)0LL));
}
}
F->i_939 = F->j_940;
} else if (f_is_digit_11(F->c_942)) {
F->j_940 = F->i_939;
while (((F->j_940 <= F->n_941) && f_is_digit_11(rt_str_get((*F->line_56), F->j_940)))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
if ((((F->j_940 < F->n_941) && (rt_str_get((*F->line_56), F->j_940) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_940, ((rt_int)1LL)))))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
while (((F->j_940 <= F->n_941) && f_is_digit_11(rt_str_get((*F->line_56), F->j_940)))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
if (((F->j_940 <= F->n_941) && ((rt_str_get((*F->line_56), F->j_940) == 69) || (rt_str_get((*F->line_56), F->j_940) == 101)))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
if (((F->j_940 <= F->n_941) && ((rt_str_get((*F->line_56), F->j_940) == 43) || (rt_str_get((*F->line_56), F->j_940) == 45)))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
while (((F->j_940 <= F->n_941) && f_is_digit_11(rt_str_get((*F->line_56), F->j_940)))) {
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_939, rt_sub(F->j_940, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_939, rt_sub(F->j_940, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_939, rt_sub(F->j_940, ((rt_int)1LL)))));
}
F->i_939 = F->j_940;
} else if ((((F->c_942 == 39) && (F->i_939 < F->n_941)) && (rt_str_get((*F->line_56), rt_add(F->i_939, ((rt_int)1LL))) == 39))) {
F->j_940 = rt_add(F->i_939, ((rt_int)2LL));
while (((F->j_940 < F->n_941) && (!((rt_str_get((*F->line_56), F->j_940) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_940, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_940) == 34)) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
if ((F->j_940 >= F->n_941)) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_939, ((rt_int)2LL)), rt_sub(F->j_940, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_939 = rt_add(F->j_940, ((rt_int)2LL));
} else if ((F->c_942 == 39)) {
F->j_940 = rt_add(F->i_939, ((rt_int)1LL));
if (((F->j_940 > F->n_941) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_940))))) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_940 = f_ident_end_45(&(*F->line_56), F->j_940);
{
F->w_948 = rt_str_new(rt_sub(rt_sub(F->j_940, F->i_939), ((rt_int)1LL)));
rt_str_assign(&F->w_948, rt_str_slice((*F->line_56), rt_add(F->i_939, ((rt_int)1LL)), rt_sub(F->j_940, ((rt_int)1LL))));
{ rt_int lo950 = ((rt_int)1LL), hi951 = ((rt_int)((F->w_948).len));
for (rt_int it952 = lo950; it952 <= hi951; it952++) {
F->k_949 = it952;
(*rt_str_at(&F->w_948, F->k_949)) = f_upper_13(rt_str_get(F->w_948, F->k_949));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_948, ((rt_int)0LL));
}
F->i_939 = F->j_940;
} else if ((F->c_942 == 34)) {
F->j_940 = rt_add(F->i_939, ((rt_int)1LL));
while (((F->j_940 <= F->n_941) && (rt_str_get((*F->line_56), F->j_940) != 34))) {
if ((rt_str_get((*F->line_56), F->j_940) == 39)) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_940 = rt_add(F->j_940, ((rt_int)1LL));
}
if ((F->j_940 > F->n_941)) {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_939, ((rt_int)1LL)), rt_sub(F->j_940, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_939 = rt_add(F->j_940, ((rt_int)1LL));
} else {
{
F->two_953 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_953, rt_str("  ", 2));
(*rt_str_at(&F->two_953, ((rt_int)1LL))) = F->c_942;
if ((F->i_939 < F->n_941)) {
(*rt_str_at(&F->two_953, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_939, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_953, rt_str(":=", 2)) || rt_str_eq(F->two_953, rt_str("=>", 2))) || rt_str_eq(F->two_953, rt_str("..", 2))) || rt_str_eq(F->two_953, rt_str("**", 2))) || rt_str_eq(F->two_953, rt_str("/=", 2))) || rt_str_eq(F->two_953, rt_str("<=", 2))) || rt_str_eq(F->two_953, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_953, ((rt_int)0LL));
F->i_939 = rt_add(F->i_939, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_953, rt_str("<<", 2)) || rt_str_eq(F->two_953, rt_str(">>", 2))) || rt_str_eq(F->two_953, rt_str("::", 2)))) {
if (rt_str_eq(F->two_953, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_953, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_939 = rt_add(F->i_939, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_942 == 40) || (F->c_942 == 41)) || (F->c_942 == 91)) || (F->c_942 == 93)) || (F->c_942 == 44)) || (F->c_942 == 58)) || (F->c_942 == 59)) || (F->c_942 == 46)) || (F->c_942 == 35)) || (F->c_942 == 43)) || (F->c_942 == 45)) || (F->c_942 == 42)) || (F->c_942 == 47)) || (F->c_942 == 38)) || (F->c_942 == 61)) || (F->c_942 == 60)) || (F->c_942 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_942); b_; }), ((rt_int)0LL));
F->i_939 = rt_add(F->i_939, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_954 = rt_str_new(rt_sizeln());
rt_readln(&F->line_954);
g_src_line_841 = rt_add(g_src_line_841, ((rt_int)1LL));
f_lex_line_57(&F->line_954);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P807 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_955 = NULL;
{ R808 *cell956 = rt_alloc(sizeof(R808));
(*cell956).name = NULL;
(*cell956).tag = NULL;
(*cell956).prags = NULL;
(*cell956).labels = NULL;
(*cell956).a = NULL;
(*cell956).b = NULL;
(*cell956).c = NULL;
(*cell956).d = NULL;
(*cell956).e = NULL;
(*cell956).next = NULL;
F->x_955 = cell956;
}
(*(P807)rt_nil_check(F->x_955)).kind = F->kind_59;
(*(P807)rt_nil_check(F->x_955)).line = F->line_60;
F->result_ = F->x_955;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P807 *head_62, P807 *tail_63, P807 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P807)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P807)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P807)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P807 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_957 = ((rt_int)0LL);
F->p_958 = NULL;
F->p_958 = F->l_66;
while ((F->p_958 != NULL)) {
F->n_957 = rt_add(F->n_957, ((rt_int)1LL));
F->p_958 = (*(P807)rt_nil_check(F->p_958)).next;
}
F->result_ = F->n_957;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).line;
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
F->result_ = (((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = (((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = ((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_73);
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
if ((rt_add(g_tpos_840, F->k_75) > g_ntoks_839)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(rt_add(g_tpos_840, F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P800 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(g_tpos_840, F->k_77) > g_ntoks_839)) {
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_ntoks_839, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(rt_add(g_tpos_840, F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
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
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
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
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
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
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P800 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(rt_sub(g_tpos_840, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_959 = NULL;
F->x_959 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P807)rt_nil_check(F->x_959)).name = f_expect_id_89();
F->result_ = F->x_959;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_960 = NULL;
F->tail_961 = NULL;
f_append_65(&F->head_960, &F->tail_961, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_960, &F->tail_961, f_name_node_90());
}
F->result_ = F->head_960;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_962 = f_cur_line_68();
F->x_963 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->x_963 = f_nn_61((((rt_int)81LL)), F->line_962);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P807)rt_nil_check(F->x_963)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_963;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_964 = rt_str_copy((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if (rt_str_eq(F->w_964, rt_str("ARRAY", 5))) {
F->x_963 = f_nn_61((((rt_int)74LL)), F->line_962);
{
F->head_965 = NULL;
F->tail_966 = NULL;
f_append_65(&F->head_965, &F->tail_966, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_965, &F->tail_966, f_p_subtype_92());
}
(*(P807)rt_nil_check(F->x_963)).a = F->head_965;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P807)rt_nil_check(F->x_963)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_964, rt_str("RECORD", 6)) || rt_str_eq(F->w_964, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_964, rt_str("RECORD", 6))) {
F->x_963 = f_nn_61((((rt_int)75LL)), F->line_962);
} else {
F->x_963 = f_nn_61((((rt_int)76LL)), F->line_962);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_967 = NULL;
F->tail_968 = NULL;
F->more_969 = 1;
while (F->more_969) {
F->names_970 = NULL;
F->names_970 = f_id_list_91();
F->st_971 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_971 = f_p_subtype_92();
while ((F->names_970 != NULL)) {
F->cmp_972 = NULL;
F->cmp_972 = f_nn_61((((rt_int)63LL)), (*(P807)rt_nil_check(F->names_970)).line);
(*(P807)rt_nil_check(F->cmp_972)).name = (*(P807)rt_nil_check(F->names_970)).name;
(*(P807)rt_nil_check(F->cmp_972)).a = F->st_971;
f_append_65(&F->head_967, &F->tail_968, F->cmp_972);
F->names_970 = (*(P807)rt_nil_check(F->names_970)).next;
}
F->more_969 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->x_963)).a = F->head_967;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_964, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_963)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_964, rt_str("ENUM", 4))) {
F->x_963 = f_nn_61((((rt_int)72LL)), F->line_962);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_973 = NULL;
F->tail_974 = NULL;
F->more_975 = 1;
while (F->more_975) {
F->lit_976 = NULL;
F->lit_976 = f_nn_61((((rt_int)4LL)), F->line_962);
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P807)rt_nil_check(F->lit_976)).name = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
f_append_65(&F->head_973, &F->tail_974, F->lit_976);
F->more_975 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->x_963)).a = F->head_973;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_963)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P807)rt_nil_check(F->x_963)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_964, rt_str("STRING", 6)) || rt_str_eq(F->w_964, rt_str("SET", 3))) || rt_str_eq(F->w_964, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_964, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_964, rt_str("STRING", 6))) {
F->x_963 = f_nn_61((((rt_int)73LL)), F->line_962);
} else if (rt_str_eq(F->w_964, rt_str("SET", 3))) {
F->x_963 = f_nn_61((((rt_int)77LL)), F->line_962);
} else if (rt_str_eq(F->w_964, rt_str("MAILBOX", 7))) {
F->x_963 = f_nn_61((((rt_int)78LL)), F->line_962);
} else {
F->x_963 = f_nn_61((((rt_int)79LL)), F->line_962);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P807)rt_nil_check(F->x_963)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_963)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_964, rt_str("INT", 3))) {
F->x_963 = f_nn_61((((rt_int)70LL)), F->line_962);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_963)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P807)rt_nil_check(F->x_963)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_964, rt_str("FLOAT", 5))) {
F->x_963 = f_nn_61((((rt_int)71LL)), F->line_962);
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_963)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_963)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P807)rt_nil_check(F->x_963)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_963 = f_nn_61((((rt_int)80LL)), F->line_962);
(*(P807)rt_nil_check(F->x_963)).name = f_mk_3(&F->w_964);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_963)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_963)).b = f_constraint_list_93();
(*(P807)rt_nil_check(F->x_963)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_963;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_977 = NULL;
F->tail_978 = NULL;
F->more_979 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_979) {
F->line_980 = f_cur_line_68();
F->lo_981 = NULL;
F->lo_981 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_982 = NULL;
F->r_982 = f_nn_61((((rt_int)16LL)), F->line_980);
(*(P807)rt_nil_check(F->r_982)).a = F->lo_981;
(*(P807)rt_nil_check(F->r_982)).b = f_expr_103();
f_append_65(&F->head_977, &F->tail_978, F->r_982);
} else {
f_append_65(&F->head_977, &F->tail_978, F->lo_981);
}
F->more_979 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_983 = NULL;
F->tail_984 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_983, &F->tail_984, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_983, &F->tail_984, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_983;
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

static P807 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_985 = NULL;
F->tail_986 = NULL;
F->more_987 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_987) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P800)rt_nil_check((*(P802)rt_nil_check((((P804)rt_nil_check(g_toks_838))->all).p[(rt_index(g_tpos_840, (((P804)rt_nil_check(g_toks_838))->all).lo, (((P804)rt_nil_check(g_toks_838))->all).hi) - (((P804)rt_nil_check(g_toks_838))->all).lo)])).s))->all)))) {
f_append_65(&F->head_985, &F->tail_986, f_p_subtype_92());
} else {
f_append_65(&F->head_985, &F->tail_986, f_expr_103());
}
F->more_987 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_985;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_binop_102(P800 op_98, P807 l_99, P807 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_988 = NULL;
F->x_988 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P807)rt_nil_check(F->x_988)).name = F->op_98;
(*(P807)rt_nil_check(F->x_988)).a = F->l_99;
(*(P807)rt_nil_check(F->x_988)).b = F->r_100;
F->result_ = F->x_988;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_989 = NULL;
F->l_989 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_990 = NULL;
F->op_990 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_991 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_989 = f_binop_102(F->op_990, F->l_989, f_expr_and_104(), F->line_991);
}
F->result_ = F->l_989;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_992 = NULL;
F->l_992 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_993 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_992 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_992, f_expr_not_105(), F->line_993);
}
F->result_ = F->l_992;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_994 = NULL;
F->x_994 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_994)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P807)rt_nil_check(F->x_994)).a = f_expr_not_105();
F->result_ = F->x_994;
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

static P807 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_995 = NULL;
F->l_995 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P800)rt_nil_check((*(P802)rt_nil_check((((P804)rt_nil_check(g_toks_838))->all).p[(rt_index(g_tpos_840, (((P804)rt_nil_check(g_toks_838))->all).lo, (((P804)rt_nil_check(g_toks_838))->all).hi) - (((P804)rt_nil_check(g_toks_838))->all).lo)])).s))->all)))) {
F->op_996 = NULL;
F->op_996 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_997 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_995 = f_binop_102(F->op_996, F->l_995, f_expr_add_109(), F->line_997);
}
F->result_ = F->l_995;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_998 = NULL;
F->l_998 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_999 = NULL;
F->op_999 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1000 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_998 = f_binop_102(F->op_999, F->l_998, f_expr_mul_110(), F->line_1000);
}
F->result_ = F->l_998;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1001 = NULL;
F->l_1001 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1002 = NULL;
F->op_1002 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1003 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_1001 = f_binop_102(F->op_1002, F->l_1001, f_expr_pow_111(), F->line_1003);
}
F->result_ = F->l_1001;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1004 = NULL;
F->l_1004 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1005 = f_cur_line_68();
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->l_1004 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1004, f_expr_prefix_112(), F->line_1005);
}
F->result_ = F->l_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1006 = NULL;
F->x_1006 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P807)rt_nil_check(F->x_1006)).name = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1006)).a = f_expr_prefix_112();
F->result_ = F->x_1006;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1007 = NULL;
F->p_1007 = f_primary_114();
while (1) {
F->line_1008 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1009 = NULL;
F->x_1009 = f_nn_61((((rt_int)10LL)), F->line_1008);
F->head_1010 = NULL;
F->tail_1011 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1012 = 1;
while (F->more_1012) {
F->lo_1013 = NULL;
F->lo_1013 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1014 = NULL;
F->r_1014 = f_nn_61((((rt_int)16LL)), F->line_1008);
(*(P807)rt_nil_check(F->r_1014)).a = F->lo_1013;
(*(P807)rt_nil_check(F->r_1014)).b = f_expr_103();
f_append_65(&F->head_1010, &F->tail_1011, F->r_1014);
} else {
f_append_65(&F->head_1010, &F->tail_1011, F->lo_1013);
}
F->more_1012 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P807)rt_nil_check(F->x_1009)).a = F->p_1007;
(*(P807)rt_nil_check(F->x_1009)).b = F->head_1010;
F->p_1007 = F->x_1009;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1015 = NULL;
F->x_1015 = f_nn_61((((rt_int)11LL)), F->line_1008);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1015)).a = F->p_1007;
(*(P807)rt_nil_check(F->x_1015)).name = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->p_1007 = F->x_1015;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P807)rt_nil_check(F->p_1007)).kind == (((rt_int)7LL))))) {
F->x_1016 = NULL;
F->x_1016 = f_nn_61((((rt_int)12LL)), F->line_1008);
(*(P807)rt_nil_check(F->x_1016)).a = F->p_1007;
(*(P807)rt_nil_check(F->x_1016)).b = f_actual_tt_97();
F->p_1007 = F->x_1016;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1017 = NULL;
F->x_1017 = f_nn_61((((rt_int)13LL)), F->line_1008);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1017)).a = F->p_1007;
(*(P807)rt_nil_check(F->x_1017)).b = f_p_subtype_92();
F->p_1007 = F->x_1017;
} else {
F->result_ = F->p_1007;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1018 = f_cur_line_68();
F->x_1019 = NULL;
F->k_1020 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_1020 == (((rt_int)4LL)))) {
F->x_1019 = f_nn_61((((rt_int)1LL)), F->line_1018);
(*(P807)rt_nil_check(F->x_1019)).ival = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P807)rt_nil_check(F->x_1019)).name = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = F->x_1019;
goto ret_;
}
if ((((F->k_1020 == (((rt_int)5LL))) || (F->k_1020 == (((rt_int)7LL)))) || (F->k_1020 == (((rt_int)6LL))))) {
if ((F->k_1020 == (((rt_int)5LL)))) {
F->x_1019 = f_nn_61((((rt_int)2LL)), F->line_1018);
} else if ((F->k_1020 == (((rt_int)7LL)))) {
F->x_1019 = f_nn_61((((rt_int)3LL)), F->line_1018);
} else {
F->x_1019 = f_nn_61((((rt_int)4LL)), F->line_1018);
}
(*(P807)rt_nil_check(F->x_1019)).name = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = F->x_1019;
goto ret_;
}
if ((F->k_1020 == (((rt_int)1LL)))) {
F->w_1021 = rt_str_copy((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1021, rt_str("TRUE", 4)) || rt_str_eq(F->w_1021, rt_str("FALSE", 5)))) {
F->x_1019 = f_nn_61((((rt_int)5LL)), F->line_1018);
if (rt_str_eq(F->w_1021, rt_str("TRUE", 4))) {
(*(P807)rt_nil_check(F->x_1019)).ival = ((rt_int)1LL);
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = F->x_1019;
goto ret_;
}
if (rt_str_eq(F->w_1021, rt_str("NIL", 3))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), F->line_1018);
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1019 = f_nn_61((((rt_int)17LL)), F->line_1018);
(*(P807)rt_nil_check(F->x_1019)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1019;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1022 = NULL;
F->tail_1023 = NULL;
F->x_1019 = f_nn_61((((rt_int)14LL)), F->line_1018);
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1024 = 1;
while (F->more_1024) {
f_append_65(&F->head_1022, &F->tail_1023, f_constructor_item_115());
F->more_1024 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P807)rt_nil_check(F->x_1019)).a = F->head_1022;
F->result_ = F->x_1019;
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

static P807 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1025 = f_cur_line_68();
F->it_1026 = NULL;
F->it_1026 = f_nn_61((((rt_int)15LL)), F->line_1025);
F->first_1027 = NULL;
F->first_1027 = f_expr_103();
F->keys_1028 = NULL;
F->ktail_1029 = NULL;
F->lab_1030 = NULL;
F->lab_1030 = f_nn_61((((rt_int)61LL)), F->line_1025);
(*(P807)rt_nil_check(F->lab_1030)).a = F->first_1027;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P807)rt_nil_check(F->lab_1030)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1028, &F->ktail_1029, F->lab_1030);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1031 = g_tpos_840;
F->more_1032 = NULL;
F->tail2_1033 = NULL;
F->ok_1034 = 0;
F->go_1035 = 1;
while ((F->go_1035 && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1036 = NULL;
F->l2_1036 = f_nn_61((((rt_int)61LL)), F->line_1025);
(*(P807)rt_nil_check(F->l2_1036)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P807)rt_nil_check(F->l2_1036)).b = f_expr_103();
}
f_append_65(&F->more_1032, &F->tail2_1033, F->l2_1036);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1034 = 1;
F->go_1035 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1035 = 0;
}
}
if (F->ok_1034) {
f_append_65(&F->keys_1028, &F->ktail_1029, F->lab_1030);
f_append_65(&F->keys_1028, &F->ktail_1029, F->more_1032);
} else {
g_tpos_840 = F->save_1031;
}
}
if (((F->keys_1028 == NULL) && ((*(P807)rt_nil_check(F->lab_1030)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1028 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P807)rt_nil_check(F->it_1026)).a = F->keys_1028;
(*(P807)rt_nil_check(F->it_1026)).b = f_expr_103();
} else {
(*(P807)rt_nil_check(F->it_1026)).b = F->first_1027;
}
F->result_ = F->it_1026;
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

static P807 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1037 = NULL;
F->tail_1038 = NULL;
F->stmts_1039 = 0;
F->after_1040 = NULL;
while ((!f_at_body_end_116())) {
F->x_1041 = NULL;
F->x_1041 = f_body_element_118();
if (((F->x_1041 != NULL) && (((((*(P807)rt_nil_check(F->x_1041)).kind == (((rt_int)40LL))) || ((*(P807)rt_nil_check(F->x_1041)).kind == (((rt_int)41LL)))) || ((*(P807)rt_nil_check(F->x_1041)).kind == (((rt_int)49LL)))) || ((*(P807)rt_nil_check(F->x_1041)).kind == (((rt_int)48LL)))))) {
if (F->stmts_1039) {
f_fail_23((*(P807)rt_nil_check(F->x_1041)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1041 != NULL) && ((*(P807)rt_nil_check(F->x_1041)).kind >= (((rt_int)42LL)))) && ((*(P807)rt_nil_check(F->x_1041)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_1039 && (F->after_1040 == NULL))) {
F->after_1040 = F->x_1041;
}
} else if (((F->x_1041 != NULL) && ((*(P807)rt_nil_check(F->x_1041)).kind != (((rt_int)33LL))))) {
if ((F->after_1040 != NULL)) {
f_fail_23((*(P807)rt_nil_check(F->after_1040)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1039 = 1;
}
f_append_65(&F->head_1037, &F->tail_1038, F->x_1041);
}
F->result_ = F->head_1037;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1042 = NULL;
F->pr_1043 = NULL;
F->pr_1043 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1042 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1042 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1042)).a = f_expr_103();
} else {
F->x_1042 = f_statement_140();
}
if ((F->pr_1043 != NULL)) {
F->p_1044 = NULL;
F->p_1044 = F->x_1042;
while ((F->p_1044 != NULL)) {
if (((*(P807)rt_nil_check(F->p_1044)).prags == NULL)) {
(*(P807)rt_nil_check(F->p_1044)).prags = F->pr_1043;
} else {
(*(P807)rt_nil_check(F->p_1044)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->pr_1043))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1044)).prags))->all)); b_; }));
}
F->p_1044 = (*(P807)rt_nil_check(F->p_1044)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1042;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1045 = f_cur_line_68();
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
F->head_1046 = NULL;
F->tail_1047 = NULL;
F->names_1048 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->names_1048 = f_id_list_91();
while ((F->names_1048 != NULL)) {
F->x_1049 = NULL;
F->x_1049 = f_nn_61((((rt_int)49LL)), F->line_1045);
(*(P807)rt_nil_check(F->x_1049)).name = (*(P807)rt_nil_check(F->names_1048)).name;
f_append_65(&F->head_1046, &F->tail_1047, F->x_1049);
F->names_1048 = (*(P807)rt_nil_check(F->names_1048)).next;
}
F->result_ = F->head_1046;
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

static P807 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1050 = f_cur_line_68();
F->is_var_1051 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1052 = NULL;
F->st_1053 = NULL;
F->init_1054 = NULL;
F->loc_1055 = NULL;
F->loc_kind_1056 = ((rt_int)0LL);
F->head_1057 = NULL;
F->tail_1058 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->names_1052 = f_id_list_91();
if (F->is_var_1051) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1053 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->loc_kind_1056 = ((rt_int)1LL);
} else {
F->loc_kind_1056 = ((rt_int)2LL);
}
F->loc_1055 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1054 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1053 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1054 = f_expr_103();
}
while ((F->names_1052 != NULL)) {
F->x_1059 = NULL;
if (F->is_var_1051) {
F->x_1059 = f_nn_61((((rt_int)40LL)), F->line_1050);
} else {
F->x_1059 = f_nn_61((((rt_int)41LL)), F->line_1050);
}
(*(P807)rt_nil_check(F->x_1059)).name = (*(P807)rt_nil_check(F->names_1052)).name;
(*(P807)rt_nil_check(F->x_1059)).a = F->st_1053;
(*(P807)rt_nil_check(F->x_1059)).b = F->init_1054;
(*(P807)rt_nil_check(F->x_1059)).c = F->loc_1055;
(*(P807)rt_nil_check(F->x_1059)).ival = F->loc_kind_1056;
f_append_65(&F->head_1057, &F->tail_1058, F->x_1059);
F->names_1052 = (*(P807)rt_nil_check(F->names_1052)).next;
}
F->result_ = F->head_1057;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1060 = NULL;
F->x_1060 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1060)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1060)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P807)rt_nil_check(F->x_1060)).a = f_p_subtype_92();
F->result_ = F->x_1060;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1061 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_1061 == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1061 = rt_add(F->depth_1061, ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1061 = rt_sub(F->depth_1061, ((rt_int)1LL));
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P807 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1062 = f_cur_line_68();
F->name_1063 = NULL;
F->params_1064 = NULL;
F->x_1065 = NULL;
F->tts_1066 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->name_1063 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1066 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1064 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->x_1065 = f_nn_61((((rt_int)44LL)), F->line_1062);
(*(P807)rt_nil_check(F->x_1065)).d = F->params_1064;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1065)).b = f_formal_params_126();
}
} else {
F->x_1065 = f_nn_61((((rt_int)43LL)), F->line_1062);
(*(P807)rt_nil_check(F->x_1065)).b = F->params_1064;
}
(*(P807)rt_nil_check(F->x_1065)).name = F->name_1063;
(*(P807)rt_nil_check(F->x_1065)).e = F->tts_1066;
(*(P807)rt_nil_check(F->x_1065)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1065;
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

static P807 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1067 = NULL;
F->tail_1068 = NULL;
F->more_1069 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1069) {
F->mode_1070 = (((rt_int)1LL));
F->names_1071 = NULL;
F->ntail_1072 = NULL;
F->st_1073 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1070 = f_mode_of_125(&(((P800)rt_nil_check((*(P802)rt_nil_check((((P804)rt_nil_check(g_toks_838))->all).p[(rt_index(g_tpos_840, (((P804)rt_nil_check(g_toks_838))->all).lo, (((P804)rt_nil_check(g_toks_838))->all).hi) - (((P804)rt_nil_check(g_toks_838))->all).lo)])).s))->all));
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
}
f_append_65(&F->names_1071, &F->ntail_1072, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P800)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P800)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
f_append_65(&F->names_1071, &F->ntail_1072, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1073 = f_p_subtype_92();
while ((F->names_1071 != NULL)) {
F->p_1074 = NULL;
F->p_1074 = f_nn_61((((rt_int)52LL)), (*(P807)rt_nil_check(F->names_1071)).line);
(*(P807)rt_nil_check(F->p_1074)).name = (*(P807)rt_nil_check(F->names_1071)).name;
(*(P807)rt_nil_check(F->p_1074)).ival = F->mode_1070;
(*(P807)rt_nil_check(F->p_1074)).a = F->st_1073;
f_append_65(&F->head_1067, &F->tail_1068, F->p_1074);
F->names_1071 = (*(P807)rt_nil_check(F->names_1071)).next;
}
F->more_1069 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1067;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P807 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1075 = NULL;
F->tail_1076 = NULL;
F->more_1077 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P807)rt_nil_check(F->owner_127)).flag = rt_add((*(P807)rt_nil_check(F->owner_127)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_1077) {
F->ro_1078 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1079 = NULL;
F->x_1079 = f_name_node_90();
if (F->ro_1078) {
(*(P807)rt_nil_check(F->x_1079)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1075, &F->tail_1076, F->x_1079);
F->more_1077 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->owner_127)).d = F->head_1075;
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

static P800 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P800)rt_nil_check((*(P802)rt_nil_check((((P804)rt_nil_check(g_toks_838))->all).p[(rt_index(g_tpos_840, (((P804)rt_nil_check(g_toks_838))->all).lo, (((P804)rt_nil_check(g_toks_838))->all).hi) - (((P804)rt_nil_check(g_toks_838))->all).lo)])).s))->all))))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(rt_sub(g_tpos_840, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P807 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1080 = f_cur_line_68();
F->x_1081 = NULL;
F->is_abn_1082 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1083 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_1083) {
F->x_1081 = f_nn_61((((rt_int)46LL)), F->line_1080);
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1081 = f_nn_61((((rt_int)45LL)), F->line_1080);
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if (F->is_abn_1082) {
(*(P807)rt_nil_check(F->x_1081)).flag = ((rt_int)1LL);
}
(*(P807)rt_nil_check(F->x_1081)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1081)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1081)).a = f_formal_params_126();
}
if (F->is_func_1083) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P807)rt_nil_check(F->x_1081)).b = f_p_subtype_92();
}
F->dummy_1084 = f_imports_list_128(F->x_1081);
if (((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P807)rt_nil_check(F->x_1081)).prags == NULL)) {
(*(P807)rt_nil_check(F->x_1081)).prags = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P807)rt_nil_check(F->x_1081)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1081)).prags))->all), (((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P807)rt_nil_check(F->x_1081)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_1083) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P800)rt_nil_check(f_definable_name_131()))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1081)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1081)).name))->all)); b_; }));
}
F->result_ = F->x_1081;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1085 = NULL;
F->x_1085 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1085)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1085)).b = f_formal_params_126();
}
F->dummy_1086 = f_imports_list_128(F->x_1085);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P807)rt_nil_check(F->x_1085)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P807)rt_nil_check(F->x_1085)).ival = ((rt_int)0LL);
} else {
F->head_1087 = NULL;
F->tail_1088 = NULL;
F->more_1089 = 1;
while (F->more_1089) {
F->n_1090 = NULL;
F->n_1090 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P807)rt_nil_check(F->n_1090)).ival = ((rt_int)1LL);
}
(*(P807)rt_nil_check(F->n_1090)).name = f_definable_name_131();
f_append_65(&F->head_1087, &F->tail_1088, F->n_1090);
F->more_1089 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->x_1085)).a = F->head_1087;
(*(P807)rt_nil_check(F->x_1085)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P807)rt_nil_check(F->x_1085)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P800)rt_nil_check(f_expect_id_89()))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1085)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1085;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1091 = NULL;
F->tail_1092 = NULL;
F->more_1093 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1093) {
f_append_65(&F->head_1091, &F->tail_1092, f_name_node_90());
F->more_1093 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1091;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1094 = NULL;
F->x_1094 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1095 = NULL;
F->tail_1096 = NULL;
F->more_1097 = 1;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
while (F->more_1097) {
F->names_1098 = NULL;
F->names_1098 = f_id_list_91();
F->kind_1099 = ((rt_int)6LL);
F->st_1100 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1099 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1099 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1099 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1099 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1099 = ((rt_int)5LL);
} else {
F->st_1100 = f_p_subtype_92();
}
if (((F->kind_1099 <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P807)rt_nil_check(F->x_1094)).e = f_actual_params_94();
} else if (((F->kind_1099 >= ((rt_int)3LL)) && (F->kind_1099 <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1100 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
}
if (((F->kind_1099 == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1100 = f_p_subtype_92();
}
}
while ((F->names_1098 != NULL)) {
F->p_1101 = NULL;
F->p_1101 = f_nn_61((((rt_int)52LL)), (*(P807)rt_nil_check(F->names_1098)).line);
(*(P807)rt_nil_check(F->p_1101)).name = (*(P807)rt_nil_check(F->names_1098)).name;
(*(P807)rt_nil_check(F->p_1101)).ival = F->kind_1099;
(*(P807)rt_nil_check(F->p_1101)).a = F->st_1100;
f_append_65(&F->head_1095, &F->tail_1096, F->p_1101);
F->names_1098 = (*(P807)rt_nil_check(F->names_1098)).next;
}
F->more_1097 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1097 = 1;
while (F->more_1097) {
F->nm_1102 = NULL;
F->nm_1102 = f_definable_name_131();
F->st_1103 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1103 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1103 = f_p_subtype_92();
}
F->more_1097 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P807)rt_nil_check(F->x_1094)).a = F->head_1095;
(*(P807)rt_nil_check(F->x_1094)).b = f_declaration_119();
(*(P807)rt_nil_check(F->x_1094)).name = (*(P807)rt_nil_check((*(P807)rt_nil_check(F->x_1094)).b)).name;
F->result_ = F->x_1094;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1104 = NULL;
F->x_1104 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1104)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1104)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1104)).a = f_formal_params_126();
}
F->dummy_1105 = f_imports_list_128(F->x_1104);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P807)rt_nil_check(F->x_1104)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P800)rt_nil_check(f_expect_id_89()))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1104)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1104)).name))->all)); b_; }));
}
F->result_ = F->x_1104;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1106 = NULL;
F->x_1106 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P807)rt_nil_check(F->x_1106)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1107 = NULL;
F->tail_1108 = NULL;
F->more_1109 = 1;
while (F->more_1109) {
F->n_1110 = NULL;
F->n_1110 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P807)rt_nil_check(F->n_1110)).ival = ((rt_int)1LL);
}
(*(P807)rt_nil_check(F->n_1110)).name = f_definable_name_131();
f_append_65(&F->head_1107, &F->tail_1108, F->n_1110);
F->more_1109 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->x_1106)).a = F->head_1107;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P807)rt_nil_check(F->x_1106)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P807)rt_nil_check(F->x_1106)).flag = rt_add((*(P807)rt_nil_check(F->x_1106)).flag, ((rt_int)2LL));
}
(*(P807)rt_nil_check(F->x_1106)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1106)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1111 = NULL;
F->tail_1112 = NULL;
F->more_1113 = 1;
while (F->more_1113) {
F->n_1114 = NULL;
F->n_1114 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1115 = NULL;
F->tgt_1115 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P807)rt_nil_check(F->n_1114)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P807)rt_nil_check(F->tgt_1115)).name = f_definable_name_131();
(*(P807)rt_nil_check(F->n_1114)).a = F->tgt_1115;
f_append_65(&F->head_1111, &F->tail_1112, F->n_1114);
F->more_1113 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P807)rt_nil_check(F->x_1106)).c = F->head_1111;
}
F->result_ = F->x_1106;
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

static P807 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1116 = NULL;
F->ltail_1117 = NULL;
F->match_1118 = NULL;
F->s_1119 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P800)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1116, &F->ltail_1117, f_name_node_90());
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P800)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1118 = f_expect_id_89();
}
F->s_1119 = f_unlabeled_statement_141();
if ((F->match_1118 != NULL)) {
if (((((((((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)22LL))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)23LL)))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)24LL)))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)25LL)))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)26LL)))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)35LL)))) && ((*(P807)rt_nil_check(F->s_1119)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P807)rt_nil_check(F->s_1119)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P800)rt_nil_check(f_expect_id_89()))->all), (((P800)rt_nil_check(F->match_1118))->all)))) {
f_fail_23((*(P807)rt_nil_check(F->s_1119)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P800)rt_nil_check(F->match_1118))->all)); b_; }));
}
(*(P807)rt_nil_check(F->s_1119)).tag = F->match_1118;
}
(*(P807)rt_nil_check(F->s_1119)).labels = F->labels_1116;
F->result_ = F->s_1119;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1120 = f_cur_line_68();
F->x_1121 = NULL;
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
F->x_1121 = f_nn_61((((rt_int)25LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)27LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).name = f_expect_id_89();
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)28LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P807)rt_nil_check(F->x_1121)).a = f_expr_103();
}
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)29LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).name = f_expect_id_89();
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)30LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).name = f_expect_id_89();
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), F->line_1120);
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)34LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1121)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1121)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P807)rt_nil_check(F->x_1121)).a = f_postfix_113();
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1122 = NULL;
F->tail_1123 = NULL;
F->x_1121 = f_nn_61((((rt_int)35LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1124 = NULL;
F->itail_1125 = NULL;
F->more_1126 = 1;
while (F->more_1126) {
f_append_65(&F->invs_1124, &F->itail_1125, f_postfix_113());
F->more_1126 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1122, &F->tail_1123, f_arm_145(F->invs_1124, f_body_117(), F->line_1120));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P807)rt_nil_check(F->x_1121)).a = F->head_1122;
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)36LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P807)rt_nil_check(F->x_1121)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1121;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)32LL)), F->line_1120);
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1121)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P800)rt_nil_check((*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P807)rt_nil_check(F->x_1121)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P807)rt_nil_check(F->x_1121)).c = f_expr_103();
}
F->result_ = F->x_1121;
goto ret_;
}
{
F->target_1127 = NULL;
F->target_1127 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1121 = f_nn_61((((rt_int)20LL)), F->line_1120);
(*(P807)rt_nil_check(F->x_1121)).a = F->target_1127;
(*(P807)rt_nil_check(F->x_1121)).b = f_expr_103();
} else {
F->x_1121 = f_nn_61((((rt_int)21LL)), F->line_1120);
(*(P807)rt_nil_check(F->x_1121)).a = F->target_1127;
}
}
F->result_ = F->x_1121;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_arm_145(P807 cond_142, P807 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1128 = NULL;
F->x_1128 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P807)rt_nil_check(F->x_1128)).a = F->cond_142;
(*(P807)rt_nil_check(F->x_1128)).b = F->b_143;
F->result_ = F->x_1128;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1129 = NULL;
F->x_1129 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1130 = NULL;
F->tail_1131 = NULL;
F->cond_1132 = NULL;
F->go_1133 = 1;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
F->cond_1132 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1130, &F->tail_1131, f_arm_145(F->cond_1132, f_body_117(), (*(P807)rt_nil_check(F->x_1129)).line));
while (F->go_1133) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1132 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1130, &F->tail_1131, f_arm_145(F->cond_1132, f_body_117(), (*(P807)rt_nil_check(F->x_1129)).line));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P807)rt_nil_check(F->x_1129)).flag = ((rt_int)1LL);
(*(P807)rt_nil_check(F->x_1129)).b = f_body_117();
} else {
F->go_1133 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P807)rt_nil_check(F->x_1129)).a = F->head_1130;
F->result_ = F->x_1129;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1134 = NULL;
F->x_1134 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1135 = NULL;
F->tail_1136 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1134)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1137 = NULL;
F->ltail_1138 = NULL;
F->more_1139 = 1;
while (F->more_1139) {
F->l_1140 = NULL;
F->l_1140 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P807)rt_nil_check(F->l_1140)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P807)rt_nil_check(F->l_1140)).b = f_expr_103();
}
f_append_65(&F->labs_1137, &F->ltail_1138, F->l_1140);
F->more_1139 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1135, &F->tail_1136, f_arm_145(F->labs_1137, f_body_117(), (*(P807)rt_nil_check(F->x_1134)).line));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P807)rt_nil_check(F->x_1134)).flag = ((rt_int)1LL);
(*(P807)rt_nil_check(F->x_1134)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P807)rt_nil_check(F->x_1134)).b = F->head_1135;
F->result_ = F->x_1134;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1141 = NULL;
F->x_1141 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P807)rt_nil_check(F->x_1141)).flag = ((rt_int)1LL);
(*(P807)rt_nil_check(F->x_1141)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P807)rt_nil_check(F->x_1141)).ival = ((rt_int)1LL);
}
(*(P807)rt_nil_check(F->x_1141)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P807)rt_nil_check(F->x_1141)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P807)rt_nil_check(F->x_1141)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1141;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1142 = NULL;
F->x_1142 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1143 = NULL;
F->tail_1144 = NULL;
g_tpos_840 = rt_add(g_tpos_840, ((rt_int)1LL));
(*(P807)rt_nil_check(F->x_1142)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1145 = NULL;
F->h_1145 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P807)rt_nil_check(F->h_1145)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P807)rt_nil_check(F->h_1145)).b = f_body_117();
f_append_65(&F->head_1143, &F->tail_1144, F->h_1145);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P807)rt_nil_check(F->x_1142)).flag = ((rt_int)1LL);
(*(P807)rt_nil_check(F->x_1142)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P807)rt_nil_check(F->x_1142)).b = F->head_1143;
F->result_ = F->x_1142;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1146 = NULL;
F->tail_1147 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1148 = NULL;
F->pr_1148 = (*(P802)rt_nil_check(({ A806 b_ = (((P804)rt_nil_check(g_toks_838))->all); b_.p[(rt_index(g_tpos_840, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1149 = NULL;
F->u_1149 = f_capsule_decl_133();
(*(P807)rt_nil_check(F->u_1149)).prags = F->pr_1148;
f_append_65(&F->head_1146, &F->tail_1147, F->u_1149);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1146;
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
F->h_1150 = ((rt_int)0LL);
{ rt_int lo1152 = ((rt_int)1LL), hi1153 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1154 = lo1152; it1154 <= hi1153; it1154++) {
F->i_1151 = it1154;
F->h_1150 = rt_mod(rt_add(rt_mul(F->h_1150, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_151), F->i_1151)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1155 = NULL;
F->y_1155 = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_844 != NULL)) {
while ((F->y_1155 != NULL)) {
if ((((*(P817)rt_nil_check(F->y_1155)).depth >= g_gdepth_876) && rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1155)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1155;
goto ret_;
}
F->y_1155 = (*(P817)rt_nil_check(F->y_1155)).chain;
}
F->y_1155 = ({ A823 b_ = (((P821)rt_nil_check(g_genv_844))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1155 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1155)).name))->all), (*F->name_153))) {
F->result_ = F->y_1155;
goto ret_;
}
F->y_1155 = (*(P817)rt_nil_check(F->y_1155)).chain;
}
F->y_1155 = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1155 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1155)).name))->all), (*F->name_153))) {
F->result_ = F->y_1155;
goto ret_;
}
F->y_1155 = (*(P817)rt_nil_check(F->y_1155)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_lookup_decl_156(P807 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1156 = NULL;
F->y_1156 = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(f_hash_152(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1156 != NULL)) {
if (((*(P817)rt_nil_check(F->y_1156)).decl == F->d_155)) {
F->result_ = F->y_1156;
goto ret_;
}
F->y_1156 = (*(P817)rt_nil_check(F->y_1156)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P817 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1157 = f_hash_152(&(((P800)rt_nil_check((*(P817)rt_nil_check(F->y_157)).name))->all));
F->z_1158 = NULL;
F->z_1158 = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(F->h_1157, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1158 != NULL)) {
if (((((*(P817)rt_nil_check(F->z_1158)).depth == g_depth_846) && rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->z_1158)).name))->all), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1158)) && ((*(P817)rt_nil_check(F->z_1158)).kind == (*(P817)rt_nil_check(F->y_157)).kind)) && (!(f_same_signature_167((*(P817)rt_nil_check(F->y_157)).params, (*(P817)rt_nil_check(F->z_1158)).params) && f_same_tt_164((*(P817)rt_nil_check(F->y_157)).decl, (*(P817)rt_nil_check(F->z_1158)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1158 = (*(P817)rt_nil_check(F->z_1158)).chain;
}
(*(P817)rt_nil_check(F->y_157)).depth = g_depth_846;
(*(P817)rt_nil_check(F->y_157)).chain = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(F->h_1157, b_.lo, b_.hi) - b_.lo)]; });
(((P821)rt_nil_check(g_table_843))->all).p[(rt_index(F->h_1157, (((P821)rt_nil_check(g_table_843))->all).lo, (((P821)rt_nil_check(g_table_843))->all).hi) - (((P821)rt_nil_check(g_table_843))->all).lo)] = F->y_157;
(*(P817)rt_nil_check(F->y_157)).stack = g_scope_stack_847;
g_scope_stack_847 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P817 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = ((((*(P817)rt_nil_check(F->y_160)).kind == (((rt_int)3LL))) || ((*(P817)rt_nil_check(F->y_160)).kind == (((rt_int)4LL)))) || ((*(P817)rt_nil_check(F->y_160)).kind == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P807 a_162, P807 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1159 = NULL;
F->y_1160 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1159 = (*(P807)rt_nil_check(F->a_162)).e;
F->y_1160 = (*(P807)rt_nil_check(F->b_163)).e;
while (((F->x_1159 != NULL) && (F->y_1160 != NULL))) {
if ((!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1159)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->y_1160)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1159 = (*(P807)rt_nil_check(F->x_1159)).next;
F->y_1160 = (*(P807)rt_nil_check(F->y_1160)).next;
}
F->result_ = ((F->x_1159 == NULL) && (F->y_1160 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P819 a_165, P819 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1161 = NULL;
F->x_1161 = F->a_165;
F->y_1162 = NULL;
F->y_1162 = F->b_166;
while (((F->x_1161 != NULL) && (F->y_1162 != NULL))) {
if ((!f_same_212((*(P819)rt_nil_check(F->x_1161)).t, (*(P819)rt_nil_check(F->y_1162)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1161 = (*(P819)rt_nil_check(F->x_1161)).next;
F->y_1162 = (*(P819)rt_nil_check(F->y_1162)).next;
}
F->result_ = ((F->x_1161 == NULL) && (F->y_1162 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_846 = rt_add(g_depth_846, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_847 != NULL) && ((*(P817)rt_nil_check(g_scope_stack_847)).depth == g_depth_846))) {
(((P821)rt_nil_check(g_table_843))->all).p[(rt_index(f_hash_152(&(((P800)rt_nil_check((*(P817)rt_nil_check(g_scope_stack_847)).name))->all)), (((P821)rt_nil_check(g_table_843))->all).lo, (((P821)rt_nil_check(g_table_843))->all).hi) - (((P821)rt_nil_check(g_table_843))->all).lo)] = (*(P817)rt_nil_check(g_scope_stack_847)).chain;
g_scope_stack_847 = (*(P817)rt_nil_check(g_scope_stack_847)).stack;
}
g_depth_846 = rt_sub(g_depth_846, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P817 f_new_sym_172(rt_int kind_170, P800 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1163 = NULL;
{ R818 *cell1164 = rt_alloc(sizeof(R818));
(*cell1164).name = NULL;
(*cell1164).t = NULL;
(*cell1164).c = NULL;
(*cell1164).access = NULL;
(*cell1164).cname = NULL;
(*cell1164).st = NULL;
(*cell1164).decl = NULL;
(*cell1164).params = NULL;
(*cell1164).result = NULL;
(*cell1164).members = NULL;
(*cell1164).mnext = NULL;
(*cell1164).binds = NULL;
(*cell1164).insts = NULL;
(*cell1164).env = NULL;
(*cell1164).chain = NULL;
(*cell1164).stack = NULL;
(*cell1164).owner = NULL;
(*cell1164).gctx = NULL;
(*cell1164).mv = NULL;
(*cell1164).reqs = NULL;
(*cell1164).home = NULL;
F->y_1163 = cell1164;
}
(*(P817)rt_nil_check(F->y_1163)).kind = F->kind_170;
(*(P817)rt_nil_check(F->y_1163)).name = F->name_171;
F->result_ = F->y_1163;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1165 = NULL;
{ R814 *cell1166 = rt_alloc(sizeof(R814));
(*cell1166).name = NULL;
(*cell1166).lits = NULL;
(*cell1166).elem = NULL;
(*cell1166).idx = NULL;
(*cell1166).idx2 = NULL;
(*cell1166).elemcons = NULL;
(*cell1166).elemst = NULL;
(*cell1166).under = NULL;
(*cell1166).tparams = NULL;
(*cell1166).ocap = NULL;
(*cell1166).fields = NULL;
(*cell1166).target = NULL;
(*cell1166).decl = NULL;
(*cell1166).cname = NULL;
(*cell1166).initp = NULL;
(*cell1166).finalp = NULL;
(*cell1166).tpsyms = NULL;
(*cell1166).gen = NULL;
(*cell1166).gbinds = NULL;
(*cell1166).next = NULL;
(*cell1166).idxs = NULL;
F->t_1165 = cell1166;
}
(*(P813)rt_nil_check(F->t_1165)).kind = F->kind_173;
F->result_ = F->t_1165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P809 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1167 = NULL;
{ R810 *cell1168 = rt_alloc(sizeof(R810));
(*cell1168).lo = NULL;
(*cell1168).hi = NULL;
(*cell1168).lo2 = NULL;
(*cell1168).hi2 = NULL;
(*cell1168).slen = NULL;
(*cell1168).args = NULL;
(*cell1168).prec = NULL;
(*cell1168).bnds = NULL;
F->c_1167 = cell1168;
}
F->result_ = F->c_1167;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P813 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && ((((*(P813)rt_nil_check(F->t_176)).kind == (((rt_int)1LL))) || ((*(P813)rt_nil_check(F->t_176)).kind == (((rt_int)3LL)))) || ((*(P813)rt_nil_check(F->t_176)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P813 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if (((*(P813)rt_nil_check(F->t_178)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P809 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1169 = NULL;
F->p_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P809)rt_nil_check(F->c_180)).dyn) || ((*(P809)rt_nil_check(F->c_180)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1171 = ((rt_int)1LL), hi1172 = rt_sub(g_cur_level_860, (*(P809)rt_nil_check(F->c_180)).lvl);
for (rt_int it1173 = lo1171; it1173 <= hi1172; it1173++) {
F->i_1170 = it1173;
F->p_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->p_1169))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->p_1169))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P809 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P809 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P813 t_187, P809 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P809)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_187)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_187)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P813 t_190, P809 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P809)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_190)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_190)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P813)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
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
if ((!g_in_func_859)) {
F->g_1174 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1174), rt_str(";", 1)); b_; }));
g_st_field_865 = f_mk_3(&F->g_1174);
F->result_ = F->g_1174;
goto ret_;
}
{
F->f_1175 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1175), rt_str(";", 1)); b_; }));
g_st_field_865 = f_mk_3(&F->f_1175);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1175);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P809 f_copy_cons_197(P809 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1176 = NULL;
{ R810 *cell1177 = rt_alloc(sizeof(R810));
(*cell1177).lo = NULL;
(*cell1177).hi = NULL;
(*cell1177).lo2 = NULL;
(*cell1177).hi2 = NULL;
(*cell1177).slen = NULL;
(*cell1177).args = NULL;
(*cell1177).prec = NULL;
(*cell1177).bnds = NULL;
F->r_1176 = cell1177;
}
(*(P809)rt_nil_check(F->r_1176)).lo = (*(P809)rt_nil_check(F->c_196)).lo;
(*(P809)rt_nil_check(F->r_1176)).hi = (*(P809)rt_nil_check(F->c_196)).hi;
(*(P809)rt_nil_check(F->r_1176)).lo2 = (*(P809)rt_nil_check(F->c_196)).lo2;
(*(P809)rt_nil_check(F->r_1176)).hi2 = (*(P809)rt_nil_check(F->c_196)).hi2;
(*(P809)rt_nil_check(F->r_1176)).slen = (*(P809)rt_nil_check(F->c_196)).slen;
(*(P809)rt_nil_check(F->r_1176)).mlo = (*(P809)rt_nil_check(F->c_196)).mlo;
(*(P809)rt_nil_check(F->r_1176)).mhi = (*(P809)rt_nil_check(F->c_196)).mhi;
(*(P809)rt_nil_check(F->r_1176)).hasm = (*(P809)rt_nil_check(F->c_196)).hasm;
(*(P809)rt_nil_check(F->r_1176)).args = (*(P809)rt_nil_check(F->c_196)).args;
(*(P809)rt_nil_check(F->r_1176)).dyn = (*(P809)rt_nil_check(F->c_196)).dyn;
(*(P809)rt_nil_check(F->r_1176)).lvl = (*(P809)rt_nil_check(F->c_196)).lvl;
(*(P809)rt_nil_check(F->r_1176)).prec = (*(P809)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1176;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P809 f_freeze_200(P809 c_198, P813 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1178 = NULL;
F->saved_field_1179 = NULL;
F->saved_field_1179 = g_st_field_865;
if ((((((F->c_198 == NULL) || ((*(P809)rt_nil_check(F->c_198)).lo == NULL)) || (*(P809)rt_nil_check(F->c_198)).hasm) || (*(P809)rt_nil_check(F->c_198)).dyn) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1178 = f_copy_cons_197(F->c_198);
{
F->ct_1180 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1181 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1180));
F->lf_1182 = rt_str_copy((((P800)rt_nil_check(g_st_field_865))->all));
F->ha_1183 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1180));
F->hf_1184 = rt_str_copy((((P800)rt_nil_check(g_st_field_865))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1181, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1183), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (g_in_func_859) {
(*(P809)rt_nil_check(F->r_1178)).lo = f_mk_3(&F->lf_1182);
(*(P809)rt_nil_check(F->r_1178)).hi = f_mk_3(&F->hf_1184);
(*(P809)rt_nil_check(F->r_1178)).dyn = 1;
(*(P809)rt_nil_check(F->r_1178)).lvl = g_cur_level_860;
} else {
(*(P809)rt_nil_check(F->r_1178)).lo = f_mk_3(&F->la_1181);
(*(P809)rt_nil_check(F->r_1178)).hi = f_mk_3(&F->ha_1183);
(*(P809)rt_nil_check(F->r_1178)).dyn = 0;
}
}
g_st_field_865 = F->saved_field_1179;
F->result_ = F->r_1178;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P813 t_201, P809 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_435(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_201)).kind != (((rt_int)3LL))) && (*(P809)rt_nil_check(F->c_202)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7((*(P809)rt_nil_check(F->c_202)).mlo)), rt_str(", ", 2)), f_itos_7((*(P809)rt_nil_check(F->c_202)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P809)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_201)).kind == (((rt_int)3LL)))) {
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

static int f_same_lits_207(P807 a_205, P807 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1185 = NULL;
F->x_1185 = F->a_205;
F->y_1186 = NULL;
F->y_1186 = F->b_206;
while (((F->x_1185 != NULL) && (F->y_1186 != NULL))) {
if ((!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->x_1185)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->y_1186)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1185 = (*(P807)rt_nil_check(F->x_1185)).next;
F->y_1186 = (*(P807)rt_nil_check(F->y_1186)).next;
}
F->result_ = ((F->x_1185 == NULL) && (F->y_1186 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_str_elem_209(P813 t_208) {
  struct f_str_elem_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if (((*(P813)rt_nil_check(F->t_208)).elem == NULL)) {
F->result_ = g_ty_ascii_889;
goto ret_;
}
F->result_ = (*(P813)rt_nil_check(F->t_208)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_212(P813 a_210, P813 b_211) {
  struct f_same_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
if ((F->a_210 == F->b_211)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_210 == NULL) || (F->b_211 == NULL)) || ((*(P813)rt_nil_check(F->a_210)).kind != (*(P813)rt_nil_check(F->b_211)).kind))) {
F->result_ = 0;
goto ret_;
}
if (((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)5LL)))) {
F->result_ = f_same_212(f_str_elem_209(F->a_210), f_str_elem_209(F->b_211));
goto ret_;
}
if (((((((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)1LL))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)2LL)))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)3LL)))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)9LL)))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P813)rt_nil_check(F->a_210)).lits, (*(P813)rt_nil_check(F->b_211)).lits);
goto ret_;
}
if (((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)6LL)))) {
F->x_1187 = NULL;
F->x_1187 = (*(P813)rt_nil_check(F->a_210)).idxs;
F->y_1188 = NULL;
F->y_1188 = (*(P813)rt_nil_check(F->b_211)).idxs;
while (((F->x_1187 != NULL) && (F->y_1188 != NULL))) {
if ((!f_same_212((*(P828)rt_nil_check(F->x_1187)).t, (*(P828)rt_nil_check(F->y_1188)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1187 = (*(P828)rt_nil_check(F->x_1187)).next;
F->y_1188 = (*(P828)rt_nil_check(F->y_1188)).next;
}
F->result_ = (((F->x_1187 == NULL) && (F->y_1188 == NULL)) && f_same_212((*(P813)rt_nil_check(F->a_210)).elem, (*(P813)rt_nil_check(F->b_211)).elem));
goto ret_;
}
if ((((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)16LL))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_212((*(P813)rt_nil_check(F->a_210)).elem, (*(P813)rt_nil_check(F->b_211)).elem);
goto ret_;
}
if ((((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->a_210)).kind == (((rt_int)17LL))))) {
F->f_1189 = NULL;
F->f_1189 = (*(P813)rt_nil_check(F->a_210)).fields;
F->g_1190 = NULL;
F->g_1190 = (*(P813)rt_nil_check(F->b_211)).fields;
while (((F->f_1189 != NULL) && (F->g_1190 != NULL))) {
if (((!rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1189)).name))->all), (((P800)rt_nil_check((*(P815)rt_nil_check(F->g_1190)).name))->all))) || (!f_same_212((*(P815)rt_nil_check(F->f_1189)).t, (*(P815)rt_nil_check(F->g_1190)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1189 = (*(P815)rt_nil_check(F->f_1189)).next;
F->g_1190 = (*(P815)rt_nil_check(F->g_1190)).next;
}
F->result_ = ((F->f_1189 == NULL) && (F->g_1190 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_base_of_214(P813 t_213) {
  struct f_base_of_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if ((((F->t_213 != NULL) && ((*(P813)rt_nil_check(F->t_213)).kind == (((rt_int)15LL)))) && ((*(P813)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_base_of_214((*(P813)rt_nil_check(F->t_213)).under);
goto ret_;
}
F->result_ = F->t_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P809 f_base_cons_217(P813 t_215, P809 c_216) {
  struct f_base_cons_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
F->c_216 = c_216;
if (((((F->t_215 != NULL) && ((*(P813)rt_nil_check(F->t_215)).kind == (((rt_int)15LL)))) && ((*(P813)rt_nil_check(F->t_215)).tparams == NULL)) && ((*(P813)rt_nil_check(F->t_215)).elemcons != NULL))) {
F->result_ = f_base_cons_217((*(P813)rt_nil_check(F->t_215)).under, (*(P813)rt_nil_check(F->t_215)).elemcons);
goto ret_;
}
F->result_ = F->c_216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_219(P813 t_218) {
  struct f_kind_name_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
{ rt_int sel1191 = (*(P813)rt_nil_check(F->t_218)).kind;
if (0 || (sel1191 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1191 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_218)).name))->all));
goto ret_;
} else if (0 || (sel1191 == (((rt_int)11LL)))) {
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

static void f_check_type_223(P813 got_220, P813 want_221, rt_int line_222) {
  struct f_check_type_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_220 = got_220;
F->want_221 = want_221;
F->line_222 = line_222;
if ((F->want_221 == NULL)) {
goto ret_;
}
if ((((*(P813)rt_nil_check(F->got_220)).kind == (((rt_int)11LL))) && ((*(P813)rt_nil_check(F->want_221)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_212(F->got_220, F->want_221))) {
f_fail_23(F->line_222, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_219(F->got_220)), rt_str(" where ", 7)), f_kind_name_219(F->want_221)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_225(P813 t_224) {
  struct f_ctype_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
{ rt_int sel1192 = (*(P813)rt_nil_check(F->t_224)).kind;
if (0 || (sel1192 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)2LL))) || (sel1192 == (((rt_int)4LL))) || (sel1192 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1192 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P813)rt_nil_check(F->t_224)).cname == NULL)) {
f_declare_ctype_231(F->t_224);
} else if ((((((*(P813)rt_nil_check(F->t_224)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->t_224)).kind == (((rt_int)17LL)))) && (*(P813)rt_nil_check(F->t_224)).forward) && (!(*(P813)rt_nil_check(F->t_224)).defined))) {
(*(P813)rt_nil_check(F->t_224)).defined = 1;
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_224)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_224)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_224)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_227(P813 t_226) {
  struct f_struct_body_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
if (((*(P813)rt_nil_check(F->t_226)).kind == (((rt_int)17LL)))) {
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

static rstr f_field_decls_229(P813 t_228) {
  struct f_field_decls_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->f_1193 = NULL;
F->f_1193 = (*(P813)rt_nil_check(F->t_228)).fields;
F->s_1194 = NULL;
F->s_1194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1193 != NULL)) {
F->s_1194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->s_1194))->all), f_ctype_225((*(P815)rt_nil_check(F->f_1193)).t)), rt_str(" ", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1193)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1193 = (*(P815)rt_nil_check(F->f_1193)).next;
}
F->result_ = (((P800)rt_nil_check(F->s_1194))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_231(P813 t_230) {
  struct f_declare_ctype_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_230 = t_230;
F->u_1195 = NULL;
F->u_1195 = g_all_types_848;
if ((((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)8LL))) && ((*(P813)rt_nil_check(F->t_230)).target == NULL))) {
f_finish_ptr_404(F->t_230);
if (((*(P813)rt_nil_check(F->t_230)).cname != NULL)) {
goto ret_;
}
}
if (((*(P813)rt_nil_check(F->t_230)).kind != (((rt_int)8LL)))) {
while ((F->u_1195 != NULL)) {
if ((((*(P813)rt_nil_check(F->u_1195)).kind == (*(P813)rt_nil_check(F->t_230)).kind) && f_same_212(F->u_1195, F->t_230))) {
(*(P813)rt_nil_check(F->t_230)).cname = (*(P813)rt_nil_check(F->u_1195)).cname;
goto ret_;
}
F->u_1195 = (*(P813)rt_nil_check(F->u_1195)).next;
}
}
if ((((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_230)).tparams == NULL))) {
(*(P813)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225((*(P813)rt_nil_check(F->t_230)).under); b_; }));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)6LL)))) {
(*(P813)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)15LL)))) {
(*(P813)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)17LL))))) {
(*(P813)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P813)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P813)rt_nil_check(F->t_230)).next = g_all_types_848;
g_all_types_848 = F->t_230;
if (((((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)8LL))) && ((*(P813)rt_nil_check(F->t_230)).decl != NULL)) && ((*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_230)).decl)).b != NULL))) {
F->p_1196 = NULL;
F->p_1196 = (*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_230)).decl)).b;
F->fs_1197 = NULL;
F->fs_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1198 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1196 != NULL)) {
F->pc_1199 = NULL;
F->fs_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->fs_1197))->all), rt_str(" ", 1)), f_ctype_225(f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1196)).a, &F->pc_1199))), rt_str(" p_", 3)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1196)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1196 = (*(P807)rt_nil_check(F->p_1196)).next;
}
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1198), rt_str(" *", 2)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1198), rt_str(" {", 2)), (((P800)rt_nil_check(F->fs_1197))->all)), rt_str(" ", 1)), f_ctype_225((*(P813)rt_nil_check(F->t_230)).target)), rt_str(" all; };", 8)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)8LL)))) {
F->target_1200 = NULL;
F->target_1200 = (*(P813)rt_nil_check(F->t_230)).target;
if ((((*(P813)rt_nil_check(F->target_1200)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->target_1200)).kind == (((rt_int)17LL))))) {
if (((*(P813)rt_nil_check(F->target_1200)).cname == NULL)) {
(*(P813)rt_nil_check(F->target_1200)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P813)rt_nil_check(F->target_1200)).next = g_all_types_848;
g_all_types_848 = F->target_1200;
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P800)rt_nil_check((*(P813)rt_nil_check(F->target_1200)).cname))->all)), rt_str(" ", 1)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->target_1200)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P813)rt_nil_check(F->target_1200)).forward = 1;
}
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P800)rt_nil_check((*(P813)rt_nil_check(F->target_1200)).cname))->all)), rt_str(" *", 2)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_225(F->target_1200)), rt_str(" *", 2)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if (((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_225((*(P813)rt_nil_check(F->t_230)).elem)), rt_str(" *p;", 4)), f_more_dims_237(F->t_230)), rt_str(" };", 3)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_230)).kind == (((rt_int)15LL)))) {
F->p_1201 = NULL;
F->p_1201 = (*(P813)rt_nil_check(F->t_230)).tparams;
F->fs_1202 = NULL;
F->fs_1202 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1201 != NULL)) {
F->fs_1202 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->fs_1202))->all), f_ctype_225(f_tparam_type_321(F->t_230, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1201)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1201)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1201 = (*(P807)rt_nil_check(F->p_1201)).next;
}
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" {", 2)), (((P800)rt_nil_check(F->fs_1202))->all)), f_ctype_225((*(P813)rt_nil_check(F->t_230)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P813)rt_nil_check(F->t_230)).defined = 1;
f_put_27(g_out_types_850, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_230)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_237(P813 t_236) {
  struct f_more_dims_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->r_1203 = NULL;
F->r_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1205 = ((rt_int)3LL), hi1206 = (*(P813)rt_nil_check(F->t_236)).ndim;
for (rt_int it1207 = lo1205; it1207 <= hi1206; it1207++) {
F->k_1204 = it1207;
F->r_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1203))->all), rt_str(" rt_int ", 8)), f_dim_lo_233(F->k_1204)), rt_str(", ", 2)), f_dim_hi_235(F->k_1204)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P800)rt_nil_check(F->r_1203))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_240(P813 t_238, rstr *base_239) {
  struct f_acnt_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_238 = t_238;
F->base_239 = base_239;
F->r_1208 = NULL;
F->r_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_239)), rt_str(")", 1)); b_; }));
{ rt_int lo1210 = ((rt_int)3LL), hi1211 = (*(P813)rt_nil_check(F->t_238)).ndim;
for (rt_int it1212 = lo1210; it1212 <= hi1211; it1212++) {
F->k_1209 = it1212;
F->r_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1208))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_239)), rt_str(".", 1)), f_dim_lo_233(F->k_1209)), rt_str(", ", 2)), (*F->base_239)), rt_str(".", 1)), f_dim_hi_235(F->k_1209)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->r_1208))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P800 f_cons_lo_243(P809 c_241, rt_int k_242) {
  struct f_cons_lo_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1213 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P809)rt_nil_check(F->c_241)).lo;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P809)rt_nil_check(F->c_241)).lo2;
goto ret_;
}
F->l_1213 = (*(P809)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1215 = ((rt_int)1LL), hi1216 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)6LL));
for (rt_int it1217 = lo1215; it1217 <= hi1216; it1217++) {
F->i_1214 = it1217;
if ((F->l_1213 != NULL)) {
F->l_1213 = (*(P811)rt_nil_check(F->l_1213)).next;
}
}
}
if ((F->l_1213 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P811)rt_nil_check(F->l_1213)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P800 f_cons_hi_246(P809 c_244, rt_int k_245) {
  struct f_cons_hi_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_244 = c_244;
F->k_245 = k_245;
F->l_1218 = NULL;
if ((F->k_245 == ((rt_int)1LL))) {
F->result_ = (*(P809)rt_nil_check(F->c_244)).hi;
goto ret_;
} else if ((F->k_245 == ((rt_int)2LL))) {
F->result_ = (*(P809)rt_nil_check(F->c_244)).hi2;
goto ret_;
}
F->l_1218 = (*(P809)rt_nil_check(F->c_244)).bnds;
{ rt_int lo1220 = ((rt_int)1LL), hi1221 = rt_sub(rt_add(F->k_245, F->k_245), ((rt_int)5LL));
for (rt_int it1222 = lo1220; it1222 <= hi1221; it1222++) {
F->i_1219 = it1222;
if ((F->l_1218 != NULL)) {
F->l_1218 = (*(P811)rt_nil_check(F->l_1218)).next;
}
}
}
if ((F->l_1218 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P811)rt_nil_check(F->l_1218)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_idx_type_249(P813 t_247, rt_int k_248) {
  struct f_idx_type_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->k_248 = k_248;
F->l_1223 = NULL;
F->l_1223 = (*(P813)rt_nil_check(F->t_247)).idxs;
{ rt_int lo1225 = ((rt_int)2LL), hi1226 = F->k_248;
for (rt_int it1227 = lo1225; it1227 <= hi1226; it1227++) {
F->i_1224 = it1227;
F->l_1223 = (*(P828)rt_nil_check(F->l_1223)).next;
}
}
F->result_ = (*(P828)rt_nil_check(F->l_1223)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_250(void) {
  struct f_init_ascii_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1228 = NULL;
F->tail_1229 = NULL;
F->start_1230 = ((rt_int)1LL);
{ rt_int lo1232 = ((rt_int)1LL), hi1233 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1234 = lo1232; it1234 <= hi1233; it1234++) {
F->i_1231 = it1234;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1231) == 32)) {
F->lit_1235 = NULL;
F->lit_1235 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P807)rt_nil_check(F->lit_1235)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1230, rt_sub(F->i_1231, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1228, &F->tail_1229, F->lit_1235);
F->start_1230 = rt_add(F->i_1231, ((rt_int)1LL));
}
}
}
g_ty_ascii_889 = f_new_typ_174((((rt_int)4LL)));
(*(P813)rt_nil_check(g_ty_ascii_889)).lits = F->head_1228;
(*(P813)rt_nil_check(g_ty_ascii_889)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1236 = NULL;
F->t2_1237 = NULL;
F->l1_1238 = NULL;
F->l1_1238 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1239 = NULL;
F->l2_1239 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1240 = NULL;
F->l3_1240 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P807)rt_nil_check(F->l1_1238)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P807)rt_nil_check(F->l2_1239)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P807)rt_nil_check(F->l3_1240)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1236, &F->t2_1237, F->l1_1238);
f_append_65(&F->h2_1236, &F->t2_1237, F->l2_1239);
f_append_65(&F->h2_1236, &F->t2_1237, F->l3_1240);
g_file_mode_type_897 = f_new_typ_174((((rt_int)4LL)));
(*(P813)rt_nil_check(g_file_mode_type_897)).lits = F->h2_1236;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_253(P807 lits_251, rstr *name_252) {
  struct f_lit_index_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_251 = lits_251;
F->name_252 = name_252;
F->i_1241 = ((rt_int)0LL);
F->l_1242 = NULL;
F->l_1242 = F->lits_251;
while ((F->l_1242 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->l_1242)).name))->all), (*F->name_252))) {
F->result_ = F->i_1241;
goto ret_;
}
F->i_1241 = rt_add(F->i_1241, ((rt_int)1LL));
F->l_1242 = (*(P807)rt_nil_check(F->l_1242)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_resolve_subtype_256(P807 st_254, P809 *c_255) {
  struct f_resolve_subtype_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_254 = st_254;
F->c_255 = c_255;
F->c_255v = *F->c_255;
F->t_1243 = NULL;
F->dummy_1245 = NULL;
F->c_255v = f_new_cons_175();
{ rt_int sel1246 = (*(P807)rt_nil_check(F->st_254)).kind;
if (0 || (sel1246 == (((rt_int)70LL)))) {
if (((*(P807)rt_nil_check(F->st_254)).a != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).a, g_ty_int_886, &F->dummy_1245); b_; }));
(*(P809)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).b, g_ty_int_886, &F->dummy_1245); b_; }));
(*(P809)rt_nil_check(F->c_255v)).mlo = f_manifest_328((*(P807)rt_nil_check(F->st_254)).a, &F->ok_1244);
(*(P809)rt_nil_check(F->c_255v)).hasm = F->ok_1244;
(*(P809)rt_nil_check(F->c_255v)).mhi = f_manifest_328((*(P807)rt_nil_check(F->st_254)).b, &F->ok_1244);
(*(P809)rt_nil_check(F->c_255v)).hasm = ((*(P809)rt_nil_check(F->c_255v)).hasm && F->ok_1244);
}
F->result_ = g_ty_int_886;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)71LL)))) {
if (((*(P807)rt_nil_check(F->st_254)).a != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).a, g_ty_int_886, &F->dummy_1245); b_; }));
}
if (((*(P807)rt_nil_check(F->st_254)).b != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).b, g_ty_float_888, &F->dummy_1245); b_; }));
(*(P809)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).c, g_ty_float_888, &F->dummy_1245); b_; }));
(*(P809)rt_nil_check(F->c_255v)).hasm = (f_float_lit_258((*(P807)rt_nil_check(F->st_254)).b) && f_float_lit_258((*(P807)rt_nil_check(F->st_254)).c));
}
F->result_ = g_ty_float_888;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)72LL)))) {
F->t_1243 = f_new_typ_174((((rt_int)4LL)));
(*(P813)rt_nil_check(F->t_1243)).lits = (*(P807)rt_nil_check(F->st_254)).a;
if (((*(P807)rt_nil_check(F->st_254)).b != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).b, F->t_1243, &F->dummy_1245); b_; }));
(*(P809)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).c, F->t_1243, &F->dummy_1245); b_; }));
if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_254)).b)).kind == (((rt_int)4LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_254)).c)).kind == (((rt_int)4LL))))) {
(*(P809)rt_nil_check(F->c_255v)).mlo = f_lit_index_253((*(P813)rt_nil_check(F->t_1243)).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_254)).b)).name))->all));
(*(P809)rt_nil_check(F->c_255v)).mhi = f_lit_index_253((*(P813)rt_nil_check(F->t_1243)).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_254)).c)).name))->all));
(*(P809)rt_nil_check(F->c_255v)).hasm = 1;
}
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)73LL)))) {
F->t_1243 = f_resolve_subtype_256((*(P807)rt_nil_check(F->st_254)).a, &F->c_255v);
if (((*(P813)rt_nil_check(f_base_of_214(F->t_1243))).kind != (((rt_int)4LL)))) {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_212(F->t_1243, g_ty_ascii_889) && ((F->c_255v == NULL) || ((*(P809)rt_nil_check(F->c_255v)).lo == NULL)))) {
F->t_1243 = g_ty_string_890;
} else {
F->et_1247 = NULL;
F->et_1247 = F->t_1243;
F->t_1243 = f_new_typ_174((((rt_int)5LL)));
(*(P813)rt_nil_check(F->t_1243)).elem = F->et_1247;
(*(P813)rt_nil_check(F->t_1243)).elemcons = F->c_255v;
}
F->c_255v = f_new_cons_175();
if (((*(P807)rt_nil_check(F->st_254)).b != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).b, g_ty_int_886, &F->dummy_1245); b_; }));
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)74LL)))) {
{
F->ec_1248 = NULL;
F->et_1249 = NULL;
F->et_1249 = f_resolve_subtype_256((*(P807)rt_nil_check(F->st_254)).b, &F->ec_1248);
F->ix_1250 = NULL;
F->ix_1250 = (*(P807)rt_nil_check(F->st_254)).a;
F->k_1251 = ((rt_int)0LL);
F->tail_1252 = NULL;
F->btail_1253 = NULL;
F->t_1243 = f_new_typ_174((((rt_int)6LL)));
(*(P813)rt_nil_check(F->t_1243)).elem = F->et_1249;
(*(P813)rt_nil_check(F->t_1243)).elemcons = F->ec_1248;
(*(P813)rt_nil_check(F->t_1243)).elemst = (*(P807)rt_nil_check(F->st_254)).b;
(*(P809)rt_nil_check(F->c_255v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P809)rt_nil_check(F->c_255v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1250 != NULL)) {
F->ic_1254 = NULL;
F->it_1255 = NULL;
F->it_1255 = f_resolve_subtype_256(F->ix_1250, &F->ic_1254);
F->lo_1256 = NULL;
F->hi_1257 = NULL;
F->tl_1258 = NULL;
if ((((*(P813)rt_nil_check(f_base_of_214(F->it_1255))).kind != (((rt_int)1LL))) && ((*(P813)rt_nil_check(f_base_of_214(F->it_1255))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1254 = f_base_cons_217(F->it_1255, F->ic_1254);
F->k_1251 = rt_add(F->k_1251, ((rt_int)1LL));
{ R829 *cell1259 = rt_alloc(sizeof(R829));
(*cell1259).t = NULL;
(*cell1259).next = NULL;
F->tl_1258 = cell1259;
}
(*(P828)rt_nil_check(F->tl_1258)).t = F->it_1255;
if ((F->tail_1252 == NULL)) {
(*(P813)rt_nil_check(F->t_1243)).idxs = F->tl_1258;
} else {
(*(P828)rt_nil_check(F->tail_1252)).next = F->tl_1258;
}
F->tail_1252 = F->tl_1258;
if (((F->ic_1254 != NULL) && ((*(P809)rt_nil_check(F->ic_1254)).lo != NULL))) {
F->lo_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1254); b_; }));
F->hi_1257 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1254); b_; }));
} else if (((*(P813)rt_nil_check(f_base_of_214(F->it_1255))).kind == (((rt_int)4LL)))) {
F->lo_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1257 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P813)rt_nil_check(f_base_of_214(F->it_1255))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1251 == ((rt_int)1LL))) {
(*(P813)rt_nil_check(F->t_1243)).idx = F->it_1255;
(*(P809)rt_nil_check(F->c_255v)).lo = F->lo_1256;
(*(P809)rt_nil_check(F->c_255v)).hi = F->hi_1257;
} else if ((F->k_1251 == ((rt_int)2LL))) {
(*(P813)rt_nil_check(F->t_1243)).idx2 = F->it_1255;
(*(P809)rt_nil_check(F->c_255v)).lo2 = F->lo_1256;
(*(P809)rt_nil_check(F->c_255v)).hi2 = F->hi_1257;
} else if ((F->lo_1256 != NULL)) {
F->l1_1260 = NULL;
F->l2_1261 = NULL;
{ R812 *cell1262 = rt_alloc(sizeof(R812));
(*cell1262).s = NULL;
(*cell1262).next = NULL;
F->l1_1260 = cell1262;
}
{ R812 *cell1263 = rt_alloc(sizeof(R812));
(*cell1263).s = NULL;
(*cell1263).next = NULL;
F->l2_1261 = cell1263;
}
(*(P811)rt_nil_check(F->l1_1260)).s = F->lo_1256;
(*(P811)rt_nil_check(F->l2_1261)).s = F->hi_1257;
(*(P811)rt_nil_check(F->l1_1260)).next = F->l2_1261;
if ((F->btail_1253 == NULL)) {
(*(P809)rt_nil_check(F->c_255v)).bnds = F->l1_1260;
} else {
(*(P811)rt_nil_check(F->btail_1253)).next = F->l1_1260;
}
F->btail_1253 = F->l2_1261;
}
F->ix_1250 = (*(P807)rt_nil_check(F->ix_1250)).next;
}
(*(P813)rt_nil_check(F->t_1243)).ndim = F->k_1251;
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)77LL)))) {
F->t_1243 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1264 = NULL;
(*(P813)rt_nil_check(F->t_1243)).elem = f_resolve_subtype_256((*(P807)rt_nil_check(F->st_254)).a, &F->ec_1264);
(*(P813)rt_nil_check(F->t_1243)).elemcons = F->ec_1264;
if ((((*(P813)rt_nil_check(f_base_of_214((*(P813)rt_nil_check(F->t_1243)).elem))).kind != (((rt_int)1LL))) && ((*(P813)rt_nil_check(f_base_of_214((*(P813)rt_nil_check(F->t_1243)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P813)rt_nil_check(f_base_of_214((*(P813)rt_nil_check(F->t_1243)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1264 == NULL) || ((*(P809)rt_nil_check(F->ec_1264)).lo == NULL)))) {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)75LL))) || (sel1246 == (((rt_int)76LL)))) {
if (((*(P807)rt_nil_check(F->st_254)).kind == (((rt_int)76LL)))) {
F->t_1243 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1243 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1265 = NULL;
F->comp_1265 = (*(P807)rt_nil_check(F->st_254)).a;
F->tail_1266 = NULL;
while ((F->comp_1265 != NULL)) {
F->cc_1267 = NULL;
F->f_1268 = NULL;
{ R816 *cell1269 = rt_alloc(sizeof(R816));
(*cell1269).name = NULL;
(*cell1269).t = NULL;
(*cell1269).c = NULL;
(*cell1269).st = NULL;
(*cell1269).next = NULL;
F->f_1268 = cell1269;
}
(*(P815)rt_nil_check(F->f_1268)).name = (*(P807)rt_nil_check(F->comp_1265)).name;
(*(P815)rt_nil_check(F->f_1268)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->comp_1265)).a, &F->cc_1267);
(*(P815)rt_nil_check(F->f_1268)).c = F->cc_1267;
(*(P815)rt_nil_check(F->f_1268)).st = (*(P807)rt_nil_check(F->comp_1265)).a;
if ((F->tail_1266 == NULL)) {
(*(P813)rt_nil_check(F->t_1243)).fields = F->f_1268;
} else {
(*(P815)rt_nil_check(F->tail_1266)).next = F->f_1268;
}
F->tail_1266 = F->f_1268;
F->comp_1265 = (*(P807)rt_nil_check(F->comp_1265)).next;
}
}
if (((*(P813)rt_nil_check(F->t_1243)).kind == (((rt_int)17LL)))) {
F->lits_1270 = NULL;
F->ltail_1271 = NULL;
F->f_1272 = NULL;
F->f_1272 = (*(P813)rt_nil_check(F->t_1243)).fields;
while ((F->f_1272 != NULL)) {
F->l_1273 = NULL;
F->l_1273 = f_nn_61((((rt_int)4LL)), (*(P807)rt_nil_check(F->st_254)).line);
if (rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1272)).name))->all), rt_str("TAG", 3))) {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P807)rt_nil_check(F->l_1273)).name = (*(P815)rt_nil_check(F->f_1272)).name;
f_append_65(&F->lits_1270, &F->ltail_1271, F->l_1273);
F->f_1272 = (*(P815)rt_nil_check(F->f_1272)).next;
}
(*(P813)rt_nil_check(F->t_1243)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_1243)).elem)).lits = F->lits_1270;
if (((*(P807)rt_nil_check(F->st_254)).b != NULL)) {
f_tag_constraint_262(F->t_1243, (*(P807)rt_nil_check(F->st_254)).b, F->c_255v);
}
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_892;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P817)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1274 = NULL;
F->gt_1274 = f_copy_node_662((*(P807)rt_nil_check(F->st_254)).a);
(*(P807)rt_nil_check(F->gt_1274)).next = NULL;
F->result_ = f_instantiate_type_581(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1274, (*(P807)rt_nil_check(F->st_254)).b, &F->c_255v, (*(P807)rt_nil_check(F->st_254)).line);
goto ret_;
}
{
F->ec_1275 = NULL;
F->t_1243 = f_new_typ_174((((rt_int)12LL)));
(*(P813)rt_nil_check(F->t_1243)).elem = f_resolve_subtype_256((*(P807)rt_nil_check(F->st_254)).a, &F->ec_1275);
(*(P813)rt_nil_check(F->t_1243)).elemcons = F->ec_1275;
if (((*(P807)rt_nil_check(F->st_254)).b != NULL)) {
(*(P809)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->st_254)).b, g_ty_int_886, &F->dummy_1245); b_; }));
}
}
F->result_ = F->t_1243;
goto ret_;
} else if (0 || (sel1246 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_265(F->st_254, &F->c_255v);
goto ret_;
} else if (0 || (sel1246 == (((rt_int)81LL)))) {
{
F->base_1276 = NULL;
F->result_ = f_value_subtype_278((*(P807)rt_nil_check(F->st_254)).a, &F->c_255v, &F->base_1276);
goto ret_;
}
} else {
f_fail_23((*(P807)rt_nil_check(F->st_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_258(P807 e_257) {
  struct f_float_lit_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_257 = e_257;
if ((((*(P807)rt_nil_check(F->e_257)).kind == (((rt_int)8LL))) && (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_257)).name))->all), rt_str("-", 1)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_257)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_258((*(P807)rt_nil_check(F->e_257)).a);
goto ret_;
}
F->result_ = (((*(P807)rt_nil_check(F->e_257)).kind == (((rt_int)2LL))) || ((*(P807)rt_nil_check(F->e_257)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_262(P813 t_259, P807 e_260, P809 c_261) {
  struct f_tag_constraint_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_259 = t_259;
F->e_260 = e_260;
F->c_261 = c_261;
F->dummy_1277 = NULL;
(*(P809)rt_nil_check(F->c_261)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->e_260, (*(P813)rt_nil_check(F->t_259)).elem, &F->dummy_1277); b_; }));
f_check_type_223(F->dummy_1277, (*(P813)rt_nil_check(F->t_259)).elem, (*(P807)rt_nil_check(F->e_260)).line);
(*(P809)rt_nil_check(F->c_261)).hi = (*(P809)rt_nil_check(F->c_261)).lo;
if (((*(P807)rt_nil_check(F->e_260)).kind == (((rt_int)4LL)))) {
(*(P809)rt_nil_check(F->c_261)).mlo = f_lit_index_253((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_259)).elem)).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_260)).name))->all));
(*(P809)rt_nil_check(F->c_261)).mhi = (*(P809)rt_nil_check(F->c_261)).mlo;
(*(P809)rt_nil_check(F->c_261)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P813 f_named_subtype_265(P807 st_263, P809 *c_264) {
  struct f_named_subtype_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_263 = st_263;
F->c_264 = c_264;
F->c_264v = *F->c_264;
F->t_1278 = NULL;
F->y_1279 = NULL;
F->y_1279 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->st_263)).name))->all));
F->name_1280 = rt_str_copy((((P800)rt_nil_check((*(P807)rt_nil_check(F->st_263)).name))->all));
F->c_264v = f_new_cons_175();
if (((F->y_1279 == NULL) && ((rt_str_eq(F->name_1280, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1280, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1280, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_283(F->st_263, &F->c_264v);
goto ret_;
}
if ((F->y_1279 == NULL)) {
if (rt_str_eq(F->name_1280, rt_str("BOOL", 4))) {
F->t_1278 = g_ty_bool_887;
} else if (rt_str_eq(F->name_1280, rt_str("ASCII", 5))) {
F->t_1278 = g_ty_ascii_889;
} else if (rt_str_eq(F->name_1280, rt_str("DATA_LOCK", 9))) {
F->t_1278 = g_ty_lock_894;
} else if (rt_str_eq(F->name_1280, rt_str("LATCH", 5))) {
F->t_1278 = g_ty_latch_895;
} else if (rt_str_eq(F->name_1280, rt_str("ACT", 3))) {
F->t_1278 = g_ty_act_896;
} else if (rt_str_eq(F->name_1280, rt_str("INT", 3))) {
F->t_1278 = g_ty_int_886;
} else if (rt_str_eq(F->name_1280, rt_str("FLOAT", 5))) {
F->t_1278 = g_ty_float_888;
} else {
f_fail_23((*(P807)rt_nil_check(F->st_263)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1280); b_; }));
}
if (((*(P807)rt_nil_check(F->st_263)).b != NULL)) {
f_apply_constraint_274(F->t_1278, (*(P807)rt_nil_check(F->st_263)).b, F->c_264v, (*(P807)rt_nil_check(F->st_263)).line);
}
F->result_ = F->t_1278;
goto ret_;
}
if ((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)10LL))) && (((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_581(F->y_1279, (*(P807)rt_nil_check(F->st_263)).a, (*(P807)rt_nil_check(F->st_263)).b, &F->c_264v, (*(P807)rt_nil_check(F->st_263)).line);
goto ret_;
}
if (((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->y_1279)).t != NULL)) && ((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_306(F->y_1279, F->st_263, &F->c_264v);
goto ret_;
}
if (((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->y_1279)).t != NULL)) && ((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).t)).kind == (((rt_int)8LL))))) {
(*(P809)rt_nil_check(F->c_264v)).args = (*(P807)rt_nil_check(F->st_263)).b;
F->result_ = (*(P817)rt_nil_check(F->y_1279)).t;
goto ret_;
}
if (((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)6LL))) && ((*(P817)rt_nil_check(F->y_1279)).decl != NULL)) && ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_269(F->y_1279, F->st_263, &F->c_264v);
goto ret_;
}
if (((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)6LL))) || ((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)5LL)))) && ((*(P817)rt_nil_check(F->y_1279)).t != NULL))) {
if (((*(P817)rt_nil_check(F->y_1279)).c != NULL)) {
F->c_264v = (*(P817)rt_nil_check(F->y_1279)).c;
}
F->t_1278 = (*(P817)rt_nil_check(F->y_1279)).t;
} else if (((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->y_1279)).decl != NULL)) && ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1279)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_306(F->y_1279, F->st_263, &F->c_264v);
goto ret_;
} else if ((((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)6LL))) || ((*(P817)rt_nil_check(F->y_1279)).kind == (((rt_int)5LL))))) {
F->t_1278 = f_resolve_subtype_256((*(P817)rt_nil_check(F->y_1279)).st, &F->c_264v);
} else {
f_fail_23((*(P807)rt_nil_check(F->st_263)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1280, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P807)rt_nil_check(F->st_263)).b != NULL)) {
F->c_264v = f_copy_cons_197(F->c_264v);
f_apply_constraint_274(F->t_1278, (*(P807)rt_nil_check(F->st_263)).b, F->c_264v, (*(P807)rt_nil_check(F->st_263)).line);
}
F->result_ = F->t_1278;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_264) = F->c_264v;
  RT_FPOP();
  return F->result_;
}

static P813 f_invoke_abbrev_269(P817 y_266, P807 st_267, P809 *c_268) {
  struct f_invoke_abbrev_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_266 = y_266;
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->p_1281 = NULL;
F->p_1281 = (*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_266)).decl)).b;
F->a_1282 = NULL;
F->a_1282 = (*(P807)rt_nil_check(F->st_267)).b;
F->t_1283 = NULL;
if ((f_list_len_67(F->p_1281) != f_list_len_67(F->a_1282))) {
f_fail_23((*(P807)rt_nil_check(F->st_267)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_266)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1281))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1281 != NULL)) {
F->z_1284 = NULL;
F->z_1284 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_1281)).name);
F->pc_1285 = NULL;
F->at_1286 = NULL;
if (((*(P807)rt_nil_check(F->p_1281)).ival != (((rt_int)1LL)))) {
f_fail_23((*(P807)rt_nil_check(F->st_267)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P817)rt_nil_check(F->z_1284)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1281)).a, &F->pc_1285);
(*(P817)rt_nil_check(F->z_1284)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_641(F->a_1282, (*(P817)rt_nil_check(F->z_1284)).t, &F->at_1286)), rt_str(")", 1)); b_; }));
f_check_type_223(F->at_1286, (*(P817)rt_nil_check(F->z_1284)).t, (*(P807)rt_nil_check(F->st_267)).line);
(*(P817)rt_nil_check(F->z_1284)).mvalue = f_manifest_328(F->a_1282, &F->ok_1287);
(*(P817)rt_nil_check(F->z_1284)).hasmv = F->ok_1287;
(*(P817)rt_nil_check(F->z_1284)).mv = f_meval_337(F->a_1282, &F->ok_1287);
if ((!F->ok_1287)) {
(*(P817)rt_nil_check(F->z_1284)).mv = NULL;
}
(*(P817)rt_nil_check(F->z_1284)).ro_flag = 1;
f_define_159(F->z_1284, (*(P807)rt_nil_check(F->st_267)).line);
F->p_1281 = (*(P807)rt_nil_check(F->p_1281)).next;
F->a_1282 = (*(P807)rt_nil_check(F->a_1282)).next;
}
F->t_1283 = f_resolve_subtype_256((*(P817)rt_nil_check(F->y_266)).st, &F->c_268v);
f_close_scope_169();
F->result_ = F->t_1283;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_274(P813 t_270, P807 args_271, P809 c_272, rt_int line_273) {
  struct f_apply_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_270 = t_270;
F->args_271 = args_271;
F->c_272 = c_272;
F->line_273 = line_273;
F->dummy_1288 = NULL;
if ((((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)1LL))) || ((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)4LL))))) {
if ((((*(P807)rt_nil_check(F->args_271)).kind != (((rt_int)16LL))) || ((*(P807)rt_nil_check(F->args_271)).next != NULL))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P809)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->args_271)).a, F->t_270, &F->dummy_1288); b_; }));
f_check_type_223(F->dummy_1288, F->t_270, F->line_273);
(*(P809)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check(F->args_271)).b, F->t_270, &F->dummy_1288); b_; }));
f_check_type_223(F->dummy_1288, F->t_270, F->line_273);
(*(P809)rt_nil_check(F->c_272)).hasm = 0;
if (((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)1LL)))) {
(*(P809)rt_nil_check(F->c_272)).mlo = f_manifest_328((*(P807)rt_nil_check(F->args_271)).a, &F->ok_1289);
(*(P809)rt_nil_check(F->c_272)).hasm = F->ok_1289;
(*(P809)rt_nil_check(F->c_272)).mhi = f_manifest_328((*(P807)rt_nil_check(F->args_271)).b, &F->ok_1289);
(*(P809)rt_nil_check(F->c_272)).hasm = ((*(P809)rt_nil_check(F->c_272)).hasm && F->ok_1289);
} else if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).a)).kind == (((rt_int)4LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).b)).kind == (((rt_int)4LL))))) {
(*(P809)rt_nil_check(F->c_272)).mlo = f_lit_index_253((*(P813)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).a)).name))->all));
(*(P809)rt_nil_check(F->c_272)).mhi = f_lit_index_253((*(P813)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).b)).name))->all));
(*(P809)rt_nil_check(F->c_272)).hasm = 1;
}
} else if (((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)3LL)))) {
(*(P809)rt_nil_check(F->c_272)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->args_271, g_ty_int_886, &F->dummy_1288); b_; }));
if (((*(P807)rt_nil_check(F->args_271)).next != NULL)) {
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).next)).kind != (((rt_int)16LL)))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P809)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).next)).a, g_ty_float_888, &F->dummy_1288); b_; }));
(*(P809)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).next)).b, g_ty_float_888, &F->dummy_1288); b_; }));
(*(P809)rt_nil_check(F->c_272)).hasm = (f_float_lit_258((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).next)).a) && f_float_lit_258((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_271)).next)).b));
}
} else if (((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)5LL)))) {
(*(P809)rt_nil_check(F->c_272)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->args_271, g_ty_int_886, &F->dummy_1288); b_; }));
} else if (((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)12LL)))) {
(*(P809)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->args_271, g_ty_int_886, &F->dummy_1288); b_; }));
} else if (((*(P813)rt_nil_check(F->t_270)).kind == (((rt_int)17LL)))) {
f_tag_constraint_262(F->t_270, F->args_271, F->c_272);
} else {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P813 f_value_subtype_278(P807 e_275, P809 *c_276, P800 *base_277) {
  struct f_value_subtype_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_275 = e_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->base_277 = base_277;
F->base_277v = *F->base_277;
F->t_1290 = NULL;
F->c0_1291 = NULL;
if (f_is_lvalue_604(F->e_275)) {
f_lvalue_610(F->e_275, &F->base_277v, &F->t_1290, &F->c0_1291, &F->ro_1292);
} else {
F->base_277v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->e_275, NULL, &F->t_1290); b_; }));
}
if ((F->c0_1291 == NULL)) {
F->c_276v = f_new_cons_175();
} else {
F->c_276v = f_copy_cons_197(F->c0_1291);
}
if (((*(P813)rt_nil_check(F->t_1290)).kind == (((rt_int)5LL)))) {
(*(P809)rt_nil_check(F->c_276v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->base_277v))->all)), rt_str(").len", 5)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_1290)).kind == (((rt_int)6LL)))) {
(*(P809)rt_nil_check(F->c_276v)).bnds = NULL;
{ rt_int lo1294 = ((rt_int)1LL), hi1295 = (*(P813)rt_nil_check(F->t_1290)).ndim;
for (rt_int it1296 = lo1294; it1296 <= hi1295; it1296++) {
F->k_1293 = it1296;
F->lo_1297 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_lo_233(F->k_1293)));
F->hi_1298 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_hi_235(F->k_1293)));
if ((F->k_1293 == ((rt_int)1LL))) {
(*(P809)rt_nil_check(F->c_276v)).lo = f_mk_3(&F->lo_1297);
(*(P809)rt_nil_check(F->c_276v)).hi = f_mk_3(&F->hi_1298);
} else if ((F->k_1293 == ((rt_int)2LL))) {
(*(P809)rt_nil_check(F->c_276v)).lo2 = f_mk_3(&F->lo_1297);
(*(P809)rt_nil_check(F->c_276v)).hi2 = f_mk_3(&F->hi_1298);
} else {
F->l1_1299 = NULL;
F->l2_1300 = NULL;
{ R812 *cell1301 = rt_alloc(sizeof(R812));
(*cell1301).s = NULL;
(*cell1301).next = NULL;
F->l1_1299 = cell1301;
}
{ R812 *cell1302 = rt_alloc(sizeof(R812));
(*cell1302).s = NULL;
(*cell1302).next = NULL;
F->l2_1300 = cell1302;
}
(*(P811)rt_nil_check(F->l1_1299)).s = f_mk_3(&F->lo_1297);
(*(P811)rt_nil_check(F->l2_1300)).s = f_mk_3(&F->hi_1298);
(*(P811)rt_nil_check(F->l1_1299)).next = F->l2_1300;
(*(P811)rt_nil_check(F->l2_1300)).next = (*(P809)rt_nil_check(F->c_276v)).bnds;
(*(P809)rt_nil_check(F->c_276v)).bnds = F->l1_1299;
}
}
}
(*(P809)rt_nil_check(F->c_276v)).bnds = f_reverse_pairs_280((*(P809)rt_nil_check(F->c_276v)).bnds);
} else if (((*(P813)rt_nil_check(F->t_1290)).kind == (((rt_int)12LL)))) {
(*(P809)rt_nil_check(F->c_276v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->base_277v))->all)), rt_str(")->cap", 6)); b_; }));
} else if ((((*(P813)rt_nil_check(F->t_1290)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_1290)).tparams != NULL))) {
F->p_1303 = NULL;
F->p_1303 = (*(P813)rt_nil_check(F->t_1290)).tparams;
F->head_1304 = NULL;
F->tail_1305 = NULL;
while ((F->p_1303 != NULL)) {
F->sel_1306 = NULL;
F->sel_1306 = f_nn_61((((rt_int)11LL)), (*(P807)rt_nil_check(F->e_275)).line);
(*(P807)rt_nil_check(F->sel_1306)).a = F->e_275;
(*(P807)rt_nil_check(F->sel_1306)).name = (*(P807)rt_nil_check(F->p_1303)).name;
f_append_65(&F->head_1304, &F->tail_1305, F->sel_1306);
F->p_1303 = (*(P807)rt_nil_check(F->p_1303)).next;
}
(*(P809)rt_nil_check(F->c_276v)).args = F->head_1304;
}
F->result_ = F->t_1290;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;  (*F->base_277) = F->base_277v;
  RT_FPOP();
  return F->result_;
}

static P811 f_reverse_pairs_280(P811 l_279) {
  struct f_reverse_pairs_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_279 = l_279;
F->r_1307 = NULL;
F->p_1308 = NULL;
F->p_1308 = F->l_279;
while ((F->p_1308 != NULL)) {
F->a_1309 = NULL;
F->a_1309 = F->p_1308;
F->b_1310 = NULL;
F->b_1310 = (*(P811)rt_nil_check(F->p_1308)).next;
F->p_1308 = (*(P811)rt_nil_check(F->b_1310)).next;
(*(P811)rt_nil_check(F->b_1310)).next = F->r_1307;
F->r_1307 = F->a_1309;
}
F->result_ = F->r_1307;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_inquiry_283(P807 st_281, P809 *c_282) {
  struct f_inquiry_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_281 = st_281;
F->c_282 = c_282;
F->c_282v = *F->c_282;
F->base_1311 = NULL;
F->t_1312 = NULL;
F->name_1313 = rt_str_copy((((P800)rt_nil_check((*(P807)rt_nil_check(F->st_281)).name))->all));
if (((*(P807)rt_nil_check(F->st_281)).b == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->st_281)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1313, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1313, rt_str("TYPEOF", 6))) {
F->sub_1314 = NULL;
F->sub_1314 = f_as_subtype_285((*(P807)rt_nil_check(F->st_281)).b);
F->c2_1315 = NULL;
if ((F->sub_1314 != NULL)) {
F->t_1312 = f_resolve_subtype_256(F->sub_1314, &F->c2_1315);
} else {
F->t_1312 = f_value_subtype_278((*(P807)rt_nil_check(F->st_281)).b, &F->c2_1315, &F->base_1311);
}
F->c_282v = f_new_cons_175();
F->result_ = F->t_1312;
goto ret_;
}
F->t_1312 = f_value_subtype_278((*(P807)rt_nil_check(F->st_281)).b, &F->c_282v, &F->base_1311);
if (rt_str_eq(F->name_1313, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1312;
goto ret_;
}
{
F->k_1316 = ((rt_int)1LL);
F->ok_1317 = 1;
F->ac_1318 = NULL;
F->ac_1318 = F->c_282v;
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_281)).b)).next != NULL)) {
F->k_1316 = f_manifest_328((*(P807)rt_nil_check((*(P807)rt_nil_check(F->st_281)).b)).next, &F->ok_1317);
}
while ((((*(P813)rt_nil_check(F->t_1312)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_1312)).tparams == NULL))) {
F->t_1312 = (*(P813)rt_nil_check(F->t_1312)).under;
}
if ((((((*(P813)rt_nil_check(F->t_1312)).kind != (((rt_int)6LL))) || (!F->ok_1317)) || (F->k_1316 < ((rt_int)1LL))) || (F->k_1316 > (*(P813)rt_nil_check(F->t_1312)).ndim))) {
f_fail_23((*(P807)rt_nil_check(F->st_281)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_282v = f_new_cons_175();
(*(P809)rt_nil_check(F->c_282v)).lo = f_cons_lo_243(F->ac_1318, F->k_1316);
(*(P809)rt_nil_check(F->c_282v)).hi = f_cons_hi_246(F->ac_1318, F->k_1316);
F->result_ = f_idx_type_249(F->t_1312, F->k_1316);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_282) = F->c_282v;
  RT_FPOP();
  return F->result_;
}

static P807 f_as_subtype_285(P807 e_284) {
  struct f_as_subtype_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->st_1319 = NULL;
if ((F->e_284 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_284)).kind == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_285((*(P807)rt_nil_check(F->e_284)).a);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_284)).kind == (((rt_int)7LL)))) {
if ((!f_type_name_292(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_284)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1319 = f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->e_284)).line);
(*(P807)rt_nil_check(F->st_1319)).name = (*(P807)rt_nil_check(F->e_284)).name;
F->result_ = F->st_1319;
goto ret_;
} else if ((((*(P807)rt_nil_check(F->e_284)).kind == (((rt_int)12LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).name, (*(P807)rt_nil_check(F->e_284)).b, NULL, (*(P807)rt_nil_check(F->e_284)).line);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_284)).kind != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).kind == (((rt_int)12LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).a)).name, (*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).b, (*(P807)rt_nil_check(F->e_284)).b, (*(P807)rt_nil_check(F->e_284)).line);
goto ret_;
} else if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).kind != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1320 = rt_str_copy((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).name))->all));
F->y_1321 = NULL;
F->y_1321 = f_lookup_154(&F->name_1320);
if ((rt_str_eq(F->name_1320, rt_str("INT", 3)) && (F->y_1321 == NULL))) {
if (((((*(P807)rt_nil_check(F->e_284)).b == NULL) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).kind != (((rt_int)16LL)))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1319 = f_nn_61((((rt_int)70LL)), (*(P807)rt_nil_check(F->e_284)).line);
(*(P807)rt_nil_check(F->st_1319)).a = (*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).a;
(*(P807)rt_nil_check(F->st_1319)).b = (*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).b;
F->result_ = F->st_1319;
goto ret_;
} else if ((rt_str_eq(F->name_1320, rt_str("FLOAT", 5)) && (F->y_1321 == NULL))) {
F->st_1319 = f_nn_61((((rt_int)71LL)), (*(P807)rt_nil_check(F->e_284)).line);
(*(P807)rt_nil_check(F->st_1319)).a = (*(P807)rt_nil_check(F->e_284)).b;
if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).next != NULL) && ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).next)).kind == (((rt_int)16LL))))) {
(*(P807)rt_nil_check(F->st_1319)).b = (*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).next)).a;
(*(P807)rt_nil_check(F->st_1319)).c = (*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).b)).next)).b;
}
F->result_ = F->st_1319;
goto ret_;
} else if (((!f_type_name_292(&F->name_1320)) && (!((F->y_1321 == NULL) && ((rt_str_eq(F->name_1320, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1320, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1320, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1319 = f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->e_284)).line);
(*(P807)rt_nil_check(F->st_1319)).name = (*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_284)).a)).name;
(*(P807)rt_nil_check(F->st_1319)).b = (*(P807)rt_nil_check(F->e_284)).b;
(*(P807)rt_nil_check(F->st_1319)).flag = ((rt_int)1LL);
F->result_ = F->st_1319;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_tt_subtype_290(P800 name_286, P807 tt_287, P807 args_288, rt_int line_289) {
  struct f_tt_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->tt_287 = tt_287;
F->args_288 = args_288;
F->line_289 = line_289;
F->st_1322 = NULL;
if (rt_str_eq((((P800)rt_nil_check(F->name_286))->all), rt_str("STRING", 6))) {
F->st_1322 = f_nn_61((((rt_int)73LL)), F->line_289);
} else if (rt_str_eq((((P800)rt_nil_check(F->name_286))->all), rt_str("SET", 3))) {
F->st_1322 = f_nn_61((((rt_int)77LL)), F->line_289);
} else if ((rt_str_eq((((P800)rt_nil_check(F->name_286))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P817)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1322 = f_nn_61((((rt_int)78LL)), F->line_289);
} else if (rt_str_eq((((P800)rt_nil_check(F->name_286))->all), rt_str("FILE", 4))) {
F->st_1322 = f_nn_61((((rt_int)79LL)), F->line_289);
} else if (f_type_name_292(&(((P800)rt_nil_check(F->name_286))->all))) {
F->st_1322 = f_nn_61((((rt_int)80LL)), F->line_289);
(*(P807)rt_nil_check(F->st_1322)).name = F->name_286;
(*(P807)rt_nil_check(F->st_1322)).a = F->tt_287;
(*(P807)rt_nil_check(F->st_1322)).b = F->args_288;
F->result_ = F->st_1322;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P807)rt_nil_check(F->st_1322)).a = F->tt_287;
(*(P807)rt_nil_check(F->st_1322)).b = F->args_288;
F->result_ = F->st_1322;
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
F->y_1323 = NULL;
F->y_1323 = f_lookup_154(&(*F->name_291));
if ((F->y_1323 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_291), rt_str("INT", 3)) || rt_str_eq((*F->name_291), rt_str("BOOL", 4))) || rt_str_eq((*F->name_291), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_291), rt_str("ASCII", 5))) || rt_str_eq((*F->name_291), rt_str("ACT", 3))) || rt_str_eq((*F->name_291), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_291), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = ((((*(P817)rt_nil_check(F->y_1323)).kind == (((rt_int)5LL))) || ((*(P817)rt_nil_check(F->y_1323)).kind == (((rt_int)6LL)))) || (((*(P817)rt_nil_check(F->y_1323)).kind == (((rt_int)10LL))) && (((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1323)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1323)).decl)).b)).kind == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_294(P813 t_293) {
  struct f_empty_set_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_293 = t_293;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_189(f_base_of_214((*(P813)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P813)rt_nil_check(F->t_293)).elem, (*(P813)rt_nil_check(F->t_293)).elemcons))), rt_str(", ", 2)), f_sub_hi_192(f_base_of_214((*(P813)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P813)rt_nil_check(F->t_293)).elem, (*(P813)rt_nil_check(F->t_293)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_296(P813 t_295) {
  struct f_opened_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1324 = NULL;
F->c_1324 = g_caps_862;
if (((((*(P813)rt_nil_check(F->t_295)).kind != (((rt_int)15LL))) || ((*(P813)rt_nil_check(F->t_295)).ocap == NULL)) || ((*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_295)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1324 != NULL)) {
if (((*(P834)rt_nil_check(F->c_1324)).d == (*(P813)rt_nil_check(F->t_295)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1324 = (*(P834)rt_nil_check(F->c_1324)).next;
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
F->i_1325 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_298)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_297)).len)) < ((rt_int)(((*F->pat_298)).len))))) {
F->result_ = (*F->s_297);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1325, ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_297)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_297), F->i_1325, rt_sub(rt_add(F->i_1325, ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL))), (*F->pat_298))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_297), ((rt_int)1LL), rt_sub(F->i_1325, ((rt_int)1LL))), (*F->r_299)), f_replace_all_300(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_297), rt_add(F->i_1325, ((rt_int)(((*F->pat_298)).len))), ((rt_int)(((*F->s_297)).len))); b_; }), &(*F->pat_298), &(*F->r_299)));
goto ret_;
}
F->i_1325 = rt_add(F->i_1325, ((rt_int)1LL));
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
F->l_1326 = NULL;
F->l_1326 = g_psub_864;
F->r_1327 = NULL;
F->r_1327 = f_mk_3(&(*F->s_301));
while ((F->l_1326 != NULL)) {
F->r_1327 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_300(&(((P800)rt_nil_check(F->r_1327))->all), &(((P800)rt_nil_check((*(P811)rt_nil_check(F->l_1326)).s))->all), &(((P800)rt_nil_check((*(P811)rt_nil_check((*(P811)rt_nil_check(F->l_1326)).next)).s))->all)); b_; }));
F->l_1326 = (*(P811)rt_nil_check((*(P811)rt_nil_check(F->l_1326)).next)).next;
}
F->result_ = (((P800)rt_nil_check(F->r_1327))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_new_type_306(P817 y_303, P807 st_304, P809 *c_305) {
  struct f_new_type_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_303 = y_303;
F->st_304 = st_304;
F->c_305 = c_305;
F->c_305v = *F->c_305;
F->d_1328 = NULL;
F->d_1328 = (*(P817)rt_nil_check(F->y_303)).decl;
F->p_1329 = NULL;
F->uc_1330 = NULL;
F->c_305v = f_new_cons_175();
if (((*(P817)rt_nil_check(F->y_303)).t == NULL)) {
(*(P817)rt_nil_check(F->y_303)).t = f_new_typ_174((((rt_int)15LL)));
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).name = (*(P817)rt_nil_check(F->y_303)).name;
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).decl = F->d_1328;
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).tparams = (*(P807)rt_nil_check(F->d_1328)).b;
if ((g_caps_862 != NULL)) {
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).ocap = (*(P834)rt_nil_check(g_caps_862)).d;
}
f_open_scope_168();
F->p_1329 = (*(P807)rt_nil_check(F->d_1328)).b;
while ((F->p_1329 != NULL)) {
F->z_1331 = NULL;
F->z_1331 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_1329)).name);
F->zc_1332 = NULL;
(*(P817)rt_nil_check(F->z_1331)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1329)).a, &F->zc_1332);
(*(P817)rt_nil_check(F->z_1331)).mnext = (*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).tpsyms;
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).tpsyms = F->z_1331;
(*(P817)rt_nil_check(F->z_1331)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1329)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1331, (*(P807)rt_nil_check(F->d_1328)).line);
F->p_1329 = (*(P807)rt_nil_check(F->p_1329)).next;
}
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).under = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_1328)).a, &F->uc_1330);
(*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_303)).t)).elemcons = F->uc_1330;
f_close_scope_169();
}
(*(P809)rt_nil_check(F->c_305v)).args = (*(P807)rt_nil_check(F->st_304)).b;
F->result_ = (*(P817)rt_nil_check(F->y_303)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_305) = F->c_305v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_310(rstr *lval_307, P813 t_308, P809 c_309) {
  struct f_init_storage_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_307 = lval_307;
F->t_308 = t_308;
F->c_309 = c_309;
f_make_storage_325(&(*F->lval_307), F->t_308, F->c_309);
if (((*(P813)rt_nil_check(F->t_308)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P813)rt_nil_check(F->t_308)).initp, &(*F->lval_307)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_313(P817 y_311, rstr *lval_312) {
  struct f_init_call_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->lval_312 = lval_312;
F->link_1333 = NULL;
F->link_1333 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P817)rt_nil_check(F->y_311)).level > ((rt_int)0LL))) {
F->link_1333 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1335 = ((rt_int)1LL), hi1336 = rt_sub(g_cur_level_860, (*(P817)rt_nil_check(F->y_311)).level);
for (rt_int it1337 = lo1335; it1337 <= hi1336; it1337++) {
F->i_1334 = it1337;
F->link_1333 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->link_1333))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1333 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->link_1333))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_311)).cname))->all), rt_str("(", 1)), (((P800)rt_nil_check(F->link_1333))->all)), rt_str("&", 1)), (*F->lval_312)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_315(P813 t_314) {
  struct f_needs_fin_315fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_314 = t_314;
if ((F->t_314 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_314)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_314)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_315((*(P813)rt_nil_check(F->t_314)).under);
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_314)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_315((*(P813)rt_nil_check(F->t_314)).elem);
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_314)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->t_314)).kind == (((rt_int)17LL))))) {
F->f_1338 = NULL;
F->f_1338 = (*(P813)rt_nil_check(F->t_314)).fields;
while ((F->f_1338 != NULL)) {
if (f_needs_fin_315((*(P815)rt_nil_check(F->f_1338)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1338 = (*(P815)rt_nil_check(F->f_1338)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_318(rstr *lval_316, P813 t_317) {
  struct f_fin_code_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_316 = lval_316;
F->t_317 = t_317;
F->r_1339 = NULL;
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P813)rt_nil_check(F->t_317)).finalp != NULL)) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_313((*(P813)rt_nil_check(F->t_317)).finalp, &(*F->lval_316)), rt_str(" ", 1)); b_; }));
}
if ((((*(P813)rt_nil_check(F->t_317)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_317)).tparams == NULL))) {
F->result_ = rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), f_fin_code_318(&(*F->lval_316), (*(P813)rt_nil_check(F->t_317)).under));
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_317)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_316), rt_str(".all", 4)); b_; }), (*(P813)rt_nil_check(F->t_317)).under));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_317)).kind == (((rt_int)6LL))) && f_needs_fin_315((*(P813)rt_nil_check(F->t_317)).elem))) {
F->i_1340 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), rt_str("for (rt_int ", 12)), F->i_1340), rt_str(" = 0; ", 6)), F->i_1340), rt_str(" < ", 3)), f_acnt_240(F->t_317, &(*F->lval_316))), rt_str("; ", 2)), F->i_1340), rt_str("++) { ", 6)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".p[", 3)), F->i_1340), rt_str("]", 1)); b_; }), (*(P813)rt_nil_check(F->t_317)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_317)).kind == (((rt_int)7LL)))) {
F->f_1341 = NULL;
F->f_1341 = (*(P813)rt_nil_check(F->t_317)).fields;
while ((F->f_1341 != NULL)) {
if (f_needs_fin_315((*(P815)rt_nil_check(F->f_1341)).t)) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1341)).name))->all))); b_; }), (*(P815)rt_nil_check(F->f_1341)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1341 = (*(P815)rt_nil_check(F->f_1341)).next;
}
} else if (((*(P813)rt_nil_check(F->t_317)).kind == (((rt_int)17LL)))) {
F->f_1342 = NULL;
F->f_1342 = (*(P813)rt_nil_check(F->t_317)).fields;
F->i_1343 = ((rt_int)0LL);
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), rt_str("switch (", 8)), (*F->lval_316)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1342 != NULL)) {
if (f_needs_fin_315((*(P815)rt_nil_check(F->f_1342)).t)) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), rt_str(" case ", 6)), f_itos_7(F->i_1343)), rt_str(": ", 2)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".u.", 3)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1342)).name))->all))); b_; }), (*(P815)rt_nil_check(F->f_1342)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1343 = rt_add(F->i_1343, ((rt_int)1LL));
F->f_1342 = (*(P815)rt_nil_check(F->f_1342)).next;
}
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_1339))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P800)rt_nil_check(F->r_1339))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_tparam_type_321(P813 t_319, rstr *name_320) {
  struct f_tparam_type_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->name_320 = name_320;
F->z_1344 = NULL;
F->z_1344 = (*(P813)rt_nil_check(F->t_319)).tpsyms;
while ((F->z_1344 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->z_1344)).name))->all), (*F->name_320))) {
F->result_ = (*(P817)rt_nil_check(F->z_1344)).t;
goto ret_;
}
F->z_1344 = (*(P817)rt_nil_check(F->z_1344)).mnext;
}
F->result_ = g_ty_int_886;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_325(rstr *lval_322, P813 t_323, P809 c_324) {
  struct f_make_storage_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_322 = lval_322;
F->t_323 = t_323;
F->c_324 = c_324;
if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)15LL)))) {
F->p_1345 = NULL;
F->p_1345 = (*(P813)rt_nil_check(F->t_323)).tparams;
F->a_1346 = NULL;
F->a_1346 = (*(P809)rt_nil_check(F->c_324)).args;
F->uc_1347 = NULL;
F->ut_1348 = NULL;
F->at_1349 = NULL;
if ((f_list_len_67(F->a_1346) != f_list_len_67(F->p_1345))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_323)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1345))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1345 != NULL)) {
F->pt_1350 = f_tparam_type_321(F->t_323, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1345)).name))->all));
F->v_1351 = rt_str_copy(f_gexpr_641(F->a_1346, F->pt_1350, &F->at_1349));
f_check_type_223(F->at_1349, F->pt_1350, (*(P807)rt_nil_check(F->a_1346)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1345)).name))->all))), rt_str(" = ", 3)), F->v_1351), rt_str(";", 1)); b_; }));
F->p_1345 = (*(P807)rt_nil_check(F->p_1345)).next;
F->a_1346 = (*(P807)rt_nil_check(F->a_1346)).next;
}
{
F->saved_1352 = NULL;
F->saved_1352 = g_psub_864;
F->p_1345 = (*(P813)rt_nil_check(F->t_323)).tparams;
while ((F->p_1345 != NULL)) {
F->l1_1353 = NULL;
F->l2_1354 = NULL;
{ R812 *cell1355 = rt_alloc(sizeof(R812));
(*cell1355).s = NULL;
(*cell1355).next = NULL;
F->l1_1353 = cell1355;
}
{ R812 *cell1356 = rt_alloc(sizeof(R812));
(*cell1356).s = NULL;
(*cell1356).next = NULL;
F->l2_1354 = cell1356;
}
(*(P811)rt_nil_check(F->l1_1353)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1345)).name))->all))), rt_str("@", 1)); b_; }));
(*(P811)rt_nil_check(F->l2_1354)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1345)).name))->all))); b_; }));
(*(P811)rt_nil_check(F->l1_1353)).next = F->l2_1354;
(*(P811)rt_nil_check(F->l2_1354)).next = g_psub_864;
g_psub_864 = F->l1_1353;
F->p_1345 = (*(P807)rt_nil_check(F->p_1345)).next;
}
if (((*(P813)rt_nil_check(F->t_323)).tparams == NULL)) {
f_init_storage_310(&(*F->lval_322), (*(P813)rt_nil_check(F->t_323)).under, (*(P813)rt_nil_check(F->t_323)).elemcons);
} else {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".all", 4)); b_; }), (*(P813)rt_nil_check(F->t_323)).under, (*(P813)rt_nil_check(F->t_323)).elemcons);
}
g_psub_864 = F->saved_1352;
}
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)12LL)))) {
if (((*(P809)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_322)), rt_str(", ", 2)), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_324)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_225((*(P813)rt_nil_check(F->t_323)).elem)), rt_str("), ", 3)), f_mcopy_349((*(P813)rt_nil_check(F->t_323)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_322)), rt_str(");", 2)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_empty_set_294(F->t_323)), rt_str(";", 1)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)5LL)))) {
if (((*(P809)rt_nil_check(F->c_324)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = rt_str_new(", 14)), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_324)).slen))->all))), rt_str(");", 2)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)6LL)))) {
if (((*(P809)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1358 = ((rt_int)1LL), hi1359 = (*(P813)rt_nil_check(F->t_323)).ndim;
for (rt_int it1360 = lo1358; it1360 <= hi1359; it1360++) {
F->k_1357 = it1360;
if ((f_cons_lo_243(F->c_324, F->k_1357) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_dim_lo_233(F->k_1357)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P800)rt_nil_check(f_cons_lo_243(F->c_324, F->k_1357)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_322)), rt_str(".", 1)), f_dim_hi_235(F->k_1357)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P800)rt_nil_check(f_cons_hi_246(F->c_324, F->k_1357)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P813)rt_nil_check(F->t_323)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".lo2 = ", 7)), (*F->lval_322)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P813)rt_nil_check(F->t_323)).elem)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)5LL))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)6LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)7LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)15LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)8LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)12LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)13LL)))) || ((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_323)).elem)).kind == (((rt_int)14LL))))) {
F->i_1361 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1361), rt_str(" = 0; ", 6)), F->i_1361), rt_str(" < ", 3)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str("; ", 2)), F->i_1361), rt_str("++) {", 5)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p[", 3)), F->i_1361), rt_str("]", 1)); b_; }), (*(P813)rt_nil_check(F->t_323)).elem, (*(P813)rt_nil_check(F->t_323)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)7LL)))) {
F->f_1362 = NULL;
F->f_1362 = (*(P813)rt_nil_check(F->t_323)).fields;
while ((F->f_1362 != NULL)) {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1362)).name))->all))); b_; }), (*(P815)rt_nil_check(F->f_1362)).t, (*(P815)rt_nil_check(F->f_1362)).c);
F->f_1362 = (*(P815)rt_nil_check(F->f_1362)).next;
}
} else if (((*(P813)rt_nil_check(F->t_323)).kind == (((rt_int)17LL)))) {
if (((F->c_324 != NULL) && (*(P809)rt_nil_check(F->c_324)).hasm)) {
F->f_1363 = NULL;
F->f_1363 = (*(P813)rt_nil_check(F->t_323)).fields;
{ rt_int lo1365 = ((rt_int)1LL), hi1366 = (*(P809)rt_nil_check(F->c_324)).mlo;
for (rt_int it1367 = lo1365; it1367 <= hi1366; it1367++) {
F->i_1364 = it1367;
F->f_1363 = (*(P815)rt_nil_check(F->f_1363)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".tag = ", 7)), f_itos_7((*(P809)rt_nil_check(F->c_324)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".u.", 3)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1363)).name))->all))); b_; }), (*(P815)rt_nil_check(F->f_1363)).t, (*(P815)rt_nil_check(F->f_1363)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".tag = -1;", 10)); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_328(P807 e_326, int *ok_327) {
  struct f_manifest_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_326 = e_326;
F->ok_327 = ok_327;
F->ok_327v = *F->ok_327;
F->v_1368 = NULL;
F->v_1368 = f_meval_337(F->e_326, &F->ok_327v);
if ((F->ok_327v && ((*(P826)rt_nil_check(F->v_1368)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P826)rt_nil_check(F->v_1368)).i;
goto ret_;
}
F->ok_327v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_327) = F->ok_327v;
  RT_FPOP();
  return F->result_;
}

static P826 f_mk_mval_331(rt_int kind_329, rt_int i_330) {
  struct f_mk_mval_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_329 = kind_329;
F->i_330 = i_330;
F->v_1369 = NULL;
{ R827 *cell1370 = rt_alloc(sizeof(R827));
(*cell1370).s = NULL;
(*cell1370).t = NULL;
F->v_1369 = cell1370;
}
(*(P826)rt_nil_check(F->v_1369)).kind = F->kind_329;
(*(P826)rt_nil_check(F->v_1369)).i = F->i_330;
F->result_ = F->v_1369;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_334(rt_int a_332, rt_int b_333) {
  struct f_ipow_334fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_332 = a_332;
F->b_333 = b_333;
F->r_1371 = ((rt_int)1LL);
{ rt_int lo1373 = ((rt_int)1LL), hi1374 = F->b_333;
for (rt_int it1375 = lo1373; it1375 <= hi1374; it1375++) {
F->i_1372 = it1375;
F->r_1371 = rt_mul(F->r_1371, F->a_332);
}
}
F->result_ = F->r_1371;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_meval_337(P807 e_335, int *ok_336) {
  struct f_meval_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_335 = e_335;
F->ok_336 = ok_336;
F->ok_336v = *F->ok_336;
F->a_1376 = NULL;
F->b_1377 = NULL;
F->op_1379 = NULL;
F->ok_336v = 0;
if ((F->e_335 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)1LL)))) {
F->ok_336v = 1;
F->result_ = f_mk_mval_331((((rt_int)1LL)), (*(P807)rt_nil_check(F->e_335)).ival);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)5LL)))) {
F->ok_336v = 1;
F->result_ = f_mk_mval_331((((rt_int)2LL)), (*(P807)rt_nil_check(F->e_335)).ival);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)2LL)))) {
F->ok_336v = 1;
F->result_ = f_mk_mval_331((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)3LL)))) {
F->ok_336v = 1;
F->a_1376 = f_mk_mval_331((((rt_int)5LL)), ((rt_int)0LL));
(*(P826)rt_nil_check(F->a_1376)).s = (*(P807)rt_nil_check(F->e_335)).name;
F->result_ = F->a_1376;
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_253((*(P813)rt_nil_check(g_ty_ascii_889)).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all)) >= ((rt_int)0LL))) {
F->ok_336v = 1;
F->a_1376 = f_mk_mval_331((((rt_int)4LL)), f_lit_index_253((*(P813)rt_nil_check(g_ty_ascii_889)).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all)));
(*(P826)rt_nil_check(F->a_1376)).t = g_ty_ascii_889;
(*(P826)rt_nil_check(F->a_1376)).s = (*(P807)rt_nil_check(F->e_335)).name;
F->result_ = F->a_1376;
goto ret_;
}
F->a_1376 = f_mk_mval_331((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P826)rt_nil_check(F->a_1376)).s = (*(P807)rt_nil_check(F->e_335)).name;
F->ok_336v = 1;
F->result_ = F->a_1376;
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_337((*(P807)rt_nil_check(F->e_335)).a, &F->ok_336v);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)7LL)))) {
F->y_1380 = NULL;
F->y_1380 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all));
if ((((F->y_1380 != NULL) && ((*(P817)rt_nil_check(F->y_1380)).kind == (((rt_int)2LL)))) && ((*(P817)rt_nil_check(F->y_1380)).mv != NULL))) {
F->ok_336v = 1;
F->result_ = (*(P817)rt_nil_check(F->y_1380)).mv;
goto ret_;
} else if ((((F->y_1380 != NULL) && ((*(P817)rt_nil_check(F->y_1380)).kind == (((rt_int)2LL)))) && (*(P817)rt_nil_check(F->y_1380)).hasmv)) {
F->ok_336v = 1;
F->result_ = f_mk_mval_331((((rt_int)1LL)), (*(P817)rt_nil_check(F->y_1380)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_335)).kind == (((rt_int)8LL)))) {
F->a_1376 = f_meval_337((*(P807)rt_nil_check(F->e_335)).a, &F->ok_336v);
if ((!F->ok_336v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all), rt_str("NOT", 3)) && ((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P826)rt_nil_check(F->a_1376)).i));
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all), rt_str("-", 1)) && ((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_neg((*(P826)rt_nil_check(F->a_1376)).i));
goto ret_;
} else if (((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all), rt_str("+", 1)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all), rt_str("-", 1))) && (((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)1LL))) || ((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1376;
goto ret_;
}
F->ok_336v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P807)rt_nil_check(F->e_335)).kind != (((rt_int)9LL))) || f_user_defined_347(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_335)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1379 = (*(P807)rt_nil_check(F->e_335)).name;
F->a_1376 = f_meval_337((*(P807)rt_nil_check(F->e_335)).a, &F->ok_336v);
F->b_1377 = f_meval_337((*(P807)rt_nil_check(F->e_335)).b, &F->ok2_1378);
F->ok_336v = (F->ok_336v && F->ok2_1378);
if ((!F->ok_336v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_336v = 0;
if ((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)1LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)1LL))))) {
F->ok_336v = 1;
if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_add((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_sub((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_mul((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("DIV", 3)) && ((*(P826)rt_nil_check(F->b_1377)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_div((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("MOD", 3)) && ((*(P826)rt_nil_check(F->b_1377)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), rt_mod((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("**", 2)) && ((*(P826)rt_nil_check(F->b_1377)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_331((((rt_int)1LL)), f_ipow_334((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i == (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i != (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i < (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i <= (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i > (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i >= (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
}
} else if (((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)3LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)3LL)))) && (((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("+", 1)) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("-", 1))) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("*", 1))) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("/", 1))))) {
F->ok_336v = 1;
F->result_ = F->a_1376;
goto ret_;
} else if (((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)3LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)1LL)))) && rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("**", 2)))) {
F->ok_336v = 1;
F->result_ = F->a_1376;
goto ret_;
} else if ((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)2LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)2LL))))) {
F->ok_336v = 1;
if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), rt_mul((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341((rt_add((*(P826)rt_nil_check(F->a_1376)).i, (*(P826)rt_nil_check(F->b_1377)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("XOR", 3)) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i != (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(((*(P826)rt_nil_check(F->a_1376)).i == (*(P826)rt_nil_check(F->b_1377)).i)));
goto ret_;
}
} else if (((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)4LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)4LL)))) && (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1)) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("/=", 2))))) {
F->ok_336v = 1;
if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(rt_str_eq((((P800)rt_nil_check((*(P826)rt_nil_check(F->a_1376)).s))->all), (((P800)rt_nil_check((*(P826)rt_nil_check(F->b_1377)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341((!rt_str_eq((((P800)rt_nil_check((*(P826)rt_nil_check(F->a_1376)).s))->all), (((P800)rt_nil_check((*(P826)rt_nil_check(F->b_1377)).s))->all)))));
goto ret_;
} else if (((((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)5LL))) && ((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)5LL)))) && (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1)) || rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("/=", 2))))) {
F->ok_336v = 1;
if (rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341(rt_str_eq((((P800)rt_nil_check((*(P826)rt_nil_check(F->a_1376)).s))->all), (((P800)rt_nil_check((*(P826)rt_nil_check(F->b_1377)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_331((((rt_int)2LL)), f_bool_i_341((!rt_str_eq((((P800)rt_nil_check((*(P826)rt_nil_check(F->a_1376)).s))->all), (((P800)rt_nil_check((*(P826)rt_nil_check(F->b_1377)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P800)rt_nil_check(F->op_1379))->all), rt_str("&", 1)) && (((*(P826)rt_nil_check(F->a_1376)).kind == (((rt_int)5LL))) || ((*(P826)rt_nil_check(F->a_1376)).t == g_ty_ascii_889))) && (((*(P826)rt_nil_check(F->b_1377)).kind == (((rt_int)5LL))) || ((*(P826)rt_nil_check(F->b_1377)).t == g_ty_ascii_889)))) {
F->r_1381 = NULL;
F->r_1381 = f_mk_mval_331((((rt_int)5LL)), ((rt_int)0LL));
F->ok_336v = 1;
(*(P826)rt_nil_check(F->r_1381)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_343(F->a_1376), f_mstr_343(F->b_1377)); b_; }));
F->result_ = F->r_1381;
goto ret_;
}
F->ok_336v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_336) = F->ok_336v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_339(int b_338) {
  struct f_bool_text_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_338 = b_338;
if (F->b_338) {
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

static rt_int f_bool_i_341(int b_340) {
  struct f_bool_i_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_340 = b_340;
if (F->b_340) {
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

static rstr f_mstr_343(P826 v_342) {
  struct f_mstr_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_342 = v_342;
if (((*(P826)rt_nil_check(F->v_342)).kind == (((rt_int)5LL)))) {
F->result_ = (((P800)rt_nil_check((*(P826)rt_nil_check(F->v_342)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_345((*(P826)rt_nil_check(F->v_342)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_345(rt_int i_344) {
  struct f_ascii_char_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_344 = i_344;
F->printable_1382 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_344 >= ((rt_int)32LL)) && (F->i_344 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1382, rt_sub(F->i_344, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_347(rstr *op_346) {
  struct f_user_defined_347fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_346 = op_346;
F->y_1383 = NULL;
F->y_1383 = f_lookup_154(&(*F->op_346));
F->result_ = ((F->y_1383 != NULL) && (((*(P817)rt_nil_check(F->y_1383)).kind == (((rt_int)3LL))) || ((*(P817)rt_nil_check(F->y_1383)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_349(P813 t_348) {
  struct f_mcopy_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_348 = t_348;
F->ct_1384 = rt_str_copy(f_ctype_225(F->t_348));
F->name_1385 = rt_str_new(rt_add(((rt_int)((F->ct_1384).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1385, rt_str_cat(rt_str("mc_", 3), F->ct_1384));
F->l_1386 = NULL;
if ((!f_seen_name_370(g_mcopies_885, &F->name_1385))) {
{ R812 *cell1387 = rt_alloc(sizeof(R812));
(*cell1387).s = NULL;
(*cell1387).next = NULL;
F->l_1386 = cell1387;
}
(*(P811)rt_nil_check(F->l_1386)).s = f_mk_3(&F->name_1385);
(*(P811)rt_nil_check(F->l_1386)).next = g_mcopies_885;
g_mcopies_885 = F->l_1386;
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1385), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1385), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1384), rt_str(" *)d = ", 7)), f_copy_code_359(F->t_348, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1384), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_351(P813 t_350) {
  struct f_composite_351fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
F->result_ = (((((*(P813)rt_nil_check(F->t_350)).kind == (((rt_int)6LL))) || ((*(P813)rt_nil_check(F->t_350)).kind == (((rt_int)7LL)))) || ((*(P813)rt_nil_check(F->t_350)).kind == (((rt_int)17LL)))) || (((*(P813)rt_nil_check(F->t_350)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_350)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_356(rstr *lval_352, P813 t_353, rstr *v_354, P809 c_355) {
  struct f_assign_code_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_352 = lval_352;
F->t_353 = t_353;
F->v_354 = v_354;
F->c_355 = c_355;
if ((((*(P813)rt_nil_check(F->t_353)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_353)).tparams == NULL))) {
F->result_ = f_assign_code_356(&(*F->lval_352), (*(P813)rt_nil_check(F->t_353)).under, &(*F->v_354), F->c_355);
goto ret_;
}
if (((((*(P813)rt_nil_check(F->t_353)).kind == (((rt_int)17LL))) && (F->c_355 != NULL)) && ((*(P809)rt_nil_check(F->c_355)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_353)), rt_str(" u_ = ", 6)), (*F->v_354)), rt_str("; if (u_.tag != (", 17)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_355)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_225(F->t_353)), rt_str("(&", 2)), (*F->lval_352)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_351(F->t_353)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_353)), rt_str("(&", 2)), (*F->lval_352)), rt_str(", ", 2)), (*F->v_354)), rt_str(");", 2));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_353)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_352)), rt_str(", ", 2)), (*F->v_354)), rt_str(");", 2));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_353)).kind == (((rt_int)6LL))) || ((*(P813)rt_nil_check(F->t_353)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_353)), rt_str("(&", 2)), (*F->lval_352)), rt_str(", ", 2)), (*F->v_354)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_352), rt_str(" = ", 3)), f_checked_204(F->t_353, F->c_355, &(*F->v_354))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_359(P813 t_357, rstr *v_358) {
  struct f_copy_code_359fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
F->v_358 = v_358;
if ((((*(P813)rt_nil_check(F->t_357)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_357)).tparams == NULL))) {
F->result_ = f_copy_code_359((*(P813)rt_nil_check(F->t_357)).under, &(*F->v_358));
goto ret_;
}
if (f_composite_351(F->t_357)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_357)), rt_str("(", 1)), (*F->v_358)), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_357)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_358)), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_357)).kind == (((rt_int)6LL))) || ((*(P813)rt_nil_check(F->t_357)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_357)), rt_str("(", 1)), (*F->v_358)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_358);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_363(P813 t_360, rstr *a_361, rstr *b_362) {
  struct f_eq_code_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_360 = t_360;
F->a_361 = a_361;
F->b_362 = b_362;
if ((((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_360)).tparams == NULL))) {
F->result_ = f_eq_code_363((*(P813)rt_nil_check(F->t_360)).under, &(*F->a_361), &(*F->b_362));
goto ret_;
}
if (f_composite_351(F->t_360)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_360)), rt_str("(", 1)), (*F->a_361)), rt_str(", ", 2)), (*F->b_362)), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_361)), rt_str(", ", 2)), (*F->b_362)), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_361)), rt_str(" == ", 4)), (*F->b_362)), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_361)), rt_str(" == ", 4)), (*F->b_362)), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_361)), rt_str(", ", 2)), (*F->b_362)), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)6LL))) || ((*(P813)rt_nil_check(F->t_360)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_360)), rt_str("(", 1)), (*F->a_361)), rt_str(", ", 2)), (*F->b_362)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_361)), rt_str(" == ", 4)), (*F->b_362)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_367(rstr *lval_364, P813 t_365, rstr *v_366) {
  struct f_elem_assign_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_364 = lval_364;
F->t_365 = t_365;
F->v_366 = v_366;
F->result_ = f_assign_code_356(&(*F->lval_364), F->t_365, &(*F->v_366), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_370(P811 l_368, rstr *s_369) {
  struct f_seen_name_370fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_368 = l_368;
F->s_369 = s_369;
F->p_1388 = NULL;
F->p_1388 = F->l_368;
while ((F->p_1388 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P811)rt_nil_check(F->p_1388)).s))->all), (*F->s_369))) {
F->result_ = 1;
goto ret_;
}
F->p_1388 = (*(P811)rt_nil_check(F->p_1388)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_371(void) {
  struct f_emit_helpers_371fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1389 = NULL;
F->t_1390 = NULL;
F->t_1390 = g_all_types_848;
F->done_1391 = NULL;
while ((F->t_1390 != NULL)) {
if ((f_composite_351(F->t_1390) && (!f_seen_name_370(F->done_1391, &(((P800)rt_nil_check((*(P813)rt_nil_check(F->t_1390)).cname))->all))))) {
F->l_1392 = NULL;
F->c_1393 = rt_str_new(((rt_int)(((((P800)rt_nil_check((*(P813)rt_nil_check(F->t_1390)).cname))->all)).len)));
rt_str_assign(&F->c_1393, (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_1390)).cname))->all));
{ R812 *cell1394 = rt_alloc(sizeof(R812));
(*cell1394).s = NULL;
(*cell1394).next = NULL;
F->l_1392 = cell1394;
}
(*(P811)rt_nil_check(F->l_1392)).s = (*(P813)rt_nil_check(F->t_1390)).cname;
(*(P811)rt_nil_check(F->l_1392)).next = F->done_1391;
F->done_1391 = F->l_1392;
f_put_27(g_out_helpers_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1393), rt_str("(", 1)), F->c_1393), rt_str(" *d, ", 5)), F->c_1393), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1393), rt_str(" cp_", 4)), F->c_1393), rt_str("(", 1)), F->c_1393), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1393), rt_str("(", 1)), F->c_1393), rt_str(" a, ", 4)), F->c_1393), rt_str(" b);", 4)); b_; }));
f_helper_bodies_373(F->t_1390);
}
F->t_1390 = (*(P813)rt_nil_check(F->t_1390)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_373(P813 t_372) {
  struct f_helper_bodies_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_372 = t_372;
F->c_1395 = rt_str_new(((rt_int)(((((P800)rt_nil_check((*(P813)rt_nil_check(F->t_372)).cname))->all)).len)));
rt_str_assign(&F->c_1395, (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_372)).cname))->all));
F->b_1396 = NULL;
F->b_1396 = g_out_funcs_854;
if (((*(P813)rt_nil_check(F->t_372)).kind == (((rt_int)6LL)))) {
F->e_1397 = NULL;
F->e_1397 = (*(P813)rt_nil_check(F->t_372)).elem;
F->sizes_1398 = NULL;
F->sizes_1398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1399 = NULL;
F->bounds_1399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1401 = ((rt_int)1LL), hi1402 = (*(P813)rt_nil_check(F->t_372)).ndim;
for (rt_int it1403 = lo1401; it1403 <= hi1402; it1403++) {
F->k_1400 = it1403;
F->l_1404 = rt_str_copy(f_dim_lo_233(F->k_1400));
F->h_1405 = rt_str_copy(f_dim_hi_235(F->k_1400));
F->sizes_1398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->sizes_1398))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1404), rt_str(", d->", 5)), F->h_1405), rt_str(") != RT_R_EXT(s.", 16)), F->l_1404), rt_str(", s.", 4)), F->h_1405), rt_str(")", 1)); b_; }));
F->bounds_1399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->bounds_1399))->all), rt_str(" || a.", 6)), F->l_1404), rt_str(" != b.", 6)), F->l_1404), rt_str(" || a.", 6)), F->h_1405), rt_str(" != b.", 6)), F->h_1405); b_; }));
}
}
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" *d, ", 5)), F->c_1395), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P800)rt_nil_check(F->sizes_1398))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_240(F->t_372, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1395), rt_str(" cp_", 4)), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1395), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_225(F->e_1397)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_372, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_372, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_359(F->e_1397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" a, ", 4)), F->c_1395), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P800)rt_nil_check(F->bounds_1399))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_372, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_363(F->e_1397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P813)rt_nil_check(F->t_372)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" *d, ", 5)), F->c_1395), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P813)rt_nil_check(F->t_372)).under) && ((*(P813)rt_nil_check(F->t_372)).elemcons != NULL)) && ((*(P809)rt_nil_check((*(P813)rt_nil_check(F->t_372)).elemcons)).lo != NULL))) {
F->saved_1406 = NULL;
F->saved_1406 = g_psub_864;
F->p_1407 = NULL;
F->p_1407 = (*(P813)rt_nil_check(F->t_372)).tparams;
while ((F->p_1407 != NULL)) {
F->l1_1408 = NULL;
F->l2_1409 = NULL;
{ R812 *cell1410 = rt_alloc(sizeof(R812));
(*cell1410).s = NULL;
(*cell1410).next = NULL;
F->l1_1408 = cell1410;
}
{ R812 *cell1411 = rt_alloc(sizeof(R812));
(*cell1411).s = NULL;
(*cell1411).next = NULL;
F->l2_1409 = cell1411;
}
(*(P811)rt_nil_check(F->l1_1408)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1407)).name))->all))), rt_str("@", 1)); b_; }));
(*(P811)rt_nil_check(F->l2_1409)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1407)).name))->all))); b_; }));
(*(P811)rt_nil_check(F->l1_1408)).next = F->l2_1409;
(*(P811)rt_nil_check(F->l2_1409)).next = g_psub_864;
g_psub_864 = F->l1_1408;
F->p_1407 = (*(P807)rt_nil_check(F->p_1407)).next;
}
if (((*(P813)rt_nil_check((*(P813)rt_nil_check(F->t_372)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check((*(P813)rt_nil_check(F->t_372)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check((*(P813)rt_nil_check(F->t_372)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check((*(P813)rt_nil_check(F->t_372)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P800)rt_nil_check((*(P809)rt_nil_check((*(P813)rt_nil_check(F->t_372)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_864 = F->saved_1406;
} else {
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P813)rt_nil_check(F->t_372)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1395), rt_str(" cp_", 4)), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" s) { s.all = ", 14)), f_copy_code_359((*(P813)rt_nil_check(F->t_372)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" a, ", 4)), F->c_1395), rt_str(" b) { return ", 13)), f_eq_code_363((*(P813)rt_nil_check(F->t_372)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P813)rt_nil_check(F->t_372)).kind == (((rt_int)17LL)))) {
F->f_1412 = NULL;
F->f_1412 = (*(P813)rt_nil_check(F->t_372)).fields;
F->i_1413 = ((rt_int)0LL);
F->cases_as_1414 = NULL;
F->cases_as_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1415 = NULL;
F->cases_cp_1415 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1416 = NULL;
F->cases_eq_1416 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1412 != NULL)) {
F->fn_1417 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1412)).name))->all))));
F->cases_as_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->cases_as_1414))->all), rt_str(" case ", 6)), f_itos_7(F->i_1413)), rt_str(": d->", 5)), F->fn_1417), rt_str(" = ", 3)), f_copy_code_359((*(P815)rt_nil_check(F->f_1412)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1417); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1415 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->cases_cp_1415))->all), rt_str(" case ", 6)), f_itos_7(F->i_1413)), rt_str(": d.", 4)), F->fn_1417), rt_str(" = ", 3)), f_copy_code_359((*(P815)rt_nil_check(F->f_1412)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1417); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1416 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->cases_eq_1416))->all), rt_str(" case ", 6)), f_itos_7(F->i_1413)), rt_str(": return ", 9)), f_eq_code_363((*(P815)rt_nil_check(F->f_1412)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1417); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1417); b_; }))), rt_str(";", 1)); b_; }));
F->i_1413 = rt_add(F->i_1413, ((rt_int)1LL));
F->f_1412 = (*(P815)rt_nil_check(F->f_1412)).next;
}
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" *d, ", 5)), F->c_1395), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P800)rt_nil_check(F->cases_as_1414))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1395), rt_str(" cp_", 4)), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1395), rt_str(" d = s; switch (s.tag) {", 24)), (((P800)rt_nil_check(F->cases_cp_1415))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" a, ", 4)), F->c_1395), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P800)rt_nil_check(F->cases_eq_1416))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1418 = NULL;
F->f_1418 = (*(P813)rt_nil_check(F->t_372)).fields;
F->conds_1419 = NULL;
F->conds_1419 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" *d, ", 5)), F->c_1395), rt_str(" s) {", 5)); b_; }));
while ((F->f_1418 != NULL)) {
F->fn_1420 = rt_str_copy(f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1418)).name))->all)));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1420); b_; }), (*(P815)rt_nil_check(F->f_1418)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1420); b_; }))); b_; }));
F->f_1418 = (*(P815)rt_nil_check(F->f_1418)).next;
}
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1395), rt_str(" cp_", 4)), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1395), rt_str(" d = s;", 7)); b_; }));
F->f_1418 = (*(P813)rt_nil_check(F->t_372)).fields;
while ((F->f_1418 != NULL)) {
F->fn_1421 = rt_str_copy(f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1418)).name))->all)));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1421), rt_str(" = ", 3)), f_copy_code_359((*(P815)rt_nil_check(F->f_1418)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1421); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1419 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->conds_1419))->all), rt_str(" && ", 4)), f_eq_code_363((*(P815)rt_nil_check(F->f_1418)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1421); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1421); b_; }))); b_; }));
F->f_1418 = (*(P815)rt_nil_check(F->f_1418)).next;
}
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1395), rt_str("(", 1)), F->c_1395), rt_str(" a, ", 4)), F->c_1395), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P800)rt_nil_check(F->conds_1419))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_375(P807 elems_374) {
  struct f_declare_body_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_374 = elems_374;
F->e_1422 = NULL;
F->e_1422 = F->elems_374;
while ((F->e_1422 != NULL)) {
if ((((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)41LL))) && ((*(P807)rt_nil_check(F->e_1422)).flag == ((rt_int)0LL)))) {
f_manifest_const_377(F->e_1422);
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)47LL)))) {
f_gen_capsule_385(F->e_1422);
} else if (((((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)48LL))) && ((*(P807)rt_nil_check(F->e_1422)).flag != ((rt_int)1LL))) && ((*(P807)rt_nil_check(F->e_1422)).flag != ((rt_int)3LL)))) {
f_gen_expose_402(F->e_1422);
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)49LL)))) {
F->y_1423 = NULL;
F->y_1423 = f_new_sym_172((((rt_int)7LL)), (*(P807)rt_nil_check(F->e_1422)).name);
(*(P817)rt_nil_check(F->y_1423)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1423, (*(P807)rt_nil_check(F->e_1422)).line);
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1423)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1423)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)42LL)))) {
F->y_1424 = NULL;
F->y_1424 = f_new_sym_172((((rt_int)6LL)), (*(P807)rt_nil_check(F->e_1422)).name);
(*(P817)rt_nil_check(F->y_1424)).st = (*(P807)rt_nil_check(F->e_1422)).a;
(*(P817)rt_nil_check(F->y_1424)).decl = F->e_1422;
f_define_159(F->y_1424, (*(P807)rt_nil_check(F->e_1422)).line);
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)44LL)))) {
F->y_1425 = NULL;
F->y_1425 = f_new_sym_172((((rt_int)5LL)), (*(P807)rt_nil_check(F->e_1422)).name);
F->t_1426 = NULL;
F->t_1426 = f_new_typ_174((((rt_int)8LL)));
(*(P813)rt_nil_check(F->t_1426)).name = (*(P807)rt_nil_check(F->e_1422)).name;
(*(P813)rt_nil_check(F->t_1426)).decl = F->e_1422;
(*(P817)rt_nil_check(F->y_1425)).t = F->t_1426;
f_define_159(F->y_1425, (*(P807)rt_nil_check(F->e_1422)).line);
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)43LL)))) {
F->y_1427 = NULL;
F->y_1427 = f_new_sym_172((((rt_int)5LL)), (*(P807)rt_nil_check(F->e_1422)).name);
(*(P817)rt_nil_check(F->y_1427)).st = (*(P807)rt_nil_check(F->e_1422)).a;
(*(P817)rt_nil_check(F->y_1427)).decl = F->e_1422;
f_define_159(F->y_1427, (*(P807)rt_nil_check(F->e_1422)).line);
}
F->e_1422 = (*(P807)rt_nil_check(F->e_1422)).next;
}
F->e_1422 = F->elems_374;
while ((F->e_1422 != NULL)) {
if (((((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)45LL))) || ((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)46LL)))) || ((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)50LL))))) {
F->y_1428 = NULL;
f_declare_subprogram_426(F->e_1422);
F->y_1428 = f_lookup_decl_156(F->e_1422);
(*(P817)rt_nil_check(F->y_1428)).home = F->elems_374;
} else if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)51LL)))) {
F->g_1429 = NULL;
F->g_1429 = f_new_sym_172((((rt_int)10LL)), (*(P807)rt_nil_check(F->e_1422)).name);
(*(P817)rt_nil_check(F->g_1429)).decl = F->e_1422;
(*(P817)rt_nil_check(F->g_1429)).level = g_cur_level_860;
(*(P817)rt_nil_check(F->g_1429)).owner = g_func_sym_871;
(*(P817)rt_nil_check(F->g_1429)).gctx = g_fctx_861;
f_define_159(F->g_1429, (*(P807)rt_nil_check(F->e_1422)).line);
}
F->e_1422 = (*(P807)rt_nil_check(F->e_1422)).next;
}
F->e_1422 = F->elems_374;
{
F->snap_1430 = NULL;
while ((F->e_1422 != NULL)) {
if (((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)51LL)))) {
if ((F->snap_1430 == NULL)) {
{ P821 cell1431 = rt_alloc(sizeof *cell1431);
rt_int pv1432 = (((rt_int)4093LL));
cell1431->p_n = pv1432;
cell1431->all.lo = ((rt_int)0LL); cell1431->all.hi = pv1432;
cell1431->all.lo2 = cell1431->all.hi2 = 1;
cell1431->all.p = rt_alloc(sizeof(P817) * (size_t)(RT_CNT(cell1431->all)) + 1);
for (rt_int i1433 = 0; i1433 < (RT_CNT(cell1431->all)); i1433++) {
cell1431->all.p[i1433] = NULL;
}
F->snap_1430 = cell1431;
}
{ rt_int lo1435 = ((rt_int)0LL), hi1436 = (((rt_int)4093LL));
for (rt_int it1437 = lo1435; it1437 <= hi1436; it1437++) {
F->i_1434 = it1437;
(((P821)rt_nil_check(F->snap_1430))->all).p[(rt_index(F->i_1434, (((P821)rt_nil_check(F->snap_1430))->all).lo, (((P821)rt_nil_check(F->snap_1430))->all).hi) - (((P821)rt_nil_check(F->snap_1430))->all).lo)] = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(F->i_1434, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1438 = NULL;
F->g_1438 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all));
(*(P817)rt_nil_check(F->g_1438)).env = F->snap_1430;
}
}
F->e_1422 = (*(P807)rt_nil_check(F->e_1422)).next;
}
}
F->e_1422 = F->elems_374;
while ((F->e_1422 != NULL)) {
if ((((*(P807)rt_nil_check(F->e_1422)).kind == (((rt_int)45LL))) && (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1439 = NULL;
F->y_1439 = f_lookup_decl_156(F->e_1422);
if (((((F->y_1439 != NULL) && ((*(P817)rt_nil_check(F->y_1439)).params != NULL)) && ((*(P819)rt_nil_check((*(P817)rt_nil_check(F->y_1439)).params)).next == NULL)) && (((*(P813)rt_nil_check((*(P819)rt_nil_check((*(P817)rt_nil_check(F->y_1439)).params)).t)).kind == (((rt_int)15LL))) || ((*(P813)rt_nil_check((*(P819)rt_nil_check((*(P817)rt_nil_check(F->y_1439)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1422)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P813)rt_nil_check((*(P819)rt_nil_check((*(P817)rt_nil_check(F->y_1439)).params)).t)).initp = F->y_1439;
} else {
(*(P813)rt_nil_check((*(P819)rt_nil_check((*(P817)rt_nil_check(F->y_1439)).params)).t)).finalp = F->y_1439;
}
}
}
F->e_1422 = (*(P807)rt_nil_check(F->e_1422)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_377(P807 d_376) {
  struct f_manifest_const_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_376 = d_376;
F->v_1441 = NULL;
F->y_1442 = NULL;
F->t_1443 = NULL;
F->ctext_1444 = NULL;
if (((*(P807)rt_nil_check(F->d_376)).a != NULL)) {
if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->d_376)).a)).kind != (((rt_int)70LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->d_376)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1441 = f_meval_337((*(P807)rt_nil_check(F->d_376)).b, &F->ok_1440);
if ((!F->ok_1440)) {
goto ret_;
}
{
F->saved_1445 = NULL;
F->saved_1445 = g_code_857;
g_code_857 = f_new_buffer_24();
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
{ rt_frame xf1446;
if (RT_TRY(xf1446)) {
F->ctext_1444 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_641((*(P807)rt_nil_check(F->d_376)).b, NULL, &F->t_1443)), rt_str(")", 1)); b_; }));
RT_POP(xf1446);
} else {
RT_POP(xf1446);
int x1447 = rt_xcur;
if (0 || x1447 == ex_compile_error_1) {
F->ok_1440 = 0;
} else {
rt_raise(x1447);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
F->ok_1440 = (F->ok_1440 && ((*(P830)rt_nil_check(g_code_857)).head == NULL));
g_code_857 = F->saved_1445;
}
if (((!F->ok_1440) || (((*(P807)rt_nil_check(F->d_376)).a != NULL) && ((*(P813)rt_nil_check(F->t_1443)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P826)rt_nil_check(F->v_1441)).kind == (((rt_int)4LL)))) {
(*(P826)rt_nil_check(F->v_1441)).t = F->t_1443;
(*(P826)rt_nil_check(F->v_1441)).i = f_lit_index_253((*(P813)rt_nil_check(f_base_of_214(F->t_1443))).lits, &(((P800)rt_nil_check((*(P826)rt_nil_check(F->v_1441)).s))->all));
}
(*(P807)rt_nil_check(F->d_376)).flag = ((rt_int)1LL);
F->y_1442 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->d_376)).name);
(*(P817)rt_nil_check(F->y_1442)).t = F->t_1443;
(*(P817)rt_nil_check(F->y_1442)).c = f_new_cons_175();
(*(P817)rt_nil_check(F->y_1442)).mv = F->v_1441;
if (((*(P826)rt_nil_check(F->v_1441)).kind == (((rt_int)1LL)))) {
(*(P817)rt_nil_check(F->y_1442)).mvalue = (*(P826)rt_nil_check(F->v_1441)).i;
(*(P817)rt_nil_check(F->y_1442)).hasmv = 1;
}
(*(P817)rt_nil_check(F->y_1442)).ro_flag = 1;
(*(P817)rt_nil_check(F->y_1442)).access = F->ctext_1444;
f_define_159(F->y_1442, (*(P807)rt_nil_check(F->d_376)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_381(P807 d_378, rstr *name_379, int *ro_380) {
  struct f_exported_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_378 = d_378;
F->name_379 = name_379;
F->ro_380 = ro_380;
F->ro_380v = *F->ro_380;
F->p_1448 = NULL;
F->p_1448 = (*(P807)rt_nil_check(F->d_378)).a;
F->ro_380v = 0;
if (((*(P807)rt_nil_check(F->d_378)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1448 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1448)).name))->all), (*F->name_379))) {
F->ro_380v = ((*(P807)rt_nil_check(F->p_1448)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1448 = (*(P807)rt_nil_check(F->p_1448)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_380) = F->ro_380v;
  RT_FPOP();
  return F->result_;
}

static P817 f_copy_sym_383(P817 y_382) {
  struct f_copy_sym_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_382 = y_382;
F->z_1449 = NULL;
{ R818 *cell1450 = rt_alloc(sizeof(R818));
(*cell1450).name = NULL;
(*cell1450).t = NULL;
(*cell1450).c = NULL;
(*cell1450).access = NULL;
(*cell1450).cname = NULL;
(*cell1450).st = NULL;
(*cell1450).decl = NULL;
(*cell1450).params = NULL;
(*cell1450).result = NULL;
(*cell1450).members = NULL;
(*cell1450).mnext = NULL;
(*cell1450).binds = NULL;
(*cell1450).insts = NULL;
(*cell1450).env = NULL;
(*cell1450).chain = NULL;
(*cell1450).stack = NULL;
(*cell1450).owner = NULL;
(*cell1450).gctx = NULL;
(*cell1450).mv = NULL;
(*cell1450).reqs = NULL;
(*cell1450).home = NULL;
F->z_1449 = cell1450;
}
(*(P817)rt_nil_check(F->z_1449)).kind = (*(P817)rt_nil_check(F->y_382)).kind;
(*(P817)rt_nil_check(F->z_1449)).name = (*(P817)rt_nil_check(F->y_382)).name;
(*(P817)rt_nil_check(F->z_1449)).t = (*(P817)rt_nil_check(F->y_382)).t;
(*(P817)rt_nil_check(F->z_1449)).c = (*(P817)rt_nil_check(F->y_382)).c;
(*(P817)rt_nil_check(F->z_1449)).access = (*(P817)rt_nil_check(F->y_382)).access;
(*(P817)rt_nil_check(F->z_1449)).cname = (*(P817)rt_nil_check(F->y_382)).cname;
(*(P817)rt_nil_check(F->z_1449)).ro_flag = (*(P817)rt_nil_check(F->y_382)).ro_flag;
(*(P817)rt_nil_check(F->z_1449)).mvalue = (*(P817)rt_nil_check(F->y_382)).mvalue;
(*(P817)rt_nil_check(F->z_1449)).hasmv = (*(P817)rt_nil_check(F->y_382)).hasmv;
(*(P817)rt_nil_check(F->z_1449)).st = (*(P817)rt_nil_check(F->y_382)).st;
(*(P817)rt_nil_check(F->z_1449)).decl = (*(P817)rt_nil_check(F->y_382)).decl;
(*(P817)rt_nil_check(F->z_1449)).params = (*(P817)rt_nil_check(F->y_382)).params;
(*(P817)rt_nil_check(F->z_1449)).result = (*(P817)rt_nil_check(F->y_382)).result;
(*(P817)rt_nil_check(F->z_1449)).level = (*(P817)rt_nil_check(F->y_382)).level;
(*(P817)rt_nil_check(F->z_1449)).byref = (*(P817)rt_nil_check(F->y_382)).byref;
(*(P817)rt_nil_check(F->z_1449)).members = (*(P817)rt_nil_check(F->y_382)).members;
(*(P817)rt_nil_check(F->z_1449)).env = (*(P817)rt_nil_check(F->y_382)).env;
F->result_ = F->z_1449;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_385(P807 d_384) {
  struct f_gen_capsule_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_384 = d_384;
F->y_1451 = NULL;
F->y_1451 = f_new_sym_172((((rt_int)8LL)), (*(P807)rt_nil_check(F->d_384)).name);
F->saved_1452 = NULL;
F->saved_1452 = g_suppress_877;
(*(P817)rt_nil_check(F->y_1451)).decl = F->d_384;
if (((*(P807)rt_nil_check(F->d_384)).b == NULL)) {
g_suppress_877 = f_suppressing_433((*(P807)rt_nil_check(F->d_384)).prags);
f_elaborate_capsule_394(F->d_384, F->y_1451, NULL, F->d_384);
g_suppress_877 = F->saved_1452;
}
f_define_159(F->y_1451, (*(P807)rt_nil_check(F->d_384)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_389(P807 d_386, P807 args_387, rt_int line_388) {
  struct f_capsule_params_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_386 = d_386;
F->args_387 = args_387;
F->line_388 = line_388;
F->p_1453 = NULL;
F->p_1453 = (*(P807)rt_nil_check(F->d_386)).b;
F->a_1454 = NULL;
F->a_1454 = F->args_387;
F->t_1455 = NULL;
F->vt_1456 = NULL;
F->c_1457 = NULL;
while (((F->p_1453 != NULL) && (F->a_1454 != NULL))) {
F->t_1455 = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1453)).a, &F->c_1457);
if (((*(P807)rt_nil_check(F->p_1453)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_388, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P807)rt_nil_check(F->p_1453)).ival == (((rt_int)2LL))) || ((*(P807)rt_nil_check(F->p_1453)).ival == (((rt_int)4LL))))) {
F->lv_1458 = NULL;
F->lc_1459 = NULL;
F->y_1461 = NULL;
F->y_1461 = f_new_sym_172((((rt_int)1LL)), (*(P807)rt_nil_check(F->p_1453)).name);
f_lvalue_610(F->a_1454, &F->lv_1458, &F->vt_1456, &F->lc_1459, &F->ro_1460);
f_check_type_223(F->vt_1456, F->t_1455, F->line_388);
if ((F->ro_1460 && ((*(P807)rt_nil_check(F->p_1453)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_388, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1453)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_859) {
F->f_1462 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1453)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_1455)), rt_str(" *", 2)), F->f_1462), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1462), rt_str(" = &", 4)), (((P800)rt_nil_check(F->lv_1458))->all)), rt_str(";", 1)); b_; }));
(*(P817)rt_nil_check(F->y_1461)).level = g_cur_level_860;
(*(P817)rt_nil_check(F->y_1461)).access = f_mk_3(&F->f_1462);
(*(P817)rt_nil_check(F->y_1461)).byref = 1;
} else {
F->g_1463 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1453)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_1455)), rt_str(" *", 2)), F->g_1463), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1463), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1463, rt_str(" = &", 4)), (((P800)rt_nil_check(F->lv_1458))->all)), rt_str(";", 1)); b_; }));
(*(P817)rt_nil_check(F->y_1461)).level = ((rt_int)0LL);
(*(P817)rt_nil_check(F->y_1461)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1463), rt_str(")", 1)); b_; }));
}
(*(P817)rt_nil_check(F->y_1461)).t = F->t_1455;
(*(P817)rt_nil_check(F->y_1461)).c = F->lc_1459;
(*(P817)rt_nil_check(F->y_1461)).ro_flag = ((*(P807)rt_nil_check(F->p_1453)).ival == (((rt_int)4LL)));
f_define_159(F->y_1461, F->line_388);
} else {
F->y_1464 = NULL;
F->y_1464 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_1453)).name);
F->v_1465 = rt_str_copy(f_gexpr_641(F->a_1454, F->t_1455, &F->vt_1456));
f_check_type_223(F->vt_1456, F->t_1455, F->line_388);
{
F->access_1466 = rt_str_copy(f_storage_442(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1453)).name))->all), F->t_1455));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1466, rt_str(" = ", 3)), f_copy_code_359(F->t_1455, &F->v_1465)), rt_str(";", 1)); b_; }));
f_bind_445(F->y_1464, &F->access_1466);
}
(*(P817)rt_nil_check(F->y_1464)).t = F->t_1455;
(*(P817)rt_nil_check(F->y_1464)).c = F->c_1457;
(*(P817)rt_nil_check(F->y_1464)).ro_flag = 1;
f_define_159(F->y_1464, F->line_388);
}
F->p_1453 = (*(P807)rt_nil_check(F->p_1453)).next;
F->a_1454 = (*(P807)rt_nil_check(F->a_1454)).next;
}
if (((F->p_1453 != NULL) || (F->a_1454 != NULL))) {
f_fail_23(F->line_388, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_386)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_394(P807 d_390, P817 y_391, P807 args_392, P807 owner_393) {
  struct f_elaborate_capsule_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_390 = d_390;
F->y_391 = y_391;
F->args_392 = args_392;
F->owner_393 = owner_393;
F->cr_1467 = NULL;
F->ctx_1468 = NULL;
F->saved_gotos_1469 = NULL;
F->m_1470 = NULL;
F->p_1471 = NULL;
F->p_1471 = (*(P807)rt_nil_check(F->d_390)).a;
{ R835 *cell1473 = rt_alloc(sizeof(R835));
(*cell1473).d = NULL;
(*cell1473).next = NULL;
F->cr_1467 = cell1473;
}
(*(P834)rt_nil_check(F->cr_1467)).d = F->d_390;
(*(P834)rt_nil_check(F->cr_1467)).next = g_caps_862;
g_caps_862 = F->cr_1467;
f_open_scope_168();
if (((*(P807)rt_nil_check(F->d_390)).b != NULL)) {
f_capsule_params_389(F->d_390, F->args_392, (*(P807)rt_nil_check(F->owner_393)).line);
}
{ R825 *cell1474 = rt_alloc(sizeof(R825));
(*cell1474).imps = NULL;
(*cell1474).next = NULL;
F->ctx_1468 = cell1474;
}
(*(P824)rt_nil_check(F->ctx_1468)).depth = g_depth_846;
(*(P824)rt_nil_check(F->ctx_1468)).imps = (*(P807)rt_nil_check(F->d_390)).d;
(*(P824)rt_nil_check(F->ctx_1468)).all_imp = ((*(P807)rt_nil_check(F->d_390)).flag >= ((rt_int)2LL));
(*(P824)rt_nil_check(F->ctx_1468)).next = g_fctx_861;
g_fctx_861 = F->ctx_1468;
F->saved_gotos_1469 = g_gotos_880;
g_gotos_880 = NULL;
f_declare_labels_468((*(P807)rt_nil_check(F->d_390)).c);
f_declare_body_375((*(P807)rt_nil_check(F->d_390)).c);
f_capsule_body_475((*(P807)rt_nil_check(F->d_390)).c);
{
F->w_1475 = NULL;
{ R837 *cell1476 = rt_alloc(sizeof(R837));
(*cell1476).d = NULL;
(*cell1476).w = NULL;
(*cell1476).next = NULL;
F->w_1475 = cell1476;
}
(*(P836)rt_nil_check(F->w_1475)).d = F->owner_393;
(*(P836)rt_nil_check(F->w_1475)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_462((*(P807)rt_nil_check(F->d_390)).c); b_; }));
(*(P836)rt_nil_check(F->w_1475)).next = g_cap_waits_863;
g_cap_waits_863 = F->w_1475;
}
g_fctx_861 = (*(P824)rt_nil_check(g_fctx_861)).next;
F->m_1470 = g_scope_stack_847;
while (((F->m_1470 != NULL) && ((*(P817)rt_nil_check(F->m_1470)).depth == g_depth_846))) {
if ((((((*(P817)rt_nil_check(F->m_1470)).kind == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->m_1470)).t == NULL)) && ((*(P817)rt_nil_check(F->m_1470)).decl != NULL)) && ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->m_1470)).decl)).kind == (((rt_int)43LL))))) {
(*(P817)rt_nil_check(F->m_1470)).t = f_new_type_306(F->m_1470, f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->d_390)).line), &(*(P817)rt_nil_check(F->m_1470)).c);
} else if (((((*(P817)rt_nil_check(F->m_1470)).kind == (((rt_int)5LL))) || ((*(P817)rt_nil_check(F->m_1470)).kind == (((rt_int)6LL)))) && ((*(P817)rt_nil_check(F->m_1470)).t == NULL))) {
(*(P817)rt_nil_check(F->m_1470)).t = f_resolve_subtype_256((*(P817)rt_nil_check(F->m_1470)).st, &(*(P817)rt_nil_check(F->m_1470)).c);
} else if ((((*(P817)rt_nil_check(F->m_1470)).kind == (((rt_int)5LL))) && ((*(P813)rt_nil_check((*(P817)rt_nil_check(F->m_1470)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_404((*(P817)rt_nil_check(F->m_1470)).t);
}
F->m_1470 = (*(P817)rt_nil_check(F->m_1470)).stack;
}
F->m_1470 = g_scope_stack_847;
while (((F->m_1470 != NULL) && ((*(P817)rt_nil_check(F->m_1470)).depth == g_depth_846))) {
if (f_exported_381(F->d_390, &(((P800)rt_nil_check((*(P817)rt_nil_check(F->m_1470)).name))->all), &F->ro_1472)) {
F->z_1477 = NULL;
F->z_1477 = f_copy_sym_383(F->m_1470);
if (F->ro_1472) {
(*(P817)rt_nil_check(F->z_1477)).ro_flag = 1;
}
(*(P817)rt_nil_check(F->z_1477)).mnext = (*(P817)rt_nil_check(F->y_391)).members;
(*(P817)rt_nil_check(F->y_391)).members = F->z_1477;
}
F->m_1470 = (*(P817)rt_nil_check(F->m_1470)).stack;
}
while ((F->p_1471 != NULL)) {
if ((((!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1471)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1471)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1471)).name))->all)) == NULL) || ((*(P817)rt_nil_check(f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1471)).name))->all)))).depth != g_depth_846)))) {
f_fail_23((*(P807)rt_nil_check(F->d_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1471)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_390)).name))->all)); b_; }));
}
F->p_1471 = (*(P807)rt_nil_check(F->p_1471)).next;
}
f_close_scope_169();
g_caps_862 = (*(P834)rt_nil_check(g_caps_862)).next;
g_gotos_880 = F->saved_gotos_1469;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_397(P807 d_395, rstr *op_396) {
  struct f_exports_op_397fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_395 = d_395;
F->op_396 = op_396;
F->p_1478 = NULL;
if ((F->d_395 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1478 = (*(P807)rt_nil_check(F->d_395)).a;
while ((F->p_1478 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1478)).name))->all), (*F->op_396))) {
F->result_ = 1;
goto ret_;
}
F->p_1478 = (*(P807)rt_nil_check(F->p_1478)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P800 f_renamed_400(P807 d_398, P817 z_399) {
  struct f_renamed_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_398 = d_398;
F->z_399 = z_399;
F->r_1479 = NULL;
F->r_1479 = (*(P807)rt_nil_check(F->d_398)).c;
while ((F->r_1479 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->r_1479)).name))->all), (((P800)rt_nil_check((*(P817)rt_nil_check(F->z_399)).name))->all))) {
F->result_ = (*(P807)rt_nil_check((*(P807)rt_nil_check(F->r_1479)).a)).name;
goto ret_;
}
F->r_1479 = (*(P807)rt_nil_check(F->r_1479)).next;
}
F->result_ = (*(P817)rt_nil_check(F->z_399)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_402(P807 d_401) {
  struct f_gen_expose_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_401 = d_401;
F->y_1480 = NULL;
F->y_1480 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->d_401)).name))->all));
F->m_1481 = NULL;
F->p_1482 = NULL;
F->p_1482 = (*(P807)rt_nil_check(F->d_401)).a;
F->r_1483 = NULL;
F->r_1483 = (*(P807)rt_nil_check(F->d_401)).c;
if (((F->y_1480 == NULL) || ((*(P817)rt_nil_check(F->y_1480)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P807)rt_nil_check(F->d_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->d_401)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P807)rt_nil_check(F->d_401)).flag == ((rt_int)1LL)) || ((*(P807)rt_nil_check(F->d_401)).flag == ((rt_int)3LL)))) {
F->inst_1484 = NULL;
F->inst_1484 = f_new_sym_172((((rt_int)8LL)), (*(P817)rt_nil_check(F->y_1480)).name);
(*(P817)rt_nil_check(F->inst_1484)).decl = (*(P817)rt_nil_check(F->y_1480)).decl;
f_elaborate_capsule_394((*(P817)rt_nil_check(F->y_1480)).decl, F->inst_1484, (*(P807)rt_nil_check(F->d_401)).b, F->d_401);
F->y_1480 = F->inst_1484;
} else if ((((*(P817)rt_nil_check(F->y_1480)).decl != NULL) && ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1480)).decl)).b != NULL))) {
f_fail_23((*(P807)rt_nil_check(F->d_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_401)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P807)rt_nil_check(F->d_401)).b != NULL)) {
f_fail_23((*(P807)rt_nil_check(F->d_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1483 != NULL)) {
F->found_1485 = 0;
F->m_1481 = (*(P817)rt_nil_check(F->y_1480)).members;
while ((F->m_1481 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->m_1481)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->r_1483)).name))->all))) {
F->found_1485 = 1;
}
F->m_1481 = (*(P817)rt_nil_check(F->m_1481)).mnext;
}
if ((!F->found_1485)) {
f_fail_23((*(P807)rt_nil_check(F->d_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->r_1483)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_401)).name))->all)); b_; }));
}
F->r_1483 = (*(P807)rt_nil_check(F->r_1483)).next;
}
if (((*(P807)rt_nil_check(F->d_401)).ival == ((rt_int)1LL))) {
F->m_1481 = (*(P817)rt_nil_check(F->y_1480)).members;
while ((F->m_1481 != NULL)) {
F->z_1486 = NULL;
F->z_1486 = f_copy_sym_383(F->m_1481);
(*(P817)rt_nil_check(F->z_1486)).name = f_renamed_400(F->d_401, F->m_1481);
f_define_159(F->z_1486, (*(P807)rt_nil_check(F->d_401)).line);
F->m_1481 = (*(P817)rt_nil_check(F->m_1481)).mnext;
}
goto ret_;
}
while ((F->p_1482 != NULL)) {
F->found_1487 = 0;
F->m_1481 = (*(P817)rt_nil_check(F->y_1480)).members;
while ((F->m_1481 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->m_1481)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1482)).name))->all))) {
F->z_1488 = NULL;
F->z_1488 = f_copy_sym_383(F->m_1481);
if (((*(P807)rt_nil_check(F->p_1482)).ival == ((rt_int)1LL))) {
(*(P817)rt_nil_check(F->z_1488)).ro_flag = 1;
}
(*(P817)rt_nil_check(F->z_1488)).name = f_renamed_400(F->d_401, F->m_1481);
f_define_159(F->z_1488, (*(P807)rt_nil_check(F->d_401)).line);
F->found_1487 = 1;
}
F->m_1481 = (*(P817)rt_nil_check(F->m_1481)).mnext;
}
if ((!F->found_1487)) {
f_fail_23((*(P807)rt_nil_check(F->d_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1482)).name))->all), rt_str(" is not exported by ", 20)), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_401)).name))->all)); b_; }));
}
F->p_1482 = (*(P807)rt_nil_check(F->p_1482)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_404(P813 t_403) {
  struct f_finish_ptr_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_403 = t_403;
F->d_1489 = NULL;
F->d_1489 = (*(P813)rt_nil_check(F->t_403)).decl;
F->p_1490 = NULL;
F->c_1491 = NULL;
F->dummy_1492 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1492, rt_str(" ", 1));
if (((*(P813)rt_nil_check(F->t_403)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1494 = ((rt_int)1LL), hi1495 = ((rt_int)2LL);
for (rt_int it1496 = lo1494; it1496 <= hi1495; it1496++) {
F->pass_1493 = it1496;
if ((F->pass_1493 == ((rt_int)1LL))) {
F->p_1490 = (*(P807)rt_nil_check(F->d_1489)).d;
} else {
F->p_1490 = (*(P807)rt_nil_check(F->d_1489)).b;
}
while ((F->p_1490 != NULL)) {
F->y_1497 = NULL;
F->y_1497 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_1490)).name);
F->pc_1498 = NULL;
(*(P817)rt_nil_check(F->y_1497)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1490)).a, &F->pc_1498);
(*(P817)rt_nil_check(F->y_1497)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1497, (*(P807)rt_nil_check(F->d_1489)).line);
F->p_1490 = (*(P807)rt_nil_check(F->p_1490)).next;
}
}
}
(*(P813)rt_nil_check(F->t_403)).target = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_1489)).a, &F->c_1491);
f_close_scope_169();
(*rt_str_at(&F->dummy_1492, ((rt_int)1LL))) = rt_str_get(f_ctype_225(F->t_403), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1492, ((rt_int)1LL))) = rt_str_get(f_ctype_225((*(P813)rt_nil_check(F->t_403)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P807 f_ptr_args_406(P809 c_405) {
  struct f_ptr_args_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_405 = c_405;
if ((F->c_405 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P809)rt_nil_check(F->c_405)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_411(P807 formals_407, P807 actuals_408, rstr *cell_409, rt_int line_410) {
  struct f_bind_ptr_params_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_407 = formals_407;
F->actuals_408 = actuals_408;
F->cell_409 = cell_409;
F->line_410 = line_410;
F->p_1499 = NULL;
F->p_1499 = F->formals_407;
F->a_1500 = NULL;
F->a_1500 = F->actuals_408;
F->vt_1501 = NULL;
if ((f_list_len_67(F->formals_407) != f_list_len_67(F->actuals_408))) {
f_fail_23(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_407))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1499 != NULL)) {
F->pc_1502 = NULL;
F->y_1503 = NULL;
F->y_1503 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_1499)).name);
(*(P817)rt_nil_check(F->y_1503)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1499)).a, &F->pc_1502);
{
F->v_1504 = rt_str_copy(f_gexpr_641(F->a_1500, (*(P817)rt_nil_check(F->y_1503)).t, &F->vt_1501));
F->pv_1505 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_223(F->vt_1501, (*(P817)rt_nil_check(F->y_1503)).t, F->line_410);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P817)rt_nil_check(F->y_1503)).t), rt_str(" ", 1)), F->pv_1505), rt_str(" = ", 3)), f_checked_204((*(P817)rt_nil_check(F->y_1503)).t, F->pc_1502, &F->v_1504)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_409), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_409), rt_str("->p_", 4)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1499)).name))->all))), rt_str(" = ", 3)), F->pv_1505), rt_str(";", 1)); b_; }));
}
(*(P817)rt_nil_check(F->y_1503)).access = f_mk_3(&F->pv_1505);
}
f_define_159(F->y_1503, F->line_410);
F->p_1499 = (*(P807)rt_nil_check(F->p_1499)).next;
F->a_1500 = (*(P807)rt_nil_check(F->a_1500)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_416(P807 s_412, rstr *lv_413, P813 t_414, P809 c_415) {
  struct f_alloc_cell_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_412 = s_412;
F->lv_413 = lv_413;
F->t_414 = t_414;
F->c_415 = c_415;
F->d_1506 = NULL;
F->d_1506 = (*(P813)rt_nil_check(F->t_414)).decl;
F->tc_1507 = NULL;
F->vt_1508 = NULL;
F->pt_1509 = rt_str_copy(f_ctype_225(F->t_414));
F->cell_1510 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315((*(P813)rt_nil_check(F->t_414)).target)) {
F->fn_1511 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_868 = 1;
g_uses_findyn_870 = 1;
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1511), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1511), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_859) {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P800)rt_nil_check((*(P817)rt_nil_check(g_func_sym_871)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1509), rt_str(")cell_)->all)", 13)); b_; }), (*(P813)rt_nil_check(F->t_414)).target)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_859) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1509), rt_str(" ", 1)), F->cell_1510), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1510), rt_str(", ", 2)), F->fn_1511), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1509), rt_str(" ", 1)), F->cell_1510), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1510), rt_str(", ", 2)), F->fn_1511), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1509), rt_str(" ", 1)), F->cell_1510), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1510), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_411((*(P807)rt_nil_check(F->d_1506)).d, f_ptr_args_406(F->c_415), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P807)rt_nil_check(F->s_412)).line);
f_bind_ptr_params_411((*(P807)rt_nil_check(F->d_1506)).b, (*(P807)rt_nil_check(F->s_412)).b, &F->cell_1510, (*(P807)rt_nil_check(F->s_412)).line);
F->vt_1508 = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_1506)).a, &F->tc_1507);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1510, rt_str("->all", 5)); b_; }), (*(P813)rt_nil_check(F->t_414)).target, F->tc_1507);
f_close_scope_169();
if (((*(P807)rt_nil_check(F->s_412)).c != NULL)) {
F->v_1512 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->s_412)).c, (*(P813)rt_nil_check(F->t_414)).target, F->tc_1507, &F->vt_1508));
f_check_type_223(F->vt_1508, (*(P813)rt_nil_check(F->t_414)).target, (*(P807)rt_nil_check(F->s_412)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1510, rt_str("->all", 5)); b_; }), (*(P813)rt_nil_check(F->t_414)).target, &F->v_1512, F->tc_1507); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_413), rt_str(" = ", 3)), F->cell_1510), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P809 f_freeze_args_420(P809 c_417, P813 t_418, rt_int line_419) {
  struct f_freeze_args_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_417 = c_417;
F->t_418 = t_418;
F->line_419 = line_419;
F->r_1513 = NULL;
F->r_1513 = f_copy_cons_197(F->c_417);
F->p_1514 = NULL;
F->p_1514 = (*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_418)).decl)).d;
F->a_1515 = NULL;
F->a_1515 = (*(P809)rt_nil_check(F->c_417)).args;
F->head_1516 = NULL;
F->tail_1517 = NULL;
F->saved_1518 = NULL;
F->saved_1518 = g_st_field_865;
if ((f_list_len_67(F->p_1514) != f_list_len_67(F->a_1515))) {
f_fail_23(F->line_419, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P813)rt_nil_check(F->t_418)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1514))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1515 != NULL)) {
F->pc_1519 = NULL;
F->vt_1520 = NULL;
F->pt_1521 = NULL;
F->pt_1521 = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1514)).a, &F->pc_1519);
F->nm_1522 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1523 = NULL;
F->y_1523 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1522));
F->n_1524 = NULL;
F->n_1524 = f_nn_61((((rt_int)7LL)), F->line_419);
F->v_1525 = rt_str_copy(f_gexpr_641(F->a_1515, F->pt_1521, &F->vt_1520));
F->access_1526 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225(F->pt_1521); b_; })));
f_check_type_223(F->vt_1520, F->pt_1521, F->line_419);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1526, rt_str(" = ", 3)), f_checked_204(F->pt_1521, F->pc_1519, &F->v_1525)), rt_str(";", 1)); b_; }));
(*(P817)rt_nil_check(F->y_1523)).t = F->pt_1521;
(*(P817)rt_nil_check(F->y_1523)).ro_flag = 1;
f_bind_445(F->y_1523, &F->access_1526);
f_define_159(F->y_1523, F->line_419);
(*(P807)rt_nil_check(F->n_1524)).name = f_mk_3(&F->nm_1522);
f_append_65(&F->head_1516, &F->tail_1517, F->n_1524);
F->a_1515 = (*(P807)rt_nil_check(F->a_1515)).next;
F->p_1514 = (*(P807)rt_nil_check(F->p_1514)).next;
}
(*(P809)rt_nil_check(F->r_1513)).args = F->head_1516;
g_st_field_865 = F->saved_1518;
F->result_ = F->r_1513;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_424(P813 t_421, P809 c_422, P807 src_423) {
  struct f_ptr_subtype_check_424fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_421 = t_421;
F->c_422 = c_422;
F->src_423 = src_423;
F->lv_1527 = NULL;
F->st_1528 = NULL;
F->sc_1529 = NULL;
F->cond_1531 = NULL;
F->cond_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1532 = NULL;
F->b_1533 = NULL;
F->at_1534 = NULL;
F->bt_1535 = NULL;
if (((((((*(P813)rt_nil_check(F->t_421)).kind != (((rt_int)8LL))) || (F->c_422 == NULL)) || ((*(P809)rt_nil_check(F->c_422)).args == NULL)) || (F->src_423 == NULL)) || (!f_is_lvalue_604(F->src_423)))) {
goto ret_;
}
f_lvalue_610(F->src_423, &F->lv_1527, &F->st_1528, &F->sc_1529, &F->ro_1530);
if (((F->sc_1529 == NULL) || ((*(P809)rt_nil_check(F->sc_1529)).args == NULL))) {
goto ret_;
}
F->a_1532 = (*(P809)rt_nil_check(F->c_422)).args;
F->b_1533 = (*(P809)rt_nil_check(F->sc_1529)).args;
while (((F->a_1532 != NULL) && (F->b_1533 != NULL))) {
F->x_1536 = rt_str_copy(f_gexpr_641(F->a_1532, NULL, &F->at_1534));
F->y_1537 = rt_str_copy(f_gexpr_641(F->b_1533, F->at_1534, &F->bt_1535));
F->cond_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->cond_1531))->all), rt_str(" || !", 5)), f_eq_code_363(F->at_1534, &F->x_1536, &F->y_1537)); b_; }));
F->a_1532 = (*(P807)rt_nil_check(F->a_1532)).next;
F->b_1533 = (*(P807)rt_nil_check(F->b_1533)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P800)rt_nil_check(F->cond_1531))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_426(P807 d_425) {
  struct f_declare_subprogram_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_425 = d_425;
f_define_159(f_build_subprogram_428(F->d_425), (*(P807)rt_nil_check(F->d_425)).line);
ret_:
  RT_FPOP();
  return;
}

static P817 f_build_subprogram_428(P807 d_427) {
  struct f_build_subprogram_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_427 = d_427;
F->y_1538 = NULL;
F->p_1539 = NULL;
F->p_1539 = (*(P807)rt_nil_check(F->d_427)).a;
F->tail_1540 = NULL;
if (((*(P807)rt_nil_check(F->d_427)).kind == (((rt_int)46LL)))) {
F->y_1538 = f_new_sym_172((((rt_int)3LL)), (*(P807)rt_nil_check(F->d_427)).name);
} else if (((*(P807)rt_nil_check(F->d_427)).kind == (((rt_int)50LL)))) {
F->y_1538 = f_new_sym_172((((rt_int)9LL)), (*(P807)rt_nil_check(F->d_427)).name);
} else {
F->y_1538 = f_new_sym_172((((rt_int)4LL)), (*(P807)rt_nil_check(F->d_427)).name);
}
while ((F->p_1539 != NULL)) {
F->pm_1541 = NULL;
{ R820 *cell1542 = rt_alloc(sizeof(R820));
(*cell1542).name = NULL;
(*cell1542).t = NULL;
(*cell1542).c = NULL;
(*cell1542).cfield = NULL;
(*cell1542).next = NULL;
F->pm_1541 = cell1542;
}
(*(P819)rt_nil_check(F->pm_1541)).name = (*(P807)rt_nil_check(F->p_1539)).name;
(*(P819)rt_nil_check(F->pm_1541)).mode = (*(P807)rt_nil_check(F->p_1539)).ival;
(*(P819)rt_nil_check(F->pm_1541)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1539)).a, &(*(P819)rt_nil_check(F->pm_1541)).c);
(*(P819)rt_nil_check(F->pm_1541)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1539)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1540 == NULL)) {
(*(P817)rt_nil_check(F->y_1538)).params = F->pm_1541;
} else {
(*(P819)rt_nil_check(F->tail_1540)).next = F->pm_1541;
}
F->tail_1540 = F->pm_1541;
F->p_1539 = (*(P807)rt_nil_check(F->p_1539)).next;
}
(*(P817)rt_nil_check(F->y_1538)).result = g_ty_void_891;
if (((*(P807)rt_nil_check(F->d_427)).b != NULL)) {
F->rc_1543 = NULL;
F->pm_1544 = NULL;
F->pm_1544 = (*(P817)rt_nil_check(F->y_1538)).params;
F->saved_1545 = NULL;
F->saved_1545 = g_code_857;
g_code_857 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1544 != NULL)) {
F->z_1546 = NULL;
F->z_1546 = f_new_sym_172((((rt_int)2LL)), (*(P819)rt_nil_check(F->pm_1544)).name);
(*(P817)rt_nil_check(F->z_1546)).t = (*(P819)rt_nil_check(F->pm_1544)).t;
(*(P817)rt_nil_check(F->z_1546)).c = (*(P819)rt_nil_check(F->pm_1544)).c;
(*(P817)rt_nil_check(F->z_1546)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1546, (*(P807)rt_nil_check(F->d_427)).line);
F->pm_1544 = (*(P819)rt_nil_check(F->pm_1544)).next;
}
(*(P817)rt_nil_check(F->y_1538)).result = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_427)).b, &F->rc_1543);
f_close_scope_169();
g_code_857 = F->saved_1545;
}
(*(P817)rt_nil_check(F->y_1538)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_596(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->d_427)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P817)rt_nil_check(F->y_1538)).decl = F->d_427;
(*(P817)rt_nil_check(F->y_1538)).level = g_cur_level_860;
if (((*(P807)rt_nil_check(F->d_427)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1538)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1538;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_431(P800 pr_429, rstr *p_430) {
  struct f_has_pragmat_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_429 = pr_429;
F->p_430 = p_430;
if ((F->pr_429 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1548 = ((rt_int)1LL), hi1549 = rt_sub(((rt_int)(((((P800)rt_nil_check(F->pr_429))->all)).len)), ((rt_int)(((*F->p_430)).len)));
for (rt_int it1550 = lo1548; it1550 <= hi1549; it1550++) {
F->i_1547 = it1550;
if (((rt_str_eq(rt_str_slice((((P800)rt_nil_check(F->pr_429))->all), F->i_1547, rt_sub(rt_add(F->i_1547, ((rt_int)(((*F->p_430)).len))), ((rt_int)1LL))), (*F->p_430)) && (rt_str_get((((P800)rt_nil_check(F->pr_429))->all), rt_add(F->i_1547, ((rt_int)(((*F->p_430)).len)))) == 59)) && ((F->i_1547 == ((rt_int)1LL)) || (rt_str_get((((P800)rt_nil_check(F->pr_429))->all), rt_sub(F->i_1547, ((rt_int)1LL))) == 59)))) {
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

static P800 f_suppressing_433(P800 pr_432) {
  struct f_suppressing_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_432 = pr_432;
F->r_1551 = NULL;
F->r_1551 = g_suppress_877;
F->i_1552 = ((rt_int)1LL);
if ((F->pr_432 == NULL)) {
F->result_ = F->r_1551;
goto ret_;
}
if ((F->r_1551 == NULL)) {
F->r_1551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1552, ((rt_int)9LL)) <= ((rt_int)(((((P800)rt_nil_check(F->pr_432))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P800)rt_nil_check(F->pr_432))->all), F->i_1552, rt_add(F->i_1552, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1553 = rt_add(F->i_1552, ((rt_int)9LL));
F->k_1554 = F->j_1553;
while ((rt_str_get((((P800)rt_nil_check(F->pr_432))->all), F->k_1554) != 41)) {
if ((rt_str_get((((P800)rt_nil_check(F->pr_432))->all), F->k_1554) == 44)) {
F->r_1551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1551))->all), rt_str_slice((((P800)rt_nil_check(F->pr_432))->all), F->j_1553, rt_sub(F->k_1554, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1553 = rt_add(F->k_1554, ((rt_int)1LL));
}
F->k_1554 = rt_add(F->k_1554, ((rt_int)1LL));
}
F->r_1551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1551))->all), rt_str_slice((((P800)rt_nil_check(F->pr_432))->all), F->j_1553, rt_sub(F->k_1554, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1552 = F->k_1554;
}
F->i_1552 = rt_add(F->i_1552, ((rt_int)1LL));
}
F->result_ = F->r_1551;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_435(rstr *x_434) {
  struct f_suppressed_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_434 = x_434;
F->w_1555 = rt_str_new(rt_add(((rt_int)(((*F->x_434)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1555, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_434)), rt_str(" ", 1)));
if ((g_suppress_877 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1557 = ((rt_int)1LL), hi1558 = rt_add(rt_sub(((rt_int)(((((P800)rt_nil_check(g_suppress_877))->all)).len)), ((rt_int)((F->w_1555).len))), ((rt_int)1LL));
for (rt_int it1559 = lo1557; it1559 <= hi1558; it1559++) {
F->i_1556 = it1559;
if (rt_str_eq(rt_str_slice((((P800)rt_nil_check(g_suppress_877))->all), F->i_1556, rt_sub(rt_add(F->i_1556, ((rt_int)((F->w_1555).len))), ((rt_int)1LL))), F->w_1555)) {
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

static void f_element_437(P807 e_436) {
  struct f_element_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_436 = e_436;
F->saved_1560 = NULL;
F->saved_1560 = g_suppress_877;
g_suppress_877 = f_suppressing_433((*(P807)rt_nil_check(F->e_436)).prags);
f_element1_439(F->e_436);
g_suppress_877 = F->saved_1560;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_439(P807 e_438) {
  struct f_element1_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_438 = e_438;
F->k_1561 = (*(P807)rt_nil_check(F->e_438)).kind;
if (((F->k_1561 == (((rt_int)48LL))) && (((*(P807)rt_nil_check(F->e_438)).flag == ((rt_int)1LL)) || ((*(P807)rt_nil_check(F->e_438)).flag == ((rt_int)3LL))))) {
f_gen_expose_402(F->e_438);
} else if ((((F->k_1561 == (((rt_int)45LL))) || (F->k_1561 == (((rt_int)46LL)))) || (F->k_1561 == (((rt_int)50LL))))) {
f_subprogram_455(F->e_438);
} else if ((F->k_1561 == (((rt_int)51LL)))) {
F->g_1562 = NULL;
F->g_1562 = f_lookup_decl_156(F->e_438);
if ((F->g_1562 != NULL)) {
{ P821 cell1563 = rt_alloc(sizeof *cell1563);
rt_int pv1564 = (((rt_int)4093LL));
cell1563->p_n = pv1564;
cell1563->all.lo = ((rt_int)0LL); cell1563->all.hi = pv1564;
cell1563->all.lo2 = cell1563->all.hi2 = 1;
cell1563->all.p = rt_alloc(sizeof(P817) * (size_t)(RT_CNT(cell1563->all)) + 1);
for (rt_int i1565 = 0; i1565 < (RT_CNT(cell1563->all)); i1565++) {
cell1563->all.p[i1565] = NULL;
}
(*(P817)rt_nil_check(F->g_1562)).env = cell1563;
}
{ rt_int lo1567 = ((rt_int)0LL), hi1568 = (((rt_int)4093LL));
for (rt_int it1569 = lo1567; it1569 <= hi1568; it1569++) {
F->i_1566 = it1569;
(((P821)rt_nil_check((*(P817)rt_nil_check(F->g_1562)).env))->all).p[(rt_index(F->i_1566, (((P821)rt_nil_check((*(P817)rt_nil_check(F->g_1562)).env))->all).lo, (((P821)rt_nil_check((*(P817)rt_nil_check(F->g_1562)).env))->all).hi) - (((P821)rt_nil_check((*(P817)rt_nil_check(F->g_1562)).env))->all).lo)] = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(F->i_1566, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((F->k_1561 == (((rt_int)49LL))) || (F->k_1561 == (((rt_int)42LL)))) || (F->k_1561 == (((rt_int)43LL)))) || (F->k_1561 == (((rt_int)47LL)))) || (F->k_1561 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1561 == (((rt_int)44LL)))) {
f_finish_ptr_404((*(P817)rt_nil_check(f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_438)).name))->all)))).t);
} else if ((F->k_1561 == (((rt_int)40LL)))) {
f_var_decl_447(F->e_438);
} else if (((F->k_1561 == (((rt_int)41LL))) && ((*(P807)rt_nil_check(F->e_438)).flag == ((rt_int)0LL)))) {
f_const_decl_453(F->e_438);
} else if ((F->k_1561 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1561 == (((rt_int)33LL)))) {
F->t_1570 = NULL;
F->c_1571 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_438)).a, g_ty_bool_887, &F->t_1570));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1571), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_486(F->e_438);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_442(rstr *name_440, P813 t_441) {
  struct f_storage_442fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_440 = name_440;
F->t_441 = t_441;
if ((!g_in_func_859)) {
F->g_1572 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_440))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_441)), rt_str(" ", 1)), F->g_1572), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1572), rt_str(");", 2)); b_; }));
g_st_field_865 = f_mk_3(&F->g_1572);
F->result_ = F->g_1572;
goto ret_;
}
{
F->f_1573 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_440)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_441)), rt_str(" ", 1)), F->f_1573), rt_str(";", 1)); b_; }));
g_st_field_865 = f_mk_3(&F->f_1573);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1573);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_445(P817 y_443, rstr *access_444) {
  struct f_bind_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_443 = y_443;
F->access_444 = access_444;
if (g_in_func_859) {
(*(P817)rt_nil_check(F->y_443)).level = g_cur_level_860;
(*(P817)rt_nil_check(F->y_443)).access = g_st_field_865;
} else {
(*(P817)rt_nil_check(F->y_443)).level = ((rt_int)0LL);
(*(P817)rt_nil_check(F->y_443)).access = f_mk_3(&(*F->access_444));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_447(P807 d_446) {
  struct f_var_decl_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_446 = d_446;
F->c_1574 = NULL;
F->t_1575 = NULL;
F->t_1575 = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_446)).a, &F->c_1574);
F->y_1576 = NULL;
F->y_1576 = f_new_sym_172((((rt_int)1LL)), (*(P807)rt_nil_check(F->d_446)).name);
F->access_1577 = rt_str_copy(f_storage_442(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->d_446)).name))->all), F->t_1575));
F->c_1574 = f_freeze_200(F->c_1574, F->t_1575);
if (((((*(P813)rt_nil_check(F->t_1575)).kind == (((rt_int)8LL))) && (F->c_1574 != NULL)) && ((*(P809)rt_nil_check(F->c_1574)).args != NULL))) {
F->c_1574 = f_freeze_args_420(F->c_1574, F->t_1575, (*(P807)rt_nil_check(F->d_446)).line);
}
f_init_storage_310(&F->access_1577, F->t_1575, F->c_1574);
if (((*(P807)rt_nil_check(F->d_446)).ival == ((rt_int)1LL))) {
F->it_1578 = NULL;
F->n_1579 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->d_446)).c, g_ty_int_886, &F->it_1578));
if (((*(P813)rt_nil_check(F->t_1575)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P807)rt_nil_check(F->d_446)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_212((*(P813)rt_nil_check(F->t_1575)).elem, g_ty_ascii_889)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1577), rt_str(", ", 2)), F->n_1579), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1577), rt_str(", ", 2)), F->n_1579), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P807)rt_nil_check(F->d_446)).ival == ((rt_int)2LL))) {
f_fail_23((*(P807)rt_nil_check(F->d_446)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P807)rt_nil_check(F->d_446)).b != NULL)) {
F->vt_1580 = NULL;
F->v_1581 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->d_446)).b, F->t_1575, F->c_1574, &F->vt_1580));
f_check_type_223(F->vt_1580, F->t_1575, (*(P807)rt_nil_check(F->d_446)).line);
f_ptr_subtype_check_424(F->t_1575, F->c_1574, (*(P807)rt_nil_check(F->d_446)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_356(&F->access_1577, F->t_1575, &F->v_1581, F->c_1574); b_; }));
}
(*(P817)rt_nil_check(F->y_1576)).t = F->t_1575;
(*(P817)rt_nil_check(F->y_1576)).c = F->c_1574;
f_bind_445(F->y_1576, &F->access_1577);
f_define_159(F->y_1576, (*(P807)rt_nil_check(F->d_446)).line);
if (f_needs_fin_315(F->t_1575)) {
f_open_fin_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1577, F->t_1575); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_449(rstr *fc_448) {
  struct f_open_fin_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_448 = fc_448;
F->f_1582 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1583 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1582), rt_str("; if (RT_TRY(", 13)), F->f_1582), rt_str(")) {", 4)); b_; }));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1582), rt_str("); ", 3)), (*F->fc_448)); b_; }));
{ R812 *cell1584 = rt_alloc(sizeof(R812));
(*cell1584).s = NULL;
(*cell1584).next = NULL;
F->l_1583 = cell1584;
}
(*(P811)rt_nil_check(F->l_1583)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1582), rt_str("); ", 3)), (*F->fc_448)), rt_str(" } else { RT_POP(", 17)), F->f_1582), rt_str("); ", 3)), (*F->fc_448)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P811)rt_nil_check(F->l_1583)).next = g_fins_869;
g_fins_869 = F->l_1583;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_451(P811 saved_450) {
  struct f_close_fins_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_450 = saved_450;
while (((g_fins_869 != F->saved_450) && (g_fins_869 != NULL))) {
f_emit_29(&(((P800)rt_nil_check((*(P811)rt_nil_check(g_fins_869)).s))->all));
f_pop_cleanup_484();
g_fins_869 = (*(P811)rt_nil_check(g_fins_869)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_453(P807 d_452) {
  struct f_const_decl_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_452 = d_452;
F->c_1585 = NULL;
F->c_1585 = f_new_cons_175();
F->t_1586 = NULL;
F->vt_1587 = NULL;
F->y_1588 = NULL;
F->y_1588 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->d_452)).name);
if (((*(P807)rt_nil_check(F->d_452)).a != NULL)) {
F->t_1586 = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_452)).a, &F->c_1585);
}
{
F->v_1590 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->d_452)).b, F->t_1586, F->c_1585, &F->vt_1587));
if ((F->t_1586 != NULL)) {
f_check_type_223(F->vt_1587, F->t_1586, (*(P807)rt_nil_check(F->d_452)).line);
} else {
F->t_1586 = F->vt_1587;
}
if (((*(P813)rt_nil_check(F->t_1586)).kind == (((rt_int)1LL)))) {
(*(P817)rt_nil_check(F->y_1588)).mvalue = f_manifest_328((*(P807)rt_nil_check(F->d_452)).b, &F->ok_1589);
(*(P817)rt_nil_check(F->y_1588)).hasmv = F->ok_1589;
}
{
F->access_1591 = rt_str_copy(f_storage_442(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->d_452)).name))->all), F->t_1586));
if (((*(P813)rt_nil_check(F->t_1586)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P813)rt_nil_check(F->t_1586)).initp, &F->access_1591); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1591, rt_str(" = ", 3)), f_checked_204(F->t_1586, F->c_1585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_359(F->t_1586, &F->v_1590); b_; }))), rt_str(";", 1)); b_; }));
f_bind_445(F->y_1588, &F->access_1591);
if (f_needs_fin_315(F->t_1586)) {
f_open_fin_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1591, F->t_1586); b_; }));
}
}
}
(*(P817)rt_nil_check(F->y_1588)).t = F->t_1586;
(*(P817)rt_nil_check(F->y_1588)).c = F->c_1585;
(*(P817)rt_nil_check(F->y_1588)).ro_flag = 1;
f_define_159(F->y_1588, (*(P807)rt_nil_check(F->d_452)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_455(P807 d_454) {
  struct f_subprogram_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_454 = d_454;
f_gen_subprogram_458(F->d_454, f_lookup_decl_156(F->d_454));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_458(P807 d_456, P817 y_457) {
  struct f_gen_subprogram_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
F->y_457 = y_457;
F->saved_code_1592 = NULL;
F->saved_code_1592 = g_code_857;
F->saved_fields_1593 = NULL;
F->saved_fields_1593 = g_fields_buf_858;
F->saved_in_1594 = g_in_func_859;
F->saved_sym_1595 = NULL;
F->saved_sym_1595 = g_func_sym_871;
F->saved_exits_1596 = NULL;
F->saved_exits_1596 = g_exits_879;
F->saved_gotos_1597 = NULL;
F->saved_gotos_1597 = g_gotos_880;
F->saved_frames_1598 = g_frames_881;
F->args_1599 = NULL;
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1600 = NULL;
F->pm_1600 = (*(P817)rt_nil_check(F->y_457)).params;
F->saved_handlers_1601 = NULL;
F->saved_handlers_1601 = g_handlers_882;
F->saved_cleanups_1602 = NULL;
F->saved_cleanups_1602 = g_cleanups_883;
F->ctx_1603 = NULL;
F->head_1604 = NULL;
F->frame_1605 = NULL;
F->frame_1605 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_457)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1606 = NULL;
F->copy_back_1607 = NULL;
F->copy_back_1607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1608 = NULL;
F->pfin_1608 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1609 = NULL;
F->saved_fins_1609 = g_fins_869;
F->saved_rc_1610 = NULL;
F->saved_rc_1610 = g_func_rc_872;
F->saved_ret_1611 = NULL;
F->saved_ret_1611 = g_cap_ret_873;
F->saved_rflag_1612 = NULL;
F->saved_rflag_1612 = g_cap_rflag_874;
F->pn_1613 = NULL;
F->pn_1613 = (*(P807)rt_nil_check(F->d_456)).a;
F->nonrec_end_1614 = NULL;
if (g_in_func_859) {
F->parent_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(g_func_sym_871)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_869 = NULL;
g_func_rc_872 = NULL;
g_cap_ret_873 = NULL;
g_cap_rflag_874 = NULL;
g_code_857 = f_new_buffer_24();
g_fields_buf_858 = f_new_buffer_24();
g_in_func_859 = 1;
g_func_sym_871 = F->y_457;
g_exits_879 = NULL;
g_gotos_880 = NULL;
g_frames_881 = ((rt_int)0LL);
g_handlers_882 = NULL;
g_cleanups_883 = NULL;
g_cur_level_860 = rt_add(g_cur_level_860, ((rt_int)1LL));
f_open_scope_168();
{ R825 *cell1616 = rt_alloc(sizeof(R825));
(*cell1616).imps = NULL;
(*cell1616).next = NULL;
F->ctx_1603 = cell1616;
}
(*(P824)rt_nil_check(F->ctx_1603)).depth = g_depth_846;
(*(P824)rt_nil_check(F->ctx_1603)).imps = (*(P807)rt_nil_check(F->d_456)).d;
(*(P824)rt_nil_check(F->ctx_1603)).all_imp = ((*(P807)rt_nil_check(F->d_456)).flag >= ((rt_int)2LL));
(*(P824)rt_nil_check(F->ctx_1603)).next = g_fctx_861;
g_fctx_861 = F->ctx_1603;
if ((F->parent_1606 != NULL)) {
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P800)rt_nil_check(F->parent_1606))->all)), rt_str(" *up;", 5)); b_; }));
if (((*(P817)rt_nil_check(F->y_457)).kind != (((rt_int)9LL)))) {
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check(F->parent_1606))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1600 != NULL)) {
F->ct_1617 = rt_str_copy(f_ctype_225((*(P819)rt_nil_check(F->pm_1600)).t));
F->f_1618 = rt_str_copy((((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_1600)).cfield))->all));
F->p_1619 = NULL;
F->pc_1620 = NULL;
F->pc_1620 = (*(P819)rt_nil_check(F->pm_1600)).c;
F->ac_1621 = NULL;
if ((((rt_int)(((((P800)rt_nil_check(F->args_1599))->all)).len)) > ((rt_int)0LL))) {
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->args_1599))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P819)rt_nil_check(F->pm_1600)).t)) {
F->fc_1622 = NULL;
F->ft_1623 = NULL;
F->ft_1623 = f_resolve_subtype_256((*(P807)rt_nil_check(F->pn_1613)).a, &F->fc_1622);
F->pc_1620 = f_freeze_200(F->fc_1622, (*(P819)rt_nil_check(F->pm_1600)).t);
}
if (((*(P819)rt_nil_check(F->pm_1600)).mode == (((rt_int)1LL)))) {
F->p_1619 = f_new_sym_172((((rt_int)2LL)), (*(P819)rt_nil_check(F->pm_1600)).name);
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1617), rt_str(" ", 1)), F->f_1618), rt_str(";", 1)); b_; }));
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_1599))->all), F->ct_1617), rt_str(" ", 1)), F->f_1618); b_; }));
(*(P817)rt_nil_check(F->p_1619)).access = f_mk_3(&F->f_1618);
if (((*(P817)rt_nil_check(F->y_457)).kind != (((rt_int)9LL)))) {
if (((*(P813)rt_nil_check((*(P819)rt_nil_check(F->pm_1600)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P813)rt_nil_check((*(P819)rt_nil_check(F->pm_1600)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1618); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str(" = ", 3)), f_checked_204((*(P819)rt_nil_check(F->pm_1600)).t, F->pc_1620, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_359((*(P819)rt_nil_check(F->pm_1600)).t, &F->f_1618); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_315((*(P819)rt_nil_check(F->pm_1600)).t)) {
F->pfin_1608 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->pfin_1608))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1618); b_; }), (*(P819)rt_nil_check(F->pm_1600)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1619 = f_new_sym_172((((rt_int)1LL)), (*(P819)rt_nil_check(F->pm_1600)).name);
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1617), rt_str(" *", 2)), F->f_1618), rt_str(";", 1)); b_; }));
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_1599))->all), F->ct_1617), rt_str(" *", 2)), F->f_1618); b_; }));
(*(P817)rt_nil_check(F->p_1619)).access = f_mk_3(&F->f_1618);
(*(P817)rt_nil_check(F->p_1619)).byref = 1;
if (((*(P817)rt_nil_check(F->y_457)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str(" = ", 3)), F->f_1618), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P819)rt_nil_check(F->pm_1600)).t)) {
F->bt_1624 = rt_str_copy(f_bound_ctype_179((*(P819)rt_nil_check(F->pm_1600)).t));
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1624), rt_str(" ", 1)), F->f_1618), rt_str("lo, ", 4)), F->f_1618), rt_str("hi;", 3)); b_; }));
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_1599))->all), rt_str(", ", 2)), F->bt_1624), rt_str(" ", 1)), F->f_1618), rt_str("lo, ", 4)), F->bt_1624), rt_str(" ", 1)), F->f_1618), rt_str("hi", 2)); b_; }));
if (((*(P817)rt_nil_check(F->y_457)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str("lo = ", 5)), F->f_1618), rt_str("lo; F->", 7)), F->f_1618), rt_str("hi = ", 5)), F->f_1618), rt_str("hi;", 3)); b_; }));
}
F->ac_1621 = f_new_cons_175();
(*(P809)rt_nil_check(F->ac_1621)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1618, rt_str("lo", 2)); b_; }));
(*(P809)rt_nil_check(F->ac_1621)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1618, rt_str("hi", 2)); b_; }));
(*(P809)rt_nil_check(F->ac_1621)).dyn = 1;
(*(P809)rt_nil_check(F->ac_1621)).lvl = g_cur_level_860;
if (((F->pc_1620 == NULL) || ((*(P809)rt_nil_check(F->pc_1620)).lo == NULL))) {
F->pc_1620 = F->ac_1621;
} else if (((*(P819)rt_nil_check(F->pm_1600)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1618), rt_str("lo <= F->", 9)), F->f_1618), rt_str("hi && (F->", 10)), F->f_1618), rt_str("lo != ", 6)), f_sub_lo_189((*(P819)rt_nil_check(F->pm_1600)).t, F->pc_1620)), rt_str(" || F->", 7)), F->f_1618), rt_str("hi != ", 6)), f_sub_hi_192((*(P819)rt_nil_check(F->pm_1600)).t, F->pc_1620)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P819)rt_nil_check(F->pm_1600)).mode == (((rt_int)3LL))) && ((*(P817)rt_nil_check(F->y_457)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1617), rt_str(" ", 1)), F->f_1618), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str("v = ", 4)), f_copy_code_359((*(P819)rt_nil_check(F->pm_1600)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1618); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P813)rt_nil_check((*(P819)rt_nil_check(F->pm_1600)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P813)rt_nil_check((*(P819)rt_nil_check(F->pm_1600)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1621 == NULL)) {
F->ac_1621 = (*(P819)rt_nil_check(F->pm_1600)).c;
}
F->copy_back_1607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->copy_back_1607))->all), rt_str("  ", 2)), f_assign_code_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1618), rt_str(")", 1)); b_; }), (*(P819)rt_nil_check(F->pm_1600)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str("v", 1)); b_; }), F->ac_1621)); b_; }));
if (f_needs_fin_315((*(P819)rt_nil_check(F->pm_1600)).t)) {
F->pfin_1608 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->pfin_1608))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1618), rt_str("v", 1)); b_; }), (*(P819)rt_nil_check(F->pm_1600)).t)), rt_str(" ", 1)); b_; }));
}
(*(P817)rt_nil_check(F->p_1619)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1618, rt_str("v", 1)); b_; }));
(*(P817)rt_nil_check(F->p_1619)).byref = 0;
}
}
(*(P817)rt_nil_check(F->p_1619)).t = (*(P819)rt_nil_check(F->pm_1600)).t;
(*(P817)rt_nil_check(F->p_1619)).c = F->pc_1620;
(*(P817)rt_nil_check(F->p_1619)).level = g_cur_level_860;
(*(P817)rt_nil_check(F->p_1619)).ro_flag = (((*(P819)rt_nil_check(F->pm_1600)).mode == (((rt_int)1LL))) || ((*(P819)rt_nil_check(F->pm_1600)).mode == (((rt_int)4LL))));
f_define_159(F->p_1619, (*(P807)rt_nil_check(F->d_456)).line);
F->pm_1600 = (*(P819)rt_nil_check(F->pm_1600)).next;
F->pn_1613 = (*(P807)rt_nil_check(F->pn_1613)).next;
}
if (((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_457)).result)).kind != (((rt_int)9LL)))) {
if (((*(P807)rt_nil_check(F->d_456)).b != NULL)) {
F->rc_1625 = NULL;
F->rt_1626 = NULL;
F->rt_1626 = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_456)).b, &F->rc_1625);
g_func_rc_872 = f_freeze_200(F->rc_1625, (*(P817)rt_nil_check(F->y_457)).result);
}
f_put_27(g_fields_buf_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225((*(P817)rt_nil_check(F->y_457)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_457)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_457)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1615 = (((rt_int)(((((P800)rt_nil_check(F->pfin_1608))->all)).len)) > ((rt_int)0LL));
if (F->has_pfin_1615) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_431((*(P807)rt_nil_check(F->d_456)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_431((*(P807)rt_nil_check(F->d_456)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1627 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1628 = NULL;
F->leave_1628 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1627), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1627), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1627), rt_str(", ", 2)), f_bool_text_339(f_has_pragmat_431((*(P807)rt_nil_check(F->d_456)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_339(f_has_pragmat_431((*(P807)rt_nil_check(F->d_456)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P800)rt_nil_check((*(P807)rt_nil_check(F->d_456)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->copy_back_1607))->all), rt_str("  ", 2)), (((P800)rt_nil_check(F->leave_1628))->all)); b_; }));
F->nonrec_end_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P800)rt_nil_check(F->leave_1628))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_468((*(P807)rt_nil_check(F->d_456)).c);
f_declare_body_375((*(P807)rt_nil_check(F->d_456)).c);
f_body_elements_477((*(P807)rt_nil_check(F->d_456)).c);
f_close_fins_451(NULL);
if ((F->nonrec_end_1614 != NULL)) {
f_emit_29(&(((P800)rt_nil_check(F->nonrec_end_1614))->all));
f_pop_cleanup_484();
}
if (F->has_pfin_1615) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P800)rt_nil_check(F->pfin_1608))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_484();
F->copy_back_1607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->copy_back_1607))->all), rt_str("  ", 2)), (((P800)rt_nil_check(F->pfin_1608))->all)); b_; }));
}
f_close_scope_169();
g_fctx_861 = (*(P824)rt_nil_check(g_fctx_861)).next;
g_cur_level_860 = rt_sub(g_cur_level_860, ((rt_int)1LL));
if (((((rt_int)(((((P800)rt_nil_check(F->args_1599))->all)).len)) == ((rt_int)0LL)) || ((*(P817)rt_nil_check(F->y_457)).kind == (((rt_int)9LL))))) {
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P817)rt_nil_check(F->y_457)).kind == (((rt_int)9LL)))) {
F->args_1599 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1604 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225((*(P817)rt_nil_check(F->y_457)).result)), rt_str(" ", 1)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_457)).cname))->all)), rt_str("(", 1)), (((P800)rt_nil_check(F->args_1599))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->head_1604))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->head_1604))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P800)rt_nil_check(F->frame_1605))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_866, g_fields_buf_858);
f_put_27(g_out_frames_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P817)rt_nil_check(F->y_457)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P800)rt_nil_check(F->frame_1605))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P800)rt_nil_check(F->frame_1605))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_854, g_code_857);
if (((*(P813)rt_nil_check((*(P817)rt_nil_check(F->y_457)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P800)rt_nil_check(F->copy_back_1607))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_854, &(((P800)rt_nil_check(F->copy_back_1607))->all));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P800)rt_nil_check(F->copy_back_1607))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_854, &(((P800)rt_nil_check(F->copy_back_1607))->all));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_857 = F->saved_code_1592;
g_fields_buf_858 = F->saved_fields_1593;
g_in_func_859 = F->saved_in_1594;
g_func_sym_871 = F->saved_sym_1595;
g_exits_879 = F->saved_exits_1596;
g_gotos_880 = F->saved_gotos_1597;
g_frames_881 = F->saved_frames_1598;
g_handlers_882 = F->saved_handlers_1601;
g_cleanups_883 = F->saved_cleanups_1602;
g_fins_869 = F->saved_fins_1609;
g_func_rc_872 = F->saved_rc_1610;
g_cap_ret_873 = F->saved_ret_1611;
g_cap_rflag_874 = F->saved_rflag_1612;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_460(P807 d_459) {
  struct f_waits_of_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->w_1629 = NULL;
F->w_1629 = g_cap_waits_863;
while ((F->w_1629 != NULL)) {
if (((*(P836)rt_nil_check(F->w_1629)).d == F->d_459)) {
F->result_ = (((P800)rt_nil_check((*(P836)rt_nil_check(F->w_1629)).w))->all);
goto ret_;
}
F->w_1629 = (*(P836)rt_nil_check(F->w_1629)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_462(P807 elems_461) {
  struct f_task_waits_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_461 = elems_461;
F->e_1630 = NULL;
F->e_1630 = F->elems_461;
F->r_1631 = NULL;
F->r_1631 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1630 != NULL)) {
if (((*(P807)rt_nil_check(F->e_1630)).kind == (((rt_int)50LL)))) {
F->r_1631 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1631))->all), rt_str(" rt_await_decl(&", 16)), (((P800)rt_nil_check((*(P817)rt_nil_check(f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_1630)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if ((((*(P807)rt_nil_check(F->e_1630)).kind == (((rt_int)47LL))) || (((*(P807)rt_nil_check(F->e_1630)).kind == (((rt_int)48LL))) && (((*(P807)rt_nil_check(F->e_1630)).flag == ((rt_int)1LL)) || ((*(P807)rt_nil_check(F->e_1630)).flag == ((rt_int)3LL)))))) {
F->r_1631 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->r_1631))->all), f_waits_of_460(F->e_1630)); b_; }));
}
F->e_1630 = (*(P807)rt_nil_check(F->e_1630)).next;
}
F->result_ = (((P800)rt_nil_check(F->r_1631))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_464(P807 elems_463) {
  struct f_await_tasks_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_463 = elems_463;
F->w_1632 = rt_str_copy(f_task_waits_462(F->elems_463));
if ((((rt_int)((F->w_1632).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1632);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_466(P807 elems_465) {
  struct f_capsule_elements_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_465 = elems_465;
F->e_1633 = NULL;
F->e_1633 = F->elems_465;
while ((F->e_1633 != NULL)) {
if ((((*(P807)rt_nil_check(F->e_1633)).kind >= (((rt_int)20LL))) && ((*(P807)rt_nil_check(F->e_1633)).kind <= (((rt_int)36LL))))) {
f_start_labels_469();
}
f_element_437(F->e_1633);
F->e_1633 = (*(P807)rt_nil_check(F->e_1633)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_468(P807 elems_467) {
  struct f_declare_labels_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_467 = elems_467;
F->e_1634 = NULL;
F->e_1634 = F->elems_467;
while ((F->e_1634 != NULL)) {
F->l_1635 = NULL;
F->l_1635 = (*(P807)rt_nil_check(F->e_1634)).labels;
while ((F->l_1635 != NULL)) {
F->x_1636 = NULL;
F->x_1636 = g_gotos_880;
while (((F->x_1636 != NULL) && ((*(P832)rt_nil_check(F->x_1636)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P800)rt_nil_check((*(P832)rt_nil_check(F->x_1636)).match))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->l_1635)).name))->all))) {
f_fail_23((*(P807)rt_nil_check(F->l_1635)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P800)rt_nil_check((*(P807)rt_nil_check(F->l_1635)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1636 = (*(P832)rt_nil_check(F->x_1636)).next;
}
{ R833 *cell1637 = rt_alloc(sizeof(R833));
(*cell1637).match = NULL;
(*cell1637).label = NULL;
(*cell1637).next = NULL;
F->x_1636 = cell1637;
}
(*(P832)rt_nil_check(F->x_1636)).match = (*(P807)rt_nil_check(F->l_1635)).name;
(*(P832)rt_nil_check(F->x_1636)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P832)rt_nil_check(F->x_1636)).depth = rt_neg(((rt_int)1LL));
(*(P832)rt_nil_check(F->x_1636)).next = g_gotos_880;
g_gotos_880 = F->x_1636;
F->l_1635 = (*(P807)rt_nil_check(F->l_1635)).next;
}
F->e_1634 = (*(P807)rt_nil_check(F->e_1634)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_469(void) {
  struct f_start_labels_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1638 = NULL;
F->x_1638 = g_gotos_880;
while (((F->x_1638 != NULL) && ((*(P832)rt_nil_check(F->x_1638)).depth == rt_neg(((rt_int)1LL))))) {
(*(P832)rt_nil_check(F->x_1638)).depth = g_frames_881;
F->x_1638 = (*(P832)rt_nil_check(F->x_1638)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P832 f_goto_label_471(rstr *name_470) {
  struct f_goto_label_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_470 = name_470;
F->x_1639 = NULL;
F->x_1639 = g_gotos_880;
while ((F->x_1639 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P832)rt_nil_check(F->x_1639)).match))->all), (*F->name_470))) {
F->result_ = F->x_1639;
goto ret_;
}
F->x_1639 = (*(P832)rt_nil_check(F->x_1639)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_473(P807 e_472) {
  struct f_has_return_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_472 = e_472;
F->x_1640 = NULL;
F->x_1640 = F->e_472;
while ((F->x_1640 != NULL)) {
if (((*(P807)rt_nil_check(F->x_1640)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P807)rt_nil_check(F->x_1640)).kind != (((rt_int)45LL))) && ((*(P807)rt_nil_check(F->x_1640)).kind != (((rt_int)46LL)))) && ((*(P807)rt_nil_check(F->x_1640)).kind != (((rt_int)50LL)))) && ((*(P807)rt_nil_check(F->x_1640)).kind != (((rt_int)47LL)))) && ((*(P807)rt_nil_check(F->x_1640)).kind != (((rt_int)51LL))))) {
if ((((((*(P807)rt_nil_check(F->x_1640)).a != NULL) && f_has_return_473((*(P807)rt_nil_check(F->x_1640)).a)) || (((*(P807)rt_nil_check(F->x_1640)).b != NULL) && f_has_return_473((*(P807)rt_nil_check(F->x_1640)).b))) || (((*(P807)rt_nil_check(F->x_1640)).c != NULL) && f_has_return_473((*(P807)rt_nil_check(F->x_1640)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1640 = (*(P807)rt_nil_check(F->x_1640)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_475(P807 elems_474) {
  struct f_capsule_body_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_474 = elems_474;
F->saved_ret_1641 = NULL;
F->saved_ret_1641 = g_cap_ret_873;
F->saved_flag_1642 = NULL;
F->saved_flag_1642 = g_cap_rflag_874;
F->saved_frames_1643 = g_ret_frames_875;
F->e_1644 = NULL;
F->e_1644 = F->elems_474;
if ((!f_has_return_473(F->elems_474))) {
g_cap_ret_873 = NULL;
g_cap_rflag_874 = NULL;
f_capsule_elements_466(F->elems_474);
} else {
g_cap_rflag_874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(g_cap_rflag_874))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1644 != NULL)) {
F->stmt_1645 = (((*(P807)rt_nil_check(F->e_1644)).kind >= (((rt_int)20LL))) && ((*(P807)rt_nil_check(F->e_1644)).kind <= (((rt_int)36LL))));
g_cap_ret_873 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_875 = g_frames_881;
if (F->stmt_1645) {
f_start_labels_469();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P800)rt_nil_check(g_cap_rflag_874))->all)), rt_str(") {", 3)); b_; }));
}
f_element_437(F->e_1644);
if (F->stmt_1645) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(g_cap_ret_873))->all), rt_str(": ;", 3)); b_; }));
F->e_1644 = (*(P807)rt_nil_check(F->e_1644)).next;
}
}
g_cap_ret_873 = F->saved_ret_1641;
g_cap_rflag_874 = F->saved_flag_1642;
g_ret_frames_875 = F->saved_frames_1643;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_477(P807 elems_476) {
  struct f_body_elements_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_476 = elems_476;
f_capsule_elements_466(F->elems_476);
f_await_tasks_464(F->elems_476);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_479(P807 elems_478) {
  struct f_gen_body_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_478 = elems_478;
F->saved_1646 = NULL;
F->saved_1646 = g_fins_869;
F->saved_gotos_1647 = NULL;
F->saved_gotos_1647 = g_gotos_880;
f_open_scope_168();
f_declare_labels_468(F->elems_478);
f_declare_body_375(F->elems_478);
f_body_elements_477(F->elems_478);
f_close_fins_451(F->saved_1646);
f_close_scope_169();
g_gotos_880 = F->saved_gotos_1647;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_481(rt_int upto_480) {
  struct f_pop_frames_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_480 = upto_480;
F->i_1648 = g_frames_881;
F->c_1649 = NULL;
F->c_1649 = g_cleanups_883;
while ((F->i_1648 > F->upto_480)) {
f_emit_29(&(((P800)rt_nil_check((*(P811)rt_nil_check(F->c_1649)).s))->all));
F->c_1649 = (*(P811)rt_nil_check(F->c_1649)).next;
F->i_1648 = rt_sub(F->i_1648, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_483(rstr *s_482) {
  struct f_push_cleanup_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_482 = s_482;
F->c_1650 = NULL;
{ R812 *cell1651 = rt_alloc(sizeof(R812));
(*cell1651).s = NULL;
(*cell1651).next = NULL;
F->c_1650 = cell1651;
}
(*(P811)rt_nil_check(F->c_1650)).s = f_mk_3(&(*F->s_482));
(*(P811)rt_nil_check(F->c_1650)).next = g_cleanups_883;
g_cleanups_883 = F->c_1650;
g_frames_881 = rt_add(g_frames_881, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_484(void) {
  struct f_pop_cleanup_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_883 = (*(P811)rt_nil_check(g_cleanups_883)).next;
g_frames_881 = rt_sub(g_frames_881, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_486(P807 s_485) {
  struct f_gen_statement_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_485 = s_485;
F->label_1652 = NULL;
F->gl_1653 = NULL;
F->gl_1653 = (*(P807)rt_nil_check(F->s_485)).labels;
while ((F->gl_1653 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P832)rt_nil_check(f_goto_label_471(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->gl_1653)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1653 = (*(P807)rt_nil_check(F->gl_1653)).next;
}
if (((*(P807)rt_nil_check(F->s_485)).tag != NULL)) {
F->x_1654 = NULL;
{ R833 *cell1655 = rt_alloc(sizeof(R833));
(*cell1655).match = NULL;
(*cell1655).label = NULL;
(*cell1655).next = NULL;
F->x_1654 = cell1655;
}
F->label_1652 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P832)rt_nil_check(F->x_1654)).match = (*(P807)rt_nil_check(F->s_485)).tag;
(*(P832)rt_nil_check(F->x_1654)).label = F->label_1652;
(*(P832)rt_nil_check(F->x_1654)).depth = g_frames_881;
(*(P832)rt_nil_check(F->x_1654)).next = g_exits_879;
g_exits_879 = F->x_1654;
}
{ rt_int sel1656 = (*(P807)rt_nil_check(F->s_485)).kind;
if (0 || (sel1656 == (((rt_int)20LL)))) {
f_st_assign_488(F->s_485);
} else if (0 || (sel1656 == (((rt_int)21LL)))) {
f_st_call_490(F->s_485);
} else if (0 || (sel1656 == (((rt_int)22LL)))) {
f_st_if_492(F->s_485);
} else if (0 || (sel1656 == (((rt_int)23LL)))) {
f_st_case_494(F->s_485);
} else if (0 || (sel1656 == (((rt_int)24LL)))) {
f_st_repeat_496(F->s_485);
} else if (0 || (sel1656 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_479((*(P807)rt_nil_check(F->s_485)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1656 == (((rt_int)27LL)))) {
f_st_exit_498(F->s_485);
} else if (0 || (sel1656 == (((rt_int)29LL)))) {
{
F->x_1657 = NULL;
F->x_1657 = f_goto_label_471(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->s_485)).name))->all));
if ((F->x_1657 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_485)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->s_485)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_481((*(P832)rt_nil_check(F->x_1657)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P800)rt_nil_check((*(P832)rt_nil_check(F->x_1657)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1656 == (((rt_int)28LL)))) {
f_st_return_500(F->s_485);
} else if (0 || (sel1656 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_507(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->s_485)).name))->all), (*(P807)rt_nil_check(F->s_485)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1656 == (((rt_int)31LL)))) {
if ((g_handlers_882 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_485)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P800)rt_nil_check((*(P811)rt_nil_check(g_handlers_882)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1656 == (((rt_int)26LL)))) {
f_st_guard_509(F->s_485);
} else if (0 || (sel1656 == (((rt_int)32LL)))) {
f_st_alloc_511(F->s_485);
} else if (0 || (sel1656 == (((rt_int)34LL)))) {
f_st_create_515(F->s_485);
} else if (0 || (sel1656 == (((rt_int)35LL)))) {
f_st_wait_544(F->s_485);
} else if (0 || (sel1656 == (((rt_int)36LL)))) {
f_st_region_552(F->s_485);
} else {
f_fail_23((*(P807)rt_nil_check(F->s_485)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P807)rt_nil_check(F->s_485)).tag != NULL)) {
g_exits_879 = (*(P832)rt_nil_check(g_exits_879)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->label_1652))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_488(P807 s_487) {
  struct f_st_assign_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_487 = s_487;
F->lv_1658 = NULL;
F->t_1659 = NULL;
F->vt_1660 = NULL;
F->c_1661 = NULL;
if (((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).kind == (((rt_int)10LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b != NULL)) && ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_610((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).a, &F->lv_1658, &F->t_1659, &F->c_1661, &F->ro_1662);
while (((*(P813)rt_nil_check(F->t_1659)).kind == (((rt_int)8LL)))) {
f_finish_ptr_404(F->t_1659);
F->lv_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_602(&(((P800)rt_nil_check(F->lv_1658))->all), F->t_1659); b_; }));
F->t_1659 = (*(P813)rt_nil_check(F->t_1659)).target;
}
if ((((*(P813)rt_nil_check(F->t_1659)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->t_1659)).tparams == NULL))) {
F->t_1659 = (*(P813)rt_nil_check(F->t_1659)).under;
} else if (((*(P813)rt_nil_check(F->t_1659)).kind == (((rt_int)15LL)))) {
F->lv_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->lv_1658))->all), rt_str(".all", 4)); b_; }));
F->t_1659 = (*(P813)rt_nil_check(F->t_1659)).under;
}
if ((((!F->ro_1662) && ((*(P813)rt_nil_check(F->t_1659)).kind == (((rt_int)6LL)))) && ((*(P813)rt_nil_check(F->t_1659)).ndim == ((rt_int)1LL)))) {
F->lo_1663 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b)).a, (*(P813)rt_nil_check(F->t_1659)).idx, &F->vt_1660));
F->hi_1664 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b)).b, (*(P813)rt_nil_check(F->t_1659)).idx, &F->vt_1660));
F->v_1665 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->s_487)).b, F->t_1659, &F->vt_1660));
f_need_slice_622(F->t_1659);
f_check_type_223(F->vt_1660, F->t_1659, (*(P807)rt_nil_check(F->s_487)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_1659)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_225(F->t_1659)), rt_str("(", 1)), (((P800)rt_nil_check(F->lv_1658))->all)), rt_str(", ", 2)), F->lo_1663), rt_str(", ", 2)), F->hi_1664), rt_str("); as_", 6)), f_ctype_225(F->t_1659)), rt_str("(&sl_, ", 7)), F->v_1665), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_1662 || ((*(P813)rt_nil_check(F->t_1659)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P807)rt_nil_check(F->s_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1666 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b)).a, g_ty_int_886, &F->vt_1660));
F->hi_1667 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->s_487)).a)).b)).b, g_ty_int_886, &F->vt_1660));
F->v_1668 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->s_487)).b, g_ty_string_890, &F->vt_1660));
f_check_type_223(F->vt_1660, g_ty_string_890, (*(P807)rt_nil_check(F->s_487)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P800)rt_nil_check(F->lv_1658))->all)), rt_str(", ", 2)), F->lo_1666), rt_str(", ", 2)), F->hi_1667), rt_str(", ", 2)), F->v_1668), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_610((*(P807)rt_nil_check(F->s_487)).a, &F->lv_1658, &F->t_1659, &F->c_1661, &F->ro_1662);
if (F->ro_1662) {
f_fail_23((*(P807)rt_nil_check(F->s_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_296(F->t_1659)) && (!f_exports_op_397((*(P813)rt_nil_check(F->t_1659)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P807)rt_nil_check(F->s_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_1659)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1669 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->s_487)).b, F->t_1659, F->c_1661, &F->vt_1660));
f_check_type_223(F->vt_1660, F->t_1659, (*(P807)rt_nil_check(F->s_487)).line);
f_ptr_subtype_check_424(F->t_1659, F->c_1661, (*(P807)rt_nil_check(F->s_487)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_356(&(((P800)rt_nil_check(F->lv_1658))->all), F->t_1659, &F->v_1669, F->c_1661); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_490(P807 s_489) {
  struct f_st_call_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_489 = s_489;
F->c_1670 = NULL;
F->c_1670 = (*(P807)rt_nil_check(F->s_489)).a;
F->t_1671 = NULL;
if ((((*(P807)rt_nil_check(F->c_1670)).kind == (((rt_int)7LL))) || ((*(P807)rt_nil_check(F->c_1670)).kind == (((rt_int)12LL))))) {
F->x_1672 = NULL;
F->x_1672 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->c_1670)).line);
(*(P807)rt_nil_check(F->x_1672)).a = F->c_1670;
F->c_1670 = F->x_1672;
}
if (((*(P807)rt_nil_check(F->c_1670)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P807)rt_nil_check(F->s_489)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_771(F->c_1670, 1, &F->t_1671), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_492(P807 s_491) {
  struct f_st_if_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_491 = s_491;
F->a_1673 = NULL;
F->a_1673 = (*(P807)rt_nil_check(F->s_491)).a;
F->first_1674 = 1;
F->t_1675 = NULL;
F->taken_1676 = 0;
F->mv_1678 = NULL;
while (((F->a_1673 != NULL) && (!F->taken_1676))) {
F->mv_1678 = f_meval_337((*(P807)rt_nil_check(F->a_1673)).a, &F->ok_1677);
if (((F->ok_1677 && ((*(P826)rt_nil_check(F->mv_1678)).kind == (((rt_int)2LL)))) && ((*(P826)rt_nil_check(F->mv_1678)).i == ((rt_int)0LL)))) {
F->a_1673 = (*(P807)rt_nil_check(F->a_1673)).next;
} else {
if ((F->ok_1677 && ((*(P826)rt_nil_check(F->mv_1678)).kind == (((rt_int)2LL))))) {
F->taken_1676 = 1;
if (F->first_1674) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1679 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->a_1673)).a, g_ty_bool_887, &F->t_1675));
f_check_type_223(F->t_1675, g_ty_bool_887, (*(P807)rt_nil_check(F->s_491)).line);
if (F->first_1674) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1679), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1679), rt_str(") {", 3)); b_; }));
}
}
F->first_1674 = 0;
f_gen_body_479((*(P807)rt_nil_check(F->a_1673)).b);
F->a_1673 = (*(P807)rt_nil_check(F->a_1673)).next;
}
}
if ((((*(P807)rt_nil_check(F->s_491)).flag == ((rt_int)1LL)) && (!F->taken_1676))) {
if (F->first_1674) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1674 = 0;
f_gen_body_479((*(P807)rt_nil_check(F->s_491)).b);
}
if ((!F->first_1674)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_494(P807 s_493) {
  struct f_st_case_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_493 = s_493;
F->st_1680 = NULL;
F->vt_1681 = NULL;
F->first_1682 = 1;
F->a_1683 = NULL;
F->a_1683 = (*(P807)rt_nil_check(F->s_493)).b;
F->sel_1684 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->s_493)).a, NULL, &F->st_1680));
F->tmp_1685 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->st_1680)), rt_str(" ", 1)), F->tmp_1685), rt_str(" = ", 3)), F->sel_1684), rt_str(";", 1)); b_; }));
while ((F->a_1683 != NULL)) {
F->lab_1686 = NULL;
F->lab_1686 = (*(P807)rt_nil_check(F->a_1683)).a;
F->conds_1687 = NULL;
F->conds_1687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1686 != NULL)) {
if (((*(P807)rt_nil_check(F->lab_1686)).b == NULL)) {
F->v_1688 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->lab_1686)).a, F->st_1680, &F->vt_1681));
f_check_type_223(F->vt_1681, F->st_1680, (*(P807)rt_nil_check(F->s_493)).line);
F->conds_1687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->conds_1687))->all), rt_str(" || ", 4)), f_eq_code_363(F->st_1680, &F->tmp_1685, &F->v_1688)); b_; }));
} else {
F->lo_1689 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->lab_1686)).a, F->st_1680, &F->vt_1681));
F->hi_1690 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->lab_1686)).b, F->st_1680, &F->vt_1681));
F->conds_1687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->conds_1687))->all), rt_str(" || (", 5)), F->tmp_1685), rt_str(" >= ", 4)), F->lo_1689), rt_str(" && ", 4)), F->tmp_1685), rt_str(" <= ", 4)), F->hi_1690), rt_str(")", 1)); b_; }));
}
F->lab_1686 = (*(P807)rt_nil_check(F->lab_1686)).next;
}
if (F->first_1682) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P800)rt_nil_check(F->conds_1687))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P800)rt_nil_check(F->conds_1687))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1682 = 0;
f_gen_body_479((*(P807)rt_nil_check(F->a_1683)).b);
F->a_1683 = (*(P807)rt_nil_check(F->a_1683)).next;
}
if (F->first_1682) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P807)rt_nil_check(F->s_493)).flag == ((rt_int)1LL))) {
f_gen_body_479((*(P807)rt_nil_check(F->s_493)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_496(P807 s_495) {
  struct f_st_repeat_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_495 = s_495;
F->t_1691 = NULL;
F->c_1692 = NULL;
if (((*(P807)rt_nil_check(F->s_495)).flag == ((rt_int)0LL))) {
F->cond_1693 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->s_495)).a, g_ty_bool_887, &F->t_1691));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1693), rt_str(") {", 3)); b_; }));
f_gen_body_479((*(P807)rt_nil_check(F->s_495)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1691 = f_resolve_subtype_256((*(P807)rt_nil_check(F->s_495)).a, &F->c_1692);
F->c_1692 = f_base_cons_217(F->t_1691, F->c_1692);
if ((((*(P813)rt_nil_check(f_base_of_214(F->t_1691))).kind == (((rt_int)4LL))) && ((*(P809)rt_nil_check(F->c_1692)).lo == NULL))) {
F->c_1692 = f_new_cons_175();
(*(P809)rt_nil_check(F->c_1692)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P809)rt_nil_check(F->c_1692)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P813)rt_nil_check(f_base_of_214(F->t_1691))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P809)rt_nil_check(F->c_1692)).lo == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_495)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1694 = rt_str_copy(f_storage_442(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->s_495)).name))->all), F->t_1691));
F->lov_1695 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1696 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1697 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1698 = NULL;
F->y_1698 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->s_495)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1695), rt_str(" = ", 3)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_1692)).lo))->all)), rt_str(", ", 2)), F->hiv_1696), rt_str(" = ", 3)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_1692)).hi))->all)), rt_str(";", 1)); b_; }));
if (((*(P807)rt_nil_check(F->s_495)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1697), rt_str(" = ", 3)), F->hiv_1696), rt_str("; ", 2)), F->it_1697), rt_str(" >= ", 4)), F->lov_1695), rt_str("; ", 2)), F->it_1697), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1697), rt_str(" = ", 3)), F->lov_1695), rt_str("; ", 2)), F->it_1697), rt_str(" <= ", 4)), F->hiv_1696), rt_str("; ", 2)), F->it_1697), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1694, rt_str(" = ", 3)), F->it_1697), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P817)rt_nil_check(F->y_1698)).t = F->t_1691;
(*(P817)rt_nil_check(F->y_1698)).c = F->c_1692;
f_bind_445(F->y_1698, &F->access_1694);
(*(P817)rt_nil_check(F->y_1698)).ro_flag = 1;
f_define_159(F->y_1698, (*(P807)rt_nil_check(F->s_495)).line);
f_gen_body_479((*(P807)rt_nil_check(F->s_495)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_498(P807 s_497) {
  struct f_st_exit_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_497 = s_497;
F->x_1699 = NULL;
F->x_1699 = g_exits_879;
while ((F->x_1699 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P832)rt_nil_check(F->x_1699)).match))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->s_497)).name))->all))) {
f_pop_frames_481((*(P832)rt_nil_check(F->x_1699)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P800)rt_nil_check((*(P832)rt_nil_check(F->x_1699)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1699 = (*(P832)rt_nil_check(F->x_1699)).next;
}
f_fail_23((*(P807)rt_nil_check(F->s_497)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P800)rt_nil_check((*(P807)rt_nil_check(F->s_497)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_500(P807 s_499) {
  struct f_st_return_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_499 = s_499;
F->vt_1700 = NULL;
if ((g_cap_ret_873 != NULL)) {
if (((*(P807)rt_nil_check(F->s_499)).a != NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_481(g_ret_frames_875);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(g_cap_rflag_874))->all), rt_str(" = 1; goto ", 11)), (((P800)rt_nil_check(g_cap_ret_873))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_859)) {
f_pop_frames_481(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P813)rt_nil_check((*(P817)rt_nil_check(g_func_sym_871)).result)).kind == (((rt_int)9LL)))) {
if (((*(P807)rt_nil_check(F->s_499)).a != NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_481(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P807)rt_nil_check(F->s_499)).a == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->s_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1701 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->s_499)).a, (*(P817)rt_nil_check(g_func_sym_871)).result, g_func_rc_872, &F->vt_1700));
f_check_type_223(F->vt_1700, (*(P817)rt_nil_check(g_func_sym_871)).result, (*(P807)rt_nil_check(F->s_499)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_504((*(P817)rt_nil_check(g_func_sym_871)).result, g_func_rc_872, &F->v_1701)), rt_str(";", 1)); b_; }));
f_pop_frames_481(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_504(P813 t_501, P809 c_502, rstr *v_503) {
  struct f_result_checked_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_501 = t_501;
F->c_502 = c_502;
F->v_503 = v_503;
if ((F->c_502 == NULL)) {
F->result_ = (*F->v_503);
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_501)).kind == (((rt_int)5LL))) && ((*(P809)rt_nil_check(F->c_502)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_503)), rt_str(", ", 2)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_502)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->t_501)).kind == (((rt_int)6LL))) && ((*(P809)rt_nil_check(F->c_502)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->t_501)), rt_str(" r_ = ", 6)), (*F->v_503)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_502)).lo))->all)), rt_str(", ", 2)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_502)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_501, F->c_502, &(*F->v_503));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_507(rstr *name_505, rt_int line_506) {
  struct f_exc_id_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_505 = name_505;
F->line_506 = line_506;
F->y_1702 = NULL;
F->y_1702 = f_lookup_154(&(*F->name_505));
if (((F->y_1702 != NULL) && ((*(P817)rt_nil_check(F->y_1702)).kind == (((rt_int)7LL))))) {
F->result_ = (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1702)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_505)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_505), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_505)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_505), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_509(P807 s_508) {
  struct f_st_guard_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_508 = s_508;
F->h_1703 = NULL;
F->h_1703 = (*(P807)rt_nil_check(F->s_508)).b;
F->first_1704 = 1;
F->hv_1705 = NULL;
{
F->f_1706 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1707 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1706), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1706), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1706), rt_str(")) {", 4)); b_; }));
f_gen_body_479((*(P807)rt_nil_check(F->s_508)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1706), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_484();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1706), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1707), rt_str(" = rt_xcur;", 11)); b_; }));
{ R812 *cell1708 = rt_alloc(sizeof(R812));
(*cell1708).s = NULL;
(*cell1708).next = NULL;
F->hv_1705 = cell1708;
}
(*(P811)rt_nil_check(F->hv_1705)).s = f_mk_3(&F->x_1707);
(*(P811)rt_nil_check(F->hv_1705)).next = g_handlers_882;
g_handlers_882 = F->hv_1705;
while ((F->h_1703 != NULL)) {
F->n_1709 = NULL;
F->n_1709 = (*(P807)rt_nil_check(F->h_1703)).a;
F->conds_1710 = NULL;
F->conds_1710 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1709 != NULL)) {
F->conds_1710 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->conds_1710))->all), rt_str(" || ", 4)), F->x_1707), rt_str(" == ", 4)), f_exc_id_507(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->n_1709)).name))->all), (*(P807)rt_nil_check(F->s_508)).line)); b_; }));
F->n_1709 = (*(P807)rt_nil_check(F->n_1709)).next;
}
if (F->first_1704) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P800)rt_nil_check(F->conds_1710))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P800)rt_nil_check(F->conds_1710))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1704 = 0;
f_gen_body_479((*(P807)rt_nil_check(F->h_1703)).b);
F->h_1703 = (*(P807)rt_nil_check(F->h_1703)).next;
}
if (F->first_1704) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P807)rt_nil_check(F->s_508)).flag == ((rt_int)1LL))) {
f_gen_body_479((*(P807)rt_nil_check(F->s_508)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1707), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_882 = (*(P811)rt_nil_check(g_handlers_882)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_511(P807 s_510) {
  struct f_st_alloc_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_510 = s_510;
F->lv_1711 = NULL;
F->t_1712 = NULL;
F->target_1713 = NULL;
F->vt_1714 = NULL;
F->c_1715 = NULL;
F->tc_1716 = NULL;
F->d_1718 = NULL;
F->p_1719 = NULL;
F->a_1720 = NULL;
f_lvalue_610((*(P807)rt_nil_check(F->s_510)).a, &F->lv_1711, &F->t_1712, &F->c_1715, &F->ro_1717);
if (((*(P813)rt_nil_check(F->t_1712)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P807)rt_nil_check(F->s_510)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_404(F->t_1712);
F->d_1718 = (*(P813)rt_nil_check(F->t_1712)).decl;
F->target_1713 = (*(P813)rt_nil_check(F->t_1712)).target;
if ((f_list_len_67((*(P807)rt_nil_check(F->s_510)).b) != f_list_len_67((*(P807)rt_nil_check(F->d_1718)).b))) {
f_fail_23((*(P807)rt_nil_check(F->s_510)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P807)rt_nil_check(F->d_1718)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P807)rt_nil_check(F->d_1718)).b != NULL)) {
f_alloc_cell_416(F->s_510, &(((P800)rt_nil_check(F->lv_1711))->all), F->t_1712, F->c_1715);
goto ret_;
}
{
F->tcn_1721 = rt_str_copy(f_ctype_225(F->target_1713));
F->cell_1722 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315(F->target_1713)) {
F->fn_1723 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_868 = 1;
g_uses_findyn_870 = 1;
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1723), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1723), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_859) {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P800)rt_nil_check((*(P817)rt_nil_check(g_func_sym_871)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1721), rt_str(" *)cell_)", 9)); b_; }), F->target_1713)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_859) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1721), rt_str(" *", 2)), F->cell_1722), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1721), rt_str("), ", 3)), F->fn_1723), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1721), rt_str(" *", 2)), F->cell_1722), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1721), rt_str("), ", 3)), F->fn_1723), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1721), rt_str(" *", 2)), F->cell_1722), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1721), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_411((*(P807)rt_nil_check(F->d_1718)).d, f_ptr_args_406(F->c_1715), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P807)rt_nil_check(F->s_510)).line);
F->vt_1714 = f_resolve_subtype_256((*(P807)rt_nil_check(F->d_1718)).a, &F->tc_1716);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1722), rt_str(")", 1)); b_; }), F->target_1713, F->tc_1716);
f_close_scope_169();
if (((*(P807)rt_nil_check(F->s_510)).c != NULL)) {
F->v_1724 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->s_510)).c, F->target_1713, F->tc_1716, &F->vt_1714));
f_check_type_223(F->vt_1714, F->target_1713, (*(P807)rt_nil_check(F->s_510)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1722), rt_str(")", 1)); b_; }), F->target_1713, &F->v_1724, F->tc_1716); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->lv_1711))->all), rt_str(" = ", 3)), F->cell_1722), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_513(P807 e_512) {
  struct f_act_ref_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_512 = e_512;
F->lv_1725 = NULL;
F->t_1726 = NULL;
F->c_1727 = NULL;
if (((((*(P807)rt_nil_check(F->e_512)).kind == (((rt_int)7LL))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_512)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_604(F->e_512))) {
F->v_1729 = rt_str_copy(f_gexpr_641(F->e_512, g_ty_act_896, &F->t_1726));
if (((*(P813)rt_nil_check(F->t_1726)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P807)rt_nil_check(F->e_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1729;
goto ret_;
}
f_lvalue_610(F->e_512, &F->lv_1725, &F->t_1726, &F->c_1727, &F->ro_1728);
if (((*(P813)rt_nil_check(F->t_1726)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P807)rt_nil_check(F->e_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P800)rt_nil_check(F->lv_1725))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_515(P807 s_514) {
  struct f_st_create_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_514 = s_514;
F->y_1730 = NULL;
F->y_1730 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->s_514)).name))->all));
F->pm_1731 = NULL;
F->a_1732 = NULL;
F->a_1732 = (*(P807)rt_nil_check(F->s_514)).b;
F->lv_1733 = NULL;
F->lt_1734 = NULL;
F->vt_1735 = NULL;
F->lc_1736 = NULL;
if (((F->y_1730 != NULL) && ((*(P817)rt_nil_check(F->y_1730)).kind == (((rt_int)10LL))))) {
F->y_1730 = f_instantiate_586(F->y_1730, (*(P807)rt_nil_check(F->s_514)).e, (*(P807)rt_nil_check(F->s_514)).b, (*(P807)rt_nil_check(F->s_514)).line);
}
if (((F->y_1730 == NULL) || ((*(P817)rt_nil_check(F->y_1730)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P807)rt_nil_check(F->s_514)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->s_514)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1731 = (*(P817)rt_nil_check(F->y_1730)).params;
{
F->at_1738 = NULL;
F->ac_1739 = NULL;
F->act_1741 = NULL;
F->nf_1742 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_610((*(P807)rt_nil_check(F->s_514)).a, &F->lv_1733, &F->at_1738, &F->ac_1739, &F->aro_1740);
if (((*(P813)rt_nil_check(F->at_1738)).kind == (((rt_int)14LL)))) {
F->act_1741 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_513((*(P807)rt_nil_check(F->s_514)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1730)).cname))->all)), rt_str("fr *", 4)), F->nf_1742), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1742), rt_str(");", 2)); b_; }));
if (((*(P817)rt_nil_check(F->y_1730)).level > ((rt_int)0LL))) {
F->link_1743 = NULL;
F->link_1743 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1745 = ((rt_int)1LL), hi1746 = rt_sub(g_cur_level_860, (*(P817)rt_nil_check(F->y_1730)).level);
for (rt_int it1747 = lo1745; it1747 <= hi1746; it1747++) {
F->i_1744 = it1747;
F->link_1743 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->link_1743))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1742, rt_str("->up = ", 7)), (((P800)rt_nil_check(F->link_1743))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1732 != NULL) && (F->pm_1731 != NULL))) {
if (((*(P819)rt_nil_check(F->pm_1731)).mode == (((rt_int)1LL)))) {
F->v_1748 = rt_str_copy(f_gexpr_in_649(F->a_1732, (*(P819)rt_nil_check(F->pm_1731)).t, (*(P819)rt_nil_check(F->pm_1731)).c, &F->vt_1735));
f_check_type_223(F->vt_1735, (*(P819)rt_nil_check(F->pm_1731)).t, (*(P807)rt_nil_check(F->s_514)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1742, rt_str("->", 2)), (((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_1731)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_359((*(P819)rt_nil_check(F->pm_1731)).t, &F->v_1748)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_610(F->a_1732, &F->lv_1733, &F->lt_1734, &F->lc_1736, &F->ro_1737);
f_check_type_223(F->lt_1734, (*(P819)rt_nil_check(F->pm_1731)).t, (*(P807)rt_nil_check(F->s_514)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1742, rt_str("->", 2)), (((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_1731)).cfield))->all)), rt_str(" = &", 4)), (((P800)rt_nil_check(F->lv_1733))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P819)rt_nil_check(F->pm_1731)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1742, rt_str("->", 2)), (((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_1731)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1734, F->lc_1736)), rt_str("; ", 2)), F->nf_1742), rt_str("->", 2)), (((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_1731)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1734, F->lc_1736)), rt_str(";", 1)); b_; }));
}
}
F->a_1732 = (*(P807)rt_nil_check(F->a_1732)).next;
F->pm_1731 = (*(P819)rt_nil_check(F->pm_1731)).next;
}
if (((F->a_1732 != NULL) || (F->pm_1731 != NULL))) {
f_fail_23((*(P807)rt_nil_check(F->s_514)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P800)rt_nil_check((*(P807)rt_nil_check(F->s_514)).name))->all)); b_; }));
}
if ((F->act_1741 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P800)rt_nil_check(F->act_1741))->all)), rt_str(", &", 3)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1730)).cname))->all)), rt_str("decl, ", 6)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1730)).cname))->all)), rt_str(", ", 2)), F->nf_1742), rt_str("); }", 4)); b_; }));
} else {
f_user_create_525(F->s_514, F->y_1730, &(((P800)rt_nil_check(F->lv_1733))->all), F->at_1738, &F->nf_1742);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_519(rstr *name_516, P813 t_517, rstr *place_518) {
  struct f_hidden_var_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_516 = name_516;
F->t_517 = t_517;
F->place_518 = place_518;
F->y_1749 = NULL;
F->y_1749 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_516)));
(*(P817)rt_nil_check(F->y_1749)).t = F->t_517;
(*(P817)rt_nil_check(F->y_1749)).level = ((rt_int)0LL);
(*(P817)rt_nil_check(F->y_1749)).access = f_mk_3(&(*F->place_518));
f_define_159(F->y_1749, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_525(P807 s_520, P817 y_521, rstr *uv_522, P813 ut_523, rstr *nf_524) {
  struct f_user_create_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_520 = s_520;
F->y_521 = y_521;
F->uv_522 = uv_522;
F->ut_523 = ut_523;
F->nf_524 = nf_524;
F->t_1750 = NULL;
F->saved_1751 = NULL;
F->saved_1751 = g_code_857;
F->hook_1752 = NULL;
F->hook_1752 = f_new_buffer_24();
F->un_1753 = NULL;
F->un_1753 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->s_520)).line);
F->hn_1754 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1755 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1756 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1757 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_519(&F->uname_1756, F->ut_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->ut_523)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P807)rt_nil_check(F->un_1753)).name = f_mk_3(&F->uname_1756);
g_code_857 = F->hook_1752;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1753, (*(P807)rt_nil_check(F->s_520)).line), 1, &F->t_1750)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1753, (*(P807)rt_nil_check(F->s_520)).line), 1, &F->t_1750)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1753, (*(P807)rt_nil_check(F->s_520)).line), 1, &F->t_1750)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1753, (*(P807)rt_nil_check(F->s_520)).line), 1, &F->t_1750)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_857 = F->saved_1751;
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1754), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1754), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_859) {
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P800)rt_nil_check((*(P817)rt_nil_check(g_func_sym_871)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_854, F->hook_1752);
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1755), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1755, rt_str("->hook = ", 9)), F->hn_1754), rt_str("; ", 2)), F->aa_1755), rt_str("->ua = &", 8)), (*F->uv_522)), rt_str("; ", 2)), F->aa_1755), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_761(F->ut_523)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_859) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1755, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1755), rt_str(", &", 3)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_521)).cname))->all)), rt_str("decl, ", 6)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_521)).cname))->all)), rt_str(", ", 2)), (*F->nf_524)), rt_str(");", 2)); b_; }));
f_hidden_var_519(&F->aname_1757, g_ty_act_896, &F->aa_1755);
{
F->start_1758 = NULL;
F->start_1758 = f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P807)rt_nil_check(F->s_520)).a, (*(P807)rt_nil_check(F->s_520)).line);
F->an_1759 = NULL;
F->an_1759 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->s_520)).line);
(*(P807)rt_nil_check(F->an_1759)).name = f_mk_3(&F->aname_1757);
(*(P807)rt_nil_check((*(P807)rt_nil_check(F->start_1758)).b)).next = F->an_1759;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_771(F->start_1758, 1, &F->t_1750), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_530(P807 inv_526, rstr *arr_527, rt_int i_528, int mixed_529) {
  struct f_wait_alt_530fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_526 = inv_526;
F->arr_527 = arr_527;
F->i_528 = i_528;
F->mixed_529 = mixed_529;
F->lv_1760 = NULL;
F->t_1761 = NULL;
F->vt_1762 = NULL;
F->c_1763 = NULL;
F->fn_1765 = NULL;
F->args_1766 = NULL;
F->slot_1767 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_527), rt_str("[", 1)), f_itos_7(F->i_528)), rt_str("]", 1)));
if ((((*(P807)rt_nil_check(F->inv_526)).kind != (((rt_int)10LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_526)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P807)rt_nil_check(F->inv_526)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1765 = (*(P807)rt_nil_check(F->inv_526)).a;
F->args_1766 = (*(P807)rt_nil_check(F->inv_526)).b;
if ((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_610(F->args_1766, &F->lv_1760, &F->t_1761, &F->c_1763, &F->ro_1764);
if (((*(P813)rt_nil_check(F->t_1761)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P807)rt_nil_check(F->inv_526)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1768 = NULL;
F->dt_1769 = NULL;
f_lvalue_610((*(P807)rt_nil_check(F->args_1766)).next, &F->dv_1768, &F->dt_1769, &F->c_1763, &F->ro_1764);
f_check_type_223(F->dt_1769, (*(P813)rt_nil_check(F->t_1761)).elem, (*(P807)rt_nil_check(F->inv_526)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P800)rt_nil_check(F->lv_1760))->all)), rt_str(", &", 3)), (((P800)rt_nil_check(F->dv_1768))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1770 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1771 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_1766)).next, (*(P813)rt_nil_check(F->t_1761)).elem, &F->vt_1762));
f_check_type_223(F->vt_1762, (*(P813)rt_nil_check(F->t_1761)).elem, (*(P807)rt_nil_check(F->inv_526)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P813)rt_nil_check(F->t_1761)).elem), rt_str(" ", 1)), F->tmp_1770), rt_str(" = ", 3)), F->v_1771), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P800)rt_nil_check(F->lv_1760))->all)), rt_str(", &", 3)), F->tmp_1770), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1772 = rt_str_copy(f_gexpr_641(F->args_1766, g_ty_int_886, &F->vt_1762));
if ((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("DELAY", 5)) && F->mixed_529)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1772), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1772), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1772), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1767, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_513(F->args_1766)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->inv_526)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_1765)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_532(P807 inv_531) {
  struct f_builtin_wait_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_531 = inv_531;
F->lv_1773 = NULL;
F->t_1774 = NULL;
F->c_1775 = NULL;
F->saved_1777 = NULL;
F->saved_1777 = g_code_857;
F->ok_1778 = 0;
if ((((*(P807)rt_nil_check(F->inv_531)).kind != (((rt_int)10LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_531)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
g_code_857 = f_new_buffer_24();
{ rt_frame xf1779;
if (RT_TRY(xf1779)) {
f_lvalue_610((*(P807)rt_nil_check(F->inv_531)).b, &F->lv_1773, &F->t_1774, &F->c_1775, &F->ro_1776);
F->ok_1778 = ((*(P813)rt_nil_check(F->t_1774)).kind == (((rt_int)12LL)));
RT_POP(xf1779);
} else {
RT_POP(xf1779);
int x1780 = rt_xcur;
if (0 || x1780 == ex_compile_error_1) {
F->ok_1778 = 0;
} else {
rt_raise(x1780);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
g_code_857 = F->saved_1777;
F->result_ = F->ok_1778;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_537(P807 inv_533, rstr *op_534, rstr *q_535, int is_stmt_536) {
  struct f_wait_op_537fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_533 = inv_533;
F->op_534 = op_534;
F->q_535 = q_535;
F->is_stmt_536 = is_stmt_536;
F->x_1781 = NULL;
F->x_1781 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->inv_533)).line);
F->f_1782 = NULL;
F->f_1782 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->inv_533)).line);
F->qn_1783 = NULL;
F->qn_1783 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->inv_533)).line);
F->t_1784 = NULL;
(*(P807)rt_nil_check(F->f_1782)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_533)).a)).name))->all), rt_str("_", 1)), (*F->op_534)); b_; }));
(*(P807)rt_nil_check(F->qn_1783)).name = f_mk_3(&(*F->q_535));
(*(P807)rt_nil_check(F->qn_1783)).next = (*(P807)rt_nil_check(F->inv_533)).b;
(*(P807)rt_nil_check(F->x_1781)).a = F->f_1782;
(*(P807)rt_nil_check(F->x_1781)).b = F->qn_1783;
{
F->r_1785 = rt_str_copy(f_gcall_771(F->x_1781, F->is_stmt_536, &F->t_1784));
if ((!F->is_stmt_536)) {
f_check_type_223(F->t_1784, g_ty_bool_887, (*(P807)rt_nil_check(F->inv_533)).line);
}
F->result_ = F->r_1785;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_542(P807 s_538, rstr *arr_539, rstr *w_540, rt_int n_541) {
  struct f_user_wait_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_538 = s_538;
F->arr_539 = arr_539;
F->w_540 = w_540;
F->n_541 = n_541;
F->a_1786 = NULL;
F->a_1786 = (*(P807)rt_nil_check(F->s_538)).a;
F->i_1787 = ((rt_int)0LL);
F->tests_1788 = NULL;
F->tests_1788 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1789 = NULL;
F->revokes_1789 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1786 != NULL)) {
F->inv_1790 = NULL;
F->inv_1790 = (*(P807)rt_nil_check(F->a_1786)).a;
while ((F->inv_1790 != NULL)) {
if (f_builtin_wait_532(F->inv_1790)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_530(F->inv_1790, &(*F->arr_539), F->i_1787, 1); b_; }));
} else {
F->st_1791 = NULL;
F->st_1791 = f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->inv_1790)).line);
F->c_1792 = NULL;
F->qt_1793 = NULL;
F->qname_1794 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1795 = NULL;
F->y_1795 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1794));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_539), rt_str("[", 1)), f_itos_7(F->i_1787)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P807)rt_nil_check(F->st_1791)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->inv_1790)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1793 = f_resolve_subtype_256(F->st_1791, &F->c_1792);
{
F->access_1796 = rt_str_copy(f_storage_442(&F->qname_1794, F->qt_1793));
f_init_storage_310(&F->access_1796, F->qt_1793, F->c_1792);
(*(P817)rt_nil_check(F->y_1795)).t = F->qt_1793;
(*(P817)rt_nil_check(F->y_1795)).c = F->c_1792;
f_bind_445(F->y_1795, &F->access_1796);
f_define_159(F->y_1795, (*(P807)rt_nil_check(F->inv_1790)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_537(F->inv_1790, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1794, 1), rt_str(";", 1)); b_; }));
F->tests_1788 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->tests_1788))->all), rt_str("if (", 4)), f_wait_op_537(F->inv_1790, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1794, 0)), rt_str(") { ", 4)), f_wait_op_537(F->inv_1790, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1794, 1)), rt_str("; ", 2)), (*F->w_540)), rt_str(" = ", 3)), f_itos_7(F->i_1787)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1789 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->revokes_1789))->all), f_wait_op_537(F->inv_1790, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1794, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1787 = rt_add(F->i_1787, ((rt_int)1LL));
F->inv_1790 = (*(P807)rt_nil_check(F->inv_1790)).next;
}
F->a_1786 = (*(P807)rt_nil_check(F->a_1786)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_540)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P800)rt_nil_check(F->tests_1788))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_540), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_541)), rt_str(", ", 2)), (*F->arr_539)), rt_str("); if (", 7)), (*F->w_540)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_541)), rt_str(", ", 2)), (*F->arr_539)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_540)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_540)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P800)rt_nil_check(F->revokes_1789))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_544(P807 s_543) {
  struct f_st_wait_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_543 = s_543;
F->a_1797 = NULL;
F->a_1797 = (*(P807)rt_nil_check(F->s_543)).a;
F->n_1798 = ((rt_int)0LL);
F->first_1799 = 1;
F->inits_1800 = NULL;
F->inits_1800 = f_new_buffer_24();
F->user_1801 = 0;
F->arr_1802 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1803 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1797 != NULL)) {
F->inv_1804 = NULL;
F->inv_1804 = (*(P807)rt_nil_check(F->a_1797)).a;
F->n_1798 = rt_add(F->n_1798, f_list_len_67((*(P807)rt_nil_check(F->a_1797)).a));
while ((F->inv_1804 != NULL)) {
if ((!f_builtin_wait_532(F->inv_1804))) {
F->user_1801 = 1;
}
F->inv_1804 = (*(P807)rt_nil_check(F->inv_1804)).next;
}
F->a_1797 = (*(P807)rt_nil_check(F->a_1797)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1802), rt_str("[", 1)), f_itos_7(F->n_1798)), rt_str("];", 2)); b_; }));
if (F->user_1801) {
f_user_wait_542(F->s_543, &F->arr_1802, &F->w_1803, F->n_1798);
} else {
F->a_1797 = (*(P807)rt_nil_check(F->s_543)).a;
F->n_1798 = ((rt_int)0LL);
while ((F->a_1797 != NULL)) {
F->inv_1805 = NULL;
F->inv_1805 = (*(P807)rt_nil_check(F->a_1797)).a;
while ((F->inv_1805 != NULL)) {
f_put_27(F->inits_1800, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_530(F->inv_1805, &F->arr_1802, F->n_1798, 0); b_; }));
F->n_1798 = rt_add(F->n_1798, ((rt_int)1LL));
F->inv_1805 = (*(P807)rt_nil_check(F->inv_1805)).next;
}
F->a_1797 = (*(P807)rt_nil_check(F->a_1797)).next;
}
f_splice_34(g_code_857, F->inits_1800);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1803), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1798)), rt_str(", ", 2)), F->arr_1802), rt_str(");", 2)); b_; }));
}
F->a_1797 = (*(P807)rt_nil_check(F->s_543)).a;
F->n_1798 = ((rt_int)0LL);
while ((F->a_1797 != NULL)) {
F->conds_1806 = NULL;
F->conds_1806 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1808 = ((rt_int)1LL), hi1809 = f_list_len_67((*(P807)rt_nil_check(F->a_1797)).a);
for (rt_int it1810 = lo1808; it1810 <= hi1809; it1810++) {
F->i_1807 = it1810;
F->conds_1806 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->conds_1806))->all), rt_str(" || ", 4)), F->w_1803), rt_str(" == ", 4)), f_itos_7(F->n_1798)); b_; }));
F->n_1798 = rt_add(F->n_1798, ((rt_int)1LL));
}
}
if (F->first_1799) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P800)rt_nil_check(F->conds_1806))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P800)rt_nil_check(F->conds_1806))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1799 = 0;
f_gen_body_479((*(P807)rt_nil_check(F->a_1797)).b);
F->a_1797 = (*(P807)rt_nil_check(F->a_1797)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P807 f_call_node_548(rstr *name_545, P807 arg_546, rt_int line_547) {
  struct f_call_node_548fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_545 = name_545;
F->arg_546 = arg_546;
F->line_547 = line_547;
F->x_1811 = NULL;
F->x_1811 = f_nn_61((((rt_int)10LL)), F->line_547);
F->f_1812 = NULL;
F->f_1812 = f_nn_61((((rt_int)7LL)), F->line_547);
(*(P807)rt_nil_check(F->f_1812)).name = f_mk_3(&(*F->name_545));
(*(P807)rt_nil_check(F->x_1811)).a = F->f_1812;
(*(P807)rt_nil_check(F->x_1811)).b = f_copy_node_662(F->arg_546);
(*(P807)rt_nil_check((*(P807)rt_nil_check(F->x_1811)).b)).next = NULL;
F->result_ = F->x_1811;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_550(P807 s_549) {
  struct f_user_region_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_549 = s_549;
F->t_1813 = NULL;
F->f_1814 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1815 = rt_str_copy(f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P807)rt_nil_check(F->s_549)).a, (*(P807)rt_nil_check(F->s_549)).line), 1, &F->t_1813));
F->unlock_1816 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_771(f_call_node_548(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P807)rt_nil_check(F->s_549)).a, (*(P807)rt_nil_check(F->s_549)).line), 1, &F->t_1813)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1815), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1814), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1814), rt_str(")) {", 4)); b_; }));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1814), rt_str("); ", 3)), F->unlock_1816); b_; }));
f_gen_body_479((*(P807)rt_nil_check(F->s_549)).b);
f_pop_cleanup_484();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1814), rt_str("); ", 3)), F->unlock_1816); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1814), rt_str("); ", 3)), F->unlock_1816), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_552(P807 s_551) {
  struct f_st_region_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_551 = s_551;
F->lv_1817 = NULL;
F->t_1818 = NULL;
F->c_1819 = NULL;
F->lk_1821 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1822 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_610((*(P807)rt_nil_check(F->s_551)).a, &F->lv_1817, &F->t_1818, &F->c_1819, &F->ro_1820);
if (((*(P813)rt_nil_check(F->t_1818)).kind != (((rt_int)13LL)))) {
f_user_region_550(F->s_551);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1821), rt_str(" = &", 4)), (((P800)rt_nil_check(F->lv_1817))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1821), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1822), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1822), rt_str(")) {", 4)); b_; }));
f_push_cleanup_483(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1822), rt_str("); rt_region_leave(", 19)), F->lk_1821), rt_str(");", 2)); b_; }));
f_gen_body_479((*(P807)rt_nil_check(F->s_551)).b);
f_pop_cleanup_484();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1822), rt_str("); rt_region_leave(", 19)), F->lk_1821), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1822), rt_str("); rt_region_leave(", 19)), F->lk_1821), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P807 f_gparam_555(P807 g_553, rstr *name_554) {
  struct f_gparam_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_553 = g_553;
F->name_554 = name_554;
F->p_1823 = NULL;
F->p_1823 = (*(P807)rt_nil_check(F->g_553)).a;
while ((F->p_1823 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1823)).name))->all), (*F->name_554))) {
F->result_ = F->p_1823;
goto ret_;
}
F->p_1823 = (*(P807)rt_nil_check(F->p_1823)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_bind_sym_557(P807 p_556) {
  struct f_bind_sym_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_556 = p_556;
F->y_1824 = NULL;
if (((*(P807)rt_nil_check(F->p_556)).ival <= ((rt_int)2LL))) {
F->y_1824 = f_new_sym_172((((rt_int)5LL)), (*(P807)rt_nil_check(F->p_556)).name);
} else {
F->y_1824 = f_new_sym_172((((rt_int)2LL)), (*(P807)rt_nil_check(F->p_556)).name);
}
F->result_ = F->y_1824;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_560(P817 a_558, P817 b_559) {
  struct f_same_binds_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_558 = a_558;
F->b_559 = b_559;
F->x_1825 = NULL;
F->x_1825 = F->a_558;
F->y_1826 = NULL;
F->y_1826 = F->b_559;
while (((F->x_1825 != NULL) && (F->y_1826 != NULL))) {
if (((!rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->x_1825)).name))->all), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_1826)).name))->all))) || (!f_same_binding_563(F->x_1825, F->y_1826)))) {
F->result_ = 0;
goto ret_;
}
F->x_1825 = (*(P817)rt_nil_check(F->x_1825)).mnext;
F->y_1826 = (*(P817)rt_nil_check(F->y_1826)).mnext;
}
F->result_ = ((F->x_1825 == NULL) && (F->y_1826 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_563(P817 a_561, P817 b_562) {
  struct f_same_binding_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_561 = a_561;
F->b_562 = b_562;
if (((*(P817)rt_nil_check(F->a_561)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P817)rt_nil_check(F->b_562)).kind == (((rt_int)5LL))) && f_same_212((*(P817)rt_nil_check(F->a_561)).t, (*(P817)rt_nil_check(F->b_562)).t));
goto ret_;
}
if ((((*(P817)rt_nil_check(F->a_561)).kind == (((rt_int)2LL))) && (*(P817)rt_nil_check(F->a_561)).hasmv)) {
F->result_ = ((*(P817)rt_nil_check(F->b_562)).hasmv && ((*(P817)rt_nil_check(F->a_561)).mvalue == (*(P817)rt_nil_check(F->b_562)).mvalue));
goto ret_;
}
F->result_ = ((((*(P817)rt_nil_check(F->a_561)).cname != NULL) && ((*(P817)rt_nil_check(F->b_562)).cname != NULL)) && rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->a_561)).cname))->all), (((P800)rt_nil_check((*(P817)rt_nil_check(F->b_562)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_tt_binds_568(P807 gd_564, P807 formals_565, P807 actuals_566, rt_int line_567) {
  struct f_tt_binds_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_564 = gd_564;
F->formals_565 = formals_565;
F->actuals_566 = actuals_566;
F->line_567 = line_567;
F->f_1827 = NULL;
F->f_1827 = F->formals_565;
F->a_1828 = NULL;
F->a_1828 = F->actuals_566;
F->binds_1829 = NULL;
F->c_1830 = NULL;
F->at_1831 = NULL;
while (((F->f_1827 != NULL) && (F->a_1828 != NULL))) {
F->p_1832 = NULL;
F->p_1832 = f_gparam_555(F->gd_564, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->f_1827)).name))->all));
F->b_1833 = NULL;
if ((F->p_1832 == NULL)) {
f_fail_23(F->line_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->f_1827)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1833 = f_bind_sym_557(F->p_1832);
if (((*(P807)rt_nil_check(F->p_1832)).ival <= ((rt_int)2LL))) {
if (((*(P807)rt_nil_check(F->a_1828)).kind >= (((rt_int)70LL)))) {
(*(P817)rt_nil_check(F->b_1833)).t = f_resolve_subtype_256(F->a_1828, &F->c_1830);
} else {
F->st_1834 = NULL;
F->st_1834 = f_nn_61((((rt_int)80LL)), F->line_567);
(*(P807)rt_nil_check(F->st_1834)).name = (*(P807)rt_nil_check(F->a_1828)).name;
(*(P817)rt_nil_check(F->b_1833)).t = f_resolve_subtype_256(F->st_1834, &F->c_1830);
}
(*(P817)rt_nil_check(F->b_1833)).c = F->c_1830;
} else if (((*(P807)rt_nil_check(F->p_1832)).ival <= ((rt_int)5LL))) {
if ((((*(P807)rt_nil_check(F->a_1828)).kind != (((rt_int)7LL))) || (f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->a_1828)).name))->all)) == NULL))) {
f_fail_23(F->line_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1832)).name))->all)); b_; }));
}
F->b_1833 = f_copy_sym_383(f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->a_1828)).name))->all)));
(*(P817)rt_nil_check(F->b_1833)).name = (*(P807)rt_nil_check(F->p_1832)).name;
} else {
(*(P817)rt_nil_check(F->b_1833)).t = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1832)).a, &F->c_1830);
(*(P817)rt_nil_check(F->b_1833)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_641(F->a_1828, (*(P817)rt_nil_check(F->b_1833)).t, &F->at_1831); b_; }));
(*(P817)rt_nil_check(F->b_1833)).mvalue = f_manifest_328(F->a_1828, &F->ok_1835);
(*(P817)rt_nil_check(F->b_1833)).hasmv = F->ok_1835;
}
(*(P817)rt_nil_check(F->b_1833)).mnext = F->binds_1829;
F->binds_1829 = F->b_1833;
F->f_1827 = (*(P807)rt_nil_check(F->f_1827)).next;
F->a_1828 = (*(P807)rt_nil_check(F->a_1828)).next;
}
F->result_ = F->binds_1829;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_570(P807 st_569) {
  struct f_generic_use_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_569 = st_569;
if (((*(P807)rt_nil_check(F->st_569)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P817)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P807)rt_nil_check(F->st_569)).kind == (((rt_int)80LL))) && ((*(P807)rt_nil_check(F->st_569)).a != NULL)) && (f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->st_569)).name))->all)) != NULL)) && ((*(P817)rt_nil_check(f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->st_569)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_infer_from_575(P807 gd_571, P807 pat_572, P813 t_573, P817 known_574) {
  struct f_infer_from_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_571 = gd_571;
F->pat_572 = pat_572;
F->t_573 = t_573;
F->known_574 = known_574;
F->binds_1836 = NULL;
F->binds_1836 = F->known_574;
F->e_1837 = NULL;
F->e_1837 = (*(P807)rt_nil_check(F->pat_572)).a;
F->tp_1838 = NULL;
if (((F->t_573 == NULL) || ((*(P813)rt_nil_check(F->t_573)).gen == NULL))) {
F->result_ = F->binds_1836;
goto ret_;
}
F->tp_1838 = (*(P807)rt_nil_check((*(P817)rt_nil_check((*(P813)rt_nil_check(F->t_573)).gen)).decl)).a;
if (((*(P807)rt_nil_check(F->pat_572)).kind == (((rt_int)78LL)))) {
F->e_1837 = f_copy_node_662((*(P807)rt_nil_check(F->pat_572)).a);
(*(P807)rt_nil_check(F->e_1837)).next = NULL;
}
while (((F->e_1837 != NULL) && (F->tp_1838 != NULL))) {
F->nm_1839 = NULL;
if ((((*(P807)rt_nil_check(F->e_1837)).kind == (((rt_int)7LL))) || ((*(P807)rt_nil_check(F->e_1837)).kind == (((rt_int)80LL))))) {
F->nm_1839 = (*(P807)rt_nil_check(F->e_1837)).name;
}
if ((((F->nm_1839 != NULL) && (f_gparam_555(F->gd_571, &(((P800)rt_nil_check(F->nm_1839))->all)) != NULL)) && ((*(P807)rt_nil_check(f_gparam_555(F->gd_571, &(((P800)rt_nil_check(F->nm_1839))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1840 = NULL;
F->q_1840 = F->binds_1836;
F->have_1841 = 0;
while ((F->q_1840 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->q_1840)).name))->all), (((P800)rt_nil_check(F->nm_1839))->all))) {
F->have_1841 = 1;
}
F->q_1840 = (*(P817)rt_nil_check(F->q_1840)).mnext;
}
if ((!F->have_1841)) {
F->g_1842 = NULL;
F->g_1842 = (*(P813)rt_nil_check(F->t_573)).gbinds;
while ((F->g_1842 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->g_1842)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->tp_1838)).name))->all))) {
F->b_1843 = NULL;
F->b_1843 = f_bind_sym_557(f_gparam_555(F->gd_571, &(((P800)rt_nil_check(F->nm_1839))->all)));
(*(P817)rt_nil_check(F->b_1843)).t = (*(P817)rt_nil_check(F->g_1842)).t;
(*(P817)rt_nil_check(F->b_1843)).c = (*(P817)rt_nil_check(F->g_1842)).c;
(*(P817)rt_nil_check(F->b_1843)).mnext = F->binds_1836;
F->binds_1836 = F->b_1843;
}
F->g_1842 = (*(P817)rt_nil_check(F->g_1842)).mnext;
}
}
}
F->e_1837 = (*(P807)rt_nil_check(F->e_1837)).next;
F->tp_1838 = (*(P807)rt_nil_check(F->tp_1838)).next;
}
F->result_ = F->binds_1836;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_instantiate_type_581(P817 g_576, P807 tt_577, P807 args_578, P809 *c_579, rt_int line_580) {
  struct f_instantiate_type_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_576 = g_576;
F->tt_577 = tt_577;
F->args_578 = args_578;
F->c_579 = c_579;
F->c_579v = *F->c_579;
F->line_580 = line_580;
F->gd_1844 = NULL;
F->gd_1844 = (*(P817)rt_nil_check(F->g_576)).decl;
F->pat_1845 = NULL;
F->pat_1845 = (*(P807)rt_nil_check(F->gd_1844)).b;
F->binds_1846 = NULL;
F->binds_1846 = f_tt_binds_568(F->gd_1844, (*(P807)rt_nil_check(F->pat_1845)).e, F->tt_577, F->line_580);
F->inst_1847 = NULL;
F->inst_1847 = g_all_insts_845;
F->t_1848 = NULL;
F->saved_caps_1849 = NULL;
F->saved_caps_1849 = g_caps_862;
F->saved_env_1850 = NULL;
F->saved_env_1850 = g_genv_844;
F->saved_gdepth_1851 = g_gdepth_876;
F->c_579v = f_new_cons_175();
(*(P809)rt_nil_check(F->c_579v)).args = F->args_578;
while ((F->inst_1847 != NULL)) {
if ((((*(P817)rt_nil_check(F->inst_1847)).decl == F->pat_1845) && f_same_binds_560((*(P817)rt_nil_check(F->inst_1847)).members, F->binds_1846))) {
F->result_ = (*(P817)rt_nil_check(F->inst_1847)).t;
goto ret_;
}
F->inst_1847 = (*(P817)rt_nil_check(F->inst_1847)).insts;
}
f_open_scope_168();
{
F->b_1852 = NULL;
F->b_1852 = F->binds_1846;
while ((F->b_1852 != NULL)) {
f_define_159(F->b_1852, F->line_580);
F->b_1852 = (*(P817)rt_nil_check(F->b_1852)).mnext;
}
}
g_caps_862 = NULL;
g_genv_844 = (*(P817)rt_nil_check(F->g_576)).env;
g_gdepth_876 = g_depth_846;
{
F->y_1853 = NULL;
F->y_1853 = f_new_sym_172((((rt_int)5LL)), (*(P807)rt_nil_check(F->pat_1845)).name);
F->yc_1854 = NULL;
(*(P817)rt_nil_check(F->y_1853)).decl = F->pat_1845;
if (((*(P807)rt_nil_check(F->pat_1845)).kind == (((rt_int)44LL)))) {
F->t_1848 = f_new_typ_174((((rt_int)8LL)));
(*(P813)rt_nil_check(F->t_1848)).name = (*(P807)rt_nil_check(F->pat_1845)).name;
(*(P813)rt_nil_check(F->t_1848)).decl = F->pat_1845;
(*(P817)rt_nil_check(F->y_1853)).t = F->t_1848;
f_define_159(F->y_1853, F->line_580);
f_finish_ptr_404(F->t_1848);
} else {
f_define_159(F->y_1853, F->line_580);
F->t_1848 = f_new_type_306(F->y_1853, f_nn_61((((rt_int)80LL)), F->line_580), &F->yc_1854);
}
}
g_caps_862 = F->saved_caps_1849;
g_genv_844 = F->saved_env_1850;
g_gdepth_876 = F->saved_gdepth_1851;
(*(P813)rt_nil_check(F->t_1848)).gen = F->g_576;
(*(P813)rt_nil_check(F->t_1848)).gbinds = F->binds_1846;
f_close_scope_169();
{ R818 *cell1855 = rt_alloc(sizeof(R818));
(*cell1855).name = NULL;
(*cell1855).t = NULL;
(*cell1855).c = NULL;
(*cell1855).access = NULL;
(*cell1855).cname = NULL;
(*cell1855).st = NULL;
(*cell1855).decl = NULL;
(*cell1855).params = NULL;
(*cell1855).result = NULL;
(*cell1855).members = NULL;
(*cell1855).mnext = NULL;
(*cell1855).binds = NULL;
(*cell1855).insts = NULL;
(*cell1855).env = NULL;
(*cell1855).chain = NULL;
(*cell1855).stack = NULL;
(*cell1855).owner = NULL;
(*cell1855).gctx = NULL;
(*cell1855).mv = NULL;
(*cell1855).reqs = NULL;
(*cell1855).home = NULL;
F->inst_1847 = cell1855;
}
(*(P817)rt_nil_check(F->inst_1847)).kind = (((rt_int)5LL));
(*(P817)rt_nil_check(F->inst_1847)).name = (*(P817)rt_nil_check(F->g_576)).name;
(*(P817)rt_nil_check(F->inst_1847)).decl = F->pat_1845;
(*(P817)rt_nil_check(F->inst_1847)).t = F->t_1848;
(*(P817)rt_nil_check(F->inst_1847)).members = F->binds_1846;
(*(P817)rt_nil_check(F->inst_1847)).insts = g_all_insts_845;
g_all_insts_845 = F->inst_1847;
F->result_ = F->t_1848;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_579) = F->c_579v;
  RT_FPOP();
  return F->result_;
}

static P817 f_instantiate_586(P817 g_582, P807 tt_583, P807 args_584, rt_int line_585) {
  struct f_instantiate_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_582 = g_582;
F->tt_583 = tt_583;
F->args_584 = args_584;
F->line_585 = line_585;
F->gd_1856 = NULL;
F->gd_1856 = (*(P817)rt_nil_check(F->g_582)).decl;
F->pat_1857 = NULL;
F->pat_1857 = (*(P807)rt_nil_check(F->gd_1856)).b;
F->binds_1858 = NULL;
F->f_1859 = NULL;
F->f_1859 = (*(P807)rt_nil_check(F->pat_1857)).e;
F->a_1860 = NULL;
F->a_1860 = F->tt_583;
F->fp_1861 = NULL;
F->fp_1861 = (*(P807)rt_nil_check(F->pat_1857)).a;
F->inst_1862 = NULL;
F->at_1863 = NULL;
F->c_1864 = NULL;
F->saved_fctx_1865 = NULL;
F->saved_fctx_1865 = g_fctx_861;
F->saved_in_1866 = g_in_func_859;
F->saved_level_1867 = g_cur_level_860;
F->saved_sym_1868 = NULL;
F->saved_sym_1868 = g_func_sym_871;
F->saved_code_1869 = NULL;
F->saved_code_1869 = g_code_857;
F->saved_env_1870 = NULL;
F->saved_env_1870 = g_genv_844;
F->saved_gdepth_1871 = g_gdepth_876;
F->binds_1858 = f_tt_binds_568(F->gd_1856, F->f_1859, F->a_1860, F->line_585);
F->a_1860 = F->args_584;
while (((F->fp_1861 != NULL) && (F->a_1860 != NULL))) {
if (f_generic_use_570((*(P807)rt_nil_check(F->fp_1861)).a)) {
F->v_1872 = rt_str_copy(f_gexpr_641(F->a_1860, NULL, &F->at_1863));
F->binds_1858 = f_infer_from_575(F->gd_1856, (*(P807)rt_nil_check(F->fp_1861)).a, F->at_1863, F->binds_1858);
} else if (((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->fp_1861)).a)).kind == (((rt_int)80LL))) && (f_gparam_555(F->gd_1856, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->fp_1861)).a)).name))->all)) != NULL)) && ((*(P807)rt_nil_check(f_gparam_555(F->gd_1856, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->fp_1861)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1873 = 0;
F->q_1874 = NULL;
F->q_1874 = F->binds_1858;
while ((F->q_1874 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->q_1874)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->fp_1861)).a)).name))->all))) {
F->known_1873 = 1;
}
F->q_1874 = (*(P817)rt_nil_check(F->q_1874)).mnext;
}
if ((!F->known_1873)) {
F->b_1875 = NULL;
F->b_1875 = f_bind_sym_557(f_gparam_555(F->gd_1856, &(((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->fp_1861)).a)).name))->all)));
F->v_1876 = rt_str_copy(f_gexpr_641(F->a_1860, NULL, &F->at_1863));
(*(P817)rt_nil_check(F->b_1875)).t = F->at_1863;
(*(P817)rt_nil_check(F->b_1875)).c = g_no_cons_898;
(*(P817)rt_nil_check(F->b_1875)).mnext = F->binds_1858;
F->binds_1858 = F->b_1875;
}
}
F->fp_1861 = (*(P807)rt_nil_check(F->fp_1861)).next;
F->a_1860 = (*(P807)rt_nil_check(F->a_1860)).next;
}
F->inst_1862 = g_all_insts_845;
while ((F->inst_1862 != NULL)) {
if ((((*(P817)rt_nil_check(F->inst_1862)).decl == F->pat_1857) && f_same_binds_560((*(P817)rt_nil_check(F->inst_1862)).members, F->binds_1858))) {
F->result_ = F->inst_1862;
goto ret_;
}
F->inst_1862 = (*(P817)rt_nil_check(F->inst_1862)).insts;
}
g_fctx_861 = (*(P817)rt_nil_check(F->g_582)).gctx;
g_in_func_859 = ((*(P817)rt_nil_check(F->g_582)).level > ((rt_int)0LL));
g_cur_level_860 = (*(P817)rt_nil_check(F->g_582)).level;
g_func_sym_871 = (*(P817)rt_nil_check(F->g_582)).owner;
g_code_857 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_876 = g_depth_846;
{
F->b_1877 = NULL;
F->b_1877 = F->binds_1858;
while ((F->b_1877 != NULL)) {
f_define_159(F->b_1877, F->line_585);
F->b_1877 = (*(P817)rt_nil_check(F->b_1877)).mnext;
}
}
g_genv_844 = (*(P817)rt_nil_check(F->g_582)).env;
F->inst_1862 = f_build_subprogram_428(F->pat_1857);
(*(P817)rt_nil_check(F->inst_1862)).members = F->binds_1858;
(*(P817)rt_nil_check(F->inst_1862)).insts = g_all_insts_845;
g_all_insts_845 = F->inst_1862;
f_define_159(F->inst_1862, F->line_585);
f_gen_subprogram_458(F->pat_1857, F->inst_1862);
f_close_scope_169();
g_fctx_861 = F->saved_fctx_1865;
g_in_func_859 = F->saved_in_1866;
g_cur_level_860 = F->saved_level_1867;
g_func_sym_871 = F->saved_sym_1868;
g_code_857 = F->saved_code_1869;
g_genv_844 = F->saved_env_1870;
g_gdepth_876 = F->saved_gdepth_1871;
F->result_ = F->inst_1862;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_588(P817 y_587) {
  struct f_access_of_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_587 = y_587;
F->p_1878 = NULL;
F->p_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P817)rt_nil_check(F->y_587)).level <= ((rt_int)0LL))) {
F->result_ = (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_587)).access))->all);
goto ret_;
}
{ rt_int lo1880 = ((rt_int)1LL), hi1881 = rt_sub(g_cur_level_860, (*(P817)rt_nil_check(F->y_587)).level);
for (rt_int it1882 = lo1880; it1882 <= hi1881; it1882++) {
F->i_1879 = it1882;
F->p_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->p_1878))->all), rt_str("->up", 4)); b_; }));
}
}
if ((*(P817)rt_nil_check(F->y_587)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P800)rt_nil_check(F->p_1878))->all)), rt_str("->", 2)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_587)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->p_1878))->all), rt_str("->", 2)), (((P800)rt_nil_check((*(P817)rt_nil_check(F->y_587)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_import_of_591(P807 l_589, rstr *name_590) {
  struct f_import_of_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_589 = l_589;
F->name_590 = name_590;
F->p_1883 = NULL;
F->p_1883 = F->l_589;
while ((F->p_1883 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1883)).name))->all), (*F->name_590))) {
F->result_ = F->p_1883;
goto ret_;
}
F->p_1883 = (*(P807)rt_nil_check(F->p_1883)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_594(P817 y_592, rt_int line_593) {
  struct f_check_import_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_592 = y_592;
F->line_593 = line_593;
F->c_1884 = NULL;
F->c_1884 = g_fctx_861;
F->ro_1885 = 0;
while (((F->c_1884 != NULL) && ((*(P817)rt_nil_check(F->y_592)).depth < (*(P824)rt_nil_check(F->c_1884)).depth))) {
if ((!(*(P824)rt_nil_check(F->c_1884)).all_imp)) {
F->imp_1886 = NULL;
F->imp_1886 = f_import_of_591((*(P824)rt_nil_check(F->c_1884)).imps, &(((P800)rt_nil_check((*(P817)rt_nil_check(F->y_592)).name))->all));
if ((F->imp_1886 == NULL)) {
f_fail_23(F->line_593, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_592)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P807)rt_nil_check(F->imp_1886)).ival == ((rt_int)1LL))) {
F->ro_1885 = 1;
}
}
F->c_1884 = (*(P824)rt_nil_check(F->c_1884)).next;
}
F->result_ = F->ro_1885;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_596(rstr *s_595) {
  struct f_c_ident_596fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_595 = s_595;
if (rt_str_eq((*F->s_595), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_595), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_595));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_599(P813 t_597, rstr *p_598) {
  struct f_cell_deref_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_597 = t_597;
F->p_598 = p_598;
if ((((*(P813)rt_nil_check(F->t_597)).decl != NULL) && ((*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_597)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_598)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_598)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_602(rstr *base_600, P813 t_601) {
  struct f_deref_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_600 = base_600;
F->t_601 = t_601;
if ((((*(P813)rt_nil_check(F->t_601)).decl != NULL) && ((*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_601)).decl)).b != NULL))) {
if (f_suppressed_435(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_600)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->t_601)), rt_str(")rt_nil_check(", 14)), (*F->base_600)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_435(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_601)), rt_str(")(", 2)), (*F->base_600)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_601)), rt_str(")rt_nil_check(", 14)), (*F->base_600)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_604(P807 e_603) {
  struct f_is_lvalue_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_603 = e_603;
if (((*(P807)rt_nil_check(F->e_603)).kind == (((rt_int)7LL)))) {
F->y_1887 = NULL;
F->y_1887 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_603)).name))->all));
F->result_ = ((F->y_1887 != NULL) && (((*(P817)rt_nil_check(F->y_1887)).kind == (((rt_int)1LL))) || ((((*(P817)rt_nil_check(F->y_1887)).kind == (((rt_int)2LL))) && ((*(P817)rt_nil_check(F->y_1887)).mv == NULL)) && (!(*(P817)rt_nil_check(F->y_1887)).hasmv))));
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_603)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_604((*(P807)rt_nil_check(F->e_603)).a);
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_603)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_603)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_604((*(P807)rt_nil_check(F->e_603)).a));
goto ret_;
} else if (((*(P807)rt_nil_check(F->e_603)).kind == (((rt_int)10LL)))) {
if ((((*(P807)rt_nil_check(F->e_603)).b != NULL) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_603)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_604((*(P807)rt_nil_check(F->e_603)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_610(P807 e_605, P800 *code_606, P813 *t_607, P809 *c_608, int *ro_609) {
  struct f_lvalue_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_605 = e_605;
F->code_606 = code_606;
F->code_606v = *F->code_606;
F->t_607 = t_607;
F->t_607v = *F->t_607;
F->c_608 = c_608;
F->c_608v = *F->c_608;
F->ro_609 = ro_609;
F->ro_609v = *F->ro_609;
F->base_1888 = NULL;
F->bt_1889 = NULL;
F->bc_1890 = NULL;
if (((*(P807)rt_nil_check(F->e_605)).kind == (((rt_int)7LL)))) {
F->y_1891 = NULL;
F->y_1891 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_605)).name))->all));
if ((F->y_1891 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->e_605)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_605)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P817)rt_nil_check(F->y_1891)).kind != (((rt_int)1LL))) && ((*(P817)rt_nil_check(F->y_1891)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_605)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_605)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_606v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_588(F->y_1891); b_; }));
F->t_607v = (*(P817)rt_nil_check(F->y_1891)).t;
F->c_608v = (*(P817)rt_nil_check(F->y_1891)).c;
F->ro_609v = (*(P817)rt_nil_check(F->y_1891)).ro_flag;
if ((((*(P817)rt_nil_check(F->y_1891)).kind == (((rt_int)1LL))) && f_check_import_594(F->y_1891, (*(P807)rt_nil_check(F->e_605)).line))) {
F->ro_609v = 1;
}
} else if (((*(P807)rt_nil_check(F->e_605)).kind == (((rt_int)17LL)))) {
f_lvalue_610((*(P807)rt_nil_check(F->e_605)).a, &F->code_606v, &F->t_607v, &F->c_608v, &F->ro_609v);
} else if ((((((*(P807)rt_nil_check(F->e_605)).kind == (((rt_int)12LL))) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_605)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_605)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_606v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_759((*(P807)rt_nil_check(F->e_605)).b, (*(P807)rt_nil_check(F->e_605)).line, &F->t_607v); b_; }));
F->c_608v = g_no_cons_898;
F->ro_609v = 0;
} else if (((*(P807)rt_nil_check(F->e_605)).kind == (((rt_int)11LL)))) {
f_lvalue_610((*(P807)rt_nil_check(F->e_605)).a, &F->base_1888, &F->bt_1889, &F->bc_1890, &F->ro_609v);
f_select_on_618(&(((P800)rt_nil_check(F->base_1888))->all), F->bt_1889, F->e_605, &F->ro_609v, &F->code_606v, &F->t_607v, &F->c_608v);
} else if (((*(P807)rt_nil_check(F->e_605)).kind == (((rt_int)10LL)))) {
f_lvalue_610((*(P807)rt_nil_check(F->e_605)).a, &F->base_1888, &F->bt_1889, &F->bc_1890, &F->ro_609v);
f_index_on_635(&(((P800)rt_nil_check(F->base_1888))->all), F->bt_1889, F->e_605, &F->ro_609v, 1, &F->code_606v, &F->t_607v, &F->c_608v);
} else {
f_fail_23((*(P807)rt_nil_check(F->e_605)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_606) = F->code_606v;  (*F->t_607) = F->t_607v;  (*F->c_608) = F->c_608v;  (*F->ro_609) = F->ro_609v;
  RT_FPOP();
  return;
}

static void f_select_on_618(rstr *base_611, P813 bt_612, P807 e_613, int *ro_614, P800 *code_615, P813 *t_616, P809 *c_617) {
  struct f_select_on_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_611 = base_611;
F->bt_612 = bt_612;
F->e_613 = e_613;
F->ro_614 = ro_614;
F->code_615 = code_615;
F->code_615v = *F->code_615;
F->t_616 = t_616;
F->t_616v = *F->t_616;
F->c_617 = c_617;
F->c_617v = *F->c_617;
F->c_617v = g_no_cons_898;
if (((*(P813)rt_nil_check(F->bt_612)).kind == (((rt_int)8LL)))) {
f_finish_ptr_404(F->bt_612);
(*F->ro_614) = 0;
if (((*(P813)rt_nil_check(F->bt_612)).decl != NULL)) {
F->p_1892 = NULL;
F->p_1892 = (*(P807)rt_nil_check((*(P813)rt_nil_check(F->bt_612)).decl)).b;
while ((F->p_1892 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1892)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))) {
F->pc_1893 = NULL;
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->bt_612)), rt_str(")rt_nil_check(", 14)), (*F->base_611)), rt_str("))->p_", 6)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1892)).name))->all))), rt_str(")", 1)); b_; }));
F->t_616v = f_resolve_subtype_256((*(P807)rt_nil_check(F->p_1892)).a, &F->pc_1893);
(*F->ro_614) = 1;
goto ret_;
}
F->p_1892 = (*(P807)rt_nil_check(F->p_1892)).next;
}
}
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all), rt_str("ALL", 3))) {
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_602(&(*F->base_611), F->bt_612); b_; }));
F->t_616v = (*(P813)rt_nil_check(F->bt_612)).target;
goto ret_;
}
f_select_on_618(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_602(&(*F->base_611), F->bt_612); b_; }), (*(P813)rt_nil_check(F->bt_612)).target, F->e_613, &(*F->ro_614), &F->code_615v, &F->t_616v, &F->c_617v);
goto ret_;
}
if (((*(P813)rt_nil_check(F->bt_612)).kind == (((rt_int)15LL)))) {
F->p_1894 = NULL;
F->p_1894 = (*(P813)rt_nil_check(F->bt_612)).tparams;
if ((!f_opened_296(F->bt_612))) {
f_fail_23((*(P807)rt_nil_check(F->e_613)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P800)rt_nil_check((*(P813)rt_nil_check(F->bt_612)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P813)rt_nil_check(F->bt_612)).tparams == NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all), rt_str("ALL", 3))) {
F->code_615v = f_mk_3(&(*F->base_611));
F->t_616v = (*(P813)rt_nil_check(F->bt_612)).under;
goto ret_;
}
f_select_on_618(&(*F->base_611), (*(P813)rt_nil_check(F->bt_612)).under, F->e_613, &(*F->ro_614), &F->code_615v, &F->t_616v, &F->c_617v);
goto ret_;
}
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all), rt_str("ALL", 3))) {
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_611), rt_str(".all", 4)); b_; }));
F->t_616v = (*(P813)rt_nil_check(F->bt_612)).under;
goto ret_;
}
while ((F->p_1894 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1894)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))) {
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_611), rt_str(".p_", 3)), f_lower_s_15(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1894)).name))->all))); b_; }));
F->t_616v = f_tparam_type_321(F->bt_612, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1894)).name))->all));
(*F->ro_614) = 1;
goto ret_;
}
F->p_1894 = (*(P807)rt_nil_check(F->p_1894)).next;
}
f_select_on_618(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_611), rt_str(".all", 4)); b_; }), (*(P813)rt_nil_check(F->bt_612)).under, F->e_613, &(*F->ro_614), &F->code_615v, &F->t_616v, &F->c_617v);
goto ret_;
}
if (((*(P813)rt_nil_check(F->bt_612)).kind == (((rt_int)17LL)))) {
F->f_1895 = NULL;
F->f_1895 = (*(P813)rt_nil_check(F->bt_612)).fields;
F->i_1896 = ((rt_int)0LL);
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all), rt_str("TAG", 3))) {
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_611)), rt_str(").tag)", 6)); b_; }));
F->t_616v = (*(P813)rt_nil_check(F->bt_612)).elem;
(*F->ro_614) = 1;
goto ret_;
}
while ((F->f_1895 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1895)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))) {
F->fn_1897 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_611)), rt_str(").u.", 4)), f_field_c_17(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))));
F->c_617v = (*(P815)rt_nil_check(F->f_1895)).c;
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_611)), rt_str(").tag == ", 9)), f_itos_7(F->i_1896)), rt_str(" \? &", 4)), F->fn_1897), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1897), rt_str(")))", 3)); b_; }));
F->t_616v = (*(P815)rt_nil_check(F->f_1895)).t;
goto ret_;
}
F->i_1896 = rt_add(F->i_1896, ((rt_int)1LL));
F->f_1895 = (*(P815)rt_nil_check(F->f_1895)).next;
}
f_fail_23((*(P807)rt_nil_check(F->e_613)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all)); b_; }));
}
if (((*(P813)rt_nil_check(F->bt_612)).kind == (((rt_int)7LL)))) {
F->f_1898 = NULL;
F->f_1898 = (*(P813)rt_nil_check(F->bt_612)).fields;
while ((F->f_1898 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1898)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))) {
F->c_617v = (*(P815)rt_nil_check(F->f_1898)).c;
F->code_615v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_611), rt_str(".", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all))); b_; }));
F->t_616v = (*(P815)rt_nil_check(F->f_1898)).t;
goto ret_;
}
F->f_1898 = (*(P815)rt_nil_check(F->f_1898)).next;
}
f_fail_23((*(P807)rt_nil_check(F->e_613)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all)); b_; }));
}
f_fail_23((*(P807)rt_nil_check(F->e_613)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_613)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_615) = F->code_615v;  (*F->t_616) = F->t_616v;  (*F->c_617) = F->c_617v;
  RT_FPOP();
  return;
}

static int f_has_call_620(rstr *s_619) {
  struct f_has_call_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
{ rt_int lo1900 = ((rt_int)1LL), hi1901 = ((rt_int)(((*F->s_619)).len));
for (rt_int it1902 = lo1900; it1902 <= hi1901; it1902++) {
F->i_1899 = it1902;
if ((rt_str_get((*F->s_619), F->i_1899) == 40)) {
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

static void f_need_slice_622(P813 t_621) {
  struct f_need_slice_622fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_621 = t_621;
F->c_1903 = rt_str_copy(f_ctype_225(F->t_621));
F->n_1904 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1903));
F->l_1905 = NULL;
if (f_seen_name_370(g_mcopies_885, &F->n_1904)) {
goto ret_;
}
{ R812 *cell1906 = rt_alloc(sizeof(R812));
(*cell1906).s = NULL;
(*cell1906).next = NULL;
F->l_1905 = cell1906;
}
(*(P811)rt_nil_check(F->l_1905)).s = f_mk_3(&F->n_1904);
(*(P811)rt_nil_check(F->l_1905)).next = g_mcopies_885;
g_mcopies_885 = F->l_1905;
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1903), rt_str(" ", 1)), F->n_1904), rt_str("(", 1)), F->c_1903), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1903), rt_str(" ", 1)), F->n_1904), rt_str("(", 1)), F->c_1903), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1903), rt_str(" rt_r_acat_", 11)), F->c_1903), rt_str("(", 1)), F->c_1903), rt_str(" a, ", 4)), F->c_1903), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1903), rt_str(" rt_r_acat_", 11)), F->c_1903), rt_str("(", 1)), F->c_1903), rt_str(" a, ", 4)), F->c_1903), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1903), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_359((*(P813)rt_nil_check(F->t_621)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_359((*(P813)rt_nil_check(F->t_621)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_854, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_626(rstr *i_623, rstr *lo_624, rstr *hi_625) {
  struct f_ix_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_623 = i_623;
F->lo_624 = lo_624;
F->hi_625 = hi_625;
if (f_suppressed_435(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_623)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_623)), rt_str(", ", 2)), (*F->lo_624)), rt_str(", ", 2)), (*F->hi_625)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_635(rstr *base_627, P813 bt_628, P807 e_629, int *ro_630, int lv_631, P800 *code_632, P813 *t_633, P809 *c_634) {
  struct f_index_on_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_627 = base_627;
F->bt_628 = bt_628;
F->e_629 = e_629;
F->ro_630 = ro_630;
F->lv_631 = lv_631;
F->code_632 = code_632;
F->code_632v = *F->code_632;
F->t_633 = t_633;
F->t_633v = *F->t_633;
F->c_634 = c_634;
F->c_634v = *F->c_634;
F->a_1907 = NULL;
F->a_1907 = (*(P807)rt_nil_check(F->e_629)).b;
F->it_1908 = NULL;
F->c_634v = g_no_cons_898;
if (((*(P813)rt_nil_check(F->bt_628)).kind == (((rt_int)8LL)))) {
f_finish_ptr_404(F->bt_628);
(*F->ro_630) = 0;
f_index_on_635(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_602(&(*F->base_627), F->bt_628); b_; }), (*(P813)rt_nil_check(F->bt_628)).target, F->e_629, &(*F->ro_630), F->lv_631, &F->code_632v, &F->t_633v, &F->c_634v);
goto ret_;
}
if (((*(P813)rt_nil_check(F->bt_628)).kind == (((rt_int)15LL)))) {
if ((!f_opened_296(F->bt_628))) {
f_fail_23((*(P807)rt_nil_check(F->e_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P800)rt_nil_check((*(P813)rt_nil_check(F->bt_628)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P813)rt_nil_check(F->bt_628)).tparams == NULL)) {
f_index_on_635(&(*F->base_627), (*(P813)rt_nil_check(F->bt_628)).under, F->e_629, &(*F->ro_630), F->lv_631, &F->code_632v, &F->t_633v, &F->c_634v);
} else {
f_index_on_635(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_627), rt_str(".all", 4)); b_; }), (*(P813)rt_nil_check(F->bt_628)).under, F->e_629, &(*F->ro_630), F->lv_631, &F->code_632v, &F->t_633v, &F->c_634v);
}
goto ret_;
}
if (((((*(P813)rt_nil_check(F->bt_628)).kind == (((rt_int)6LL))) && (F->a_1907 != NULL)) && ((*(P807)rt_nil_check(F->a_1907)).kind == (((rt_int)16LL))))) {
if ((((*(P813)rt_nil_check(F->bt_628)).ndim != ((rt_int)1LL)) || ((*(P807)rt_nil_check(F->a_1907)).next != NULL))) {
f_fail_23((*(P807)rt_nil_check(F->e_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1909 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->a_1907)).a, (*(P813)rt_nil_check(F->bt_628)).idx, &F->it_1908));
F->hi_1910 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->a_1907)).b, (*(P813)rt_nil_check(F->bt_628)).idx, &F->it_1908));
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_225(F->bt_628)), rt_str("(", 1)), (*F->base_627)), rt_str(", ", 2)), F->lo_1909), rt_str(", ", 2)), F->hi_1910), rt_str(")", 1)); b_; }));
f_need_slice_622(F->bt_628);
F->t_633v = F->bt_628;
(*F->ro_630) = 1;
}
goto ret_;
}
if (((*(P813)rt_nil_check(F->bt_628)).kind == (((rt_int)6LL)))) {
F->off_1911 = NULL;
F->k_1912 = ((rt_int)0LL);
F->b_1913 = NULL;
F->b_1913 = f_mk_3(&(*F->base_627));
F->pre_1914 = NULL;
F->pre_1914 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1907) != (*(P813)rt_nil_check(F->bt_628)).ndim)) {
f_fail_23((*(P807)rt_nil_check(F->e_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P813)rt_nil_check(F->bt_628)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_631) && f_has_call_620(&(*F->base_627)))) {
F->pre_1914 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->bt_628)), rt_str(" b_ = ", 6)), (*F->base_627)), rt_str("; ", 2)); b_; }));
F->b_1913 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1907 != NULL)) {
F->k_1912 = rt_add(F->k_1912, ((rt_int)1LL));
{
F->i_1915 = rt_str_copy(f_gexpr_641(F->a_1907, f_idx_type_249(F->bt_628, F->k_1912), &F->it_1908));
F->l_1916 = rt_str_copy(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->b_1913))->all), rt_str(".", 1)), f_dim_lo_233(F->k_1912)));
F->h_1917 = rt_str_copy(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->b_1913))->all), rt_str(".", 1)), f_dim_hi_235(F->k_1912)));
f_check_type_223(F->it_1908, f_idx_type_249(F->bt_628, F->k_1912), (*(P807)rt_nil_check(F->e_629)).line);
if ((F->off_1911 == NULL)) {
F->off_1911 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_626(&F->i_1915, &F->l_1916, &F->h_1917)), rt_str(" - ", 3)), F->l_1916), rt_str(")", 1)); b_; }));
} else {
F->off_1911 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->off_1911))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1916), rt_str(", ", 2)), F->h_1917), rt_str(") + ", 4)), f_ix_626(&F->i_1915, &F->l_1916, &F->h_1917)), rt_str(" - ", 3)), F->l_1916), rt_str(")", 1)); b_; }));
}
}
F->a_1907 = (*(P807)rt_nil_check(F->a_1907)).next;
}
if ((((rt_int)(((((P800)rt_nil_check(F->pre_1914))->all)).len)) > ((rt_int)0LL))) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->pre_1914))->all), (((P800)rt_nil_check(F->b_1913))->all)), rt_str(".p[", 3)), (((P800)rt_nil_check(F->off_1911))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->b_1913))->all), rt_str(".p[", 3)), (((P800)rt_nil_check(F->off_1911))->all)), rt_str("]", 1)); b_; }));
}
F->t_633v = (*(P813)rt_nil_check(F->bt_628)).elem;
F->c_634v = (*(P813)rt_nil_check(F->bt_628)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1907) != ((rt_int)1LL))) {
f_fail_23((*(P807)rt_nil_check(F->e_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P813)rt_nil_check(F->bt_628)).kind == (((rt_int)5LL)))) {
if (((*(P807)rt_nil_check(F->a_1907)).kind == (((rt_int)16LL)))) {
F->lo_1918 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->a_1907)).a, g_ty_int_886, &F->it_1908));
F->hi_1919 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->a_1907)).b, g_ty_int_886, &F->it_1908));
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_627)), rt_str(", ", 2)), F->lo_1918), rt_str(", ", 2)), F->hi_1919), rt_str(")", 1)); b_; }));
F->t_633v = F->bt_628;
(*F->ro_630) = 1;
goto ret_;
}
{
F->i_1920 = rt_str_copy(f_gexpr_641(F->a_1907, g_ty_int_886, &F->it_1908));
F->t_633v = f_str_elem_209(F->bt_628);
F->c_634v = (*(P813)rt_nil_check(F->bt_628)).elemcons;
if (F->lv_631) {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_627)), rt_str(", ", 2)), F->i_1920), rt_str("))", 2)); b_; }));
} else {
F->code_632v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_627)), rt_str(", ", 2)), F->i_1920), rt_str(")", 1)); b_; }));
(*F->ro_630) = 1;
}
}
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_632) = F->code_632v;  (*F->t_633) = F->t_633v;  (*F->c_634) = F->c_634v;
  RT_FPOP();
  return;
}

static int f_own_attribute_637(P807 e_636) {
  struct f_own_attribute_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_636 = e_636;
F->saved_1921 = NULL;
F->saved_1921 = g_code_857;
F->bt_1922 = NULL;
F->ok_1923 = 0;
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
g_code_857 = f_new_buffer_24();
{ rt_frame xf1924;
if (RT_TRY(xf1924)) {
F->base_1926 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_636)).a, NULL, &F->bt_1922));
while (((F->bt_1922 != NULL) && ((*(P813)rt_nil_check(F->bt_1922)).kind == (((rt_int)8LL))))) {
f_finish_ptr_404(F->bt_1922);
F->bt_1922 = (*(P813)rt_nil_check(F->bt_1922)).target;
}
while ((((F->bt_1922 != NULL) && ((*(P813)rt_nil_check(F->bt_1922)).kind == (((rt_int)15LL)))) && ((*(P813)rt_nil_check(F->bt_1922)).tparams == NULL))) {
F->bt_1922 = (*(P813)rt_nil_check(F->bt_1922)).under;
}
if (((F->bt_1922 != NULL) && ((*(P813)rt_nil_check(F->bt_1922)).kind == (((rt_int)15LL))))) {
F->p_1927 = NULL;
F->p_1927 = (*(P813)rt_nil_check(F->bt_1922)).tparams;
while ((F->p_1927 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1927)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_636)).name))->all))) {
F->ok_1923 = 1;
}
F->p_1927 = (*(P807)rt_nil_check(F->p_1927)).next;
}
F->bt_1922 = (*(P813)rt_nil_check(F->bt_1922)).under;
}
if (((F->bt_1922 != NULL) && (((*(P813)rt_nil_check(F->bt_1922)).kind == (((rt_int)7LL))) || ((*(P813)rt_nil_check(F->bt_1922)).kind == (((rt_int)17LL)))))) {
F->f_1928 = NULL;
F->f_1928 = (*(P813)rt_nil_check(F->bt_1922)).fields;
while ((F->f_1928 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_1928)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_636)).name))->all))) {
F->ok_1923 = 1;
}
F->f_1928 = (*(P815)rt_nil_check(F->f_1928)).next;
}
}
RT_POP(xf1924);
} else {
RT_POP(xf1924);
int x1925 = rt_xcur;
if (0 || x1925 == ex_compile_error_1) {
F->ok_1923 = 0;
} else {
rt_raise(x1925);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
g_code_857 = F->saved_1921;
F->result_ = F->ok_1923;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_641(P807 e_638, P813 want_639, P813 *t_640) {
  struct f_gexpr_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_638 = e_638;
F->want_639 = want_639;
F->t_640 = t_640;
F->t_640v = *F->t_640;
F->k_1929 = (*(P807)rt_nil_check(F->e_638)).kind;
F->code_1930 = NULL;
F->c_1931 = NULL;
F->bt_1933 = NULL;
F->ctx_1934 = NULL;
F->ctx_1934 = g_cons_ctx_878;
g_cons_ctx_878 = NULL;
F->t_640v = g_ty_int_886;
if ((F->k_1929 == (((rt_int)1LL)))) {
if (((F->want_639 != NULL) && ((*(P813)rt_nil_check(F->want_639)).kind == (((rt_int)3LL))))) {
F->t_640v = g_ty_float_888;
F->result_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1929 == (((rt_int)2LL)))) {
F->t_640v = g_ty_float_888;
F->result_ = (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all);
goto ret_;
} else if ((F->k_1929 == (((rt_int)5LL)))) {
F->t_640v = g_ty_bool_887;
F->result_ = f_itos_7((*(P807)rt_nil_check(F->e_638)).ival);
goto ret_;
} else if (((((F->k_1929 == (((rt_int)3LL))) && (F->want_639 != NULL)) && ((*(P813)rt_nil_check(F->want_639)).kind == (((rt_int)5LL)))) && (!f_same_212(f_str_elem_209(F->want_639), g_ty_ascii_889)))) {
F->r_1935 = NULL;
F->r_1935 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_640v = F->want_639;
{ rt_int lo1937 = ((rt_int)1LL), hi1938 = ((rt_int)(((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)).len));
for (rt_int it1939 = lo1937; it1939 <= hi1938; it1939++) {
F->i_1936 = it1939;
F->pos_1940 = f_lit_index_253((*(P813)rt_nil_check(f_base_of_214(f_str_elem_209(F->want_639)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_651(rt_str_get((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), F->i_1936)); b_; }));
if ((F->pos_1940 < ((rt_int)0LL))) {
f_fail_23((*(P807)rt_nil_check(F->e_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_651(rt_str_get((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), F->i_1936))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_1935 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_1935))->all), rt_str("\\", 1)), f_octal_653(F->pos_1940)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P800)rt_nil_check(F->r_1935))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1929 == (((rt_int)3LL)))) {
F->t_640v = g_ty_string_890;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_666(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1929 == (((rt_int)6LL)))) {
F->t_640v = g_ty_nil_893;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1929 == (((rt_int)4LL)))) {
if (((F->want_639 != NULL) && ((*(P813)rt_nil_check(f_base_of_214(F->want_639))).kind == (((rt_int)4LL))))) {
F->t_640v = F->want_639;
} else {
F->t_640v = f_enum_type_of_669(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), (*(P807)rt_nil_check(F->e_638)).line);
}
{
F->i_1941 = f_lit_index_253((*(P813)rt_nil_check(f_base_of_214(F->t_640v))).lits, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all));
if ((F->i_1941 < ((rt_int)0LL))) {
f_fail_23((*(P807)rt_nil_check(F->e_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1941);
goto ret_;
}
} else if ((F->k_1929 == (((rt_int)17LL)))) {
g_cons_ctx_878 = F->ctx_1934;
F->result_ = f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, F->want_639, &F->t_640v);
goto ret_;
} else if ((F->k_1929 == (((rt_int)7LL)))) {
F->y_1942 = NULL;
F->y_1942 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all));
if ((F->y_1942 == NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("ME", 2))) {
F->t_640v = g_ty_act_896;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_640v = g_ty_act_896;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_771(f_wrap_apply_664(F->e_638), 0, &F->t_640v);
goto ret_;
}
if (((((((((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_771(f_wrap_apply_664(F->e_638), 0, &F->t_640v);
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P817)rt_nil_check(F->y_1942)).kind == (((rt_int)1LL))) || ((*(P817)rt_nil_check(F->y_1942)).kind == (((rt_int)2LL))))) {
F->t_640v = (*(P817)rt_nil_check(F->y_1942)).t;
if (((*(P817)rt_nil_check(F->y_1942)).kind == (((rt_int)1LL)))) {
F->ro_1943 = f_check_import_594(F->y_1942, (*(P807)rt_nil_check(F->e_638)).line);
}
F->result_ = f_access_of_588(F->y_1942);
goto ret_;
}
if (((*(P817)rt_nil_check(F->y_1942)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_771(f_wrap_apply_664(F->e_638), 0, &F->t_640v);
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1929 == (((rt_int)8LL))) && (f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all)) != NULL)) && (f_user_op_767(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), f_copy_node_662((*(P807)rt_nil_check(F->e_638)).a)) != NULL))) {
F->call_1944 = NULL;
F->call_1944 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->e_638)).line);
F->fname_1945 = NULL;
F->fname_1945 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->e_638)).line);
(*(P807)rt_nil_check(F->fname_1945)).name = (*(P807)rt_nil_check(F->e_638)).name;
(*(P807)rt_nil_check(F->call_1944)).a = F->fname_1945;
(*(P807)rt_nil_check(F->call_1944)).b = f_copy_node_662((*(P807)rt_nil_check(F->e_638)).a);
F->result_ = f_gcall_771(F->call_1944, 0, &F->t_640v);
goto ret_;
} else if (((((F->k_1929 == (((rt_int)8LL))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("NOT", 3))) && (F->want_639 != NULL)) && ((*(P813)rt_nil_check(F->want_639)).kind == (((rt_int)16LL))))) {
F->a_1946 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, F->want_639, &F->t_640v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_1946), rt_str(")", 1));
goto ret_;
} else if ((F->k_1929 == (((rt_int)8LL)))) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("NOT", 3))) {
F->a_1947 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, g_ty_bool_887, &F->t_640v));
f_check_type_223(F->t_640v, g_ty_bool_887, (*(P807)rt_nil_check(F->e_638)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1947), rt_str(")", 1));
goto ret_;
}
{
F->a_1948 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, F->want_639, &F->t_640v));
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1948;
goto ret_;
} else if (((*(P813)rt_nil_check(F->t_640v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1948), rt_str(")", 1));
goto ret_;
}
f_check_type_223(F->t_640v, g_ty_int_886, (*(P807)rt_nil_check(F->e_638)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1948), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1929 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_691(F->e_638, F->want_639, &F->t_640v);
goto ret_;
} else if ((F->k_1929 == (((rt_int)10LL)))) {
if ((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_638)).a)).kind == (((rt_int)7LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_638)).a)).kind == (((rt_int)12LL))))) {
F->nm_1949 = NULL;
F->nm_1949 = (*(P807)rt_nil_check(F->e_638)).a;
F->y_1950 = NULL;
if (((*(P807)rt_nil_check(F->nm_1949)).kind == (((rt_int)12LL)))) {
F->nm_1949 = (*(P807)rt_nil_check(F->nm_1949)).a;
}
F->y_1950 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->nm_1949)).name))->all));
if (((((F->y_1950 == NULL) || ((*(P817)rt_nil_check(F->y_1950)).kind == (((rt_int)3LL)))) || ((*(P817)rt_nil_check(F->y_1950)).kind == (((rt_int)4LL)))) || ((*(P817)rt_nil_check(F->y_1950)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_771(F->e_638, 0, &F->t_640v);
goto ret_;
}
}
{
F->base_1951 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, NULL, &F->bt_1933));
F->ro_1932 = 1;
f_index_on_635(&F->base_1951, F->bt_1933, F->e_638, &F->ro_1932, 0, &F->code_1930, &F->t_640v, &F->c_1931);
F->result_ = (((P800)rt_nil_check(F->code_1930))->all);
goto ret_;
}
} else if ((F->k_1929 == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_638)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_637(F->e_638)))) {
F->result_ = f_attribute_674(F->e_638, &F->t_640v);
goto ret_;
} else if (((f_as_subtype_285((*(P807)rt_nil_check(F->e_638)).a) != NULL) || f_ptr_attribute_671(F->e_638))) {
F->result_ = f_attribute_674(F->e_638, &F->t_640v);
goto ret_;
}
{
F->base_1952 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_638)).a, NULL, &F->bt_1933));
F->ro_1932 = 1;
f_select_on_618(&F->base_1952, F->bt_1933, F->e_638, &F->ro_1932, &F->code_1930, &F->t_640v, &F->c_1931);
F->result_ = (((P800)rt_nil_check(F->code_1930))->all);
goto ret_;
}
} else if ((F->k_1929 == (((rt_int)12LL)))) {
F->result_ = f_gcall_771(f_wrap_apply_664(F->e_638), 0, &F->t_640v);
goto ret_;
} else if ((F->k_1929 == (((rt_int)14LL)))) {
F->result_ = f_constructor_696(F->e_638, F->want_639, F->ctx_1934, &F->t_640v);
goto ret_;
} else if ((F->k_1929 == (((rt_int)13LL)))) {
F->result_ = f_resolved_644(F->e_638, &F->t_640v);
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_640) = F->t_640v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_644(P807 e_642, P813 *t_643) {
  struct f_resolved_644fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_642 = e_642;
F->t_643 = t_643;
F->t_643v = *F->t_643;
F->c_1953 = NULL;
F->vt_1954 = NULL;
F->y_1955 = NULL;
F->y_1955 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1956 = NULL;
F->tt_1956 = f_copy_node_662((*(P807)rt_nil_check(F->e_642)).b);
(*(P807)rt_nil_check(F->tt_1956)).next = NULL;
if (((F->y_1955 != NULL) && (((*(P817)rt_nil_check(F->y_1955)).kind == (((rt_int)10LL))) || (f_resolve_overload_745(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1956, f_copy_node_662((*(P807)rt_nil_check(F->e_642)).a), 0, (*(P807)rt_nil_check(F->e_642)).line) != NULL)))) {
F->call_1957 = NULL;
F->call_1957 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->e_642)).line);
F->f_1958 = NULL;
F->f_1958 = f_nn_61((((rt_int)12LL)), (*(P807)rt_nil_check(F->e_642)).line);
F->fname_1959 = NULL;
F->fname_1959 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->e_642)).line);
(*(P807)rt_nil_check(F->fname_1959)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P807)rt_nil_check(F->f_1958)).a = F->fname_1959;
(*(P807)rt_nil_check(F->f_1958)).b = F->tt_1956;
(*(P807)rt_nil_check(F->call_1957)).a = F->f_1958;
(*(P807)rt_nil_check(F->call_1957)).b = f_copy_node_662((*(P807)rt_nil_check(F->e_642)).a);
(*(P807)rt_nil_check((*(P807)rt_nil_check(F->call_1957)).b)).next = NULL;
F->result_ = f_gcall_771(F->call_1957, 0, &F->t_643v);
goto ret_;
}
F->t_643v = f_resolve_subtype_256((*(P807)rt_nil_check(F->e_642)).b, &F->c_1953);
{
F->v_1960 = rt_str_copy(f_gexpr_in_649((*(P807)rt_nil_check(F->e_642)).a, F->t_643v, F->c_1953, &F->vt_1954));
f_check_type_223(F->vt_1954, F->t_643v, (*(P807)rt_nil_check(F->e_642)).line);
F->result_ = f_checked_204(F->t_643v, F->c_1953, &F->v_1960);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_643) = F->t_643v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_649(P807 e_645, P813 want_646, P809 c_647, P813 *t_648) {
  struct f_gexpr_in_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_645 = e_645;
F->want_646 = want_646;
F->c_647 = c_647;
F->t_648 = t_648;
F->t_648v = *F->t_648;
g_cons_ctx_878 = F->c_647;
F->result_ = f_gexpr_641(F->e_645, F->want_646, &F->t_648v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_648) = F->t_648v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_651(int ch_650) {
  struct f_ascii_lit_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_650 = ch_650;
F->l_1961 = NULL;
F->l_1961 = (*(P813)rt_nil_check(g_ty_ascii_889)).lits;
{ rt_int lo1963 = ((rt_int)1LL), hi1964 = rt_sub(((rt_int)(F->ch_650) + 1), ((rt_int)1LL));
for (rt_int it1965 = lo1963; it1965 <= hi1964; it1965++) {
F->i_1962 = it1965;
F->l_1961 = (*(P807)rt_nil_check(F->l_1961)).next;
}
}
F->result_ = (((P800)rt_nil_check((*(P807)rt_nil_check(F->l_1961)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_653(rt_int n_652) {
  struct f_octal_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_652 = n_652;
F->r_1966 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_1966, rt_str("000", 3));
(*rt_str_at(&F->r_1966, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_652, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1966, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_652, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1966, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_652, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_1966;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_str_cat_part_655(P813 t_654) {
  struct f_str_cat_part_655fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_654 = t_654;
if (((*(P813)rt_nil_check(F->t_654)).kind == (((rt_int)5LL)))) {
F->result_ = f_str_elem_209(F->t_654);
goto ret_;
}
F->result_ = F->t_654;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_peek_type_657(P807 e_656) {
  struct f_peek_type_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_656 = e_656;
F->saved_1967 = NULL;
F->saved_1967 = g_code_857;
F->t_1968 = NULL;
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
g_code_857 = f_new_buffer_24();
{ rt_frame xf1969;
if (RT_TRY(xf1969)) {
F->v_1971 = rt_str_copy(f_gexpr_641(F->e_656, NULL, &F->t_1968));
RT_POP(xf1969);
} else {
RT_POP(xf1969);
int x1970 = rt_xcur;
if (0 || x1970 == ex_compile_error_1) {
F->t_1968 = NULL;
} else {
rt_raise(x1970);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
g_code_857 = F->saved_1967;
F->result_ = F->t_1968;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_set_operands_660(P807 e_658, P813 want_659) {
  struct f_set_operands_660fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_658 = e_658;
F->want_659 = want_659;
F->t_1972 = NULL;
if (((F->want_659 != NULL) && ((*(P813)rt_nil_check(F->want_659)).kind == (((rt_int)16LL))))) {
F->result_ = F->want_659;
goto ret_;
} else if ((F->want_659 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_658)).a)).kind != (((rt_int)14LL)))) {
F->t_1972 = f_peek_type_657((*(P807)rt_nil_check(F->e_658)).a);
} else if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_658)).b)).kind != (((rt_int)14LL)))) {
F->t_1972 = f_peek_type_657((*(P807)rt_nil_check(F->e_658)).b);
}
if (((F->t_1972 != NULL) && ((*(P813)rt_nil_check(F->t_1972)).kind == (((rt_int)16LL))))) {
F->result_ = F->t_1972;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_copy_node_662(P807 e_661) {
  struct f_copy_node_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_661 = e_661;
F->x_1973 = NULL;
{ R808 *cell1974 = rt_alloc(sizeof(R808));
(*cell1974).name = NULL;
(*cell1974).tag = NULL;
(*cell1974).prags = NULL;
(*cell1974).labels = NULL;
(*cell1974).a = NULL;
(*cell1974).b = NULL;
(*cell1974).c = NULL;
(*cell1974).d = NULL;
(*cell1974).e = NULL;
(*cell1974).next = NULL;
F->x_1973 = cell1974;
}
(*(P807)rt_nil_check(F->x_1973)).kind = (*(P807)rt_nil_check(F->e_661)).kind;
(*(P807)rt_nil_check(F->x_1973)).line = (*(P807)rt_nil_check(F->e_661)).line;
(*(P807)rt_nil_check(F->x_1973)).ival = (*(P807)rt_nil_check(F->e_661)).ival;
(*(P807)rt_nil_check(F->x_1973)).flag = (*(P807)rt_nil_check(F->e_661)).flag;
(*(P807)rt_nil_check(F->x_1973)).name = (*(P807)rt_nil_check(F->e_661)).name;
(*(P807)rt_nil_check(F->x_1973)).tag = (*(P807)rt_nil_check(F->e_661)).tag;
(*(P807)rt_nil_check(F->x_1973)).a = (*(P807)rt_nil_check(F->e_661)).a;
(*(P807)rt_nil_check(F->x_1973)).b = (*(P807)rt_nil_check(F->e_661)).b;
(*(P807)rt_nil_check(F->x_1973)).c = (*(P807)rt_nil_check(F->e_661)).c;
(*(P807)rt_nil_check(F->x_1973)).d = (*(P807)rt_nil_check(F->e_661)).d;
F->result_ = F->x_1973;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P807 f_wrap_apply_664(P807 e_663) {
  struct f_wrap_apply_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_663 = e_663;
F->x_1975 = NULL;
F->x_1975 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->e_663)).line);
(*(P807)rt_nil_check(F->x_1975)).a = F->e_663;
F->result_ = F->x_1975;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_666(rstr *s_665) {
  struct f_c_string_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_665 = s_665;
F->n_1976 = ((rt_int)0LL);
{ rt_int lo1978 = ((rt_int)1LL), hi1979 = ((rt_int)(((*F->s_665)).len));
for (rt_int it1980 = lo1978; it1980 <= hi1979; it1980++) {
F->i_1977 = it1980;
if (((rt_str_get((*F->s_665), F->i_1977) == 92) || (rt_str_get((*F->s_665), F->i_1977) == 63))) {
F->n_1976 = rt_add(F->n_1976, ((rt_int)1LL));
}
}
}
{
F->r_1981 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_665)).len)), F->n_1976), ((rt_int)2LL)));
F->j_1982 = ((rt_int)1LL);
(*rt_str_at(&F->r_1981, ((rt_int)1LL))) = 34;
{ rt_int lo1984 = ((rt_int)1LL), hi1985 = ((rt_int)(((*F->s_665)).len));
for (rt_int it1986 = lo1984; it1986 <= hi1985; it1986++) {
F->i_1983 = it1986;
F->j_1982 = rt_add(F->j_1982, ((rt_int)1LL));
if (((rt_str_get((*F->s_665), F->i_1983) == 92) || (rt_str_get((*F->s_665), F->i_1983) == 63))) {
(*rt_str_at(&F->r_1981, F->j_1982)) = 92;
F->j_1982 = rt_add(F->j_1982, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1981, F->j_1982)) = rt_str_get((*F->s_665), F->i_1983);
}
}
(*rt_str_at(&F->r_1981, rt_add(F->j_1982, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1981;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_enum_type_of_669(rstr *lit_667, rt_int line_668) {
  struct f_enum_type_of_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_667 = lit_667;
F->line_668 = line_668;
F->y_1987 = NULL;
F->y_1987 = g_scope_stack_847;
F->c_1988 = NULL;
if ((f_lit_index_253((*(P813)rt_nil_check(g_ty_ascii_889)).lits, &(*F->lit_667)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_889;
goto ret_;
}
while ((F->y_1987 != NULL)) {
if ((((((*(P817)rt_nil_check(F->y_1987)).kind == (((rt_int)6LL))) || ((*(P817)rt_nil_check(F->y_1987)).kind == (((rt_int)5LL)))) && ((*(P817)rt_nil_check(F->y_1987)).st != NULL)) && ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1987)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_253((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_1987)).st)).a, &(*F->lit_667)) >= ((rt_int)0LL))) {
if (((*(P817)rt_nil_check(F->y_1987)).kind == (((rt_int)5LL)))) {
F->st_1989 = NULL;
F->st_1989 = f_nn_61((((rt_int)80LL)), F->line_668);
(*(P807)rt_nil_check(F->st_1989)).name = (*(P817)rt_nil_check(F->y_1987)).name;
F->result_ = f_resolve_subtype_256(F->st_1989, &F->c_1988);
goto ret_;
}
F->result_ = f_resolve_subtype_256((*(P817)rt_nil_check(F->y_1987)).st, &F->c_1988);
goto ret_;
}
}
F->y_1987 = (*(P817)rt_nil_check(F->y_1987)).stack;
}
f_fail_23(F->line_668, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_667)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_671(P807 e_670) {
  struct f_ptr_attribute_671fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_670 = e_670;
F->lv_1990 = NULL;
F->t_1991 = NULL;
F->c_1992 = NULL;
F->p_1994 = NULL;
F->saved_1995 = NULL;
F->saved_1995 = g_code_857;
if ((!f_is_lvalue_604((*(P807)rt_nil_check(F->e_670)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_857 = f_new_buffer_24();
f_lvalue_610((*(P807)rt_nil_check(F->e_670)).a, &F->lv_1990, &F->t_1991, &F->c_1992, &F->ro_1993);
g_code_857 = F->saved_1995;
if ((((*(P813)rt_nil_check(F->t_1991)).kind != (((rt_int)8LL))) || ((*(P813)rt_nil_check(F->t_1991)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_1994 = (*(P807)rt_nil_check((*(P813)rt_nil_check(F->t_1991)).decl)).d;
while ((F->p_1994 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_1994)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_670)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_1994 = (*(P807)rt_nil_check(F->p_1994)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_674(P807 e_672, P813 *t_673) {
  struct f_attribute_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_672 = e_672;
F->t_673 = t_673;
F->t_673v = *F->t_673;
F->bt_1996 = NULL;
F->c_1997 = NULL;
F->base_1998 = NULL;
F->sub_1999 = NULL;
F->sub_1999 = f_as_subtype_285((*(P807)rt_nil_check(F->e_672)).a);
F->name_2000 = rt_str_copy((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_672)).name))->all));
if ((F->sub_1999 != NULL)) {
F->bt_1996 = f_resolve_subtype_256(F->sub_1999, &F->c_1997);
} else {
F->bt_1996 = f_value_subtype_278((*(P807)rt_nil_check(F->e_672)).a, &F->c_1997, &F->base_1998);
}
if ((((((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)8LL))) && (F->c_1997 != NULL)) && ((*(P809)rt_nil_check(F->c_1997)).args != NULL)) && ((*(P813)rt_nil_check(F->bt_1996)).decl != NULL))) {
F->p_2001 = NULL;
F->p_2001 = (*(P807)rt_nil_check((*(P813)rt_nil_check(F->bt_1996)).decl)).d;
F->a_2002 = NULL;
F->a_2002 = (*(P809)rt_nil_check(F->c_1997)).args;
while (((F->p_2001 != NULL) && (F->a_2002 != NULL))) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_2001)).name))->all), F->name_2000)) {
F->pc_2003 = NULL;
F->v_2004 = rt_str_copy(f_gexpr_641(F->a_2002, f_resolve_subtype_256((*(P807)rt_nil_check(F->p_2001)).a, &F->pc_2003), &F->t_673v));
F->result_ = F->v_2004;
goto ret_;
}
F->p_2001 = (*(P807)rt_nil_check(F->p_2001)).next;
F->a_2002 = (*(P807)rt_nil_check(F->a_2002)).next;
}
}
while ((((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)8LL))) && (F->base_1998 != NULL))) {
f_finish_ptr_404(F->bt_1996);
F->base_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_602(&(((P800)rt_nil_check(F->base_1998))->all), F->bt_1996); b_; }));
F->bt_1996 = (*(P813)rt_nil_check(F->bt_1996)).target;
F->c_1997 = NULL;
if (((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)5LL)))) {
F->c_1997 = f_new_cons_175();
(*(P809)rt_nil_check(F->c_1997)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->base_1998))->all)), rt_str(").len", 5)); b_; }));
}
}
if ((((((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->bt_1996)).tparams != NULL)) && (F->c_1997 != NULL)) && ((*(P809)rt_nil_check(F->c_1997)).args != NULL))) {
F->p_2005 = NULL;
F->p_2005 = (*(P813)rt_nil_check(F->bt_1996)).tparams;
F->a_2006 = NULL;
F->a_2006 = (*(P809)rt_nil_check(F->c_1997)).args;
while (((F->p_2005 != NULL) && (F->a_2006 != NULL))) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->p_2005)).name))->all), F->name_2000)) {
F->pt_2007 = f_tparam_type_321(F->bt_1996, &F->name_2000);
F->v_2008 = rt_str_copy(f_gexpr_641(F->a_2006, F->pt_2007, &F->t_673v));
F->result_ = F->v_2008;
goto ret_;
}
F->p_2005 = (*(P807)rt_nil_check(F->p_2005)).next;
F->a_2006 = (*(P807)rt_nil_check(F->a_2006)).next;
}
}
if ((((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->bt_1996)).tparams == NULL))) {
F->c_1997 = f_base_cons_217(F->bt_1996, F->c_1997);
F->bt_1996 = f_base_of_214(F->bt_1996);
}
F->t_673v = g_ty_int_886;
if ((rt_str_eq(F->name_2000, rt_str("LEN", 3)) && ((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)5LL))))) {
if (((F->c_1997 != NULL) && ((*(P809)rt_nil_check(F->c_1997)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_1997)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_672)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2000, rt_str("LEN", 3)) && ((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)12LL))))) {
if (((F->c_1997 != NULL) && ((*(P809)rt_nil_check(F->c_1997)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_1997)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_672)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2000, rt_str("MIN", 3)) || rt_str_eq(F->name_2000, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_1996))) {
F->t_673v = F->bt_1996;
if (rt_str_eq(F->name_2000, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_1996, F->c_1997);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_1996, F->c_1997);
goto ret_;
} else if ((rt_str_eq(F->name_2000, rt_str("PREC", 4)) && ((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)3LL))))) {
if (((F->c_1997 != NULL) && ((*(P809)rt_nil_check(F->c_1997)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_1997)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2000, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2000, rt_str("USE", 3))) && ((*(P813)rt_nil_check(F->bt_1996)).kind == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_687(F->e_672, F->bt_1996, F->c_1997, F->base_1998, &F->t_673v);
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_672)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2000, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_673) = F->t_673v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_679(P807 sa_675, P807 sb_676, rstr *op_677, rt_int line_678) {
  struct f_subtype_compare_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_675 = sa_675;
F->sb_676 = sb_676;
F->op_677 = op_677;
F->line_678 = line_678;
F->ca_2009 = NULL;
F->cb_2010 = NULL;
F->ta_2011 = NULL;
F->ta_2011 = f_resolve_subtype_256(F->sa_675, &F->ca_2009);
F->tb_2012 = NULL;
F->tb_2012 = f_resolve_subtype_256(F->sb_676, &F->cb_2010);
F->r_2013 = NULL;
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2014 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2014, rt_str("1", 1));
F->no_2015 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2015, rt_str("0", 1));
if (rt_str_eq((*F->op_677), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2014, rt_str("0", 1));
rt_str_assign(&F->no_2015, rt_str("1", 1));
}
if ((!f_same_212(F->ta_2011, F->tb_2012))) {
F->result_ = F->no_2015;
goto ret_;
} else if (((((*(P807)rt_nil_check(F->sa_675)).kind == (((rt_int)80LL))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->sa_675)).name))->all), rt_str("TYPEOF", 6))) || (((*(P807)rt_nil_check(F->sb_676)).kind == (((rt_int)80LL))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->sb_676)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2014;
goto ret_;
}
if (f_scalar_kind_177(F->ta_2011)) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_2011, F->ca_2009)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_2012, F->cb_2010)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_2011, F->ca_2009)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_2012, F->cb_2010)), rt_str(")", 1)); b_; }));
if (((*(P813)rt_nil_check(F->ta_2011)).kind == (((rt_int)3LL)))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2013))->all), rt_str(" && ", 4)), f_float_prec_681(F->ca_2009)), rt_str(" == ", 4)), f_float_prec_681(F->cb_2010)); b_; }));
}
} else if (((*(P813)rt_nil_check(F->ta_2011)).kind == (((rt_int)5LL)))) {
if (((((F->ca_2009 != NULL) && (F->cb_2010 != NULL)) && ((*(P809)rt_nil_check(F->ca_2009)).slen != NULL)) && ((*(P809)rt_nil_check(F->cb_2010)).slen != NULL))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check((*(P809)rt_nil_check(F->ca_2009)).slen))->all)), rt_str(") == (", 6)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->cb_2010)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2009 == NULL) || ((*(P809)rt_nil_check(F->ca_2009)).slen == NULL)) && ((F->cb_2010 == NULL) || ((*(P809)rt_nil_check(F->cb_2010)).slen == NULL))))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if (((*(P813)rt_nil_check(F->ta_2011)).kind == (((rt_int)6LL)))) {
{ rt_int lo2017 = ((rt_int)1LL), hi2018 = (*(P813)rt_nil_check(F->ta_2011)).ndim;
for (rt_int it2019 = lo2017; it2019 <= hi2018; it2019++) {
F->k_2016 = it2019;
if (((((F->ca_2009 != NULL) && (F->cb_2010 != NULL)) && (f_cons_lo_243(F->ca_2009, F->k_2016) != NULL)) && (f_cons_lo_243(F->cb_2010, F->k_2016) != NULL))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2013))->all), rt_str(" && (", 5)), (((P800)rt_nil_check(f_cons_lo_243(F->ca_2009, F->k_2016)))->all)), rt_str(") == (", 6)), (((P800)rt_nil_check(f_cons_lo_243(F->cb_2010, F->k_2016)))->all)), rt_str(") && (", 6)), (((P800)rt_nil_check(f_cons_hi_246(F->ca_2009, F->k_2016)))->all)), rt_str(") == (", 6)), (((P800)rt_nil_check(f_cons_hi_246(F->cb_2010, F->k_2016)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if ((((((*(P813)rt_nil_check(F->ta_2011)).kind == (((rt_int)15LL))) && ((*(P813)rt_nil_check(F->ta_2011)).tparams != NULL)) && (F->ca_2009 != NULL)) && (F->cb_2010 != NULL))) {
F->a_2020 = NULL;
F->a_2020 = (*(P809)rt_nil_check(F->ca_2009)).args;
F->b_2021 = NULL;
F->b_2021 = (*(P809)rt_nil_check(F->cb_2010)).args;
F->at_2022 = NULL;
F->bt2_2023 = NULL;
while (((F->a_2020 != NULL) && (F->b_2021 != NULL))) {
F->x_2024 = rt_str_copy(f_gexpr_641(F->a_2020, NULL, &F->at_2022));
F->y_2025 = rt_str_copy(f_gexpr_641(F->b_2021, F->at_2022, &F->bt2_2023));
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2013))->all), rt_str(" && ", 4)), f_eq_code_363(F->at_2022, &F->x_2024, &F->y_2025)); b_; }));
F->a_2020 = (*(P807)rt_nil_check(F->a_2020)).next;
F->b_2021 = (*(P807)rt_nil_check(F->b_2021)).next;
}
} else if (((((*(P813)rt_nil_check(F->ta_2011)).kind == (((rt_int)17LL))) && (F->ca_2009 != NULL)) && (F->cb_2010 != NULL))) {
if ((((*(P809)rt_nil_check(F->ca_2009)).lo != NULL) && ((*(P809)rt_nil_check(F->cb_2010)).lo != NULL))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check((*(P809)rt_nil_check(F->ca_2009)).lo))->all)), rt_str(") == (", 6)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->cb_2010)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P809)rt_nil_check(F->ca_2009)).lo != NULL) || ((*(P809)rt_nil_check(F->cb_2010)).lo != NULL))) {
F->r_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_677), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P800)rt_nil_check(F->r_2013))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->r_2013))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_681(P809 c_680) {
  struct f_float_prec_681fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_680 = c_680;
if (((F->c_680 != NULL) && ((*(P809)rt_nil_check(F->c_680)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_680)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_687(P807 e_682, P813 bt_683, P809 c_684, P800 base_685, P813 *t_686) {
  struct f_file_attribute_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_682 = e_682;
F->bt_683 = bt_683;
F->c_684 = c_684;
F->base_685 = base_685;
F->t_686 = t_686;
F->t_686v = *F->t_686;
F->t_686v = g_file_mode_type_897;
if ((F->base_685 != NULL)) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_682)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P800)rt_nil_check(F->base_685))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P800)rt_nil_check(F->base_685))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_684 != NULL) && ((*(P809)rt_nil_check(F->c_684)).args != NULL))) {
if (rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_682)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_641((*(P809)rt_nil_check(F->c_684)).args, F->t_686v, &F->t_686v);
goto ret_;
} else if (((*(P807)rt_nil_check((*(P809)rt_nil_check(F->c_684)).args)).next != NULL)) {
F->result_ = f_gexpr_641((*(P807)rt_nil_check((*(P809)rt_nil_check(F->c_684)).args)).next, F->t_686v, &F->t_686v);
goto ret_;
}
}
f_fail_23((*(P807)rt_nil_check(F->e_682)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P800)rt_nil_check((*(P807)rt_nil_check(F->e_682)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_686) = F->t_686v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_691(P807 e_688, P813 want_689, P813 *t_690) {
  struct f_gbinop_691fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_688 = e_688;
F->want_689 = want_689;
F->t_690 = t_690;
F->t_690v = *F->t_690;
F->op_2026 = NULL;
F->op_2026 = (*(P807)rt_nil_check(F->e_688)).name;
F->ta_2027 = NULL;
F->tb_2028 = NULL;
F->hint_2029 = NULL;
F->uy_2030 = NULL;
F->t_690v = g_ty_bool_887;
if ((f_lookup_154(&(((P800)rt_nil_check(F->op_2026))->all)) != NULL)) {
F->l_2031 = NULL;
F->r_2032 = NULL;
F->l_2031 = f_copy_node_662((*(P807)rt_nil_check(F->e_688)).a);
F->r_2032 = f_copy_node_662((*(P807)rt_nil_check(F->e_688)).b);
(*(P807)rt_nil_check(F->l_2031)).next = F->r_2032;
F->uy_2030 = f_user_op_767(&(((P800)rt_nil_check(F->op_2026))->all), F->l_2031);
if ((F->uy_2030 != NULL)) {
F->call_2033 = NULL;
F->call_2033 = f_nn_61((((rt_int)10LL)), (*(P807)rt_nil_check(F->e_688)).line);
F->fname_2034 = NULL;
F->fname_2034 = f_nn_61((((rt_int)7LL)), (*(P807)rt_nil_check(F->e_688)).line);
(*(P807)rt_nil_check(F->fname_2034)).name = F->op_2026;
(*(P807)rt_nil_check(F->call_2033)).a = F->fname_2034;
(*(P807)rt_nil_check(F->call_2033)).b = F->l_2031;
F->result_ = f_gcall_771(F->call_2033, 0, &F->t_690v);
goto ret_;
}
}
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("IN", 2))) {
F->s_2035 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, NULL, &F->tb_2028));
if (((*(P813)rt_nil_check(F->tb_2028)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2036 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, (*(P813)rt_nil_check(F->tb_2028)).elem, &F->ta_2027));
f_check_type_223(F->ta_2027, (*(P813)rt_nil_check(F->tb_2028)).elem, (*(P807)rt_nil_check(F->e_688)).line);
F->t_690v = g_ty_bool_887;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2036), rt_str(", ", 2)), F->s_2035), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("AND", 3)) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("OR", 2))) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("XOR", 3))) && (f_set_operands_660(F->e_688, F->want_689) != NULL))) {
F->a_2037 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, f_set_operands_660(F->e_688, F->want_689), &F->ta_2027));
F->b_2038 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, F->ta_2027, &F->tb_2028));
f_check_type_223(F->tb_2028, F->ta_2027, (*(P807)rt_nil_check(F->e_688)).line);
F->t_690v = F->ta_2027;
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2037), rt_str(", ", 2)), F->b_2038), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2037), rt_str(", ", 2)), F->b_2038), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2037), rt_str(", ", 2)), F->b_2038), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("AND", 3)) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("OR", 2))) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("XOR", 3)))) {
F->a_2039 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, g_ty_bool_887, &F->ta_2027));
F->b_2040 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, g_ty_bool_887, &F->tb_2028));
f_check_type_223(F->ta_2027, g_ty_bool_887, (*(P807)rt_nil_check(F->e_688)).line);
f_check_type_223(F->tb_2028, g_ty_bool_887, (*(P807)rt_nil_check(F->e_688)).line);
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2039), rt_str(" && ", 4)), F->b_2040), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2039), rt_str(" || ", 4)), F->b_2040), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2039), rt_str(" != ", 4)), F->b_2040), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("&", 1)) && (F->want_689 != NULL)) && ((*(P813)rt_nil_check(f_base_of_214(F->want_689))).kind == (((rt_int)6LL))))) {
F->at_2041 = NULL;
F->at_2041 = f_base_of_214(F->want_689);
F->a_2042 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, F->at_2041, &F->ta_2027));
F->b_2043 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, F->at_2041, &F->tb_2028));
f_check_type_223(F->ta_2027, F->at_2041, (*(P807)rt_nil_check(F->e_688)).line);
f_check_type_223(F->tb_2028, F->at_2041, (*(P807)rt_nil_check(F->e_688)).line);
if ((((*(P813)rt_nil_check(F->at_2041)).ndim != ((rt_int)1LL)) || ((*(P813)rt_nil_check(f_base_of_214((*(P813)rt_nil_check(F->at_2041)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_622(F->at_2041);
F->t_690v = F->at_2041;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->at_2041)), rt_str("(", 1)), F->a_2042), rt_str(", ", 2)), F->b_2043), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("&", 1))) {
F->wa_2044 = NULL;
F->wb_2045 = NULL;
F->ws_2046 = NULL;
F->ce_2047 = NULL;
F->ce_2047 = g_ty_ascii_889;
if (((F->want_689 != NULL) && ((*(P813)rt_nil_check(F->want_689)).kind == (((rt_int)5LL))))) {
F->ws_2046 = F->want_689;
F->ce_2047 = f_str_elem_209(F->want_689);
}
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).a)).kind == (((rt_int)4LL)))) {
F->wa_2044 = F->ce_2047;
} else {
F->wa_2044 = F->ws_2046;
}
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).b)).kind == (((rt_int)4LL)))) {
F->wb_2045 = F->ce_2047;
} else {
F->wb_2045 = F->ws_2046;
}
{
F->a_2048 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, F->wa_2044, &F->ta_2027));
F->b_2049 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, F->wb_2045, &F->tb_2028));
F->t_690v = g_ty_string_890;
if (((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)5LL)))) {
F->t_690v = F->ta_2027;
} else if (((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)5LL)))) {
F->t_690v = F->tb_2028;
} else if ((!f_same_212(F->ta_2027, g_ty_ascii_889))) {
F->t_690v = f_new_typ_174((((rt_int)5LL)));
(*(P813)rt_nil_check(F->t_690v)).elem = F->ta_2027;
}
if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)6LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)6LL))))) {
f_need_slice_622(F->ta_2027);
f_check_type_223(F->tb_2028, F->ta_2027, (*(P807)rt_nil_check(F->e_688)).line);
F->t_690v = F->ta_2027;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->ta_2027)), rt_str("(", 1)), F->a_2048), rt_str(", ", 2)), F->b_2049), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)5LL)))) {
f_check_type_223(f_str_cat_part_655(F->tb_2028), f_str_elem_209(F->ta_2027), (*(P807)rt_nil_check(F->e_688)).line);
} else if (((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)5LL)))) {
f_check_type_223(F->ta_2027, f_str_elem_209(F->tb_2028), (*(P807)rt_nil_check(F->e_688)).line);
} else {
f_check_type_223(F->tb_2028, F->ta_2027, (*(P807)rt_nil_check(F->e_688)).line);
}
if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)5LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2048), rt_str(", ", 2)), F->b_2049), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)5LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2048), rt_str(", ", 2)), F->b_2049), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)4LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2048), rt_str(", ", 2)), F->b_2049), rt_str(")", 1));
goto ret_;
} else if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)4LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2048), rt_str(", ", 2)), F->b_2049), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1)) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))) && (f_as_subtype_285((*(P807)rt_nil_check(F->e_688)).a) != NULL)) && (f_as_subtype_285((*(P807)rt_nil_check(F->e_688)).b) != NULL))) {
F->t_690v = g_ty_bool_887;
F->result_ = f_subtype_compare_679(f_as_subtype_285((*(P807)rt_nil_check(F->e_688)).a), f_as_subtype_285((*(P807)rt_nil_check(F->e_688)).b), &(((P800)rt_nil_check(F->op_2026))->all), (*(P807)rt_nil_check(F->e_688)).line);
goto ret_;
}
if ((f_is_rel_107(&(((P800)rt_nil_check(F->op_2026))->all)) && (!rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("IN", 2))))) {
if (((((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).a)).kind == (((rt_int)4LL))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).a)).kind == (((rt_int)6LL)))) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).a)).kind == (((rt_int)1LL))))) {
F->dummy_2050 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, NULL, &F->hint_2029));
} else if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->e_688)).a)).kind == (((rt_int)14LL)))) {
F->hint_2029 = f_peek_type_657((*(P807)rt_nil_check(F->e_688)).b);
}
{
F->a_2051 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, F->hint_2029, &F->ta_2027));
F->b_2052 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, F->ta_2027, &F->tb_2028));
F->ct_2053 = NULL;
F->ct_2053 = f_base_of_214(F->ta_2027);
F->t_690v = g_ty_bool_887;
if ((((*(P813)rt_nil_check(F->ta_2027)).kind != (((rt_int)11LL))) && ((*(P813)rt_nil_check(F->tb_2028)).kind != (((rt_int)11LL))))) {
f_check_type_223(F->tb_2028, F->ta_2027, (*(P807)rt_nil_check(F->e_688)).line);
}
if (((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)11LL)))) {
F->ct_2053 = f_base_of_214(F->tb_2028);
}
if (((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2052), rt_str(", ", 2)), F->a_2051), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2052), rt_str(", ", 2)), F->a_2051), rt_str(")", 1));
goto ret_;
}
if (((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2052), rt_str(", ", 2)), F->a_2051), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2052), rt_str(", ", 2)), F->a_2051), rt_str(")", 1));
goto ret_;
}
if (((((((((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)2LL))) || ((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)8LL)))) || ((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)11LL)))) || ((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)14LL)))) || ((*(P813)rt_nil_check(F->ct_2053)).kind == (((rt_int)12LL)))) && (!rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1)))) && (!rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))))) {
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_351(F->ct_2053)) {
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_363(F->ct_2053, &F->a_2051, &F->b_2052);
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_363(F->ct_2053, &F->a_2051, &F->b_2052)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2051), rt_str(" == ", 4)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2051), rt_str(" != ", 4)), F->b_2052), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2051), rt_str(" ", 1)), (((P800)rt_nil_check(F->op_2026))->all)), rt_str(" ", 1)), F->b_2052), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2054 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).a, F->want_689, &F->ta_2027));
F->b_2055 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->e_688)).b, F->ta_2027, &F->tb_2028));
if ((((*(P813)rt_nil_check(F->ta_2027)).kind == (((rt_int)3LL))) || ((*(P813)rt_nil_check(F->tb_2028)).kind == (((rt_int)3LL))))) {
F->t_690v = g_ty_float_888;
if (((rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("+", 1)) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("-", 1))) || rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2054), rt_str(" ", 1)), (((P800)rt_nil_check(F->op_2026))->all)), rt_str(" ", 1)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
}
}
f_check_type_223(F->ta_2027, g_ty_int_886, (*(P807)rt_nil_check(F->e_688)).line);
f_check_type_223(F->tb_2028, g_ty_int_886, (*(P807)rt_nil_check(F->e_688)).line);
F->t_690v = g_ty_int_886;
if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P800)rt_nil_check(F->op_2026))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2054), rt_str(", ", 2)), F->b_2055), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P807)rt_nil_check(F->e_688)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P800)rt_nil_check(F->op_2026))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_690) = F->t_690v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_696(P807 e_692, P813 want_693, P809 ctx_694, P813 *t_695) {
  struct f_constructor_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_692 = e_692;
F->want_693 = want_693;
F->ctx_694 = ctx_694;
F->t_695 = t_695;
F->t_695v = *F->t_695;
F->it_2056 = NULL;
F->it_2056 = (*(P807)rt_nil_check(F->e_692)).a;
F->f_2057 = NULL;
F->vt_2058 = NULL;
if (((F->want_693 != NULL) && ((*(P813)rt_nil_check(F->want_693)).kind == (((rt_int)16LL))))) {
F->s_2059 = NULL;
F->s_2059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_294(F->want_693); b_; }));
F->t_695v = F->want_693;
while ((F->it_2056 != NULL)) {
F->v_2060 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->it_2056)).b, (*(P813)rt_nil_check(F->want_693)).elem, &F->vt_2058));
f_check_type_223(F->vt_2058, (*(P813)rt_nil_check(F->want_693)).elem, (*(P807)rt_nil_check(F->e_692)).line);
F->s_2059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P800)rt_nil_check(F->s_2059))->all)), rt_str(", ", 2)), F->v_2060), rt_str(")", 1)); b_; }));
F->it_2056 = (*(P807)rt_nil_check(F->it_2056)).next;
}
F->result_ = (((P800)rt_nil_check(F->s_2059))->all);
goto ret_;
}
if (((F->want_693 != NULL) && ((*(P813)rt_nil_check(F->want_693)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P800)rt_nil_check((*(P813)rt_nil_check(F->want_693)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_693 != NULL) && ((*(P813)rt_nil_check(F->want_693)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_710(F->e_692, F->want_693, F->ctx_694, &F->t_695v);
goto ret_;
}
if (((F->want_693 != NULL) && ((*(P813)rt_nil_check(F->want_693)).kind == (((rt_int)17LL))))) {
if ((((((F->it_2056 == NULL) || ((*(P807)rt_nil_check(F->it_2056)).next != NULL)) || ((*(P807)rt_nil_check(F->it_2056)).a == NULL)) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2056)).a)).next != NULL)) || ((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2056)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2057 = (*(P813)rt_nil_check(F->want_693)).fields;
{
F->i_2061 = ((rt_int)0LL);
F->tmp_2062 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2057 != NULL) && (!rt_str_eq((((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all), (((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2056)).a)).a)).name))->all))))) {
F->i_2061 = rt_add(F->i_2061, ((rt_int)1LL));
F->f_2057 = (*(P815)rt_nil_check(F->f_2057)).next;
}
if ((F->f_2057 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2056)).a)).a)).name))->all)); b_; }));
}
F->t_695v = F->want_693;
g_cons_ctx_878 = (*(P815)rt_nil_check(F->f_2057)).c;
{
F->v_2063 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->it_2056)).b, (*(P815)rt_nil_check(F->f_2057)).t, &F->vt_2058));
f_check_type_223(F->vt_2058, (*(P815)rt_nil_check(F->f_2057)).t, (*(P807)rt_nil_check(F->e_692)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_693)), rt_str(" ", 1)), F->tmp_2062), rt_str("; ", 2)), F->tmp_2062), rt_str(".tag = ", 7)), f_itos_7(F->i_2061)), rt_str("; ", 2)), F->tmp_2062), rt_str(".u.", 3)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all))), rt_str(" = ", 3)), f_comp_value_700((*(P815)rt_nil_check(F->f_2057)).t, (*(P815)rt_nil_check(F->f_2057)).c, &F->v_2063)), rt_str("; ", 2)), F->tmp_2062), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_693 == NULL) || ((*(P813)rt_nil_check(F->want_693)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_695v = F->want_693;
F->f_2057 = (*(P813)rt_nil_check(F->want_693)).fields;
{
F->tmp_2064 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2065 = NULL;
F->parts_2065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_693)), rt_str(" ", 1)), F->tmp_2064), rt_str(";", 1)); b_; }));
while ((F->it_2056 != NULL)) {
F->k_2066 = NULL;
F->k_2066 = (*(P807)rt_nil_check(F->it_2056)).a;
F->shared_2067 = NULL;
if ((F->k_2066 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2066 != NULL)) {
if (((((F->f_2057 == NULL) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->k_2066)).a)).kind != (((rt_int)7LL)))) || ((*(P807)rt_nil_check(F->k_2066)).b != NULL)) || (!rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check((*(P807)rt_nil_check(F->k_2066)).a)).name))->all), (((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all))))) {
if ((F->f_2057 == NULL)) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2056)).a)).next == NULL)) {
g_cons_ctx_878 = (*(P815)rt_nil_check(F->f_2057)).c;
{
F->v_2068 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->it_2056)).b, (*(P815)rt_nil_check(F->f_2057)).t, &F->vt_2058));
f_check_type_223(F->vt_2058, (*(P815)rt_nil_check(F->f_2057)).t, (*(P807)rt_nil_check(F->e_692)).line);
F->parts_2065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2065))->all), rt_str(" ", 1)), F->tmp_2064), rt_str(".", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all))), rt_str(" = ", 3)), f_comp_value_700((*(P815)rt_nil_check(F->f_2057)).t, (*(P815)rt_nil_check(F->f_2057)).c, &F->v_2068)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2067 == NULL)) {
F->v_2069 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->it_2056)).b, (*(P815)rt_nil_check(F->f_2057)).t, &F->vt_2058));
F->shared_2067 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_223(F->vt_2058, (*(P815)rt_nil_check(F->f_2057)).t, (*(P807)rt_nil_check(F->e_692)).line);
F->parts_2065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2065))->all), rt_str(" ", 1)), f_ctype_225((*(P815)rt_nil_check(F->f_2057)).t)), rt_str(" ", 1)), (((P800)rt_nil_check(F->shared_2067))->all)), rt_str(" = ", 3)), F->v_2069), rt_str(";", 1)); b_; }));
}
f_check_type_223(F->vt_2058, (*(P815)rt_nil_check(F->f_2057)).t, (*(P807)rt_nil_check(F->e_692)).line);
F->parts_2065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2065))->all), rt_str(" ", 1)), F->tmp_2064), rt_str(".", 1)), f_field_c_17(&(((P800)rt_nil_check((*(P815)rt_nil_check(F->f_2057)).name))->all))), rt_str(" = ", 3)), f_comp_value_700((*(P815)rt_nil_check(F->f_2057)).t, (*(P815)rt_nil_check(F->f_2057)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_359((*(P815)rt_nil_check(F->f_2057)).t, &(((P800)rt_nil_check(F->shared_2067))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2057 = (*(P815)rt_nil_check(F->f_2057)).next;
F->k_2066 = (*(P807)rt_nil_check(F->k_2066)).next;
}
F->it_2056 = (*(P807)rt_nil_check(F->it_2056)).next;
}
if ((F->f_2057 != NULL)) {
f_fail_23((*(P807)rt_nil_check(F->e_692)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2065))->all), rt_str(" ", 1)), F->tmp_2064), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_695) = F->t_695v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_700(P813 t_697, P809 c_698, rstr *v_699) {
  struct f_comp_value_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_697 = t_697;
F->c_698 = c_698;
F->v_699 = v_699;
if (((F->c_698 == NULL) || (((*(P809)rt_nil_check(F->c_698)).lo != NULL) && f_has_at_702(&(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_698)).lo))->all))))) {
F->result_ = f_copy_code_359(F->t_697, &(*F->v_699));
goto ret_;
} else if (((((*(P813)rt_nil_check(F->t_697)).kind == (((rt_int)5LL))) && ((*(P809)rt_nil_check(F->c_698)).slen != NULL)) && (!f_has_at_702(&(((P800)rt_nil_check((*(P809)rt_nil_check(F->c_698)).slen))->all))))) {
F->result_ = f_copy_code_359(F->t_697, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_699)), rt_str(", ", 2)), (((P800)rt_nil_check((*(P809)rt_nil_check(F->c_698)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_697, F->c_698, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_359(F->t_697, &(*F->v_699)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_702(rstr *s_701) {
  struct f_has_at_702fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_701 = s_701;
{ rt_int lo2071 = ((rt_int)1LL), hi2072 = ((rt_int)(((*F->s_701)).len));
for (rt_int it2073 = lo2071; it2073 <= hi2072; it2073++) {
F->i_2070 = it2073;
if ((rt_str_get((*F->s_701), F->i_2070) == 64)) {
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

static rstr f_set_elem_705(P813 st_703, rstr *v_704) {
  struct f_set_elem_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_703 = st_703;
F->v_704 = v_704;
F->result_ = (*F->v_704);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_710(P807 e_706, P813 at_707, P809 ctx_708, P813 *t_709) {
  struct f_array_cons_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_706 = e_706;
F->at_707 = at_707;
F->ctx_708 = ctx_708;
F->t_709 = t_709;
F->t_709v = *F->t_709;
F->tmp_2074 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2075 = NULL;
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->at_707)), rt_str(" ", 1)), F->tmp_2074), rt_str(";", 1)); b_; }));
F->it_2076 = NULL;
F->it_2076 = (*(P807)rt_nil_check(F->e_706)).a;
F->positional_2077 = 1;
F->t_709v = F->at_707;
while ((F->it_2076 != NULL)) {
if (((*(P807)rt_nil_check(F->it_2076)).a != NULL)) {
F->positional_2077 = 0;
}
F->it_2076 = (*(P807)rt_nil_check(F->it_2076)).next;
}
{ rt_int lo2079 = ((rt_int)1LL), hi2080 = (*(P813)rt_nil_check(F->at_707)).ndim;
for (rt_int it2081 = lo2079; it2081 <= hi2080; it2081++) {
F->k_2078 = it2081;
F->lo_2082 = NULL;
F->hi_2083 = NULL;
if ((((F->ctx_708 != NULL) && (f_cons_lo_243(F->ctx_708, F->k_2078) != NULL)) && (!f_has_at_702(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P800)rt_nil_check(f_cons_lo_243(F->ctx_708, F->k_2078)))->all); b_; }))))) {
F->lo_2082 = f_cons_lo_243(F->ctx_708, F->k_2078);
F->hi_2083 = f_cons_hi_246(F->ctx_708, F->k_2078);
} else if ((((*(P813)rt_nil_check(F->at_707)).ndim == ((rt_int)1LL)) && F->positional_2077)) {
if (((*(P813)rt_nil_check(f_base_of_214((*(P813)rt_nil_check(F->at_707)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2083 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->lo_2082))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P807)rt_nil_check(F->e_706)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P807)rt_nil_check(F->e_706)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2075))->all), rt_str(" ", 1)), F->tmp_2074), rt_str(".", 1)), f_dim_lo_233(F->k_2078)), rt_str(" = ", 3)), (((P800)rt_nil_check(F->lo_2082))->all)), rt_str("; ", 2)), F->tmp_2074), rt_str(".", 1)), f_dim_hi_235(F->k_2078)), rt_str(" = ", 3)), (((P800)rt_nil_check(F->hi_2083))->all)), rt_str(";", 1)); b_; }));
}
}
if (((*(P813)rt_nil_check(F->at_707)).ndim == ((rt_int)1LL))) {
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2075))->all), rt_str(" ", 1)), F->tmp_2074), rt_str(".lo2 = ", 7)), F->tmp_2074), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2075))->all), rt_str(" rt_int n_", 10)), F->tmp_2074), rt_str(" = ", 3)), f_acnt_240(F->at_707, &F->tmp_2074)), rt_str("; ", 2)), F->tmp_2074), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P813)rt_nil_check(F->at_707)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2074), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2074), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2074), rt_str(" + 1);", 6)); b_; }));
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->parts_2075))->all), f_fill_items_716((*(P807)rt_nil_check(F->e_706)).a, F->at_707, &F->tmp_2074, NULL, ((rt_int)1LL))); b_; }));
F->parts_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->parts_2075))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2074), rt_str("; i_++) if (seen_", 17)), F->tmp_2074), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2074), rt_str("; })", 4)); b_; }));
F->result_ = (((P800)rt_nil_check(F->parts_2075))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_709) = F->t_709v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_716(P807 items_711, P813 at_712, rstr *tmp_713, P811 prefix_714, rt_int dim_715) {
  struct f_fill_items_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_711 = items_711;
F->at_712 = at_712;
F->tmp_713 = tmp_713;
F->prefix_714 = prefix_714;
F->dim_715 = dim_715;
F->it_2084 = NULL;
F->it_2084 = F->items_711;
F->pos_2085 = ((rt_int)0LL);
F->r_2086 = NULL;
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2087 = NULL;
while ((F->it_2084 != NULL)) {
if (((*(P807)rt_nil_check(F->it_2084)).a == NULL)) {
if (((F->dim_715 < (*(P813)rt_nil_check(F->at_712)).ndim) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2084)).b)).kind == (((rt_int)14LL))))) {
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_715)), rt_str(" = ", 3)), (*F->tmp_713)), rt_str(".", 1)), f_dim_lo_233(F->dim_715)), rt_str(" + ", 3)), f_itos_7(F->pos_2085)), rt_str("; ", 2)), f_fill_items_716((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2084)).b)).a, F->at_712, &(*F->tmp_713), f_add_line_721(F->prefix_714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_715)); b_; })), rt_add(F->dim_715, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2088 = rt_str_copy(f_item_value_726((*(P807)rt_nil_check(F->it_2084)).b, F->at_712, f_e_line_718(F->it_2084), &F->vt_2087));
if (((F->dim_715 == ((rt_int)1LL)) && ((*(P813)rt_nil_check(F->at_712)).ndim > ((rt_int)1LL)))) {
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" { ", 3)), F->v_2088), rt_str(" if (", 5)), f_itos_7(F->pos_2085)), rt_str(" >= n_", 6)), (*F->tmp_713)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_713)), rt_str(".p[", 3)), f_itos_7(F->pos_2085)), rt_str("] = ", 4)), f_copy_code_359((*(P813)rt_nil_check(F->at_712)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_713)), rt_str("[", 1)), f_itos_7(F->pos_2085)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" { ", 3)), F->v_2088), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_715)), rt_str(" = ", 3)), (*F->tmp_713)), rt_str(".", 1)), f_dim_lo_233(F->dim_715)), rt_str(" + ", 3)), f_itos_7(F->pos_2085)), rt_str("; ", 2)), f_store_at_736(F->at_712, &(*F->tmp_713), f_add_line_721(F->prefix_714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_715)); b_; })), F->dim_715)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2085 = rt_add(F->pos_2085, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_715, f_list_len_67((*(P807)rt_nil_check(F->it_2084)).a)), ((rt_int)1LL)) == (*(P813)rt_nil_check(F->at_712)).ndim)) {
F->k_2089 = NULL;
F->k_2089 = (*(P807)rt_nil_check(F->it_2084)).a;
F->d_2090 = F->dim_715;
F->pre_2091 = NULL;
F->pre_2091 = F->prefix_714;
F->loops_2092 = NULL;
F->loops_2092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2093 = NULL;
F->ends_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2094 = rt_str_copy(f_item_value_726((*(P807)rt_nil_check(F->it_2084)).b, F->at_712, (*(P807)rt_nil_check(F->it_2084)).line, &F->vt_2087));
while ((F->k_2089 != NULL)) {
F->xv_2095 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_2090)));
F->loops_2092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->loops_2092))->all), f_key_loop_731(F->k_2089, F->at_712, F->d_2090, &F->xv_2095)); b_; }));
F->ends_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->ends_2093))->all), rt_str(" }", 2)); b_; }));
F->pre_2091 = f_add_line_721(F->pre_2091, &F->xv_2095);
F->d_2090 = rt_add(F->d_2090, ((rt_int)1LL));
F->k_2089 = (*(P807)rt_nil_check(F->k_2089)).next;
}
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" { ", 3)), F->v_2094), (((P800)rt_nil_check(F->loops_2092))->all)), rt_str(" ", 1)), f_store_at_736(F->at_712, &(*F->tmp_713), F->pre_2091, (*(P813)rt_nil_check(F->at_712)).ndim)), (((P800)rt_nil_check(F->ends_2093))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_715 == (*(P813)rt_nil_check(F->at_712)).ndim) || ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2084)).b)).kind == (((rt_int)14LL))))) {
F->k_2096 = NULL;
F->k_2096 = (*(P807)rt_nil_check(F->it_2084)).a;
while ((F->k_2096 != NULL)) {
F->xv_2097 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_715)));
if ((F->dim_715 < (*(P813)rt_nil_check(F->at_712)).ndim)) {
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" {", 2)), f_key_loop_731(F->k_2096, F->at_712, F->dim_715, &F->xv_2097)), rt_str(" ", 1)), f_fill_items_716((*(P807)rt_nil_check((*(P807)rt_nil_check(F->it_2084)).b)).a, F->at_712, &(*F->tmp_713), f_add_line_721(F->prefix_714, &F->xv_2097), rt_add(F->dim_715, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2098 = rt_str_copy(f_item_value_726((*(P807)rt_nil_check(F->it_2084)).b, F->at_712, (*(P807)rt_nil_check(F->it_2084)).line, &F->vt_2087));
F->r_2086 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->r_2086))->all), rt_str(" { ", 3)), F->v_2098), f_key_loop_731(F->k_2096, F->at_712, F->dim_715, &F->xv_2097)), rt_str(" ", 1)), f_store_at_736(F->at_712, &(*F->tmp_713), f_add_line_721(F->prefix_714, &F->xv_2097), F->dim_715)), rt_str(" } }", 4)); b_; }));
}
F->k_2096 = (*(P807)rt_nil_check(F->k_2096)).next;
}
} else {
f_fail_23((*(P807)rt_nil_check(F->it_2084)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P813)rt_nil_check(F->at_712)).ndim, F->dim_715), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2084 = (*(P807)rt_nil_check(F->it_2084)).next;
}
F->result_ = (((P800)rt_nil_check(F->r_2086))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_718(P807 e_717) {
  struct f_e_line_718fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_717 = e_717;
F->result_ = (*(P807)rt_nil_check(F->e_717)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P811 f_add_line_721(P811 l_719, rstr *s_720) {
  struct f_add_line_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_719 = l_719;
F->s_720 = s_720;
F->r_2099 = NULL;
F->tail_2100 = NULL;
F->x_2101 = NULL;
F->p_2102 = NULL;
F->p_2102 = F->l_719;
while ((F->p_2102 != NULL)) {
{ R812 *cell2103 = rt_alloc(sizeof(R812));
(*cell2103).s = NULL;
(*cell2103).next = NULL;
F->x_2101 = cell2103;
}
(*(P811)rt_nil_check(F->x_2101)).s = (*(P811)rt_nil_check(F->p_2102)).s;
if ((F->tail_2100 == NULL)) {
F->r_2099 = F->x_2101;
} else {
(*(P811)rt_nil_check(F->tail_2100)).next = F->x_2101;
}
F->tail_2100 = F->x_2101;
F->p_2102 = (*(P811)rt_nil_check(F->p_2102)).next;
}
{ R812 *cell2104 = rt_alloc(sizeof(R812));
(*cell2104).s = NULL;
(*cell2104).next = NULL;
F->x_2101 = cell2104;
}
(*(P811)rt_nil_check(F->x_2101)).s = f_mk_3(&(*F->s_720));
if ((F->tail_2100 == NULL)) {
F->r_2099 = F->x_2101;
} else {
(*(P811)rt_nil_check(F->tail_2100)).next = F->x_2101;
}
F->result_ = F->r_2099;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_726(P807 e_722, P813 at_723, rt_int line_724, P813 *vt_725) {
  struct f_item_value_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_722 = e_722;
F->at_723 = at_723;
F->line_724 = line_724;
F->vt_725 = vt_725;
F->vt_725v = *F->vt_725;
g_cons_ctx_878 = (*(P813)rt_nil_check(F->at_723)).elemcons;
{
F->v_2105 = rt_str_copy(f_gexpr_641(F->e_722, (*(P813)rt_nil_check(F->at_723)).elem, &F->vt_725v));
f_check_type_223(F->vt_725v, (*(P813)rt_nil_check(F->at_723)).elem, F->line_724);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P813)rt_nil_check(F->at_723)).elem), rt_str(" v_ = ", 6)), f_comp_value_700((*(P813)rt_nil_check(F->at_723)).elem, (*(P813)rt_nil_check(F->at_723)).elemcons, &F->v_2105)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_725) = F->vt_725v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_731(P807 k_727, P813 at_728, rt_int d_729, rstr *xv_730) {
  struct f_key_loop_731fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_727 = k_727;
F->at_728 = at_728;
F->d_729 = d_729;
F->xv_730 = xv_730;
F->it_2106 = NULL;
F->lo_2107 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->k_727)).a, f_idx_type_249(F->at_728, F->d_729), &F->it_2106));
f_check_type_223(F->it_2106, f_idx_type_249(F->at_728, F->d_729), (*(P807)rt_nil_check(F->k_727)).line);
if (((*(P807)rt_nil_check(F->k_727)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_730)), rt_str(" = ", 3)), F->lo_2107), rt_str(";", 1));
goto ret_;
}
{
F->hi_2108 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->k_727)).b, f_idx_type_249(F->at_728, F->d_729), &F->it_2106));
f_check_type_223(F->it_2106, f_idx_type_249(F->at_728, F->d_729), (*(P807)rt_nil_check(F->k_727)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_730)), rt_str(" = ", 3)), F->lo_2107), rt_str(", h", 3)), (*F->xv_730)), rt_str(" = ", 3)), F->hi_2108), rt_str("; ", 2)), (*F->xv_730)), rt_str(" <= h", 5)), (*F->xv_730)), rt_str("; ", 2)), (*F->xv_730)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_736(P813 at_732, rstr *tmp_733, P811 xs_734, rt_int n_735) {
  struct f_store_at_736fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_732 = at_732;
F->tmp_733 = tmp_733;
F->xs_734 = xs_734;
F->n_735 = n_735;
F->off_2109 = NULL;
F->x_2110 = NULL;
F->x_2110 = F->xs_734;
F->k_2111 = ((rt_int)0LL);
while ((F->x_2110 != NULL)) {
F->k_2111 = rt_add(F->k_2111, ((rt_int)1LL));
{
F->l_2112 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_733), rt_str(".", 1)), f_dim_lo_233(F->k_2111)));
F->h_2113 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_733), rt_str(".", 1)), f_dim_hi_235(F->k_2111)));
if ((F->off_2109 == NULL)) {
F->off_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P800)rt_nil_check((*(P811)rt_nil_check(F->x_2110)).s))->all)), rt_str(", ", 2)), F->l_2112), rt_str(", ", 2)), F->h_2113), rt_str(") - ", 4)), F->l_2112), rt_str(")", 1)); b_; }));
} else {
F->off_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P800)rt_nil_check(F->off_2109))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2112), rt_str(", ", 2)), F->h_2113), rt_str(") + rt_index(", 13)), (((P800)rt_nil_check((*(P811)rt_nil_check(F->x_2110)).s))->all)), rt_str(", ", 2)), F->l_2112), rt_str(", ", 2)), F->h_2113), rt_str(") - ", 4)), F->l_2112), rt_str(")", 1)); b_; }));
}
}
F->x_2110 = (*(P811)rt_nil_check(F->x_2110)).next;
}
if ((F->k_2111 != (*(P813)rt_nil_check(F->at_732)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P813)rt_nil_check(F->at_732)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P800)rt_nil_check(F->off_2109))->all)), rt_str("; ", 2)), (*F->tmp_733)), rt_str(".p[o_] = ", 9)), f_copy_code_359((*(P813)rt_nil_check(F->at_732)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_733)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_739(P817 y_737, P807 args_738) {
  struct f_fits_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_737 = y_737;
F->args_738 = args_738;
F->a_2114 = NULL;
F->a_2114 = F->args_738;
F->pm_2115 = NULL;
F->pm_2115 = (*(P817)rt_nil_check(F->y_737)).params;
F->t_2116 = NULL;
F->saved_2117 = NULL;
F->saved_2117 = g_code_857;
F->ok_2118 = 1;
F->lv_2119 = NULL;
F->lc_2120 = NULL;
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
g_code_857 = f_new_buffer_24();
{ rt_frame xf2122;
if (RT_TRY(xf2122)) {
while (((F->ok_2118 && (F->a_2114 != NULL)) && (F->pm_2115 != NULL))) {
if ((((*(P819)rt_nil_check(F->pm_2115)).mode == (((rt_int)2LL))) || ((*(P819)rt_nil_check(F->pm_2115)).mode == (((rt_int)3LL))))) {
f_lvalue_610(F->a_2114, &F->lv_2119, &F->t_2116, &F->lc_2120, &F->ro_2121);
} else {
F->v_2124 = rt_str_copy(f_gexpr_641(F->a_2114, (*(P819)rt_nil_check(F->pm_2115)).t, &F->t_2116));
}
if ((!(f_same_212(F->t_2116, (*(P819)rt_nil_check(F->pm_2115)).t) || (((*(P813)rt_nil_check(F->t_2116)).kind == (((rt_int)11LL))) && ((*(P813)rt_nil_check((*(P819)rt_nil_check(F->pm_2115)).t)).kind == (((rt_int)8LL))))))) {
F->ok_2118 = 0;
}
F->a_2114 = (*(P807)rt_nil_check(F->a_2114)).next;
F->pm_2115 = (*(P819)rt_nil_check(F->pm_2115)).next;
}
if (((F->a_2114 != NULL) || (F->pm_2115 != NULL))) {
F->ok_2118 = 0;
}
RT_POP(xf2122);
} else {
RT_POP(xf2122);
int x2123 = rt_xcur;
if (0 || x2123 == ex_compile_error_1) {
F->ok_2118 = 0;
} else {
rt_raise(x2123);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
g_code_857 = F->saved_2117;
F->result_ = F->ok_2118;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_resolve_overload_745(rstr *name_740, P807 tt_741, P807 args_742, int is_stmt_743, rt_int line_744) {
  struct f_resolve_overload_745fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_740 = name_740;
F->tt_741 = tt_741;
F->args_742 = args_742;
F->is_stmt_743 = is_stmt_743;
F->line_744 = line_744;
F->y_2125 = NULL;
F->first_2126 = NULL;
F->n_2127 = ((rt_int)0LL);
{ rt_int lo2129 = ((rt_int)1LL), hi2130 = ((rt_int)3LL);
for (rt_int it2131 = lo2129; it2131 <= hi2130; it2131++) {
F->pass_2128 = it2131;
F->y_2125 = f_overload_chain_751(&(*F->name_740), F->pass_2128);
while ((F->y_2125 != NULL)) {
if (((rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_2125)).name))->all), (*F->name_740)) && (((*(P817)rt_nil_check(F->y_2125)).kind == (((rt_int)3LL))) || ((*(P817)rt_nil_check(F->y_2125)).kind == (((rt_int)4LL))))) && ((F->pass_2128 != ((rt_int)1LL)) || ((*(P817)rt_nil_check(F->y_2125)).depth >= g_gdepth_876)))) {
F->n_2127 = rt_add(F->n_2127, ((rt_int)1LL));
if ((F->first_2126 == NULL)) {
F->first_2126 = F->y_2125;
}
if ((((((*(P817)rt_nil_check(F->y_2125)).kind == (((rt_int)4LL))) == F->is_stmt_743) && f_tt_fits_748(F->y_2125, F->tt_741)) && f_fits_739(F->y_2125, F->args_742))) {
F->result_ = F->y_2125;
goto ret_;
}
}
F->y_2125 = (*(P817)rt_nil_check(F->y_2125)).chain;
}
}
}
if (f_is_builtin_753(&(*F->name_740))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_2127 > ((rt_int)1LL))) {
f_fail_23(F->line_744, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_740)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2126;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_748(P817 y_746, P807 tt_747) {
  struct f_tt_fits_748fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_746 = y_746;
F->tt_747 = tt_747;
F->f_2132 = NULL;
F->a_2133 = NULL;
F->saved_2134 = NULL;
F->saved_2134 = g_code_857;
F->ok_2135 = 1;
if ((((*(P817)rt_nil_check(F->y_746)).decl == NULL) || ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_746)).decl)).e == NULL))) {
F->result_ = (F->tt_747 == NULL);
goto ret_;
} else if ((F->tt_747 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2132 = (*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_746)).decl)).e;
F->a_2133 = F->tt_747;
g_trial_884 = rt_add(g_trial_884, ((rt_int)1LL));
g_code_857 = f_new_buffer_24();
{ rt_frame xf2136;
if (RT_TRY(xf2136)) {
while (((F->ok_2135 && (F->f_2132 != NULL)) && (F->a_2133 != NULL))) {
F->fc_2138 = NULL;
F->ac_2139 = NULL;
F->fst_2140 = NULL;
F->fst_2140 = f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->f_2132)).line);
F->ft_2141 = NULL;
F->at_2142 = NULL;
(*(P807)rt_nil_check(F->fst_2140)).name = (*(P807)rt_nil_check(F->f_2132)).name;
F->ft_2141 = f_resolve_subtype_256(F->fst_2140, &F->fc_2138);
if (((*(P807)rt_nil_check(F->a_2133)).kind >= (((rt_int)70LL)))) {
F->at_2142 = f_resolve_subtype_256(F->a_2133, &F->ac_2139);
} else {
F->ast_2143 = NULL;
F->ast_2143 = f_nn_61((((rt_int)80LL)), (*(P807)rt_nil_check(F->a_2133)).line);
(*(P807)rt_nil_check(F->ast_2143)).name = (*(P807)rt_nil_check(F->a_2133)).name;
F->at_2142 = f_resolve_subtype_256(F->ast_2143, &F->ac_2139);
}
F->ok_2135 = f_same_212(F->ft_2141, F->at_2142);
F->f_2132 = (*(P807)rt_nil_check(F->f_2132)).next;
F->a_2133 = (*(P807)rt_nil_check(F->a_2133)).next;
}
F->ok_2135 = ((F->ok_2135 && (F->f_2132 == NULL)) && (F->a_2133 == NULL));
RT_POP(xf2136);
} else {
RT_POP(xf2136);
int x2137 = rt_xcur;
if (0 || x2137 == ex_compile_error_1) {
F->ok_2135 = 0;
} else {
rt_raise(x2137);
}
}
}
g_trial_884 = rt_sub(g_trial_884, ((rt_int)1LL));
g_code_857 = F->saved_2134;
F->result_ = F->ok_2135;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_overload_chain_751(rstr *name_749, rt_int pass_750) {
  struct f_overload_chain_751fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_749 = name_749;
F->pass_750 = pass_750;
if (((g_genv_844 == NULL) && (F->pass_750 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_750 == ((rt_int)2LL))) {
F->result_ = ({ A823 b_ = (((P821)rt_nil_check(g_genv_844))->all); b_.p[(rt_index(f_hash_152(&(*F->name_749)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A823 b_ = (((P821)rt_nil_check(g_table_843))->all); b_.p[(rt_index(f_hash_152(&(*F->name_749)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_753(rstr *n_752) {
  struct f_is_builtin_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_752 = n_752;
F->result_ = (((((((((((((((rt_str_eq((*F->n_752), rt_str("ABS", 3)) || rt_str_eq((*F->n_752), rt_str("POS", 3))) || rt_str_eq((*F->n_752), rt_str("SUCC", 4))) || rt_str_eq((*F->n_752), rt_str("PRED", 4))) || rt_str_eq((*F->n_752), rt_str("SQRT", 4))) || rt_str_eq((*F->n_752), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_752), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_752), rt_str("WRITE", 5))) || rt_str_eq((*F->n_752), rt_str("READLN", 6))) || rt_str_eq((*F->n_752), rt_str("SEND", 4))) || rt_str_eq((*F->n_752), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_752), rt_str("DELAY", 5))) || rt_str_eq((*F->n_752), rt_str("TIME", 4))) || rt_str_eq((*F->n_752), rt_str("CNVT", 4))) || rt_str_eq((*F->n_752), rt_str("FORMAT", 6))) || f_is_low_level_755(&(*F->n_752)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_755(rstr *n_754) {
  struct f_is_low_level_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_754 = n_754;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_754), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_754), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_754), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_754), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_754), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_754), rt_str("LOCK", 4))) || rt_str_eq((*F->n_754), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_754), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_754), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_754), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_754), rt_str("WAITING", 7))) || rt_str_eq((*F->n_754), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_754), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_754), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_754), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_754), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_754), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_754), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_754), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_759(P807 tt_756, rt_int line_757, P813 *t_758) {
  struct f_me_high_759fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_756 = tt_756;
F->line_757 = line_757;
F->t_758 = t_758;
F->t_758v = *F->t_758;
F->c_2144 = NULL;
if ((F->tt_756 == NULL)) {
f_fail_23(F->line_757, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_758v = f_resolve_subtype_256(F->tt_756, &F->c_2144);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_758v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_761(F->t_758v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_758) = F->t_758v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_761(P813 t_760) {
  struct f_type_tag_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_760 = t_760;
if (((*(P813)rt_nil_check(F->t_760)).name != NULL)) {
F->result_ = (((P800)rt_nil_check((*(P813)rt_nil_check(F->t_760)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_764(P807 e_762, rstr *name_763) {
  struct f_lock_ref_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_762 = e_762;
F->name_763 = name_763;
F->lv_2145 = NULL;
F->t_2146 = NULL;
F->c_2147 = NULL;
f_lvalue_610(F->e_762, &F->lv_2145, &F->t_2146, &F->c_2147, &F->ro_2148);
if (((*(P813)rt_nil_check(F->t_2146)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P807)rt_nil_check(F->e_762)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_763), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P800)rt_nil_check(F->lv_2145))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_user_op_767(rstr *op_765, P807 args_766) {
  struct f_user_op_767fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_765 = op_765;
F->args_766 = args_766;
F->y_2149 = NULL;
{ rt_int lo2151 = ((rt_int)1LL), hi2152 = ((rt_int)3LL);
for (rt_int it2153 = lo2151; it2153 <= hi2152; it2153++) {
F->pass_2150 = it2153;
F->y_2149 = f_overload_chain_751(&(*F->op_765), F->pass_2150);
while ((F->y_2149 != NULL)) {
if ((((rt_str_eq((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_2149)).name))->all), (*F->op_765)) && ((*(P817)rt_nil_check(F->y_2149)).kind == (((rt_int)3LL)))) && ((F->pass_2150 != ((rt_int)1LL)) || ((*(P817)rt_nil_check(F->y_2149)).depth >= g_gdepth_876))) && f_fits_739(F->y_2149, F->args_766))) {
F->result_ = F->y_2149;
goto ret_;
}
F->y_2149 = (*(P817)rt_nil_check(F->y_2149)).chain;
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

static rstr f_gcall_771(P807 e_768, int is_stmt_769, P813 *t_770) {
  struct f_gcall_771fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_768 = e_768;
F->is_stmt_769 = is_stmt_769;
F->t_770 = t_770;
F->t_770v = *F->t_770;
F->fn_2154 = NULL;
F->fn_2154 = (*(P807)rt_nil_check(F->e_768)).a;
F->tt_2155 = NULL;
F->y_2156 = NULL;
F->args_2157 = NULL;
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2158 = NULL;
F->a_2158 = (*(P807)rt_nil_check(F->e_768)).b;
F->pm_2159 = NULL;
F->lt_2160 = NULL;
F->vt_2161 = NULL;
F->lv_2162 = NULL;
F->lc_2163 = NULL;
if (((*(P807)rt_nil_check(F->fn_2154)).kind == (((rt_int)12LL)))) {
F->tt_2155 = (*(P807)rt_nil_check(F->fn_2154)).b;
F->fn_2154 = (*(P807)rt_nil_check(F->fn_2154)).a;
}
F->y_2156 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all));
if ((F->y_2156 == NULL)) {
F->result_ = f_builtin_796(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, (*(P807)rt_nil_check(F->e_768)).line, F->is_stmt_769, &F->t_770v);
goto ret_;
}
if (((((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)3LL))) && ((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)4LL)))) && ((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)10LL))))) {
F->alt_2165 = NULL;
F->alt_2165 = f_resolve_overload_745(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, F->is_stmt_769, (*(P807)rt_nil_check(F->e_768)).line);
if ((F->alt_2165 != NULL)) {
F->y_2156 = F->alt_2165;
} else if (f_is_builtin_753(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all))) {
F->result_ = f_builtin_796(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, (*(P807)rt_nil_check(F->e_768)).line, F->is_stmt_769, &F->t_770v);
goto ret_;
}
}
if (((*(P817)rt_nil_check(F->y_2156)).kind == (((rt_int)10LL)))) {
F->y_2156 = f_instantiate_586(F->y_2156, F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, (*(P807)rt_nil_check(F->e_768)).line);
} else if ((((*(P817)rt_nil_check(F->y_2156)).kind == (((rt_int)3LL))) || ((*(P817)rt_nil_check(F->y_2156)).kind == (((rt_int)4LL))))) {
F->y_2156 = f_resolve_overload_745(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, F->is_stmt_769, (*(P807)rt_nil_check(F->e_768)).line);
if ((F->y_2156 == NULL)) {
F->result_ = f_builtin_796(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), F->tt_2155, (*(P807)rt_nil_check(F->e_768)).b, (*(P807)rt_nil_check(F->e_768)).line, F->is_stmt_769, &F->t_770v);
goto ret_;
}
}
if ((((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)3LL))) && ((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_768)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_785(F->y_2156, (*(P807)rt_nil_check(F->e_768)).line);
if ((F->is_stmt_769 && ((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_768)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_769) && ((*(P817)rt_nil_check(F->y_2156)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P807)rt_nil_check(F->e_768)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2159 = (*(P817)rt_nil_check(F->y_2156)).params;
if (((*(P817)rt_nil_check(F->y_2156)).level > ((rt_int)0LL))) {
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2167 = ((rt_int)1LL), hi2168 = rt_sub(g_cur_level_860, (*(P817)rt_nil_check(F->y_2156)).level);
for (rt_int it2169 = lo2167; it2169 <= hi2168; it2169++) {
F->i_2166 = it2169;
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2158 != NULL) && (F->pm_2159 != NULL))) {
if ((((rt_int)(((((P800)rt_nil_check(F->args_2157))->all)).len)) > ((rt_int)0LL))) {
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str(", ", 2)); b_; }));
}
if ((((*(P819)rt_nil_check(F->pm_2159)).mode == (((rt_int)2LL))) || ((*(P819)rt_nil_check(F->pm_2159)).mode == (((rt_int)3LL))))) {
f_lvalue_610(F->a_2158, &F->lv_2162, &F->lt_2160, &F->lc_2163, &F->ro_2164);
if (F->ro_2164) {
f_fail_23((*(P807)rt_nil_check(F->e_768)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check((*(P819)rt_nil_check(F->pm_2159)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_223(F->lt_2160, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P807)rt_nil_check(F->e_768)).line);
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str("&", 1)), (((P800)rt_nil_check(F->lv_2162))->all)), f_actual_bounds_789((*(P819)rt_nil_check(F->pm_2159)).t, F->lt_2160, F->lc_2163)); b_; }));
} else if ((((*(P819)rt_nil_check(F->pm_2159)).mode == (((rt_int)4LL))) && f_is_lvalue_604(F->a_2158))) {
f_lvalue_610(F->a_2158, &F->lv_2162, &F->lt_2160, &F->lc_2163, &F->ro_2164);
f_check_type_223(F->lt_2160, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P807)rt_nil_check(F->e_768)).line);
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str("&", 1)), (((P800)rt_nil_check(F->lv_2162))->all)), f_actual_bounds_789((*(P819)rt_nil_check(F->pm_2159)).t, F->lt_2160, F->lc_2163)); b_; }));
} else if (((*(P819)rt_nil_check(F->pm_2159)).mode == (((rt_int)4LL)))) {
F->v_2170 = rt_str_copy(f_gexpr_in_649(F->a_2158, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P819)rt_nil_check(F->pm_2159)).c, &F->vt_2161));
F->ct_2171 = rt_str_copy(f_ctype_225((*(P819)rt_nil_check(F->pm_2159)).t));
f_check_type_223(F->vt_2161, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P807)rt_nil_check(F->e_768)).line);
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str("({ ", 3)), F->ct_2171), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2171), rt_str(")); *b_ = ", 10)), F->v_2170), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P819)rt_nil_check(F->pm_2159)).t)) {
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2172 = rt_str_copy(f_gexpr_in_649(F->a_2158, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P819)rt_nil_check(F->pm_2159)).c, &F->vt_2161));
f_check_type_223(F->vt_2161, (*(P819)rt_nil_check(F->pm_2159)).t, (*(P807)rt_nil_check(F->e_768)).line);
F->args_2157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P800)rt_nil_check(F->args_2157))->all), F->v_2172); b_; }));
}
F->a_2158 = (*(P807)rt_nil_check(F->a_2158)).next;
F->pm_2159 = (*(P819)rt_nil_check(F->pm_2159)).next;
}
if (((F->a_2158 != NULL) || (F->pm_2159 != NULL))) {
f_fail_23((*(P807)rt_nil_check(F->e_768)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P807)rt_nil_check(F->fn_2154)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P807)rt_nil_check(F->e_768)).b), f_list_len_67(F->a_2158)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_770v = (*(P817)rt_nil_check(F->y_2156)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_2156)).cname))->all), rt_str("(", 1)), (((P800)rt_nil_check(F->args_2157))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_770) = F->t_770v;
  RT_FPOP();
  return F->result_;
}

static P811 f_requires_773(P817 y_772) {
  struct f_requires_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_772 = y_772;
if ((*(P817)rt_nil_check(F->y_772)).reqdone) {
F->result_ = (*(P817)rt_nil_check(F->y_772)).reqs;
goto ret_;
}
(*(P817)rt_nil_check(F->y_772)).reqdone = 1;
if ((((*(P817)rt_nil_check(F->y_772)).decl != NULL) && ((((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_772)).decl)).kind == (((rt_int)45LL))) || ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_772)).decl)).kind == (((rt_int)46LL)))) || ((*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_772)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_2173 = NULL;
F->imp_2173 = (*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_772)).decl)).d;
while ((F->imp_2173 != NULL)) {
f_add_req_776(F->y_772, &(((P800)rt_nil_check((*(P807)rt_nil_check(F->imp_2173)).name))->all));
F->imp_2173 = (*(P807)rt_nil_check(F->imp_2173)).next;
}
f_require_calls_779(F->y_772, (*(P807)rt_nil_check((*(P817)rt_nil_check(F->y_772)).decl)).c);
}
F->result_ = (*(P817)rt_nil_check(F->y_772)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_776(P817 y_774, rstr *name_775) {
  struct f_add_req_776fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_774 = y_774;
F->name_775 = name_775;
F->l_2174 = NULL;
if ((!f_seen_name_370((*(P817)rt_nil_check(F->y_774)).reqs, &(*F->name_775)))) {
{ R812 *cell2175 = rt_alloc(sizeof(R812));
(*cell2175).s = NULL;
(*cell2175).next = NULL;
F->l_2174 = cell2175;
}
(*(P811)rt_nil_check(F->l_2174)).s = f_mk_3(&(*F->name_775));
(*(P811)rt_nil_check(F->l_2174)).next = (*(P817)rt_nil_check(F->y_774)).reqs;
(*(P817)rt_nil_check(F->y_774)).reqs = F->l_2174;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_779(P817 y_777, P807 e_778) {
  struct f_require_calls_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_777 = y_777;
F->e_778 = e_778;
F->x_2176 = NULL;
F->x_2176 = F->e_778;
while ((F->x_2176 != NULL)) {
if (((((((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)45LL))) || ((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)46LL)))) || ((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)50LL)))) || ((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)47LL)))) || ((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)51LL))))) {
F->x_2176 = (*(P807)rt_nil_check(F->x_2176)).next;
} else {
F->callee_2177 = NULL;
if ((((((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)10LL))) || ((*(P807)rt_nil_check(F->x_2176)).kind == (((rt_int)21LL)))) && ((*(P807)rt_nil_check(F->x_2176)).a != NULL)) && ((*(P807)rt_nil_check((*(P807)rt_nil_check(F->x_2176)).a)).kind == (((rt_int)7LL))))) {
F->callee_2177 = (*(P807)rt_nil_check(F->x_2176)).a;
}
if ((F->callee_2177 != NULL)) {
F->z_2178 = NULL;
F->z_2178 = f_lookup_154(&(((P800)rt_nil_check((*(P807)rt_nil_check(F->callee_2177)).name))->all));
if ((((F->z_2178 != NULL) && (F->z_2178 != F->y_777)) && (((*(P817)rt_nil_check(F->z_2178)).kind == (((rt_int)4LL))) || ((*(P817)rt_nil_check(F->z_2178)).kind == (((rt_int)3LL)))))) {
F->l_2179 = NULL;
F->l_2179 = f_requires_773(F->z_2178);
while ((F->l_2179 != NULL)) {
f_add_req_776(F->y_777, &(((P800)rt_nil_check((*(P811)rt_nil_check(F->l_2179)).s))->all));
F->l_2179 = (*(P811)rt_nil_check(F->l_2179)).next;
}
}
}
if (((*(P807)rt_nil_check(F->x_2176)).a != NULL)) {
f_require_calls_779(F->y_777, (*(P807)rt_nil_check(F->x_2176)).a);
}
if (((*(P807)rt_nil_check(F->x_2176)).b != NULL)) {
f_require_calls_779(F->y_777, (*(P807)rt_nil_check(F->x_2176)).b);
}
if (((*(P807)rt_nil_check(F->x_2176)).c != NULL)) {
f_require_calls_779(F->y_777, (*(P807)rt_nil_check(F->x_2176)).c);
}
F->x_2176 = (*(P807)rt_nil_check(F->x_2176)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_782(P807 elems_780, rstr *name_781) {
  struct f_declared_in_782fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_780 = elems_780;
F->name_781 = name_781;
F->e_2180 = NULL;
F->e_2180 = F->elems_780;
while ((F->e_2180 != NULL)) {
if (((((*(P807)rt_nil_check(F->e_2180)).kind == (((rt_int)40LL))) || ((*(P807)rt_nil_check(F->e_2180)).kind == (((rt_int)41LL)))) && rt_str_eq((((P800)rt_nil_check((*(P807)rt_nil_check(F->e_2180)).name))->all), (*F->name_781)))) {
F->result_ = 1;
goto ret_;
}
F->e_2180 = (*(P807)rt_nil_check(F->e_2180)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_785(P817 y_783, rt_int line_784) {
  struct f_check_requires_785fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_783 = y_783;
F->line_784 = line_784;
F->l_2181 = NULL;
F->l_2181 = f_requires_773(F->y_783);
if ((((*(P817)rt_nil_check(F->y_783)).home == NULL) || ((*(P817)rt_nil_check(F->y_783)).level != g_cur_level_860))) {
goto ret_;
}
while ((F->l_2181 != NULL)) {
F->z_2182 = NULL;
F->z_2182 = f_lookup_154(&(((P800)rt_nil_check((*(P811)rt_nil_check(F->l_2181)).s))->all));
if ((f_declared_in_782((*(P817)rt_nil_check(F->y_783)).home, &(((P800)rt_nil_check((*(P811)rt_nil_check(F->l_2181)).s))->all)) && ((F->z_2182 == NULL) || ((*(P817)rt_nil_check(F->z_2182)).depth < (*(P817)rt_nil_check(F->y_783)).depth)))) {
f_fail_23(F->line_784, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check((*(P817)rt_nil_check(F->y_783)).name))->all), rt_str(" requires ", 10)), (((P800)rt_nil_check((*(P811)rt_nil_check(F->l_2181)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2181 = (*(P811)rt_nil_check(F->l_2181)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_789(P813 ft_786, P813 t_787, P809 c_788) {
  struct f_actual_bounds_789fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_786 = ft_786;
F->t_787 = t_787;
F->c_788 = c_788;
if ((!f_scalar_kind_177(F->ft_786))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_787, F->c_788)), rt_str(", ", 2)), f_sub_hi_192(F->t_787, F->c_788));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_796(rstr *name_790, P807 tt_791, P807 args_792, rt_int line_793, int is_stmt_794, P813 *t_795) {
  struct f_builtin_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_790 = name_790;
F->tt_791 = tt_791;
F->args_792 = args_792;
F->line_793 = line_793;
F->is_stmt_794 = is_stmt_794;
F->t_795 = t_795;
F->t_795v = *F->t_795;
F->at_2183 = NULL;
F->n_2184 = f_list_len_67(F->args_792);
F->t_795v = g_ty_void_891;
if (((rt_str_eq((*F->name_790), rt_str("POS", 3)) || rt_str_eq((*F->name_790), rt_str("SUCC", 4))) || rt_str_eq((*F->name_790), rt_str("PRED", 4)))) {
F->a_2185 = rt_str_copy(f_gexpr_641(F->args_792, NULL, &F->at_2183));
if (rt_str_eq((*F->name_790), rt_str("POS", 3))) {
if (((*(P813)rt_nil_check(f_base_of_214(F->at_2183))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2185), rt_str(") + 1)", 6));
goto ret_;
}
F->t_795v = F->at_2183;
if (((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_790), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2185), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2185), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_790), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2185), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P813)rt_nil_check(f_base_of_214(F->at_2183))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2185), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P813)rt_nil_check(f_base_of_214(F->at_2183))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_790), rt_str("SQRT", 4)) || rt_str_eq((*F->name_790), rt_str("SIN", 3))) || rt_str_eq((*F->name_790), rt_str("COS", 3))) || rt_str_eq((*F->name_790), rt_str("EXP", 3))) || rt_str_eq((*F->name_790), rt_str("LN", 2))) || rt_str_eq((*F->name_790), rt_str("FLOOR", 5)))) {
F->a_2186 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_float_888, &F->at_2183));
F->t_795v = g_ty_float_888;
if (rt_str_eq((*F->name_790), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2186), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_790)), rt_str("(", 1)), F->a_2186), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("IFLOAT", 6))) {
F->a_2187 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, g_ty_int_886, &F->at_2183));
F->t_795v = g_ty_float_888;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2187), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("IFIX", 4))) {
F->a_2188 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_float_888, &F->at_2183));
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2188), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("FORMAT", 6))) {
F->a_2189 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_float_888, &F->at_2183));
F->n1_2190 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, g_ty_int_886, &F->at_2183));
F->m1_2191 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_792)).next)).next, g_ty_int_886, &F->at_2183));
F->t_795v = g_ty_string_890;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2189), rt_str(", ", 2)), F->n1_2190), rt_str(", ", 2)), F->m1_2191), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("ABS", 3))) {
F->a_2192 = rt_str_copy(f_gexpr_641(F->args_792, NULL, &F->at_2183));
F->t_795v = F->at_2183;
if (((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2192), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2192), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("CNVT", 4))) {
if ((F->tt_791 == NULL)) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2193 = rt_str_copy(f_gexpr_641(F->args_792, NULL, &F->at_2183));
if ((((*(P807)rt_nil_check(F->tt_791)).kind == (((rt_int)73LL))) && ((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)1LL))))) {
F->t_795v = g_ty_string_890;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2193), rt_str(")", 1));
goto ret_;
} else if ((((*(P807)rt_nil_check(F->tt_791)).kind == (((rt_int)73LL))) && ((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)3LL))))) {
F->t_795v = g_ty_string_890;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2193), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P807)rt_nil_check(F->tt_791)).kind == (((rt_int)73LL))) && ((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)2LL))))) {
F->t_795v = g_ty_string_890;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2193), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P807)rt_nil_check(F->tt_791)).kind == (((rt_int)70LL))) && ((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)5LL))))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2193), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_790), rt_str("WRITELN", 7))) {
if ((F->n_2184 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2194 = NULL;
F->last_2194 = F->args_792;
while (((*(P807)rt_nil_check(F->last_2194)).next != NULL)) {
F->last_2194 = (*(P807)rt_nil_check(F->last_2194)).next;
}
{
F->a_2195 = rt_str_copy(f_gexpr_641(F->last_2194, g_ty_string_890, &F->at_2183));
f_check_type_223(F->at_2183, g_ty_string_890, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2195), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_790), rt_str("WRITE", 5))) {
F->a_2196 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, NULL, &F->at_2183));
if (((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2196), rt_str(")", 1));
goto ret_;
} else if (((*(P813)rt_nil_check(F->at_2183)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2196), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_790), rt_str("READLN", 6))) {
F->lv_2197 = NULL;
F->lc_2198 = NULL;
F->last_2200 = NULL;
F->last_2200 = F->args_792;
while (((*(P807)rt_nil_check(F->last_2200)).next != NULL)) {
F->last_2200 = (*(P807)rt_nil_check(F->last_2200)).next;
}
f_lvalue_610(F->last_2200, &F->lv_2197, &F->at_2183, &F->lc_2198, &F->ro_2199);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P800)rt_nil_check(F->lv_2197))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("SIZELN", 6))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("EOF", 3))) {
F->t_795v = g_ty_bool_887;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_790), rt_str("SYS_OUT", 7)))) {
F->t_795v = g_ty_file_892;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("OPEN", 4)) || rt_str_eq((*F->name_790), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("SEND", 4)) || rt_str_eq((*F->name_790), rt_str("RECEIVE", 7)))) {
F->lv_2201 = NULL;
F->dv_2202 = NULL;
F->lc_2203 = NULL;
F->mt_2205 = NULL;
F->dt_2206 = NULL;
f_lvalue_610(F->args_792, &F->lv_2201, &F->mt_2205, &F->lc_2203, &F->ro_2204);
if (((*(P813)rt_nil_check(F->mt_2205)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_790), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_790), rt_str("RECEIVE", 7))) {
f_lvalue_610((*(P807)rt_nil_check(F->args_792)).next, &F->dv_2202, &F->dt_2206, &F->lc_2203, &F->ro_2204);
f_check_type_223(F->dt_2206, (*(P813)rt_nil_check(F->mt_2205)).elem, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P800)rt_nil_check(F->lv_2201))->all)), rt_str(", &", 3)), (((P800)rt_nil_check(F->dv_2202))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2207 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, (*(P813)rt_nil_check(F->mt_2205)).elem, &F->at_2183));
f_check_type_223(F->at_2183, (*(P813)rt_nil_check(F->mt_2205)).elem, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P813)rt_nil_check(F->mt_2205)).elem)), rt_str(" m_ = ", 6)), F->v_2207), rt_str("; rt_send(", 10)), (((P800)rt_nil_check(F->lv_2201))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_790), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_790), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2208 = NULL;
F->lc_2209 = NULL;
F->mt_2211 = NULL;
f_lvalue_610(F->args_792, &F->lv_2208, &F->mt_2211, &F->lc_2209, &F->ro_2210);
if (((*(P813)rt_nil_check(F->mt_2211)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_790), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_790))), rt_str("(", 1)), (((P800)rt_nil_check(F->lv_2208))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_790), rt_str("COND_RECEIVE", 12)))) {
F->lv_2212 = NULL;
F->dv_2213 = NULL;
F->bv_2214 = NULL;
F->lc_2215 = NULL;
F->mt_2217 = NULL;
F->dt_2218 = NULL;
F->bt_2219 = NULL;
f_lvalue_610(F->args_792, &F->lv_2212, &F->mt_2217, &F->lc_2215, &F->ro_2216);
if (((*(P813)rt_nil_check(F->mt_2217)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_790), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_610((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_792)).next)).next, &F->bv_2214, &F->bt_2219, &F->lc_2215, &F->ro_2216);
f_check_type_223(F->bt_2219, g_ty_bool_887, F->line_793);
if (rt_str_eq((*F->name_790), rt_str("COND_RECEIVE", 12))) {
f_lvalue_610((*(P807)rt_nil_check(F->args_792)).next, &F->dv_2213, &F->dt_2218, &F->lc_2215, &F->ro_2216);
f_check_type_223(F->dt_2218, (*(P813)rt_nil_check(F->mt_2217)).elem, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->bv_2214))->all), rt_str(" = rt_cond_receive(", 19)), (((P800)rt_nil_check(F->lv_2212))->all)), rt_str(", &", 3)), (((P800)rt_nil_check(F->dv_2213))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2220 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, (*(P813)rt_nil_check(F->mt_2217)).elem, &F->at_2183));
f_check_type_223(F->at_2183, (*(P813)rt_nil_check(F->mt_2217)).elem, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P813)rt_nil_check(F->mt_2217)).elem)), rt_str(" m_ = ", 6)), F->v_2220), rt_str("; ", 2)), (((P800)rt_nil_check(F->bv_2214))->all)), rt_str(" = rt_cond_send(", 16)), (((P800)rt_nil_check(F->lv_2212))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_790), rt_str("PRIORITY", 8))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("SET_PRIORITY", 12))) {
F->v_2221 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, g_ty_int_886, &F->at_2183));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_513(F->args_792)), rt_str(", ", 2)), F->v_2221), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("ACTIVE", 6))) {
F->t_795v = g_ty_bool_887;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("DELAY", 5))) {
F->v_2222 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_int_886, &F->at_2183));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2222), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("DELAY_UNTIL", 11))) {
F->v_2223 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_int_886, &F->at_2183));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2223), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("TIME", 4))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_790), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_790), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_790), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_790), rt_str("HOURS", 5)))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_790));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("HALT", 4))) {
F->a_2224 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_int_886, &F->at_2183));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2224), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("ME", 2)) && (F->tt_791 != NULL))) {
F->result_ = f_me_high_759(F->tt_791, F->line_793, &F->t_795v);
goto ret_;
} else if ((rt_str_eq((*F->name_790), rt_str("WAITING", 7)) || rt_str_eq((*F->name_790), rt_str("SUSPENDED", 9)))) {
F->t_795v = g_ty_bool_887;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_790))), rt_str("(", 1)), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_790), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_790), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_790), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_790), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_790), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_790), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_790))), rt_str("(", 1)), f_act_ref_513(F->args_792)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("TASK_START", 10))) {
if ((F->n_2184 != ((rt_int)2LL))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_513(F->args_792)), rt_str(", ", 2)), f_act_ref_513((*(P807)rt_nil_check(F->args_792)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_790), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_790), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_790), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_790), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_790), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_790), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_2184 != ((rt_int)0LL))) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_790), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_790))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_764(F->args_792, &(*F->name_790))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_764(F->args_792, &(*F->name_790))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("COND_LOCK", 9))) {
F->bv_2225 = NULL;
F->bc_2226 = NULL;
F->bt_2228 = NULL;
F->l_2229 = rt_str_copy(f_lock_ref_764(F->args_792, &(*F->name_790)));
f_lvalue_610((*(P807)rt_nil_check(F->args_792)).next, &F->bv_2225, &F->bt_2228, &F->bc_2226, &F->ro_2227);
f_check_type_223(F->bt_2228, g_ty_bool_887, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P800)rt_nil_check(F->bv_2225))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2229), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("EXCESS_LOCKS", 12))) {
F->t_795v = g_ty_int_886;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_764(F->args_792, &(*F->name_790))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("OWNER", 5))) {
F->t_795v = g_ty_act_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_764(F->args_792, &(*F->name_790))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("FREE", 4))) {
F->pv_2230 = NULL;
F->pc_2231 = NULL;
F->pt_2233 = NULL;
f_lvalue_610(F->args_792, &F->pv_2230, &F->pt_2233, &F->pc_2231, &F->ro_2232);
if ((((*(P813)rt_nil_check(F->pt_2233)).kind != (((rt_int)8LL))) || F->ro_2232)) {
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_868 = 1;
f_finish_ptr_404(F->pt_2233);
if (f_suppressed_435(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_315((*(P813)rt_nil_check(F->pt_2233)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_599(F->pt_2233, &(((P800)rt_nil_check(F->pv_2230))->all)); b_; }), (*(P813)rt_nil_check(F->pt_2233)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_315((*(P813)rt_nil_check(F->pt_2233)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str("); if (", 7)), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_599(F->pt_2233, &(((P800)rt_nil_check(F->pv_2230))->all)); b_; }), (*(P813)rt_nil_check(F->pt_2233)).target)), rt_str(" } rt_free((void **)&", 21)), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P800)rt_nil_check(F->pv_2230))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_790), rt_str("LOW_IO", 6))) {
F->dev_2234 = rt_str_copy(f_gexpr_641(F->args_792, g_ty_int_886, &F->at_2183));
F->cmd_2235 = rt_str_copy(f_gexpr_641((*(P807)rt_nil_check(F->args_792)).next, g_ty_int_886, &F->at_2183));
if ((F->n_2184 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2234), rt_str(", ", 2)), F->cmd_2235), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2236 = NULL;
F->dc_2237 = NULL;
F->dt_2239 = NULL;
f_lvalue_610((*(P807)rt_nil_check((*(P807)rt_nil_check(F->args_792)).next)).next, &F->dv_2236, &F->dt_2239, &F->dc_2237, &F->ro_2238);
f_check_type_223(F->dt_2239, g_ty_int_886, F->line_793);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2234), rt_str(", ", 2)), F->cmd_2235), rt_str(", &", 3)), (((P800)rt_nil_check(F->dv_2236))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_793, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_790), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_795) = F->t_795v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_798(P807 units_797) {
  struct f_translate_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_797 = units_797;
F->u_2240 = NULL;
F->u_2240 = F->units_797;
while ((F->u_2240 != NULL)) {
if (((*(P807)rt_nil_check(F->u_2240)).next == NULL)) {
{ R835 *cell2241 = rt_alloc(sizeof(R835));
(*cell2241).d = NULL;
(*cell2241).next = NULL;
g_caps_862 = cell2241;
}
(*(P834)rt_nil_check(g_caps_862)).d = F->u_2240;
f_declare_labels_468((*(P807)rt_nil_check(F->u_2240)).c);
f_declare_body_375((*(P807)rt_nil_check(F->u_2240)).c);
f_capsule_body_475((*(P807)rt_nil_check(F->u_2240)).c);
f_await_tasks_464((*(P807)rt_nil_check(F->u_2240)).c);
{
F->l_2242 = NULL;
F->l_2242 = F->units_797;
while ((F->l_2242 != F->u_2240)) {
{
F->w_2243 = rt_str_copy(f_waits_of_460(F->l_2242));
if ((((rt_int)((F->w_2243).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2243);
}
}
F->l_2242 = (*(P807)rt_nil_check(F->l_2242)).next;
}
}
f_close_fins_451(NULL);
if (g_uses_findyn_870) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_385(F->u_2240);
}
F->u_2240 = (*(P807)rt_nil_check(F->u_2240)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_799(void) {
  struct f_print_program_799fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_371();
if (g_uses_free_868) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_850);
f_print_buffer_31(g_out_frames_866);
f_print_buffer_31(g_out_helpers_851);
f_print_buffer_31(g_out_protos_852);
f_print_buffer_31(g_out_globals_853);
f_print_buffer_31(g_out_funcs_854);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_867);
f_print_buffer_31(g_out_excs_856);
f_print_buffer_31(g_out_init_855);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R837(R837 *d, R837 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R837 cp_R837(R837 s) {
  R837 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R837(R837 a, R837 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R835(R835 *d, R835 s) {
  d->d = s.d;
  d->next = s.next;
}
static R835 cp_R835(R835 s) {
  R835 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R835(R835 a, R835 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R833(R833 *d, R833 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R833 cp_R833(R833 s) {
  R833 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R833(R833 a, R833 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R831(R831 *d, R831 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R831 cp_R831(R831 s) {
  R831 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R831(R831 a, R831 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R829(R829 *d, R829 s) {
  d->t = s.t;
  d->next = s.next;
}
static R829 cp_R829(R829 s) {
  R829 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R829(R829 a, R829 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R827(R827 *d, R827 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R827 cp_R827(R827 s) {
  R827 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R827(R827 a, R827 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R825(R825 *d, R825 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R825 cp_R825(R825 s) {
  R825 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R825(R825 a, R825 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A823(A823 *d, A823 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A823 cp_A823(A823 s) {
  A823 d = s; d.p = rt_alloc(sizeof(P817) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A823(A823 a, A823 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R820(R820 *d, R820 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R820 cp_R820(R820 s) {
  R820 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R820(R820 a, R820 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R818(R818 *d, R818 s) {
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
}
static R818 cp_R818(R818 s) {
  R818 d = s;
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
  return d;
}
static int eq_R818(R818 a, R818 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home);
}
static void as_R816(R816 *d, R816 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R816 cp_R816(R816 s) {
  R816 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R816(R816 a, R816 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R814(R814 *d, R814 s) {
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
static R814 cp_R814(R814 s) {
  R814 d = s;
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
static int eq_R814(R814 a, R814 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R812(R812 *d, R812 s) {
  d->s = s.s;
  d->next = s.next;
}
static R812 cp_R812(R812 s) {
  R812 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R812(R812 a, R812 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R810(R810 *d, R810 s) {
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
static R810 cp_R810(R810 s) {
  R810 d = s;
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
static int eq_R810(R810 a, R810 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R808(R808 *d, R808 s) {
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
static R808 cp_R808(R808 s) {
  R808 d = s;
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
static int eq_R808(R808 a, R808 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A806(A806 *d, A806 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A806 cp_A806(A806 s) {
  A806 d = s; d.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A806(A806 a, A806 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R803(R803 *d, R803 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R803 cp_R803(R803 s) {
  R803 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R803(R803 a, R803 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_838);
  RT_ROOT(g_ntoks_839);
  RT_ROOT(g_tpos_840);
  RT_ROOT(g_src_line_841);
  RT_ROOT(g_pending_prag_842);
  RT_ROOT(g_table_843);
  RT_ROOT(g_genv_844);
  RT_ROOT(g_all_insts_845);
  RT_ROOT(g_depth_846);
  RT_ROOT(g_scope_stack_847);
  RT_ROOT(g_all_types_848);
  RT_ROOT(g_serial_849);
  RT_ROOT(g_out_types_850);
  RT_ROOT(g_out_helpers_851);
  RT_ROOT(g_out_protos_852);
  RT_ROOT(g_out_globals_853);
  RT_ROOT(g_out_funcs_854);
  RT_ROOT(g_out_init_855);
  RT_ROOT(g_out_excs_856);
  RT_ROOT(g_code_857);
  RT_ROOT(g_fields_buf_858);
  RT_ROOT(g_in_func_859);
  RT_ROOT(g_cur_level_860);
  RT_ROOT(g_fctx_861);
  RT_ROOT(g_caps_862);
  RT_ROOT(g_cap_waits_863);
  RT_ROOT(g_psub_864);
  RT_ROOT(g_st_field_865);
  RT_ROOT(g_out_frames_866);
  RT_ROOT(g_out_roots_867);
  RT_ROOT(g_uses_free_868);
  RT_ROOT(g_fins_869);
  RT_ROOT(g_uses_findyn_870);
  RT_ROOT(g_func_sym_871);
  RT_ROOT(g_func_rc_872);
  RT_ROOT(g_cap_ret_873);
  RT_ROOT(g_cap_rflag_874);
  RT_ROOT(g_ret_frames_875);
  RT_ROOT(g_gdepth_876);
  RT_ROOT(g_suppress_877);
  RT_ROOT(g_cons_ctx_878);
  RT_ROOT(g_exits_879);
  RT_ROOT(g_gotos_880);
  RT_ROOT(g_frames_881);
  RT_ROOT(g_handlers_882);
  RT_ROOT(g_cleanups_883);
  RT_ROOT(g_trial_884);
  RT_ROOT(g_mcopies_885);
  RT_ROOT(g_ty_int_886);
  RT_ROOT(g_ty_bool_887);
  RT_ROOT(g_ty_float_888);
  RT_ROOT(g_ty_ascii_889);
  RT_ROOT(g_ty_string_890);
  RT_ROOT(g_ty_void_891);
  RT_ROOT(g_ty_file_892);
  RT_ROOT(g_ty_nil_893);
  RT_ROOT(g_ty_lock_894);
  RT_ROOT(g_ty_latch_895);
  RT_ROOT(g_ty_act_896);
  RT_ROOT(g_file_mode_type_897);
  RT_ROOT(g_no_cons_898);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_838 = NULL;
g_ntoks_839 = ((rt_int)0LL);
g_tpos_840 = ((rt_int)1LL);
g_src_line_841 = ((rt_int)0LL);
g_pending_prag_842 = NULL;
g_table_843 = NULL;
g_genv_844 = NULL;
g_all_insts_845 = NULL;
g_depth_846 = ((rt_int)0LL);
g_scope_stack_847 = NULL;
g_all_types_848 = NULL;
g_serial_849 = ((rt_int)0LL);
g_out_types_850 = NULL;
g_out_helpers_851 = NULL;
g_out_protos_852 = NULL;
g_out_globals_853 = NULL;
g_out_funcs_854 = NULL;
g_out_init_855 = NULL;
g_out_excs_856 = NULL;
g_code_857 = NULL;
g_fields_buf_858 = NULL;
g_in_func_859 = 0;
g_cur_level_860 = ((rt_int)0LL);
g_fctx_861 = NULL;
g_caps_862 = NULL;
g_cap_waits_863 = NULL;
g_psub_864 = NULL;
g_st_field_865 = NULL;
g_out_frames_866 = NULL;
g_out_roots_867 = NULL;
g_uses_free_868 = 0;
g_fins_869 = NULL;
g_uses_findyn_870 = 0;
g_func_sym_871 = NULL;
g_func_rc_872 = NULL;
g_cap_ret_873 = NULL;
g_cap_rflag_874 = NULL;
g_ret_frames_875 = ((rt_int)0LL);
g_gdepth_876 = ((rt_int)0LL);
g_suppress_877 = NULL;
g_cons_ctx_878 = NULL;
g_exits_879 = NULL;
g_gotos_880 = NULL;
g_frames_881 = ((rt_int)0LL);
g_handlers_882 = NULL;
g_cleanups_883 = NULL;
g_trial_884 = ((rt_int)0LL);
g_mcopies_885 = NULL;
g_ty_int_886 = NULL;
g_ty_bool_887 = NULL;
g_ty_float_888 = NULL;
g_ty_ascii_889 = NULL;
g_ty_string_890 = NULL;
g_ty_void_891 = NULL;
g_ty_file_892 = NULL;
g_ty_nil_893 = NULL;
g_ty_lock_894 = NULL;
g_ty_latch_895 = NULL;
g_ty_act_896 = NULL;
g_file_mode_type_897 = NULL;
g_no_cons_898 = NULL;
{ P804 cell2244 = rt_alloc(sizeof *cell2244);
rt_int pv2245 = ((rt_int)1000000LL);
cell2244->p_n = pv2245;
cell2244->all.lo = ((rt_int)1LL); cell2244->all.hi = pv2245;
cell2244->all.lo2 = cell2244->all.hi2 = 1;
cell2244->all.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(cell2244->all)) + 1);
for (rt_int i2246 = 0; i2246 < (RT_CNT(cell2244->all)); i2246++) {
cell2244->all.p[i2246] = NULL;
}
g_toks_838 = cell2244;
}
{ P821 cell2247 = rt_alloc(sizeof *cell2247);
rt_int pv2248 = (((rt_int)4093LL));
cell2247->p_n = pv2248;
cell2247->all.lo = ((rt_int)0LL); cell2247->all.hi = pv2248;
cell2247->all.lo2 = cell2247->all.hi2 = 1;
cell2247->all.p = rt_alloc(sizeof(P817) * (size_t)(RT_CNT(cell2247->all)) + 1);
for (rt_int i2249 = 0; i2249 < (RT_CNT(cell2247->all)); i2249++) {
cell2247->all.p[i2249] = NULL;
}
g_table_843 = cell2247;
}
g_out_types_850 = f_new_buffer_24();
g_out_helpers_851 = f_new_buffer_24();
g_out_protos_852 = f_new_buffer_24();
g_out_globals_853 = f_new_buffer_24();
g_out_funcs_854 = f_new_buffer_24();
g_out_init_855 = f_new_buffer_24();
g_out_excs_856 = f_new_buffer_24();
g_out_frames_866 = f_new_buffer_24();
g_out_roots_867 = f_new_buffer_24();
g_code_857 = g_out_init_855;
g_no_cons_898 = f_new_cons_175();
g_ty_int_886 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_887 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_888 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_890 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_891 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_892 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_893 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_894 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_895 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_896 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2250;
if (RT_TRY(xf2250)) {
f_init_ascii_250();
f_read_source_58();
f_translate_798(f_program_150());
f_print_program_799();
RT_POP(xf2250);
} else {
RT_POP(xf2250);
int x2251 = rt_xcur;
if (0 || x2251 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2251);
}
}
}
  rt_main_done();
  return 0;
}
