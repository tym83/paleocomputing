#include "paleo.h"
#include <math.h>
typedef struct Pc806 *P805;
typedef struct R808 R808;
typedef struct R808 *P807;
struct R808 {  rt_int kind; rt_int line; rt_int ival; P805 s; P805 prags;  };
typedef struct Pc810 *P809;
typedef struct A811 A811;
struct A811 { rt_int lo, hi, lo2, hi2; P807 *p; };
typedef struct R813 R813;
typedef struct R813 *P812;
struct R813 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P805 name; P805 tag; P805 prags; P812 labels; P812 a; P812 b; P812 c; P812 d; P812 e; P812 next;  };
typedef struct R815 R815;
typedef struct R815 *P814;
typedef struct R817 R817;
typedef struct R817 *P816;
struct R817 {  P805 s; P816 next;  };
struct R815 {  P805 lo; P805 hi; P805 lo2; P805 hi2; P805 slen; rt_int mlo; rt_int mhi; int hasm; P812 args; int dyn; rt_int lvl; P805 prec; P816 bnds;  };
typedef struct R819 R819;
typedef struct R819 *P818;
typedef struct R821 R821;
typedef struct R821 *P820;
struct R821 {  P805 name; P818 t; P814 c; P812 st; P820 next;  };
typedef struct R823 R823;
typedef struct R823 *P822;
typedef struct R825 R825;
typedef struct R825 *P824;
struct R825 {  P805 name; rt_int mode; P818 t; P814 c; P805 cfield; P824 next;  };
typedef struct Pc827 *P826;
typedef struct A828 A828;
struct A828 { rt_int lo, hi, lo2, hi2; P822 *p; };
typedef struct R830 R830;
typedef struct R830 *P829;
struct R830 {  rt_int depth; P812 imps; int all_imp; P829 next;  };
typedef struct R832 R832;
typedef struct R832 *P831;
struct R832 {  rt_int kind; rt_int i; P805 s; P818 t;  };
struct R823 {  rt_int kind; P805 name; P818 t; P814 c; P805 access; P805 cname; int ro_flag; rt_int mvalue; int hasmv; P812 st; P812 decl; P824 params; P818 result; rt_int depth; rt_int level; int byref; P822 members; P822 mnext; P812 binds; P822 insts; P826 env; P822 chain; P822 stack; P822 owner; P829 gctx; P831 mv; P816 reqs; int reqdone; P812 home;  };
typedef struct R834 R834;
typedef struct R834 *P833;
struct R834 {  P818 t; P833 next;  };
struct R819 {  rt_int kind; P805 name; P812 lits; P818 elem; P818 idx; P818 idx2; P814 elemcons; P812 elemst; P818 under; P812 tparams; P812 ocap; P820 fields; P818 target; P812 decl; P805 cname; int forward; int defined; int helpers; P822 initp; P822 finalp; P822 tpsyms; P822 gen; P822 gbinds; P818 next; rt_int ndim; P833 idxs;  };
typedef struct R836 R836;
typedef struct R836 *P835;
struct R836 {  P816 head; P816 tail;  };
typedef struct R838 R838;
typedef struct R838 *P837;
struct R838 {  P805 match; P805 label; rt_int depth; P837 next;  };
typedef struct R840 R840;
typedef struct R840 *P839;
struct R840 {  P812 d; P839 next;  };
typedef struct R842 R842;
typedef struct R842 *P841;
struct R842 {  P812 d; P805 w; P841 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P805 result_;
 P805 t_905;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_908;
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
 rstr r_909;
 rt_int i_910;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_914;
 rstr w_915;
 rt_int i_916;
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
 P835 result_;
 P835 b_920;
};
struct f_put_27fr { int dummy;
 P835 b_25;
 rstr *s_26;
 P816 l_922;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P835 b_30;
 P816 l_924;
};
struct f_splice_34fr { int dummy;
 P835 a_32;
 P835 b_33;
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
 P807 t_926;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_928;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_929;
 rt_int k_930;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_934;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_935;
 P805 r_936;
 int more_937;
 rt_int k_938;
 int go_939;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_940;
 rt_int k_941;
 rstr p_942;
 int ok_943;
 int known_944;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_945;
 rt_int j_946;
 rt_int n_947;
 int c_948;
 rstr w_949;
 rt_int k_950;
 rstr w_954;
 rt_int k_955;
 rstr two_959;
};
struct f_read_source_58fr { int dummy;
 rstr line_960;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P812 result_;
 P812 x_961;
};
struct f_append_65fr { int dummy;
 P812 *head_62;
 P812 *tail_63;
 P812 x_64;
};
struct f_list_len_67fr { int dummy;
 P812 l_66;
 rt_int result_;
 rt_int n_963;
 P812 p_964;
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
 P805 result_;
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
 P805 result_;
};
struct f_name_node_90fr { int dummy;
 P812 result_;
 P812 x_965;
};
struct f_id_list_91fr { int dummy;
 P812 result_;
 P812 head_966;
 P812 tail_967;
};
struct f_p_subtype_92fr { int dummy;
 P812 result_;
 rt_int line_968;
 P812 x_969;
 rstr w_970;
 P812 head_971;
 P812 tail_972;
 P812 head_973;
 P812 tail_974;
 int more_975;
 P812 names_976;
 P812 st_977;
 P812 cmp_978;
 P812 head_979;
 P812 tail_980;
 int more_981;
 P812 lit_982;
};
struct f_constraint_list_93fr { int dummy;
 P812 result_;
 P812 head_983;
 P812 tail_984;
 int more_985;
 rt_int line_986;
 P812 lo_987;
 P812 r_988;
};
struct f_actual_params_94fr { int dummy;
 P812 result_;
 P812 head_989;
 P812 tail_990;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P812 result_;
 P812 head_991;
 P812 tail_992;
 int more_993;
};
struct f_binop_102fr { int dummy;
 P805 op_98;
 P812 l_99;
 P812 r_100;
 rt_int line_101;
 P812 result_;
 P812 x_994;
};
struct f_expr_103fr { int dummy;
 P812 result_;
 P812 l_995;
 P805 op_996;
 rt_int line_997;
};
struct f_expr_and_104fr { int dummy;
 P812 result_;
 P812 l_998;
 rt_int line_999;
};
struct f_expr_not_105fr { int dummy;
 P812 result_;
 P812 x_1000;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P812 result_;
 P812 l_1001;
 P805 op_1002;
 rt_int line_1003;
};
struct f_expr_add_109fr { int dummy;
 P812 result_;
 P812 l_1004;
 P805 op_1005;
 rt_int line_1006;
};
struct f_expr_mul_110fr { int dummy;
 P812 result_;
 P812 l_1007;
 P805 op_1008;
 rt_int line_1009;
};
struct f_expr_pow_111fr { int dummy;
 P812 result_;
 P812 l_1010;
 rt_int line_1011;
};
struct f_expr_prefix_112fr { int dummy;
 P812 result_;
 P812 x_1012;
};
struct f_postfix_113fr { int dummy;
 P812 result_;
 P812 p_1013;
 rt_int line_1014;
 P812 x_1015;
 P812 head_1016;
 P812 tail_1017;
 int more_1018;
 P812 lo_1019;
 P812 r_1020;
 P812 x_1021;
 P812 x_1022;
 P812 x_1023;
};
struct f_primary_114fr { int dummy;
 P812 result_;
 rt_int line_1024;
 P812 x_1025;
 rt_int k_1026;
 rstr w_1027;
 P812 head_1028;
 P812 tail_1029;
 int more_1030;
};
struct f_constructor_item_115fr { int dummy;
 P812 result_;
 rt_int line_1031;
 P812 it_1032;
 P812 first_1033;
 P812 keys_1034;
 P812 ktail_1035;
 P812 lab_1036;
 rt_int save_1037;
 P812 more_1038;
 P812 tail2_1039;
 int ok_1040;
 int go_1041;
 P812 l2_1042;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P812 result_;
 P812 head_1043;
 P812 tail_1044;
 int stmts_1045;
 P812 after_1046;
 P812 x_1047;
};
struct f_body_element_118fr { int dummy;
 P812 result_;
 P812 x_1048;
 P805 pr_1049;
 P812 p_1050;
};
struct f_declaration_119fr { int dummy;
 P812 result_;
 rt_int line_1051;
 P812 head_1052;
 P812 tail_1053;
 P812 names_1054;
 P812 x_1055;
};
struct f_object_decl_120fr { int dummy;
 P812 result_;
 rt_int line_1056;
 int is_var_1057;
 P812 names_1058;
 P812 st_1059;
 P812 init_1060;
 P812 loc_1061;
 rt_int loc_kind_1062;
 P812 head_1063;
 P812 tail_1064;
 P812 x_1065;
};
struct f_abbrev_decl_121fr { int dummy;
 P812 result_;
 P812 x_1066;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1067;
};
struct f_type_decl_123fr { int dummy;
 P812 result_;
 rt_int line_1068;
 P805 name_1069;
 P812 params_1070;
 P812 x_1071;
 P812 tts_1072;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P812 result_;
 P812 head_1073;
 P812 tail_1074;
 int more_1075;
 rt_int mode_1076;
 P812 names_1077;
 P812 ntail_1078;
 P812 st_1079;
 P812 p_1080;
};
struct f_imports_list_128fr { int dummy;
 P812 owner_127;
 int result_;
 P812 head_1081;
 P812 tail_1082;
 int more_1083;
 int ro_1084;
 P812 x_1085;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P805 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P812 result_;
 rt_int line_1086;
 P812 x_1087;
 int is_abn_1088;
 int is_func_1089;
 int dummy_1090;
};
struct f_capsule_decl_133fr { int dummy;
 P812 result_;
 P812 x_1091;
 int dummy_1092;
 P812 head_1093;
 P812 tail_1094;
 int more_1095;
 P812 n_1096;
};
struct f_formal_tt_134fr { int dummy;
 P812 result_;
 P812 head_1097;
 P812 tail_1098;
 int more_1099;
};
struct f_generic_decl_135fr { int dummy;
 P812 result_;
 P812 x_1100;
 P812 head_1101;
 P812 tail_1102;
 int more_1103;
 P812 names_1104;
 rt_int kind_1105;
 P812 st_1106;
 P812 p_1107;
 P805 nm_1108;
 P812 st_1109;
};
struct f_task_decl_136fr { int dummy;
 P812 result_;
 P812 x_1110;
 int dummy_1111;
};
struct f_expose_decl_137fr { int dummy;
 P812 result_;
 P812 x_1112;
 P812 head_1113;
 P812 tail_1114;
 int more_1115;
 P812 n_1116;
 P812 head_1117;
 P812 tail_1118;
 int more_1119;
 P812 n_1120;
 P812 tgt_1121;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P812 result_;
 P812 labels_1122;
 P812 ltail_1123;
 P805 match_1124;
 P812 s_1125;
};
struct f_unlabeled_statement_141fr { int dummy;
 P812 result_;
 rt_int line_1126;
 P812 x_1127;
 P812 head_1128;
 P812 tail_1129;
 P812 invs_1130;
 P812 itail_1131;
 int more_1132;
 P812 target_1133;
};
struct f_arm_145fr { int dummy;
 P812 cond_142;
 P812 b_143;
 rt_int line_144;
 P812 result_;
 P812 x_1134;
};
struct f_if_stmt_146fr { int dummy;
 P812 result_;
 P812 x_1135;
 P812 head_1136;
 P812 tail_1137;
 P812 cond_1138;
 int go_1139;
};
struct f_case_stmt_147fr { int dummy;
 P812 result_;
 P812 x_1140;
 P812 head_1141;
 P812 tail_1142;
 P812 labs_1143;
 P812 ltail_1144;
 int more_1145;
 P812 l_1146;
};
struct f_repeat_stmt_148fr { int dummy;
 P812 result_;
 P812 x_1147;
};
struct f_guard_stmt_149fr { int dummy;
 P812 result_;
 P812 x_1148;
 P812 head_1149;
 P812 tail_1150;
 P812 h_1151;
};
struct f_program_150fr { int dummy;
 P812 result_;
 P812 head_1152;
 P812 tail_1153;
 P805 pr_1154;
 P812 u_1155;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1156;
 rt_int i_1157;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P822 result_;
 P822 y_1161;
};
struct f_lookup_decl_156fr { int dummy;
 P812 d_155;
 P822 result_;
 P822 y_1162;
};
struct f_define_159fr { int dummy;
 P822 y_157;
 rt_int line_158;
 rt_int h_1163;
 P822 z_1164;
};
struct f_overloadable_161fr { int dummy;
 P822 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P812 a_162;
 P812 b_163;
 int result_;
 P812 x_1165;
 P812 y_1166;
};
struct f_same_signature_167fr { int dummy;
 P824 a_165;
 P824 b_166;
 int result_;
 P824 x_1167;
 P824 y_1168;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P805 name_171;
 P822 result_;
 P822 y_1169;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P818 result_;
 P818 t_1171;
};
struct f_new_cons_175fr { int dummy;
 P814 result_;
 P814 c_1173;
};
struct f_scalar_kind_177fr { int dummy;
 P818 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P818 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P814 c_180;
 rstr *b_181;
 rstr result_;
 P805 p_1175;
 rt_int i_1176;
};
struct f_clo_184fr { int dummy;
 P814 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P814 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P818 t_187;
 P814 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P818 t_190;
 P814 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1180;
 rstr f_1181;
};
struct f_copy_cons_197fr { int dummy;
 P814 c_196;
 P814 result_;
 P814 r_1182;
};
struct f_freeze_200fr { int dummy;
 P814 c_198;
 P818 t_199;
 P814 result_;
 P814 r_1184;
 P805 saved_field_1185;
 rstr ct_1186;
 rstr la_1187;
 rstr lf_1188;
 rstr ha_1189;
 rstr hf_1190;
};
struct f_checked_204fr { int dummy;
 P818 t_201;
 P814 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P812 a_205;
 P812 b_206;
 int result_;
 P812 x_1191;
 P812 y_1192;
};
struct f_str_elem_209fr { int dummy;
 P818 t_208;
 P818 result_;
};
struct f_same_212fr { int dummy;
 P818 a_210;
 P818 b_211;
 int result_;
 P833 x_1193;
 P833 y_1194;
 P820 f_1195;
 P820 g_1196;
};
struct f_base_of_214fr { int dummy;
 P818 t_213;
 P818 result_;
};
struct f_base_cons_217fr { int dummy;
 P818 t_215;
 P814 c_216;
 P814 result_;
};
struct f_kind_name_219fr { int dummy;
 P818 t_218;
 rstr result_;
};
struct f_check_type_223fr { int dummy;
 P818 got_220;
 P818 want_221;
 rt_int line_222;
};
struct f_ctype_225fr { int dummy;
 P818 t_224;
 rstr result_;
};
struct f_struct_body_227fr { int dummy;
 P818 t_226;
 rstr result_;
};
struct f_field_decls_229fr { int dummy;
 P818 t_228;
 rstr result_;
 P820 f_1199;
 P805 s_1200;
};
struct f_declare_ctype_231fr { int dummy;
 P818 t_230;
 P818 u_1201;
 P812 p_1202;
 P805 fs_1203;
 rstr sn_1204;
 P814 pc_1205;
 P818 target_1206;
 P812 p_1207;
 P805 fs_1208;
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
 P818 t_236;
 rstr result_;
 P805 r_1209;
 rt_int k_1210;
};
struct f_acnt_240fr { int dummy;
 P818 t_238;
 rstr *base_239;
 rstr result_;
 P805 r_1214;
 rt_int k_1215;
};
struct f_cons_lo_243fr { int dummy;
 P814 c_241;
 rt_int k_242;
 P805 result_;
 P816 l_1219;
 rt_int i_1220;
};
struct f_cons_hi_246fr { int dummy;
 P814 c_244;
 rt_int k_245;
 P805 result_;
 P816 l_1224;
 rt_int i_1225;
};
struct f_idx_type_249fr { int dummy;
 P818 t_247;
 rt_int k_248;
 P818 result_;
 P833 l_1229;
 rt_int i_1230;
};
struct f_init_ascii_250fr { int dummy;
 P812 head_1234;
 P812 tail_1235;
 rt_int start_1236;
 rt_int i_1237;
 P812 lit_1241;
 P812 h2_1242;
 P812 t2_1243;
 P812 l1_1244;
 P812 l2_1245;
 P812 l3_1246;
};
struct f_lit_index_253fr { int dummy;
 P812 lits_251;
 rstr *name_252;
 rt_int result_;
 rt_int i_1247;
 P812 l_1248;
};
struct f_resolve_subtype_256fr { int dummy;
 P812 st_254;
 P814 *c_255;
 P814 c_255v;
 P818 result_;
 P818 t_1249;
 int ok_1250;
 P818 dummy_1251;
 P818 et_1253;
 P814 ec_1254;
 P818 et_1255;
 P812 ix_1256;
 rt_int k_1257;
 P833 tail_1258;
 P816 btail_1259;
 P814 ic_1260;
 P818 it_1261;
 P805 lo_1262;
 P805 hi_1263;
 P833 tl_1264;
 P816 l1_1266;
 P816 l2_1267;
 P814 ec_1270;
 P812 comp_1271;
 P820 tail_1272;
 P814 cc_1273;
 P820 f_1274;
 P812 lits_1276;
 P812 ltail_1277;
 P820 f_1278;
 P812 l_1279;
 P812 gt_1280;
 P814 ec_1281;
 P805 base_1282;
};
struct f_float_lit_258fr { int dummy;
 P812 e_257;
 int result_;
};
struct f_tag_constraint_262fr { int dummy;
 P818 t_259;
 P812 e_260;
 P814 c_261;
 P818 dummy_1283;
};
struct f_named_subtype_265fr { int dummy;
 P812 st_263;
 P814 *c_264;
 P814 c_264v;
 P818 result_;
 P818 t_1284;
 P822 y_1285;
 rstr name_1286;
};
struct f_invoke_abbrev_269fr { int dummy;
 P822 y_266;
 P812 st_267;
 P814 *c_268;
 P814 c_268v;
 P818 result_;
 P812 p_1287;
 P812 a_1288;
 P818 t_1289;
 P822 z_1290;
 P814 pc_1291;
 P818 at_1292;
 int ok_1293;
};
struct f_apply_constraint_274fr { int dummy;
 P818 t_270;
 P812 args_271;
 P814 c_272;
 rt_int line_273;
 P818 dummy_1294;
 int ok_1295;
};
struct f_value_subtype_278fr { int dummy;
 P812 e_275;
 P814 *c_276;
 P814 c_276v;
 P805 *base_277;
 P805 base_277v;
 P818 result_;
 P818 t_1296;
 P814 c0_1297;
 int ro_1298;
 rt_int k_1299;
 rstr lo_1303;
 rstr hi_1304;
 P816 l1_1305;
 P816 l2_1306;
 P812 p_1309;
 P812 head_1310;
 P812 tail_1311;
 P812 sel_1312;
};
struct f_reverse_pairs_280fr { int dummy;
 P816 l_279;
 P816 result_;
 P816 r_1313;
 P816 p_1314;
 P816 a_1315;
 P816 b_1316;
};
struct f_inquiry_283fr { int dummy;
 P812 st_281;
 P814 *c_282;
 P814 c_282v;
 P818 result_;
 P805 base_1317;
 P818 t_1318;
 rstr name_1319;
 P812 sub_1320;
 P814 c2_1321;
 rt_int k_1322;
 int ok_1323;
 P814 ac_1324;
};
struct f_as_subtype_285fr { int dummy;
 P812 e_284;
 P812 result_;
 P812 st_1325;
 rstr name_1326;
 P822 y_1327;
};
struct f_tt_subtype_290fr { int dummy;
 P805 name_286;
 P812 tt_287;
 P812 args_288;
 rt_int line_289;
 P812 result_;
 P812 st_1328;
};
struct f_type_name_292fr { int dummy;
 rstr *name_291;
 int result_;
 P822 y_1329;
};
struct f_empty_set_294fr { int dummy;
 P818 t_293;
 rstr result_;
};
struct f_opened_296fr { int dummy;
 P818 t_295;
 int result_;
 P839 c_1330;
};
struct f_replace_all_300fr { int dummy;
 rstr *s_297;
 rstr *pat_298;
 rstr *r_299;
 rstr result_;
 rt_int i_1331;
};
struct f_subst_302fr { int dummy;
 rstr *s_301;
 rstr result_;
 P816 l_1332;
 P805 r_1333;
};
struct f_new_type_306fr { int dummy;
 P822 y_303;
 P812 st_304;
 P814 *c_305;
 P814 c_305v;
 P818 result_;
 P812 d_1334;
 P812 p_1335;
 P814 uc_1336;
 P822 z_1337;
 P814 zc_1338;
};
struct f_init_storage_310fr { int dummy;
 rstr *lval_307;
 P818 t_308;
 P814 c_309;
};
struct f_init_call_313fr { int dummy;
 P822 y_311;
 rstr *lval_312;
 rstr result_;
 P805 link_1339;
 rt_int i_1340;
};
struct f_needs_fin_315fr { int dummy;
 P818 t_314;
 int result_;
 P820 f_1344;
};
struct f_fin_code_318fr { int dummy;
 rstr *lval_316;
 P818 t_317;
 rstr result_;
 P805 r_1345;
 rstr i_1346;
 P820 f_1347;
 P820 f_1348;
 rt_int i_1349;
};
struct f_tparam_type_321fr { int dummy;
 P818 t_319;
 rstr *name_320;
 P818 result_;
 P822 z_1350;
};
struct f_make_storage_325fr { int dummy;
 rstr *lval_322;
 P818 t_323;
 P814 c_324;
 P812 p_1351;
 P812 a_1352;
 P814 uc_1353;
 P818 ut_1354;
 P818 at_1355;
 P818 pt_1356;
 rstr v_1357;
 P816 saved_1358;
 P816 l1_1359;
 P816 l2_1360;
 rt_int k_1363;
 rstr i_1367;
 P820 f_1368;
 P820 f_1369;
 rt_int i_1370;
};
struct f_uninit_value_327fr { int dummy;
 P818 t_326;
 rstr result_;
};
struct f_init_chk_330fr { int dummy;
 P818 t_328;
 rstr *v_329;
 rstr result_;
 P818 b_1374;
};
struct f_manifest_333fr { int dummy;
 P812 e_331;
 int *ok_332;
 int ok_332v;
 rt_int result_;
 P831 v_1375;
};
struct f_mk_mval_336fr { int dummy;
 rt_int kind_334;
 rt_int i_335;
 P831 result_;
 P831 v_1376;
};
struct f_ipow_339fr { int dummy;
 rt_int a_337;
 rt_int b_338;
 rt_int result_;
 rt_int r_1378;
 rt_int i_1379;
};
struct f_meval_342fr { int dummy;
 P812 e_340;
 int *ok_341;
 int ok_341v;
 P831 result_;
 P831 a_1383;
 P831 b_1384;
 int ok2_1385;
 P805 op_1386;
 P822 y_1387;
 P831 r_1388;
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
 P831 v_347;
 rstr result_;
};
struct f_ascii_char_350fr { int dummy;
 rt_int i_349;
 int result_;
 rstr printable_1389;
};
struct f_user_defined_352fr { int dummy;
 rstr *op_351;
 int result_;
 P822 y_1390;
};
struct f_mcopy_354fr { int dummy;
 P818 t_353;
 rstr result_;
 rstr ct_1391;
 rstr name_1392;
 P816 l_1393;
};
struct f_composite_356fr { int dummy;
 P818 t_355;
 int result_;
};
struct f_assign_code_361fr { int dummy;
 rstr *lval_357;
 P818 t_358;
 rstr *v_359;
 P814 c_360;
 rstr result_;
};
struct f_copy_code_364fr { int dummy;
 P818 t_362;
 rstr *v_363;
 rstr result_;
};
struct f_eq_code_368fr { int dummy;
 P818 t_365;
 rstr *a_366;
 rstr *b_367;
 rstr result_;
};
struct f_elem_assign_372fr { int dummy;
 rstr *lval_369;
 P818 t_370;
 rstr *v_371;
 rstr result_;
};
struct f_seen_name_375fr { int dummy;
 P816 l_373;
 rstr *s_374;
 int result_;
 P816 p_1395;
};
struct f_emit_helpers_376fr { int dummy;
 P818 order_1396;
 P818 t_1397;
 P816 done_1398;
 P816 l_1399;
 rstr c_1400;
};
struct f_helper_bodies_378fr { int dummy;
 P818 t_377;
 rstr c_1402;
 P835 b_1403;
 P818 e_1404;
 P805 sizes_1405;
 P805 bounds_1406;
 rt_int k_1407;
 rstr l_1411;
 rstr h_1412;
 P816 saved_1413;
 P812 p_1414;
 P816 l1_1415;
 P816 l2_1416;
 P820 f_1419;
 rt_int i_1420;
 P805 cases_as_1421;
 P805 cases_cp_1422;
 P805 cases_eq_1423;
 rstr fn_1424;
 P820 f_1425;
 P805 conds_1426;
 rstr fn_1427;
 rstr fn_1428;
};
struct f_declare_body_380fr { int dummy;
 P812 elems_379;
 P812 e_1429;
 P822 y_1430;
 P822 y_1431;
 P822 y_1432;
 P818 t_1433;
 P822 y_1434;
 P822 y_1435;
 P822 g_1436;
 P826 snap_1437;
 rt_int i_1441;
 P822 g_1445;
 P822 y_1446;
};
struct f_manifest_const_382fr { int dummy;
 P812 d_381;
 int ok_1447;
 P831 v_1448;
 P822 y_1449;
 P818 t_1450;
 P805 ctext_1451;
 P835 saved_1452;
};
struct f_exported_386fr { int dummy;
 P812 d_383;
 rstr *name_384;
 int *ro_385;
 int ro_385v;
 int result_;
 P812 p_1455;
};
struct f_copy_sym_388fr { int dummy;
 P822 y_387;
 P822 result_;
 P822 z_1456;
};
struct f_gen_capsule_390fr { int dummy;
 P812 d_389;
 P822 y_1458;
 P805 saved_1459;
};
struct f_capsule_params_394fr { int dummy;
 P812 d_391;
 P812 args_392;
 rt_int line_393;
 P812 p_1460;
 P812 a_1461;
 P818 t_1462;
 P818 vt_1463;
 P814 c_1464;
 P805 lv_1465;
 P814 lc_1466;
 int ro_1467;
 P822 y_1468;
 rstr f_1469;
 rstr g_1470;
 P822 y_1471;
 rstr v_1472;
 rstr access_1473;
};
struct f_elaborate_capsule_399fr { int dummy;
 P812 d_395;
 P822 y_396;
 P812 args_397;
 P812 owner_398;
 P839 cr_1474;
 P829 ctx_1475;
 P837 saved_gotos_1476;
 P822 m_1477;
 P812 p_1478;
 int ro_1479;
 P841 w_1482;
 P822 z_1484;
};
struct f_exports_op_402fr { int dummy;
 P812 d_400;
 rstr *op_401;
 int result_;
 P812 p_1485;
};
struct f_renamed_405fr { int dummy;
 P812 d_403;
 P822 z_404;
 P805 result_;
 P812 r_1486;
};
struct f_gen_expose_407fr { int dummy;
 P812 d_406;
 P822 y_1487;
 P822 m_1488;
 P812 p_1489;
 P812 r_1490;
 P822 inst_1491;
 int found_1492;
 P822 z_1493;
 int found_1494;
 P822 z_1495;
};
struct f_finish_ptr_409fr { int dummy;
 P818 t_408;
 P812 d_1496;
 P812 p_1497;
 P814 c_1498;
 rstr dummy_1499;
 rt_int pass_1500;
 P822 y_1504;
 P814 pc_1505;
};
struct f_ptr_args_411fr { int dummy;
 P814 c_410;
 P812 result_;
};
struct f_bind_ptr_params_416fr { int dummy;
 P812 formals_412;
 P812 actuals_413;
 rstr *cell_414;
 rt_int line_415;
 P812 p_1506;
 P812 a_1507;
 P818 vt_1508;
 P814 pc_1509;
 P822 y_1510;
 rstr v_1511;
 rstr pv_1512;
};
struct f_alloc_cell_421fr { int dummy;
 P812 s_417;
 rstr *lv_418;
 P818 t_419;
 P814 c_420;
 P812 d_1513;
 P814 tc_1514;
 P818 vt_1515;
 rstr pt_1516;
 rstr cell_1517;
 rstr fn_1518;
 rstr v_1519;
};
struct f_freeze_args_425fr { int dummy;
 P814 c_422;
 P818 t_423;
 rt_int line_424;
 P814 result_;
 P814 r_1520;
 P812 p_1521;
 P812 a_1522;
 P812 head_1523;
 P812 tail_1524;
 P805 saved_1525;
 P814 pc_1526;
 P818 vt_1527;
 P818 pt_1528;
 rstr nm_1529;
 P822 y_1530;
 P812 n_1531;
 rstr v_1532;
 rstr access_1533;
};
struct f_ptr_subtype_check_429fr { int dummy;
 P818 t_426;
 P814 c_427;
 P812 src_428;
 P805 lv_1534;
 P818 st_1535;
 P814 sc_1536;
 int ro_1537;
 P805 cond_1538;
 P812 a_1539;
 P812 b_1540;
 P818 at_1541;
 P818 bt_1542;
 rstr x_1543;
 rstr y_1544;
};
struct f_declare_subprogram_431fr { int dummy;
 P812 d_430;
};
struct f_build_subprogram_433fr { int dummy;
 P812 d_432;
 P822 result_;
 P822 y_1545;
 P812 p_1546;
 P824 tail_1547;
 P824 pm_1548;
 P814 rc_1550;
 P824 pm_1551;
 P835 saved_1552;
 P822 z_1553;
};
struct f_has_pragmat_436fr { int dummy;
 P805 pr_434;
 rstr *p_435;
 int result_;
 rt_int i_1554;
};
struct f_suppressing_438fr { int dummy;
 P805 pr_437;
 P805 result_;
 P805 r_1558;
 rt_int i_1559;
 rt_int j_1560;
 rt_int k_1561;
};
struct f_suppressed_440fr { int dummy;
 rstr *x_439;
 int result_;
 rstr w_1562;
 rt_int i_1563;
};
struct f_element_442fr { int dummy;
 P812 e_441;
 P805 saved_1567;
};
struct f_element1_444fr { int dummy;
 P812 e_443;
 rt_int k_1568;
 P822 g_1569;
 rt_int i_1573;
 P818 t_1577;
 rstr c_1578;
};
struct f_storage_447fr { int dummy;
 rstr *name_445;
 P818 t_446;
 rstr result_;
 rstr g_1579;
 rstr f_1580;
};
struct f_bind_450fr { int dummy;
 P822 y_448;
 rstr *access_449;
};
struct f_var_decl_452fr { int dummy;
 P812 d_451;
 P814 c_1581;
 P818 t_1582;
 P822 y_1583;
 rstr access_1584;
 P818 it_1585;
 rstr n_1586;
 P818 vt_1587;
 rstr v_1588;
};
struct f_open_fin_454fr { int dummy;
 rstr *fc_453;
 rstr f_1589;
 P816 l_1590;
};
struct f_close_fins_456fr { int dummy;
 P816 saved_455;
};
struct f_const_decl_458fr { int dummy;
 P812 d_457;
 P814 c_1592;
 P818 t_1593;
 P818 vt_1594;
 P822 y_1595;
 int ok_1596;
 rstr v_1597;
 rstr access_1598;
};
struct f_subprogram_460fr { int dummy;
 P812 d_459;
};
struct f_gen_subprogram_463fr { int dummy;
 P812 d_461;
 P822 y_462;
 P835 saved_code_1599;
 P835 saved_fields_1600;
 int saved_in_1601;
 P822 saved_sym_1602;
 P837 saved_exits_1603;
 P837 saved_gotos_1604;
 rt_int saved_frames_1605;
 P805 args_1606;
 P824 pm_1607;
 P816 saved_handlers_1608;
 P816 saved_cleanups_1609;
 P829 ctx_1610;
 P805 head_1611;
 P805 frame_1612;
 P805 parent_1613;
 P805 copy_back_1614;
 P805 pfin_1615;
 P816 saved_fins_1616;
 P814 saved_rc_1617;
 P805 saved_ret_1618;
 P805 saved_rflag_1619;
 P812 pn_1620;
 P805 nonrec_end_1621;
 int has_pfin_1622;
 rstr ct_1624;
 rstr f_1625;
 P822 p_1626;
 P814 pc_1627;
 P814 ac_1628;
 P814 fc_1629;
 P818 ft_1630;
 rstr bt_1631;
 P814 rc_1632;
 P818 rt_1633;
 rstr g_1634;
 P805 leave_1635;
};
struct f_waits_of_465fr { int dummy;
 P812 d_464;
 rstr result_;
 P841 w_1636;
};
struct f_task_waits_467fr { int dummy;
 P812 elems_466;
 rstr result_;
 P812 e_1637;
 P805 r_1638;
};
struct f_await_tasks_469fr { int dummy;
 P812 elems_468;
 rstr w_1639;
};
struct f_capsule_elements_471fr { int dummy;
 P812 elems_470;
 P812 e_1640;
};
struct f_declare_labels_473fr { int dummy;
 P812 elems_472;
 P812 e_1641;
 P812 l_1642;
 P837 x_1643;
};
struct f_start_labels_474fr { int dummy;
 P837 x_1645;
};
struct f_goto_label_476fr { int dummy;
 rstr *name_475;
 P837 result_;
 P837 x_1646;
};
struct f_has_return_478fr { int dummy;
 P812 e_477;
 int result_;
 P812 x_1647;
};
struct f_capsule_body_480fr { int dummy;
 P812 elems_479;
 P805 saved_ret_1648;
 P805 saved_flag_1649;
 rt_int saved_frames_1650;
 P812 e_1651;
 int stmt_1652;
};
struct f_body_elements_482fr { int dummy;
 P812 elems_481;
};
struct f_gen_body_484fr { int dummy;
 P812 elems_483;
 P816 saved_1653;
 P837 saved_gotos_1654;
};
struct f_pop_frames_486fr { int dummy;
 rt_int upto_485;
 rt_int i_1655;
 P816 c_1656;
};
struct f_push_cleanup_488fr { int dummy;
 rstr *s_487;
 P816 c_1657;
};
struct f_pop_cleanup_489fr { int dummy;
};
struct f_gen_statement_491fr { int dummy;
 P812 s_490;
 P805 label_1659;
 P812 gl_1660;
 P837 x_1661;
 P837 x_1664;
};
struct f_st_assign_493fr { int dummy;
 P812 s_492;
 P805 lv_1665;
 P818 t_1666;
 P818 vt_1667;
 P814 c_1668;
 int ro_1669;
 rstr lo_1670;
 rstr hi_1671;
 rstr v_1672;
 rstr lo_1673;
 rstr hi_1674;
 rstr v_1675;
 rstr v_1676;
};
struct f_st_call_495fr { int dummy;
 P812 s_494;
 P812 c_1677;
 P818 t_1678;
 P812 x_1679;
};
struct f_st_if_497fr { int dummy;
 P812 s_496;
 P812 a_1680;
 int first_1681;
 P818 t_1682;
 int taken_1683;
 int ok_1684;
 P831 mv_1685;
 rstr c_1686;
};
struct f_st_case_499fr { int dummy;
 P812 s_498;
 P818 st_1687;
 P818 vt_1688;
 int first_1689;
 P812 a_1690;
 rstr sel_1691;
 rstr tmp_1692;
 P812 lab_1693;
 P805 conds_1694;
 rstr v_1695;
 rstr lo_1696;
 rstr hi_1697;
};
struct f_st_repeat_501fr { int dummy;
 P812 s_500;
 P818 t_1698;
 P814 c_1699;
 rstr cond_1700;
 rstr access_1701;
 rstr lov_1702;
 rstr hiv_1703;
 rstr it_1704;
 P822 y_1705;
};
struct f_st_exit_503fr { int dummy;
 P812 s_502;
 P837 x_1706;
};
struct f_st_return_505fr { int dummy;
 P812 s_504;
 P818 vt_1707;
 rstr v_1708;
};
struct f_result_checked_509fr { int dummy;
 P818 t_506;
 P814 c_507;
 rstr *v_508;
 rstr result_;
};
struct f_exc_id_512fr { int dummy;
 rstr *name_510;
 rt_int line_511;
 rstr result_;
 P822 y_1709;
};
struct f_st_guard_514fr { int dummy;
 P812 s_513;
 P812 h_1710;
 int first_1711;
 P816 hv_1712;
 rstr f_1713;
 rstr x_1714;
 P812 n_1716;
 P805 conds_1717;
};
struct f_st_alloc_516fr { int dummy;
 P812 s_515;
 P805 lv_1718;
 P818 t_1719;
 P818 target_1720;
 P818 vt_1721;
 P814 c_1722;
 P814 tc_1723;
 int ro_1724;
 P812 d_1725;
 P812 p_1726;
 P812 a_1727;
 rstr tcn_1728;
 rstr cell_1729;
 rstr fn_1730;
 rstr v_1731;
};
struct f_act_ref_518fr { int dummy;
 P812 e_517;
 rstr result_;
 P805 lv_1732;
 P818 t_1733;
 P814 c_1734;
 int ro_1735;
 rstr v_1736;
};
struct f_st_create_520fr { int dummy;
 P812 s_519;
 P822 y_1737;
 P824 pm_1738;
 P812 a_1739;
 P805 lv_1740;
 P818 lt_1741;
 P818 vt_1742;
 P814 lc_1743;
 int ro_1744;
 P818 at_1745;
 P814 ac_1746;
 int aro_1747;
 P805 act_1748;
 rstr nf_1749;
 P805 link_1750;
 rt_int i_1751;
 rstr v_1755;
};
struct f_hidden_var_524fr { int dummy;
 rstr *name_521;
 P818 t_522;
 rstr *place_523;
 P822 y_1756;
};
struct f_user_create_530fr { int dummy;
 P812 s_525;
 P822 y_526;
 rstr *uv_527;
 P818 ut_528;
 rstr *nf_529;
 P818 t_1757;
 P835 saved_1758;
 P835 hook_1759;
 P812 un_1760;
 rstr hn_1761;
 rstr aa_1762;
 rstr uname_1763;
 rstr aname_1764;
 P812 start_1765;
 P812 an_1766;
};
struct f_wait_alt_535fr { int dummy;
 P812 inv_531;
 rstr *arr_532;
 rt_int i_533;
 int mixed_534;
 rstr result_;
 P805 lv_1767;
 P818 t_1768;
 P818 vt_1769;
 P814 c_1770;
 int ro_1771;
 P812 fn_1772;
 P812 args_1773;
 rstr slot_1774;
 P805 dv_1775;
 P818 dt_1776;
 rstr tmp_1777;
 rstr v_1778;
 rstr v_1779;
};
struct f_builtin_wait_537fr { int dummy;
 P812 inv_536;
 int result_;
 P805 lv_1780;
 P818 t_1781;
 P814 c_1782;
 int ro_1783;
 P835 saved_1784;
 int ok_1785;
};
struct f_wait_op_542fr { int dummy;
 P812 inv_538;
 rstr *op_539;
 rstr *q_540;
 int is_stmt_541;
 rstr result_;
 P812 x_1788;
 P812 f_1789;
 P812 qn_1790;
 P818 t_1791;
 rstr r_1792;
};
struct f_user_wait_547fr { int dummy;
 P812 s_543;
 rstr *arr_544;
 rstr *w_545;
 rt_int n_546;
 P812 a_1793;
 rt_int i_1794;
 P805 tests_1795;
 P805 revokes_1796;
 P812 inv_1797;
 P812 st_1798;
 P814 c_1799;
 P818 qt_1800;
 rstr qname_1801;
 P822 y_1802;
 rstr access_1803;
};
struct f_st_wait_549fr { int dummy;
 P812 s_548;
 P812 a_1804;
 rt_int n_1805;
 int first_1806;
 P835 inits_1807;
 int user_1808;
 rstr arr_1809;
 rstr w_1810;
 P812 inv_1811;
 P812 inv_1812;
 P805 conds_1813;
 rt_int i_1814;
};
struct f_call_node_553fr { int dummy;
 rstr *name_550;
 P812 arg_551;
 rt_int line_552;
 P812 result_;
 P812 x_1818;
 P812 f_1819;
};
struct f_user_region_555fr { int dummy;
 P812 s_554;
 P818 t_1820;
 rstr f_1821;
 rstr lock_1822;
 rstr unlock_1823;
};
struct f_st_region_557fr { int dummy;
 P812 s_556;
 P805 lv_1824;
 P818 t_1825;
 P814 c_1826;
 int ro_1827;
 rstr lk_1828;
 rstr f_1829;
};
struct f_gparam_560fr { int dummy;
 P812 g_558;
 rstr *name_559;
 P812 result_;
 P812 p_1830;
};
struct f_bind_sym_562fr { int dummy;
 P812 p_561;
 P822 result_;
 P822 y_1831;
};
struct f_same_binds_565fr { int dummy;
 P822 a_563;
 P822 b_564;
 int result_;
 P822 x_1832;
 P822 y_1833;
};
struct f_same_binding_568fr { int dummy;
 P822 a_566;
 P822 b_567;
 int result_;
};
struct f_tt_binds_573fr { int dummy;
 P812 gd_569;
 P812 formals_570;
 P812 actuals_571;
 rt_int line_572;
 P822 result_;
 P812 f_1834;
 P812 a_1835;
 P822 binds_1836;
 P814 c_1837;
 P818 at_1838;
 P812 p_1839;
 P822 b_1840;
 P812 st_1841;
 int ok_1842;
};
struct f_generic_use_575fr { int dummy;
 P812 st_574;
 int result_;
};
struct f_infer_from_580fr { int dummy;
 P812 gd_576;
 P812 pat_577;
 P818 t_578;
 P822 known_579;
 P822 result_;
 P822 binds_1843;
 P812 e_1844;
 P812 tp_1845;
 P805 nm_1846;
 P822 q_1847;
 int have_1848;
 P822 g_1849;
 P822 b_1850;
};
struct f_instantiate_type_586fr { int dummy;
 P822 g_581;
 P812 tt_582;
 P812 args_583;
 P814 *c_584;
 P814 c_584v;
 rt_int line_585;
 P818 result_;
 P812 gd_1851;
 P812 pat_1852;
 P822 binds_1853;
 P822 inst_1854;
 P818 t_1855;
 P839 saved_caps_1856;
 P826 saved_env_1857;
 rt_int saved_gdepth_1858;
 P822 b_1859;
 P822 y_1860;
 P814 yc_1861;
};
struct f_instantiate_591fr { int dummy;
 P822 g_587;
 P812 tt_588;
 P812 args_589;
 rt_int line_590;
 P822 result_;
 P812 gd_1863;
 P812 pat_1864;
 P822 binds_1865;
 P812 f_1866;
 P812 a_1867;
 P812 fp_1868;
 P822 inst_1869;
 P818 at_1870;
 P814 c_1871;
 P829 saved_fctx_1872;
 int saved_in_1873;
 rt_int saved_level_1874;
 P822 saved_sym_1875;
 P835 saved_code_1876;
 P826 saved_env_1877;
 rt_int saved_gdepth_1878;
 rstr v_1879;
 int known_1880;
 P822 q_1881;
 P822 b_1882;
 rstr v_1883;
 P822 b_1884;
};
struct f_access_of_593fr { int dummy;
 P822 y_592;
 rstr result_;
 P805 p_1885;
 rt_int i_1886;
};
struct f_import_of_596fr { int dummy;
 P812 l_594;
 rstr *name_595;
 P812 result_;
 P812 p_1890;
};
struct f_check_import_599fr { int dummy;
 P822 y_597;
 rt_int line_598;
 int result_;
 P829 c_1891;
 int ro_1892;
 P812 imp_1893;
};
struct f_c_ident_601fr { int dummy;
 rstr *s_600;
 rstr result_;
};
struct f_cell_deref_604fr { int dummy;
 P818 t_602;
 rstr *p_603;
 rstr result_;
};
struct f_deref_607fr { int dummy;
 rstr *base_605;
 P818 t_606;
 rstr result_;
};
struct f_is_lvalue_609fr { int dummy;
 P812 e_608;
 int result_;
 P822 y_1894;
};
struct f_lvalue_615fr { int dummy;
 P812 e_610;
 P805 *code_611;
 P805 code_611v;
 P818 *t_612;
 P818 t_612v;
 P814 *c_613;
 P814 c_613v;
 int *ro_614;
 int ro_614v;
 P805 base_1895;
 P818 bt_1896;
 P814 bc_1897;
 P822 y_1898;
};
struct f_select_on_623fr { int dummy;
 rstr *base_616;
 P818 bt_617;
 P812 e_618;
 int *ro_619;
 P805 *code_620;
 P805 code_620v;
 P818 *t_621;
 P818 t_621v;
 P814 *c_622;
 P814 c_622v;
 P812 p_1899;
 P814 pc_1900;
 P812 p_1901;
 P820 f_1902;
 rt_int i_1903;
 rstr fn_1904;
 P820 f_1905;
};
struct f_has_call_625fr { int dummy;
 rstr *s_624;
 int result_;
 rt_int i_1906;
};
struct f_need_slice_627fr { int dummy;
 P818 t_626;
 rstr c_1910;
 rstr n_1911;
 P816 l_1912;
};
struct f_ix_631fr { int dummy;
 rstr *i_628;
 rstr *lo_629;
 rstr *hi_630;
 rstr result_;
};
struct f_index_on_640fr { int dummy;
 rstr *base_632;
 P818 bt_633;
 P812 e_634;
 int *ro_635;
 int lv_636;
 P805 *code_637;
 P805 code_637v;
 P818 *t_638;
 P818 t_638v;
 P814 *c_639;
 P814 c_639v;
 P812 a_1914;
 P818 it_1915;
 rstr lo_1916;
 rstr hi_1917;
 P805 off_1918;
 rt_int k_1919;
 P805 b_1920;
 P805 pre_1921;
 rstr i_1922;
 rstr l_1923;
 rstr h_1924;
 rstr lo_1925;
 rstr hi_1926;
 rstr i_1927;
};
struct f_own_attribute_642fr { int dummy;
 P812 e_641;
 int result_;
 P835 saved_1928;
 P818 bt_1929;
 int ok_1930;
 rstr base_1933;
 P812 p_1934;
 P820 f_1935;
};
struct f_gexpr_646fr { int dummy;
 P812 e_643;
 P818 want_644;
 P818 *t_645;
 P818 t_645v;
 rstr result_;
 rt_int k_1936;
 P805 code_1937;
 P814 c_1938;
 int ro_1939;
 P818 bt_1940;
 P814 ctx_1941;
 P805 r_1942;
 rt_int i_1943;
 rt_int pos_1947;
 rt_int i_1948;
 P822 y_1949;
 int ro_1950;
 P812 call_1951;
 P812 fname_1952;
 rstr a_1953;
 rstr a_1954;
 rstr a_1955;
 P812 nm_1956;
 P822 y_1957;
 rstr base_1958;
 rstr base_1959;
};
struct f_resolved_649fr { int dummy;
 P812 e_647;
 P818 *t_648;
 P818 t_648v;
 rstr result_;
 P814 c_1960;
 P818 vt_1961;
 P822 y_1962;
 P812 tt_1963;
 P812 call_1964;
 P812 f_1965;
 P812 fname_1966;
 rstr v_1967;
};
struct f_gexpr_in_654fr { int dummy;
 P812 e_650;
 P818 want_651;
 P814 c_652;
 P818 *t_653;
 P818 t_653v;
 rstr result_;
};
struct f_ascii_lit_656fr { int dummy;
 int ch_655;
 rstr result_;
 P812 l_1968;
 rt_int i_1969;
};
struct f_octal_658fr { int dummy;
 rt_int n_657;
 rstr result_;
 rstr r_1973;
};
struct f_str_cat_part_660fr { int dummy;
 P818 t_659;
 P818 result_;
};
struct f_peek_type_662fr { int dummy;
 P812 e_661;
 P818 result_;
 P835 saved_1974;
 P818 t_1975;
 rstr v_1978;
};
struct f_set_operands_665fr { int dummy;
 P812 e_663;
 P818 want_664;
 P818 result_;
 P818 t_1979;
};
struct f_copy_node_667fr { int dummy;
 P812 e_666;
 P812 result_;
 P812 x_1980;
};
struct f_wrap_apply_669fr { int dummy;
 P812 e_668;
 P812 result_;
 P812 x_1982;
};
struct f_c_string_671fr { int dummy;
 rstr *s_670;
 rstr result_;
 rt_int n_1983;
 rt_int i_1984;
 rstr r_1988;
 rt_int j_1989;
 rt_int i_1990;
};
struct f_enum_type_of_674fr { int dummy;
 rstr *lit_672;
 rt_int line_673;
 P818 result_;
 P822 y_1994;
 P814 c_1995;
 P812 st_1996;
};
struct f_ptr_attribute_676fr { int dummy;
 P812 e_675;
 int result_;
 P805 lv_1997;
 P818 t_1998;
 P814 c_1999;
 int ro_2000;
 P812 p_2001;
 P835 saved_2002;
};
struct f_attribute_679fr { int dummy;
 P812 e_677;
 P818 *t_678;
 P818 t_678v;
 rstr result_;
 P818 bt_2003;
 P814 c_2004;
 P805 base_2005;
 P812 sub_2006;
 rstr name_2007;
 P812 p_2008;
 P812 a_2009;
 P814 pc_2010;
 rstr v_2011;
 P812 p_2012;
 P812 a_2013;
 P818 pt_2014;
 rstr v_2015;
};
struct f_subtype_compare_684fr { int dummy;
 P812 sa_680;
 P812 sb_681;
 rstr *op_682;
 rt_int line_683;
 rstr result_;
 P814 ca_2016;
 P814 cb_2017;
 P818 ta_2018;
 P818 tb_2019;
 P805 r_2020;
 rstr yes_2021;
 rstr no_2022;
 rt_int k_2023;
 P812 a_2027;
 P812 b_2028;
 P818 at_2029;
 P818 bt2_2030;
 rstr x_2031;
 rstr y_2032;
};
struct f_float_prec_686fr { int dummy;
 P814 c_685;
 rstr result_;
};
struct f_file_attribute_692fr { int dummy;
 P812 e_687;
 P818 bt_688;
 P814 c_689;
 P805 base_690;
 P818 *t_691;
 P818 t_691v;
 rstr result_;
};
struct f_gbinop_696fr { int dummy;
 P812 e_693;
 P818 want_694;
 P818 *t_695;
 P818 t_695v;
 rstr result_;
 P805 op_2033;
 P818 ta_2034;
 P818 tb_2035;
 P818 hint_2036;
 P822 uy_2037;
 P812 l_2038;
 P812 r_2039;
 P812 call_2040;
 P812 fname_2041;
 rstr s_2042;
 rstr a_2043;
 rstr a_2044;
 rstr b_2045;
 rstr a_2046;
 rstr b_2047;
 P818 at_2048;
 rstr a_2049;
 rstr b_2050;
 P818 wa_2051;
 P818 wb_2052;
 P818 ws_2053;
 P818 ce_2054;
 rstr a_2055;
 rstr b_2056;
 rstr dummy_2057;
 rstr a_2058;
 rstr b_2059;
 P818 ct_2060;
 rstr a_2061;
 rstr b_2062;
};
struct f_constructor_701fr { int dummy;
 P812 e_697;
 P818 want_698;
 P814 ctx_699;
 P818 *t_700;
 P818 t_700v;
 rstr result_;
 P812 it_2063;
 P820 f_2064;
 P818 vt_2065;
 P805 s_2066;
 rstr v_2067;
 rt_int i_2068;
 rstr tmp_2069;
 rstr v_2070;
 rstr tmp_2071;
 P805 parts_2072;
 P812 k_2073;
 P805 shared_2074;
 rstr v_2075;
 rstr v_2076;
};
struct f_comp_value_705fr { int dummy;
 P818 t_702;
 P814 c_703;
 rstr *v_704;
 rstr result_;
};
struct f_has_at_707fr { int dummy;
 rstr *s_706;
 int result_;
 rt_int i_2077;
};
struct f_set_elem_710fr { int dummy;
 P818 st_708;
 rstr *v_709;
 rstr result_;
};
struct f_array_cons_715fr { int dummy;
 P812 e_711;
 P818 at_712;
 P814 ctx_713;
 P818 *t_714;
 P818 t_714v;
 rstr result_;
 rstr tmp_2081;
 P805 parts_2082;
 P812 it_2083;
 int positional_2084;
 rt_int k_2085;
 P805 lo_2089;
 P805 hi_2090;
};
struct f_fill_items_721fr { int dummy;
 P812 items_716;
 P818 at_717;
 rstr *tmp_718;
 P816 prefix_719;
 rt_int dim_720;
 rstr result_;
 P812 it_2091;
 rt_int pos_2092;
 P805 r_2093;
 P818 vt_2094;
 rstr v_2095;
 P812 k_2096;
 rt_int d_2097;
 P816 pre_2098;
 P805 loops_2099;
 P805 ends_2100;
 rstr v_2101;
 rstr xv_2102;
 P812 k_2103;
 rstr xv_2104;
 rstr v_2105;
};
struct f_e_line_723fr { int dummy;
 P812 e_722;
 rt_int result_;
};
struct f_add_line_726fr { int dummy;
 P816 l_724;
 rstr *s_725;
 P816 result_;
 P816 r_2106;
 P816 tail_2107;
 P816 x_2108;
 P816 p_2109;
};
struct f_item_value_731fr { int dummy;
 P812 e_727;
 P818 at_728;
 rt_int line_729;
 P818 *vt_730;
 P818 vt_730v;
 rstr result_;
 rstr v_2112;
};
struct f_key_loop_736fr { int dummy;
 P812 k_732;
 P818 at_733;
 rt_int d_734;
 rstr *xv_735;
 rstr result_;
 P818 it_2113;
 rstr lo_2114;
 rstr hi_2115;
};
struct f_store_at_741fr { int dummy;
 P818 at_737;
 rstr *tmp_738;
 P816 xs_739;
 rt_int n_740;
 rstr result_;
 P805 off_2116;
 P816 x_2117;
 rt_int k_2118;
 rstr l_2119;
 rstr h_2120;
};
struct f_fits_744fr { int dummy;
 P822 y_742;
 P812 args_743;
 int result_;
 P812 a_2121;
 P824 pm_2122;
 P818 t_2123;
 P835 saved_2124;
 int ok_2125;
 P805 lv_2126;
 P814 lc_2127;
 int ro_2128;
 rstr v_2131;
};
struct f_resolve_overload_750fr { int dummy;
 rstr *name_745;
 P812 tt_746;
 P812 args_747;
 int is_stmt_748;
 rt_int line_749;
 P822 result_;
 P822 y_2132;
 P822 first_2133;
 rt_int n_2134;
 rt_int pass_2135;
};
struct f_tt_fits_753fr { int dummy;
 P822 y_751;
 P812 tt_752;
 int result_;
 P812 f_2139;
 P812 a_2140;
 P835 saved_2141;
 int ok_2142;
 P814 fc_2145;
 P814 ac_2146;
 P812 fst_2147;
 P818 ft_2148;
 P818 at_2149;
 P812 ast_2150;
};
struct f_overload_chain_756fr { int dummy;
 rstr *name_754;
 rt_int pass_755;
 P822 result_;
};
struct f_is_builtin_758fr { int dummy;
 rstr *n_757;
 int result_;
};
struct f_is_low_level_760fr { int dummy;
 rstr *n_759;
 int result_;
};
struct f_me_high_764fr { int dummy;
 P812 tt_761;
 rt_int line_762;
 P818 *t_763;
 P818 t_763v;
 rstr result_;
 P814 c_2151;
};
struct f_type_tag_766fr { int dummy;
 P818 t_765;
 rstr result_;
};
struct f_lock_ref_769fr { int dummy;
 P812 e_767;
 rstr *name_768;
 rstr result_;
 P805 lv_2152;
 P818 t_2153;
 P814 c_2154;
 int ro_2155;
};
struct f_user_op_772fr { int dummy;
 rstr *op_770;
 P812 args_771;
 P822 result_;
 P822 y_2156;
 rt_int pass_2157;
};
struct f_gcall_776fr { int dummy;
 P812 e_773;
 int is_stmt_774;
 P818 *t_775;
 P818 t_775v;
 rstr result_;
 P812 fn_2161;
 P812 tt_2162;
 P822 y_2163;
 P805 args_2164;
 P812 a_2165;
 P824 pm_2166;
 P818 lt_2167;
 P818 vt_2168;
 P805 lv_2169;
 P814 lc_2170;
 int ro_2171;
 P822 alt_2172;
 rt_int i_2173;
 rstr v_2177;
 rstr ct_2178;
 rstr v_2179;
};
struct f_requires_778fr { int dummy;
 P822 y_777;
 P816 result_;
 P812 imp_2180;
};
struct f_add_req_781fr { int dummy;
 P822 y_779;
 rstr *name_780;
 P816 l_2181;
};
struct f_require_calls_784fr { int dummy;
 P822 y_782;
 P812 e_783;
 P812 x_2183;
 P812 callee_2184;
 P822 z_2185;
 P816 l_2186;
};
struct f_declared_in_787fr { int dummy;
 P812 elems_785;
 rstr *name_786;
 int result_;
 P812 e_2187;
};
struct f_check_requires_790fr { int dummy;
 P822 y_788;
 rt_int line_789;
 P816 l_2188;
 P822 z_2189;
};
struct f_actual_bounds_794fr { int dummy;
 P818 ft_791;
 P818 t_792;
 P814 c_793;
 rstr result_;
};
struct f_builtin_801fr { int dummy;
 rstr *name_795;
 P812 tt_796;
 P812 args_797;
 rt_int line_798;
 int is_stmt_799;
 P818 *t_800;
 P818 t_800v;
 rstr result_;
 P818 at_2190;
 rt_int n_2191;
 rstr a_2192;
 rstr a_2193;
 rstr a_2194;
 rstr a_2195;
 rstr a_2196;
 rstr n1_2197;
 rstr m1_2198;
 rstr a_2199;
 rstr a_2200;
 P812 last_2201;
 rstr a_2202;
 rstr a_2203;
 P805 lv_2204;
 P814 lc_2205;
 int ro_2206;
 P812 last_2207;
 P805 lv_2208;
 P805 dv_2209;
 P814 lc_2210;
 int ro_2211;
 P818 mt_2212;
 P818 dt_2213;
 rstr v_2214;
 P805 lv_2215;
 P814 lc_2216;
 int ro_2217;
 P818 mt_2218;
 P805 lv_2219;
 P805 dv_2220;
 P805 bv_2221;
 P814 lc_2222;
 int ro_2223;
 P818 mt_2224;
 P818 dt_2225;
 P818 bt_2226;
 rstr v_2227;
 rstr v_2228;
 rstr v_2229;
 rstr v_2230;
 rstr a_2231;
 P805 bv_2232;
 P814 bc_2233;
 int ro_2234;
 P818 bt_2235;
 rstr l_2236;
 P805 pv_2237;
 P814 pc_2238;
 int ro_2239;
 P818 pt_2240;
 rstr dev_2241;
 rstr cmd_2242;
 P805 dv_2243;
 P814 dc_2244;
 int ro_2245;
 P818 dt_2246;
};
struct f_translate_803fr { int dummy;
 P812 units_802;
 P812 u_2247;
 P812 l_2249;
 rstr w_2250;
};
struct f_print_program_804fr { int dummy;
};
struct Pc806 { rt_int p_n; rstr all; };
struct Pc810 { rt_int p_n; A811 all; };
struct Pc827 { rt_int p_n; A828 all; };
static void as_R842(R842 *d, R842 s);
static R842 cp_R842(R842 s);
static int eq_R842(R842 a, R842 b);
static void as_R840(R840 *d, R840 s);
static R840 cp_R840(R840 s);
static int eq_R840(R840 a, R840 b);
static void as_R838(R838 *d, R838 s);
static R838 cp_R838(R838 s);
static int eq_R838(R838 a, R838 b);
static void as_R836(R836 *d, R836 s);
static R836 cp_R836(R836 s);
static int eq_R836(R836 a, R836 b);
static void as_R834(R834 *d, R834 s);
static R834 cp_R834(R834 s);
static int eq_R834(R834 a, R834 b);
static void as_R832(R832 *d, R832 s);
static R832 cp_R832(R832 s);
static int eq_R832(R832 a, R832 b);
static void as_R830(R830 *d, R830 s);
static R830 cp_R830(R830 s);
static int eq_R830(R830 a, R830 b);
static void as_A828(A828 *d, A828 s);
static A828 cp_A828(A828 s);
static int eq_A828(A828 a, A828 b);
static void as_R825(R825 *d, R825 s);
static R825 cp_R825(R825 s);
static int eq_R825(R825 a, R825 b);
static void as_R823(R823 *d, R823 s);
static R823 cp_R823(R823 s);
static int eq_R823(R823 a, R823 b);
static void as_R821(R821 *d, R821 s);
static R821 cp_R821(R821 s);
static int eq_R821(R821 a, R821 b);
static void as_R819(R819 *d, R819 s);
static R819 cp_R819(R819 s);
static int eq_R819(R819 a, R819 b);
static void as_R817(R817 *d, R817 s);
static R817 cp_R817(R817 s);
static int eq_R817(R817 a, R817 b);
static void as_R815(R815 *d, R815 s);
static R815 cp_R815(R815 s);
static int eq_R815(R815 a, R815 b);
static void as_R813(R813 *d, R813 s);
static R813 cp_R813(R813 s);
static int eq_R813(R813 a, R813 b);
static void as_A811(A811 *d, A811 s);
static A811 cp_A811(A811 s);
static int eq_A811(A811 a, A811 b);
static void as_R808(R808 *d, R808 s);
static R808 cp_R808(R808 s);
static int eq_R808(R808 a, R808 b);
static P805 f_mk_3(rstr *s_2);
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
static P835 f_new_buffer_24(void);
static void f_put_27(P835 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P835 b_30);
static void f_splice_34(P835 a_32, P835 b_33);
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
static P812 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P812 *head_62, P812 *tail_63, P812 x_64);
static rt_int f_list_len_67(P812 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P805 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P805 f_expect_id_89(void);
static P812 f_name_node_90(void);
static P812 f_id_list_91(void);
static P812 f_p_subtype_92(void);
static P812 f_constraint_list_93(void);
static P812 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P812 f_actual_tt_97(void);
static P812 f_binop_102(P805 op_98, P812 l_99, P812 r_100, rt_int line_101);
static P812 f_expr_103(void);
static P812 f_expr_and_104(void);
static P812 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P812 f_expr_rel_108(void);
static P812 f_expr_add_109(void);
static P812 f_expr_mul_110(void);
static P812 f_expr_pow_111(void);
static P812 f_expr_prefix_112(void);
static P812 f_postfix_113(void);
static P812 f_primary_114(void);
static P812 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P812 f_body_117(void);
static P812 f_body_element_118(void);
static P812 f_declaration_119(void);
static P812 f_object_decl_120(void);
static P812 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P812 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P812 f_formal_params_126(void);
static int f_imports_list_128(P812 owner_127);
static int f_is_definable_130(rstr *w_129);
static P805 f_definable_name_131(void);
static P812 f_subprogram_decl_132(void);
static P812 f_capsule_decl_133(void);
static P812 f_formal_tt_134(void);
static P812 f_generic_decl_135(void);
static P812 f_task_decl_136(void);
static P812 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P812 f_statement_140(void);
static P812 f_unlabeled_statement_141(void);
static P812 f_arm_145(P812 cond_142, P812 b_143, rt_int line_144);
static P812 f_if_stmt_146(void);
static P812 f_case_stmt_147(void);
static P812 f_repeat_stmt_148(void);
static P812 f_guard_stmt_149(void);
static P812 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P822 f_lookup_154(rstr *name_153);
static P822 f_lookup_decl_156(P812 d_155);
static void f_define_159(P822 y_157, rt_int line_158);
static int f_overloadable_161(P822 y_160);
static int f_same_tt_164(P812 a_162, P812 b_163);
static int f_same_signature_167(P824 a_165, P824 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P822 f_new_sym_172(rt_int kind_170, P805 name_171);
static P818 f_new_typ_174(rt_int kind_173);
static P814 f_new_cons_175(void);
static int f_scalar_kind_177(P818 t_176);
static rstr f_bound_ctype_179(P818 t_178);
static rstr f_cbound_182(P814 c_180, rstr *b_181);
static rstr f_clo_184(P814 c_183);
static rstr f_chi_186(P814 c_185);
static rstr f_sub_lo_189(P818 t_187, P814 c_188);
static rstr f_sub_hi_192(P818 t_190, P814 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P814 f_copy_cons_197(P814 c_196);
static P814 f_freeze_200(P814 c_198, P818 t_199);
static rstr f_checked_204(P818 t_201, P814 c_202, rstr *v_203);
static int f_same_lits_207(P812 a_205, P812 b_206);
static P818 f_str_elem_209(P818 t_208);
static int f_same_212(P818 a_210, P818 b_211);
static P818 f_base_of_214(P818 t_213);
static P814 f_base_cons_217(P818 t_215, P814 c_216);
static rstr f_kind_name_219(P818 t_218);
static void f_check_type_223(P818 got_220, P818 want_221, rt_int line_222);
static rstr f_ctype_225(P818 t_224);
static rstr f_struct_body_227(P818 t_226);
static rstr f_field_decls_229(P818 t_228);
static void f_declare_ctype_231(P818 t_230);
static rstr f_dim_lo_233(rt_int k_232);
static rstr f_dim_hi_235(rt_int k_234);
static rstr f_more_dims_237(P818 t_236);
static rstr f_acnt_240(P818 t_238, rstr *base_239);
static P805 f_cons_lo_243(P814 c_241, rt_int k_242);
static P805 f_cons_hi_246(P814 c_244, rt_int k_245);
static P818 f_idx_type_249(P818 t_247, rt_int k_248);
static void f_init_ascii_250(void);
static rt_int f_lit_index_253(P812 lits_251, rstr *name_252);
static P818 f_resolve_subtype_256(P812 st_254, P814 *c_255);
static int f_float_lit_258(P812 e_257);
static void f_tag_constraint_262(P818 t_259, P812 e_260, P814 c_261);
static P818 f_named_subtype_265(P812 st_263, P814 *c_264);
static P818 f_invoke_abbrev_269(P822 y_266, P812 st_267, P814 *c_268);
static void f_apply_constraint_274(P818 t_270, P812 args_271, P814 c_272, rt_int line_273);
static P818 f_value_subtype_278(P812 e_275, P814 *c_276, P805 *base_277);
static P816 f_reverse_pairs_280(P816 l_279);
static P818 f_inquiry_283(P812 st_281, P814 *c_282);
static P812 f_as_subtype_285(P812 e_284);
static P812 f_tt_subtype_290(P805 name_286, P812 tt_287, P812 args_288, rt_int line_289);
static int f_type_name_292(rstr *name_291);
static rstr f_empty_set_294(P818 t_293);
static int f_opened_296(P818 t_295);
static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299);
static rstr f_subst_302(rstr *s_301);
static P818 f_new_type_306(P822 y_303, P812 st_304, P814 *c_305);
static void f_init_storage_310(rstr *lval_307, P818 t_308, P814 c_309);
static rstr f_init_call_313(P822 y_311, rstr *lval_312);
static int f_needs_fin_315(P818 t_314);
static rstr f_fin_code_318(rstr *lval_316, P818 t_317);
static P818 f_tparam_type_321(P818 t_319, rstr *name_320);
static void f_make_storage_325(rstr *lval_322, P818 t_323, P814 c_324);
static rstr f_uninit_value_327(P818 t_326);
static rstr f_init_chk_330(P818 t_328, rstr *v_329);
static rt_int f_manifest_333(P812 e_331, int *ok_332);
static P831 f_mk_mval_336(rt_int kind_334, rt_int i_335);
static rt_int f_ipow_339(rt_int a_337, rt_int b_338);
static P831 f_meval_342(P812 e_340, int *ok_341);
static rstr f_bool_text_344(int b_343);
static rt_int f_bool_i_346(int b_345);
static rstr f_mstr_348(P831 v_347);
static int f_ascii_char_350(rt_int i_349);
static int f_user_defined_352(rstr *op_351);
static rstr f_mcopy_354(P818 t_353);
static int f_composite_356(P818 t_355);
static rstr f_assign_code_361(rstr *lval_357, P818 t_358, rstr *v_359, P814 c_360);
static rstr f_copy_code_364(P818 t_362, rstr *v_363);
static rstr f_eq_code_368(P818 t_365, rstr *a_366, rstr *b_367);
static rstr f_elem_assign_372(rstr *lval_369, P818 t_370, rstr *v_371);
static int f_seen_name_375(P816 l_373, rstr *s_374);
static void f_emit_helpers_376(void);
static void f_helper_bodies_378(P818 t_377);
static void f_declare_body_380(P812 elems_379);
static void f_manifest_const_382(P812 d_381);
static int f_exported_386(P812 d_383, rstr *name_384, int *ro_385);
static P822 f_copy_sym_388(P822 y_387);
static void f_gen_capsule_390(P812 d_389);
static void f_capsule_params_394(P812 d_391, P812 args_392, rt_int line_393);
static void f_elaborate_capsule_399(P812 d_395, P822 y_396, P812 args_397, P812 owner_398);
static int f_exports_op_402(P812 d_400, rstr *op_401);
static P805 f_renamed_405(P812 d_403, P822 z_404);
static void f_gen_expose_407(P812 d_406);
static void f_finish_ptr_409(P818 t_408);
static P812 f_ptr_args_411(P814 c_410);
static void f_bind_ptr_params_416(P812 formals_412, P812 actuals_413, rstr *cell_414, rt_int line_415);
static void f_alloc_cell_421(P812 s_417, rstr *lv_418, P818 t_419, P814 c_420);
static P814 f_freeze_args_425(P814 c_422, P818 t_423, rt_int line_424);
static void f_ptr_subtype_check_429(P818 t_426, P814 c_427, P812 src_428);
static void f_declare_subprogram_431(P812 d_430);
static P822 f_build_subprogram_433(P812 d_432);
static int f_has_pragmat_436(P805 pr_434, rstr *p_435);
static P805 f_suppressing_438(P805 pr_437);
static int f_suppressed_440(rstr *x_439);
static void f_element_442(P812 e_441);
static void f_element1_444(P812 e_443);
static rstr f_storage_447(rstr *name_445, P818 t_446);
static void f_bind_450(P822 y_448, rstr *access_449);
static void f_var_decl_452(P812 d_451);
static void f_open_fin_454(rstr *fc_453);
static void f_close_fins_456(P816 saved_455);
static void f_const_decl_458(P812 d_457);
static void f_subprogram_460(P812 d_459);
static void f_gen_subprogram_463(P812 d_461, P822 y_462);
static rstr f_waits_of_465(P812 d_464);
static rstr f_task_waits_467(P812 elems_466);
static void f_await_tasks_469(P812 elems_468);
static void f_capsule_elements_471(P812 elems_470);
static void f_declare_labels_473(P812 elems_472);
static void f_start_labels_474(void);
static P837 f_goto_label_476(rstr *name_475);
static int f_has_return_478(P812 e_477);
static void f_capsule_body_480(P812 elems_479);
static void f_body_elements_482(P812 elems_481);
static void f_gen_body_484(P812 elems_483);
static void f_pop_frames_486(rt_int upto_485);
static void f_push_cleanup_488(rstr *s_487);
static void f_pop_cleanup_489(void);
static void f_gen_statement_491(P812 s_490);
static void f_st_assign_493(P812 s_492);
static void f_st_call_495(P812 s_494);
static void f_st_if_497(P812 s_496);
static void f_st_case_499(P812 s_498);
static void f_st_repeat_501(P812 s_500);
static void f_st_exit_503(P812 s_502);
static void f_st_return_505(P812 s_504);
static rstr f_result_checked_509(P818 t_506, P814 c_507, rstr *v_508);
static rstr f_exc_id_512(rstr *name_510, rt_int line_511);
static void f_st_guard_514(P812 s_513);
static void f_st_alloc_516(P812 s_515);
static rstr f_act_ref_518(P812 e_517);
static void f_st_create_520(P812 s_519);
static void f_hidden_var_524(rstr *name_521, P818 t_522, rstr *place_523);
static void f_user_create_530(P812 s_525, P822 y_526, rstr *uv_527, P818 ut_528, rstr *nf_529);
static rstr f_wait_alt_535(P812 inv_531, rstr *arr_532, rt_int i_533, int mixed_534);
static int f_builtin_wait_537(P812 inv_536);
static rstr f_wait_op_542(P812 inv_538, rstr *op_539, rstr *q_540, int is_stmt_541);
static void f_user_wait_547(P812 s_543, rstr *arr_544, rstr *w_545, rt_int n_546);
static void f_st_wait_549(P812 s_548);
static P812 f_call_node_553(rstr *name_550, P812 arg_551, rt_int line_552);
static void f_user_region_555(P812 s_554);
static void f_st_region_557(P812 s_556);
static P812 f_gparam_560(P812 g_558, rstr *name_559);
static P822 f_bind_sym_562(P812 p_561);
static int f_same_binds_565(P822 a_563, P822 b_564);
static int f_same_binding_568(P822 a_566, P822 b_567);
static P822 f_tt_binds_573(P812 gd_569, P812 formals_570, P812 actuals_571, rt_int line_572);
static int f_generic_use_575(P812 st_574);
static P822 f_infer_from_580(P812 gd_576, P812 pat_577, P818 t_578, P822 known_579);
static P818 f_instantiate_type_586(P822 g_581, P812 tt_582, P812 args_583, P814 *c_584, rt_int line_585);
static P822 f_instantiate_591(P822 g_587, P812 tt_588, P812 args_589, rt_int line_590);
static rstr f_access_of_593(P822 y_592);
static P812 f_import_of_596(P812 l_594, rstr *name_595);
static int f_check_import_599(P822 y_597, rt_int line_598);
static rstr f_c_ident_601(rstr *s_600);
static rstr f_cell_deref_604(P818 t_602, rstr *p_603);
static rstr f_deref_607(rstr *base_605, P818 t_606);
static int f_is_lvalue_609(P812 e_608);
static void f_lvalue_615(P812 e_610, P805 *code_611, P818 *t_612, P814 *c_613, int *ro_614);
static void f_select_on_623(rstr *base_616, P818 bt_617, P812 e_618, int *ro_619, P805 *code_620, P818 *t_621, P814 *c_622);
static int f_has_call_625(rstr *s_624);
static void f_need_slice_627(P818 t_626);
static rstr f_ix_631(rstr *i_628, rstr *lo_629, rstr *hi_630);
static void f_index_on_640(rstr *base_632, P818 bt_633, P812 e_634, int *ro_635, int lv_636, P805 *code_637, P818 *t_638, P814 *c_639);
static int f_own_attribute_642(P812 e_641);
static rstr f_gexpr_646(P812 e_643, P818 want_644, P818 *t_645);
static rstr f_resolved_649(P812 e_647, P818 *t_648);
static rstr f_gexpr_in_654(P812 e_650, P818 want_651, P814 c_652, P818 *t_653);
static rstr f_ascii_lit_656(int ch_655);
static rstr f_octal_658(rt_int n_657);
static P818 f_str_cat_part_660(P818 t_659);
static P818 f_peek_type_662(P812 e_661);
static P818 f_set_operands_665(P812 e_663, P818 want_664);
static P812 f_copy_node_667(P812 e_666);
static P812 f_wrap_apply_669(P812 e_668);
static rstr f_c_string_671(rstr *s_670);
static P818 f_enum_type_of_674(rstr *lit_672, rt_int line_673);
static int f_ptr_attribute_676(P812 e_675);
static rstr f_attribute_679(P812 e_677, P818 *t_678);
static rstr f_subtype_compare_684(P812 sa_680, P812 sb_681, rstr *op_682, rt_int line_683);
static rstr f_float_prec_686(P814 c_685);
static rstr f_file_attribute_692(P812 e_687, P818 bt_688, P814 c_689, P805 base_690, P818 *t_691);
static rstr f_gbinop_696(P812 e_693, P818 want_694, P818 *t_695);
static rstr f_constructor_701(P812 e_697, P818 want_698, P814 ctx_699, P818 *t_700);
static rstr f_comp_value_705(P818 t_702, P814 c_703, rstr *v_704);
static int f_has_at_707(rstr *s_706);
static rstr f_set_elem_710(P818 st_708, rstr *v_709);
static rstr f_array_cons_715(P812 e_711, P818 at_712, P814 ctx_713, P818 *t_714);
static rstr f_fill_items_721(P812 items_716, P818 at_717, rstr *tmp_718, P816 prefix_719, rt_int dim_720);
static rt_int f_e_line_723(P812 e_722);
static P816 f_add_line_726(P816 l_724, rstr *s_725);
static rstr f_item_value_731(P812 e_727, P818 at_728, rt_int line_729, P818 *vt_730);
static rstr f_key_loop_736(P812 k_732, P818 at_733, rt_int d_734, rstr *xv_735);
static rstr f_store_at_741(P818 at_737, rstr *tmp_738, P816 xs_739, rt_int n_740);
static int f_fits_744(P822 y_742, P812 args_743);
static P822 f_resolve_overload_750(rstr *name_745, P812 tt_746, P812 args_747, int is_stmt_748, rt_int line_749);
static int f_tt_fits_753(P822 y_751, P812 tt_752);
static P822 f_overload_chain_756(rstr *name_754, rt_int pass_755);
static int f_is_builtin_758(rstr *n_757);
static int f_is_low_level_760(rstr *n_759);
static rstr f_me_high_764(P812 tt_761, rt_int line_762, P818 *t_763);
static rstr f_type_tag_766(P818 t_765);
static rstr f_lock_ref_769(P812 e_767, rstr *name_768);
static P822 f_user_op_772(rstr *op_770, P812 args_771);
static rstr f_gcall_776(P812 e_773, int is_stmt_774, P818 *t_775);
static P816 f_requires_778(P822 y_777);
static void f_add_req_781(P822 y_779, rstr *name_780);
static void f_require_calls_784(P822 y_782, P812 e_783);
static int f_declared_in_787(P812 elems_785, rstr *name_786);
static void f_check_requires_790(P822 y_788, rt_int line_789);
static rstr f_actual_bounds_794(P818 ft_791, P818 t_792, P814 c_793);
static rstr f_builtin_801(rstr *name_795, P812 tt_796, P812 args_797, rt_int line_798, int is_stmt_799, P818 *t_800);
static void f_translate_803(P812 units_802);
static void f_print_program_804(void);
static int ex_compile_error_1;
static P809 g_toks_843;
static rt_int g_ntoks_844;
static rt_int g_tpos_845;
static rt_int g_src_line_846;
static P805 g_pending_prag_847;
static P826 g_table_848;
static P826 g_genv_849;
static P822 g_all_insts_850;
static rt_int g_depth_851;
static P822 g_scope_stack_852;
static P818 g_all_types_853;
static rt_int g_serial_854;
static P835 g_out_types_855;
static P835 g_out_helpers_856;
static P835 g_out_protos_857;
static P835 g_out_globals_858;
static P835 g_out_funcs_859;
static P835 g_out_init_860;
static P835 g_out_excs_861;
static P835 g_code_862;
static P835 g_fields_buf_863;
static int g_in_func_864;
static rt_int g_cur_level_865;
static P829 g_fctx_866;
static P839 g_caps_867;
static P841 g_cap_waits_868;
static P816 g_psub_869;
static P805 g_st_field_870;
static P835 g_out_frames_871;
static P835 g_out_roots_872;
static int g_uses_free_873;
static P816 g_fins_874;
static int g_uses_findyn_875;
static P822 g_func_sym_876;
static P814 g_func_rc_877;
static P805 g_cap_ret_878;
static P805 g_cap_rflag_879;
static rt_int g_ret_frames_880;
static rt_int g_gdepth_881;
static P805 g_suppress_882;
static P814 g_cons_ctx_883;
static int g_mark_uninit_884;
static P837 g_exits_885;
static P837 g_gotos_886;
static rt_int g_frames_887;
static P816 g_handlers_888;
static P816 g_cleanups_889;
static rt_int g_trial_890;
static P816 g_mcopies_891;
static P818 g_ty_int_892;
static P818 g_ty_bool_893;
static P818 g_ty_float_894;
static P818 g_ty_ascii_895;
static P818 g_ty_string_896;
static P818 g_ty_void_897;
static P818 g_ty_file_898;
static P818 g_ty_nil_899;
static P818 g_ty_lock_900;
static P818 g_ty_latch_901;
static P818 g_ty_act_902;
static P818 g_file_mode_type_903;
static P814 g_no_cons_904;
static P805 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_905 = NULL;
{ P805 cell906 = rt_alloc(sizeof *cell906);
rt_int pv907 = ((rt_int)(((*F->s_2)).len));
cell906->p_n = pv907;
cell906->all = rt_str_new(pv907);
rt_str_assign(&cell906->all, (*F->s_2));
F->t_905 = cell906;
}
F->result_ = F->t_905;
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
F->r_908 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_908, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_908;
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
F->r_909 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_909, (*F->s_14));
{ rt_int lo911 = ((rt_int)1LL), hi912 = ((rt_int)(((*F->s_14)).len));
for (rt_int it913 = lo911; it913 <= hi912; it913++) {
F->i_910 = it913;
if (((65 <= rt_r_echk(rt_str_get(F->r_909, F->i_910))) && (rt_r_echk(rt_str_get(F->r_909, F->i_910)) <= 90))) {
(*rt_str_at(&F->r_909, F->i_910)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_909, F->i_910))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_909;
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
F->l_914 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_915 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_914), rt_str(" ", 1)));
{ rt_int lo917 = ((rt_int)1LL), hi918 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_915).len))), ((rt_int)1LL));
for (rt_int it919 = lo917; it919 <= hi918; it919++) {
F->i_916 = it919;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_916, rt_sub(rt_add(F->i_916, ((rt_int)((F->w_915).len))), ((rt_int)1LL))), F->w_915)) {
F->result_ = rt_str_cat(F->l_914, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_914;
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
g_serial_854 = rt_add(rt_r_ichk(g_serial_854), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_854)));
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
if ((rt_r_ichk(g_trial_890) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P835 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_920 = NULL;
{ R836 *cell921 = rt_alloc(sizeof(R836));
(*cell921).head = NULL;
(*cell921).tail = NULL;
F->b_920 = cell921;
}
F->result_ = F->b_920;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P835 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_922 = NULL;
{ R817 *cell923 = rt_alloc(sizeof(R817));
(*cell923).s = NULL;
(*cell923).next = NULL;
F->l_922 = cell923;
}
(*(P816)rt_nil_check(F->l_922)).s = f_mk_3(&(*F->s_26));
if (((*(P835)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P835)rt_nil_check(F->b_25)).head = F->l_922;
} else {
(*(P816)rt_nil_check((*(P835)rt_nil_check(F->b_25)).tail)).next = F->l_922;
}
(*(P835)rt_nil_check(F->b_25)).tail = F->l_922;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_862, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P835 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_924 = NULL;
F->l_924 = (*(P835)rt_nil_check(F->b_30)).head;
while ((F->l_924 != NULL)) {
rt_putln((((P805)rt_nil_check((*(P816)rt_nil_check(F->l_924)).s))->all));
F->l_924 = (*(P816)rt_nil_check(F->l_924)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P835 a_32, P835 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P835)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P835)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P835)rt_nil_check(F->a_32)).head = (*(P835)rt_nil_check(F->b_33)).head;
} else {
(*(P816)rt_nil_check((*(P835)rt_nil_check(F->a_32)).tail)).next = (*(P835)rt_nil_check(F->b_33)).head;
}
(*(P835)rt_nil_check(F->a_32)).tail = (*(P835)rt_nil_check(F->b_33)).tail;
(*(P835)rt_nil_check(F->b_33)).head = NULL;
(*(P835)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel925 = (*F->w_35);
if (0 || rt_str_eq(sel925, rt_str("ABBREV", 6)) || rt_str_eq(sel925, rt_str("ABNORMAL", 8)) || rt_str_eq(sel925, rt_str("ALL", 3)) || rt_str_eq(sel925, rt_str("ALLOC", 5)) || rt_str_eq(sel925, rt_str("ASSERT", 6)) || rt_str_eq(sel925, rt_str("BEGIN", 5)) || rt_str_eq(sel925, rt_str("BY", 2)) || rt_str_eq(sel925, rt_str("CAPSULE", 7)) || rt_str_eq(sel925, rt_str("CASE", 4)) || rt_str_eq(sel925, rt_str("CONST", 5)) || rt_str_eq(sel925, rt_str("CREATE", 6)) || rt_str_eq(sel925, rt_str("DO", 2)) || rt_str_eq(sel925, rt_str("ELSE", 4)) || rt_str_eq(sel925, rt_str("ELSEIF", 6)) || rt_str_eq(sel925, rt_str("END", 3)) || rt_str_eq(sel925, rt_str("EXCEPTION", 9)) || rt_str_eq(sel925, rt_str("EXIT", 4)) || rt_str_eq(sel925, rt_str("EXPORTS", 7)) || rt_str_eq(sel925, rt_str("EXPOSE", 6)) || rt_str_eq(sel925, rt_str("EXTERNAL", 8)) || rt_str_eq(sel925, rt_str("FOR", 3)) || rt_str_eq(sel925, rt_str("FROM", 4)) || rt_str_eq(sel925, rt_str("FUNC", 4)) || rt_str_eq(sel925, rt_str("GENERIC", 7)) || rt_str_eq(sel925, rt_str("GOTO", 4)) || rt_str_eq(sel925, rt_str("GUARD", 5)) || rt_str_eq(sel925, rt_str("IF", 2)) || rt_str_eq(sel925, rt_str("IMPORTS", 7)) || rt_str_eq(sel925, rt_str("LOCATION", 8)) || rt_str_eq(sel925, rt_str("NAMED", 5)) || rt_str_eq(sel925, rt_str("NEEDS", 5)) || rt_str_eq(sel925, rt_str("NEW", 3)) || rt_str_eq(sel925, rt_str("NONE", 4)) || rt_str_eq(sel925, rt_str("OUT", 3)) || rt_str_eq(sel925, rt_str("OF", 2)) || rt_str_eq(sel925, rt_str("PRAG", 4)) || rt_str_eq(sel925, rt_str("PROC", 4)) || rt_str_eq(sel925, rt_str("RAISE", 5)) || rt_str_eq(sel925, rt_str("READONLY", 8)) || rt_str_eq(sel925, rt_str("REVERSE", 7)) || rt_str_eq(sel925, rt_str("REGION", 6)) || rt_str_eq(sel925, rt_str("RENAMING", 8)) || rt_str_eq(sel925, rt_str("REP", 3)) || rt_str_eq(sel925, rt_str("REPEAT", 6)) || rt_str_eq(sel925, rt_str("RERAISE", 7)) || rt_str_eq(sel925, rt_str("RETURN", 6)) || rt_str_eq(sel925, rt_str("SUBTYPE", 7)) || rt_str_eq(sel925, rt_str("TASK", 4)) || rt_str_eq(sel925, rt_str("THEN", 4)) || rt_str_eq(sel925, rt_str("TO", 2)) || rt_str_eq(sel925, rt_str("TYPE", 4)) || rt_str_eq(sel925, rt_str("VAR", 3)) || rt_str_eq(sel925, rt_str("WAIT", 4)) || rt_str_eq(sel925, rt_str("WHEN", 4)) || rt_str_eq(sel925, rt_str("WHILE", 5))) {
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
F->t_926 = NULL;
{ R808 *cell927 = rt_alloc(sizeof(R808));
(*cell927).s = NULL;
(*cell927).prags = NULL;
F->t_926 = cell927;
}
(*(P807)rt_nil_check(F->t_926)).kind = F->kind_39;
(*(P807)rt_nil_check(F->t_926)).line = rt_r_ichk(g_src_line_846);
(*(P807)rt_nil_check(F->t_926)).ival = F->ival_41;
(*(P807)rt_nil_check(F->t_926)).s = f_mk_3(&(*F->s_40));
(*(P807)rt_nil_check(F->t_926)).prags = g_pending_prag_847;
g_pending_prag_847 = NULL;
g_ntoks_844 = rt_add(rt_r_ichk(g_ntoks_844), ((rt_int)1LL));
(((P809)rt_nil_check(g_toks_843))->all).p[(rt_index(rt_r_ichk(g_ntoks_844), (((P809)rt_nil_check(g_toks_843))->all).lo, (((P809)rt_nil_check(g_toks_843))->all).hi) - (((P809)rt_nil_check(g_toks_843))->all).lo)] = F->t_926;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_928 = RT_R_IUNDEF;
F->j_928 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_928) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_928)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_928))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_928))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_928))) == 95) && ((rt_r_ichk(F->j_928) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_928), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_928), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_928 = rt_add(rt_r_ichk(F->j_928), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_928);
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
F->w_929 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_929, (*F->s_46));
{ rt_int lo931 = ((rt_int)1LL), hi932 = ((rt_int)((F->w_929).len));
for (rt_int it933 = lo931; it933 <= hi932; it933++) {
F->k_930 = it933;
(*rt_str_at(&F->w_929, F->k_930)) = f_upper_13(rt_r_echk(rt_str_get(F->w_929, F->k_930)));
}
}
F->result_ = F->w_929;
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
F->j_934 = RT_R_IUNDEF;
F->j_934 = F->i_49;
while (((rt_r_ichk(F->j_934) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_934))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_934))) == 9)))) {
F->j_934 = rt_add(rt_r_ichk(F->j_934), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_934);
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
F->j_935 = RT_R_IUNDEF;
F->j_935 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_936 = NULL;
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_937 = RT_R_EUNDEF;
F->more_937 = 1;
if (((rt_r_ichk(F->j_935) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
while (rt_r_echk(F->more_937)) {
F->k_938 = RT_R_IUNDEF;
F->j_935 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_935));
if (((rt_r_ichk(F->j_935) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))))))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_938 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_935));
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_935), rt_sub(rt_r_ichk(F->k_938), ((rt_int)1LL))); b_; }))); b_; }));
F->j_935 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_938));
if (((rt_r_ichk(F->j_935) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) == 40))) {
F->go_939 = RT_R_EUNDEF;
F->go_939 = 1;
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), rt_str("(", 1)); b_; }));
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
while (rt_r_echk(F->go_939)) {
F->j_935 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_935));
if (((rt_r_ichk(F->j_935) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))))))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_938 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_935));
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_935), rt_sub(rt_r_ichk(F->k_938), ((rt_int)1LL))); b_; }))); b_; }));
F->j_935 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_938));
if (((rt_r_ichk(F->j_935) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) == 44))) {
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), rt_str(",", 1)); b_; }));
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_935) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) == 41))) {
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
F->go_939 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), rt_str(")", 1)); b_; }));
}
F->r_936 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_936))->all), rt_str(";", 1)); b_; }));
F->j_935 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_935));
if (((rt_r_ichk(F->j_935) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) == 44))) {
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_935) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_935))) == 41))) {
F->j_935 = rt_add(rt_r_ichk(F->j_935), ((rt_int)1LL));
F->more_937 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P805)rt_nil_check(F->r_936))->all));
if ((g_pending_prag_847 == NULL)) {
g_pending_prag_847 = F->r_936;
} else {
g_pending_prag_847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(g_pending_prag_847))->all), (((P805)rt_nil_check(F->r_936))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_935);
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
F->i_940 = RT_R_IUNDEF;
F->i_940 = ((rt_int)1LL);
F->k_941 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_940) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_941 = rt_r_ichk(F->i_940);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_941))) != 59)) {
F->k_941 = rt_add(rt_r_ichk(F->k_941), ((rt_int)1LL));
}
{
F->p_942 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_940), rt_sub(rt_r_ichk(F->k_941), ((rt_int)1LL))));
F->ok_943 = ((((((((((rt_str_eq(F->p_942, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_942, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_942, rt_str("OPEN", 4))) || rt_str_eq(F->p_942, rt_str("CLOSED", 6))) || rt_str_eq(F->p_942, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_942, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_942, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_942, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_942, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_942, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_942).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_942, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_944 = ((((((((((rt_int)((F->p_942).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_942, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_942, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_942, rt_str("OPEN", 4))) || rt_str_eq(F->p_942, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_942).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_942, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_942, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_942, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_942).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_942, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_944 && (!F->ok_943))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_942); b_; }));
}
}
F->i_940 = rt_add(rt_r_ichk(F->k_941), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_945 = RT_R_IUNDEF;
F->i_945 = ((rt_int)1LL);
F->j_946 = RT_R_IUNDEF;
F->j_946 = ((rt_int)0LL);
F->n_947 = RT_R_IUNDEF;
F->n_947 = ((rt_int)(((*F->line_56)).len));
F->c_948 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_945) <= rt_r_ichk(F->n_947))) {
F->c_948 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_945)));
if (((((rt_r_echk(F->c_948) == 32) || (rt_r_echk(F->c_948) == 9)) || (rt_r_echk(F->c_948) == 13)) || (rt_r_echk(F->c_948) == 12))) {
F->i_945 = rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_948) == 37)) {
F->i_945 = rt_add(rt_r_ichk(F->n_947), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_948))) {
F->j_946 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_945));
{
F->w_949 = rt_str_new(rt_sub(rt_r_ichk(F->j_946), rt_r_ichk(F->i_945)));
rt_str_assign(&F->w_949, rt_str_slice((*F->line_56), rt_r_ichk(F->i_945), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))));
{ rt_int lo951 = ((rt_int)1LL), hi952 = ((rt_int)((F->w_949).len));
for (rt_int it953 = lo951; it953 <= hi952; it953++) {
F->k_950 = it953;
(*rt_str_at(&F->w_949, F->k_950)) = f_upper_13(rt_r_echk(rt_str_get(F->w_949, F->k_950)));
}
}
if (rt_str_eq(F->w_949, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) != 59))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
} else if (rt_str_eq(F->w_949, rt_str("PRAG", 4))) {
F->j_946 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_946));
} else if (f_is_reserved_36(&F->w_949)) {
f_add_token_42((((rt_int)2LL)), &F->w_949, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_949)) {
f_add_token_42((((rt_int)3LL)), &F->w_949, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_949, ((rt_int)0LL));
}
}
F->i_945 = rt_r_ichk(F->j_946);
} else if (f_is_digit_11(rt_r_echk(F->c_948))) {
F->j_946 = rt_r_ichk(F->i_945);
while (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946)))))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_946) < rt_r_ichk(F->n_947)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL))))))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
while (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946)))))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 101)))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
if (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 45)))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946)))))) {
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_945), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_945), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_945), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL)))));
}
F->i_945 = rt_r_ichk(F->j_946);
} else if ((((rt_r_echk(F->c_948) == 39) && (rt_r_ichk(F->i_945) < rt_r_ichk(F->n_947))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL)))) == 39))) {
F->j_946 = rt_add(rt_r_ichk(F->i_945), ((rt_int)2LL));
while (((rt_r_ichk(F->j_946) < rt_r_ichk(F->n_947)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_946) >= rt_r_ichk(F->n_947))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_945), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_945 = rt_add(rt_r_ichk(F->j_946), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_948) == 39)) {
F->j_946 = rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL));
if (((rt_r_ichk(F->j_946) > rt_r_ichk(F->n_947)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))))))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_946 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_946));
{
F->w_954 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_946), rt_r_ichk(F->i_945)), ((rt_int)1LL)));
rt_str_assign(&F->w_954, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))));
{ rt_int lo956 = ((rt_int)1LL), hi957 = ((rt_int)((F->w_954).len));
for (rt_int it958 = lo956; it958 <= hi957; it958++) {
F->k_955 = it958;
(*rt_str_at(&F->w_954, F->k_955)) = f_upper_13(rt_r_echk(rt_str_get(F->w_954, F->k_955)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_954, ((rt_int)0LL));
}
F->i_945 = rt_r_ichk(F->j_946);
} else if ((rt_r_echk(F->c_948) == 34)) {
F->j_946 = rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL));
while (((rt_r_ichk(F->j_946) <= rt_r_ichk(F->n_947)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_946))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_946 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_946) > rt_r_ichk(F->n_947))) {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_946), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_945 = rt_add(rt_r_ichk(F->j_946), ((rt_int)1LL));
} else {
{
F->two_959 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_959, rt_str("  ", 2));
(*rt_str_at(&F->two_959, ((rt_int)1LL))) = rt_r_echk(F->c_948);
if ((rt_r_ichk(F->i_945) < rt_r_ichk(F->n_947))) {
(*rt_str_at(&F->two_959, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_959, rt_str(":=", 2)) || rt_str_eq(F->two_959, rt_str("=>", 2))) || rt_str_eq(F->two_959, rt_str("..", 2))) || rt_str_eq(F->two_959, rt_str("**", 2))) || rt_str_eq(F->two_959, rt_str("/=", 2))) || rt_str_eq(F->two_959, rt_str("<=", 2))) || rt_str_eq(F->two_959, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_959, ((rt_int)0LL));
F->i_945 = rt_add(rt_r_ichk(F->i_945), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_959, rt_str("<<", 2)) || rt_str_eq(F->two_959, rt_str(">>", 2))) || rt_str_eq(F->two_959, rt_str("::", 2)))) {
if (rt_str_eq(F->two_959, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_959, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_945 = rt_add(rt_r_ichk(F->i_945), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_948) == 40) || (rt_r_echk(F->c_948) == 41)) || (rt_r_echk(F->c_948) == 91)) || (rt_r_echk(F->c_948) == 93)) || (rt_r_echk(F->c_948) == 44)) || (rt_r_echk(F->c_948) == 58)) || (rt_r_echk(F->c_948) == 59)) || (rt_r_echk(F->c_948) == 46)) || (rt_r_echk(F->c_948) == 35)) || (rt_r_echk(F->c_948) == 43)) || (rt_r_echk(F->c_948) == 45)) || (rt_r_echk(F->c_948) == 42)) || (rt_r_echk(F->c_948) == 47)) || (rt_r_echk(F->c_948) == 38)) || (rt_r_echk(F->c_948) == 61)) || (rt_r_echk(F->c_948) == 60)) || (rt_r_echk(F->c_948) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_948)); b_; }), ((rt_int)0LL));
F->i_945 = rt_add(rt_r_ichk(F->i_945), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_846), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_960 = rt_str_new(rt_sizeln());
rt_readln(&F->line_960);
g_src_line_846 = rt_add(rt_r_ichk(g_src_line_846), ((rt_int)1LL));
f_lex_line_57(&F->line_960);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P812 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_961 = NULL;
{ R813 *cell962 = rt_alloc(sizeof(R813));
(*cell962).name = NULL;
(*cell962).tag = NULL;
(*cell962).prags = NULL;
(*cell962).labels = NULL;
(*cell962).a = NULL;
(*cell962).b = NULL;
(*cell962).c = NULL;
(*cell962).d = NULL;
(*cell962).e = NULL;
(*cell962).next = NULL;
F->x_961 = cell962;
}
(*(P812)rt_nil_check(F->x_961)).kind = F->kind_59;
(*(P812)rt_nil_check(F->x_961)).line = F->line_60;
F->result_ = F->x_961;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P812 *head_62, P812 *tail_63, P812 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P812)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P812)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P812)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P812 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_963 = RT_R_IUNDEF;
F->n_963 = ((rt_int)0LL);
F->p_964 = NULL;
F->p_964 = F->l_66;
while ((F->p_964 != NULL)) {
F->n_963 = rt_add(rt_r_ichk(F->n_963), ((rt_int)1LL));
F->p_964 = (*(P812)rt_nil_check(F->p_964)).next;
}
F->result_ = rt_r_ichk(F->n_963);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_845), F->k_75) > rt_r_ichk(g_ntoks_844))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_845), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P805 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_845), F->k_77) > rt_r_ichk(g_ntoks_844))) {
F->result_ = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_844), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_845), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
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
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
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
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
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
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P805 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_845), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_965 = NULL;
F->x_965 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P812)rt_nil_check(F->x_965)).name = f_expect_id_89();
F->result_ = F->x_965;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_966 = NULL;
F->tail_967 = NULL;
f_append_65(&F->head_966, &F->tail_967, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_966, &F->tail_967, f_name_node_90());
}
F->result_ = F->head_966;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_968 = RT_R_IUNDEF;
F->line_968 = f_cur_line_68();
F->x_969 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->x_969 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_968));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P812)rt_nil_check(F->x_969)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_969;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_970 = rt_str_copy((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if (rt_str_eq(F->w_970, rt_str("ARRAY", 5))) {
F->x_969 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_968));
{
F->head_971 = NULL;
F->tail_972 = NULL;
f_append_65(&F->head_971, &F->tail_972, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_971, &F->tail_972, f_p_subtype_92());
}
(*(P812)rt_nil_check(F->x_969)).a = F->head_971;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P812)rt_nil_check(F->x_969)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_970, rt_str("RECORD", 6)) || rt_str_eq(F->w_970, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_970, rt_str("RECORD", 6))) {
F->x_969 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_968));
} else {
F->x_969 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_968));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_973 = NULL;
F->tail_974 = NULL;
F->more_975 = RT_R_EUNDEF;
F->more_975 = 1;
while (rt_r_echk(F->more_975)) {
F->names_976 = NULL;
F->names_976 = f_id_list_91();
F->st_977 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_977 = f_p_subtype_92();
while ((F->names_976 != NULL)) {
F->cmp_978 = NULL;
F->cmp_978 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P812)rt_nil_check(F->names_976)).line));
(*(P812)rt_nil_check(F->cmp_978)).name = (*(P812)rt_nil_check(F->names_976)).name;
(*(P812)rt_nil_check(F->cmp_978)).a = F->st_977;
f_append_65(&F->head_973, &F->tail_974, F->cmp_978);
F->names_976 = (*(P812)rt_nil_check(F->names_976)).next;
}
F->more_975 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->x_969)).a = F->head_973;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_970, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_969)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_970, rt_str("ENUM", 4))) {
F->x_969 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_968));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_979 = NULL;
F->tail_980 = NULL;
F->more_981 = RT_R_EUNDEF;
F->more_981 = 1;
while (rt_r_echk(F->more_981)) {
F->lit_982 = NULL;
F->lit_982 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_968));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P812)rt_nil_check(F->lit_982)).name = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
f_append_65(&F->head_979, &F->tail_980, F->lit_982);
F->more_981 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->x_969)).a = F->head_979;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_969)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P812)rt_nil_check(F->x_969)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_970, rt_str("STRING", 6)) || rt_str_eq(F->w_970, rt_str("SET", 3))) || rt_str_eq(F->w_970, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_970, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_970, rt_str("STRING", 6))) {
F->x_969 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_968));
} else if (rt_str_eq(F->w_970, rt_str("SET", 3))) {
F->x_969 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_968));
} else if (rt_str_eq(F->w_970, rt_str("MAILBOX", 7))) {
F->x_969 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_968));
} else {
F->x_969 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_968));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P812)rt_nil_check(F->x_969)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_969)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_970, rt_str("INT", 3))) {
F->x_969 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_968));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_969)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P812)rt_nil_check(F->x_969)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_970, rt_str("FLOAT", 5))) {
F->x_969 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_968));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_969)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_969)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P812)rt_nil_check(F->x_969)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_969 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_968));
(*(P812)rt_nil_check(F->x_969)).name = f_mk_3(&F->w_970);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_969)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_969)).b = f_constraint_list_93();
(*(P812)rt_nil_check(F->x_969)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_969;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_983 = NULL;
F->tail_984 = NULL;
F->more_985 = RT_R_EUNDEF;
F->more_985 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_985)) {
F->line_986 = RT_R_IUNDEF;
F->line_986 = f_cur_line_68();
F->lo_987 = NULL;
F->lo_987 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_988 = NULL;
F->r_988 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_986));
(*(P812)rt_nil_check(F->r_988)).a = F->lo_987;
(*(P812)rt_nil_check(F->r_988)).b = f_expr_103();
f_append_65(&F->head_983, &F->tail_984, F->r_988);
} else {
f_append_65(&F->head_983, &F->tail_984, F->lo_987);
}
F->more_985 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_983;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_989 = NULL;
F->tail_990 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_989, &F->tail_990, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_989, &F->tail_990, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_989;
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

static P812 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_991 = NULL;
F->tail_992 = NULL;
F->more_993 = RT_R_EUNDEF;
F->more_993 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_993)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P805)rt_nil_check((*(P807)rt_nil_check((((P809)rt_nil_check(g_toks_843))->all).p[(rt_index(rt_r_ichk(g_tpos_845), (((P809)rt_nil_check(g_toks_843))->all).lo, (((P809)rt_nil_check(g_toks_843))->all).hi) - (((P809)rt_nil_check(g_toks_843))->all).lo)])).s))->all)))) {
f_append_65(&F->head_991, &F->tail_992, f_p_subtype_92());
} else {
f_append_65(&F->head_991, &F->tail_992, f_expr_103());
}
F->more_993 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_991;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_binop_102(P805 op_98, P812 l_99, P812 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_994 = NULL;
F->x_994 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P812)rt_nil_check(F->x_994)).name = F->op_98;
(*(P812)rt_nil_check(F->x_994)).a = F->l_99;
(*(P812)rt_nil_check(F->x_994)).b = F->r_100;
F->result_ = F->x_994;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_995 = NULL;
F->l_995 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_996 = NULL;
F->op_996 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_997 = RT_R_IUNDEF;
F->line_997 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_995 = f_binop_102(F->op_996, F->l_995, f_expr_and_104(), rt_r_ichk(F->line_997));
}
F->result_ = F->l_995;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_998 = NULL;
F->l_998 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_999 = RT_R_IUNDEF;
F->line_999 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_998 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_998, f_expr_not_105(), rt_r_ichk(F->line_999));
}
F->result_ = F->l_998;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1000 = NULL;
F->x_1000 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1000)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P812)rt_nil_check(F->x_1000)).a = f_expr_not_105();
F->result_ = F->x_1000;
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

static P812 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1001 = NULL;
F->l_1001 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P805)rt_nil_check((*(P807)rt_nil_check((((P809)rt_nil_check(g_toks_843))->all).p[(rt_index(rt_r_ichk(g_tpos_845), (((P809)rt_nil_check(g_toks_843))->all).lo, (((P809)rt_nil_check(g_toks_843))->all).hi) - (((P809)rt_nil_check(g_toks_843))->all).lo)])).s))->all)))) {
F->op_1002 = NULL;
F->op_1002 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1003 = RT_R_IUNDEF;
F->line_1003 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_1001 = f_binop_102(F->op_1002, F->l_1001, f_expr_add_109(), rt_r_ichk(F->line_1003));
}
F->result_ = F->l_1001;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1004 = NULL;
F->l_1004 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1005 = NULL;
F->op_1005 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1006 = RT_R_IUNDEF;
F->line_1006 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_1004 = f_binop_102(F->op_1005, F->l_1004, f_expr_mul_110(), rt_r_ichk(F->line_1006));
}
F->result_ = F->l_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1007 = NULL;
F->l_1007 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1008 = NULL;
F->op_1008 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1009 = RT_R_IUNDEF;
F->line_1009 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_1007 = f_binop_102(F->op_1008, F->l_1007, f_expr_pow_111(), rt_r_ichk(F->line_1009));
}
F->result_ = F->l_1007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1010 = NULL;
F->l_1010 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1011 = RT_R_IUNDEF;
F->line_1011 = f_cur_line_68();
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->l_1010 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1010, f_expr_prefix_112(), rt_r_ichk(F->line_1011));
}
F->result_ = F->l_1010;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1012 = NULL;
F->x_1012 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P812)rt_nil_check(F->x_1012)).name = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1012)).a = f_expr_prefix_112();
F->result_ = F->x_1012;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1013 = NULL;
F->p_1013 = f_primary_114();
while (1) {
F->line_1014 = RT_R_IUNDEF;
F->line_1014 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1015 = NULL;
F->x_1015 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1014));
F->head_1016 = NULL;
F->tail_1017 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1018 = RT_R_EUNDEF;
F->more_1018 = 1;
while (rt_r_echk(F->more_1018)) {
F->lo_1019 = NULL;
F->lo_1019 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1020 = NULL;
F->r_1020 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1014));
(*(P812)rt_nil_check(F->r_1020)).a = F->lo_1019;
(*(P812)rt_nil_check(F->r_1020)).b = f_expr_103();
f_append_65(&F->head_1016, &F->tail_1017, F->r_1020);
} else {
f_append_65(&F->head_1016, &F->tail_1017, F->lo_1019);
}
F->more_1018 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P812)rt_nil_check(F->x_1015)).a = F->p_1013;
(*(P812)rt_nil_check(F->x_1015)).b = F->head_1016;
F->p_1013 = F->x_1015;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1021 = NULL;
F->x_1021 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1014));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1021)).a = F->p_1013;
(*(P812)rt_nil_check(F->x_1021)).name = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->p_1013 = F->x_1021;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P812)rt_nil_check(F->p_1013)).kind) == (((rt_int)7LL))))) {
F->x_1022 = NULL;
F->x_1022 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1014));
(*(P812)rt_nil_check(F->x_1022)).a = F->p_1013;
(*(P812)rt_nil_check(F->x_1022)).b = f_actual_tt_97();
F->p_1013 = F->x_1022;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1023 = NULL;
F->x_1023 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1014));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1023)).a = F->p_1013;
(*(P812)rt_nil_check(F->x_1023)).b = f_p_subtype_92();
F->p_1013 = F->x_1023;
} else {
F->result_ = F->p_1013;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1024 = RT_R_IUNDEF;
F->line_1024 = f_cur_line_68();
F->x_1025 = NULL;
F->k_1026 = RT_R_IUNDEF;
F->k_1026 = rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1026) == (((rt_int)4LL)))) {
F->x_1025 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1024));
(*(P812)rt_nil_check(F->x_1025)).ival = rt_r_ichk((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P812)rt_nil_check(F->x_1025)).name = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = F->x_1025;
goto ret_;
}
if ((((rt_r_ichk(F->k_1026) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1026) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1026) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1026) == (((rt_int)5LL)))) {
F->x_1025 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1024));
} else if ((rt_r_ichk(F->k_1026) == (((rt_int)7LL)))) {
F->x_1025 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1024));
} else {
F->x_1025 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1024));
}
(*(P812)rt_nil_check(F->x_1025)).name = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = F->x_1025;
goto ret_;
}
if ((rt_r_ichk(F->k_1026) == (((rt_int)1LL)))) {
F->w_1027 = rt_str_copy((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1027, rt_str("TRUE", 4)) || rt_str_eq(F->w_1027, rt_str("FALSE", 5)))) {
F->x_1025 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1024));
if (rt_str_eq(F->w_1027, rt_str("TRUE", 4))) {
(*(P812)rt_nil_check(F->x_1025)).ival = ((rt_int)1LL);
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = F->x_1025;
goto ret_;
}
if (rt_str_eq(F->w_1027, rt_str("NIL", 3))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1024));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1025 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1024));
(*(P812)rt_nil_check(F->x_1025)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1025;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1028 = NULL;
F->tail_1029 = NULL;
F->x_1025 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1024));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1030 = RT_R_EUNDEF;
F->more_1030 = 1;
while (rt_r_echk(F->more_1030)) {
f_append_65(&F->head_1028, &F->tail_1029, f_constructor_item_115());
F->more_1030 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P812)rt_nil_check(F->x_1025)).a = F->head_1028;
F->result_ = F->x_1025;
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

static P812 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1031 = RT_R_IUNDEF;
F->line_1031 = f_cur_line_68();
F->it_1032 = NULL;
F->it_1032 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1031));
F->first_1033 = NULL;
F->first_1033 = f_expr_103();
F->keys_1034 = NULL;
F->ktail_1035 = NULL;
F->lab_1036 = NULL;
F->lab_1036 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1031));
(*(P812)rt_nil_check(F->lab_1036)).a = F->first_1033;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P812)rt_nil_check(F->lab_1036)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1034, &F->ktail_1035, F->lab_1036);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1037 = RT_R_IUNDEF;
F->save_1037 = rt_r_ichk(g_tpos_845);
F->more_1038 = NULL;
F->tail2_1039 = NULL;
F->ok_1040 = RT_R_EUNDEF;
F->ok_1040 = 0;
F->go_1041 = RT_R_EUNDEF;
F->go_1041 = 1;
while ((rt_r_echk(F->go_1041) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1042 = NULL;
F->l2_1042 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1031));
(*(P812)rt_nil_check(F->l2_1042)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P812)rt_nil_check(F->l2_1042)).b = f_expr_103();
}
f_append_65(&F->more_1038, &F->tail2_1039, F->l2_1042);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1040 = 1;
F->go_1041 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1041 = 0;
}
}
if (rt_r_echk(F->ok_1040)) {
f_append_65(&F->keys_1034, &F->ktail_1035, F->lab_1036);
f_append_65(&F->keys_1034, &F->ktail_1035, F->more_1038);
} else {
g_tpos_845 = rt_r_ichk(F->save_1037);
}
}
if (((F->keys_1034 == NULL) && ((*(P812)rt_nil_check(F->lab_1036)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1034 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P812)rt_nil_check(F->it_1032)).a = F->keys_1034;
(*(P812)rt_nil_check(F->it_1032)).b = f_expr_103();
} else {
(*(P812)rt_nil_check(F->it_1032)).b = F->first_1033;
}
F->result_ = F->it_1032;
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

static P812 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1043 = NULL;
F->tail_1044 = NULL;
F->stmts_1045 = RT_R_EUNDEF;
F->stmts_1045 = 0;
F->after_1046 = NULL;
while ((!f_at_body_end_116())) {
F->x_1047 = NULL;
F->x_1047 = f_body_element_118();
if (((F->x_1047 != NULL) && ((((rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1045)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1047 != NULL) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1045) && (F->after_1046 == NULL))) {
F->after_1046 = F->x_1047;
}
} else if (((F->x_1047 != NULL) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1047)).kind) != (((rt_int)33LL))))) {
if ((F->after_1046 != NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->after_1046)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1045 = 1;
}
f_append_65(&F->head_1043, &F->tail_1044, F->x_1047);
}
F->result_ = F->head_1043;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1048 = NULL;
F->pr_1049 = NULL;
F->pr_1049 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1048 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1048 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1048)).a = f_expr_103();
} else {
F->x_1048 = f_statement_140();
}
if ((F->pr_1049 != NULL)) {
F->p_1050 = NULL;
F->p_1050 = F->x_1048;
while ((F->p_1050 != NULL)) {
if (((*(P812)rt_nil_check(F->p_1050)).prags == NULL)) {
(*(P812)rt_nil_check(F->p_1050)).prags = F->pr_1049;
} else {
(*(P812)rt_nil_check(F->p_1050)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->pr_1049))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1050)).prags))->all)); b_; }));
}
F->p_1050 = (*(P812)rt_nil_check(F->p_1050)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1048;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1051 = RT_R_IUNDEF;
F->line_1051 = f_cur_line_68();
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
F->head_1052 = NULL;
F->tail_1053 = NULL;
F->names_1054 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->names_1054 = f_id_list_91();
while ((F->names_1054 != NULL)) {
F->x_1055 = NULL;
F->x_1055 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1051));
(*(P812)rt_nil_check(F->x_1055)).name = (*(P812)rt_nil_check(F->names_1054)).name;
f_append_65(&F->head_1052, &F->tail_1053, F->x_1055);
F->names_1054 = (*(P812)rt_nil_check(F->names_1054)).next;
}
F->result_ = F->head_1052;
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

static P812 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1056 = RT_R_IUNDEF;
F->line_1056 = f_cur_line_68();
F->is_var_1057 = RT_R_EUNDEF;
F->is_var_1057 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1058 = NULL;
F->st_1059 = NULL;
F->init_1060 = NULL;
F->loc_1061 = NULL;
F->loc_kind_1062 = RT_R_IUNDEF;
F->loc_kind_1062 = ((rt_int)0LL);
F->head_1063 = NULL;
F->tail_1064 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->names_1058 = f_id_list_91();
if (rt_r_echk(F->is_var_1057)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1059 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->loc_kind_1062 = ((rt_int)1LL);
} else {
F->loc_kind_1062 = ((rt_int)2LL);
}
F->loc_1061 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1060 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1059 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1060 = f_expr_103();
}
while ((F->names_1058 != NULL)) {
F->x_1065 = NULL;
if (rt_r_echk(F->is_var_1057)) {
F->x_1065 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1056));
} else {
F->x_1065 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1056));
}
(*(P812)rt_nil_check(F->x_1065)).name = (*(P812)rt_nil_check(F->names_1058)).name;
(*(P812)rt_nil_check(F->x_1065)).a = F->st_1059;
(*(P812)rt_nil_check(F->x_1065)).b = F->init_1060;
(*(P812)rt_nil_check(F->x_1065)).c = F->loc_1061;
(*(P812)rt_nil_check(F->x_1065)).ival = rt_r_ichk(F->loc_kind_1062);
f_append_65(&F->head_1063, &F->tail_1064, F->x_1065);
F->names_1058 = (*(P812)rt_nil_check(F->names_1058)).next;
}
F->result_ = F->head_1063;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1066 = NULL;
F->x_1066 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1066)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1066)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P812)rt_nil_check(F->x_1066)).a = f_p_subtype_92();
F->result_ = F->x_1066;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1067 = RT_R_IUNDEF;
F->depth_1067 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1067) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1067 = rt_add(rt_r_ichk(F->depth_1067), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1067 = rt_sub(rt_r_ichk(F->depth_1067), ((rt_int)1LL));
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P812 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1068 = RT_R_IUNDEF;
F->line_1068 = f_cur_line_68();
F->name_1069 = NULL;
F->params_1070 = NULL;
F->x_1071 = NULL;
F->tts_1072 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->name_1069 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1072 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1070 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->x_1071 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1068));
(*(P812)rt_nil_check(F->x_1071)).d = F->params_1070;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1071)).b = f_formal_params_126();
}
} else {
F->x_1071 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1068));
(*(P812)rt_nil_check(F->x_1071)).b = F->params_1070;
}
(*(P812)rt_nil_check(F->x_1071)).name = F->name_1069;
(*(P812)rt_nil_check(F->x_1071)).e = F->tts_1072;
(*(P812)rt_nil_check(F->x_1071)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1071;
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

static P812 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1073 = NULL;
F->tail_1074 = NULL;
F->more_1075 = RT_R_EUNDEF;
F->more_1075 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1075)) {
F->mode_1076 = RT_R_IUNDEF;
F->mode_1076 = (((rt_int)1LL));
F->names_1077 = NULL;
F->ntail_1078 = NULL;
F->st_1079 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1076 = f_mode_of_125(&(((P805)rt_nil_check((*(P807)rt_nil_check((((P809)rt_nil_check(g_toks_843))->all).p[(rt_index(rt_r_ichk(g_tpos_845), (((P809)rt_nil_check(g_toks_843))->all).lo, (((P809)rt_nil_check(g_toks_843))->all).hi) - (((P809)rt_nil_check(g_toks_843))->all).lo)])).s))->all));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
}
f_append_65(&F->names_1077, &F->ntail_1078, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P805)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P805)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
f_append_65(&F->names_1077, &F->ntail_1078, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1079 = f_p_subtype_92();
while ((F->names_1077 != NULL)) {
F->p_1080 = NULL;
F->p_1080 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P812)rt_nil_check(F->names_1077)).line));
(*(P812)rt_nil_check(F->p_1080)).name = (*(P812)rt_nil_check(F->names_1077)).name;
(*(P812)rt_nil_check(F->p_1080)).ival = rt_r_ichk(F->mode_1076);
(*(P812)rt_nil_check(F->p_1080)).a = F->st_1079;
f_append_65(&F->head_1073, &F->tail_1074, F->p_1080);
F->names_1077 = (*(P812)rt_nil_check(F->names_1077)).next;
}
F->more_1075 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1073;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P812 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1081 = NULL;
F->tail_1082 = NULL;
F->more_1083 = RT_R_EUNDEF;
F->more_1083 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P812)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P812)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1083)) {
F->ro_1084 = RT_R_EUNDEF;
F->ro_1084 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1085 = NULL;
F->x_1085 = f_name_node_90();
if (rt_r_echk(F->ro_1084)) {
(*(P812)rt_nil_check(F->x_1085)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1081, &F->tail_1082, F->x_1085);
F->more_1083 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->owner_127)).d = F->head_1081;
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

static P805 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P805)rt_nil_check((*(P807)rt_nil_check((((P809)rt_nil_check(g_toks_843))->all).p[(rt_index(rt_r_ichk(g_tpos_845), (((P809)rt_nil_check(g_toks_843))->all).lo, (((P809)rt_nil_check(g_toks_843))->all).hi) - (((P809)rt_nil_check(g_toks_843))->all).lo)])).s))->all))))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_845), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P812 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1086 = RT_R_IUNDEF;
F->line_1086 = f_cur_line_68();
F->x_1087 = NULL;
F->is_abn_1088 = RT_R_EUNDEF;
F->is_abn_1088 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1089 = RT_R_EUNDEF;
F->is_func_1089 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1090 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1089)) {
F->x_1087 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1086));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1087 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1086));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1088)) {
(*(P812)rt_nil_check(F->x_1087)).flag = ((rt_int)1LL);
}
(*(P812)rt_nil_check(F->x_1087)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1087)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1087)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1089)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P812)rt_nil_check(F->x_1087)).b = f_p_subtype_92();
}
F->dummy_1090 = f_imports_list_128(F->x_1087);
if (((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P812)rt_nil_check(F->x_1087)).prags == NULL)) {
(*(P812)rt_nil_check(F->x_1087)).prags = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P812)rt_nil_check(F->x_1087)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1087)).prags))->all), (((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P812)rt_nil_check(F->x_1087)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1089)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P805)rt_nil_check(f_definable_name_131()))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1087)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1087)).name))->all)); b_; }));
}
F->result_ = F->x_1087;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1091 = NULL;
F->x_1091 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1092 = RT_R_EUNDEF;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1091)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1091)).b = f_formal_params_126();
}
F->dummy_1092 = f_imports_list_128(F->x_1091);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P812)rt_nil_check(F->x_1091)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P812)rt_nil_check(F->x_1091)).ival = ((rt_int)0LL);
} else {
F->head_1093 = NULL;
F->tail_1094 = NULL;
F->more_1095 = RT_R_EUNDEF;
F->more_1095 = 1;
while (rt_r_echk(F->more_1095)) {
F->n_1096 = NULL;
F->n_1096 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P812)rt_nil_check(F->n_1096)).ival = ((rt_int)1LL);
}
(*(P812)rt_nil_check(F->n_1096)).name = f_definable_name_131();
f_append_65(&F->head_1093, &F->tail_1094, F->n_1096);
F->more_1095 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->x_1091)).a = F->head_1093;
(*(P812)rt_nil_check(F->x_1091)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P812)rt_nil_check(F->x_1091)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P805)rt_nil_check(f_expect_id_89()))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1091)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1091;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1097 = NULL;
F->tail_1098 = NULL;
F->more_1099 = RT_R_EUNDEF;
F->more_1099 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1099)) {
f_append_65(&F->head_1097, &F->tail_1098, f_name_node_90());
F->more_1099 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1097;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1100 = NULL;
F->x_1100 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1101 = NULL;
F->tail_1102 = NULL;
F->more_1103 = RT_R_EUNDEF;
F->more_1103 = 1;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
while (rt_r_echk(F->more_1103)) {
F->names_1104 = NULL;
F->names_1104 = f_id_list_91();
F->kind_1105 = RT_R_IUNDEF;
F->kind_1105 = ((rt_int)6LL);
F->st_1106 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1105 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1105 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1105 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1105 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1105 = ((rt_int)5LL);
} else {
F->st_1106 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1105) <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P812)rt_nil_check(F->x_1100)).e = f_actual_params_94();
} else if (((rt_r_ichk(F->kind_1105) >= ((rt_int)3LL)) && (rt_r_ichk(F->kind_1105) <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1106 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
}
if (((rt_r_ichk(F->kind_1105) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1106 = f_p_subtype_92();
}
}
while ((F->names_1104 != NULL)) {
F->p_1107 = NULL;
F->p_1107 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P812)rt_nil_check(F->names_1104)).line));
(*(P812)rt_nil_check(F->p_1107)).name = (*(P812)rt_nil_check(F->names_1104)).name;
(*(P812)rt_nil_check(F->p_1107)).ival = rt_r_ichk(F->kind_1105);
(*(P812)rt_nil_check(F->p_1107)).a = F->st_1106;
f_append_65(&F->head_1101, &F->tail_1102, F->p_1107);
F->names_1104 = (*(P812)rt_nil_check(F->names_1104)).next;
}
F->more_1103 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1103 = 1;
while (rt_r_echk(F->more_1103)) {
F->nm_1108 = NULL;
F->nm_1108 = f_definable_name_131();
F->st_1109 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1109 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1109 = f_p_subtype_92();
}
F->more_1103 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P812)rt_nil_check(F->x_1100)).a = F->head_1101;
(*(P812)rt_nil_check(F->x_1100)).b = f_declaration_119();
(*(P812)rt_nil_check(F->x_1100)).name = (*(P812)rt_nil_check((*(P812)rt_nil_check(F->x_1100)).b)).name;
F->result_ = F->x_1100;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1110 = NULL;
F->x_1110 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1111 = RT_R_EUNDEF;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1110)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1110)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1110)).a = f_formal_params_126();
}
F->dummy_1111 = f_imports_list_128(F->x_1110);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P812)rt_nil_check(F->x_1110)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P805)rt_nil_check(f_expect_id_89()))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1110)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1110)).name))->all)); b_; }));
}
F->result_ = F->x_1110;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1112 = NULL;
F->x_1112 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P812)rt_nil_check(F->x_1112)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1113 = NULL;
F->tail_1114 = NULL;
F->more_1115 = RT_R_EUNDEF;
F->more_1115 = 1;
while (rt_r_echk(F->more_1115)) {
F->n_1116 = NULL;
F->n_1116 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P812)rt_nil_check(F->n_1116)).ival = ((rt_int)1LL);
}
(*(P812)rt_nil_check(F->n_1116)).name = f_definable_name_131();
f_append_65(&F->head_1113, &F->tail_1114, F->n_1116);
F->more_1115 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->x_1112)).a = F->head_1113;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P812)rt_nil_check(F->x_1112)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P812)rt_nil_check(F->x_1112)).flag = rt_add(rt_r_ichk((*(P812)rt_nil_check(F->x_1112)).flag), ((rt_int)2LL));
}
(*(P812)rt_nil_check(F->x_1112)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1112)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1117 = NULL;
F->tail_1118 = NULL;
F->more_1119 = RT_R_EUNDEF;
F->more_1119 = 1;
while (rt_r_echk(F->more_1119)) {
F->n_1120 = NULL;
F->n_1120 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1121 = NULL;
F->tgt_1121 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P812)rt_nil_check(F->n_1120)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P812)rt_nil_check(F->tgt_1121)).name = f_definable_name_131();
(*(P812)rt_nil_check(F->n_1120)).a = F->tgt_1121;
f_append_65(&F->head_1117, &F->tail_1118, F->n_1120);
F->more_1119 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P812)rt_nil_check(F->x_1112)).c = F->head_1117;
}
F->result_ = F->x_1112;
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

static P812 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1122 = NULL;
F->ltail_1123 = NULL;
F->match_1124 = NULL;
F->s_1125 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P805)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1122, &F->ltail_1123, f_name_node_90());
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P805)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1124 = f_expect_id_89();
}
F->s_1125 = f_unlabeled_statement_141();
if ((F->match_1124 != NULL)) {
if ((((((((rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P805)rt_nil_check(f_expect_id_89()))->all), (((P805)rt_nil_check(F->match_1124))->all)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_1125)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P805)rt_nil_check(F->match_1124))->all)); b_; }));
}
(*(P812)rt_nil_check(F->s_1125)).tag = F->match_1124;
}
(*(P812)rt_nil_check(F->s_1125)).labels = F->labels_1122;
F->result_ = F->s_1125;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1126 = RT_R_IUNDEF;
F->line_1126 = f_cur_line_68();
F->x_1127 = NULL;
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
F->x_1127 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).name = f_expect_id_89();
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P812)rt_nil_check(F->x_1127)).a = f_expr_103();
}
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).name = f_expect_id_89();
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).name = f_expect_id_89();
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1126));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1127)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1127)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P812)rt_nil_check(F->x_1127)).a = f_postfix_113();
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1128 = NULL;
F->tail_1129 = NULL;
F->x_1127 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1130 = NULL;
F->itail_1131 = NULL;
F->more_1132 = RT_R_EUNDEF;
F->more_1132 = 1;
while (rt_r_echk(F->more_1132)) {
f_append_65(&F->invs_1130, &F->itail_1131, f_postfix_113());
F->more_1132 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1128, &F->tail_1129, f_arm_145(F->invs_1130, f_body_117(), rt_r_ichk(F->line_1126)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P812)rt_nil_check(F->x_1127)).a = F->head_1128;
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P812)rt_nil_check(F->x_1127)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1127;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1126));
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1127)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P805)rt_nil_check((*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P812)rt_nil_check(F->x_1127)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P812)rt_nil_check(F->x_1127)).c = f_expr_103();
}
F->result_ = F->x_1127;
goto ret_;
}
{
F->target_1133 = NULL;
F->target_1133 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1127 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1126));
(*(P812)rt_nil_check(F->x_1127)).a = F->target_1133;
(*(P812)rt_nil_check(F->x_1127)).b = f_expr_103();
} else {
F->x_1127 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1126));
(*(P812)rt_nil_check(F->x_1127)).a = F->target_1133;
}
}
F->result_ = F->x_1127;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_arm_145(P812 cond_142, P812 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1134 = NULL;
F->x_1134 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P812)rt_nil_check(F->x_1134)).a = F->cond_142;
(*(P812)rt_nil_check(F->x_1134)).b = F->b_143;
F->result_ = F->x_1134;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1135 = NULL;
F->x_1135 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1136 = NULL;
F->tail_1137 = NULL;
F->cond_1138 = NULL;
F->go_1139 = RT_R_EUNDEF;
F->go_1139 = 1;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
F->cond_1138 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1136, &F->tail_1137, f_arm_145(F->cond_1138, f_body_117(), rt_r_ichk((*(P812)rt_nil_check(F->x_1135)).line)));
while (rt_r_echk(F->go_1139)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1138 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1136, &F->tail_1137, f_arm_145(F->cond_1138, f_body_117(), rt_r_ichk((*(P812)rt_nil_check(F->x_1135)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P812)rt_nil_check(F->x_1135)).flag = ((rt_int)1LL);
(*(P812)rt_nil_check(F->x_1135)).b = f_body_117();
} else {
F->go_1139 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P812)rt_nil_check(F->x_1135)).a = F->head_1136;
F->result_ = F->x_1135;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1140 = NULL;
F->x_1140 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1141 = NULL;
F->tail_1142 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1140)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1143 = NULL;
F->ltail_1144 = NULL;
F->more_1145 = RT_R_EUNDEF;
F->more_1145 = 1;
while (rt_r_echk(F->more_1145)) {
F->l_1146 = NULL;
F->l_1146 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P812)rt_nil_check(F->l_1146)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P812)rt_nil_check(F->l_1146)).b = f_expr_103();
}
f_append_65(&F->labs_1143, &F->ltail_1144, F->l_1146);
F->more_1145 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1141, &F->tail_1142, f_arm_145(F->labs_1143, f_body_117(), rt_r_ichk((*(P812)rt_nil_check(F->x_1140)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P812)rt_nil_check(F->x_1140)).flag = ((rt_int)1LL);
(*(P812)rt_nil_check(F->x_1140)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P812)rt_nil_check(F->x_1140)).b = F->head_1141;
F->result_ = F->x_1140;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1147 = NULL;
F->x_1147 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P812)rt_nil_check(F->x_1147)).flag = ((rt_int)1LL);
(*(P812)rt_nil_check(F->x_1147)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P812)rt_nil_check(F->x_1147)).ival = ((rt_int)1LL);
}
(*(P812)rt_nil_check(F->x_1147)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P812)rt_nil_check(F->x_1147)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P812)rt_nil_check(F->x_1147)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1147;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1148 = NULL;
F->x_1148 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1149 = NULL;
F->tail_1150 = NULL;
g_tpos_845 = rt_add(rt_r_ichk(g_tpos_845), ((rt_int)1LL));
(*(P812)rt_nil_check(F->x_1148)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1151 = NULL;
F->h_1151 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P812)rt_nil_check(F->h_1151)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P812)rt_nil_check(F->h_1151)).b = f_body_117();
f_append_65(&F->head_1149, &F->tail_1150, F->h_1151);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P812)rt_nil_check(F->x_1148)).flag = ((rt_int)1LL);
(*(P812)rt_nil_check(F->x_1148)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P812)rt_nil_check(F->x_1148)).b = F->head_1149;
F->result_ = F->x_1148;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1152 = NULL;
F->tail_1153 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1154 = NULL;
F->pr_1154 = (*(P807)rt_nil_check(({ A811 b_ = (((P809)rt_nil_check(g_toks_843))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_845), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1155 = NULL;
F->u_1155 = f_capsule_decl_133();
(*(P812)rt_nil_check(F->u_1155)).prags = F->pr_1154;
f_append_65(&F->head_1152, &F->tail_1153, F->u_1155);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1152;
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
F->h_1156 = RT_R_IUNDEF;
F->h_1156 = ((rt_int)0LL);
{ rt_int lo1158 = ((rt_int)1LL), hi1159 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1160 = lo1158; it1160 <= hi1159; it1160++) {
F->i_1157 = it1160;
F->h_1156 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1156), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_151), F->i_1157))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1156);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1161 = NULL;
F->y_1161 = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_849 != NULL)) {
while ((F->y_1161 != NULL)) {
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1161)).depth) >= rt_r_ichk(g_gdepth_881)) && rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1161)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1161;
goto ret_;
}
F->y_1161 = (*(P822)rt_nil_check(F->y_1161)).chain;
}
F->y_1161 = ({ A828 b_ = (((P826)rt_nil_check(g_genv_849))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1161 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1161)).name))->all), (*F->name_153))) {
F->result_ = F->y_1161;
goto ret_;
}
F->y_1161 = (*(P822)rt_nil_check(F->y_1161)).chain;
}
F->y_1161 = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1161 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1161)).name))->all), (*F->name_153))) {
F->result_ = F->y_1161;
goto ret_;
}
F->y_1161 = (*(P822)rt_nil_check(F->y_1161)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_lookup_decl_156(P812 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1162 = NULL;
F->y_1162 = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(f_hash_152(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1162 != NULL)) {
if (((*(P822)rt_nil_check(F->y_1162)).decl == F->d_155)) {
F->result_ = F->y_1162;
goto ret_;
}
F->y_1162 = (*(P822)rt_nil_check(F->y_1162)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P822 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1163 = RT_R_IUNDEF;
F->h_1163 = f_hash_152(&(((P805)rt_nil_check((*(P822)rt_nil_check(F->y_157)).name))->all));
F->z_1164 = NULL;
F->z_1164 = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(rt_r_ichk(F->h_1163), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1164 != NULL)) {
if ((((rt_r_ichk((*(P822)rt_nil_check(F->z_1164)).depth) == rt_r_ichk(g_depth_851)) && rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->z_1164)).name))->all), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1164)) && (rt_r_ichk((*(P822)rt_nil_check(F->z_1164)).kind) == rt_r_ichk((*(P822)rt_nil_check(F->y_157)).kind))) && (!(f_same_signature_167((*(P822)rt_nil_check(F->y_157)).params, (*(P822)rt_nil_check(F->z_1164)).params) && f_same_tt_164((*(P822)rt_nil_check(F->y_157)).decl, (*(P822)rt_nil_check(F->z_1164)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1164 = (*(P822)rt_nil_check(F->z_1164)).chain;
}
(*(P822)rt_nil_check(F->y_157)).depth = rt_r_ichk(g_depth_851);
(*(P822)rt_nil_check(F->y_157)).chain = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(rt_r_ichk(F->h_1163), b_.lo, b_.hi) - b_.lo)]; });
(((P826)rt_nil_check(g_table_848))->all).p[(rt_index(rt_r_ichk(F->h_1163), (((P826)rt_nil_check(g_table_848))->all).lo, (((P826)rt_nil_check(g_table_848))->all).hi) - (((P826)rt_nil_check(g_table_848))->all).lo)] = F->y_157;
(*(P822)rt_nil_check(F->y_157)).stack = g_scope_stack_852;
g_scope_stack_852 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P822 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = (((rt_r_ichk((*(P822)rt_nil_check(F->y_160)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_160)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_160)).kind) == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P812 a_162, P812 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1165 = NULL;
F->y_1166 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1165 = (*(P812)rt_nil_check(F->a_162)).e;
F->y_1166 = (*(P812)rt_nil_check(F->b_163)).e;
while (((F->x_1165 != NULL) && (F->y_1166 != NULL))) {
if ((!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1165)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->y_1166)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1165 = (*(P812)rt_nil_check(F->x_1165)).next;
F->y_1166 = (*(P812)rt_nil_check(F->y_1166)).next;
}
F->result_ = ((F->x_1165 == NULL) && (F->y_1166 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P824 a_165, P824 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1167 = NULL;
F->x_1167 = F->a_165;
F->y_1168 = NULL;
F->y_1168 = F->b_166;
while (((F->x_1167 != NULL) && (F->y_1168 != NULL))) {
if ((!f_same_212((*(P824)rt_nil_check(F->x_1167)).t, (*(P824)rt_nil_check(F->y_1168)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1167 = (*(P824)rt_nil_check(F->x_1167)).next;
F->y_1168 = (*(P824)rt_nil_check(F->y_1168)).next;
}
F->result_ = ((F->x_1167 == NULL) && (F->y_1168 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_851 = rt_add(rt_r_ichk(g_depth_851), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_852 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(g_scope_stack_852)).depth) == rt_r_ichk(g_depth_851)))) {
(((P826)rt_nil_check(g_table_848))->all).p[(rt_index(f_hash_152(&(((P805)rt_nil_check((*(P822)rt_nil_check(g_scope_stack_852)).name))->all)), (((P826)rt_nil_check(g_table_848))->all).lo, (((P826)rt_nil_check(g_table_848))->all).hi) - (((P826)rt_nil_check(g_table_848))->all).lo)] = (*(P822)rt_nil_check(g_scope_stack_852)).chain;
g_scope_stack_852 = (*(P822)rt_nil_check(g_scope_stack_852)).stack;
}
g_depth_851 = rt_sub(rt_r_ichk(g_depth_851), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P822 f_new_sym_172(rt_int kind_170, P805 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1169 = NULL;
{ R823 *cell1170 = rt_alloc(sizeof(R823));
(*cell1170).name = NULL;
(*cell1170).t = NULL;
(*cell1170).c = NULL;
(*cell1170).access = NULL;
(*cell1170).cname = NULL;
(*cell1170).st = NULL;
(*cell1170).decl = NULL;
(*cell1170).params = NULL;
(*cell1170).result = NULL;
(*cell1170).members = NULL;
(*cell1170).mnext = NULL;
(*cell1170).binds = NULL;
(*cell1170).insts = NULL;
(*cell1170).env = NULL;
(*cell1170).chain = NULL;
(*cell1170).stack = NULL;
(*cell1170).owner = NULL;
(*cell1170).gctx = NULL;
(*cell1170).mv = NULL;
(*cell1170).reqs = NULL;
(*cell1170).home = NULL;
F->y_1169 = cell1170;
}
(*(P822)rt_nil_check(F->y_1169)).kind = F->kind_170;
(*(P822)rt_nil_check(F->y_1169)).name = F->name_171;
F->result_ = F->y_1169;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1171 = NULL;
{ R819 *cell1172 = rt_alloc(sizeof(R819));
(*cell1172).name = NULL;
(*cell1172).lits = NULL;
(*cell1172).elem = NULL;
(*cell1172).idx = NULL;
(*cell1172).idx2 = NULL;
(*cell1172).elemcons = NULL;
(*cell1172).elemst = NULL;
(*cell1172).under = NULL;
(*cell1172).tparams = NULL;
(*cell1172).ocap = NULL;
(*cell1172).fields = NULL;
(*cell1172).target = NULL;
(*cell1172).decl = NULL;
(*cell1172).cname = NULL;
(*cell1172).initp = NULL;
(*cell1172).finalp = NULL;
(*cell1172).tpsyms = NULL;
(*cell1172).gen = NULL;
(*cell1172).gbinds = NULL;
(*cell1172).next = NULL;
(*cell1172).idxs = NULL;
F->t_1171 = cell1172;
}
(*(P818)rt_nil_check(F->t_1171)).kind = F->kind_173;
F->result_ = F->t_1171;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P814 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1173 = NULL;
{ R815 *cell1174 = rt_alloc(sizeof(R815));
(*cell1174).lo = NULL;
(*cell1174).hi = NULL;
(*cell1174).lo2 = NULL;
(*cell1174).hi2 = NULL;
(*cell1174).slen = NULL;
(*cell1174).args = NULL;
(*cell1174).prec = NULL;
(*cell1174).bnds = NULL;
F->c_1173 = cell1174;
}
F->result_ = F->c_1173;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P818 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && (((rt_r_ichk((*(P818)rt_nil_check(F->t_176)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_176)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_176)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P818 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_178)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P814 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1175 = NULL;
F->p_1175 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P814)rt_nil_check(F->c_180)).dyn)) || (rt_r_ichk((*(P814)rt_nil_check(F->c_180)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1177 = ((rt_int)1LL), hi1178 = rt_sub(rt_r_ichk(g_cur_level_865), rt_r_ichk((*(P814)rt_nil_check(F->c_180)).lvl));
for (rt_int it1179 = lo1177; it1179 <= hi1178; it1179++) {
F->i_1176 = it1179;
F->p_1175 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->p_1175))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->p_1175))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P814 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P814 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P818 t_187, P814 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P814)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_187)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P818 t_190, P814 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P814)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_190)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_190)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P818)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_864))) {
F->g_1180 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1180), rt_str(";", 1)); b_; }));
g_st_field_870 = f_mk_3(&F->g_1180);
F->result_ = F->g_1180;
goto ret_;
}
{
F->f_1181 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1181), rt_str(";", 1)); b_; }));
g_st_field_870 = f_mk_3(&F->f_1181);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1181);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P814 f_copy_cons_197(P814 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1182 = NULL;
{ R815 *cell1183 = rt_alloc(sizeof(R815));
(*cell1183).lo = NULL;
(*cell1183).hi = NULL;
(*cell1183).lo2 = NULL;
(*cell1183).hi2 = NULL;
(*cell1183).slen = NULL;
(*cell1183).args = NULL;
(*cell1183).prec = NULL;
(*cell1183).bnds = NULL;
F->r_1182 = cell1183;
}
(*(P814)rt_nil_check(F->r_1182)).lo = (*(P814)rt_nil_check(F->c_196)).lo;
(*(P814)rt_nil_check(F->r_1182)).hi = (*(P814)rt_nil_check(F->c_196)).hi;
(*(P814)rt_nil_check(F->r_1182)).lo2 = (*(P814)rt_nil_check(F->c_196)).lo2;
(*(P814)rt_nil_check(F->r_1182)).hi2 = (*(P814)rt_nil_check(F->c_196)).hi2;
(*(P814)rt_nil_check(F->r_1182)).slen = (*(P814)rt_nil_check(F->c_196)).slen;
(*(P814)rt_nil_check(F->r_1182)).mlo = rt_r_ichk((*(P814)rt_nil_check(F->c_196)).mlo);
(*(P814)rt_nil_check(F->r_1182)).mhi = rt_r_ichk((*(P814)rt_nil_check(F->c_196)).mhi);
(*(P814)rt_nil_check(F->r_1182)).hasm = rt_r_echk((*(P814)rt_nil_check(F->c_196)).hasm);
(*(P814)rt_nil_check(F->r_1182)).args = (*(P814)rt_nil_check(F->c_196)).args;
(*(P814)rt_nil_check(F->r_1182)).dyn = rt_r_echk((*(P814)rt_nil_check(F->c_196)).dyn);
(*(P814)rt_nil_check(F->r_1182)).lvl = rt_r_ichk((*(P814)rt_nil_check(F->c_196)).lvl);
(*(P814)rt_nil_check(F->r_1182)).prec = (*(P814)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1182;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P814 f_freeze_200(P814 c_198, P818 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1184 = NULL;
F->saved_field_1185 = NULL;
F->saved_field_1185 = g_st_field_870;
if ((((((F->c_198 == NULL) || ((*(P814)rt_nil_check(F->c_198)).lo == NULL)) || rt_r_echk((*(P814)rt_nil_check(F->c_198)).hasm)) || rt_r_echk((*(P814)rt_nil_check(F->c_198)).dyn)) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1184 = f_copy_cons_197(F->c_198);
{
F->ct_1186 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1187 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1186));
F->lf_1188 = rt_str_copy((((P805)rt_nil_check(g_st_field_870))->all));
F->ha_1189 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1186));
F->hf_1190 = rt_str_copy((((P805)rt_nil_check(g_st_field_870))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1187, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1189), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_864)) {
(*(P814)rt_nil_check(F->r_1184)).lo = f_mk_3(&F->lf_1188);
(*(P814)rt_nil_check(F->r_1184)).hi = f_mk_3(&F->hf_1190);
(*(P814)rt_nil_check(F->r_1184)).dyn = 1;
(*(P814)rt_nil_check(F->r_1184)).lvl = rt_r_ichk(g_cur_level_865);
} else {
(*(P814)rt_nil_check(F->r_1184)).lo = f_mk_3(&F->la_1187);
(*(P814)rt_nil_check(F->r_1184)).hi = f_mk_3(&F->ha_1189);
(*(P814)rt_nil_check(F->r_1184)).dyn = 0;
}
}
g_st_field_870 = F->saved_field_1185;
F->result_ = F->r_1184;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P818 t_201, P814 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_201)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P814)rt_nil_check(F->c_202)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P814)rt_nil_check(F->c_202)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P814)rt_nil_check(F->c_202)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P814)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_201)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_207(P812 a_205, P812 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1191 = NULL;
F->x_1191 = F->a_205;
F->y_1192 = NULL;
F->y_1192 = F->b_206;
while (((F->x_1191 != NULL) && (F->y_1192 != NULL))) {
if ((!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->x_1191)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->y_1192)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1191 = (*(P812)rt_nil_check(F->x_1191)).next;
F->y_1192 = (*(P812)rt_nil_check(F->y_1192)).next;
}
F->result_ = ((F->x_1191 == NULL) && (F->y_1192 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_str_elem_209(P818 t_208) {
  struct f_str_elem_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if (((*(P818)rt_nil_check(F->t_208)).elem == NULL)) {
F->result_ = g_ty_ascii_895;
goto ret_;
}
F->result_ = (*(P818)rt_nil_check(F->t_208)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_212(P818 a_210, P818 b_211) {
  struct f_same_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
if ((F->a_210 == F->b_211)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_210 == NULL) || (F->b_211 == NULL)) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) != rt_r_ichk((*(P818)rt_nil_check(F->b_211)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_212(f_str_elem_209(F->a_210), f_str_elem_209(F->b_211));
goto ret_;
}
if ((((((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P818)rt_nil_check(F->a_210)).lits, (*(P818)rt_nil_check(F->b_211)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)6LL)))) {
F->x_1193 = NULL;
F->x_1193 = (*(P818)rt_nil_check(F->a_210)).idxs;
F->y_1194 = NULL;
F->y_1194 = (*(P818)rt_nil_check(F->b_211)).idxs;
while (((F->x_1193 != NULL) && (F->y_1194 != NULL))) {
if ((!f_same_212((*(P833)rt_nil_check(F->x_1193)).t, (*(P833)rt_nil_check(F->y_1194)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1193 = (*(P833)rt_nil_check(F->x_1193)).next;
F->y_1194 = (*(P833)rt_nil_check(F->y_1194)).next;
}
F->result_ = (((F->x_1193 == NULL) && (F->y_1194 == NULL)) && f_same_212((*(P818)rt_nil_check(F->a_210)).elem, (*(P818)rt_nil_check(F->b_211)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_212((*(P818)rt_nil_check(F->a_210)).elem, (*(P818)rt_nil_check(F->b_211)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->a_210)).kind) == (((rt_int)17LL))))) {
F->f_1195 = NULL;
F->f_1195 = (*(P818)rt_nil_check(F->a_210)).fields;
F->g_1196 = NULL;
F->g_1196 = (*(P818)rt_nil_check(F->b_211)).fields;
while (((F->f_1195 != NULL) && (F->g_1196 != NULL))) {
if (((!rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1195)).name))->all), (((P805)rt_nil_check((*(P820)rt_nil_check(F->g_1196)).name))->all))) || (!f_same_212((*(P820)rt_nil_check(F->f_1195)).t, (*(P820)rt_nil_check(F->g_1196)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1195 = (*(P820)rt_nil_check(F->f_1195)).next;
F->g_1196 = (*(P820)rt_nil_check(F->g_1196)).next;
}
F->result_ = ((F->f_1195 == NULL) && (F->g_1196 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_base_of_214(P818 t_213) {
  struct f_base_of_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if ((((F->t_213 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->t_213)).kind) == (((rt_int)15LL)))) && ((*(P818)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_base_of_214((*(P818)rt_nil_check(F->t_213)).under);
goto ret_;
}
F->result_ = F->t_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P814 f_base_cons_217(P818 t_215, P814 c_216) {
  struct f_base_cons_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
F->c_216 = c_216;
if (((((F->t_215 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->t_215)).kind) == (((rt_int)15LL)))) && ((*(P818)rt_nil_check(F->t_215)).tparams == NULL)) && ((*(P818)rt_nil_check(F->t_215)).elemcons != NULL))) {
F->result_ = f_base_cons_217((*(P818)rt_nil_check(F->t_215)).under, (*(P818)rt_nil_check(F->t_215)).elemcons);
goto ret_;
}
F->result_ = F->c_216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_219(P818 t_218) {
  struct f_kind_name_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
{ rt_int sel1197 = rt_r_ichk((*(P818)rt_nil_check(F->t_218)).kind);
if (0 || (sel1197 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1197 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_218)).name))->all));
goto ret_;
} else if (0 || (sel1197 == (((rt_int)11LL)))) {
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

static void f_check_type_223(P818 got_220, P818 want_221, rt_int line_222) {
  struct f_check_type_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_220 = got_220;
F->want_221 = want_221;
F->line_222 = line_222;
if ((F->want_221 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->got_220)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->want_221)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_212(F->got_220, F->want_221))) {
f_fail_23(F->line_222, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_219(F->got_220)), rt_str(" where ", 7)), f_kind_name_219(F->want_221)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_225(P818 t_224) {
  struct f_ctype_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
{ rt_int sel1198 = rt_r_ichk((*(P818)rt_nil_check(F->t_224)).kind);
if (0 || (sel1198 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)2LL))) || (sel1198 == (((rt_int)4LL))) || (sel1198 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1198 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P818)rt_nil_check(F->t_224)).cname == NULL)) {
f_declare_ctype_231(F->t_224);
} else if (((((rt_r_ichk((*(P818)rt_nil_check(F->t_224)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_224)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P818)rt_nil_check(F->t_224)).forward)) && (!rt_r_echk((*(P818)rt_nil_check(F->t_224)).defined)))) {
(*(P818)rt_nil_check(F->t_224)).defined = 1;
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_224)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_224)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_224)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_227(P818 t_226) {
  struct f_struct_body_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_226)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_229(P818 t_228) {
  struct f_field_decls_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->f_1199 = NULL;
F->f_1199 = (*(P818)rt_nil_check(F->t_228)).fields;
F->s_1200 = NULL;
F->s_1200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1199 != NULL)) {
F->s_1200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->s_1200))->all), f_ctype_225((*(P820)rt_nil_check(F->f_1199)).t)), rt_str(" ", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1199)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1199 = (*(P820)rt_nil_check(F->f_1199)).next;
}
F->result_ = (((P805)rt_nil_check(F->s_1200))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_231(P818 t_230) {
  struct f_declare_ctype_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_230 = t_230;
F->u_1201 = NULL;
F->u_1201 = g_all_types_853;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P818)rt_nil_check(F->t_230)).target == NULL))) {
f_finish_ptr_409(F->t_230);
if (((*(P818)rt_nil_check(F->t_230)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) != (((rt_int)8LL)))) {
while ((F->u_1201 != NULL)) {
if (((rt_r_ichk((*(P818)rt_nil_check(F->u_1201)).kind) == rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind)) && f_same_212(F->u_1201, F->t_230))) {
(*(P818)rt_nil_check(F->t_230)).cname = (*(P818)rt_nil_check(F->u_1201)).cname;
goto ret_;
}
F->u_1201 = (*(P818)rt_nil_check(F->u_1201)).next;
}
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_230)).tparams == NULL))) {
(*(P818)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225((*(P818)rt_nil_check(F->t_230)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
(*(P818)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
(*(P818)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)17LL))))) {
(*(P818)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P818)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P818)rt_nil_check(F->t_230)).next = g_all_types_853;
g_all_types_853 = F->t_230;
if ((((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P818)rt_nil_check(F->t_230)).decl != NULL)) && ((*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_230)).decl)).b != NULL))) {
F->p_1202 = NULL;
F->p_1202 = (*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_230)).decl)).b;
F->fs_1203 = NULL;
F->fs_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1204 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1202 != NULL)) {
F->pc_1205 = NULL;
F->fs_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->fs_1203))->all), rt_str(" ", 1)), f_ctype_225(f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1202)).a, &F->pc_1205))), rt_str(" p_", 3)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1202)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1202 = (*(P812)rt_nil_check(F->p_1202)).next;
}
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1204), rt_str(" *", 2)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1204), rt_str(" {", 2)), (((P805)rt_nil_check(F->fs_1203))->all)), rt_str(" ", 1)), f_ctype_225((*(P818)rt_nil_check(F->t_230)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL)))) {
F->target_1206 = NULL;
F->target_1206 = (*(P818)rt_nil_check(F->t_230)).target;
if (((rt_r_ichk((*(P818)rt_nil_check(F->target_1206)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->target_1206)).kind) == (((rt_int)17LL))))) {
if (((*(P818)rt_nil_check(F->target_1206)).cname == NULL)) {
(*(P818)rt_nil_check(F->target_1206)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P818)rt_nil_check(F->target_1206)).next = g_all_types_853;
g_all_types_853 = F->target_1206;
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P805)rt_nil_check((*(P818)rt_nil_check(F->target_1206)).cname))->all)), rt_str(" ", 1)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->target_1206)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P818)rt_nil_check(F->target_1206)).forward = 1;
}
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P805)rt_nil_check((*(P818)rt_nil_check(F->target_1206)).cname))->all)), rt_str(" *", 2)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_225(F->target_1206)), rt_str(" *", 2)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_225((*(P818)rt_nil_check(F->t_230)).elem)), rt_str(" *p;", 4)), f_more_dims_237(F->t_230)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
F->p_1207 = NULL;
F->p_1207 = (*(P818)rt_nil_check(F->t_230)).tparams;
F->fs_1208 = NULL;
F->fs_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1207 != NULL)) {
F->fs_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->fs_1208))->all), f_ctype_225(f_tparam_type_321(F->t_230, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1207)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1207)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1207 = (*(P812)rt_nil_check(F->p_1207)).next;
}
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" {", 2)), (((P805)rt_nil_check(F->fs_1208))->all)), f_ctype_225((*(P818)rt_nil_check(F->t_230)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P818)rt_nil_check(F->t_230)).defined = 1;
f_put_27(g_out_types_855, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_230)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_237(P818 t_236) {
  struct f_more_dims_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->r_1209 = NULL;
F->r_1209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1211 = ((rt_int)3LL), hi1212 = rt_r_ichk((*(P818)rt_nil_check(F->t_236)).ndim);
for (rt_int it1213 = lo1211; it1213 <= hi1212; it1213++) {
F->k_1210 = it1213;
F->r_1209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1209))->all), rt_str(" rt_int ", 8)), f_dim_lo_233(F->k_1210)), rt_str(", ", 2)), f_dim_hi_235(F->k_1210)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P805)rt_nil_check(F->r_1209))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_240(P818 t_238, rstr *base_239) {
  struct f_acnt_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_238 = t_238;
F->base_239 = base_239;
F->r_1214 = NULL;
F->r_1214 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_239)), rt_str(")", 1)); b_; }));
{ rt_int lo1216 = ((rt_int)3LL), hi1217 = rt_r_ichk((*(P818)rt_nil_check(F->t_238)).ndim);
for (rt_int it1218 = lo1216; it1218 <= hi1217; it1218++) {
F->k_1215 = it1218;
F->r_1214 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1214))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_239)), rt_str(".", 1)), f_dim_lo_233(F->k_1215)), rt_str(", ", 2)), (*F->base_239)), rt_str(".", 1)), f_dim_hi_235(F->k_1215)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->r_1214))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P805 f_cons_lo_243(P814 c_241, rt_int k_242) {
  struct f_cons_lo_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1219 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P814)rt_nil_check(F->c_241)).lo;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P814)rt_nil_check(F->c_241)).lo2;
goto ret_;
}
F->l_1219 = (*(P814)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1221 = ((rt_int)1LL), hi1222 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)6LL));
for (rt_int it1223 = lo1221; it1223 <= hi1222; it1223++) {
F->i_1220 = it1223;
if ((F->l_1219 != NULL)) {
F->l_1219 = (*(P816)rt_nil_check(F->l_1219)).next;
}
}
}
if ((F->l_1219 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P816)rt_nil_check(F->l_1219)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P805 f_cons_hi_246(P814 c_244, rt_int k_245) {
  struct f_cons_hi_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_244 = c_244;
F->k_245 = k_245;
F->l_1224 = NULL;
if ((F->k_245 == ((rt_int)1LL))) {
F->result_ = (*(P814)rt_nil_check(F->c_244)).hi;
goto ret_;
} else if ((F->k_245 == ((rt_int)2LL))) {
F->result_ = (*(P814)rt_nil_check(F->c_244)).hi2;
goto ret_;
}
F->l_1224 = (*(P814)rt_nil_check(F->c_244)).bnds;
{ rt_int lo1226 = ((rt_int)1LL), hi1227 = rt_sub(rt_add(F->k_245, F->k_245), ((rt_int)5LL));
for (rt_int it1228 = lo1226; it1228 <= hi1227; it1228++) {
F->i_1225 = it1228;
if ((F->l_1224 != NULL)) {
F->l_1224 = (*(P816)rt_nil_check(F->l_1224)).next;
}
}
}
if ((F->l_1224 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P816)rt_nil_check(F->l_1224)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_idx_type_249(P818 t_247, rt_int k_248) {
  struct f_idx_type_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->k_248 = k_248;
F->l_1229 = NULL;
F->l_1229 = (*(P818)rt_nil_check(F->t_247)).idxs;
{ rt_int lo1231 = ((rt_int)2LL), hi1232 = F->k_248;
for (rt_int it1233 = lo1231; it1233 <= hi1232; it1233++) {
F->i_1230 = it1233;
F->l_1229 = (*(P833)rt_nil_check(F->l_1229)).next;
}
}
F->result_ = (*(P833)rt_nil_check(F->l_1229)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_250(void) {
  struct f_init_ascii_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1234 = NULL;
F->tail_1235 = NULL;
F->start_1236 = RT_R_IUNDEF;
F->start_1236 = ((rt_int)1LL);
{ rt_int lo1238 = ((rt_int)1LL), hi1239 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1240 = lo1238; it1240 <= hi1239; it1240++) {
F->i_1237 = it1240;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1237) == 32)) {
F->lit_1241 = NULL;
F->lit_1241 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P812)rt_nil_check(F->lit_1241)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1236), rt_sub(F->i_1237, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1234, &F->tail_1235, F->lit_1241);
F->start_1236 = rt_add(F->i_1237, ((rt_int)1LL));
}
}
}
g_ty_ascii_895 = f_new_typ_174((((rt_int)4LL)));
(*(P818)rt_nil_check(g_ty_ascii_895)).lits = F->head_1234;
(*(P818)rt_nil_check(g_ty_ascii_895)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1242 = NULL;
F->t2_1243 = NULL;
F->l1_1244 = NULL;
F->l1_1244 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1245 = NULL;
F->l2_1245 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1246 = NULL;
F->l3_1246 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P812)rt_nil_check(F->l1_1244)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P812)rt_nil_check(F->l2_1245)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P812)rt_nil_check(F->l3_1246)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1242, &F->t2_1243, F->l1_1244);
f_append_65(&F->h2_1242, &F->t2_1243, F->l2_1245);
f_append_65(&F->h2_1242, &F->t2_1243, F->l3_1246);
g_file_mode_type_903 = f_new_typ_174((((rt_int)4LL)));
(*(P818)rt_nil_check(g_file_mode_type_903)).lits = F->h2_1242;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_253(P812 lits_251, rstr *name_252) {
  struct f_lit_index_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_251 = lits_251;
F->name_252 = name_252;
F->i_1247 = RT_R_IUNDEF;
F->i_1247 = ((rt_int)0LL);
F->l_1248 = NULL;
F->l_1248 = F->lits_251;
while ((F->l_1248 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->l_1248)).name))->all), (*F->name_252))) {
F->result_ = rt_r_ichk(F->i_1247);
goto ret_;
}
F->i_1247 = rt_add(rt_r_ichk(F->i_1247), ((rt_int)1LL));
F->l_1248 = (*(P812)rt_nil_check(F->l_1248)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_resolve_subtype_256(P812 st_254, P814 *c_255) {
  struct f_resolve_subtype_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_254 = st_254;
F->c_255 = c_255;
F->c_255v = *F->c_255;
F->t_1249 = NULL;
F->ok_1250 = RT_R_EUNDEF;
F->dummy_1251 = NULL;
F->c_255v = f_new_cons_175();
{ rt_int sel1252 = rt_r_ichk((*(P812)rt_nil_check(F->st_254)).kind);
if (0 || (sel1252 == (((rt_int)70LL)))) {
if (((*(P812)rt_nil_check(F->st_254)).a != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).a, g_ty_int_892, &F->dummy_1251); b_; }));
(*(P814)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).b, g_ty_int_892, &F->dummy_1251); b_; }));
(*(P814)rt_nil_check(F->c_255v)).mlo = f_manifest_333((*(P812)rt_nil_check(F->st_254)).a, &F->ok_1250);
(*(P814)rt_nil_check(F->c_255v)).hasm = rt_r_echk(F->ok_1250);
(*(P814)rt_nil_check(F->c_255v)).mhi = f_manifest_333((*(P812)rt_nil_check(F->st_254)).b, &F->ok_1250);
(*(P814)rt_nil_check(F->c_255v)).hasm = (rt_r_echk((*(P814)rt_nil_check(F->c_255v)).hasm) && rt_r_echk(F->ok_1250));
}
F->result_ = g_ty_int_892;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)71LL)))) {
if (((*(P812)rt_nil_check(F->st_254)).a != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).a, g_ty_int_892, &F->dummy_1251); b_; }));
}
if (((*(P812)rt_nil_check(F->st_254)).b != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).b, g_ty_float_894, &F->dummy_1251); b_; }));
(*(P814)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).c, g_ty_float_894, &F->dummy_1251); b_; }));
(*(P814)rt_nil_check(F->c_255v)).hasm = (f_float_lit_258((*(P812)rt_nil_check(F->st_254)).b) && f_float_lit_258((*(P812)rt_nil_check(F->st_254)).c));
}
F->result_ = g_ty_float_894;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)72LL)))) {
F->t_1249 = f_new_typ_174((((rt_int)4LL)));
(*(P818)rt_nil_check(F->t_1249)).lits = (*(P812)rt_nil_check(F->st_254)).a;
if (((*(P812)rt_nil_check(F->st_254)).b != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).b, F->t_1249, &F->dummy_1251); b_; }));
(*(P814)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).c, F->t_1249, &F->dummy_1251); b_; }));
if (((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_254)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_254)).c)).kind) == (((rt_int)4LL))))) {
(*(P814)rt_nil_check(F->c_255v)).mlo = f_lit_index_253((*(P818)rt_nil_check(F->t_1249)).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_254)).b)).name))->all));
(*(P814)rt_nil_check(F->c_255v)).mhi = f_lit_index_253((*(P818)rt_nil_check(F->t_1249)).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_254)).c)).name))->all));
(*(P814)rt_nil_check(F->c_255v)).hasm = 1;
}
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)73LL)))) {
F->t_1249 = f_resolve_subtype_256((*(P812)rt_nil_check(F->st_254)).a, &F->c_255v);
if (((*(P818)rt_nil_check(f_base_of_214(F->t_1249))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_212(F->t_1249, g_ty_ascii_895) && ((F->c_255v == NULL) || ((*(P814)rt_nil_check(F->c_255v)).lo == NULL)))) {
F->t_1249 = g_ty_string_896;
} else {
F->et_1253 = NULL;
F->et_1253 = F->t_1249;
F->t_1249 = f_new_typ_174((((rt_int)5LL)));
(*(P818)rt_nil_check(F->t_1249)).elem = F->et_1253;
(*(P818)rt_nil_check(F->t_1249)).elemcons = F->c_255v;
}
F->c_255v = f_new_cons_175();
if (((*(P812)rt_nil_check(F->st_254)).b != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).b, g_ty_int_892, &F->dummy_1251); b_; }));
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)74LL)))) {
{
F->ec_1254 = NULL;
F->et_1255 = NULL;
F->et_1255 = f_resolve_subtype_256((*(P812)rt_nil_check(F->st_254)).b, &F->ec_1254);
F->ix_1256 = NULL;
F->ix_1256 = (*(P812)rt_nil_check(F->st_254)).a;
F->k_1257 = RT_R_IUNDEF;
F->k_1257 = ((rt_int)0LL);
F->tail_1258 = NULL;
F->btail_1259 = NULL;
F->t_1249 = f_new_typ_174((((rt_int)6LL)));
(*(P818)rt_nil_check(F->t_1249)).elem = F->et_1255;
(*(P818)rt_nil_check(F->t_1249)).elemcons = F->ec_1254;
(*(P818)rt_nil_check(F->t_1249)).elemst = (*(P812)rt_nil_check(F->st_254)).b;
(*(P814)rt_nil_check(F->c_255v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P814)rt_nil_check(F->c_255v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1256 != NULL)) {
F->ic_1260 = NULL;
F->it_1261 = NULL;
F->it_1261 = f_resolve_subtype_256(F->ix_1256, &F->ic_1260);
F->lo_1262 = NULL;
F->hi_1263 = NULL;
F->tl_1264 = NULL;
if ((((*(P818)rt_nil_check(f_base_of_214(F->it_1261))).kind != (((rt_int)1LL))) && ((*(P818)rt_nil_check(f_base_of_214(F->it_1261))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1260 = f_base_cons_217(F->it_1261, F->ic_1260);
F->k_1257 = rt_add(rt_r_ichk(F->k_1257), ((rt_int)1LL));
{ R834 *cell1265 = rt_alloc(sizeof(R834));
(*cell1265).t = NULL;
(*cell1265).next = NULL;
F->tl_1264 = cell1265;
}
(*(P833)rt_nil_check(F->tl_1264)).t = F->it_1261;
if ((F->tail_1258 == NULL)) {
(*(P818)rt_nil_check(F->t_1249)).idxs = F->tl_1264;
} else {
(*(P833)rt_nil_check(F->tail_1258)).next = F->tl_1264;
}
F->tail_1258 = F->tl_1264;
if (((F->ic_1260 != NULL) && ((*(P814)rt_nil_check(F->ic_1260)).lo != NULL))) {
F->lo_1262 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1260); b_; }));
F->hi_1263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1260); b_; }));
} else if (((*(P818)rt_nil_check(f_base_of_214(F->it_1261))).kind == (((rt_int)4LL)))) {
F->lo_1262 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P818)rt_nil_check(f_base_of_214(F->it_1261))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1257) == ((rt_int)1LL))) {
(*(P818)rt_nil_check(F->t_1249)).idx = F->it_1261;
(*(P814)rt_nil_check(F->c_255v)).lo = F->lo_1262;
(*(P814)rt_nil_check(F->c_255v)).hi = F->hi_1263;
} else if ((rt_r_ichk(F->k_1257) == ((rt_int)2LL))) {
(*(P818)rt_nil_check(F->t_1249)).idx2 = F->it_1261;
(*(P814)rt_nil_check(F->c_255v)).lo2 = F->lo_1262;
(*(P814)rt_nil_check(F->c_255v)).hi2 = F->hi_1263;
} else if ((F->lo_1262 != NULL)) {
F->l1_1266 = NULL;
F->l2_1267 = NULL;
{ R817 *cell1268 = rt_alloc(sizeof(R817));
(*cell1268).s = NULL;
(*cell1268).next = NULL;
F->l1_1266 = cell1268;
}
{ R817 *cell1269 = rt_alloc(sizeof(R817));
(*cell1269).s = NULL;
(*cell1269).next = NULL;
F->l2_1267 = cell1269;
}
(*(P816)rt_nil_check(F->l1_1266)).s = F->lo_1262;
(*(P816)rt_nil_check(F->l2_1267)).s = F->hi_1263;
(*(P816)rt_nil_check(F->l1_1266)).next = F->l2_1267;
if ((F->btail_1259 == NULL)) {
(*(P814)rt_nil_check(F->c_255v)).bnds = F->l1_1266;
} else {
(*(P816)rt_nil_check(F->btail_1259)).next = F->l1_1266;
}
F->btail_1259 = F->l2_1267;
}
F->ix_1256 = (*(P812)rt_nil_check(F->ix_1256)).next;
}
(*(P818)rt_nil_check(F->t_1249)).ndim = rt_r_ichk(F->k_1257);
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)77LL)))) {
F->t_1249 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1270 = NULL;
(*(P818)rt_nil_check(F->t_1249)).elem = f_resolve_subtype_256((*(P812)rt_nil_check(F->st_254)).a, &F->ec_1270);
(*(P818)rt_nil_check(F->t_1249)).elemcons = F->ec_1270;
if ((((*(P818)rt_nil_check(f_base_of_214((*(P818)rt_nil_check(F->t_1249)).elem))).kind != (((rt_int)1LL))) && ((*(P818)rt_nil_check(f_base_of_214((*(P818)rt_nil_check(F->t_1249)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P818)rt_nil_check(f_base_of_214((*(P818)rt_nil_check(F->t_1249)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1270 == NULL) || ((*(P814)rt_nil_check(F->ec_1270)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)75LL))) || (sel1252 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->st_254)).kind) == (((rt_int)76LL)))) {
F->t_1249 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1249 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1271 = NULL;
F->comp_1271 = (*(P812)rt_nil_check(F->st_254)).a;
F->tail_1272 = NULL;
while ((F->comp_1271 != NULL)) {
F->cc_1273 = NULL;
F->f_1274 = NULL;
{ R821 *cell1275 = rt_alloc(sizeof(R821));
(*cell1275).name = NULL;
(*cell1275).t = NULL;
(*cell1275).c = NULL;
(*cell1275).st = NULL;
(*cell1275).next = NULL;
F->f_1274 = cell1275;
}
(*(P820)rt_nil_check(F->f_1274)).name = (*(P812)rt_nil_check(F->comp_1271)).name;
(*(P820)rt_nil_check(F->f_1274)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->comp_1271)).a, &F->cc_1273);
(*(P820)rt_nil_check(F->f_1274)).c = F->cc_1273;
(*(P820)rt_nil_check(F->f_1274)).st = (*(P812)rt_nil_check(F->comp_1271)).a;
if ((F->tail_1272 == NULL)) {
(*(P818)rt_nil_check(F->t_1249)).fields = F->f_1274;
} else {
(*(P820)rt_nil_check(F->tail_1272)).next = F->f_1274;
}
F->tail_1272 = F->f_1274;
F->comp_1271 = (*(P812)rt_nil_check(F->comp_1271)).next;
}
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1249)).kind) == (((rt_int)17LL)))) {
F->lits_1276 = NULL;
F->ltail_1277 = NULL;
F->f_1278 = NULL;
F->f_1278 = (*(P818)rt_nil_check(F->t_1249)).fields;
while ((F->f_1278 != NULL)) {
F->l_1279 = NULL;
F->l_1279 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line));
if (rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1278)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P812)rt_nil_check(F->l_1279)).name = (*(P820)rt_nil_check(F->f_1278)).name;
f_append_65(&F->lits_1276, &F->ltail_1277, F->l_1279);
F->f_1278 = (*(P820)rt_nil_check(F->f_1278)).next;
}
(*(P818)rt_nil_check(F->t_1249)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_1249)).elem)).lits = F->lits_1276;
if (((*(P812)rt_nil_check(F->st_254)).b != NULL)) {
f_tag_constraint_262(F->t_1249, (*(P812)rt_nil_check(F->st_254)).b, F->c_255v);
}
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_898;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P822)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1280 = NULL;
F->gt_1280 = f_copy_node_667((*(P812)rt_nil_check(F->st_254)).a);
(*(P812)rt_nil_check(F->gt_1280)).next = NULL;
F->result_ = f_instantiate_type_586(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1280, (*(P812)rt_nil_check(F->st_254)).b, &F->c_255v, rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line));
goto ret_;
}
{
F->ec_1281 = NULL;
F->t_1249 = f_new_typ_174((((rt_int)12LL)));
(*(P818)rt_nil_check(F->t_1249)).elem = f_resolve_subtype_256((*(P812)rt_nil_check(F->st_254)).a, &F->ec_1281);
(*(P818)rt_nil_check(F->t_1249)).elemcons = F->ec_1281;
if (((*(P812)rt_nil_check(F->st_254)).b != NULL)) {
(*(P814)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->st_254)).b, g_ty_int_892, &F->dummy_1251); b_; }));
}
}
F->result_ = F->t_1249;
goto ret_;
} else if (0 || (sel1252 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_265(F->st_254, &F->c_255v);
goto ret_;
} else if (0 || (sel1252 == (((rt_int)81LL)))) {
{
F->base_1282 = NULL;
F->result_ = f_value_subtype_278((*(P812)rt_nil_check(F->st_254)).a, &F->c_255v, &F->base_1282);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_258(P812 e_257) {
  struct f_float_lit_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_257 = e_257;
if (((rt_r_ichk((*(P812)rt_nil_check(F->e_257)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_257)).name))->all), rt_str("-", 1)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_257)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_258((*(P812)rt_nil_check(F->e_257)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P812)rt_nil_check(F->e_257)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->e_257)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_262(P818 t_259, P812 e_260, P814 c_261) {
  struct f_tag_constraint_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_259 = t_259;
F->e_260 = e_260;
F->c_261 = c_261;
F->dummy_1283 = NULL;
(*(P814)rt_nil_check(F->c_261)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->e_260, (*(P818)rt_nil_check(F->t_259)).elem, &F->dummy_1283); b_; }));
f_check_type_223(F->dummy_1283, (*(P818)rt_nil_check(F->t_259)).elem, rt_r_ichk((*(P812)rt_nil_check(F->e_260)).line));
(*(P814)rt_nil_check(F->c_261)).hi = (*(P814)rt_nil_check(F->c_261)).lo;
if ((rt_r_ichk((*(P812)rt_nil_check(F->e_260)).kind) == (((rt_int)4LL)))) {
(*(P814)rt_nil_check(F->c_261)).mlo = f_lit_index_253((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_259)).elem)).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_260)).name))->all));
(*(P814)rt_nil_check(F->c_261)).mhi = rt_r_ichk((*(P814)rt_nil_check(F->c_261)).mlo);
(*(P814)rt_nil_check(F->c_261)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P818 f_named_subtype_265(P812 st_263, P814 *c_264) {
  struct f_named_subtype_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_263 = st_263;
F->c_264 = c_264;
F->c_264v = *F->c_264;
F->t_1284 = NULL;
F->y_1285 = NULL;
F->y_1285 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->st_263)).name))->all));
F->name_1286 = rt_str_copy((((P805)rt_nil_check((*(P812)rt_nil_check(F->st_263)).name))->all));
F->c_264v = f_new_cons_175();
if (((F->y_1285 == NULL) && ((rt_str_eq(F->name_1286, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1286, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1286, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_283(F->st_263, &F->c_264v);
goto ret_;
}
if ((F->y_1285 == NULL)) {
if (rt_str_eq(F->name_1286, rt_str("BOOL", 4))) {
F->t_1284 = g_ty_bool_893;
} else if (rt_str_eq(F->name_1286, rt_str("ASCII", 5))) {
F->t_1284 = g_ty_ascii_895;
} else if (rt_str_eq(F->name_1286, rt_str("DATA_LOCK", 9))) {
F->t_1284 = g_ty_lock_900;
} else if (rt_str_eq(F->name_1286, rt_str("LATCH", 5))) {
F->t_1284 = g_ty_latch_901;
} else if (rt_str_eq(F->name_1286, rt_str("ACT", 3))) {
F->t_1284 = g_ty_act_902;
} else if (rt_str_eq(F->name_1286, rt_str("INT", 3))) {
F->t_1284 = g_ty_int_892;
} else if (rt_str_eq(F->name_1286, rt_str("FLOAT", 5))) {
F->t_1284 = g_ty_float_894;
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1286); b_; }));
}
if (((*(P812)rt_nil_check(F->st_263)).b != NULL)) {
f_apply_constraint_274(F->t_1284, (*(P812)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P812)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1284;
goto ret_;
}
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_586(F->y_1285, (*(P812)rt_nil_check(F->st_263)).a, (*(P812)rt_nil_check(F->st_263)).b, &F->c_264v, rt_r_ichk((*(P812)rt_nil_check(F->st_263)).line));
goto ret_;
}
if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->y_1285)).t != NULL)) && (rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_306(F->y_1285, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->y_1285)).t != NULL)) && (rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).t)).kind) == (((rt_int)8LL))))) {
(*(P814)rt_nil_check(F->c_264v)).args = (*(P812)rt_nil_check(F->st_263)).b;
F->result_ = (*(P822)rt_nil_check(F->y_1285)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)6LL))) && ((*(P822)rt_nil_check(F->y_1285)).decl != NULL)) && ((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_269(F->y_1285, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)5LL)))) && ((*(P822)rt_nil_check(F->y_1285)).t != NULL))) {
if (((*(P822)rt_nil_check(F->y_1285)).c != NULL)) {
F->c_264v = (*(P822)rt_nil_check(F->y_1285)).c;
}
F->t_1284 = (*(P822)rt_nil_check(F->y_1285)).t;
} else if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->y_1285)).decl != NULL)) && (rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1285)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_306(F->y_1285, F->st_263, &F->c_264v);
goto ret_;
} else if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1285)).kind) == (((rt_int)5LL))))) {
F->t_1284 = f_resolve_subtype_256((*(P822)rt_nil_check(F->y_1285)).st, &F->c_264v);
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1286, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P812)rt_nil_check(F->st_263)).b != NULL)) {
F->c_264v = f_copy_cons_197(F->c_264v);
f_apply_constraint_274(F->t_1284, (*(P812)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P812)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1284;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_264) = F->c_264v;
  RT_FPOP();
  return F->result_;
}

static P818 f_invoke_abbrev_269(P822 y_266, P812 st_267, P814 *c_268) {
  struct f_invoke_abbrev_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_266 = y_266;
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->p_1287 = NULL;
F->p_1287 = (*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_266)).decl)).b;
F->a_1288 = NULL;
F->a_1288 = (*(P812)rt_nil_check(F->st_267)).b;
F->t_1289 = NULL;
if ((f_list_len_67(F->p_1287) != f_list_len_67(F->a_1288))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_266)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1287))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1287 != NULL)) {
F->z_1290 = NULL;
F->z_1290 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_1287)).name);
F->pc_1291 = NULL;
F->at_1292 = NULL;
F->ok_1293 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P812)rt_nil_check(F->p_1287)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P822)rt_nil_check(F->z_1290)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1287)).a, &F->pc_1291);
(*(P822)rt_nil_check(F->z_1290)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_646(F->a_1288, (*(P822)rt_nil_check(F->z_1290)).t, &F->at_1292)), rt_str(")", 1)); b_; }));
f_check_type_223(F->at_1292, (*(P822)rt_nil_check(F->z_1290)).t, rt_r_ichk((*(P812)rt_nil_check(F->st_267)).line));
(*(P822)rt_nil_check(F->z_1290)).mvalue = f_manifest_333(F->a_1288, &F->ok_1293);
(*(P822)rt_nil_check(F->z_1290)).hasmv = rt_r_echk(F->ok_1293);
(*(P822)rt_nil_check(F->z_1290)).mv = f_meval_342(F->a_1288, &F->ok_1293);
if ((!rt_r_echk(F->ok_1293))) {
(*(P822)rt_nil_check(F->z_1290)).mv = NULL;
}
(*(P822)rt_nil_check(F->z_1290)).ro_flag = 1;
f_define_159(F->z_1290, rt_r_ichk((*(P812)rt_nil_check(F->st_267)).line));
F->p_1287 = (*(P812)rt_nil_check(F->p_1287)).next;
F->a_1288 = (*(P812)rt_nil_check(F->a_1288)).next;
}
F->t_1289 = f_resolve_subtype_256((*(P822)rt_nil_check(F->y_266)).st, &F->c_268v);
f_close_scope_169();
F->result_ = F->t_1289;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_274(P818 t_270, P812 args_271, P814 c_272, rt_int line_273) {
  struct f_apply_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_270 = t_270;
F->args_271 = args_271;
F->c_272 = c_272;
F->line_273 = line_273;
F->dummy_1294 = NULL;
F->ok_1295 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P812)rt_nil_check(F->args_271)).kind) != (((rt_int)16LL))) || ((*(P812)rt_nil_check(F->args_271)).next != NULL))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P814)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->args_271)).a, F->t_270, &F->dummy_1294); b_; }));
f_check_type_223(F->dummy_1294, F->t_270, F->line_273);
(*(P814)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check(F->args_271)).b, F->t_270, &F->dummy_1294); b_; }));
f_check_type_223(F->dummy_1294, F->t_270, F->line_273);
(*(P814)rt_nil_check(F->c_272)).hasm = 0;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL)))) {
(*(P814)rt_nil_check(F->c_272)).mlo = f_manifest_333((*(P812)rt_nil_check(F->args_271)).a, &F->ok_1295);
(*(P814)rt_nil_check(F->c_272)).hasm = rt_r_echk(F->ok_1295);
(*(P814)rt_nil_check(F->c_272)).mhi = f_manifest_333((*(P812)rt_nil_check(F->args_271)).b, &F->ok_1295);
(*(P814)rt_nil_check(F->c_272)).hasm = (rt_r_echk((*(P814)rt_nil_check(F->c_272)).hasm) && rt_r_echk(F->ok_1295));
} else if (((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).b)).kind) == (((rt_int)4LL))))) {
(*(P814)rt_nil_check(F->c_272)).mlo = f_lit_index_253((*(P818)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).a)).name))->all));
(*(P814)rt_nil_check(F->c_272)).mhi = f_lit_index_253((*(P818)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).b)).name))->all));
(*(P814)rt_nil_check(F->c_272)).hasm = 1;
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)3LL)))) {
(*(P814)rt_nil_check(F->c_272)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->args_271, g_ty_int_892, &F->dummy_1294); b_; }));
if (((*(P812)rt_nil_check(F->args_271)).next != NULL)) {
if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P814)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).next)).a, g_ty_float_894, &F->dummy_1294); b_; }));
(*(P814)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).next)).b, g_ty_float_894, &F->dummy_1294); b_; }));
(*(P814)rt_nil_check(F->c_272)).hasm = (f_float_lit_258((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).next)).a) && f_float_lit_258((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_271)).next)).b));
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)5LL)))) {
(*(P814)rt_nil_check(F->c_272)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->args_271, g_ty_int_892, &F->dummy_1294); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)12LL)))) {
(*(P814)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->args_271, g_ty_int_892, &F->dummy_1294); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_270)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_262(F->t_270, F->args_271, F->c_272);
} else {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P818 f_value_subtype_278(P812 e_275, P814 *c_276, P805 *base_277) {
  struct f_value_subtype_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_275 = e_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->base_277 = base_277;
F->base_277v = *F->base_277;
F->t_1296 = NULL;
F->c0_1297 = NULL;
F->ro_1298 = RT_R_EUNDEF;
if (f_is_lvalue_609(F->e_275)) {
f_lvalue_615(F->e_275, &F->base_277v, &F->t_1296, &F->c0_1297, &F->ro_1298);
} else {
F->base_277v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->e_275, NULL, &F->t_1296); b_; }));
}
if ((F->c0_1297 == NULL)) {
F->c_276v = f_new_cons_175();
} else {
F->c_276v = f_copy_cons_197(F->c0_1297);
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1296)).kind) == (((rt_int)5LL)))) {
(*(P814)rt_nil_check(F->c_276v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->base_277v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1296)).kind) == (((rt_int)6LL)))) {
(*(P814)rt_nil_check(F->c_276v)).bnds = NULL;
{ rt_int lo1300 = ((rt_int)1LL), hi1301 = rt_r_ichk((*(P818)rt_nil_check(F->t_1296)).ndim);
for (rt_int it1302 = lo1300; it1302 <= hi1301; it1302++) {
F->k_1299 = it1302;
F->lo_1303 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_lo_233(F->k_1299)));
F->hi_1304 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_hi_235(F->k_1299)));
if ((F->k_1299 == ((rt_int)1LL))) {
(*(P814)rt_nil_check(F->c_276v)).lo = f_mk_3(&F->lo_1303);
(*(P814)rt_nil_check(F->c_276v)).hi = f_mk_3(&F->hi_1304);
} else if ((F->k_1299 == ((rt_int)2LL))) {
(*(P814)rt_nil_check(F->c_276v)).lo2 = f_mk_3(&F->lo_1303);
(*(P814)rt_nil_check(F->c_276v)).hi2 = f_mk_3(&F->hi_1304);
} else {
F->l1_1305 = NULL;
F->l2_1306 = NULL;
{ R817 *cell1307 = rt_alloc(sizeof(R817));
(*cell1307).s = NULL;
(*cell1307).next = NULL;
F->l1_1305 = cell1307;
}
{ R817 *cell1308 = rt_alloc(sizeof(R817));
(*cell1308).s = NULL;
(*cell1308).next = NULL;
F->l2_1306 = cell1308;
}
(*(P816)rt_nil_check(F->l1_1305)).s = f_mk_3(&F->lo_1303);
(*(P816)rt_nil_check(F->l2_1306)).s = f_mk_3(&F->hi_1304);
(*(P816)rt_nil_check(F->l1_1305)).next = F->l2_1306;
(*(P816)rt_nil_check(F->l2_1306)).next = (*(P814)rt_nil_check(F->c_276v)).bnds;
(*(P814)rt_nil_check(F->c_276v)).bnds = F->l1_1305;
}
}
}
(*(P814)rt_nil_check(F->c_276v)).bnds = f_reverse_pairs_280((*(P814)rt_nil_check(F->c_276v)).bnds);
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1296)).kind) == (((rt_int)12LL)))) {
(*(P814)rt_nil_check(F->c_276v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->base_277v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_1296)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_1296)).tparams != NULL))) {
F->p_1309 = NULL;
F->p_1309 = (*(P818)rt_nil_check(F->t_1296)).tparams;
F->head_1310 = NULL;
F->tail_1311 = NULL;
while ((F->p_1309 != NULL)) {
F->sel_1312 = NULL;
F->sel_1312 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_275)).line));
(*(P812)rt_nil_check(F->sel_1312)).a = F->e_275;
(*(P812)rt_nil_check(F->sel_1312)).name = (*(P812)rt_nil_check(F->p_1309)).name;
f_append_65(&F->head_1310, &F->tail_1311, F->sel_1312);
F->p_1309 = (*(P812)rt_nil_check(F->p_1309)).next;
}
(*(P814)rt_nil_check(F->c_276v)).args = F->head_1310;
}
F->result_ = F->t_1296;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;  (*F->base_277) = F->base_277v;
  RT_FPOP();
  return F->result_;
}

static P816 f_reverse_pairs_280(P816 l_279) {
  struct f_reverse_pairs_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_279 = l_279;
F->r_1313 = NULL;
F->p_1314 = NULL;
F->p_1314 = F->l_279;
while ((F->p_1314 != NULL)) {
F->a_1315 = NULL;
F->a_1315 = F->p_1314;
F->b_1316 = NULL;
F->b_1316 = (*(P816)rt_nil_check(F->p_1314)).next;
F->p_1314 = (*(P816)rt_nil_check(F->b_1316)).next;
(*(P816)rt_nil_check(F->b_1316)).next = F->r_1313;
F->r_1313 = F->a_1315;
}
F->result_ = F->r_1313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_inquiry_283(P812 st_281, P814 *c_282) {
  struct f_inquiry_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_281 = st_281;
F->c_282 = c_282;
F->c_282v = *F->c_282;
F->base_1317 = NULL;
F->t_1318 = NULL;
F->name_1319 = rt_str_copy((((P805)rt_nil_check((*(P812)rt_nil_check(F->st_281)).name))->all));
if (((*(P812)rt_nil_check(F->st_281)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1319, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1319, rt_str("TYPEOF", 6))) {
F->sub_1320 = NULL;
F->sub_1320 = f_as_subtype_285((*(P812)rt_nil_check(F->st_281)).b);
F->c2_1321 = NULL;
if ((F->sub_1320 != NULL)) {
F->t_1318 = f_resolve_subtype_256(F->sub_1320, &F->c2_1321);
} else {
F->t_1318 = f_value_subtype_278((*(P812)rt_nil_check(F->st_281)).b, &F->c2_1321, &F->base_1317);
}
F->c_282v = f_new_cons_175();
F->result_ = F->t_1318;
goto ret_;
}
F->t_1318 = f_value_subtype_278((*(P812)rt_nil_check(F->st_281)).b, &F->c_282v, &F->base_1317);
if (rt_str_eq(F->name_1319, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1318;
goto ret_;
}
{
F->k_1322 = RT_R_IUNDEF;
F->k_1322 = ((rt_int)1LL);
F->ok_1323 = RT_R_EUNDEF;
F->ok_1323 = 1;
F->ac_1324 = NULL;
F->ac_1324 = F->c_282v;
if (((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_281)).b)).next != NULL)) {
F->k_1322 = f_manifest_333((*(P812)rt_nil_check((*(P812)rt_nil_check(F->st_281)).b)).next, &F->ok_1323);
}
while (((rt_r_ichk((*(P818)rt_nil_check(F->t_1318)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_1318)).tparams == NULL))) {
F->t_1318 = (*(P818)rt_nil_check(F->t_1318)).under;
}
if (((((rt_r_ichk((*(P818)rt_nil_check(F->t_1318)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1323))) || (rt_r_ichk(F->k_1322) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1322) > rt_r_ichk((*(P818)rt_nil_check(F->t_1318)).ndim)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_282v = f_new_cons_175();
(*(P814)rt_nil_check(F->c_282v)).lo = f_cons_lo_243(F->ac_1324, rt_r_ichk(F->k_1322));
(*(P814)rt_nil_check(F->c_282v)).hi = f_cons_hi_246(F->ac_1324, rt_r_ichk(F->k_1322));
F->result_ = f_idx_type_249(F->t_1318, rt_r_ichk(F->k_1322));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_282) = F->c_282v;
  RT_FPOP();
  return F->result_;
}

static P812 f_as_subtype_285(P812 e_284) {
  struct f_as_subtype_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->st_1325 = NULL;
if ((F->e_284 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_284)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_285((*(P812)rt_nil_check(F->e_284)).a);
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_284)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_292(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_284)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1325 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
(*(P812)rt_nil_check(F->st_1325)).name = (*(P812)rt_nil_check(F->e_284)).name;
F->result_ = F->st_1325;
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->e_284)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).name, (*(P812)rt_nil_check(F->e_284)).b, NULL, rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_284)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).a)).name, (*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).b, (*(P812)rt_nil_check(F->e_284)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1326 = rt_str_copy((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).name))->all));
F->y_1327 = NULL;
F->y_1327 = f_lookup_154(&F->name_1326);
if ((rt_str_eq(F->name_1326, rt_str("INT", 3)) && (F->y_1327 == NULL))) {
if (((((*(P812)rt_nil_check(F->e_284)).b == NULL) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).kind) != (((rt_int)16LL)))) || ((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1325 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
(*(P812)rt_nil_check(F->st_1325)).a = (*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).a;
(*(P812)rt_nil_check(F->st_1325)).b = (*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).b;
F->result_ = F->st_1325;
goto ret_;
} else if ((rt_str_eq(F->name_1326, rt_str("FLOAT", 5)) && (F->y_1327 == NULL))) {
F->st_1325 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
(*(P812)rt_nil_check(F->st_1325)).a = (*(P812)rt_nil_check(F->e_284)).b;
if ((((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).next != NULL) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P812)rt_nil_check(F->st_1325)).b = (*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).next)).a;
(*(P812)rt_nil_check(F->st_1325)).c = (*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).b)).next)).b;
}
F->result_ = F->st_1325;
goto ret_;
} else if (((!f_type_name_292(&F->name_1326)) && (!((F->y_1327 == NULL) && ((rt_str_eq(F->name_1326, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1326, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1326, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1325 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_284)).line));
(*(P812)rt_nil_check(F->st_1325)).name = (*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_284)).a)).name;
(*(P812)rt_nil_check(F->st_1325)).b = (*(P812)rt_nil_check(F->e_284)).b;
(*(P812)rt_nil_check(F->st_1325)).flag = ((rt_int)1LL);
F->result_ = F->st_1325;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_tt_subtype_290(P805 name_286, P812 tt_287, P812 args_288, rt_int line_289) {
  struct f_tt_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->tt_287 = tt_287;
F->args_288 = args_288;
F->line_289 = line_289;
F->st_1328 = NULL;
if (rt_str_eq((((P805)rt_nil_check(F->name_286))->all), rt_str("STRING", 6))) {
F->st_1328 = f_nn_61((((rt_int)73LL)), F->line_289);
} else if (rt_str_eq((((P805)rt_nil_check(F->name_286))->all), rt_str("SET", 3))) {
F->st_1328 = f_nn_61((((rt_int)77LL)), F->line_289);
} else if ((rt_str_eq((((P805)rt_nil_check(F->name_286))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P822)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1328 = f_nn_61((((rt_int)78LL)), F->line_289);
} else if (rt_str_eq((((P805)rt_nil_check(F->name_286))->all), rt_str("FILE", 4))) {
F->st_1328 = f_nn_61((((rt_int)79LL)), F->line_289);
} else if (f_type_name_292(&(((P805)rt_nil_check(F->name_286))->all))) {
F->st_1328 = f_nn_61((((rt_int)80LL)), F->line_289);
(*(P812)rt_nil_check(F->st_1328)).name = F->name_286;
(*(P812)rt_nil_check(F->st_1328)).a = F->tt_287;
(*(P812)rt_nil_check(F->st_1328)).b = F->args_288;
F->result_ = F->st_1328;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P812)rt_nil_check(F->st_1328)).a = F->tt_287;
(*(P812)rt_nil_check(F->st_1328)).b = F->args_288;
F->result_ = F->st_1328;
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
F->y_1329 = NULL;
F->y_1329 = f_lookup_154(&(*F->name_291));
if ((F->y_1329 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_291), rt_str("INT", 3)) || rt_str_eq((*F->name_291), rt_str("BOOL", 4))) || rt_str_eq((*F->name_291), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_291), rt_str("ASCII", 5))) || rt_str_eq((*F->name_291), rt_str("ACT", 3))) || rt_str_eq((*F->name_291), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_291), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P822)rt_nil_check(F->y_1329)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1329)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P822)rt_nil_check(F->y_1329)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1329)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1329)).decl)).b)).kind) == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_294(P818 t_293) {
  struct f_empty_set_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_293 = t_293;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_189(f_base_of_214((*(P818)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P818)rt_nil_check(F->t_293)).elem, (*(P818)rt_nil_check(F->t_293)).elemcons))), rt_str(", ", 2)), f_sub_hi_192(f_base_of_214((*(P818)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P818)rt_nil_check(F->t_293)).elem, (*(P818)rt_nil_check(F->t_293)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_296(P818 t_295) {
  struct f_opened_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1330 = NULL;
F->c_1330 = g_caps_867;
if ((((rt_r_ichk((*(P818)rt_nil_check(F->t_295)).kind) != (((rt_int)15LL))) || ((*(P818)rt_nil_check(F->t_295)).ocap == NULL)) || (rt_r_ichk((*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_295)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1330 != NULL)) {
if (((*(P839)rt_nil_check(F->c_1330)).d == (*(P818)rt_nil_check(F->t_295)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1330 = (*(P839)rt_nil_check(F->c_1330)).next;
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
F->i_1331 = RT_R_IUNDEF;
F->i_1331 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_298)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_297)).len)) < ((rt_int)(((*F->pat_298)).len))))) {
F->result_ = (*F->s_297);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1331), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_297)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_297), rt_r_ichk(F->i_1331), rt_sub(rt_add(rt_r_ichk(F->i_1331), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL))), (*F->pat_298))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_297), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1331), ((rt_int)1LL))), (*F->r_299)), f_replace_all_300(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_297), rt_add(rt_r_ichk(F->i_1331), ((rt_int)(((*F->pat_298)).len))), ((rt_int)(((*F->s_297)).len))); b_; }), &(*F->pat_298), &(*F->r_299)));
goto ret_;
}
F->i_1331 = rt_add(rt_r_ichk(F->i_1331), ((rt_int)1LL));
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
F->l_1332 = NULL;
F->l_1332 = g_psub_869;
F->r_1333 = NULL;
F->r_1333 = f_mk_3(&(*F->s_301));
while ((F->l_1332 != NULL)) {
F->r_1333 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_300(&(((P805)rt_nil_check(F->r_1333))->all), &(((P805)rt_nil_check((*(P816)rt_nil_check(F->l_1332)).s))->all), &(((P805)rt_nil_check((*(P816)rt_nil_check((*(P816)rt_nil_check(F->l_1332)).next)).s))->all)); b_; }));
F->l_1332 = (*(P816)rt_nil_check((*(P816)rt_nil_check(F->l_1332)).next)).next;
}
F->result_ = (((P805)rt_nil_check(F->r_1333))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_new_type_306(P822 y_303, P812 st_304, P814 *c_305) {
  struct f_new_type_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_303 = y_303;
F->st_304 = st_304;
F->c_305 = c_305;
F->c_305v = *F->c_305;
F->d_1334 = NULL;
F->d_1334 = (*(P822)rt_nil_check(F->y_303)).decl;
F->p_1335 = NULL;
F->uc_1336 = NULL;
F->c_305v = f_new_cons_175();
if (((*(P822)rt_nil_check(F->y_303)).t == NULL)) {
(*(P822)rt_nil_check(F->y_303)).t = f_new_typ_174((((rt_int)15LL)));
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).name = (*(P822)rt_nil_check(F->y_303)).name;
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).decl = F->d_1334;
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).tparams = (*(P812)rt_nil_check(F->d_1334)).b;
if ((g_caps_867 != NULL)) {
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).ocap = (*(P839)rt_nil_check(g_caps_867)).d;
}
f_open_scope_168();
F->p_1335 = (*(P812)rt_nil_check(F->d_1334)).b;
while ((F->p_1335 != NULL)) {
F->z_1337 = NULL;
F->z_1337 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_1335)).name);
F->zc_1338 = NULL;
(*(P822)rt_nil_check(F->z_1337)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1335)).a, &F->zc_1338);
(*(P822)rt_nil_check(F->z_1337)).mnext = (*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).tpsyms;
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).tpsyms = F->z_1337;
(*(P822)rt_nil_check(F->z_1337)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1335)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1337, rt_r_ichk((*(P812)rt_nil_check(F->d_1334)).line));
F->p_1335 = (*(P812)rt_nil_check(F->p_1335)).next;
}
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).under = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_1334)).a, &F->uc_1336);
(*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_303)).t)).elemcons = F->uc_1336;
f_close_scope_169();
}
(*(P814)rt_nil_check(F->c_305v)).args = (*(P812)rt_nil_check(F->st_304)).b;
F->result_ = (*(P822)rt_nil_check(F->y_303)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_305) = F->c_305v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_310(rstr *lval_307, P818 t_308, P814 c_309) {
  struct f_init_storage_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_307 = lval_307;
F->t_308 = t_308;
F->c_309 = c_309;
f_make_storage_325(&(*F->lval_307), F->t_308, F->c_309);
if (((*(P818)rt_nil_check(F->t_308)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P818)rt_nil_check(F->t_308)).initp, &(*F->lval_307)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_313(P822 y_311, rstr *lval_312) {
  struct f_init_call_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->lval_312 = lval_312;
F->link_1339 = NULL;
F->link_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_311)).level) > ((rt_int)0LL))) {
F->link_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1341 = ((rt_int)1LL), hi1342 = rt_sub(rt_r_ichk(g_cur_level_865), rt_r_ichk((*(P822)rt_nil_check(F->y_311)).level));
for (rt_int it1343 = lo1341; it1343 <= hi1342; it1343++) {
F->i_1340 = it1343;
F->link_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->link_1339))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->link_1339))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_311)).cname))->all), rt_str("(", 1)), (((P805)rt_nil_check(F->link_1339))->all)), rt_str("&", 1)), (*F->lval_312)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_315(P818 t_314) {
  struct f_needs_fin_315fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_314 = t_314;
if ((F->t_314 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P818)rt_nil_check(F->t_314)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_314)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_315((*(P818)rt_nil_check(F->t_314)).under);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_314)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_315((*(P818)rt_nil_check(F->t_314)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_314)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_314)).kind) == (((rt_int)17LL))))) {
F->f_1344 = NULL;
F->f_1344 = (*(P818)rt_nil_check(F->t_314)).fields;
while ((F->f_1344 != NULL)) {
if (f_needs_fin_315((*(P820)rt_nil_check(F->f_1344)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1344 = (*(P820)rt_nil_check(F->f_1344)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_318(rstr *lval_316, P818 t_317) {
  struct f_fin_code_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_316 = lval_316;
F->t_317 = t_317;
F->r_1345 = NULL;
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P818)rt_nil_check(F->t_317)).finalp != NULL)) {
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_313((*(P818)rt_nil_check(F->t_317)).finalp, &(*F->lval_316)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_317)).tparams == NULL))) {
F->result_ = rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), f_fin_code_318(&(*F->lval_316), (*(P818)rt_nil_check(F->t_317)).under));
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_316), rt_str(".all", 4)); b_; }), (*(P818)rt_nil_check(F->t_317)).under));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_317)).kind) == (((rt_int)6LL))) && f_needs_fin_315((*(P818)rt_nil_check(F->t_317)).elem))) {
F->i_1346 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), rt_str("for (rt_int ", 12)), F->i_1346), rt_str(" = 0; ", 6)), F->i_1346), rt_str(" < ", 3)), f_acnt_240(F->t_317, &(*F->lval_316))), rt_str("; ", 2)), F->i_1346), rt_str("++) { ", 6)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".p[", 3)), F->i_1346), rt_str("]", 1)); b_; }), (*(P818)rt_nil_check(F->t_317)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_317)).kind) == (((rt_int)7LL)))) {
F->f_1347 = NULL;
F->f_1347 = (*(P818)rt_nil_check(F->t_317)).fields;
while ((F->f_1347 != NULL)) {
if (f_needs_fin_315((*(P820)rt_nil_check(F->f_1347)).t)) {
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1347)).name))->all))); b_; }), (*(P820)rt_nil_check(F->f_1347)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1347 = (*(P820)rt_nil_check(F->f_1347)).next;
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_317)).kind) == (((rt_int)17LL)))) {
F->f_1348 = NULL;
F->f_1348 = (*(P818)rt_nil_check(F->t_317)).fields;
F->i_1349 = RT_R_IUNDEF;
F->i_1349 = ((rt_int)0LL);
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), rt_str("switch (", 8)), (*F->lval_316)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1348 != NULL)) {
if (f_needs_fin_315((*(P820)rt_nil_check(F->f_1348)).t)) {
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1349))), rt_str(": ", 2)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".u.", 3)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1348)).name))->all))); b_; }), (*(P820)rt_nil_check(F->f_1348)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1349 = rt_add(rt_r_ichk(F->i_1349), ((rt_int)1LL));
F->f_1348 = (*(P820)rt_nil_check(F->f_1348)).next;
}
F->r_1345 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_1345))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P805)rt_nil_check(F->r_1345))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_tparam_type_321(P818 t_319, rstr *name_320) {
  struct f_tparam_type_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->name_320 = name_320;
F->z_1350 = NULL;
F->z_1350 = (*(P818)rt_nil_check(F->t_319)).tpsyms;
while ((F->z_1350 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->z_1350)).name))->all), (*F->name_320))) {
F->result_ = (*(P822)rt_nil_check(F->z_1350)).t;
goto ret_;
}
F->z_1350 = (*(P822)rt_nil_check(F->z_1350)).mnext;
}
F->result_ = g_ty_int_892;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_325(rstr *lval_322, P818 t_323, P814 c_324) {
  struct f_make_storage_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_322 = lval_322;
F->t_323 = t_323;
F->c_324 = c_324;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)15LL)))) {
F->p_1351 = NULL;
F->p_1351 = (*(P818)rt_nil_check(F->t_323)).tparams;
F->a_1352 = NULL;
F->a_1352 = (*(P814)rt_nil_check(F->c_324)).args;
F->uc_1353 = NULL;
F->ut_1354 = NULL;
F->at_1355 = NULL;
if ((f_list_len_67(F->a_1352) != f_list_len_67(F->p_1351))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_323)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1351))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1351 != NULL)) {
F->pt_1356 = f_tparam_type_321(F->t_323, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1351)).name))->all));
F->v_1357 = rt_str_copy(f_gexpr_646(F->a_1352, F->pt_1356, &F->at_1355));
f_check_type_223(F->at_1355, F->pt_1356, rt_r_ichk((*(P812)rt_nil_check(F->a_1352)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1351)).name))->all))), rt_str(" = ", 3)), F->v_1357), rt_str(";", 1)); b_; }));
F->p_1351 = (*(P812)rt_nil_check(F->p_1351)).next;
F->a_1352 = (*(P812)rt_nil_check(F->a_1352)).next;
}
{
F->saved_1358 = NULL;
F->saved_1358 = g_psub_869;
F->p_1351 = (*(P818)rt_nil_check(F->t_323)).tparams;
while ((F->p_1351 != NULL)) {
F->l1_1359 = NULL;
F->l2_1360 = NULL;
{ R817 *cell1361 = rt_alloc(sizeof(R817));
(*cell1361).s = NULL;
(*cell1361).next = NULL;
F->l1_1359 = cell1361;
}
{ R817 *cell1362 = rt_alloc(sizeof(R817));
(*cell1362).s = NULL;
(*cell1362).next = NULL;
F->l2_1360 = cell1362;
}
(*(P816)rt_nil_check(F->l1_1359)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1351)).name))->all))), rt_str("@", 1)); b_; }));
(*(P816)rt_nil_check(F->l2_1360)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1351)).name))->all))); b_; }));
(*(P816)rt_nil_check(F->l1_1359)).next = F->l2_1360;
(*(P816)rt_nil_check(F->l2_1360)).next = g_psub_869;
g_psub_869 = F->l1_1359;
F->p_1351 = (*(P812)rt_nil_check(F->p_1351)).next;
}
if (((*(P818)rt_nil_check(F->t_323)).tparams == NULL)) {
f_init_storage_310(&(*F->lval_322), (*(P818)rt_nil_check(F->t_323)).under, (*(P818)rt_nil_check(F->t_323)).elemcons);
} else {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".all", 4)); b_; }), (*(P818)rt_nil_check(F->t_323)).under, (*(P818)rt_nil_check(F->t_323)).elemcons);
}
g_psub_869 = F->saved_1358;
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)12LL)))) {
if (((*(P814)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_322)), rt_str(", ", 2)), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_324)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_225((*(P818)rt_nil_check(F->t_323)).elem)), rt_str("), ", 3)), f_mcopy_354((*(P818)rt_nil_check(F->t_323)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_322)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_empty_set_294(F->t_323)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)5LL)))) {
if (((*(P814)rt_nil_check(F->c_324)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = rt_str_new(", 14)), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_324)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)6LL)))) {
if (((*(P814)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1364 = ((rt_int)1LL), hi1365 = rt_r_ichk((*(P818)rt_nil_check(F->t_323)).ndim);
for (rt_int it1366 = lo1364; it1366 <= hi1365; it1366++) {
F->k_1363 = it1366;
if ((f_cons_lo_243(F->c_324, F->k_1363) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_dim_lo_233(F->k_1363)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P805)rt_nil_check(f_cons_lo_243(F->c_324, F->k_1363)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_322)), rt_str(".", 1)), f_dim_hi_235(F->k_1363)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P805)rt_nil_check(f_cons_hi_246(F->c_324, F->k_1363)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".lo2 = ", 7)), (*F->lval_322)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P818)rt_nil_check(F->t_323)).elem)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_884) && (!rt_str_eq(f_uninit_value_327((*(P818)rt_nil_check(F->t_323)).elem), rt_str("", 0)))))) {
F->i_1367 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1367), rt_str(" = 0; ", 6)), F->i_1367), rt_str(" < ", 3)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str("; ", 2)), F->i_1367), rt_str("++) {", 5)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p[", 3)), F->i_1367), rt_str("]", 1)); b_; }), (*(P818)rt_nil_check(F->t_323)).elem, (*(P818)rt_nil_check(F->t_323)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)7LL)))) {
F->f_1368 = NULL;
F->f_1368 = (*(P818)rt_nil_check(F->t_323)).fields;
while ((F->f_1368 != NULL)) {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1368)).name))->all))); b_; }), (*(P820)rt_nil_check(F->f_1368)).t, (*(P820)rt_nil_check(F->f_1368)).c);
F->f_1368 = (*(P820)rt_nil_check(F->f_1368)).next;
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_323)).kind) == (((rt_int)17LL)))) {
if (((F->c_324 != NULL) && rt_r_echk((*(P814)rt_nil_check(F->c_324)).hasm))) {
F->f_1369 = NULL;
F->f_1369 = (*(P818)rt_nil_check(F->t_323)).fields;
{ rt_int lo1371 = ((rt_int)1LL), hi1372 = rt_r_ichk((*(P814)rt_nil_check(F->c_324)).mlo);
for (rt_int it1373 = lo1371; it1373 <= hi1372; it1373++) {
F->i_1370 = it1373;
F->f_1369 = (*(P820)rt_nil_check(F->f_1369)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P814)rt_nil_check(F->c_324)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".u.", 3)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1369)).name))->all))); b_; }), (*(P820)rt_nil_check(F->f_1369)).t, (*(P820)rt_nil_check(F->f_1369)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_884) && (!rt_str_eq(f_uninit_value_327(F->t_323), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_uninit_value_327(F->t_323)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_327(P818 t_326) {
  struct f_uninit_value_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_326 = t_326;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_326)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_326)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_326)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_326)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_330(P818 t_328, rstr *v_329) {
  struct f_init_chk_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_328 = t_328;
F->v_329 = v_329;
F->b_1374 = NULL;
F->b_1374 = f_base_of_214(F->t_328);
if (f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_329);
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->b_1374)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->b_1374)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->b_1374)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->b_1374)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_333(P812 e_331, int *ok_332) {
  struct f_manifest_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_331 = e_331;
F->ok_332 = ok_332;
F->ok_332v = *F->ok_332;
F->v_1375 = NULL;
F->v_1375 = f_meval_342(F->e_331, &F->ok_332v);
if ((rt_r_echk(F->ok_332v) && (rt_r_ichk((*(P831)rt_nil_check(F->v_1375)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P831)rt_nil_check(F->v_1375)).i);
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

static P831 f_mk_mval_336(rt_int kind_334, rt_int i_335) {
  struct f_mk_mval_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_334 = kind_334;
F->i_335 = i_335;
F->v_1376 = NULL;
{ R832 *cell1377 = rt_alloc(sizeof(R832));
(*cell1377).s = NULL;
(*cell1377).t = NULL;
F->v_1376 = cell1377;
}
(*(P831)rt_nil_check(F->v_1376)).kind = F->kind_334;
(*(P831)rt_nil_check(F->v_1376)).i = F->i_335;
F->result_ = F->v_1376;
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
F->r_1378 = RT_R_IUNDEF;
F->r_1378 = ((rt_int)1LL);
{ rt_int lo1380 = ((rt_int)1LL), hi1381 = F->b_338;
for (rt_int it1382 = lo1380; it1382 <= hi1381; it1382++) {
F->i_1379 = it1382;
F->r_1378 = rt_mul(rt_r_ichk(F->r_1378), F->a_337);
}
}
F->result_ = rt_r_ichk(F->r_1378);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P831 f_meval_342(P812 e_340, int *ok_341) {
  struct f_meval_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_340 = e_340;
F->ok_341 = ok_341;
F->ok_341v = *F->ok_341;
F->a_1383 = NULL;
F->b_1384 = NULL;
F->ok2_1385 = RT_R_EUNDEF;
F->op_1386 = NULL;
F->ok_341v = 0;
if ((F->e_340 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)1LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)5LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)2LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)3LL)))) {
F->ok_341v = 1;
F->a_1383 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
(*(P831)rt_nil_check(F->a_1383)).s = (*(P812)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1383;
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_253((*(P818)rt_nil_check(g_ty_ascii_895)).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all)) >= ((rt_int)0LL))) {
F->ok_341v = 1;
F->a_1383 = f_mk_mval_336((((rt_int)4LL)), f_lit_index_253((*(P818)rt_nil_check(g_ty_ascii_895)).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all)));
(*(P831)rt_nil_check(F->a_1383)).t = g_ty_ascii_895;
(*(P831)rt_nil_check(F->a_1383)).s = (*(P812)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1383;
goto ret_;
}
F->a_1383 = f_mk_mval_336((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P831)rt_nil_check(F->a_1383)).s = (*(P812)rt_nil_check(F->e_340)).name;
F->ok_341v = 1;
F->result_ = F->a_1383;
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_342((*(P812)rt_nil_check(F->e_340)).a, &F->ok_341v);
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)7LL)))) {
F->y_1387 = NULL;
F->y_1387 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all));
if ((((F->y_1387 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->y_1387)).kind) == (((rt_int)2LL)))) && ((*(P822)rt_nil_check(F->y_1387)).mv != NULL))) {
F->ok_341v = 1;
F->result_ = (*(P822)rt_nil_check(F->y_1387)).mv;
goto ret_;
} else if ((((F->y_1387 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->y_1387)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P822)rt_nil_check(F->y_1387)).hasmv))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P822)rt_nil_check(F->y_1387)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) == (((rt_int)8LL)))) {
F->a_1383 = f_meval_342((*(P812)rt_nil_check(F->e_340)).a, &F->ok_341v);
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i)));
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i)));
goto ret_;
} else if (((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all), rt_str("+", 1)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1383;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->e_340)).kind) != (((rt_int)9LL))) || f_user_defined_352(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_340)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1386 = (*(P812)rt_nil_check(F->e_340)).name;
F->a_1383 = f_meval_342((*(P812)rt_nil_check(F->e_340)).a, &F->ok_341v);
F->b_1384 = f_meval_342((*(P812)rt_nil_check(F->e_340)).b, &F->ok2_1385);
F->ok_341v = (rt_r_echk(F->ok_341v) && rt_r_echk(F->ok2_1385));
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_341v = 0;
if (((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)1LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_add(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_div(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("**", 2)) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), f_ipow_339(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) == rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) != rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) < rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) <= rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) > rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) >= rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("+", 1)) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("-", 1))) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("*", 1))) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("/", 1))))) {
F->ok_341v = 1;
F->result_ = F->a_1383;
goto ret_;
} else if ((((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("**", 2)))) {
F->ok_341v = 1;
F->result_ = F->a_1383;
goto ret_;
} else if (((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)2LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_add(rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i), rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("XOR", 3)) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) != rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).i) == rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1)) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P805)rt_nil_check((*(P831)rt_nil_check(F->a_1383)).s))->all), (((P805)rt_nil_check((*(P831)rt_nil_check(F->b_1384)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P805)rt_nil_check((*(P831)rt_nil_check(F->a_1383)).s))->all), (((P805)rt_nil_check((*(P831)rt_nil_check(F->b_1384)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1)) || rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P805)rt_nil_check((*(P831)rt_nil_check(F->a_1383)).s))->all), (((P805)rt_nil_check((*(P831)rt_nil_check(F->b_1384)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P805)rt_nil_check((*(P831)rt_nil_check(F->a_1383)).s))->all), (((P805)rt_nil_check((*(P831)rt_nil_check(F->b_1384)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P805)rt_nil_check(F->op_1386))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P831)rt_nil_check(F->a_1383)).kind) == (((rt_int)5LL))) || ((*(P831)rt_nil_check(F->a_1383)).t == g_ty_ascii_895))) && ((rt_r_ichk((*(P831)rt_nil_check(F->b_1384)).kind) == (((rt_int)5LL))) || ((*(P831)rt_nil_check(F->b_1384)).t == g_ty_ascii_895)))) {
F->r_1388 = NULL;
F->r_1388 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
F->ok_341v = 1;
(*(P831)rt_nil_check(F->r_1388)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_348(F->a_1383), f_mstr_348(F->b_1384)); b_; }));
F->result_ = F->r_1388;
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

static rstr f_mstr_348(P831 v_347) {
  struct f_mstr_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_347 = v_347;
if ((rt_r_ichk((*(P831)rt_nil_check(F->v_347)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P805)rt_nil_check((*(P831)rt_nil_check(F->v_347)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_350(rt_r_ichk((*(P831)rt_nil_check(F->v_347)).i)));
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
F->printable_1389 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_349 >= ((rt_int)32LL)) && (F->i_349 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1389, rt_sub(F->i_349, ((rt_int)31LL))));
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
F->y_1390 = NULL;
F->y_1390 = f_lookup_154(&(*F->op_351));
F->result_ = ((F->y_1390 != NULL) && ((rt_r_ichk((*(P822)rt_nil_check(F->y_1390)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1390)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_354(P818 t_353) {
  struct f_mcopy_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
F->ct_1391 = rt_str_copy(f_ctype_225(F->t_353));
F->name_1392 = rt_str_new(rt_add(((rt_int)((F->ct_1391).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1392, rt_str_cat(rt_str("mc_", 3), F->ct_1391));
F->l_1393 = NULL;
if ((!f_seen_name_375(g_mcopies_891, &F->name_1392))) {
{ R817 *cell1394 = rt_alloc(sizeof(R817));
(*cell1394).s = NULL;
(*cell1394).next = NULL;
F->l_1393 = cell1394;
}
(*(P816)rt_nil_check(F->l_1393)).s = f_mk_3(&F->name_1392);
(*(P816)rt_nil_check(F->l_1393)).next = g_mcopies_891;
g_mcopies_891 = F->l_1393;
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1392), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1392), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1391), rt_str(" *)d = ", 7)), f_copy_code_364(F->t_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1391), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1392;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_356(P818 t_355) {
  struct f_composite_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->result_ = ((((rt_r_ichk((*(P818)rt_nil_check(F->t_355)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_355)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_355)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P818)rt_nil_check(F->t_355)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_355)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_361(rstr *lval_357, P818 t_358, rstr *v_359, P814 c_360) {
  struct f_assign_code_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_357 = lval_357;
F->t_358 = t_358;
F->v_359 = v_359;
F->c_360 = c_360;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_358)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_358)).tparams == NULL))) {
F->result_ = f_assign_code_361(&(*F->lval_357), (*(P818)rt_nil_check(F->t_358)).under, &(*F->v_359), F->c_360);
goto ret_;
}
if ((((rt_r_ichk((*(P818)rt_nil_check(F->t_358)).kind) == (((rt_int)17LL))) && (F->c_360 != NULL)) && ((*(P814)rt_nil_check(F->c_360)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_358)), rt_str(" u_ = ", 6)), (*F->v_359)), rt_str("; if (u_.tag != (", 17)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_360)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_356(F->t_358)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_358)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_358)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_358)).kind) == (((rt_int)7LL))))) {
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

static rstr f_copy_code_364(P818 t_362, rstr *v_363) {
  struct f_copy_code_364fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
F->v_363 = v_363;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_362)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_copy_code_364((*(P818)rt_nil_check(F->t_362)).under, &(*F->v_363));
goto ret_;
}
if (f_composite_356(F->t_362)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_362)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_363)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_362)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_362)).kind) == (((rt_int)7LL))))) {
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

static rstr f_eq_code_368(P818 t_365, rstr *a_366, rstr *b_367) {
  struct f_eq_code_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_365 = t_365;
F->a_366 = a_366;
F->b_367 = b_367;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_365)).tparams == NULL))) {
F->result_ = f_eq_code_368((*(P818)rt_nil_check(F->t_365)).under, &(*F->a_366), &(*F->b_367));
goto ret_;
}
if (f_composite_356(F->t_365)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_365)).kind) == (((rt_int)7LL))))) {
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

static rstr f_elem_assign_372(rstr *lval_369, P818 t_370, rstr *v_371) {
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

static int f_seen_name_375(P816 l_373, rstr *s_374) {
  struct f_seen_name_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_373 = l_373;
F->s_374 = s_374;
F->p_1395 = NULL;
F->p_1395 = F->l_373;
while ((F->p_1395 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P816)rt_nil_check(F->p_1395)).s))->all), (*F->s_374))) {
F->result_ = 1;
goto ret_;
}
F->p_1395 = (*(P816)rt_nil_check(F->p_1395)).next;
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
F->order_1396 = NULL;
F->t_1397 = NULL;
F->t_1397 = g_all_types_853;
F->done_1398 = NULL;
while ((F->t_1397 != NULL)) {
if ((f_composite_356(F->t_1397) && (!f_seen_name_375(F->done_1398, &(((P805)rt_nil_check((*(P818)rt_nil_check(F->t_1397)).cname))->all))))) {
F->l_1399 = NULL;
F->c_1400 = rt_str_new(((rt_int)(((((P805)rt_nil_check((*(P818)rt_nil_check(F->t_1397)).cname))->all)).len)));
rt_str_assign(&F->c_1400, (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_1397)).cname))->all));
{ R817 *cell1401 = rt_alloc(sizeof(R817));
(*cell1401).s = NULL;
(*cell1401).next = NULL;
F->l_1399 = cell1401;
}
(*(P816)rt_nil_check(F->l_1399)).s = (*(P818)rt_nil_check(F->t_1397)).cname;
(*(P816)rt_nil_check(F->l_1399)).next = F->done_1398;
F->done_1398 = F->l_1399;
f_put_27(g_out_helpers_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1400), rt_str("(", 1)), F->c_1400), rt_str(" *d, ", 5)), F->c_1400), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1400), rt_str(" cp_", 4)), F->c_1400), rt_str("(", 1)), F->c_1400), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1400), rt_str("(", 1)), F->c_1400), rt_str(" a, ", 4)), F->c_1400), rt_str(" b);", 4)); b_; }));
f_helper_bodies_378(F->t_1397);
}
F->t_1397 = (*(P818)rt_nil_check(F->t_1397)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_378(P818 t_377) {
  struct f_helper_bodies_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_377 = t_377;
F->c_1402 = rt_str_new(((rt_int)(((((P805)rt_nil_check((*(P818)rt_nil_check(F->t_377)).cname))->all)).len)));
rt_str_assign(&F->c_1402, (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_377)).cname))->all));
F->b_1403 = NULL;
F->b_1403 = g_out_funcs_859;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_377)).kind) == (((rt_int)6LL)))) {
F->e_1404 = NULL;
F->e_1404 = (*(P818)rt_nil_check(F->t_377)).elem;
F->sizes_1405 = NULL;
F->sizes_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1406 = NULL;
F->bounds_1406 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1408 = ((rt_int)1LL), hi1409 = rt_r_ichk((*(P818)rt_nil_check(F->t_377)).ndim);
for (rt_int it1410 = lo1408; it1410 <= hi1409; it1410++) {
F->k_1407 = it1410;
F->l_1411 = rt_str_copy(f_dim_lo_233(F->k_1407));
F->h_1412 = rt_str_copy(f_dim_hi_235(F->k_1407));
F->sizes_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->sizes_1405))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1411), rt_str(", d->", 5)), F->h_1412), rt_str(") != RT_R_EXT(s.", 16)), F->l_1411), rt_str(", s.", 4)), F->h_1412), rt_str(")", 1)); b_; }));
F->bounds_1406 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->bounds_1406))->all), rt_str(" || a.", 6)), F->l_1411), rt_str(" != b.", 6)), F->l_1411), rt_str(" || a.", 6)), F->h_1412), rt_str(" != b.", 6)), F->h_1412); b_; }));
}
}
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" *d, ", 5)), F->c_1402), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P805)rt_nil_check(F->sizes_1405))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1404, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1404, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1402), rt_str(" cp_", 4)), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1402), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_225(F->e_1404)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_364(F->e_1404, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" a, ", 4)), F->c_1402), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P805)rt_nil_check(F->bounds_1406))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_368(F->e_1404, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_377)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" *d, ", 5)), F->c_1402), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P818)rt_nil_check(F->t_377)).under) && ((*(P818)rt_nil_check(F->t_377)).elemcons != NULL)) && ((*(P814)rt_nil_check((*(P818)rt_nil_check(F->t_377)).elemcons)).lo != NULL))) {
F->saved_1413 = NULL;
F->saved_1413 = g_psub_869;
F->p_1414 = NULL;
F->p_1414 = (*(P818)rt_nil_check(F->t_377)).tparams;
while ((F->p_1414 != NULL)) {
F->l1_1415 = NULL;
F->l2_1416 = NULL;
{ R817 *cell1417 = rt_alloc(sizeof(R817));
(*cell1417).s = NULL;
(*cell1417).next = NULL;
F->l1_1415 = cell1417;
}
{ R817 *cell1418 = rt_alloc(sizeof(R817));
(*cell1418).s = NULL;
(*cell1418).next = NULL;
F->l2_1416 = cell1418;
}
(*(P816)rt_nil_check(F->l1_1415)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1414)).name))->all))), rt_str("@", 1)); b_; }));
(*(P816)rt_nil_check(F->l2_1416)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1414)).name))->all))); b_; }));
(*(P816)rt_nil_check(F->l1_1415)).next = F->l2_1416;
(*(P816)rt_nil_check(F->l2_1416)).next = g_psub_869;
g_psub_869 = F->l1_1415;
F->p_1414 = (*(P812)rt_nil_check(F->p_1414)).next;
}
if ((rt_r_ichk((*(P818)rt_nil_check((*(P818)rt_nil_check(F->t_377)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check((*(P818)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check((*(P818)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check((*(P818)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P805)rt_nil_check((*(P814)rt_nil_check((*(P818)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_869 = F->saved_1413;
} else {
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P818)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1402), rt_str(" cp_", 4)), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" s) { s.all = ", 14)), f_copy_code_364((*(P818)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" a, ", 4)), F->c_1402), rt_str(" b) { return ", 13)), f_eq_code_368((*(P818)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_377)).kind) == (((rt_int)17LL)))) {
F->f_1419 = NULL;
F->f_1419 = (*(P818)rt_nil_check(F->t_377)).fields;
F->i_1420 = RT_R_IUNDEF;
F->i_1420 = ((rt_int)0LL);
F->cases_as_1421 = NULL;
F->cases_as_1421 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1422 = NULL;
F->cases_cp_1422 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1423 = NULL;
F->cases_eq_1423 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1419 != NULL)) {
F->fn_1424 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1419)).name))->all))));
F->cases_as_1421 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->cases_as_1421))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1420))), rt_str(": d->", 5)), F->fn_1424), rt_str(" = ", 3)), f_copy_code_364((*(P820)rt_nil_check(F->f_1419)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1424); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1422 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->cases_cp_1422))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1420))), rt_str(": d.", 4)), F->fn_1424), rt_str(" = ", 3)), f_copy_code_364((*(P820)rt_nil_check(F->f_1419)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1424); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1423 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->cases_eq_1423))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1420))), rt_str(": return ", 9)), f_eq_code_368((*(P820)rt_nil_check(F->f_1419)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1424); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1424); b_; }))), rt_str(";", 1)); b_; }));
F->i_1420 = rt_add(rt_r_ichk(F->i_1420), ((rt_int)1LL));
F->f_1419 = (*(P820)rt_nil_check(F->f_1419)).next;
}
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" *d, ", 5)), F->c_1402), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P805)rt_nil_check(F->cases_as_1421))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1402), rt_str(" cp_", 4)), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1402), rt_str(" d = s; switch (s.tag) {", 24)), (((P805)rt_nil_check(F->cases_cp_1422))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" a, ", 4)), F->c_1402), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P805)rt_nil_check(F->cases_eq_1423))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1425 = NULL;
F->f_1425 = (*(P818)rt_nil_check(F->t_377)).fields;
F->conds_1426 = NULL;
F->conds_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" *d, ", 5)), F->c_1402), rt_str(" s) {", 5)); b_; }));
while ((F->f_1425 != NULL)) {
F->fn_1427 = rt_str_copy(f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1425)).name))->all)));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1427); b_; }), (*(P820)rt_nil_check(F->f_1425)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1427); b_; }))); b_; }));
F->f_1425 = (*(P820)rt_nil_check(F->f_1425)).next;
}
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1402), rt_str(" cp_", 4)), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1402), rt_str(" d = s;", 7)); b_; }));
F->f_1425 = (*(P818)rt_nil_check(F->t_377)).fields;
while ((F->f_1425 != NULL)) {
F->fn_1428 = rt_str_copy(f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1425)).name))->all)));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1428), rt_str(" = ", 3)), f_copy_code_364((*(P820)rt_nil_check(F->f_1425)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1428); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->conds_1426))->all), rt_str(" && ", 4)), f_eq_code_368((*(P820)rt_nil_check(F->f_1425)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1428); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1428); b_; }))); b_; }));
F->f_1425 = (*(P820)rt_nil_check(F->f_1425)).next;
}
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1402), rt_str("(", 1)), F->c_1402), rt_str(" a, ", 4)), F->c_1402), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P805)rt_nil_check(F->conds_1426))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1403, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_380(P812 elems_379) {
  struct f_declare_body_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_379 = elems_379;
F->e_1429 = NULL;
F->e_1429 = F->elems_379;
while ((F->e_1429 != NULL)) {
if (((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).flag) == ((rt_int)0LL)))) {
f_manifest_const_382(F->e_1429);
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_390(F->e_1429);
} else if ((((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).flag) != ((rt_int)3LL)))) {
f_gen_expose_407(F->e_1429);
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)49LL)))) {
F->y_1430 = NULL;
F->y_1430 = f_new_sym_172((((rt_int)7LL)), (*(P812)rt_nil_check(F->e_1429)).name);
(*(P822)rt_nil_check(F->y_1430)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1430, rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).line));
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1430)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1430)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)42LL)))) {
F->y_1431 = NULL;
F->y_1431 = f_new_sym_172((((rt_int)6LL)), (*(P812)rt_nil_check(F->e_1429)).name);
(*(P822)rt_nil_check(F->y_1431)).st = (*(P812)rt_nil_check(F->e_1429)).a;
(*(P822)rt_nil_check(F->y_1431)).decl = F->e_1429;
f_define_159(F->y_1431, rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).line));
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)44LL)))) {
F->y_1432 = NULL;
F->y_1432 = f_new_sym_172((((rt_int)5LL)), (*(P812)rt_nil_check(F->e_1429)).name);
F->t_1433 = NULL;
F->t_1433 = f_new_typ_174((((rt_int)8LL)));
(*(P818)rt_nil_check(F->t_1433)).name = (*(P812)rt_nil_check(F->e_1429)).name;
(*(P818)rt_nil_check(F->t_1433)).decl = F->e_1429;
(*(P822)rt_nil_check(F->y_1432)).t = F->t_1433;
f_define_159(F->y_1432, rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).line));
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)43LL)))) {
F->y_1434 = NULL;
F->y_1434 = f_new_sym_172((((rt_int)5LL)), (*(P812)rt_nil_check(F->e_1429)).name);
(*(P822)rt_nil_check(F->y_1434)).st = (*(P812)rt_nil_check(F->e_1429)).a;
(*(P822)rt_nil_check(F->y_1434)).decl = F->e_1429;
f_define_159(F->y_1434, rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).line));
}
F->e_1429 = (*(P812)rt_nil_check(F->e_1429)).next;
}
F->e_1429 = F->elems_379;
while ((F->e_1429 != NULL)) {
if ((((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)50LL))))) {
F->y_1435 = NULL;
f_declare_subprogram_431(F->e_1429);
F->y_1435 = f_lookup_decl_156(F->e_1429);
(*(P822)rt_nil_check(F->y_1435)).home = F->elems_379;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)51LL)))) {
F->g_1436 = NULL;
F->g_1436 = f_new_sym_172((((rt_int)10LL)), (*(P812)rt_nil_check(F->e_1429)).name);
(*(P822)rt_nil_check(F->g_1436)).decl = F->e_1429;
(*(P822)rt_nil_check(F->g_1436)).level = rt_r_ichk(g_cur_level_865);
(*(P822)rt_nil_check(F->g_1436)).owner = g_func_sym_876;
(*(P822)rt_nil_check(F->g_1436)).gctx = g_fctx_866;
f_define_159(F->g_1436, rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).line));
}
F->e_1429 = (*(P812)rt_nil_check(F->e_1429)).next;
}
F->e_1429 = F->elems_379;
{
F->snap_1437 = NULL;
while ((F->e_1429 != NULL)) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1437 == NULL)) {
{ P826 cell1438 = rt_alloc(sizeof *cell1438);
rt_int pv1439 = (((rt_int)4093LL));
cell1438->p_n = pv1439;
cell1438->all.lo = ((rt_int)0LL); cell1438->all.hi = pv1439;
cell1438->all.lo2 = cell1438->all.hi2 = 1;
cell1438->all.p = rt_alloc(sizeof(P822) * (size_t)(RT_CNT(cell1438->all)) + 1);
for (rt_int i1440 = 0; i1440 < (RT_CNT(cell1438->all)); i1440++) {
cell1438->all.p[i1440] = NULL;
}
F->snap_1437 = cell1438;
}
{ rt_int lo1442 = ((rt_int)0LL), hi1443 = (((rt_int)4093LL));
for (rt_int it1444 = lo1442; it1444 <= hi1443; it1444++) {
F->i_1441 = it1444;
(((P826)rt_nil_check(F->snap_1437))->all).p[(rt_index(F->i_1441, (((P826)rt_nil_check(F->snap_1437))->all).lo, (((P826)rt_nil_check(F->snap_1437))->all).hi) - (((P826)rt_nil_check(F->snap_1437))->all).lo)] = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(F->i_1441, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1445 = NULL;
F->g_1445 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all));
(*(P822)rt_nil_check(F->g_1445)).env = F->snap_1437;
}
}
F->e_1429 = (*(P812)rt_nil_check(F->e_1429)).next;
}
}
F->e_1429 = F->elems_379;
while ((F->e_1429 != NULL)) {
if (((rt_r_ichk((*(P812)rt_nil_check(F->e_1429)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1446 = NULL;
F->y_1446 = f_lookup_decl_156(F->e_1429);
if (((((F->y_1446 != NULL) && ((*(P822)rt_nil_check(F->y_1446)).params != NULL)) && ((*(P824)rt_nil_check((*(P822)rt_nil_check(F->y_1446)).params)).next == NULL)) && ((rt_r_ichk((*(P818)rt_nil_check((*(P824)rt_nil_check((*(P822)rt_nil_check(F->y_1446)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P818)rt_nil_check((*(P824)rt_nil_check((*(P822)rt_nil_check(F->y_1446)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1429)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P818)rt_nil_check((*(P824)rt_nil_check((*(P822)rt_nil_check(F->y_1446)).params)).t)).initp = F->y_1446;
} else {
(*(P818)rt_nil_check((*(P824)rt_nil_check((*(P822)rt_nil_check(F->y_1446)).params)).t)).finalp = F->y_1446;
}
}
}
F->e_1429 = (*(P812)rt_nil_check(F->e_1429)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_382(P812 d_381) {
  struct f_manifest_const_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_381 = d_381;
F->ok_1447 = RT_R_EUNDEF;
F->v_1448 = NULL;
F->y_1449 = NULL;
F->t_1450 = NULL;
F->ctext_1451 = NULL;
if (((*(P812)rt_nil_check(F->d_381)).a != NULL)) {
if (((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->d_381)).a)).kind) != (((rt_int)70LL))) || ((*(P812)rt_nil_check((*(P812)rt_nil_check(F->d_381)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1448 = f_meval_342((*(P812)rt_nil_check(F->d_381)).b, &F->ok_1447);
if ((!rt_r_echk(F->ok_1447))) {
goto ret_;
}
{
F->saved_1452 = NULL;
F->saved_1452 = g_code_862;
g_code_862 = f_new_buffer_24();
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
{ rt_frame xf1453;
if (RT_TRY(xf1453)) {
F->ctext_1451 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_646((*(P812)rt_nil_check(F->d_381)).b, NULL, &F->t_1450)), rt_str(")", 1)); b_; }));
RT_POP(xf1453);
} else {
RT_POP(xf1453);
int x1454 = rt_xcur;
if (0 || x1454 == ex_compile_error_1) {
F->ok_1447 = 0;
} else {
rt_raise(x1454);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
F->ok_1447 = (rt_r_echk(F->ok_1447) && ((*(P835)rt_nil_check(g_code_862)).head == NULL));
g_code_862 = F->saved_1452;
}
if (((!rt_r_echk(F->ok_1447)) || (((*(P812)rt_nil_check(F->d_381)).a != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->t_1450)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P831)rt_nil_check(F->v_1448)).kind) == (((rt_int)4LL)))) {
(*(P831)rt_nil_check(F->v_1448)).t = F->t_1450;
(*(P831)rt_nil_check(F->v_1448)).i = f_lit_index_253((*(P818)rt_nil_check(f_base_of_214(F->t_1450))).lits, &(((P805)rt_nil_check((*(P831)rt_nil_check(F->v_1448)).s))->all));
}
(*(P812)rt_nil_check(F->d_381)).flag = ((rt_int)1LL);
F->y_1449 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->d_381)).name);
(*(P822)rt_nil_check(F->y_1449)).t = F->t_1450;
(*(P822)rt_nil_check(F->y_1449)).c = f_new_cons_175();
(*(P822)rt_nil_check(F->y_1449)).mv = F->v_1448;
if ((rt_r_ichk((*(P831)rt_nil_check(F->v_1448)).kind) == (((rt_int)1LL)))) {
(*(P822)rt_nil_check(F->y_1449)).mvalue = rt_r_ichk((*(P831)rt_nil_check(F->v_1448)).i);
(*(P822)rt_nil_check(F->y_1449)).hasmv = 1;
}
(*(P822)rt_nil_check(F->y_1449)).ro_flag = 1;
(*(P822)rt_nil_check(F->y_1449)).access = F->ctext_1451;
f_define_159(F->y_1449, rt_r_ichk((*(P812)rt_nil_check(F->d_381)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_386(P812 d_383, rstr *name_384, int *ro_385) {
  struct f_exported_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_383 = d_383;
F->name_384 = name_384;
F->ro_385 = ro_385;
F->ro_385v = *F->ro_385;
F->p_1455 = NULL;
F->p_1455 = (*(P812)rt_nil_check(F->d_383)).a;
F->ro_385v = 0;
if ((rt_r_ichk((*(P812)rt_nil_check(F->d_383)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1455 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1455)).name))->all), (*F->name_384))) {
F->ro_385v = (rt_r_ichk((*(P812)rt_nil_check(F->p_1455)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1455 = (*(P812)rt_nil_check(F->p_1455)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_385v)) (*F->ro_385) = F->ro_385v;
  RT_FPOP();
  return F->result_;
}

static P822 f_copy_sym_388(P822 y_387) {
  struct f_copy_sym_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_387 = y_387;
F->z_1456 = NULL;
{ R823 *cell1457 = rt_alloc(sizeof(R823));
(*cell1457).name = NULL;
(*cell1457).t = NULL;
(*cell1457).c = NULL;
(*cell1457).access = NULL;
(*cell1457).cname = NULL;
(*cell1457).st = NULL;
(*cell1457).decl = NULL;
(*cell1457).params = NULL;
(*cell1457).result = NULL;
(*cell1457).members = NULL;
(*cell1457).mnext = NULL;
(*cell1457).binds = NULL;
(*cell1457).insts = NULL;
(*cell1457).env = NULL;
(*cell1457).chain = NULL;
(*cell1457).stack = NULL;
(*cell1457).owner = NULL;
(*cell1457).gctx = NULL;
(*cell1457).mv = NULL;
(*cell1457).reqs = NULL;
(*cell1457).home = NULL;
F->z_1456 = cell1457;
}
(*(P822)rt_nil_check(F->z_1456)).kind = rt_r_ichk((*(P822)rt_nil_check(F->y_387)).kind);
(*(P822)rt_nil_check(F->z_1456)).name = (*(P822)rt_nil_check(F->y_387)).name;
(*(P822)rt_nil_check(F->z_1456)).t = (*(P822)rt_nil_check(F->y_387)).t;
(*(P822)rt_nil_check(F->z_1456)).c = (*(P822)rt_nil_check(F->y_387)).c;
(*(P822)rt_nil_check(F->z_1456)).access = (*(P822)rt_nil_check(F->y_387)).access;
(*(P822)rt_nil_check(F->z_1456)).cname = (*(P822)rt_nil_check(F->y_387)).cname;
(*(P822)rt_nil_check(F->z_1456)).ro_flag = rt_r_echk((*(P822)rt_nil_check(F->y_387)).ro_flag);
(*(P822)rt_nil_check(F->z_1456)).mvalue = rt_r_ichk((*(P822)rt_nil_check(F->y_387)).mvalue);
(*(P822)rt_nil_check(F->z_1456)).hasmv = rt_r_echk((*(P822)rt_nil_check(F->y_387)).hasmv);
(*(P822)rt_nil_check(F->z_1456)).st = (*(P822)rt_nil_check(F->y_387)).st;
(*(P822)rt_nil_check(F->z_1456)).decl = (*(P822)rt_nil_check(F->y_387)).decl;
(*(P822)rt_nil_check(F->z_1456)).params = (*(P822)rt_nil_check(F->y_387)).params;
(*(P822)rt_nil_check(F->z_1456)).result = (*(P822)rt_nil_check(F->y_387)).result;
(*(P822)rt_nil_check(F->z_1456)).level = rt_r_ichk((*(P822)rt_nil_check(F->y_387)).level);
(*(P822)rt_nil_check(F->z_1456)).byref = rt_r_echk((*(P822)rt_nil_check(F->y_387)).byref);
(*(P822)rt_nil_check(F->z_1456)).members = (*(P822)rt_nil_check(F->y_387)).members;
(*(P822)rt_nil_check(F->z_1456)).env = (*(P822)rt_nil_check(F->y_387)).env;
F->result_ = F->z_1456;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_390(P812 d_389) {
  struct f_gen_capsule_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_389 = d_389;
F->y_1458 = NULL;
F->y_1458 = f_new_sym_172((((rt_int)8LL)), (*(P812)rt_nil_check(F->d_389)).name);
F->saved_1459 = NULL;
F->saved_1459 = g_suppress_882;
(*(P822)rt_nil_check(F->y_1458)).decl = F->d_389;
if (((*(P812)rt_nil_check(F->d_389)).b == NULL)) {
g_suppress_882 = f_suppressing_438((*(P812)rt_nil_check(F->d_389)).prags);
f_elaborate_capsule_399(F->d_389, F->y_1458, NULL, F->d_389);
g_suppress_882 = F->saved_1459;
}
f_define_159(F->y_1458, rt_r_ichk((*(P812)rt_nil_check(F->d_389)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_394(P812 d_391, P812 args_392, rt_int line_393) {
  struct f_capsule_params_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->args_392 = args_392;
F->line_393 = line_393;
F->p_1460 = NULL;
F->p_1460 = (*(P812)rt_nil_check(F->d_391)).b;
F->a_1461 = NULL;
F->a_1461 = F->args_392;
F->t_1462 = NULL;
F->vt_1463 = NULL;
F->c_1464 = NULL;
while (((F->p_1460 != NULL) && (F->a_1461 != NULL))) {
F->t_1462 = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1460)).a, &F->c_1464);
if ((rt_r_ichk((*(P812)rt_nil_check(F->p_1460)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->p_1460)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->p_1460)).ival) == (((rt_int)4LL))))) {
F->lv_1465 = NULL;
F->lc_1466 = NULL;
F->ro_1467 = RT_R_EUNDEF;
F->y_1468 = NULL;
F->y_1468 = f_new_sym_172((((rt_int)1LL)), (*(P812)rt_nil_check(F->p_1460)).name);
f_lvalue_615(F->a_1461, &F->lv_1465, &F->vt_1463, &F->lc_1466, &F->ro_1467);
f_check_type_223(F->vt_1463, F->t_1462, F->line_393);
if ((rt_r_echk(F->ro_1467) && (rt_r_ichk((*(P812)rt_nil_check(F->p_1460)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1460)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_864)) {
F->f_1469 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1460)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_1462)), rt_str(" *", 2)), F->f_1469), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1469), rt_str(" = &", 4)), (((P805)rt_nil_check(F->lv_1465))->all)), rt_str(";", 1)); b_; }));
(*(P822)rt_nil_check(F->y_1468)).level = rt_r_ichk(g_cur_level_865);
(*(P822)rt_nil_check(F->y_1468)).access = f_mk_3(&F->f_1469);
(*(P822)rt_nil_check(F->y_1468)).byref = 1;
} else {
F->g_1470 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1460)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_1462)), rt_str(" *", 2)), F->g_1470), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1470), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1470, rt_str(" = &", 4)), (((P805)rt_nil_check(F->lv_1465))->all)), rt_str(";", 1)); b_; }));
(*(P822)rt_nil_check(F->y_1468)).level = ((rt_int)0LL);
(*(P822)rt_nil_check(F->y_1468)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1470), rt_str(")", 1)); b_; }));
}
(*(P822)rt_nil_check(F->y_1468)).t = F->t_1462;
(*(P822)rt_nil_check(F->y_1468)).c = F->lc_1466;
(*(P822)rt_nil_check(F->y_1468)).ro_flag = (rt_r_ichk((*(P812)rt_nil_check(F->p_1460)).ival) == (((rt_int)4LL)));
f_define_159(F->y_1468, F->line_393);
} else {
F->y_1471 = NULL;
F->y_1471 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_1460)).name);
F->v_1472 = rt_str_copy(f_gexpr_646(F->a_1461, F->t_1462, &F->vt_1463));
f_check_type_223(F->vt_1463, F->t_1462, F->line_393);
{
F->access_1473 = rt_str_copy(f_storage_447(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1460)).name))->all), F->t_1462));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1473, rt_str(" = ", 3)), f_copy_code_364(F->t_1462, &F->v_1472)), rt_str(";", 1)); b_; }));
f_bind_450(F->y_1471, &F->access_1473);
}
(*(P822)rt_nil_check(F->y_1471)).t = F->t_1462;
(*(P822)rt_nil_check(F->y_1471)).c = F->c_1464;
(*(P822)rt_nil_check(F->y_1471)).ro_flag = 1;
f_define_159(F->y_1471, F->line_393);
}
F->p_1460 = (*(P812)rt_nil_check(F->p_1460)).next;
F->a_1461 = (*(P812)rt_nil_check(F->a_1461)).next;
}
if (((F->p_1460 != NULL) || (F->a_1461 != NULL))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_391)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_399(P812 d_395, P822 y_396, P812 args_397, P812 owner_398) {
  struct f_elaborate_capsule_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_395 = d_395;
F->y_396 = y_396;
F->args_397 = args_397;
F->owner_398 = owner_398;
F->cr_1474 = NULL;
F->ctx_1475 = NULL;
F->saved_gotos_1476 = NULL;
F->m_1477 = NULL;
F->p_1478 = NULL;
F->p_1478 = (*(P812)rt_nil_check(F->d_395)).a;
F->ro_1479 = RT_R_EUNDEF;
{ R840 *cell1480 = rt_alloc(sizeof(R840));
(*cell1480).d = NULL;
(*cell1480).next = NULL;
F->cr_1474 = cell1480;
}
(*(P839)rt_nil_check(F->cr_1474)).d = F->d_395;
(*(P839)rt_nil_check(F->cr_1474)).next = g_caps_867;
g_caps_867 = F->cr_1474;
f_open_scope_168();
if (((*(P812)rt_nil_check(F->d_395)).b != NULL)) {
f_capsule_params_394(F->d_395, F->args_397, rt_r_ichk((*(P812)rt_nil_check(F->owner_398)).line));
}
{ R830 *cell1481 = rt_alloc(sizeof(R830));
(*cell1481).imps = NULL;
(*cell1481).next = NULL;
F->ctx_1475 = cell1481;
}
(*(P829)rt_nil_check(F->ctx_1475)).depth = rt_r_ichk(g_depth_851);
(*(P829)rt_nil_check(F->ctx_1475)).imps = (*(P812)rt_nil_check(F->d_395)).d;
(*(P829)rt_nil_check(F->ctx_1475)).all_imp = (rt_r_ichk((*(P812)rt_nil_check(F->d_395)).flag) >= ((rt_int)2LL));
(*(P829)rt_nil_check(F->ctx_1475)).next = g_fctx_866;
g_fctx_866 = F->ctx_1475;
F->saved_gotos_1476 = g_gotos_886;
g_gotos_886 = NULL;
f_declare_labels_473((*(P812)rt_nil_check(F->d_395)).c);
f_declare_body_380((*(P812)rt_nil_check(F->d_395)).c);
f_capsule_body_480((*(P812)rt_nil_check(F->d_395)).c);
{
F->w_1482 = NULL;
{ R842 *cell1483 = rt_alloc(sizeof(R842));
(*cell1483).d = NULL;
(*cell1483).w = NULL;
(*cell1483).next = NULL;
F->w_1482 = cell1483;
}
(*(P841)rt_nil_check(F->w_1482)).d = F->owner_398;
(*(P841)rt_nil_check(F->w_1482)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_467((*(P812)rt_nil_check(F->d_395)).c); b_; }));
(*(P841)rt_nil_check(F->w_1482)).next = g_cap_waits_868;
g_cap_waits_868 = F->w_1482;
}
g_fctx_866 = (*(P829)rt_nil_check(g_fctx_866)).next;
F->m_1477 = g_scope_stack_852;
while (((F->m_1477 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).depth) == rt_r_ichk(g_depth_851)))) {
if (((((rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->m_1477)).t == NULL)) && ((*(P822)rt_nil_check(F->m_1477)).decl != NULL)) && (rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->m_1477)).decl)).kind) == (((rt_int)43LL))))) {
(*(P822)rt_nil_check(F->m_1477)).t = f_new_type_306(F->m_1477, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->d_395)).line)), &(*(P822)rt_nil_check(F->m_1477)).c);
} else if ((((rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).kind) == (((rt_int)6LL)))) && ((*(P822)rt_nil_check(F->m_1477)).t == NULL))) {
(*(P822)rt_nil_check(F->m_1477)).t = f_resolve_subtype_256((*(P822)rt_nil_check(F->m_1477)).st, &(*(P822)rt_nil_check(F->m_1477)).c);
} else if (((rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(F->m_1477)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_409((*(P822)rt_nil_check(F->m_1477)).t);
}
F->m_1477 = (*(P822)rt_nil_check(F->m_1477)).stack;
}
F->m_1477 = g_scope_stack_852;
while (((F->m_1477 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->m_1477)).depth) == rt_r_ichk(g_depth_851)))) {
if (f_exported_386(F->d_395, &(((P805)rt_nil_check((*(P822)rt_nil_check(F->m_1477)).name))->all), &F->ro_1479)) {
F->z_1484 = NULL;
F->z_1484 = f_copy_sym_388(F->m_1477);
if (rt_r_echk(F->ro_1479)) {
(*(P822)rt_nil_check(F->z_1484)).ro_flag = 1;
}
(*(P822)rt_nil_check(F->z_1484)).mnext = (*(P822)rt_nil_check(F->y_396)).members;
(*(P822)rt_nil_check(F->y_396)).members = F->z_1484;
}
F->m_1477 = (*(P822)rt_nil_check(F->m_1477)).stack;
}
while ((F->p_1478 != NULL)) {
if ((((!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1478)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1478)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1478)).name))->all)) == NULL) || ((*(P822)rt_nil_check(f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1478)).name))->all)))).depth != rt_r_ichk(g_depth_851))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_395)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1478)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_395)).name))->all)); b_; }));
}
F->p_1478 = (*(P812)rt_nil_check(F->p_1478)).next;
}
f_close_scope_169();
g_caps_867 = (*(P839)rt_nil_check(g_caps_867)).next;
g_gotos_886 = F->saved_gotos_1476;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_402(P812 d_400, rstr *op_401) {
  struct f_exports_op_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_400 = d_400;
F->op_401 = op_401;
F->p_1485 = NULL;
if ((F->d_400 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1485 = (*(P812)rt_nil_check(F->d_400)).a;
while ((F->p_1485 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1485)).name))->all), (*F->op_401))) {
F->result_ = 1;
goto ret_;
}
F->p_1485 = (*(P812)rt_nil_check(F->p_1485)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P805 f_renamed_405(P812 d_403, P822 z_404) {
  struct f_renamed_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_403 = d_403;
F->z_404 = z_404;
F->r_1486 = NULL;
F->r_1486 = (*(P812)rt_nil_check(F->d_403)).c;
while ((F->r_1486 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->r_1486)).name))->all), (((P805)rt_nil_check((*(P822)rt_nil_check(F->z_404)).name))->all))) {
F->result_ = (*(P812)rt_nil_check((*(P812)rt_nil_check(F->r_1486)).a)).name;
goto ret_;
}
F->r_1486 = (*(P812)rt_nil_check(F->r_1486)).next;
}
F->result_ = (*(P822)rt_nil_check(F->z_404)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_407(P812 d_406) {
  struct f_gen_expose_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_406 = d_406;
F->y_1487 = NULL;
F->y_1487 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->d_406)).name))->all));
F->m_1488 = NULL;
F->p_1489 = NULL;
F->p_1489 = (*(P812)rt_nil_check(F->d_406)).a;
F->r_1490 = NULL;
F->r_1490 = (*(P812)rt_nil_check(F->d_406)).c;
if (((F->y_1487 == NULL) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1487)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->d_406)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((rt_r_ichk((*(P812)rt_nil_check(F->d_406)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P812)rt_nil_check(F->d_406)).flag) == ((rt_int)3LL)))) {
F->inst_1491 = NULL;
F->inst_1491 = f_new_sym_172((((rt_int)8LL)), (*(P822)rt_nil_check(F->y_1487)).name);
(*(P822)rt_nil_check(F->inst_1491)).decl = (*(P822)rt_nil_check(F->y_1487)).decl;
f_elaborate_capsule_399((*(P822)rt_nil_check(F->y_1487)).decl, F->inst_1491, (*(P812)rt_nil_check(F->d_406)).b, F->d_406);
F->y_1487 = F->inst_1491;
} else if ((((*(P822)rt_nil_check(F->y_1487)).decl != NULL) && ((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1487)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_406)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P812)rt_nil_check(F->d_406)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1490 != NULL)) {
F->found_1492 = RT_R_EUNDEF;
F->found_1492 = 0;
F->m_1488 = (*(P822)rt_nil_check(F->y_1487)).members;
while ((F->m_1488 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->m_1488)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->r_1490)).name))->all))) {
F->found_1492 = 1;
}
F->m_1488 = (*(P822)rt_nil_check(F->m_1488)).mnext;
}
if ((!rt_r_echk(F->found_1492))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->r_1490)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_406)).name))->all)); b_; }));
}
F->r_1490 = (*(P812)rt_nil_check(F->r_1490)).next;
}
if ((rt_r_ichk((*(P812)rt_nil_check(F->d_406)).ival) == ((rt_int)1LL))) {
F->m_1488 = (*(P822)rt_nil_check(F->y_1487)).members;
while ((F->m_1488 != NULL)) {
F->z_1493 = NULL;
F->z_1493 = f_copy_sym_388(F->m_1488);
(*(P822)rt_nil_check(F->z_1493)).name = f_renamed_405(F->d_406, F->m_1488);
f_define_159(F->z_1493, rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line));
F->m_1488 = (*(P822)rt_nil_check(F->m_1488)).mnext;
}
goto ret_;
}
while ((F->p_1489 != NULL)) {
F->found_1494 = RT_R_EUNDEF;
F->found_1494 = 0;
F->m_1488 = (*(P822)rt_nil_check(F->y_1487)).members;
while ((F->m_1488 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->m_1488)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1489)).name))->all))) {
F->z_1495 = NULL;
F->z_1495 = f_copy_sym_388(F->m_1488);
if ((rt_r_ichk((*(P812)rt_nil_check(F->p_1489)).ival) == ((rt_int)1LL))) {
(*(P822)rt_nil_check(F->z_1495)).ro_flag = 1;
}
(*(P822)rt_nil_check(F->z_1495)).name = f_renamed_405(F->d_406, F->m_1488);
f_define_159(F->z_1495, rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line));
F->found_1494 = 1;
}
F->m_1488 = (*(P822)rt_nil_check(F->m_1488)).mnext;
}
if ((!rt_r_echk(F->found_1494))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1489)).name))->all), rt_str(" is not exported by ", 20)), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_406)).name))->all)); b_; }));
}
F->p_1489 = (*(P812)rt_nil_check(F->p_1489)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_409(P818 t_408) {
  struct f_finish_ptr_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_408 = t_408;
F->d_1496 = NULL;
F->d_1496 = (*(P818)rt_nil_check(F->t_408)).decl;
F->p_1497 = NULL;
F->c_1498 = NULL;
F->dummy_1499 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1499, rt_str(" ", 1));
if (((*(P818)rt_nil_check(F->t_408)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1501 = ((rt_int)1LL), hi1502 = ((rt_int)2LL);
for (rt_int it1503 = lo1501; it1503 <= hi1502; it1503++) {
F->pass_1500 = it1503;
if ((F->pass_1500 == ((rt_int)1LL))) {
F->p_1497 = (*(P812)rt_nil_check(F->d_1496)).d;
} else {
F->p_1497 = (*(P812)rt_nil_check(F->d_1496)).b;
}
while ((F->p_1497 != NULL)) {
F->y_1504 = NULL;
F->y_1504 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_1497)).name);
F->pc_1505 = NULL;
(*(P822)rt_nil_check(F->y_1504)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1497)).a, &F->pc_1505);
(*(P822)rt_nil_check(F->y_1504)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1504, rt_r_ichk((*(P812)rt_nil_check(F->d_1496)).line));
F->p_1497 = (*(P812)rt_nil_check(F->p_1497)).next;
}
}
}
(*(P818)rt_nil_check(F->t_408)).target = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_1496)).a, &F->c_1498);
f_close_scope_169();
(*rt_str_at(&F->dummy_1499, ((rt_int)1LL))) = rt_str_get(f_ctype_225(F->t_408), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1499, ((rt_int)1LL))) = rt_str_get(f_ctype_225((*(P818)rt_nil_check(F->t_408)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P812 f_ptr_args_411(P814 c_410) {
  struct f_ptr_args_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_410 = c_410;
if ((F->c_410 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P814)rt_nil_check(F->c_410)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_416(P812 formals_412, P812 actuals_413, rstr *cell_414, rt_int line_415) {
  struct f_bind_ptr_params_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_412 = formals_412;
F->actuals_413 = actuals_413;
F->cell_414 = cell_414;
F->line_415 = line_415;
F->p_1506 = NULL;
F->p_1506 = F->formals_412;
F->a_1507 = NULL;
F->a_1507 = F->actuals_413;
F->vt_1508 = NULL;
if ((f_list_len_67(F->formals_412) != f_list_len_67(F->actuals_413))) {
f_fail_23(F->line_415, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_412))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1506 != NULL)) {
F->pc_1509 = NULL;
F->y_1510 = NULL;
F->y_1510 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_1506)).name);
(*(P822)rt_nil_check(F->y_1510)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1506)).a, &F->pc_1509);
{
F->v_1511 = rt_str_copy(f_gexpr_646(F->a_1507, (*(P822)rt_nil_check(F->y_1510)).t, &F->vt_1508));
F->pv_1512 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_223(F->vt_1508, (*(P822)rt_nil_check(F->y_1510)).t, F->line_415);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P822)rt_nil_check(F->y_1510)).t), rt_str(" ", 1)), F->pv_1512), rt_str(" = ", 3)), f_checked_204((*(P822)rt_nil_check(F->y_1510)).t, F->pc_1509, &F->v_1511)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_414), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_414), rt_str("->p_", 4)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1506)).name))->all))), rt_str(" = ", 3)), F->pv_1512), rt_str(";", 1)); b_; }));
}
(*(P822)rt_nil_check(F->y_1510)).access = f_mk_3(&F->pv_1512);
}
f_define_159(F->y_1510, F->line_415);
F->p_1506 = (*(P812)rt_nil_check(F->p_1506)).next;
F->a_1507 = (*(P812)rt_nil_check(F->a_1507)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_421(P812 s_417, rstr *lv_418, P818 t_419, P814 c_420) {
  struct f_alloc_cell_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_417 = s_417;
F->lv_418 = lv_418;
F->t_419 = t_419;
F->c_420 = c_420;
F->d_1513 = NULL;
F->d_1513 = (*(P818)rt_nil_check(F->t_419)).decl;
F->tc_1514 = NULL;
F->vt_1515 = NULL;
F->pt_1516 = rt_str_copy(f_ctype_225(F->t_419));
F->cell_1517 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315((*(P818)rt_nil_check(F->t_419)).target)) {
F->fn_1518 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_873 = 1;
g_uses_findyn_875 = 1;
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1518), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1518), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P805)rt_nil_check((*(P822)rt_nil_check(g_func_sym_876)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1516), rt_str(")cell_)->all)", 13)); b_; }), (*(P818)rt_nil_check(F->t_419)).target)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1516), rt_str(" ", 1)), F->cell_1517), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1517), rt_str(", ", 2)), F->fn_1518), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1516), rt_str(" ", 1)), F->cell_1517), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1517), rt_str(", ", 2)), F->fn_1518), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1516), rt_str(" ", 1)), F->cell_1517), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1517), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_416((*(P812)rt_nil_check(F->d_1513)).d, f_ptr_args_411(F->c_420), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P812)rt_nil_check(F->s_417)).line));
f_bind_ptr_params_416((*(P812)rt_nil_check(F->d_1513)).b, (*(P812)rt_nil_check(F->s_417)).b, &F->cell_1517, rt_r_ichk((*(P812)rt_nil_check(F->s_417)).line));
F->vt_1515 = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_1513)).a, &F->tc_1514);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1517, rt_str("->all", 5)); b_; }), (*(P818)rt_nil_check(F->t_419)).target, F->tc_1514);
f_close_scope_169();
if (((*(P812)rt_nil_check(F->s_417)).c != NULL)) {
F->v_1519 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->s_417)).c, (*(P818)rt_nil_check(F->t_419)).target, F->tc_1514, &F->vt_1515));
f_check_type_223(F->vt_1515, (*(P818)rt_nil_check(F->t_419)).target, rt_r_ichk((*(P812)rt_nil_check(F->s_417)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1517, rt_str("->all", 5)); b_; }), (*(P818)rt_nil_check(F->t_419)).target, &F->v_1519, F->tc_1514); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_418), rt_str(" = ", 3)), F->cell_1517), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P814 f_freeze_args_425(P814 c_422, P818 t_423, rt_int line_424) {
  struct f_freeze_args_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_422 = c_422;
F->t_423 = t_423;
F->line_424 = line_424;
F->r_1520 = NULL;
F->r_1520 = f_copy_cons_197(F->c_422);
F->p_1521 = NULL;
F->p_1521 = (*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_423)).decl)).d;
F->a_1522 = NULL;
F->a_1522 = (*(P814)rt_nil_check(F->c_422)).args;
F->head_1523 = NULL;
F->tail_1524 = NULL;
F->saved_1525 = NULL;
F->saved_1525 = g_st_field_870;
if ((f_list_len_67(F->p_1521) != f_list_len_67(F->a_1522))) {
f_fail_23(F->line_424, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P818)rt_nil_check(F->t_423)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1521))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1522 != NULL)) {
F->pc_1526 = NULL;
F->vt_1527 = NULL;
F->pt_1528 = NULL;
F->pt_1528 = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1521)).a, &F->pc_1526);
F->nm_1529 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1530 = NULL;
F->y_1530 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1529));
F->n_1531 = NULL;
F->n_1531 = f_nn_61((((rt_int)7LL)), F->line_424);
F->v_1532 = rt_str_copy(f_gexpr_646(F->a_1522, F->pt_1528, &F->vt_1527));
F->access_1533 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225(F->pt_1528); b_; })));
f_check_type_223(F->vt_1527, F->pt_1528, F->line_424);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1533, rt_str(" = ", 3)), f_checked_204(F->pt_1528, F->pc_1526, &F->v_1532)), rt_str(";", 1)); b_; }));
(*(P822)rt_nil_check(F->y_1530)).t = F->pt_1528;
(*(P822)rt_nil_check(F->y_1530)).ro_flag = 1;
f_bind_450(F->y_1530, &F->access_1533);
f_define_159(F->y_1530, F->line_424);
(*(P812)rt_nil_check(F->n_1531)).name = f_mk_3(&F->nm_1529);
f_append_65(&F->head_1523, &F->tail_1524, F->n_1531);
F->a_1522 = (*(P812)rt_nil_check(F->a_1522)).next;
F->p_1521 = (*(P812)rt_nil_check(F->p_1521)).next;
}
(*(P814)rt_nil_check(F->r_1520)).args = F->head_1523;
g_st_field_870 = F->saved_1525;
F->result_ = F->r_1520;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_429(P818 t_426, P814 c_427, P812 src_428) {
  struct f_ptr_subtype_check_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_426 = t_426;
F->c_427 = c_427;
F->src_428 = src_428;
F->lv_1534 = NULL;
F->st_1535 = NULL;
F->sc_1536 = NULL;
F->ro_1537 = RT_R_EUNDEF;
F->cond_1538 = NULL;
F->cond_1538 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1539 = NULL;
F->b_1540 = NULL;
F->at_1541 = NULL;
F->bt_1542 = NULL;
if ((((((rt_r_ichk((*(P818)rt_nil_check(F->t_426)).kind) != (((rt_int)8LL))) || (F->c_427 == NULL)) || ((*(P814)rt_nil_check(F->c_427)).args == NULL)) || (F->src_428 == NULL)) || (!f_is_lvalue_609(F->src_428)))) {
goto ret_;
}
f_lvalue_615(F->src_428, &F->lv_1534, &F->st_1535, &F->sc_1536, &F->ro_1537);
if (((F->sc_1536 == NULL) || ((*(P814)rt_nil_check(F->sc_1536)).args == NULL))) {
goto ret_;
}
F->a_1539 = (*(P814)rt_nil_check(F->c_427)).args;
F->b_1540 = (*(P814)rt_nil_check(F->sc_1536)).args;
while (((F->a_1539 != NULL) && (F->b_1540 != NULL))) {
F->x_1543 = rt_str_copy(f_gexpr_646(F->a_1539, NULL, &F->at_1541));
F->y_1544 = rt_str_copy(f_gexpr_646(F->b_1540, F->at_1541, &F->bt_1542));
F->cond_1538 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->cond_1538))->all), rt_str(" || !", 5)), f_eq_code_368(F->at_1541, &F->x_1543, &F->y_1544)); b_; }));
F->a_1539 = (*(P812)rt_nil_check(F->a_1539)).next;
F->b_1540 = (*(P812)rt_nil_check(F->b_1540)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P805)rt_nil_check(F->cond_1538))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_431(P812 d_430) {
  struct f_declare_subprogram_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_430 = d_430;
f_define_159(f_build_subprogram_433(F->d_430), rt_r_ichk((*(P812)rt_nil_check(F->d_430)).line));
ret_:
  RT_FPOP();
  return;
}

static P822 f_build_subprogram_433(P812 d_432) {
  struct f_build_subprogram_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_432 = d_432;
F->y_1545 = NULL;
F->p_1546 = NULL;
F->p_1546 = (*(P812)rt_nil_check(F->d_432)).a;
F->tail_1547 = NULL;
if ((rt_r_ichk((*(P812)rt_nil_check(F->d_432)).kind) == (((rt_int)46LL)))) {
F->y_1545 = f_new_sym_172((((rt_int)3LL)), (*(P812)rt_nil_check(F->d_432)).name);
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->d_432)).kind) == (((rt_int)50LL)))) {
F->y_1545 = f_new_sym_172((((rt_int)9LL)), (*(P812)rt_nil_check(F->d_432)).name);
} else {
F->y_1545 = f_new_sym_172((((rt_int)4LL)), (*(P812)rt_nil_check(F->d_432)).name);
}
while ((F->p_1546 != NULL)) {
F->pm_1548 = NULL;
{ R825 *cell1549 = rt_alloc(sizeof(R825));
(*cell1549).name = NULL;
(*cell1549).t = NULL;
(*cell1549).c = NULL;
(*cell1549).cfield = NULL;
(*cell1549).next = NULL;
F->pm_1548 = cell1549;
}
(*(P824)rt_nil_check(F->pm_1548)).name = (*(P812)rt_nil_check(F->p_1546)).name;
(*(P824)rt_nil_check(F->pm_1548)).mode = rt_r_ichk((*(P812)rt_nil_check(F->p_1546)).ival);
(*(P824)rt_nil_check(F->pm_1548)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1546)).a, &(*(P824)rt_nil_check(F->pm_1548)).c);
(*(P824)rt_nil_check(F->pm_1548)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1546)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1547 == NULL)) {
(*(P822)rt_nil_check(F->y_1545)).params = F->pm_1548;
} else {
(*(P824)rt_nil_check(F->tail_1547)).next = F->pm_1548;
}
F->tail_1547 = F->pm_1548;
F->p_1546 = (*(P812)rt_nil_check(F->p_1546)).next;
}
(*(P822)rt_nil_check(F->y_1545)).result = g_ty_void_897;
if (((*(P812)rt_nil_check(F->d_432)).b != NULL)) {
F->rc_1550 = NULL;
F->pm_1551 = NULL;
F->pm_1551 = (*(P822)rt_nil_check(F->y_1545)).params;
F->saved_1552 = NULL;
F->saved_1552 = g_code_862;
g_code_862 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1551 != NULL)) {
F->z_1553 = NULL;
F->z_1553 = f_new_sym_172((((rt_int)2LL)), (*(P824)rt_nil_check(F->pm_1551)).name);
(*(P822)rt_nil_check(F->z_1553)).t = (*(P824)rt_nil_check(F->pm_1551)).t;
(*(P822)rt_nil_check(F->z_1553)).c = (*(P824)rt_nil_check(F->pm_1551)).c;
(*(P822)rt_nil_check(F->z_1553)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1553, rt_r_ichk((*(P812)rt_nil_check(F->d_432)).line));
F->pm_1551 = (*(P824)rt_nil_check(F->pm_1551)).next;
}
(*(P822)rt_nil_check(F->y_1545)).result = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_432)).b, &F->rc_1550);
f_close_scope_169();
g_code_862 = F->saved_1552;
}
(*(P822)rt_nil_check(F->y_1545)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_601(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->d_432)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P822)rt_nil_check(F->y_1545)).decl = F->d_432;
(*(P822)rt_nil_check(F->y_1545)).level = rt_r_ichk(g_cur_level_865);
if ((rt_r_ichk((*(P812)rt_nil_check(F->d_432)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1545)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1545;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_436(P805 pr_434, rstr *p_435) {
  struct f_has_pragmat_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_434 = pr_434;
F->p_435 = p_435;
if ((F->pr_434 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1555 = ((rt_int)1LL), hi1556 = rt_sub(((rt_int)(((((P805)rt_nil_check(F->pr_434))->all)).len)), ((rt_int)(((*F->p_435)).len)));
for (rt_int it1557 = lo1555; it1557 <= hi1556; it1557++) {
F->i_1554 = it1557;
if (((rt_str_eq(rt_str_slice((((P805)rt_nil_check(F->pr_434))->all), F->i_1554, rt_sub(rt_add(F->i_1554, ((rt_int)(((*F->p_435)).len))), ((rt_int)1LL))), (*F->p_435)) && (rt_r_echk(rt_str_get((((P805)rt_nil_check(F->pr_434))->all), rt_add(F->i_1554, ((rt_int)(((*F->p_435)).len))))) == 59)) && ((F->i_1554 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P805)rt_nil_check(F->pr_434))->all), rt_sub(F->i_1554, ((rt_int)1LL)))) == 59)))) {
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

static P805 f_suppressing_438(P805 pr_437) {
  struct f_suppressing_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_437 = pr_437;
F->r_1558 = NULL;
F->r_1558 = g_suppress_882;
F->i_1559 = RT_R_IUNDEF;
F->i_1559 = ((rt_int)1LL);
if ((F->pr_437 == NULL)) {
F->result_ = F->r_1558;
goto ret_;
}
if ((F->r_1558 == NULL)) {
F->r_1558 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1559), ((rt_int)9LL)) <= ((rt_int)(((((P805)rt_nil_check(F->pr_437))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P805)rt_nil_check(F->pr_437))->all), rt_r_ichk(F->i_1559), rt_add(rt_r_ichk(F->i_1559), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1560 = RT_R_IUNDEF;
F->j_1560 = rt_add(rt_r_ichk(F->i_1559), ((rt_int)9LL));
F->k_1561 = RT_R_IUNDEF;
F->k_1561 = rt_r_ichk(F->j_1560);
while ((rt_r_echk(rt_str_get((((P805)rt_nil_check(F->pr_437))->all), rt_r_ichk(F->k_1561))) != 41)) {
if ((rt_r_echk(rt_str_get((((P805)rt_nil_check(F->pr_437))->all), rt_r_ichk(F->k_1561))) == 44)) {
F->r_1558 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1558))->all), rt_str_slice((((P805)rt_nil_check(F->pr_437))->all), rt_r_ichk(F->j_1560), rt_sub(rt_r_ichk(F->k_1561), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1560 = rt_add(rt_r_ichk(F->k_1561), ((rt_int)1LL));
}
F->k_1561 = rt_add(rt_r_ichk(F->k_1561), ((rt_int)1LL));
}
F->r_1558 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1558))->all), rt_str_slice((((P805)rt_nil_check(F->pr_437))->all), rt_r_ichk(F->j_1560), rt_sub(rt_r_ichk(F->k_1561), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1559 = rt_r_ichk(F->k_1561);
}
F->i_1559 = rt_add(rt_r_ichk(F->i_1559), ((rt_int)1LL));
}
F->result_ = F->r_1558;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_440(rstr *x_439) {
  struct f_suppressed_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_439 = x_439;
F->w_1562 = rt_str_new(rt_add(((rt_int)(((*F->x_439)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1562, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_439)), rt_str(" ", 1)));
if ((g_suppress_882 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1564 = ((rt_int)1LL), hi1565 = rt_add(rt_sub(((rt_int)(((((P805)rt_nil_check(g_suppress_882))->all)).len)), ((rt_int)((F->w_1562).len))), ((rt_int)1LL));
for (rt_int it1566 = lo1564; it1566 <= hi1565; it1566++) {
F->i_1563 = it1566;
if (rt_str_eq(rt_str_slice((((P805)rt_nil_check(g_suppress_882))->all), F->i_1563, rt_sub(rt_add(F->i_1563, ((rt_int)((F->w_1562).len))), ((rt_int)1LL))), F->w_1562)) {
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

static void f_element_442(P812 e_441) {
  struct f_element_442fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_441 = e_441;
F->saved_1567 = NULL;
F->saved_1567 = g_suppress_882;
g_suppress_882 = f_suppressing_438((*(P812)rt_nil_check(F->e_441)).prags);
f_element1_444(F->e_441);
g_suppress_882 = F->saved_1567;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_444(P812 e_443) {
  struct f_element1_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_443 = e_443;
F->k_1568 = RT_R_IUNDEF;
F->k_1568 = rt_r_ichk((*(P812)rt_nil_check(F->e_443)).kind);
if (((rt_r_ichk(F->k_1568) == (((rt_int)48LL))) && ((rt_r_ichk((*(P812)rt_nil_check(F->e_443)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P812)rt_nil_check(F->e_443)).flag) == ((rt_int)3LL))))) {
f_gen_expose_407(F->e_443);
} else if ((((rt_r_ichk(F->k_1568) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1568) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1568) == (((rt_int)50LL))))) {
f_subprogram_460(F->e_443);
} else if ((rt_r_ichk(F->k_1568) == (((rt_int)51LL)))) {
F->g_1569 = NULL;
F->g_1569 = f_lookup_decl_156(F->e_443);
if ((F->g_1569 != NULL)) {
{ P826 cell1570 = rt_alloc(sizeof *cell1570);
rt_int pv1571 = (((rt_int)4093LL));
cell1570->p_n = pv1571;
cell1570->all.lo = ((rt_int)0LL); cell1570->all.hi = pv1571;
cell1570->all.lo2 = cell1570->all.hi2 = 1;
cell1570->all.p = rt_alloc(sizeof(P822) * (size_t)(RT_CNT(cell1570->all)) + 1);
for (rt_int i1572 = 0; i1572 < (RT_CNT(cell1570->all)); i1572++) {
cell1570->all.p[i1572] = NULL;
}
(*(P822)rt_nil_check(F->g_1569)).env = cell1570;
}
{ rt_int lo1574 = ((rt_int)0LL), hi1575 = (((rt_int)4093LL));
for (rt_int it1576 = lo1574; it1576 <= hi1575; it1576++) {
F->i_1573 = it1576;
(((P826)rt_nil_check((*(P822)rt_nil_check(F->g_1569)).env))->all).p[(rt_index(F->i_1573, (((P826)rt_nil_check((*(P822)rt_nil_check(F->g_1569)).env))->all).lo, (((P826)rt_nil_check((*(P822)rt_nil_check(F->g_1569)).env))->all).hi) - (((P826)rt_nil_check((*(P822)rt_nil_check(F->g_1569)).env))->all).lo)] = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(F->i_1573, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1568) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1568) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1568) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1568) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1568) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1568) == (((rt_int)44LL)))) {
f_finish_ptr_409((*(P822)rt_nil_check(f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_443)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1568) == (((rt_int)40LL)))) {
f_var_decl_452(F->e_443);
} else if (((rt_r_ichk(F->k_1568) == (((rt_int)41LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_443)).flag) == ((rt_int)0LL)))) {
f_const_decl_458(F->e_443);
} else if ((rt_r_ichk(F->k_1568) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1568) == (((rt_int)33LL)))) {
F->t_1577 = NULL;
F->c_1578 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_443)).a, g_ty_bool_893, &F->t_1577));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1578), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_491(F->e_443);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_447(rstr *name_445, P818 t_446) {
  struct f_storage_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_445 = name_445;
F->t_446 = t_446;
if ((!rt_r_echk(g_in_func_864))) {
F->g_1579 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_445))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_446)), rt_str(" ", 1)), F->g_1579), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1579), rt_str(");", 2)); b_; }));
g_st_field_870 = f_mk_3(&F->g_1579);
F->result_ = F->g_1579;
goto ret_;
}
{
F->f_1580 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_445)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_446)), rt_str(" ", 1)), F->f_1580), rt_str(";", 1)); b_; }));
g_st_field_870 = f_mk_3(&F->f_1580);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1580);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_450(P822 y_448, rstr *access_449) {
  struct f_bind_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_448 = y_448;
F->access_449 = access_449;
if (rt_r_echk(g_in_func_864)) {
(*(P822)rt_nil_check(F->y_448)).level = rt_r_ichk(g_cur_level_865);
(*(P822)rt_nil_check(F->y_448)).access = g_st_field_870;
} else {
(*(P822)rt_nil_check(F->y_448)).level = ((rt_int)0LL);
(*(P822)rt_nil_check(F->y_448)).access = f_mk_3(&(*F->access_449));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_452(P812 d_451) {
  struct f_var_decl_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_451 = d_451;
F->c_1581 = NULL;
F->t_1582 = NULL;
F->t_1582 = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_451)).a, &F->c_1581);
F->y_1583 = NULL;
F->y_1583 = f_new_sym_172((((rt_int)1LL)), (*(P812)rt_nil_check(F->d_451)).name);
F->access_1584 = rt_str_copy(f_storage_447(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->d_451)).name))->all), F->t_1582));
F->c_1581 = f_freeze_200(F->c_1581, F->t_1582);
if ((((rt_r_ichk((*(P818)rt_nil_check(F->t_1582)).kind) == (((rt_int)8LL))) && (F->c_1581 != NULL)) && ((*(P814)rt_nil_check(F->c_1581)).args != NULL))) {
F->c_1581 = f_freeze_args_425(F->c_1581, F->t_1582, rt_r_ichk((*(P812)rt_nil_check(F->d_451)).line));
}
g_mark_uninit_884 = 1;
f_init_storage_310(&F->access_1584, F->t_1582, F->c_1581);
g_mark_uninit_884 = 0;
if ((rt_r_ichk((*(P812)rt_nil_check(F->d_451)).ival) == ((rt_int)1LL))) {
F->it_1585 = NULL;
F->n_1586 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->d_451)).c, g_ty_int_892, &F->it_1585));
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1582)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_451)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_212((*(P818)rt_nil_check(F->t_1582)).elem, g_ty_ascii_895)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1584), rt_str(", ", 2)), F->n_1586), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1584), rt_str(", ", 2)), F->n_1586), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->d_451)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->d_451)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P812)rt_nil_check(F->d_451)).b != NULL)) {
F->vt_1587 = NULL;
F->v_1588 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->d_451)).b, F->t_1582, F->c_1581, &F->vt_1587));
f_check_type_223(F->vt_1587, F->t_1582, rt_r_ichk((*(P812)rt_nil_check(F->d_451)).line));
f_ptr_subtype_check_429(F->t_1582, F->c_1581, (*(P812)rt_nil_check(F->d_451)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&F->access_1584, F->t_1582, &F->v_1588, F->c_1581); b_; }));
}
(*(P822)rt_nil_check(F->y_1583)).t = F->t_1582;
(*(P822)rt_nil_check(F->y_1583)).c = F->c_1581;
f_bind_450(F->y_1583, &F->access_1584);
f_define_159(F->y_1583, rt_r_ichk((*(P812)rt_nil_check(F->d_451)).line));
if (f_needs_fin_315(F->t_1582)) {
f_open_fin_454(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1584, F->t_1582); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_454(rstr *fc_453) {
  struct f_open_fin_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_453 = fc_453;
F->f_1589 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1590 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1589), rt_str("; if (RT_TRY(", 13)), F->f_1589), rt_str(")) {", 4)); b_; }));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1589), rt_str("); ", 3)), (*F->fc_453)); b_; }));
{ R817 *cell1591 = rt_alloc(sizeof(R817));
(*cell1591).s = NULL;
(*cell1591).next = NULL;
F->l_1590 = cell1591;
}
(*(P816)rt_nil_check(F->l_1590)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1589), rt_str("); ", 3)), (*F->fc_453)), rt_str(" } else { RT_POP(", 17)), F->f_1589), rt_str("); ", 3)), (*F->fc_453)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P816)rt_nil_check(F->l_1590)).next = g_fins_874;
g_fins_874 = F->l_1590;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_456(P816 saved_455) {
  struct f_close_fins_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_455 = saved_455;
while (((g_fins_874 != F->saved_455) && (g_fins_874 != NULL))) {
f_emit_29(&(((P805)rt_nil_check((*(P816)rt_nil_check(g_fins_874)).s))->all));
f_pop_cleanup_489();
g_fins_874 = (*(P816)rt_nil_check(g_fins_874)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_458(P812 d_457) {
  struct f_const_decl_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_457 = d_457;
F->c_1592 = NULL;
F->c_1592 = f_new_cons_175();
F->t_1593 = NULL;
F->vt_1594 = NULL;
F->y_1595 = NULL;
F->y_1595 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->d_457)).name);
F->ok_1596 = RT_R_EUNDEF;
if (((*(P812)rt_nil_check(F->d_457)).a != NULL)) {
F->t_1593 = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_457)).a, &F->c_1592);
}
{
F->v_1597 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->d_457)).b, F->t_1593, F->c_1592, &F->vt_1594));
if ((F->t_1593 != NULL)) {
f_check_type_223(F->vt_1594, F->t_1593, rt_r_ichk((*(P812)rt_nil_check(F->d_457)).line));
} else {
F->t_1593 = F->vt_1594;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1593)).kind) == (((rt_int)1LL)))) {
(*(P822)rt_nil_check(F->y_1595)).mvalue = f_manifest_333((*(P812)rt_nil_check(F->d_457)).b, &F->ok_1596);
(*(P822)rt_nil_check(F->y_1595)).hasmv = rt_r_echk(F->ok_1596);
}
{
F->access_1598 = rt_str_copy(f_storage_447(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->d_457)).name))->all), F->t_1593));
if (((*(P818)rt_nil_check(F->t_1593)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P818)rt_nil_check(F->t_1593)).initp, &F->access_1598); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1598, rt_str(" = ", 3)), f_checked_204(F->t_1593, F->c_1592, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_1593, &F->v_1597); b_; }))), rt_str(";", 1)); b_; }));
f_bind_450(F->y_1595, &F->access_1598);
if (f_needs_fin_315(F->t_1593)) {
f_open_fin_454(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1598, F->t_1593); b_; }));
}
}
}
(*(P822)rt_nil_check(F->y_1595)).t = F->t_1593;
(*(P822)rt_nil_check(F->y_1595)).c = F->c_1592;
(*(P822)rt_nil_check(F->y_1595)).ro_flag = 1;
f_define_159(F->y_1595, rt_r_ichk((*(P812)rt_nil_check(F->d_457)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_460(P812 d_459) {
  struct f_subprogram_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
f_gen_subprogram_463(F->d_459, f_lookup_decl_156(F->d_459));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_463(P812 d_461, P822 y_462) {
  struct f_gen_subprogram_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_461 = d_461;
F->y_462 = y_462;
F->saved_code_1599 = NULL;
F->saved_code_1599 = g_code_862;
F->saved_fields_1600 = NULL;
F->saved_fields_1600 = g_fields_buf_863;
F->saved_in_1601 = RT_R_EUNDEF;
F->saved_in_1601 = rt_r_echk(g_in_func_864);
F->saved_sym_1602 = NULL;
F->saved_sym_1602 = g_func_sym_876;
F->saved_exits_1603 = NULL;
F->saved_exits_1603 = g_exits_885;
F->saved_gotos_1604 = NULL;
F->saved_gotos_1604 = g_gotos_886;
F->saved_frames_1605 = RT_R_IUNDEF;
F->saved_frames_1605 = rt_r_ichk(g_frames_887);
F->args_1606 = NULL;
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1607 = NULL;
F->pm_1607 = (*(P822)rt_nil_check(F->y_462)).params;
F->saved_handlers_1608 = NULL;
F->saved_handlers_1608 = g_handlers_888;
F->saved_cleanups_1609 = NULL;
F->saved_cleanups_1609 = g_cleanups_889;
F->ctx_1610 = NULL;
F->head_1611 = NULL;
F->frame_1612 = NULL;
F->frame_1612 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_462)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1613 = NULL;
F->copy_back_1614 = NULL;
F->copy_back_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1615 = NULL;
F->pfin_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1616 = NULL;
F->saved_fins_1616 = g_fins_874;
F->saved_rc_1617 = NULL;
F->saved_rc_1617 = g_func_rc_877;
F->saved_ret_1618 = NULL;
F->saved_ret_1618 = g_cap_ret_878;
F->saved_rflag_1619 = NULL;
F->saved_rflag_1619 = g_cap_rflag_879;
F->pn_1620 = NULL;
F->pn_1620 = (*(P812)rt_nil_check(F->d_461)).a;
F->nonrec_end_1621 = NULL;
F->has_pfin_1622 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_864)) {
F->parent_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(g_func_sym_876)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_874 = NULL;
g_func_rc_877 = NULL;
g_cap_ret_878 = NULL;
g_cap_rflag_879 = NULL;
g_code_862 = f_new_buffer_24();
g_fields_buf_863 = f_new_buffer_24();
g_in_func_864 = 1;
g_func_sym_876 = F->y_462;
g_exits_885 = NULL;
g_gotos_886 = NULL;
g_frames_887 = ((rt_int)0LL);
g_handlers_888 = NULL;
g_cleanups_889 = NULL;
g_cur_level_865 = rt_add(rt_r_ichk(g_cur_level_865), ((rt_int)1LL));
f_open_scope_168();
{ R830 *cell1623 = rt_alloc(sizeof(R830));
(*cell1623).imps = NULL;
(*cell1623).next = NULL;
F->ctx_1610 = cell1623;
}
(*(P829)rt_nil_check(F->ctx_1610)).depth = rt_r_ichk(g_depth_851);
(*(P829)rt_nil_check(F->ctx_1610)).imps = (*(P812)rt_nil_check(F->d_461)).d;
(*(P829)rt_nil_check(F->ctx_1610)).all_imp = (rt_r_ichk((*(P812)rt_nil_check(F->d_461)).flag) >= ((rt_int)2LL));
(*(P829)rt_nil_check(F->ctx_1610)).next = g_fctx_866;
g_fctx_866 = F->ctx_1610;
if ((F->parent_1613 != NULL)) {
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P805)rt_nil_check(F->parent_1613))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) != (((rt_int)9LL)))) {
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check(F->parent_1613))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1607 != NULL)) {
F->ct_1624 = rt_str_copy(f_ctype_225((*(P824)rt_nil_check(F->pm_1607)).t));
F->f_1625 = rt_str_copy((((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_1607)).cfield))->all));
F->p_1626 = NULL;
F->pc_1627 = NULL;
F->pc_1627 = (*(P824)rt_nil_check(F->pm_1607)).c;
F->ac_1628 = NULL;
if ((((rt_int)(((((P805)rt_nil_check(F->args_1606))->all)).len)) > ((rt_int)0LL))) {
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->args_1606))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P824)rt_nil_check(F->pm_1607)).t)) {
F->fc_1629 = NULL;
F->ft_1630 = NULL;
F->ft_1630 = f_resolve_subtype_256((*(P812)rt_nil_check(F->pn_1620)).a, &F->fc_1629);
F->pc_1627 = f_freeze_200(F->fc_1629, (*(P824)rt_nil_check(F->pm_1607)).t);
}
if ((rt_r_ichk((*(P824)rt_nil_check(F->pm_1607)).mode) == (((rt_int)1LL)))) {
F->p_1626 = f_new_sym_172((((rt_int)2LL)), (*(P824)rt_nil_check(F->pm_1607)).name);
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1624), rt_str(" ", 1)), F->f_1625), rt_str(";", 1)); b_; }));
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_1606))->all), F->ct_1624), rt_str(" ", 1)), F->f_1625); b_; }));
(*(P822)rt_nil_check(F->p_1626)).access = f_mk_3(&F->f_1625);
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) != (((rt_int)9LL)))) {
if (((*(P818)rt_nil_check((*(P824)rt_nil_check(F->pm_1607)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P818)rt_nil_check((*(P824)rt_nil_check(F->pm_1607)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1625); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str(" = ", 3)), f_checked_204((*(P824)rt_nil_check(F->pm_1607)).t, F->pc_1627, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P824)rt_nil_check(F->pm_1607)).t, &F->f_1625); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_315((*(P824)rt_nil_check(F->pm_1607)).t)) {
F->pfin_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->pfin_1615))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1625); b_; }), (*(P824)rt_nil_check(F->pm_1607)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1626 = f_new_sym_172((((rt_int)1LL)), (*(P824)rt_nil_check(F->pm_1607)).name);
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1624), rt_str(" *", 2)), F->f_1625), rt_str(";", 1)); b_; }));
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_1606))->all), F->ct_1624), rt_str(" *", 2)), F->f_1625); b_; }));
(*(P822)rt_nil_check(F->p_1626)).access = f_mk_3(&F->f_1625);
(*(P822)rt_nil_check(F->p_1626)).byref = 1;
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str(" = ", 3)), F->f_1625), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P824)rt_nil_check(F->pm_1607)).t)) {
F->bt_1631 = rt_str_copy(f_bound_ctype_179((*(P824)rt_nil_check(F->pm_1607)).t));
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1631), rt_str(" ", 1)), F->f_1625), rt_str("lo, ", 4)), F->f_1625), rt_str("hi;", 3)); b_; }));
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_1606))->all), rt_str(", ", 2)), F->bt_1631), rt_str(" ", 1)), F->f_1625), rt_str("lo, ", 4)), F->bt_1631), rt_str(" ", 1)), F->f_1625), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("lo = ", 5)), F->f_1625), rt_str("lo; F->", 7)), F->f_1625), rt_str("hi = ", 5)), F->f_1625), rt_str("hi;", 3)); b_; }));
}
F->ac_1628 = f_new_cons_175();
(*(P814)rt_nil_check(F->ac_1628)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1625, rt_str("lo", 2)); b_; }));
(*(P814)rt_nil_check(F->ac_1628)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1625, rt_str("hi", 2)); b_; }));
(*(P814)rt_nil_check(F->ac_1628)).dyn = 1;
(*(P814)rt_nil_check(F->ac_1628)).lvl = rt_r_ichk(g_cur_level_865);
if (((F->pc_1627 == NULL) || ((*(P814)rt_nil_check(F->pc_1627)).lo == NULL))) {
F->pc_1627 = F->ac_1628;
} else if ((rt_r_ichk((*(P824)rt_nil_check(F->pm_1607)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1625), rt_str("lo <= F->", 9)), F->f_1625), rt_str("hi && (F->", 10)), F->f_1625), rt_str("lo != ", 6)), f_sub_lo_189((*(P824)rt_nil_check(F->pm_1607)).t, F->pc_1627)), rt_str(" || F->", 7)), F->f_1625), rt_str("hi != ", 6)), f_sub_hi_192((*(P824)rt_nil_check(F->pm_1607)).t, F->pc_1627)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P824)rt_nil_check(F->pm_1607)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1624), rt_str(" ", 1)), F->f_1625), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("v = ", 4)), f_copy_code_364((*(P824)rt_nil_check(F->pm_1607)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1625); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P818)rt_nil_check((*(P824)rt_nil_check(F->pm_1607)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P818)rt_nil_check((*(P824)rt_nil_check(F->pm_1607)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1628 == NULL)) {
F->ac_1628 = (*(P824)rt_nil_check(F->pm_1607)).c;
}
if ((!rt_str_eq(f_uninit_value_327(f_base_of_214((*(P824)rt_nil_check(F->pm_1607)).t)), rt_str("", 0)))) {
F->copy_back_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->copy_back_1614))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_219(f_base_of_214((*(P824)rt_nil_check(F->pm_1607)).t))), rt_str("(F->", 4)), F->f_1625), rt_str("v)) ", 4)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1625), rt_str(")", 1)); b_; }), (*(P824)rt_nil_check(F->pm_1607)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("v", 1)); b_; }), F->ac_1628)); b_; }));
} else {
F->copy_back_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->copy_back_1614))->all), rt_str("  ", 2)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1625), rt_str(")", 1)); b_; }), (*(P824)rt_nil_check(F->pm_1607)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("v", 1)); b_; }), F->ac_1628)); b_; }));
}
if (f_needs_fin_315((*(P824)rt_nil_check(F->pm_1607)).t)) {
F->pfin_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->pfin_1615))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1625), rt_str("v", 1)); b_; }), (*(P824)rt_nil_check(F->pm_1607)).t)), rt_str(" ", 1)); b_; }));
}
(*(P822)rt_nil_check(F->p_1626)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1625, rt_str("v", 1)); b_; }));
(*(P822)rt_nil_check(F->p_1626)).byref = 0;
}
}
(*(P822)rt_nil_check(F->p_1626)).t = (*(P824)rt_nil_check(F->pm_1607)).t;
(*(P822)rt_nil_check(F->p_1626)).c = F->pc_1627;
(*(P822)rt_nil_check(F->p_1626)).level = rt_r_ichk(g_cur_level_865);
(*(P822)rt_nil_check(F->p_1626)).ro_flag = ((rt_r_ichk((*(P824)rt_nil_check(F->pm_1607)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P824)rt_nil_check(F->pm_1607)).mode) == (((rt_int)4LL))));
f_define_159(F->p_1626, rt_r_ichk((*(P812)rt_nil_check(F->d_461)).line));
F->pm_1607 = (*(P824)rt_nil_check(F->pm_1607)).next;
F->pn_1620 = (*(P812)rt_nil_check(F->pn_1620)).next;
}
if ((rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_462)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P812)rt_nil_check(F->d_461)).b != NULL)) {
F->rc_1632 = NULL;
F->rt_1633 = NULL;
F->rt_1633 = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_461)).b, &F->rc_1632);
g_func_rc_877 = f_freeze_200(F->rc_1632, (*(P822)rt_nil_check(F->y_462)).result);
}
f_put_27(g_fields_buf_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225((*(P822)rt_nil_check(F->y_462)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_462)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_462)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1622 = (((rt_int)(((((P805)rt_nil_check(F->pfin_1615))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1622)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_436((*(P812)rt_nil_check(F->d_461)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_436((*(P812)rt_nil_check(F->d_461)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1634 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1635 = NULL;
F->leave_1635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1634), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1634), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1634), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_436((*(P812)rt_nil_check(F->d_461)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_436((*(P812)rt_nil_check(F->d_461)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P805)rt_nil_check((*(P812)rt_nil_check(F->d_461)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->copy_back_1614))->all), rt_str("  ", 2)), (((P805)rt_nil_check(F->leave_1635))->all)); b_; }));
F->nonrec_end_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P805)rt_nil_check(F->leave_1635))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_473((*(P812)rt_nil_check(F->d_461)).c);
f_declare_body_380((*(P812)rt_nil_check(F->d_461)).c);
f_body_elements_482((*(P812)rt_nil_check(F->d_461)).c);
f_close_fins_456(NULL);
if ((F->nonrec_end_1621 != NULL)) {
f_emit_29(&(((P805)rt_nil_check(F->nonrec_end_1621))->all));
f_pop_cleanup_489();
}
if (rt_r_echk(F->has_pfin_1622)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P805)rt_nil_check(F->pfin_1615))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_489();
F->copy_back_1614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->copy_back_1614))->all), rt_str("  ", 2)), (((P805)rt_nil_check(F->pfin_1615))->all)); b_; }));
}
f_close_scope_169();
g_fctx_866 = (*(P829)rt_nil_check(g_fctx_866)).next;
g_cur_level_865 = rt_sub(rt_r_ichk(g_cur_level_865), ((rt_int)1LL));
if (((((rt_int)(((((P805)rt_nil_check(F->args_1606))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) == (((rt_int)9LL))))) {
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) == (((rt_int)9LL)))) {
F->args_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1611 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225((*(P822)rt_nil_check(F->y_462)).result)), rt_str(" ", 1)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_462)).cname))->all)), rt_str("(", 1)), (((P805)rt_nil_check(F->args_1606))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->head_1611))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->head_1611))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P805)rt_nil_check(F->frame_1612))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_871, g_fields_buf_863);
f_put_27(g_out_frames_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_462)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P805)rt_nil_check(F->frame_1612))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P805)rt_nil_check(F->frame_1612))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_859, g_code_862);
if ((rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(F->y_462)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P805)rt_nil_check(F->copy_back_1614))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_859, &(((P805)rt_nil_check(F->copy_back_1614))->all));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P805)rt_nil_check(F->copy_back_1614))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_859, &(((P805)rt_nil_check(F->copy_back_1614))->all));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_862 = F->saved_code_1599;
g_fields_buf_863 = F->saved_fields_1600;
g_in_func_864 = rt_r_echk(F->saved_in_1601);
g_func_sym_876 = F->saved_sym_1602;
g_exits_885 = F->saved_exits_1603;
g_gotos_886 = F->saved_gotos_1604;
g_frames_887 = rt_r_ichk(F->saved_frames_1605);
g_handlers_888 = F->saved_handlers_1608;
g_cleanups_889 = F->saved_cleanups_1609;
g_fins_874 = F->saved_fins_1616;
g_func_rc_877 = F->saved_rc_1617;
g_cap_ret_878 = F->saved_ret_1618;
g_cap_rflag_879 = F->saved_rflag_1619;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_465(P812 d_464) {
  struct f_waits_of_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_464 = d_464;
F->w_1636 = NULL;
F->w_1636 = g_cap_waits_868;
while ((F->w_1636 != NULL)) {
if (((*(P841)rt_nil_check(F->w_1636)).d == F->d_464)) {
F->result_ = (((P805)rt_nil_check((*(P841)rt_nil_check(F->w_1636)).w))->all);
goto ret_;
}
F->w_1636 = (*(P841)rt_nil_check(F->w_1636)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_467(P812 elems_466) {
  struct f_task_waits_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_466 = elems_466;
F->e_1637 = NULL;
F->e_1637 = F->elems_466;
F->r_1638 = NULL;
F->r_1638 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1637 != NULL)) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->e_1637)).kind) == (((rt_int)50LL)))) {
F->r_1638 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1638))->all), rt_str(" rt_await_decl(&", 16)), (((P805)rt_nil_check((*(P822)rt_nil_check(f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_1637)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->e_1637)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P812)rt_nil_check(F->e_1637)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P812)rt_nil_check(F->e_1637)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P812)rt_nil_check(F->e_1637)).flag) == ((rt_int)3LL)))))) {
F->r_1638 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->r_1638))->all), f_waits_of_465(F->e_1637)); b_; }));
}
F->e_1637 = (*(P812)rt_nil_check(F->e_1637)).next;
}
F->result_ = (((P805)rt_nil_check(F->r_1638))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_469(P812 elems_468) {
  struct f_await_tasks_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_468 = elems_468;
F->w_1639 = rt_str_copy(f_task_waits_467(F->elems_468));
if ((((rt_int)((F->w_1639).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1639);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_471(P812 elems_470) {
  struct f_capsule_elements_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_470 = elems_470;
F->e_1640 = NULL;
F->e_1640 = F->elems_470;
while ((F->e_1640 != NULL)) {
if (((rt_r_ichk((*(P812)rt_nil_check(F->e_1640)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_1640)).kind) <= (((rt_int)36LL))))) {
f_start_labels_474();
}
f_element_442(F->e_1640);
F->e_1640 = (*(P812)rt_nil_check(F->e_1640)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_473(P812 elems_472) {
  struct f_declare_labels_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_472 = elems_472;
F->e_1641 = NULL;
F->e_1641 = F->elems_472;
while ((F->e_1641 != NULL)) {
F->l_1642 = NULL;
F->l_1642 = (*(P812)rt_nil_check(F->e_1641)).labels;
while ((F->l_1642 != NULL)) {
F->x_1643 = NULL;
F->x_1643 = g_gotos_886;
while (((F->x_1643 != NULL) && (rt_r_ichk((*(P837)rt_nil_check(F->x_1643)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P805)rt_nil_check((*(P837)rt_nil_check(F->x_1643)).match))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->l_1642)).name))->all))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->l_1642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P805)rt_nil_check((*(P812)rt_nil_check(F->l_1642)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1643 = (*(P837)rt_nil_check(F->x_1643)).next;
}
{ R838 *cell1644 = rt_alloc(sizeof(R838));
(*cell1644).match = NULL;
(*cell1644).label = NULL;
(*cell1644).next = NULL;
F->x_1643 = cell1644;
}
(*(P837)rt_nil_check(F->x_1643)).match = (*(P812)rt_nil_check(F->l_1642)).name;
(*(P837)rt_nil_check(F->x_1643)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P837)rt_nil_check(F->x_1643)).depth = rt_neg(((rt_int)1LL));
(*(P837)rt_nil_check(F->x_1643)).next = g_gotos_886;
g_gotos_886 = F->x_1643;
F->l_1642 = (*(P812)rt_nil_check(F->l_1642)).next;
}
F->e_1641 = (*(P812)rt_nil_check(F->e_1641)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_474(void) {
  struct f_start_labels_474fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1645 = NULL;
F->x_1645 = g_gotos_886;
while (((F->x_1645 != NULL) && (rt_r_ichk((*(P837)rt_nil_check(F->x_1645)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P837)rt_nil_check(F->x_1645)).depth = rt_r_ichk(g_frames_887);
F->x_1645 = (*(P837)rt_nil_check(F->x_1645)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P837 f_goto_label_476(rstr *name_475) {
  struct f_goto_label_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_475 = name_475;
F->x_1646 = NULL;
F->x_1646 = g_gotos_886;
while ((F->x_1646 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P837)rt_nil_check(F->x_1646)).match))->all), (*F->name_475))) {
F->result_ = F->x_1646;
goto ret_;
}
F->x_1646 = (*(P837)rt_nil_check(F->x_1646)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_478(P812 e_477) {
  struct f_has_return_478fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_477 = e_477;
F->x_1647 = NULL;
F->x_1647 = F->e_477;
while ((F->x_1647 != NULL)) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P812)rt_nil_check(F->x_1647)).kind) != (((rt_int)51LL))))) {
if ((((((*(P812)rt_nil_check(F->x_1647)).a != NULL) && f_has_return_478((*(P812)rt_nil_check(F->x_1647)).a)) || (((*(P812)rt_nil_check(F->x_1647)).b != NULL) && f_has_return_478((*(P812)rt_nil_check(F->x_1647)).b))) || (((*(P812)rt_nil_check(F->x_1647)).c != NULL) && f_has_return_478((*(P812)rt_nil_check(F->x_1647)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1647 = (*(P812)rt_nil_check(F->x_1647)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_480(P812 elems_479) {
  struct f_capsule_body_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_479 = elems_479;
F->saved_ret_1648 = NULL;
F->saved_ret_1648 = g_cap_ret_878;
F->saved_flag_1649 = NULL;
F->saved_flag_1649 = g_cap_rflag_879;
F->saved_frames_1650 = RT_R_IUNDEF;
F->saved_frames_1650 = rt_r_ichk(g_ret_frames_880);
F->e_1651 = NULL;
F->e_1651 = F->elems_479;
if ((!f_has_return_478(F->elems_479))) {
g_cap_ret_878 = NULL;
g_cap_rflag_879 = NULL;
f_capsule_elements_471(F->elems_479);
} else {
g_cap_rflag_879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(g_cap_rflag_879))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1651 != NULL)) {
F->stmt_1652 = RT_R_EUNDEF;
F->stmt_1652 = ((rt_r_ichk((*(P812)rt_nil_check(F->e_1651)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P812)rt_nil_check(F->e_1651)).kind) <= (((rt_int)36LL))));
g_cap_ret_878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_880 = rt_r_ichk(g_frames_887);
if (rt_r_echk(F->stmt_1652)) {
f_start_labels_474();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P805)rt_nil_check(g_cap_rflag_879))->all)), rt_str(") {", 3)); b_; }));
}
f_element_442(F->e_1651);
if (rt_r_echk(F->stmt_1652)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(g_cap_ret_878))->all), rt_str(": ;", 3)); b_; }));
F->e_1651 = (*(P812)rt_nil_check(F->e_1651)).next;
}
}
g_cap_ret_878 = F->saved_ret_1648;
g_cap_rflag_879 = F->saved_flag_1649;
g_ret_frames_880 = rt_r_ichk(F->saved_frames_1650);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_482(P812 elems_481) {
  struct f_body_elements_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_481 = elems_481;
f_capsule_elements_471(F->elems_481);
f_await_tasks_469(F->elems_481);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_484(P812 elems_483) {
  struct f_gen_body_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_483 = elems_483;
F->saved_1653 = NULL;
F->saved_1653 = g_fins_874;
F->saved_gotos_1654 = NULL;
F->saved_gotos_1654 = g_gotos_886;
f_open_scope_168();
f_declare_labels_473(F->elems_483);
f_declare_body_380(F->elems_483);
f_body_elements_482(F->elems_483);
f_close_fins_456(F->saved_1653);
f_close_scope_169();
g_gotos_886 = F->saved_gotos_1654;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_486(rt_int upto_485) {
  struct f_pop_frames_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_485 = upto_485;
F->i_1655 = RT_R_IUNDEF;
F->i_1655 = rt_r_ichk(g_frames_887);
F->c_1656 = NULL;
F->c_1656 = g_cleanups_889;
while ((rt_r_ichk(F->i_1655) > F->upto_485)) {
f_emit_29(&(((P805)rt_nil_check((*(P816)rt_nil_check(F->c_1656)).s))->all));
F->c_1656 = (*(P816)rt_nil_check(F->c_1656)).next;
F->i_1655 = rt_sub(rt_r_ichk(F->i_1655), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_488(rstr *s_487) {
  struct f_push_cleanup_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_487 = s_487;
F->c_1657 = NULL;
{ R817 *cell1658 = rt_alloc(sizeof(R817));
(*cell1658).s = NULL;
(*cell1658).next = NULL;
F->c_1657 = cell1658;
}
(*(P816)rt_nil_check(F->c_1657)).s = f_mk_3(&(*F->s_487));
(*(P816)rt_nil_check(F->c_1657)).next = g_cleanups_889;
g_cleanups_889 = F->c_1657;
g_frames_887 = rt_add(rt_r_ichk(g_frames_887), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_489(void) {
  struct f_pop_cleanup_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_889 = (*(P816)rt_nil_check(g_cleanups_889)).next;
g_frames_887 = rt_sub(rt_r_ichk(g_frames_887), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_491(P812 s_490) {
  struct f_gen_statement_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_490 = s_490;
F->label_1659 = NULL;
F->gl_1660 = NULL;
F->gl_1660 = (*(P812)rt_nil_check(F->s_490)).labels;
while ((F->gl_1660 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P837)rt_nil_check(f_goto_label_476(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->gl_1660)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1660 = (*(P812)rt_nil_check(F->gl_1660)).next;
}
if (((*(P812)rt_nil_check(F->s_490)).tag != NULL)) {
F->x_1661 = NULL;
{ R838 *cell1662 = rt_alloc(sizeof(R838));
(*cell1662).match = NULL;
(*cell1662).label = NULL;
(*cell1662).next = NULL;
F->x_1661 = cell1662;
}
F->label_1659 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P837)rt_nil_check(F->x_1661)).match = (*(P812)rt_nil_check(F->s_490)).tag;
(*(P837)rt_nil_check(F->x_1661)).label = F->label_1659;
(*(P837)rt_nil_check(F->x_1661)).depth = rt_r_ichk(g_frames_887);
(*(P837)rt_nil_check(F->x_1661)).next = g_exits_885;
g_exits_885 = F->x_1661;
}
{ rt_int sel1663 = rt_r_ichk((*(P812)rt_nil_check(F->s_490)).kind);
if (0 || (sel1663 == (((rt_int)20LL)))) {
f_st_assign_493(F->s_490);
} else if (0 || (sel1663 == (((rt_int)21LL)))) {
f_st_call_495(F->s_490);
} else if (0 || (sel1663 == (((rt_int)22LL)))) {
f_st_if_497(F->s_490);
} else if (0 || (sel1663 == (((rt_int)23LL)))) {
f_st_case_499(F->s_490);
} else if (0 || (sel1663 == (((rt_int)24LL)))) {
f_st_repeat_501(F->s_490);
} else if (0 || (sel1663 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_484((*(P812)rt_nil_check(F->s_490)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1663 == (((rt_int)27LL)))) {
f_st_exit_503(F->s_490);
} else if (0 || (sel1663 == (((rt_int)29LL)))) {
{
F->x_1664 = NULL;
F->x_1664 = f_goto_label_476(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->s_490)).name))->all));
if ((F->x_1664 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->s_490)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_486(rt_r_ichk((*(P837)rt_nil_check(F->x_1664)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P805)rt_nil_check((*(P837)rt_nil_check(F->x_1664)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1663 == (((rt_int)28LL)))) {
f_st_return_505(F->s_490);
} else if (0 || (sel1663 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_512(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->s_490)).name))->all), rt_r_ichk((*(P812)rt_nil_check(F->s_490)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1663 == (((rt_int)31LL)))) {
if ((g_handlers_888 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P805)rt_nil_check((*(P816)rt_nil_check(g_handlers_888)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1663 == (((rt_int)26LL)))) {
f_st_guard_514(F->s_490);
} else if (0 || (sel1663 == (((rt_int)32LL)))) {
f_st_alloc_516(F->s_490);
} else if (0 || (sel1663 == (((rt_int)34LL)))) {
f_st_create_520(F->s_490);
} else if (0 || (sel1663 == (((rt_int)35LL)))) {
f_st_wait_549(F->s_490);
} else if (0 || (sel1663 == (((rt_int)36LL)))) {
f_st_region_557(F->s_490);
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P812)rt_nil_check(F->s_490)).tag != NULL)) {
g_exits_885 = (*(P837)rt_nil_check(g_exits_885)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->label_1659))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_493(P812 s_492) {
  struct f_st_assign_493fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_492 = s_492;
F->lv_1665 = NULL;
F->t_1666 = NULL;
F->vt_1667 = NULL;
F->c_1668 = NULL;
F->ro_1669 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).kind) == (((rt_int)10LL))) && ((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b != NULL)) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_615((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).a, &F->lv_1665, &F->t_1666, &F->c_1668, &F->ro_1669);
while ((rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->t_1666);
F->lv_1665 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_607(&(((P805)rt_nil_check(F->lv_1665))->all), F->t_1666); b_; }));
F->t_1666 = (*(P818)rt_nil_check(F->t_1666)).target;
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->t_1666)).tparams == NULL))) {
F->t_1666 = (*(P818)rt_nil_check(F->t_1666)).under;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).kind) == (((rt_int)15LL)))) {
F->lv_1665 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->lv_1665))->all), rt_str(".all", 4)); b_; }));
F->t_1666 = (*(P818)rt_nil_check(F->t_1666)).under;
}
if ((((!rt_r_echk(F->ro_1669)) && (rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).ndim) == ((rt_int)1LL)))) {
F->lo_1670 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b)).a, (*(P818)rt_nil_check(F->t_1666)).idx, &F->vt_1667));
F->hi_1671 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b)).b, (*(P818)rt_nil_check(F->t_1666)).idx, &F->vt_1667));
F->v_1672 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->s_492)).b, F->t_1666, &F->vt_1667));
f_need_slice_627(F->t_1666);
f_check_type_223(F->vt_1667, F->t_1666, rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_1666)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_225(F->t_1666)), rt_str("(", 1)), (((P805)rt_nil_check(F->lv_1665))->all)), rt_str(", ", 2)), F->lo_1670), rt_str(", ", 2)), F->hi_1671), rt_str("); as_", 6)), f_ctype_225(F->t_1666)), rt_str("(&sl_, ", 7)), F->v_1672), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1669) || (rt_r_ichk((*(P818)rt_nil_check(F->t_1666)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1673 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b)).a, g_ty_int_892, &F->vt_1667));
F->hi_1674 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->s_492)).a)).b)).b, g_ty_int_892, &F->vt_1667));
F->v_1675 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->s_492)).b, g_ty_string_896, &F->vt_1667));
f_check_type_223(F->vt_1667, g_ty_string_896, rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P805)rt_nil_check(F->lv_1665))->all)), rt_str(", ", 2)), F->lo_1673), rt_str(", ", 2)), F->hi_1674), rt_str(", ", 2)), F->v_1675), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_615((*(P812)rt_nil_check(F->s_492)).a, &F->lv_1665, &F->t_1666, &F->c_1668, &F->ro_1669);
if (rt_r_echk(F->ro_1669)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_296(F->t_1666)) && (!f_exports_op_402((*(P818)rt_nil_check(F->t_1666)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_1666)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1676 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->s_492)).b, F->t_1666, F->c_1668, &F->vt_1667));
f_check_type_223(F->vt_1667, F->t_1666, rt_r_ichk((*(P812)rt_nil_check(F->s_492)).line));
f_ptr_subtype_check_429(F->t_1666, F->c_1668, (*(P812)rt_nil_check(F->s_492)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&(((P805)rt_nil_check(F->lv_1665))->all), F->t_1666, &F->v_1676, F->c_1668); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_495(P812 s_494) {
  struct f_st_call_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_494 = s_494;
F->c_1677 = NULL;
F->c_1677 = (*(P812)rt_nil_check(F->s_494)).a;
F->t_1678 = NULL;
if (((rt_r_ichk((*(P812)rt_nil_check(F->c_1677)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->c_1677)).kind) == (((rt_int)12LL))))) {
F->x_1679 = NULL;
F->x_1679 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->c_1677)).line));
(*(P812)rt_nil_check(F->x_1679)).a = F->c_1677;
F->c_1677 = F->x_1679;
}
if ((rt_r_ichk((*(P812)rt_nil_check(F->c_1677)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_494)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_776(F->c_1677, 1, &F->t_1678), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_497(P812 s_496) {
  struct f_st_if_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_496 = s_496;
F->a_1680 = NULL;
F->a_1680 = (*(P812)rt_nil_check(F->s_496)).a;
F->first_1681 = RT_R_EUNDEF;
F->first_1681 = 1;
F->t_1682 = NULL;
F->taken_1683 = RT_R_EUNDEF;
F->taken_1683 = 0;
F->ok_1684 = RT_R_EUNDEF;
F->mv_1685 = NULL;
while (((F->a_1680 != NULL) && (!rt_r_echk(F->taken_1683)))) {
F->mv_1685 = f_meval_342((*(P812)rt_nil_check(F->a_1680)).a, &F->ok_1684);
if (((rt_r_echk(F->ok_1684) && (rt_r_ichk((*(P831)rt_nil_check(F->mv_1685)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P831)rt_nil_check(F->mv_1685)).i) == ((rt_int)0LL)))) {
F->a_1680 = (*(P812)rt_nil_check(F->a_1680)).next;
} else {
if ((rt_r_echk(F->ok_1684) && (rt_r_ichk((*(P831)rt_nil_check(F->mv_1685)).kind) == (((rt_int)2LL))))) {
F->taken_1683 = 1;
if (rt_r_echk(F->first_1681)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1686 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->a_1680)).a, g_ty_bool_893, &F->t_1682));
f_check_type_223(F->t_1682, g_ty_bool_893, rt_r_ichk((*(P812)rt_nil_check(F->s_496)).line));
if (rt_r_echk(F->first_1681)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1686), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1686), rt_str(") {", 3)); b_; }));
}
}
F->first_1681 = 0;
f_gen_body_484((*(P812)rt_nil_check(F->a_1680)).b);
F->a_1680 = (*(P812)rt_nil_check(F->a_1680)).next;
}
}
if (((rt_r_ichk((*(P812)rt_nil_check(F->s_496)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1683)))) {
if (rt_r_echk(F->first_1681)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1681 = 0;
f_gen_body_484((*(P812)rt_nil_check(F->s_496)).b);
}
if ((!rt_r_echk(F->first_1681))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_499(P812 s_498) {
  struct f_st_case_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_498 = s_498;
F->st_1687 = NULL;
F->vt_1688 = NULL;
F->first_1689 = RT_R_EUNDEF;
F->first_1689 = 1;
F->a_1690 = NULL;
F->a_1690 = (*(P812)rt_nil_check(F->s_498)).b;
F->sel_1691 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->s_498)).a, NULL, &F->st_1687));
F->tmp_1692 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->st_1687)), rt_str(" ", 1)), F->tmp_1692), rt_str(" = ", 3)), F->sel_1691), rt_str(";", 1)); b_; }));
while ((F->a_1690 != NULL)) {
F->lab_1693 = NULL;
F->lab_1693 = (*(P812)rt_nil_check(F->a_1690)).a;
F->conds_1694 = NULL;
F->conds_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1693 != NULL)) {
if (((*(P812)rt_nil_check(F->lab_1693)).b == NULL)) {
F->v_1695 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->lab_1693)).a, F->st_1687, &F->vt_1688));
f_check_type_223(F->vt_1688, F->st_1687, rt_r_ichk((*(P812)rt_nil_check(F->s_498)).line));
F->conds_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->conds_1694))->all), rt_str(" || ", 4)), f_eq_code_368(F->st_1687, &F->tmp_1692, &F->v_1695)); b_; }));
} else {
F->lo_1696 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->lab_1693)).a, F->st_1687, &F->vt_1688));
F->hi_1697 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->lab_1693)).b, F->st_1687, &F->vt_1688));
F->conds_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->conds_1694))->all), rt_str(" || (", 5)), F->tmp_1692), rt_str(" >= ", 4)), F->lo_1696), rt_str(" && ", 4)), F->tmp_1692), rt_str(" <= ", 4)), F->hi_1697), rt_str(")", 1)); b_; }));
}
F->lab_1693 = (*(P812)rt_nil_check(F->lab_1693)).next;
}
if (rt_r_echk(F->first_1689)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P805)rt_nil_check(F->conds_1694))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P805)rt_nil_check(F->conds_1694))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1689 = 0;
f_gen_body_484((*(P812)rt_nil_check(F->a_1690)).b);
F->a_1690 = (*(P812)rt_nil_check(F->a_1690)).next;
}
if (rt_r_echk(F->first_1689)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P812)rt_nil_check(F->s_498)).flag) == ((rt_int)1LL))) {
f_gen_body_484((*(P812)rt_nil_check(F->s_498)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_501(P812 s_500) {
  struct f_st_repeat_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_500 = s_500;
F->t_1698 = NULL;
F->c_1699 = NULL;
if ((rt_r_ichk((*(P812)rt_nil_check(F->s_500)).flag) == ((rt_int)0LL))) {
F->cond_1700 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->s_500)).a, g_ty_bool_893, &F->t_1698));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1700), rt_str(") {", 3)); b_; }));
f_gen_body_484((*(P812)rt_nil_check(F->s_500)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1698 = f_resolve_subtype_256((*(P812)rt_nil_check(F->s_500)).a, &F->c_1699);
F->c_1699 = f_base_cons_217(F->t_1698, F->c_1699);
if ((((*(P818)rt_nil_check(f_base_of_214(F->t_1698))).kind == (((rt_int)4LL))) && ((*(P814)rt_nil_check(F->c_1699)).lo == NULL))) {
F->c_1699 = f_new_cons_175();
(*(P814)rt_nil_check(F->c_1699)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P814)rt_nil_check(F->c_1699)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P818)rt_nil_check(f_base_of_214(F->t_1698))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P814)rt_nil_check(F->c_1699)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_500)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1701 = rt_str_copy(f_storage_447(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->s_500)).name))->all), F->t_1698));
F->lov_1702 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1703 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1704 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1705 = NULL;
F->y_1705 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->s_500)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1702), rt_str(" = ", 3)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_1699)).lo))->all)), rt_str(", ", 2)), F->hiv_1703), rt_str(" = ", 3)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_1699)).hi))->all)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P812)rt_nil_check(F->s_500)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1704), rt_str(" = ", 3)), F->hiv_1703), rt_str("; ", 2)), F->it_1704), rt_str(" >= ", 4)), F->lov_1702), rt_str("; ", 2)), F->it_1704), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1704), rt_str(" = ", 3)), F->lov_1702), rt_str("; ", 2)), F->it_1704), rt_str(" <= ", 4)), F->hiv_1703), rt_str("; ", 2)), F->it_1704), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1701, rt_str(" = ", 3)), F->it_1704), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P822)rt_nil_check(F->y_1705)).t = F->t_1698;
(*(P822)rt_nil_check(F->y_1705)).c = F->c_1699;
f_bind_450(F->y_1705, &F->access_1701);
(*(P822)rt_nil_check(F->y_1705)).ro_flag = 1;
f_define_159(F->y_1705, rt_r_ichk((*(P812)rt_nil_check(F->s_500)).line));
f_gen_body_484((*(P812)rt_nil_check(F->s_500)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_503(P812 s_502) {
  struct f_st_exit_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_502 = s_502;
F->x_1706 = NULL;
F->x_1706 = g_exits_885;
while ((F->x_1706 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P837)rt_nil_check(F->x_1706)).match))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->s_502)).name))->all))) {
f_pop_frames_486(rt_r_ichk((*(P837)rt_nil_check(F->x_1706)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P805)rt_nil_check((*(P837)rt_nil_check(F->x_1706)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1706 = (*(P837)rt_nil_check(F->x_1706)).next;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_502)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P805)rt_nil_check((*(P812)rt_nil_check(F->s_502)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_505(P812 s_504) {
  struct f_st_return_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_504 = s_504;
F->vt_1707 = NULL;
if ((g_cap_ret_878 != NULL)) {
if (((*(P812)rt_nil_check(F->s_504)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_486(rt_r_ichk(g_ret_frames_880));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(g_cap_rflag_879))->all), rt_str(" = 1; goto ", 11)), (((P805)rt_nil_check(g_cap_ret_878))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_864))) {
f_pop_frames_486(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check((*(P822)rt_nil_check(g_func_sym_876)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P812)rt_nil_check(F->s_504)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_486(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P812)rt_nil_check(F->s_504)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1708 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->s_504)).a, (*(P822)rt_nil_check(g_func_sym_876)).result, g_func_rc_877, &F->vt_1707));
f_check_type_223(F->vt_1707, (*(P822)rt_nil_check(g_func_sym_876)).result, rt_r_ichk((*(P812)rt_nil_check(F->s_504)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_509((*(P822)rt_nil_check(g_func_sym_876)).result, g_func_rc_877, &F->v_1708)), rt_str(";", 1)); b_; }));
f_pop_frames_486(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_509(P818 t_506, P814 c_507, rstr *v_508) {
  struct f_result_checked_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_506 = t_506;
F->c_507 = c_507;
F->v_508 = v_508;
if ((F->c_507 == NULL)) {
F->result_ = (*F->v_508);
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_506)).kind) == (((rt_int)5LL))) && ((*(P814)rt_nil_check(F->c_507)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_508)), rt_str(", ", 2)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_507)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->t_506)).kind) == (((rt_int)6LL))) && ((*(P814)rt_nil_check(F->c_507)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->t_506)), rt_str(" r_ = ", 6)), (*F->v_508)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_507)).lo))->all)), rt_str(", ", 2)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_507)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_506, F->c_507, &(*F->v_508));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_512(rstr *name_510, rt_int line_511) {
  struct f_exc_id_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_510 = name_510;
F->line_511 = line_511;
F->y_1709 = NULL;
F->y_1709 = f_lookup_154(&(*F->name_510));
if (((F->y_1709 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->y_1709)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1709)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_510)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_510), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_510)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_511, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_510), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_514(P812 s_513) {
  struct f_st_guard_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_513 = s_513;
F->h_1710 = NULL;
F->h_1710 = (*(P812)rt_nil_check(F->s_513)).b;
F->first_1711 = RT_R_EUNDEF;
F->first_1711 = 1;
F->hv_1712 = NULL;
{
F->f_1713 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1714 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1713), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1713), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1713), rt_str(")) {", 4)); b_; }));
f_gen_body_484((*(P812)rt_nil_check(F->s_513)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1713), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_489();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1713), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1714), rt_str(" = rt_xcur;", 11)); b_; }));
{ R817 *cell1715 = rt_alloc(sizeof(R817));
(*cell1715).s = NULL;
(*cell1715).next = NULL;
F->hv_1712 = cell1715;
}
(*(P816)rt_nil_check(F->hv_1712)).s = f_mk_3(&F->x_1714);
(*(P816)rt_nil_check(F->hv_1712)).next = g_handlers_888;
g_handlers_888 = F->hv_1712;
while ((F->h_1710 != NULL)) {
F->n_1716 = NULL;
F->n_1716 = (*(P812)rt_nil_check(F->h_1710)).a;
F->conds_1717 = NULL;
F->conds_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1716 != NULL)) {
F->conds_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->conds_1717))->all), rt_str(" || ", 4)), F->x_1714), rt_str(" == ", 4)), f_exc_id_512(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->n_1716)).name))->all), rt_r_ichk((*(P812)rt_nil_check(F->s_513)).line))); b_; }));
F->n_1716 = (*(P812)rt_nil_check(F->n_1716)).next;
}
if (rt_r_echk(F->first_1711)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P805)rt_nil_check(F->conds_1717))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P805)rt_nil_check(F->conds_1717))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1711 = 0;
f_gen_body_484((*(P812)rt_nil_check(F->h_1710)).b);
F->h_1710 = (*(P812)rt_nil_check(F->h_1710)).next;
}
if (rt_r_echk(F->first_1711)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P812)rt_nil_check(F->s_513)).flag) == ((rt_int)1LL))) {
f_gen_body_484((*(P812)rt_nil_check(F->s_513)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1714), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_888 = (*(P816)rt_nil_check(g_handlers_888)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_516(P812 s_515) {
  struct f_st_alloc_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_515 = s_515;
F->lv_1718 = NULL;
F->t_1719 = NULL;
F->target_1720 = NULL;
F->vt_1721 = NULL;
F->c_1722 = NULL;
F->tc_1723 = NULL;
F->ro_1724 = RT_R_EUNDEF;
F->d_1725 = NULL;
F->p_1726 = NULL;
F->a_1727 = NULL;
f_lvalue_615((*(P812)rt_nil_check(F->s_515)).a, &F->lv_1718, &F->t_1719, &F->c_1722, &F->ro_1724);
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1719)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_409(F->t_1719);
F->d_1725 = (*(P818)rt_nil_check(F->t_1719)).decl;
F->target_1720 = (*(P818)rt_nil_check(F->t_1719)).target;
if ((f_list_len_67((*(P812)rt_nil_check(F->s_515)).b) != f_list_len_67((*(P812)rt_nil_check(F->d_1725)).b))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P812)rt_nil_check(F->d_1725)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P812)rt_nil_check(F->d_1725)).b != NULL)) {
f_alloc_cell_421(F->s_515, &(((P805)rt_nil_check(F->lv_1718))->all), F->t_1719, F->c_1722);
goto ret_;
}
{
F->tcn_1728 = rt_str_copy(f_ctype_225(F->target_1720));
F->cell_1729 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315(F->target_1720)) {
F->fn_1730 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_873 = 1;
g_uses_findyn_875 = 1;
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1730), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1730), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P805)rt_nil_check((*(P822)rt_nil_check(g_func_sym_876)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1728), rt_str(" *)cell_)", 9)); b_; }), F->target_1720)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1728), rt_str(" *", 2)), F->cell_1729), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1728), rt_str("), ", 3)), F->fn_1730), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1728), rt_str(" *", 2)), F->cell_1729), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1728), rt_str("), ", 3)), F->fn_1730), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1728), rt_str(" *", 2)), F->cell_1729), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1728), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_416((*(P812)rt_nil_check(F->d_1725)).d, f_ptr_args_411(F->c_1722), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P812)rt_nil_check(F->s_515)).line));
F->vt_1721 = f_resolve_subtype_256((*(P812)rt_nil_check(F->d_1725)).a, &F->tc_1723);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1729), rt_str(")", 1)); b_; }), F->target_1720, F->tc_1723);
f_close_scope_169();
if (((*(P812)rt_nil_check(F->s_515)).c != NULL)) {
F->v_1731 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->s_515)).c, F->target_1720, F->tc_1723, &F->vt_1721));
f_check_type_223(F->vt_1721, F->target_1720, rt_r_ichk((*(P812)rt_nil_check(F->s_515)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1729), rt_str(")", 1)); b_; }), F->target_1720, &F->v_1731, F->tc_1723); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->lv_1718))->all), rt_str(" = ", 3)), F->cell_1729), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_518(P812 e_517) {
  struct f_act_ref_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_517 = e_517;
F->lv_1732 = NULL;
F->t_1733 = NULL;
F->c_1734 = NULL;
F->ro_1735 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P812)rt_nil_check(F->e_517)).kind) == (((rt_int)7LL))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_517)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_609(F->e_517))) {
F->v_1736 = rt_str_copy(f_gexpr_646(F->e_517, g_ty_act_902, &F->t_1733));
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1733)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1736;
goto ret_;
}
f_lvalue_615(F->e_517, &F->lv_1732, &F->t_1733, &F->c_1734, &F->ro_1735);
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1733)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P805)rt_nil_check(F->lv_1732))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_520(P812 s_519) {
  struct f_st_create_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_519 = s_519;
F->y_1737 = NULL;
F->y_1737 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->s_519)).name))->all));
F->pm_1738 = NULL;
F->a_1739 = NULL;
F->a_1739 = (*(P812)rt_nil_check(F->s_519)).b;
F->lv_1740 = NULL;
F->lt_1741 = NULL;
F->vt_1742 = NULL;
F->lc_1743 = NULL;
F->ro_1744 = RT_R_EUNDEF;
if (((F->y_1737 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->y_1737)).kind) == (((rt_int)10LL))))) {
F->y_1737 = f_instantiate_591(F->y_1737, (*(P812)rt_nil_check(F->s_519)).e, (*(P812)rt_nil_check(F->s_519)).b, rt_r_ichk((*(P812)rt_nil_check(F->s_519)).line));
}
if (((F->y_1737 == NULL) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1737)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_519)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->s_519)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1738 = (*(P822)rt_nil_check(F->y_1737)).params;
{
F->at_1745 = NULL;
F->ac_1746 = NULL;
F->aro_1747 = RT_R_EUNDEF;
F->act_1748 = NULL;
F->nf_1749 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_615((*(P812)rt_nil_check(F->s_519)).a, &F->lv_1740, &F->at_1745, &F->ac_1746, &F->aro_1747);
if ((rt_r_ichk((*(P818)rt_nil_check(F->at_1745)).kind) == (((rt_int)14LL)))) {
F->act_1748 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_518((*(P812)rt_nil_check(F->s_519)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1737)).cname))->all)), rt_str("fr *", 4)), F->nf_1749), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1749), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_1737)).level) > ((rt_int)0LL))) {
F->link_1750 = NULL;
F->link_1750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1752 = ((rt_int)1LL), hi1753 = rt_sub(rt_r_ichk(g_cur_level_865), rt_r_ichk((*(P822)rt_nil_check(F->y_1737)).level));
for (rt_int it1754 = lo1752; it1754 <= hi1753; it1754++) {
F->i_1751 = it1754;
F->link_1750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->link_1750))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1749, rt_str("->up = ", 7)), (((P805)rt_nil_check(F->link_1750))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1739 != NULL) && (F->pm_1738 != NULL))) {
if ((rt_r_ichk((*(P824)rt_nil_check(F->pm_1738)).mode) == (((rt_int)1LL)))) {
F->v_1755 = rt_str_copy(f_gexpr_in_654(F->a_1739, (*(P824)rt_nil_check(F->pm_1738)).t, (*(P824)rt_nil_check(F->pm_1738)).c, &F->vt_1742));
f_check_type_223(F->vt_1742, (*(P824)rt_nil_check(F->pm_1738)).t, rt_r_ichk((*(P812)rt_nil_check(F->s_519)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1749, rt_str("->", 2)), (((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_1738)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_364((*(P824)rt_nil_check(F->pm_1738)).t, &F->v_1755)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_615(F->a_1739, &F->lv_1740, &F->lt_1741, &F->lc_1743, &F->ro_1744);
f_check_type_223(F->lt_1741, (*(P824)rt_nil_check(F->pm_1738)).t, rt_r_ichk((*(P812)rt_nil_check(F->s_519)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1749, rt_str("->", 2)), (((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_1738)).cfield))->all)), rt_str(" = &", 4)), (((P805)rt_nil_check(F->lv_1740))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P824)rt_nil_check(F->pm_1738)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1749, rt_str("->", 2)), (((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_1738)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1741, F->lc_1743)), rt_str("; ", 2)), F->nf_1749), rt_str("->", 2)), (((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_1738)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1741, F->lc_1743)), rt_str(";", 1)); b_; }));
}
}
F->a_1739 = (*(P812)rt_nil_check(F->a_1739)).next;
F->pm_1738 = (*(P824)rt_nil_check(F->pm_1738)).next;
}
if (((F->a_1739 != NULL) || (F->pm_1738 != NULL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->s_519)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P805)rt_nil_check((*(P812)rt_nil_check(F->s_519)).name))->all)); b_; }));
}
if ((F->act_1748 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P805)rt_nil_check(F->act_1748))->all)), rt_str(", &", 3)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1737)).cname))->all)), rt_str("decl, ", 6)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1737)).cname))->all)), rt_str(", ", 2)), F->nf_1749), rt_str("); }", 4)); b_; }));
} else {
f_user_create_530(F->s_519, F->y_1737, &(((P805)rt_nil_check(F->lv_1740))->all), F->at_1745, &F->nf_1749);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_524(rstr *name_521, P818 t_522, rstr *place_523) {
  struct f_hidden_var_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_521 = name_521;
F->t_522 = t_522;
F->place_523 = place_523;
F->y_1756 = NULL;
F->y_1756 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_521)));
(*(P822)rt_nil_check(F->y_1756)).t = F->t_522;
(*(P822)rt_nil_check(F->y_1756)).level = ((rt_int)0LL);
(*(P822)rt_nil_check(F->y_1756)).access = f_mk_3(&(*F->place_523));
f_define_159(F->y_1756, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_530(P812 s_525, P822 y_526, rstr *uv_527, P818 ut_528, rstr *nf_529) {
  struct f_user_create_530fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_525 = s_525;
F->y_526 = y_526;
F->uv_527 = uv_527;
F->ut_528 = ut_528;
F->nf_529 = nf_529;
F->t_1757 = NULL;
F->saved_1758 = NULL;
F->saved_1758 = g_code_862;
F->hook_1759 = NULL;
F->hook_1759 = f_new_buffer_24();
F->un_1760 = NULL;
F->un_1760 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line));
F->hn_1761 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1762 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1763 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1764 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_524(&F->uname_1763, F->ut_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->ut_528)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P812)rt_nil_check(F->un_1760)).name = f_mk_3(&F->uname_1763);
g_code_862 = F->hook_1759;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1760, rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line)), 1, &F->t_1757)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1760, rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line)), 1, &F->t_1757)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1760, rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line)), 1, &F->t_1757)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1760, rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line)), 1, &F->t_1757)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_862 = F->saved_1758;
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1761), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1761), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P805)rt_nil_check((*(P822)rt_nil_check(g_func_sym_876)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_859, F->hook_1759);
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1762), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1762, rt_str("->hook = ", 9)), F->hn_1761), rt_str("; ", 2)), F->aa_1762), rt_str("->ua = &", 8)), (*F->uv_527)), rt_str("; ", 2)), F->aa_1762), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_766(F->ut_528)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_864)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1762, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1762), rt_str(", &", 3)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_526)).cname))->all)), rt_str("decl, ", 6)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_526)).cname))->all)), rt_str(", ", 2)), (*F->nf_529)), rt_str(");", 2)); b_; }));
f_hidden_var_524(&F->aname_1764, g_ty_act_902, &F->aa_1762);
{
F->start_1765 = NULL;
F->start_1765 = f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P812)rt_nil_check(F->s_525)).a, rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line));
F->an_1766 = NULL;
F->an_1766 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->s_525)).line));
(*(P812)rt_nil_check(F->an_1766)).name = f_mk_3(&F->aname_1764);
(*(P812)rt_nil_check((*(P812)rt_nil_check(F->start_1765)).b)).next = F->an_1766;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_776(F->start_1765, 1, &F->t_1757), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_535(P812 inv_531, rstr *arr_532, rt_int i_533, int mixed_534) {
  struct f_wait_alt_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_531 = inv_531;
F->arr_532 = arr_532;
F->i_533 = i_533;
F->mixed_534 = mixed_534;
F->lv_1767 = NULL;
F->t_1768 = NULL;
F->vt_1769 = NULL;
F->c_1770 = NULL;
F->ro_1771 = RT_R_EUNDEF;
F->fn_1772 = NULL;
F->args_1773 = NULL;
F->slot_1774 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_532), rt_str("[", 1)), f_itos_7(F->i_533)), rt_str("]", 1)));
if (((rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_531)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1772 = (*(P812)rt_nil_check(F->inv_531)).a;
F->args_1773 = (*(P812)rt_nil_check(F->inv_531)).b;
if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_615(F->args_1773, &F->lv_1767, &F->t_1768, &F->c_1770, &F->ro_1771);
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1768)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1775 = NULL;
F->dt_1776 = NULL;
f_lvalue_615((*(P812)rt_nil_check(F->args_1773)).next, &F->dv_1775, &F->dt_1776, &F->c_1770, &F->ro_1771);
f_check_type_223(F->dt_1776, (*(P818)rt_nil_check(F->t_1768)).elem, rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P805)rt_nil_check(F->lv_1767))->all)), rt_str(", &", 3)), (((P805)rt_nil_check(F->dv_1775))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1777 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1778 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_1773)).next, (*(P818)rt_nil_check(F->t_1768)).elem, &F->vt_1769));
f_check_type_223(F->vt_1769, (*(P818)rt_nil_check(F->t_1768)).elem, rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P818)rt_nil_check(F->t_1768)).elem), rt_str(" ", 1)), F->tmp_1777), rt_str(" = ", 3)), F->v_1778), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P805)rt_nil_check(F->lv_1767))->all)), rt_str(", &", 3)), F->tmp_1777), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1779 = rt_str_copy(f_gexpr_646(F->args_1773, g_ty_int_892, &F->vt_1769));
if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("DELAY", 5)) && F->mixed_534)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1779), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1779), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1779), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1774, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_518(F->args_1773)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->inv_531)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_1772)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_537(P812 inv_536) {
  struct f_builtin_wait_537fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_536 = inv_536;
F->lv_1780 = NULL;
F->t_1781 = NULL;
F->c_1782 = NULL;
F->ro_1783 = RT_R_EUNDEF;
F->saved_1784 = NULL;
F->saved_1784 = g_code_862;
F->ok_1785 = RT_R_EUNDEF;
F->ok_1785 = 0;
if (((rt_r_ichk((*(P812)rt_nil_check(F->inv_536)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_536)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = f_new_buffer_24();
{ rt_frame xf1786;
if (RT_TRY(xf1786)) {
f_lvalue_615((*(P812)rt_nil_check(F->inv_536)).b, &F->lv_1780, &F->t_1781, &F->c_1782, &F->ro_1783);
F->ok_1785 = (rt_r_ichk((*(P818)rt_nil_check(F->t_1781)).kind) == (((rt_int)12LL)));
RT_POP(xf1786);
} else {
RT_POP(xf1786);
int x1787 = rt_xcur;
if (0 || x1787 == ex_compile_error_1) {
F->ok_1785 = 0;
} else {
rt_raise(x1787);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = F->saved_1784;
F->result_ = rt_r_echk(F->ok_1785);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_542(P812 inv_538, rstr *op_539, rstr *q_540, int is_stmt_541) {
  struct f_wait_op_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_538 = inv_538;
F->op_539 = op_539;
F->q_540 = q_540;
F->is_stmt_541 = is_stmt_541;
F->x_1788 = NULL;
F->x_1788 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->inv_538)).line));
F->f_1789 = NULL;
F->f_1789 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->inv_538)).line));
F->qn_1790 = NULL;
F->qn_1790 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->inv_538)).line));
F->t_1791 = NULL;
(*(P812)rt_nil_check(F->f_1789)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_538)).a)).name))->all), rt_str("_", 1)), (*F->op_539)); b_; }));
(*(P812)rt_nil_check(F->qn_1790)).name = f_mk_3(&(*F->q_540));
(*(P812)rt_nil_check(F->qn_1790)).next = (*(P812)rt_nil_check(F->inv_538)).b;
(*(P812)rt_nil_check(F->x_1788)).a = F->f_1789;
(*(P812)rt_nil_check(F->x_1788)).b = F->qn_1790;
{
F->r_1792 = rt_str_copy(f_gcall_776(F->x_1788, F->is_stmt_541, &F->t_1791));
if ((!F->is_stmt_541)) {
f_check_type_223(F->t_1791, g_ty_bool_893, rt_r_ichk((*(P812)rt_nil_check(F->inv_538)).line));
}
F->result_ = F->r_1792;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_547(P812 s_543, rstr *arr_544, rstr *w_545, rt_int n_546) {
  struct f_user_wait_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_543 = s_543;
F->arr_544 = arr_544;
F->w_545 = w_545;
F->n_546 = n_546;
F->a_1793 = NULL;
F->a_1793 = (*(P812)rt_nil_check(F->s_543)).a;
F->i_1794 = RT_R_IUNDEF;
F->i_1794 = ((rt_int)0LL);
F->tests_1795 = NULL;
F->tests_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1796 = NULL;
F->revokes_1796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1793 != NULL)) {
F->inv_1797 = NULL;
F->inv_1797 = (*(P812)rt_nil_check(F->a_1793)).a;
while ((F->inv_1797 != NULL)) {
if (f_builtin_wait_537(F->inv_1797)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_535(F->inv_1797, &(*F->arr_544), rt_r_ichk(F->i_1794), 1); b_; }));
} else {
F->st_1798 = NULL;
F->st_1798 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->inv_1797)).line));
F->c_1799 = NULL;
F->qt_1800 = NULL;
F->qname_1801 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1802 = NULL;
F->y_1802 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1801));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_544), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1794))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P812)rt_nil_check(F->st_1798)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->inv_1797)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1800 = f_resolve_subtype_256(F->st_1798, &F->c_1799);
{
F->access_1803 = rt_str_copy(f_storage_447(&F->qname_1801, F->qt_1800));
f_init_storage_310(&F->access_1803, F->qt_1800, F->c_1799);
(*(P822)rt_nil_check(F->y_1802)).t = F->qt_1800;
(*(P822)rt_nil_check(F->y_1802)).c = F->c_1799;
f_bind_450(F->y_1802, &F->access_1803);
f_define_159(F->y_1802, rt_r_ichk((*(P812)rt_nil_check(F->inv_1797)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_542(F->inv_1797, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1801, 1), rt_str(";", 1)); b_; }));
F->tests_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->tests_1795))->all), rt_str("if (", 4)), f_wait_op_542(F->inv_1797, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1801, 0)), rt_str(") { ", 4)), f_wait_op_542(F->inv_1797, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1801, 1)), rt_str("; ", 2)), (*F->w_545)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1794))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->revokes_1796))->all), f_wait_op_542(F->inv_1797, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1801, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1794 = rt_add(rt_r_ichk(F->i_1794), ((rt_int)1LL));
F->inv_1797 = (*(P812)rt_nil_check(F->inv_1797)).next;
}
F->a_1793 = (*(P812)rt_nil_check(F->a_1793)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_545)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P805)rt_nil_check(F->tests_1795))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_545), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_546)), rt_str(", ", 2)), (*F->arr_544)), rt_str("); if (", 7)), (*F->w_545)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_546)), rt_str(", ", 2)), (*F->arr_544)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_545)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_545)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P805)rt_nil_check(F->revokes_1796))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_549(P812 s_548) {
  struct f_st_wait_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_548 = s_548;
F->a_1804 = NULL;
F->a_1804 = (*(P812)rt_nil_check(F->s_548)).a;
F->n_1805 = RT_R_IUNDEF;
F->n_1805 = ((rt_int)0LL);
F->first_1806 = RT_R_EUNDEF;
F->first_1806 = 1;
F->inits_1807 = NULL;
F->inits_1807 = f_new_buffer_24();
F->user_1808 = RT_R_EUNDEF;
F->user_1808 = 0;
F->arr_1809 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1810 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1804 != NULL)) {
F->inv_1811 = NULL;
F->inv_1811 = (*(P812)rt_nil_check(F->a_1804)).a;
F->n_1805 = rt_add(rt_r_ichk(F->n_1805), f_list_len_67((*(P812)rt_nil_check(F->a_1804)).a));
while ((F->inv_1811 != NULL)) {
if ((!f_builtin_wait_537(F->inv_1811))) {
F->user_1808 = 1;
}
F->inv_1811 = (*(P812)rt_nil_check(F->inv_1811)).next;
}
F->a_1804 = (*(P812)rt_nil_check(F->a_1804)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1809), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1805))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1808)) {
f_user_wait_547(F->s_548, &F->arr_1809, &F->w_1810, rt_r_ichk(F->n_1805));
} else {
F->a_1804 = (*(P812)rt_nil_check(F->s_548)).a;
F->n_1805 = ((rt_int)0LL);
while ((F->a_1804 != NULL)) {
F->inv_1812 = NULL;
F->inv_1812 = (*(P812)rt_nil_check(F->a_1804)).a;
while ((F->inv_1812 != NULL)) {
f_put_27(F->inits_1807, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_535(F->inv_1812, &F->arr_1809, rt_r_ichk(F->n_1805), 0); b_; }));
F->n_1805 = rt_add(rt_r_ichk(F->n_1805), ((rt_int)1LL));
F->inv_1812 = (*(P812)rt_nil_check(F->inv_1812)).next;
}
F->a_1804 = (*(P812)rt_nil_check(F->a_1804)).next;
}
f_splice_34(g_code_862, F->inits_1807);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1810), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1805))), rt_str(", ", 2)), F->arr_1809), rt_str(");", 2)); b_; }));
}
F->a_1804 = (*(P812)rt_nil_check(F->s_548)).a;
F->n_1805 = ((rt_int)0LL);
while ((F->a_1804 != NULL)) {
F->conds_1813 = NULL;
F->conds_1813 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1815 = ((rt_int)1LL), hi1816 = f_list_len_67((*(P812)rt_nil_check(F->a_1804)).a);
for (rt_int it1817 = lo1815; it1817 <= hi1816; it1817++) {
F->i_1814 = it1817;
F->conds_1813 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->conds_1813))->all), rt_str(" || ", 4)), F->w_1810), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1805))); b_; }));
F->n_1805 = rt_add(rt_r_ichk(F->n_1805), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1806)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P805)rt_nil_check(F->conds_1813))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P805)rt_nil_check(F->conds_1813))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1806 = 0;
f_gen_body_484((*(P812)rt_nil_check(F->a_1804)).b);
F->a_1804 = (*(P812)rt_nil_check(F->a_1804)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P812 f_call_node_553(rstr *name_550, P812 arg_551, rt_int line_552) {
  struct f_call_node_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_550 = name_550;
F->arg_551 = arg_551;
F->line_552 = line_552;
F->x_1818 = NULL;
F->x_1818 = f_nn_61((((rt_int)10LL)), F->line_552);
F->f_1819 = NULL;
F->f_1819 = f_nn_61((((rt_int)7LL)), F->line_552);
(*(P812)rt_nil_check(F->f_1819)).name = f_mk_3(&(*F->name_550));
(*(P812)rt_nil_check(F->x_1818)).a = F->f_1819;
(*(P812)rt_nil_check(F->x_1818)).b = f_copy_node_667(F->arg_551);
(*(P812)rt_nil_check((*(P812)rt_nil_check(F->x_1818)).b)).next = NULL;
F->result_ = F->x_1818;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_555(P812 s_554) {
  struct f_user_region_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_554 = s_554;
F->t_1820 = NULL;
F->f_1821 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1822 = rt_str_copy(f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P812)rt_nil_check(F->s_554)).a, rt_r_ichk((*(P812)rt_nil_check(F->s_554)).line)), 1, &F->t_1820));
F->unlock_1823 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_776(f_call_node_553(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P812)rt_nil_check(F->s_554)).a, rt_r_ichk((*(P812)rt_nil_check(F->s_554)).line)), 1, &F->t_1820)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1822), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1821), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1821), rt_str(")) {", 4)); b_; }));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1821), rt_str("); ", 3)), F->unlock_1823); b_; }));
f_gen_body_484((*(P812)rt_nil_check(F->s_554)).b);
f_pop_cleanup_489();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1821), rt_str("); ", 3)), F->unlock_1823); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1821), rt_str("); ", 3)), F->unlock_1823), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_557(P812 s_556) {
  struct f_st_region_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_556 = s_556;
F->lv_1824 = NULL;
F->t_1825 = NULL;
F->c_1826 = NULL;
F->ro_1827 = RT_R_EUNDEF;
F->lk_1828 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1829 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_615((*(P812)rt_nil_check(F->s_556)).a, &F->lv_1824, &F->t_1825, &F->c_1826, &F->ro_1827);
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_1825)).kind) != (((rt_int)13LL)))) {
f_user_region_555(F->s_556);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1828), rt_str(" = &", 4)), (((P805)rt_nil_check(F->lv_1824))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1828), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1829), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1829), rt_str(")) {", 4)); b_; }));
f_push_cleanup_488(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1829), rt_str("); rt_region_leave(", 19)), F->lk_1828), rt_str(");", 2)); b_; }));
f_gen_body_484((*(P812)rt_nil_check(F->s_556)).b);
f_pop_cleanup_489();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1829), rt_str("); rt_region_leave(", 19)), F->lk_1828), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1829), rt_str("); rt_region_leave(", 19)), F->lk_1828), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P812 f_gparam_560(P812 g_558, rstr *name_559) {
  struct f_gparam_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_558 = g_558;
F->name_559 = name_559;
F->p_1830 = NULL;
F->p_1830 = (*(P812)rt_nil_check(F->g_558)).a;
while ((F->p_1830 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1830)).name))->all), (*F->name_559))) {
F->result_ = F->p_1830;
goto ret_;
}
F->p_1830 = (*(P812)rt_nil_check(F->p_1830)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_bind_sym_562(P812 p_561) {
  struct f_bind_sym_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_561 = p_561;
F->y_1831 = NULL;
if ((rt_r_ichk((*(P812)rt_nil_check(F->p_561)).ival) <= ((rt_int)2LL))) {
F->y_1831 = f_new_sym_172((((rt_int)5LL)), (*(P812)rt_nil_check(F->p_561)).name);
} else {
F->y_1831 = f_new_sym_172((((rt_int)2LL)), (*(P812)rt_nil_check(F->p_561)).name);
}
F->result_ = F->y_1831;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_565(P822 a_563, P822 b_564) {
  struct f_same_binds_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_563 = a_563;
F->b_564 = b_564;
F->x_1832 = NULL;
F->x_1832 = F->a_563;
F->y_1833 = NULL;
F->y_1833 = F->b_564;
while (((F->x_1832 != NULL) && (F->y_1833 != NULL))) {
if (((!rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->x_1832)).name))->all), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_1833)).name))->all))) || (!f_same_binding_568(F->x_1832, F->y_1833)))) {
F->result_ = 0;
goto ret_;
}
F->x_1832 = (*(P822)rt_nil_check(F->x_1832)).mnext;
F->y_1833 = (*(P822)rt_nil_check(F->y_1833)).mnext;
}
F->result_ = ((F->x_1832 == NULL) && (F->y_1833 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_568(P822 a_566, P822 b_567) {
  struct f_same_binding_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_566 = a_566;
F->b_567 = b_567;
if ((rt_r_ichk((*(P822)rt_nil_check(F->a_566)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P822)rt_nil_check(F->b_567)).kind) == (((rt_int)5LL))) && f_same_212((*(P822)rt_nil_check(F->a_566)).t, (*(P822)rt_nil_check(F->b_567)).t));
goto ret_;
}
if (((rt_r_ichk((*(P822)rt_nil_check(F->a_566)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P822)rt_nil_check(F->a_566)).hasmv))) {
F->result_ = (rt_r_echk((*(P822)rt_nil_check(F->b_567)).hasmv) && (rt_r_ichk((*(P822)rt_nil_check(F->a_566)).mvalue) == rt_r_ichk((*(P822)rt_nil_check(F->b_567)).mvalue)));
goto ret_;
}
F->result_ = ((((*(P822)rt_nil_check(F->a_566)).cname != NULL) && ((*(P822)rt_nil_check(F->b_567)).cname != NULL)) && rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->a_566)).cname))->all), (((P805)rt_nil_check((*(P822)rt_nil_check(F->b_567)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_tt_binds_573(P812 gd_569, P812 formals_570, P812 actuals_571, rt_int line_572) {
  struct f_tt_binds_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_569 = gd_569;
F->formals_570 = formals_570;
F->actuals_571 = actuals_571;
F->line_572 = line_572;
F->f_1834 = NULL;
F->f_1834 = F->formals_570;
F->a_1835 = NULL;
F->a_1835 = F->actuals_571;
F->binds_1836 = NULL;
F->c_1837 = NULL;
F->at_1838 = NULL;
while (((F->f_1834 != NULL) && (F->a_1835 != NULL))) {
F->p_1839 = NULL;
F->p_1839 = f_gparam_560(F->gd_569, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->f_1834)).name))->all));
F->b_1840 = NULL;
if ((F->p_1839 == NULL)) {
f_fail_23(F->line_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->f_1834)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1840 = f_bind_sym_562(F->p_1839);
if ((rt_r_ichk((*(P812)rt_nil_check(F->p_1839)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->a_1835)).kind) >= (((rt_int)70LL)))) {
(*(P822)rt_nil_check(F->b_1840)).t = f_resolve_subtype_256(F->a_1835, &F->c_1837);
} else {
F->st_1841 = NULL;
F->st_1841 = f_nn_61((((rt_int)80LL)), F->line_572);
(*(P812)rt_nil_check(F->st_1841)).name = (*(P812)rt_nil_check(F->a_1835)).name;
(*(P822)rt_nil_check(F->b_1840)).t = f_resolve_subtype_256(F->st_1841, &F->c_1837);
}
(*(P822)rt_nil_check(F->b_1840)).c = F->c_1837;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->p_1839)).ival) <= ((rt_int)5LL))) {
if (((rt_r_ichk((*(P812)rt_nil_check(F->a_1835)).kind) != (((rt_int)7LL))) || (f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->a_1835)).name))->all)) == NULL))) {
f_fail_23(F->line_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1839)).name))->all)); b_; }));
}
F->b_1840 = f_copy_sym_388(f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->a_1835)).name))->all)));
(*(P822)rt_nil_check(F->b_1840)).name = (*(P812)rt_nil_check(F->p_1839)).name;
} else {
F->ok_1842 = RT_R_EUNDEF;
(*(P822)rt_nil_check(F->b_1840)).t = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1839)).a, &F->c_1837);
(*(P822)rt_nil_check(F->b_1840)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_646(F->a_1835, (*(P822)rt_nil_check(F->b_1840)).t, &F->at_1838); b_; }));
(*(P822)rt_nil_check(F->b_1840)).mvalue = f_manifest_333(F->a_1835, &F->ok_1842);
(*(P822)rt_nil_check(F->b_1840)).hasmv = rt_r_echk(F->ok_1842);
}
(*(P822)rt_nil_check(F->b_1840)).mnext = F->binds_1836;
F->binds_1836 = F->b_1840;
F->f_1834 = (*(P812)rt_nil_check(F->f_1834)).next;
F->a_1835 = (*(P812)rt_nil_check(F->a_1835)).next;
}
F->result_ = F->binds_1836;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_575(P812 st_574) {
  struct f_generic_use_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_574 = st_574;
if ((rt_r_ichk((*(P812)rt_nil_check(F->st_574)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P822)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P812)rt_nil_check(F->st_574)).kind) == (((rt_int)80LL))) && ((*(P812)rt_nil_check(F->st_574)).a != NULL)) && (f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->st_574)).name))->all)) != NULL)) && ((*(P822)rt_nil_check(f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->st_574)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_infer_from_580(P812 gd_576, P812 pat_577, P818 t_578, P822 known_579) {
  struct f_infer_from_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_576 = gd_576;
F->pat_577 = pat_577;
F->t_578 = t_578;
F->known_579 = known_579;
F->binds_1843 = NULL;
F->binds_1843 = F->known_579;
F->e_1844 = NULL;
F->e_1844 = (*(P812)rt_nil_check(F->pat_577)).a;
F->tp_1845 = NULL;
if (((F->t_578 == NULL) || ((*(P818)rt_nil_check(F->t_578)).gen == NULL))) {
F->result_ = F->binds_1843;
goto ret_;
}
F->tp_1845 = (*(P812)rt_nil_check((*(P822)rt_nil_check((*(P818)rt_nil_check(F->t_578)).gen)).decl)).a;
if ((rt_r_ichk((*(P812)rt_nil_check(F->pat_577)).kind) == (((rt_int)78LL)))) {
F->e_1844 = f_copy_node_667((*(P812)rt_nil_check(F->pat_577)).a);
(*(P812)rt_nil_check(F->e_1844)).next = NULL;
}
while (((F->e_1844 != NULL) && (F->tp_1845 != NULL))) {
F->nm_1846 = NULL;
if (((rt_r_ichk((*(P812)rt_nil_check(F->e_1844)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->e_1844)).kind) == (((rt_int)80LL))))) {
F->nm_1846 = (*(P812)rt_nil_check(F->e_1844)).name;
}
if ((((F->nm_1846 != NULL) && (f_gparam_560(F->gd_576, &(((P805)rt_nil_check(F->nm_1846))->all)) != NULL)) && ((*(P812)rt_nil_check(f_gparam_560(F->gd_576, &(((P805)rt_nil_check(F->nm_1846))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1847 = NULL;
F->q_1847 = F->binds_1843;
F->have_1848 = RT_R_EUNDEF;
F->have_1848 = 0;
while ((F->q_1847 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->q_1847)).name))->all), (((P805)rt_nil_check(F->nm_1846))->all))) {
F->have_1848 = 1;
}
F->q_1847 = (*(P822)rt_nil_check(F->q_1847)).mnext;
}
if ((!rt_r_echk(F->have_1848))) {
F->g_1849 = NULL;
F->g_1849 = (*(P818)rt_nil_check(F->t_578)).gbinds;
while ((F->g_1849 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->g_1849)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->tp_1845)).name))->all))) {
F->b_1850 = NULL;
F->b_1850 = f_bind_sym_562(f_gparam_560(F->gd_576, &(((P805)rt_nil_check(F->nm_1846))->all)));
(*(P822)rt_nil_check(F->b_1850)).t = (*(P822)rt_nil_check(F->g_1849)).t;
(*(P822)rt_nil_check(F->b_1850)).c = (*(P822)rt_nil_check(F->g_1849)).c;
(*(P822)rt_nil_check(F->b_1850)).mnext = F->binds_1843;
F->binds_1843 = F->b_1850;
}
F->g_1849 = (*(P822)rt_nil_check(F->g_1849)).mnext;
}
}
}
F->e_1844 = (*(P812)rt_nil_check(F->e_1844)).next;
F->tp_1845 = (*(P812)rt_nil_check(F->tp_1845)).next;
}
F->result_ = F->binds_1843;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_instantiate_type_586(P822 g_581, P812 tt_582, P812 args_583, P814 *c_584, rt_int line_585) {
  struct f_instantiate_type_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_581 = g_581;
F->tt_582 = tt_582;
F->args_583 = args_583;
F->c_584 = c_584;
F->c_584v = *F->c_584;
F->line_585 = line_585;
F->gd_1851 = NULL;
F->gd_1851 = (*(P822)rt_nil_check(F->g_581)).decl;
F->pat_1852 = NULL;
F->pat_1852 = (*(P812)rt_nil_check(F->gd_1851)).b;
F->binds_1853 = NULL;
F->binds_1853 = f_tt_binds_573(F->gd_1851, (*(P812)rt_nil_check(F->pat_1852)).e, F->tt_582, F->line_585);
F->inst_1854 = NULL;
F->inst_1854 = g_all_insts_850;
F->t_1855 = NULL;
F->saved_caps_1856 = NULL;
F->saved_caps_1856 = g_caps_867;
F->saved_env_1857 = NULL;
F->saved_env_1857 = g_genv_849;
F->saved_gdepth_1858 = RT_R_IUNDEF;
F->saved_gdepth_1858 = rt_r_ichk(g_gdepth_881);
F->c_584v = f_new_cons_175();
(*(P814)rt_nil_check(F->c_584v)).args = F->args_583;
while ((F->inst_1854 != NULL)) {
if ((((*(P822)rt_nil_check(F->inst_1854)).decl == F->pat_1852) && f_same_binds_565((*(P822)rt_nil_check(F->inst_1854)).members, F->binds_1853))) {
F->result_ = (*(P822)rt_nil_check(F->inst_1854)).t;
goto ret_;
}
F->inst_1854 = (*(P822)rt_nil_check(F->inst_1854)).insts;
}
f_open_scope_168();
{
F->b_1859 = NULL;
F->b_1859 = F->binds_1853;
while ((F->b_1859 != NULL)) {
f_define_159(F->b_1859, F->line_585);
F->b_1859 = (*(P822)rt_nil_check(F->b_1859)).mnext;
}
}
g_caps_867 = NULL;
g_genv_849 = (*(P822)rt_nil_check(F->g_581)).env;
g_gdepth_881 = rt_r_ichk(g_depth_851);
{
F->y_1860 = NULL;
F->y_1860 = f_new_sym_172((((rt_int)5LL)), (*(P812)rt_nil_check(F->pat_1852)).name);
F->yc_1861 = NULL;
(*(P822)rt_nil_check(F->y_1860)).decl = F->pat_1852;
if ((rt_r_ichk((*(P812)rt_nil_check(F->pat_1852)).kind) == (((rt_int)44LL)))) {
F->t_1855 = f_new_typ_174((((rt_int)8LL)));
(*(P818)rt_nil_check(F->t_1855)).name = (*(P812)rt_nil_check(F->pat_1852)).name;
(*(P818)rt_nil_check(F->t_1855)).decl = F->pat_1852;
(*(P822)rt_nil_check(F->y_1860)).t = F->t_1855;
f_define_159(F->y_1860, F->line_585);
f_finish_ptr_409(F->t_1855);
} else {
f_define_159(F->y_1860, F->line_585);
F->t_1855 = f_new_type_306(F->y_1860, f_nn_61((((rt_int)80LL)), F->line_585), &F->yc_1861);
}
}
g_caps_867 = F->saved_caps_1856;
g_genv_849 = F->saved_env_1857;
g_gdepth_881 = rt_r_ichk(F->saved_gdepth_1858);
(*(P818)rt_nil_check(F->t_1855)).gen = F->g_581;
(*(P818)rt_nil_check(F->t_1855)).gbinds = F->binds_1853;
f_close_scope_169();
{ R823 *cell1862 = rt_alloc(sizeof(R823));
(*cell1862).name = NULL;
(*cell1862).t = NULL;
(*cell1862).c = NULL;
(*cell1862).access = NULL;
(*cell1862).cname = NULL;
(*cell1862).st = NULL;
(*cell1862).decl = NULL;
(*cell1862).params = NULL;
(*cell1862).result = NULL;
(*cell1862).members = NULL;
(*cell1862).mnext = NULL;
(*cell1862).binds = NULL;
(*cell1862).insts = NULL;
(*cell1862).env = NULL;
(*cell1862).chain = NULL;
(*cell1862).stack = NULL;
(*cell1862).owner = NULL;
(*cell1862).gctx = NULL;
(*cell1862).mv = NULL;
(*cell1862).reqs = NULL;
(*cell1862).home = NULL;
F->inst_1854 = cell1862;
}
(*(P822)rt_nil_check(F->inst_1854)).kind = (((rt_int)5LL));
(*(P822)rt_nil_check(F->inst_1854)).name = (*(P822)rt_nil_check(F->g_581)).name;
(*(P822)rt_nil_check(F->inst_1854)).decl = F->pat_1852;
(*(P822)rt_nil_check(F->inst_1854)).t = F->t_1855;
(*(P822)rt_nil_check(F->inst_1854)).members = F->binds_1853;
(*(P822)rt_nil_check(F->inst_1854)).insts = g_all_insts_850;
g_all_insts_850 = F->inst_1854;
F->result_ = F->t_1855;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_584) = F->c_584v;
  RT_FPOP();
  return F->result_;
}

static P822 f_instantiate_591(P822 g_587, P812 tt_588, P812 args_589, rt_int line_590) {
  struct f_instantiate_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_587 = g_587;
F->tt_588 = tt_588;
F->args_589 = args_589;
F->line_590 = line_590;
F->gd_1863 = NULL;
F->gd_1863 = (*(P822)rt_nil_check(F->g_587)).decl;
F->pat_1864 = NULL;
F->pat_1864 = (*(P812)rt_nil_check(F->gd_1863)).b;
F->binds_1865 = NULL;
F->f_1866 = NULL;
F->f_1866 = (*(P812)rt_nil_check(F->pat_1864)).e;
F->a_1867 = NULL;
F->a_1867 = F->tt_588;
F->fp_1868 = NULL;
F->fp_1868 = (*(P812)rt_nil_check(F->pat_1864)).a;
F->inst_1869 = NULL;
F->at_1870 = NULL;
F->c_1871 = NULL;
F->saved_fctx_1872 = NULL;
F->saved_fctx_1872 = g_fctx_866;
F->saved_in_1873 = RT_R_EUNDEF;
F->saved_in_1873 = rt_r_echk(g_in_func_864);
F->saved_level_1874 = RT_R_IUNDEF;
F->saved_level_1874 = rt_r_ichk(g_cur_level_865);
F->saved_sym_1875 = NULL;
F->saved_sym_1875 = g_func_sym_876;
F->saved_code_1876 = NULL;
F->saved_code_1876 = g_code_862;
F->saved_env_1877 = NULL;
F->saved_env_1877 = g_genv_849;
F->saved_gdepth_1878 = RT_R_IUNDEF;
F->saved_gdepth_1878 = rt_r_ichk(g_gdepth_881);
F->binds_1865 = f_tt_binds_573(F->gd_1863, F->f_1866, F->a_1867, F->line_590);
F->a_1867 = F->args_589;
while (((F->fp_1868 != NULL) && (F->a_1867 != NULL))) {
if (f_generic_use_575((*(P812)rt_nil_check(F->fp_1868)).a)) {
F->v_1879 = rt_str_copy(f_gexpr_646(F->a_1867, NULL, &F->at_1870));
F->binds_1865 = f_infer_from_580(F->gd_1863, (*(P812)rt_nil_check(F->fp_1868)).a, F->at_1870, F->binds_1865);
} else if ((((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->fp_1868)).a)).kind) == (((rt_int)80LL))) && (f_gparam_560(F->gd_1863, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->fp_1868)).a)).name))->all)) != NULL)) && ((*(P812)rt_nil_check(f_gparam_560(F->gd_1863, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->fp_1868)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1880 = RT_R_EUNDEF;
F->known_1880 = 0;
F->q_1881 = NULL;
F->q_1881 = F->binds_1865;
while ((F->q_1881 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->q_1881)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->fp_1868)).a)).name))->all))) {
F->known_1880 = 1;
}
F->q_1881 = (*(P822)rt_nil_check(F->q_1881)).mnext;
}
if ((!rt_r_echk(F->known_1880))) {
F->b_1882 = NULL;
F->b_1882 = f_bind_sym_562(f_gparam_560(F->gd_1863, &(((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->fp_1868)).a)).name))->all)));
F->v_1883 = rt_str_copy(f_gexpr_646(F->a_1867, NULL, &F->at_1870));
(*(P822)rt_nil_check(F->b_1882)).t = F->at_1870;
(*(P822)rt_nil_check(F->b_1882)).c = g_no_cons_904;
(*(P822)rt_nil_check(F->b_1882)).mnext = F->binds_1865;
F->binds_1865 = F->b_1882;
}
}
F->fp_1868 = (*(P812)rt_nil_check(F->fp_1868)).next;
F->a_1867 = (*(P812)rt_nil_check(F->a_1867)).next;
}
F->inst_1869 = g_all_insts_850;
while ((F->inst_1869 != NULL)) {
if ((((*(P822)rt_nil_check(F->inst_1869)).decl == F->pat_1864) && f_same_binds_565((*(P822)rt_nil_check(F->inst_1869)).members, F->binds_1865))) {
F->result_ = F->inst_1869;
goto ret_;
}
F->inst_1869 = (*(P822)rt_nil_check(F->inst_1869)).insts;
}
g_fctx_866 = (*(P822)rt_nil_check(F->g_587)).gctx;
g_in_func_864 = (rt_r_ichk((*(P822)rt_nil_check(F->g_587)).level) > ((rt_int)0LL));
g_cur_level_865 = rt_r_ichk((*(P822)rt_nil_check(F->g_587)).level);
g_func_sym_876 = (*(P822)rt_nil_check(F->g_587)).owner;
g_code_862 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_881 = rt_r_ichk(g_depth_851);
{
F->b_1884 = NULL;
F->b_1884 = F->binds_1865;
while ((F->b_1884 != NULL)) {
f_define_159(F->b_1884, F->line_590);
F->b_1884 = (*(P822)rt_nil_check(F->b_1884)).mnext;
}
}
g_genv_849 = (*(P822)rt_nil_check(F->g_587)).env;
F->inst_1869 = f_build_subprogram_433(F->pat_1864);
(*(P822)rt_nil_check(F->inst_1869)).members = F->binds_1865;
(*(P822)rt_nil_check(F->inst_1869)).insts = g_all_insts_850;
g_all_insts_850 = F->inst_1869;
f_define_159(F->inst_1869, F->line_590);
f_gen_subprogram_463(F->pat_1864, F->inst_1869);
f_close_scope_169();
g_fctx_866 = F->saved_fctx_1872;
g_in_func_864 = rt_r_echk(F->saved_in_1873);
g_cur_level_865 = rt_r_ichk(F->saved_level_1874);
g_func_sym_876 = F->saved_sym_1875;
g_code_862 = F->saved_code_1876;
g_genv_849 = F->saved_env_1877;
g_gdepth_881 = rt_r_ichk(F->saved_gdepth_1878);
F->result_ = F->inst_1869;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_593(P822 y_592) {
  struct f_access_of_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_592 = y_592;
F->p_1885 = NULL;
F->p_1885 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_592)).level) <= ((rt_int)0LL))) {
F->result_ = (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_592)).access))->all);
goto ret_;
}
{ rt_int lo1887 = ((rt_int)1LL), hi1888 = rt_sub(rt_r_ichk(g_cur_level_865), rt_r_ichk((*(P822)rt_nil_check(F->y_592)).level));
for (rt_int it1889 = lo1887; it1889 <= hi1888; it1889++) {
F->i_1886 = it1889;
F->p_1885 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->p_1885))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P822)rt_nil_check(F->y_592)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P805)rt_nil_check(F->p_1885))->all)), rt_str("->", 2)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_592)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->p_1885))->all), rt_str("->", 2)), (((P805)rt_nil_check((*(P822)rt_nil_check(F->y_592)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_import_of_596(P812 l_594, rstr *name_595) {
  struct f_import_of_596fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_594 = l_594;
F->name_595 = name_595;
F->p_1890 = NULL;
F->p_1890 = F->l_594;
while ((F->p_1890 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1890)).name))->all), (*F->name_595))) {
F->result_ = F->p_1890;
goto ret_;
}
F->p_1890 = (*(P812)rt_nil_check(F->p_1890)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_599(P822 y_597, rt_int line_598) {
  struct f_check_import_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_597 = y_597;
F->line_598 = line_598;
F->c_1891 = NULL;
F->c_1891 = g_fctx_866;
F->ro_1892 = RT_R_EUNDEF;
F->ro_1892 = 0;
while (((F->c_1891 != NULL) && (rt_r_ichk((*(P822)rt_nil_check(F->y_597)).depth) < rt_r_ichk((*(P829)rt_nil_check(F->c_1891)).depth)))) {
if ((!rt_r_echk((*(P829)rt_nil_check(F->c_1891)).all_imp))) {
F->imp_1893 = NULL;
F->imp_1893 = f_import_of_596((*(P829)rt_nil_check(F->c_1891)).imps, &(((P805)rt_nil_check((*(P822)rt_nil_check(F->y_597)).name))->all));
if ((F->imp_1893 == NULL)) {
f_fail_23(F->line_598, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_597)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P812)rt_nil_check(F->imp_1893)).ival) == ((rt_int)1LL))) {
F->ro_1892 = 1;
}
}
F->c_1891 = (*(P829)rt_nil_check(F->c_1891)).next;
}
F->result_ = rt_r_echk(F->ro_1892);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_601(rstr *s_600) {
  struct f_c_ident_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_600 = s_600;
if (rt_str_eq((*F->s_600), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_600), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_600));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_604(P818 t_602, rstr *p_603) {
  struct f_cell_deref_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_602 = t_602;
F->p_603 = p_603;
if ((((*(P818)rt_nil_check(F->t_602)).decl != NULL) && ((*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_602)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_603)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_603)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_607(rstr *base_605, P818 t_606) {
  struct f_deref_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_605 = base_605;
F->t_606 = t_606;
if ((((*(P818)rt_nil_check(F->t_606)).decl != NULL) && ((*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_606)).decl)).b != NULL))) {
if (f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_605)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->t_606)), rt_str(")rt_nil_check(", 14)), (*F->base_605)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_606)), rt_str(")(", 2)), (*F->base_605)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_606)), rt_str(")rt_nil_check(", 14)), (*F->base_605)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_609(P812 e_608) {
  struct f_is_lvalue_609fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_608 = e_608;
if ((rt_r_ichk((*(P812)rt_nil_check(F->e_608)).kind) == (((rt_int)7LL)))) {
F->y_1894 = NULL;
F->y_1894 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_608)).name))->all));
F->result_ = ((F->y_1894 != NULL) && ((rt_r_ichk((*(P822)rt_nil_check(F->y_1894)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P822)rt_nil_check(F->y_1894)).kind) == (((rt_int)2LL))) && ((*(P822)rt_nil_check(F->y_1894)).mv == NULL)) && (!rt_r_echk((*(P822)rt_nil_check(F->y_1894)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_608)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_609((*(P812)rt_nil_check(F->e_608)).a);
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_608)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_608)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_609((*(P812)rt_nil_check(F->e_608)).a));
goto ret_;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_608)).kind) == (((rt_int)10LL)))) {
if ((((*(P812)rt_nil_check(F->e_608)).b != NULL) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_608)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_609((*(P812)rt_nil_check(F->e_608)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_615(P812 e_610, P805 *code_611, P818 *t_612, P814 *c_613, int *ro_614) {
  struct f_lvalue_615fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_610 = e_610;
F->code_611 = code_611;
F->code_611v = *F->code_611;
F->t_612 = t_612;
F->t_612v = *F->t_612;
F->c_613 = c_613;
F->c_613v = *F->c_613;
F->ro_614 = ro_614;
F->ro_614v = *F->ro_614;
F->base_1895 = NULL;
F->bt_1896 = NULL;
F->bc_1897 = NULL;
if ((rt_r_ichk((*(P812)rt_nil_check(F->e_610)).kind) == (((rt_int)7LL)))) {
F->y_1898 = NULL;
F->y_1898 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_610)).name))->all));
if ((F->y_1898 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_610)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1898)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P822)rt_nil_check(F->y_1898)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_610)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_593(F->y_1898); b_; }));
F->t_612v = (*(P822)rt_nil_check(F->y_1898)).t;
F->c_613v = (*(P822)rt_nil_check(F->y_1898)).c;
F->ro_614v = rt_r_echk((*(P822)rt_nil_check(F->y_1898)).ro_flag);
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1898)).kind) == (((rt_int)1LL))) && f_check_import_599(F->y_1898, rt_r_ichk((*(P812)rt_nil_check(F->e_610)).line)))) {
F->ro_614v = 1;
}
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_610)).kind) == (((rt_int)17LL)))) {
f_lvalue_615((*(P812)rt_nil_check(F->e_610)).a, &F->code_611v, &F->t_612v, &F->c_613v, &F->ro_614v);
} else if (((((rt_r_ichk((*(P812)rt_nil_check(F->e_610)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_610)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_610)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_764((*(P812)rt_nil_check(F->e_610)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_610)).line), &F->t_612v); b_; }));
F->c_613v = g_no_cons_904;
F->ro_614v = 0;
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_610)).kind) == (((rt_int)11LL)))) {
f_lvalue_615((*(P812)rt_nil_check(F->e_610)).a, &F->base_1895, &F->bt_1896, &F->bc_1897, &F->ro_614v);
f_select_on_623(&(((P805)rt_nil_check(F->base_1895))->all), F->bt_1896, F->e_610, &F->ro_614v, &F->code_611v, &F->t_612v, &F->c_613v);
} else if ((rt_r_ichk((*(P812)rt_nil_check(F->e_610)).kind) == (((rt_int)10LL)))) {
f_lvalue_615((*(P812)rt_nil_check(F->e_610)).a, &F->base_1895, &F->bt_1896, &F->bc_1897, &F->ro_614v);
f_index_on_640(&(((P805)rt_nil_check(F->base_1895))->all), F->bt_1896, F->e_610, &F->ro_614v, 1, &F->code_611v, &F->t_612v, &F->c_613v);
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_611) = F->code_611v;  (*F->t_612) = F->t_612v;  (*F->c_613) = F->c_613v;  if (!rt_r_undef_BOOL(F->ro_614v)) (*F->ro_614) = F->ro_614v;
  RT_FPOP();
  return;
}

static void f_select_on_623(rstr *base_616, P818 bt_617, P812 e_618, int *ro_619, P805 *code_620, P818 *t_621, P814 *c_622) {
  struct f_select_on_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_616 = base_616;
F->bt_617 = bt_617;
F->e_618 = e_618;
F->ro_619 = ro_619;
F->code_620 = code_620;
F->code_620v = *F->code_620;
F->t_621 = t_621;
F->t_621v = *F->t_621;
F->c_622 = c_622;
F->c_622v = *F->c_622;
F->c_622v = g_no_cons_904;
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_617)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->bt_617);
(*F->ro_619) = 0;
if (((*(P818)rt_nil_check(F->bt_617)).decl != NULL)) {
F->p_1899 = NULL;
F->p_1899 = (*(P812)rt_nil_check((*(P818)rt_nil_check(F->bt_617)).decl)).b;
while ((F->p_1899 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1899)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))) {
F->pc_1900 = NULL;
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->bt_617)), rt_str(")rt_nil_check(", 14)), (*F->base_616)), rt_str("))->p_", 6)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1899)).name))->all))), rt_str(")", 1)); b_; }));
F->t_621v = f_resolve_subtype_256((*(P812)rt_nil_check(F->p_1899)).a, &F->pc_1900);
(*F->ro_619) = 1;
goto ret_;
}
F->p_1899 = (*(P812)rt_nil_check(F->p_1899)).next;
}
}
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all), rt_str("ALL", 3))) {
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_607(&(*F->base_616), F->bt_617); b_; }));
F->t_621v = (*(P818)rt_nil_check(F->bt_617)).target;
goto ret_;
}
f_select_on_623(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_607(&(*F->base_616), F->bt_617); b_; }), (*(P818)rt_nil_check(F->bt_617)).target, F->e_618, &(*F->ro_619), &F->code_620v, &F->t_621v, &F->c_622v);
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_617)).kind) == (((rt_int)15LL)))) {
F->p_1901 = NULL;
F->p_1901 = (*(P818)rt_nil_check(F->bt_617)).tparams;
if ((!f_opened_296(F->bt_617))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P805)rt_nil_check((*(P818)rt_nil_check(F->bt_617)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P818)rt_nil_check(F->bt_617)).tparams == NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all), rt_str("ALL", 3))) {
F->code_620v = f_mk_3(&(*F->base_616));
F->t_621v = (*(P818)rt_nil_check(F->bt_617)).under;
goto ret_;
}
f_select_on_623(&(*F->base_616), (*(P818)rt_nil_check(F->bt_617)).under, F->e_618, &(*F->ro_619), &F->code_620v, &F->t_621v, &F->c_622v);
goto ret_;
}
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all), rt_str("ALL", 3))) {
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_616), rt_str(".all", 4)); b_; }));
F->t_621v = (*(P818)rt_nil_check(F->bt_617)).under;
goto ret_;
}
while ((F->p_1901 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1901)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))) {
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_616), rt_str(".p_", 3)), f_lower_s_15(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1901)).name))->all))); b_; }));
F->t_621v = f_tparam_type_321(F->bt_617, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1901)).name))->all));
(*F->ro_619) = 1;
goto ret_;
}
F->p_1901 = (*(P812)rt_nil_check(F->p_1901)).next;
}
f_select_on_623(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_616), rt_str(".all", 4)); b_; }), (*(P818)rt_nil_check(F->bt_617)).under, F->e_618, &(*F->ro_619), &F->code_620v, &F->t_621v, &F->c_622v);
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_617)).kind) == (((rt_int)17LL)))) {
F->f_1902 = NULL;
F->f_1902 = (*(P818)rt_nil_check(F->bt_617)).fields;
F->i_1903 = RT_R_IUNDEF;
F->i_1903 = ((rt_int)0LL);
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all), rt_str("TAG", 3))) {
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_616)), rt_str(").tag)", 6)); b_; }));
F->t_621v = (*(P818)rt_nil_check(F->bt_617)).elem;
(*F->ro_619) = 1;
goto ret_;
}
while ((F->f_1902 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1902)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))) {
F->fn_1904 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_616)), rt_str(").u.", 4)), f_field_c_17(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))));
F->c_622v = (*(P820)rt_nil_check(F->f_1902)).c;
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_616)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_1903))), rt_str(" \? &", 4)), F->fn_1904), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1904), rt_str(")))", 3)); b_; }));
F->t_621v = (*(P820)rt_nil_check(F->f_1902)).t;
goto ret_;
}
F->i_1903 = rt_add(rt_r_ichk(F->i_1903), ((rt_int)1LL));
F->f_1902 = (*(P820)rt_nil_check(F->f_1902)).next;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_617)).kind) == (((rt_int)7LL)))) {
F->f_1905 = NULL;
F->f_1905 = (*(P818)rt_nil_check(F->bt_617)).fields;
while ((F->f_1905 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1905)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))) {
F->c_622v = (*(P820)rt_nil_check(F->f_1905)).c;
F->code_620v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_616), rt_str(".", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all))); b_; }));
F->t_621v = (*(P820)rt_nil_check(F->f_1905)).t;
goto ret_;
}
F->f_1905 = (*(P820)rt_nil_check(F->f_1905)).next;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_618)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_620) = F->code_620v;  (*F->t_621) = F->t_621v;  (*F->c_622) = F->c_622v;
  RT_FPOP();
  return;
}

static int f_has_call_625(rstr *s_624) {
  struct f_has_call_625fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_624 = s_624;
{ rt_int lo1907 = ((rt_int)1LL), hi1908 = ((rt_int)(((*F->s_624)).len));
for (rt_int it1909 = lo1907; it1909 <= hi1908; it1909++) {
F->i_1906 = it1909;
if ((rt_r_echk(rt_str_get((*F->s_624), F->i_1906)) == 40)) {
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

static void f_need_slice_627(P818 t_626) {
  struct f_need_slice_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_626 = t_626;
F->c_1910 = rt_str_copy(f_ctype_225(F->t_626));
F->n_1911 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1910));
F->l_1912 = NULL;
if (f_seen_name_375(g_mcopies_891, &F->n_1911)) {
goto ret_;
}
{ R817 *cell1913 = rt_alloc(sizeof(R817));
(*cell1913).s = NULL;
(*cell1913).next = NULL;
F->l_1912 = cell1913;
}
(*(P816)rt_nil_check(F->l_1912)).s = f_mk_3(&F->n_1911);
(*(P816)rt_nil_check(F->l_1912)).next = g_mcopies_891;
g_mcopies_891 = F->l_1912;
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1910), rt_str(" ", 1)), F->n_1911), rt_str("(", 1)), F->c_1910), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1910), rt_str(" ", 1)), F->n_1911), rt_str("(", 1)), F->c_1910), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1910), rt_str(" rt_r_acat_", 11)), F->c_1910), rt_str("(", 1)), F->c_1910), rt_str(" a, ", 4)), F->c_1910), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1910), rt_str(" rt_r_acat_", 11)), F->c_1910), rt_str("(", 1)), F->c_1910), rt_str(" a, ", 4)), F->c_1910), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1910), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_364((*(P818)rt_nil_check(F->t_626)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_364((*(P818)rt_nil_check(F->t_626)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_631(rstr *i_628, rstr *lo_629, rstr *hi_630) {
  struct f_ix_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_628 = i_628;
F->lo_629 = lo_629;
F->hi_630 = hi_630;
if (f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_628)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_628)), rt_str(", ", 2)), (*F->lo_629)), rt_str(", ", 2)), (*F->hi_630)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_640(rstr *base_632, P818 bt_633, P812 e_634, int *ro_635, int lv_636, P805 *code_637, P818 *t_638, P814 *c_639) {
  struct f_index_on_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_632 = base_632;
F->bt_633 = bt_633;
F->e_634 = e_634;
F->ro_635 = ro_635;
F->lv_636 = lv_636;
F->code_637 = code_637;
F->code_637v = *F->code_637;
F->t_638 = t_638;
F->t_638v = *F->t_638;
F->c_639 = c_639;
F->c_639v = *F->c_639;
F->a_1914 = NULL;
F->a_1914 = (*(P812)rt_nil_check(F->e_634)).b;
F->it_1915 = NULL;
F->c_639v = g_no_cons_904;
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->bt_633);
(*F->ro_635) = 0;
f_index_on_640(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_607(&(*F->base_632), F->bt_633); b_; }), (*(P818)rt_nil_check(F->bt_633)).target, F->e_634, &(*F->ro_635), F->lv_636, &F->code_637v, &F->t_638v, &F->c_639v);
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_296(F->bt_633))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P805)rt_nil_check((*(P818)rt_nil_check(F->bt_633)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P818)rt_nil_check(F->bt_633)).tparams == NULL)) {
f_index_on_640(&(*F->base_632), (*(P818)rt_nil_check(F->bt_633)).under, F->e_634, &(*F->ro_635), F->lv_636, &F->code_637v, &F->t_638v, &F->c_639v);
} else {
f_index_on_640(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_632), rt_str(".all", 4)); b_; }), (*(P818)rt_nil_check(F->bt_633)).under, F->e_634, &(*F->ro_635), F->lv_636, &F->code_637v, &F->t_638v, &F->c_639v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).kind) == (((rt_int)6LL))) && (F->a_1914 != NULL)) && (rt_r_ichk((*(P812)rt_nil_check(F->a_1914)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).ndim) != ((rt_int)1LL)) || ((*(P812)rt_nil_check(F->a_1914)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1916 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->a_1914)).a, (*(P818)rt_nil_check(F->bt_633)).idx, &F->it_1915));
F->hi_1917 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->a_1914)).b, (*(P818)rt_nil_check(F->bt_633)).idx, &F->it_1915));
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_225(F->bt_633)), rt_str("(", 1)), (*F->base_632)), rt_str(", ", 2)), F->lo_1916), rt_str(", ", 2)), F->hi_1917), rt_str(")", 1)); b_; }));
f_need_slice_627(F->bt_633);
F->t_638v = F->bt_633;
(*F->ro_635) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).kind) == (((rt_int)6LL)))) {
F->off_1918 = NULL;
F->k_1919 = RT_R_IUNDEF;
F->k_1919 = ((rt_int)0LL);
F->b_1920 = NULL;
F->b_1920 = f_mk_3(&(*F->base_632));
F->pre_1921 = NULL;
F->pre_1921 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1914) != rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).ndim))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_636) && f_has_call_625(&(*F->base_632)))) {
F->pre_1921 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->bt_633)), rt_str(" b_ = ", 6)), (*F->base_632)), rt_str("; ", 2)); b_; }));
F->b_1920 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1914 != NULL)) {
F->k_1919 = rt_add(rt_r_ichk(F->k_1919), ((rt_int)1LL));
{
F->i_1922 = rt_str_copy(f_gexpr_646(F->a_1914, f_idx_type_249(F->bt_633, rt_r_ichk(F->k_1919)), &F->it_1915));
F->l_1923 = rt_str_copy(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->b_1920))->all), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_1919))));
F->h_1924 = rt_str_copy(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->b_1920))->all), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_1919))));
f_check_type_223(F->it_1915, f_idx_type_249(F->bt_633, rt_r_ichk(F->k_1919)), rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line));
if ((F->off_1918 == NULL)) {
F->off_1918 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_631(&F->i_1922, &F->l_1923, &F->h_1924)), rt_str(" - ", 3)), F->l_1923), rt_str(")", 1)); b_; }));
} else {
F->off_1918 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->off_1918))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1923), rt_str(", ", 2)), F->h_1924), rt_str(") + ", 4)), f_ix_631(&F->i_1922, &F->l_1923, &F->h_1924)), rt_str(" - ", 3)), F->l_1923), rt_str(")", 1)); b_; }));
}
}
F->a_1914 = (*(P812)rt_nil_check(F->a_1914)).next;
}
if ((((rt_int)(((((P805)rt_nil_check(F->pre_1921))->all)).len)) > ((rt_int)0LL))) {
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->pre_1921))->all), (((P805)rt_nil_check(F->b_1920))->all)), rt_str(".p[", 3)), (((P805)rt_nil_check(F->off_1918))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->b_1920))->all), rt_str(".p[", 3)), (((P805)rt_nil_check(F->off_1918))->all)), rt_str("]", 1)); b_; }));
}
F->t_638v = (*(P818)rt_nil_check(F->bt_633)).elem;
F->c_639v = (*(P818)rt_nil_check(F->bt_633)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1914) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_633)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P812)rt_nil_check(F->a_1914)).kind) == (((rt_int)16LL)))) {
F->lo_1925 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->a_1914)).a, g_ty_int_892, &F->it_1915));
F->hi_1926 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->a_1914)).b, g_ty_int_892, &F->it_1915));
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_632)), rt_str(", ", 2)), F->lo_1925), rt_str(", ", 2)), F->hi_1926), rt_str(")", 1)); b_; }));
F->t_638v = F->bt_633;
(*F->ro_635) = 1;
goto ret_;
}
{
F->i_1927 = rt_str_copy(f_gexpr_646(F->a_1914, g_ty_int_892, &F->it_1915));
F->t_638v = f_str_elem_209(F->bt_633);
F->c_639v = (*(P818)rt_nil_check(F->bt_633)).elemcons;
if (F->lv_636) {
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_632)), rt_str(", ", 2)), F->i_1927), rt_str("))", 2)); b_; }));
} else {
F->code_637v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_632)), rt_str(", ", 2)), F->i_1927), rt_str(")", 1)); b_; }));
(*F->ro_635) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_637) = F->code_637v;  (*F->t_638) = F->t_638v;  (*F->c_639) = F->c_639v;
  RT_FPOP();
  return;
}

static int f_own_attribute_642(P812 e_641) {
  struct f_own_attribute_642fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_641 = e_641;
F->saved_1928 = NULL;
F->saved_1928 = g_code_862;
F->bt_1929 = NULL;
F->ok_1930 = RT_R_EUNDEF;
F->ok_1930 = 0;
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = f_new_buffer_24();
{ rt_frame xf1931;
if (RT_TRY(xf1931)) {
F->base_1933 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_641)).a, NULL, &F->bt_1929));
while (((F->bt_1929 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_1929)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_409(F->bt_1929);
F->bt_1929 = (*(P818)rt_nil_check(F->bt_1929)).target;
}
while ((((F->bt_1929 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_1929)).kind) == (((rt_int)15LL)))) && ((*(P818)rt_nil_check(F->bt_1929)).tparams == NULL))) {
F->bt_1929 = (*(P818)rt_nil_check(F->bt_1929)).under;
}
if (((F->bt_1929 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_1929)).kind) == (((rt_int)15LL))))) {
F->p_1934 = NULL;
F->p_1934 = (*(P818)rt_nil_check(F->bt_1929)).tparams;
while ((F->p_1934 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_1934)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_641)).name))->all))) {
F->ok_1930 = 1;
}
F->p_1934 = (*(P812)rt_nil_check(F->p_1934)).next;
}
F->bt_1929 = (*(P818)rt_nil_check(F->bt_1929)).under;
}
if (((F->bt_1929 != NULL) && ((rt_r_ichk((*(P818)rt_nil_check(F->bt_1929)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->bt_1929)).kind) == (((rt_int)17LL)))))) {
F->f_1935 = NULL;
F->f_1935 = (*(P818)rt_nil_check(F->bt_1929)).fields;
while ((F->f_1935 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_1935)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_641)).name))->all))) {
F->ok_1930 = 1;
}
F->f_1935 = (*(P820)rt_nil_check(F->f_1935)).next;
}
}
RT_POP(xf1931);
} else {
RT_POP(xf1931);
int x1932 = rt_xcur;
if (0 || x1932 == ex_compile_error_1) {
F->ok_1930 = 0;
} else {
rt_raise(x1932);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = F->saved_1928;
F->result_ = rt_r_echk(F->ok_1930);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_646(P812 e_643, P818 want_644, P818 *t_645) {
  struct f_gexpr_646fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_643 = e_643;
F->want_644 = want_644;
F->t_645 = t_645;
F->t_645v = *F->t_645;
F->k_1936 = RT_R_IUNDEF;
F->k_1936 = rt_r_ichk((*(P812)rt_nil_check(F->e_643)).kind);
F->code_1937 = NULL;
F->c_1938 = NULL;
F->ro_1939 = RT_R_EUNDEF;
F->bt_1940 = NULL;
F->ctx_1941 = NULL;
F->ctx_1941 = g_cons_ctx_883;
g_cons_ctx_883 = NULL;
F->t_645v = g_ty_int_892;
if ((rt_r_ichk(F->k_1936) == (((rt_int)1LL)))) {
if (((F->want_644 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_644)).kind) == (((rt_int)3LL))))) {
F->t_645v = g_ty_float_894;
F->result_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)2LL)))) {
F->t_645v = g_ty_float_894;
F->result_ = (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)5LL)))) {
F->t_645v = g_ty_bool_893;
F->result_ = f_itos_7(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_1936) == (((rt_int)3LL))) && (F->want_644 != NULL)) && (rt_r_ichk((*(P818)rt_nil_check(F->want_644)).kind) == (((rt_int)5LL)))) && (!f_same_212(f_str_elem_209(F->want_644), g_ty_ascii_895)))) {
F->r_1942 = NULL;
F->r_1942 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_645v = F->want_644;
{ rt_int lo1944 = ((rt_int)1LL), hi1945 = ((rt_int)(((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)).len));
for (rt_int it1946 = lo1944; it1946 <= hi1945; it1946++) {
F->i_1943 = it1946;
F->pos_1947 = RT_R_IUNDEF;
F->pos_1947 = f_lit_index_253((*(P818)rt_nil_check(f_base_of_214(f_str_elem_209(F->want_644)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_656(rt_r_echk(rt_str_get((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), F->i_1943))); b_; }));
if ((rt_r_ichk(F->pos_1947) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_656(rt_r_echk(rt_str_get((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), F->i_1943)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_1942 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_1942))->all), rt_str("\\", 1)), f_octal_658(rt_r_ichk(F->pos_1947))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P805)rt_nil_check(F->r_1942))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)3LL)))) {
F->t_645v = g_ty_string_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_671(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)6LL)))) {
F->t_645v = g_ty_nil_899;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)4LL)))) {
if (((F->want_644 != NULL) && ((*(P818)rt_nil_check(f_base_of_214(F->want_644))).kind == (((rt_int)4LL))))) {
F->t_645v = F->want_644;
} else {
F->t_645v = f_enum_type_of_674(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
}
{
F->i_1948 = RT_R_IUNDEF;
F->i_1948 = f_lit_index_253((*(P818)rt_nil_check(f_base_of_214(F->t_645v))).lits, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all));
if ((rt_r_ichk(F->i_1948) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_1948));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)17LL)))) {
g_cons_ctx_883 = F->ctx_1941;
F->result_ = f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, F->want_644, &F->t_645v);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)7LL)))) {
F->y_1949 = NULL;
F->y_1949 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all));
if ((F->y_1949 == NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("ME", 2))) {
F->t_645v = g_ty_act_902;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_645v = g_ty_act_902;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_776(f_wrap_apply_669(F->e_643), 0, &F->t_645v);
goto ret_;
}
if (((((((((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_776(f_wrap_apply_669(F->e_643), 0, &F->t_645v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_1949)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1949)).kind) == (((rt_int)2LL))))) {
F->ro_1950 = RT_R_EUNDEF;
F->t_645v = (*(P822)rt_nil_check(F->y_1949)).t;
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_1949)).kind) == (((rt_int)1LL)))) {
F->ro_1950 = f_check_import_599(F->y_1949, rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
F->result_ = f_init_chk_330((*(P822)rt_nil_check(F->y_1949)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_593(F->y_1949); b_; }));
goto ret_;
}
F->result_ = f_access_of_593(F->y_1949);
goto ret_;
}
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_1949)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_776(f_wrap_apply_669(F->e_643), 0, &F->t_645v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_1936) == (((rt_int)8LL))) && (f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all)) != NULL)) && (f_user_op_772(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), f_copy_node_667((*(P812)rt_nil_check(F->e_643)).a)) != NULL))) {
F->call_1951 = NULL;
F->call_1951 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
F->fname_1952 = NULL;
F->fname_1952 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
(*(P812)rt_nil_check(F->fname_1952)).name = (*(P812)rt_nil_check(F->e_643)).name;
(*(P812)rt_nil_check(F->call_1951)).a = F->fname_1952;
(*(P812)rt_nil_check(F->call_1951)).b = f_copy_node_667((*(P812)rt_nil_check(F->e_643)).a);
F->result_ = f_gcall_776(F->call_1951, 0, &F->t_645v);
goto ret_;
} else if (((((rt_r_ichk(F->k_1936) == (((rt_int)8LL))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("NOT", 3))) && (F->want_644 != NULL)) && (rt_r_ichk((*(P818)rt_nil_check(F->want_644)).kind) == (((rt_int)16LL))))) {
F->a_1953 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, F->want_644, &F->t_645v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_1953), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)8LL)))) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("NOT", 3))) {
F->a_1954 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, g_ty_bool_893, &F->t_645v));
f_check_type_223(F->t_645v, g_ty_bool_893, rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1954), rt_str(")", 1));
goto ret_;
}
{
F->a_1955 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, F->want_644, &F->t_645v));
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1955;
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->t_645v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1955), rt_str(")", 1));
goto ret_;
}
f_check_type_223(F->t_645v, g_ty_int_892, rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1955), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_696(F->e_643, F->want_644, &F->t_645v);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_643)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_643)).a)).kind) == (((rt_int)12LL))))) {
F->nm_1956 = NULL;
F->nm_1956 = (*(P812)rt_nil_check(F->e_643)).a;
F->y_1957 = NULL;
if ((rt_r_ichk((*(P812)rt_nil_check(F->nm_1956)).kind) == (((rt_int)12LL)))) {
F->nm_1956 = (*(P812)rt_nil_check(F->nm_1956)).a;
}
F->y_1957 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->nm_1956)).name))->all));
if (((((F->y_1957 == NULL) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1957)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1957)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1957)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_776(F->e_643, 0, &F->t_645v);
goto ret_;
}
}
{
F->base_1958 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, NULL, &F->bt_1940));
F->ro_1939 = 1;
f_index_on_640(&F->base_1958, F->bt_1940, F->e_643, &F->ro_1939, 0, &F->code_1937, &F->t_645v, &F->c_1938);
if ((((!f_is_lvalue_609(F->e_643)) || (rt_r_ichk((*(P818)rt_nil_check(F->t_645v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->t_645v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P805)rt_nil_check(F->code_1937))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_645v, &(((P805)rt_nil_check(F->code_1937))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_642(F->e_643)))) {
F->result_ = f_attribute_679(F->e_643, &F->t_645v);
goto ret_;
} else if (((f_as_subtype_285((*(P812)rt_nil_check(F->e_643)).a) != NULL) || f_ptr_attribute_676(F->e_643))) {
F->result_ = f_attribute_679(F->e_643, &F->t_645v);
goto ret_;
}
{
F->base_1959 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_643)).a, NULL, &F->bt_1940));
F->ro_1939 = 1;
f_select_on_623(&F->base_1959, F->bt_1940, F->e_643, &F->ro_1939, &F->code_1937, &F->t_645v, &F->c_1938);
if ((rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_643)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_609(F->e_643)))) {
F->result_ = (((P805)rt_nil_check(F->code_1937))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_645v, &(((P805)rt_nil_check(F->code_1937))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)12LL)))) {
F->result_ = f_gcall_776(f_wrap_apply_669(F->e_643), 0, &F->t_645v);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)14LL)))) {
F->result_ = f_constructor_701(F->e_643, F->want_644, F->ctx_1941, &F->t_645v);
goto ret_;
} else if ((rt_r_ichk(F->k_1936) == (((rt_int)13LL)))) {
F->result_ = f_resolved_649(F->e_643, &F->t_645v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_643)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_645) = F->t_645v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_649(P812 e_647, P818 *t_648) {
  struct f_resolved_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_647 = e_647;
F->t_648 = t_648;
F->t_648v = *F->t_648;
F->c_1960 = NULL;
F->vt_1961 = NULL;
F->y_1962 = NULL;
F->y_1962 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1963 = NULL;
F->tt_1963 = f_copy_node_667((*(P812)rt_nil_check(F->e_647)).b);
(*(P812)rt_nil_check(F->tt_1963)).next = NULL;
if (((F->y_1962 != NULL) && ((rt_r_ichk((*(P822)rt_nil_check(F->y_1962)).kind) == (((rt_int)10LL))) || (f_resolve_overload_750(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1963, f_copy_node_667((*(P812)rt_nil_check(F->e_647)).a), 0, rt_r_ichk((*(P812)rt_nil_check(F->e_647)).line)) != NULL)))) {
F->call_1964 = NULL;
F->call_1964 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_647)).line));
F->f_1965 = NULL;
F->f_1965 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_647)).line));
F->fname_1966 = NULL;
F->fname_1966 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_647)).line));
(*(P812)rt_nil_check(F->fname_1966)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P812)rt_nil_check(F->f_1965)).a = F->fname_1966;
(*(P812)rt_nil_check(F->f_1965)).b = F->tt_1963;
(*(P812)rt_nil_check(F->call_1964)).a = F->f_1965;
(*(P812)rt_nil_check(F->call_1964)).b = f_copy_node_667((*(P812)rt_nil_check(F->e_647)).a);
(*(P812)rt_nil_check((*(P812)rt_nil_check(F->call_1964)).b)).next = NULL;
F->result_ = f_gcall_776(F->call_1964, 0, &F->t_648v);
goto ret_;
}
F->t_648v = f_resolve_subtype_256((*(P812)rt_nil_check(F->e_647)).b, &F->c_1960);
{
F->v_1967 = rt_str_copy(f_gexpr_in_654((*(P812)rt_nil_check(F->e_647)).a, F->t_648v, F->c_1960, &F->vt_1961));
f_check_type_223(F->vt_1961, F->t_648v, rt_r_ichk((*(P812)rt_nil_check(F->e_647)).line));
F->result_ = f_checked_204(F->t_648v, F->c_1960, &F->v_1967);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_648) = F->t_648v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_654(P812 e_650, P818 want_651, P814 c_652, P818 *t_653) {
  struct f_gexpr_in_654fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_650 = e_650;
F->want_651 = want_651;
F->c_652 = c_652;
F->t_653 = t_653;
F->t_653v = *F->t_653;
g_cons_ctx_883 = F->c_652;
F->result_ = f_gexpr_646(F->e_650, F->want_651, &F->t_653v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_653) = F->t_653v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_656(int ch_655) {
  struct f_ascii_lit_656fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_655 = ch_655;
F->l_1968 = NULL;
F->l_1968 = (*(P818)rt_nil_check(g_ty_ascii_895)).lits;
{ rt_int lo1970 = ((rt_int)1LL), hi1971 = rt_sub(((rt_int)(F->ch_655) + 1), ((rt_int)1LL));
for (rt_int it1972 = lo1970; it1972 <= hi1971; it1972++) {
F->i_1969 = it1972;
F->l_1968 = (*(P812)rt_nil_check(F->l_1968)).next;
}
}
F->result_ = (((P805)rt_nil_check((*(P812)rt_nil_check(F->l_1968)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_658(rt_int n_657) {
  struct f_octal_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_657 = n_657;
F->r_1973 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_1973, rt_str("000", 3));
(*rt_str_at(&F->r_1973, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_657, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1973, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_657, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1973, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_657, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_1973;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_str_cat_part_660(P818 t_659) {
  struct f_str_cat_part_660fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_659 = t_659;
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_659)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_209(F->t_659);
goto ret_;
}
F->result_ = F->t_659;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_peek_type_662(P812 e_661) {
  struct f_peek_type_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_661 = e_661;
F->saved_1974 = NULL;
F->saved_1974 = g_code_862;
F->t_1975 = NULL;
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = f_new_buffer_24();
{ rt_frame xf1976;
if (RT_TRY(xf1976)) {
F->v_1978 = rt_str_copy(f_gexpr_646(F->e_661, NULL, &F->t_1975));
RT_POP(xf1976);
} else {
RT_POP(xf1976);
int x1977 = rt_xcur;
if (0 || x1977 == ex_compile_error_1) {
F->t_1975 = NULL;
} else {
rt_raise(x1977);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = F->saved_1974;
F->result_ = F->t_1975;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_set_operands_665(P812 e_663, P818 want_664) {
  struct f_set_operands_665fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_663 = e_663;
F->want_664 = want_664;
F->t_1979 = NULL;
if (((F->want_664 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_664)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_664;
goto ret_;
} else if ((F->want_664 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_663)).a)).kind) != (((rt_int)14LL)))) {
F->t_1979 = f_peek_type_662((*(P812)rt_nil_check(F->e_663)).a);
} else if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_663)).b)).kind) != (((rt_int)14LL)))) {
F->t_1979 = f_peek_type_662((*(P812)rt_nil_check(F->e_663)).b);
}
if (((F->t_1979 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->t_1979)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_1979;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_copy_node_667(P812 e_666) {
  struct f_copy_node_667fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_666 = e_666;
F->x_1980 = NULL;
{ R813 *cell1981 = rt_alloc(sizeof(R813));
(*cell1981).name = NULL;
(*cell1981).tag = NULL;
(*cell1981).prags = NULL;
(*cell1981).labels = NULL;
(*cell1981).a = NULL;
(*cell1981).b = NULL;
(*cell1981).c = NULL;
(*cell1981).d = NULL;
(*cell1981).e = NULL;
(*cell1981).next = NULL;
F->x_1980 = cell1981;
}
(*(P812)rt_nil_check(F->x_1980)).kind = rt_r_ichk((*(P812)rt_nil_check(F->e_666)).kind);
(*(P812)rt_nil_check(F->x_1980)).line = rt_r_ichk((*(P812)rt_nil_check(F->e_666)).line);
(*(P812)rt_nil_check(F->x_1980)).ival = rt_r_ichk((*(P812)rt_nil_check(F->e_666)).ival);
(*(P812)rt_nil_check(F->x_1980)).flag = rt_r_ichk((*(P812)rt_nil_check(F->e_666)).flag);
(*(P812)rt_nil_check(F->x_1980)).name = (*(P812)rt_nil_check(F->e_666)).name;
(*(P812)rt_nil_check(F->x_1980)).tag = (*(P812)rt_nil_check(F->e_666)).tag;
(*(P812)rt_nil_check(F->x_1980)).a = (*(P812)rt_nil_check(F->e_666)).a;
(*(P812)rt_nil_check(F->x_1980)).b = (*(P812)rt_nil_check(F->e_666)).b;
(*(P812)rt_nil_check(F->x_1980)).c = (*(P812)rt_nil_check(F->e_666)).c;
(*(P812)rt_nil_check(F->x_1980)).d = (*(P812)rt_nil_check(F->e_666)).d;
F->result_ = F->x_1980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P812 f_wrap_apply_669(P812 e_668) {
  struct f_wrap_apply_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_668 = e_668;
F->x_1982 = NULL;
F->x_1982 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_668)).line));
(*(P812)rt_nil_check(F->x_1982)).a = F->e_668;
F->result_ = F->x_1982;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_671(rstr *s_670) {
  struct f_c_string_671fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_670 = s_670;
F->n_1983 = RT_R_IUNDEF;
F->n_1983 = ((rt_int)0LL);
{ rt_int lo1985 = ((rt_int)1LL), hi1986 = ((rt_int)(((*F->s_670)).len));
for (rt_int it1987 = lo1985; it1987 <= hi1986; it1987++) {
F->i_1984 = it1987;
if (((rt_r_echk(rt_str_get((*F->s_670), F->i_1984)) == 92) || (rt_r_echk(rt_str_get((*F->s_670), F->i_1984)) == 63))) {
F->n_1983 = rt_add(rt_r_ichk(F->n_1983), ((rt_int)1LL));
}
}
}
{
F->r_1988 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_670)).len)), rt_r_ichk(F->n_1983)), ((rt_int)2LL)));
F->j_1989 = RT_R_IUNDEF;
F->j_1989 = ((rt_int)1LL);
(*rt_str_at(&F->r_1988, ((rt_int)1LL))) = 34;
{ rt_int lo1991 = ((rt_int)1LL), hi1992 = ((rt_int)(((*F->s_670)).len));
for (rt_int it1993 = lo1991; it1993 <= hi1992; it1993++) {
F->i_1990 = it1993;
F->j_1989 = rt_add(rt_r_ichk(F->j_1989), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_670), F->i_1990)) == 92) || (rt_r_echk(rt_str_get((*F->s_670), F->i_1990)) == 63))) {
(*rt_str_at(&F->r_1988, rt_r_ichk(F->j_1989))) = 92;
F->j_1989 = rt_add(rt_r_ichk(F->j_1989), ((rt_int)1LL));
}
(*rt_str_at(&F->r_1988, rt_r_ichk(F->j_1989))) = rt_r_echk(rt_str_get((*F->s_670), F->i_1990));
}
}
(*rt_str_at(&F->r_1988, rt_add(rt_r_ichk(F->j_1989), ((rt_int)1LL)))) = 34;
F->result_ = F->r_1988;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P818 f_enum_type_of_674(rstr *lit_672, rt_int line_673) {
  struct f_enum_type_of_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_672 = lit_672;
F->line_673 = line_673;
F->y_1994 = NULL;
F->y_1994 = g_scope_stack_852;
F->c_1995 = NULL;
if ((f_lit_index_253((*(P818)rt_nil_check(g_ty_ascii_895)).lits, &(*F->lit_672)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_895;
goto ret_;
}
while ((F->y_1994 != NULL)) {
if (((((rt_r_ichk((*(P822)rt_nil_check(F->y_1994)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_1994)).kind) == (((rt_int)5LL)))) && ((*(P822)rt_nil_check(F->y_1994)).st != NULL)) && (rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1994)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_253((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_1994)).st)).a, &(*F->lit_672)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_1994)).kind) == (((rt_int)5LL)))) {
F->st_1996 = NULL;
F->st_1996 = f_nn_61((((rt_int)80LL)), F->line_673);
(*(P812)rt_nil_check(F->st_1996)).name = (*(P822)rt_nil_check(F->y_1994)).name;
F->result_ = f_resolve_subtype_256(F->st_1996, &F->c_1995);
goto ret_;
}
F->result_ = f_resolve_subtype_256((*(P822)rt_nil_check(F->y_1994)).st, &F->c_1995);
goto ret_;
}
}
F->y_1994 = (*(P822)rt_nil_check(F->y_1994)).stack;
}
f_fail_23(F->line_673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_672)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_676(P812 e_675) {
  struct f_ptr_attribute_676fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_675 = e_675;
F->lv_1997 = NULL;
F->t_1998 = NULL;
F->c_1999 = NULL;
F->ro_2000 = RT_R_EUNDEF;
F->p_2001 = NULL;
F->saved_2002 = NULL;
F->saved_2002 = g_code_862;
if ((!f_is_lvalue_609((*(P812)rt_nil_check(F->e_675)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_862 = f_new_buffer_24();
f_lvalue_615((*(P812)rt_nil_check(F->e_675)).a, &F->lv_1997, &F->t_1998, &F->c_1999, &F->ro_2000);
g_code_862 = F->saved_2002;
if (((rt_r_ichk((*(P818)rt_nil_check(F->t_1998)).kind) != (((rt_int)8LL))) || ((*(P818)rt_nil_check(F->t_1998)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2001 = (*(P812)rt_nil_check((*(P818)rt_nil_check(F->t_1998)).decl)).d;
while ((F->p_2001 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_2001)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_675)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2001 = (*(P812)rt_nil_check(F->p_2001)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_679(P812 e_677, P818 *t_678) {
  struct f_attribute_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_677 = e_677;
F->t_678 = t_678;
F->t_678v = *F->t_678;
F->bt_2003 = NULL;
F->c_2004 = NULL;
F->base_2005 = NULL;
F->sub_2006 = NULL;
F->sub_2006 = f_as_subtype_285((*(P812)rt_nil_check(F->e_677)).a);
F->name_2007 = rt_str_copy((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_677)).name))->all));
if ((F->sub_2006 != NULL)) {
F->bt_2003 = f_resolve_subtype_256(F->sub_2006, &F->c_2004);
} else {
F->bt_2003 = f_value_subtype_278((*(P812)rt_nil_check(F->e_677)).a, &F->c_2004, &F->base_2005);
}
if (((((rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)8LL))) && (F->c_2004 != NULL)) && ((*(P814)rt_nil_check(F->c_2004)).args != NULL)) && ((*(P818)rt_nil_check(F->bt_2003)).decl != NULL))) {
F->p_2008 = NULL;
F->p_2008 = (*(P812)rt_nil_check((*(P818)rt_nil_check(F->bt_2003)).decl)).d;
F->a_2009 = NULL;
F->a_2009 = (*(P814)rt_nil_check(F->c_2004)).args;
while (((F->p_2008 != NULL) && (F->a_2009 != NULL))) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_2008)).name))->all), F->name_2007)) {
F->pc_2010 = NULL;
F->v_2011 = rt_str_copy(f_gexpr_646(F->a_2009, f_resolve_subtype_256((*(P812)rt_nil_check(F->p_2008)).a, &F->pc_2010), &F->t_678v));
F->result_ = F->v_2011;
goto ret_;
}
F->p_2008 = (*(P812)rt_nil_check(F->p_2008)).next;
F->a_2009 = (*(P812)rt_nil_check(F->a_2009)).next;
}
}
while (((rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)8LL))) && (F->base_2005 != NULL))) {
f_finish_ptr_409(F->bt_2003);
F->base_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_607(&(((P805)rt_nil_check(F->base_2005))->all), F->bt_2003); b_; }));
F->bt_2003 = (*(P818)rt_nil_check(F->bt_2003)).target;
F->c_2004 = NULL;
if ((rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)5LL)))) {
F->c_2004 = f_new_cons_175();
(*(P814)rt_nil_check(F->c_2004)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->base_2005))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->bt_2003)).tparams != NULL)) && (F->c_2004 != NULL)) && ((*(P814)rt_nil_check(F->c_2004)).args != NULL))) {
F->p_2012 = NULL;
F->p_2012 = (*(P818)rt_nil_check(F->bt_2003)).tparams;
F->a_2013 = NULL;
F->a_2013 = (*(P814)rt_nil_check(F->c_2004)).args;
while (((F->p_2012 != NULL) && (F->a_2013 != NULL))) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->p_2012)).name))->all), F->name_2007)) {
F->pt_2014 = f_tparam_type_321(F->bt_2003, &F->name_2007);
F->v_2015 = rt_str_copy(f_gexpr_646(F->a_2013, F->pt_2014, &F->t_678v));
F->result_ = F->v_2015;
goto ret_;
}
F->p_2012 = (*(P812)rt_nil_check(F->p_2012)).next;
F->a_2013 = (*(P812)rt_nil_check(F->a_2013)).next;
}
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->bt_2003)).tparams == NULL))) {
F->c_2004 = f_base_cons_217(F->bt_2003, F->c_2004);
F->bt_2003 = f_base_of_214(F->bt_2003);
}
F->t_678v = g_ty_int_892;
if ((rt_str_eq(F->name_2007, rt_str("LEN", 3)) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)5LL))))) {
if (((F->c_2004 != NULL) && ((*(P814)rt_nil_check(F->c_2004)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_2004)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2007, rt_str("LEN", 3)) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)12LL))))) {
if (((F->c_2004 != NULL) && ((*(P814)rt_nil_check(F->c_2004)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_2004)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2007, rt_str("MIN", 3)) || rt_str_eq(F->name_2007, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_2003))) {
F->t_678v = F->bt_2003;
if (rt_str_eq(F->name_2007, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_2003, F->c_2004);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_2003, F->c_2004);
goto ret_;
} else if ((rt_str_eq(F->name_2007, rt_str("PREC", 4)) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)3LL))))) {
if (((F->c_2004 != NULL) && ((*(P814)rt_nil_check(F->c_2004)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_2004)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2007, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2007, rt_str("USE", 3))) && (rt_r_ichk((*(P818)rt_nil_check(F->bt_2003)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_692(F->e_677, F->bt_2003, F->c_2004, F->base_2005, &F->t_678v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2007, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_678) = F->t_678v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_684(P812 sa_680, P812 sb_681, rstr *op_682, rt_int line_683) {
  struct f_subtype_compare_684fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_680 = sa_680;
F->sb_681 = sb_681;
F->op_682 = op_682;
F->line_683 = line_683;
F->ca_2016 = NULL;
F->cb_2017 = NULL;
F->ta_2018 = NULL;
F->ta_2018 = f_resolve_subtype_256(F->sa_680, &F->ca_2016);
F->tb_2019 = NULL;
F->tb_2019 = f_resolve_subtype_256(F->sb_681, &F->cb_2017);
F->r_2020 = NULL;
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2021 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2021, rt_str("1", 1));
F->no_2022 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2022, rt_str("0", 1));
if (rt_str_eq((*F->op_682), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2021, rt_str("0", 1));
rt_str_assign(&F->no_2022, rt_str("1", 1));
}
if ((!f_same_212(F->ta_2018, F->tb_2019))) {
F->result_ = F->no_2022;
goto ret_;
} else if ((((rt_r_ichk((*(P812)rt_nil_check(F->sa_680)).kind) == (((rt_int)80LL))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->sa_680)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P812)rt_nil_check(F->sb_681)).kind) == (((rt_int)80LL))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->sb_681)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2021;
goto ret_;
}
if (f_scalar_kind_177(F->ta_2018)) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_2018, F->ca_2016)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_2019, F->cb_2017)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_2018, F->ca_2016)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_2019, F->cb_2017)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).kind) == (((rt_int)3LL)))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2020))->all), rt_str(" && ", 4)), f_float_prec_686(F->ca_2016)), rt_str(" == ", 4)), f_float_prec_686(F->cb_2017)); b_; }));
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2016 != NULL) && (F->cb_2017 != NULL)) && ((*(P814)rt_nil_check(F->ca_2016)).slen != NULL)) && ((*(P814)rt_nil_check(F->cb_2017)).slen != NULL))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check((*(P814)rt_nil_check(F->ca_2016)).slen))->all)), rt_str(") == (", 6)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->cb_2017)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2016 == NULL) || ((*(P814)rt_nil_check(F->ca_2016)).slen == NULL)) && ((F->cb_2017 == NULL) || ((*(P814)rt_nil_check(F->cb_2017)).slen == NULL))))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2024 = ((rt_int)1LL), hi2025 = rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).ndim);
for (rt_int it2026 = lo2024; it2026 <= hi2025; it2026++) {
F->k_2023 = it2026;
if (((((F->ca_2016 != NULL) && (F->cb_2017 != NULL)) && (f_cons_lo_243(F->ca_2016, F->k_2023) != NULL)) && (f_cons_lo_243(F->cb_2017, F->k_2023) != NULL))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2020))->all), rt_str(" && (", 5)), (((P805)rt_nil_check(f_cons_lo_243(F->ca_2016, F->k_2023)))->all)), rt_str(") == (", 6)), (((P805)rt_nil_check(f_cons_lo_243(F->cb_2017, F->k_2023)))->all)), rt_str(") && (", 6)), (((P805)rt_nil_check(f_cons_hi_246(F->ca_2016, F->k_2023)))->all)), rt_str(") == (", 6)), (((P805)rt_nil_check(f_cons_hi_246(F->cb_2017, F->k_2023)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).kind) == (((rt_int)15LL))) && ((*(P818)rt_nil_check(F->ta_2018)).tparams != NULL)) && (F->ca_2016 != NULL)) && (F->cb_2017 != NULL))) {
F->a_2027 = NULL;
F->a_2027 = (*(P814)rt_nil_check(F->ca_2016)).args;
F->b_2028 = NULL;
F->b_2028 = (*(P814)rt_nil_check(F->cb_2017)).args;
F->at_2029 = NULL;
F->bt2_2030 = NULL;
while (((F->a_2027 != NULL) && (F->b_2028 != NULL))) {
F->x_2031 = rt_str_copy(f_gexpr_646(F->a_2027, NULL, &F->at_2029));
F->y_2032 = rt_str_copy(f_gexpr_646(F->b_2028, F->at_2029, &F->bt2_2030));
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2020))->all), rt_str(" && ", 4)), f_eq_code_368(F->at_2029, &F->x_2031, &F->y_2032)); b_; }));
F->a_2027 = (*(P812)rt_nil_check(F->a_2027)).next;
F->b_2028 = (*(P812)rt_nil_check(F->b_2028)).next;
}
} else if ((((rt_r_ichk((*(P818)rt_nil_check(F->ta_2018)).kind) == (((rt_int)17LL))) && (F->ca_2016 != NULL)) && (F->cb_2017 != NULL))) {
if ((((*(P814)rt_nil_check(F->ca_2016)).lo != NULL) && ((*(P814)rt_nil_check(F->cb_2017)).lo != NULL))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check((*(P814)rt_nil_check(F->ca_2016)).lo))->all)), rt_str(") == (", 6)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->cb_2017)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P814)rt_nil_check(F->ca_2016)).lo != NULL) || ((*(P814)rt_nil_check(F->cb_2017)).lo != NULL))) {
F->r_2020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_682), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P805)rt_nil_check(F->r_2020))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->r_2020))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_686(P814 c_685) {
  struct f_float_prec_686fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_685 = c_685;
if (((F->c_685 != NULL) && ((*(P814)rt_nil_check(F->c_685)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_685)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_692(P812 e_687, P818 bt_688, P814 c_689, P805 base_690, P818 *t_691) {
  struct f_file_attribute_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_687 = e_687;
F->bt_688 = bt_688;
F->c_689 = c_689;
F->base_690 = base_690;
F->t_691 = t_691;
F->t_691v = *F->t_691;
F->t_691v = g_file_mode_type_903;
if ((F->base_690 != NULL)) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_687)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P805)rt_nil_check(F->base_690))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P805)rt_nil_check(F->base_690))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_689 != NULL) && ((*(P814)rt_nil_check(F->c_689)).args != NULL))) {
if (rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_687)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_646((*(P814)rt_nil_check(F->c_689)).args, F->t_691v, &F->t_691v);
goto ret_;
} else if (((*(P812)rt_nil_check((*(P814)rt_nil_check(F->c_689)).args)).next != NULL)) {
F->result_ = f_gexpr_646((*(P812)rt_nil_check((*(P814)rt_nil_check(F->c_689)).args)).next, F->t_691v, &F->t_691v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_687)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P805)rt_nil_check((*(P812)rt_nil_check(F->e_687)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_691) = F->t_691v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_696(P812 e_693, P818 want_694, P818 *t_695) {
  struct f_gbinop_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_693 = e_693;
F->want_694 = want_694;
F->t_695 = t_695;
F->t_695v = *F->t_695;
F->op_2033 = NULL;
F->op_2033 = (*(P812)rt_nil_check(F->e_693)).name;
F->ta_2034 = NULL;
F->tb_2035 = NULL;
F->hint_2036 = NULL;
F->uy_2037 = NULL;
F->t_695v = g_ty_bool_893;
if ((f_lookup_154(&(((P805)rt_nil_check(F->op_2033))->all)) != NULL)) {
F->l_2038 = NULL;
F->r_2039 = NULL;
F->l_2038 = f_copy_node_667((*(P812)rt_nil_check(F->e_693)).a);
F->r_2039 = f_copy_node_667((*(P812)rt_nil_check(F->e_693)).b);
(*(P812)rt_nil_check(F->l_2038)).next = F->r_2039;
F->uy_2037 = f_user_op_772(&(((P805)rt_nil_check(F->op_2033))->all), F->l_2038);
if ((F->uy_2037 != NULL)) {
F->call_2040 = NULL;
F->call_2040 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
F->fname_2041 = NULL;
F->fname_2041 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
(*(P812)rt_nil_check(F->fname_2041)).name = F->op_2033;
(*(P812)rt_nil_check(F->call_2040)).a = F->fname_2041;
(*(P812)rt_nil_check(F->call_2040)).b = F->l_2038;
F->result_ = f_gcall_776(F->call_2040, 0, &F->t_695v);
goto ret_;
}
}
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("IN", 2))) {
F->s_2042 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, NULL, &F->tb_2035));
if ((rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2043 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, (*(P818)rt_nil_check(F->tb_2035)).elem, &F->ta_2034));
f_check_type_223(F->ta_2034, (*(P818)rt_nil_check(F->tb_2035)).elem, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
F->t_695v = g_ty_bool_893;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2043), rt_str(", ", 2)), F->s_2042), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("AND", 3)) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("OR", 2))) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("XOR", 3))) && (f_set_operands_665(F->e_693, F->want_694) != NULL))) {
F->a_2044 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, f_set_operands_665(F->e_693, F->want_694), &F->ta_2034));
F->b_2045 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, F->ta_2034, &F->tb_2035));
f_check_type_223(F->tb_2035, F->ta_2034, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
F->t_695v = F->ta_2034;
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2044), rt_str(", ", 2)), F->b_2045), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2044), rt_str(", ", 2)), F->b_2045), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2044), rt_str(", ", 2)), F->b_2045), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("AND", 3)) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("OR", 2))) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("XOR", 3)))) {
F->a_2046 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, g_ty_bool_893, &F->ta_2034));
F->b_2047 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, g_ty_bool_893, &F->tb_2035));
f_check_type_223(F->ta_2034, g_ty_bool_893, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
f_check_type_223(F->tb_2035, g_ty_bool_893, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2046), rt_str(" && ", 4)), F->b_2047), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2046), rt_str(" || ", 4)), F->b_2047), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2046), rt_str(" != ", 4)), F->b_2047), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("&", 1)) && (F->want_694 != NULL)) && ((*(P818)rt_nil_check(f_base_of_214(F->want_694))).kind == (((rt_int)6LL))))) {
F->at_2048 = NULL;
F->at_2048 = f_base_of_214(F->want_694);
F->a_2049 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, F->at_2048, &F->ta_2034));
F->b_2050 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, F->at_2048, &F->tb_2035));
f_check_type_223(F->ta_2034, F->at_2048, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
f_check_type_223(F->tb_2035, F->at_2048, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
if (((rt_r_ichk((*(P818)rt_nil_check(F->at_2048)).ndim) != ((rt_int)1LL)) || ((*(P818)rt_nil_check(f_base_of_214((*(P818)rt_nil_check(F->at_2048)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_627(F->at_2048);
F->t_695v = F->at_2048;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->at_2048)), rt_str("(", 1)), F->a_2049), rt_str(", ", 2)), F->b_2050), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("&", 1))) {
F->wa_2051 = NULL;
F->wb_2052 = NULL;
F->ws_2053 = NULL;
F->ce_2054 = NULL;
F->ce_2054 = g_ty_ascii_895;
if (((F->want_694 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_694)).kind) == (((rt_int)5LL))))) {
F->ws_2053 = F->want_694;
F->ce_2054 = f_str_elem_209(F->want_694);
}
if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2051 = F->ce_2054;
} else {
F->wa_2051 = F->ws_2053;
}
if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2052 = F->ce_2054;
} else {
F->wb_2052 = F->ws_2053;
}
{
F->a_2055 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, F->wa_2051, &F->ta_2034));
F->b_2056 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, F->wb_2052, &F->tb_2035));
F->t_695v = g_ty_string_896;
if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)5LL)))) {
F->t_695v = F->ta_2034;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)5LL)))) {
F->t_695v = F->tb_2035;
} else if ((!f_same_212(F->ta_2034, g_ty_ascii_895))) {
F->t_695v = f_new_typ_174((((rt_int)5LL)));
(*(P818)rt_nil_check(F->t_695v)).elem = F->ta_2034;
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)6LL))))) {
f_need_slice_627(F->ta_2034);
f_check_type_223(F->tb_2035, F->ta_2034, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
F->t_695v = F->ta_2034;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->ta_2034)), rt_str("(", 1)), F->a_2055), rt_str(", ", 2)), F->b_2056), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)5LL)))) {
f_check_type_223(f_str_cat_part_660(F->tb_2035), f_str_elem_209(F->ta_2034), rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)5LL)))) {
f_check_type_223(F->ta_2034, f_str_elem_209(F->tb_2035), rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
} else {
f_check_type_223(F->tb_2035, F->ta_2034, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
}
if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2055), rt_str(", ", 2)), F->b_2056), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2055), rt_str(", ", 2)), F->b_2056), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2055), rt_str(", ", 2)), F->b_2056), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2055), rt_str(", ", 2)), F->b_2056), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1)) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))) && (f_as_subtype_285((*(P812)rt_nil_check(F->e_693)).a) != NULL)) && (f_as_subtype_285((*(P812)rt_nil_check(F->e_693)).b) != NULL))) {
F->t_695v = g_ty_bool_893;
F->result_ = f_subtype_compare_684(f_as_subtype_285((*(P812)rt_nil_check(F->e_693)).a), f_as_subtype_285((*(P812)rt_nil_check(F->e_693)).b), &(((P805)rt_nil_check(F->op_2033))->all), rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P805)rt_nil_check(F->op_2033))->all)) && (!rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2057 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, NULL, &F->hint_2036));
} else if ((rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->e_693)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2036 = f_peek_type_662((*(P812)rt_nil_check(F->e_693)).b);
}
{
F->a_2058 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, F->hint_2036, &F->ta_2034));
F->b_2059 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, F->ta_2034, &F->tb_2035));
F->ct_2060 = NULL;
F->ct_2060 = f_base_of_214(F->ta_2034);
F->t_695v = g_ty_bool_893;
if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) != (((rt_int)11LL))))) {
f_check_type_223(F->tb_2035, F->ta_2034, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)11LL)))) {
F->ct_2060 = f_base_of_214(F->tb_2035);
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2059), rt_str(", ", 2)), F->a_2058), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2059), rt_str(", ", 2)), F->a_2058), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2059), rt_str(", ", 2)), F->a_2058), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2058), rt_str(", ", 2)), F->b_2059), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2059), rt_str(", ", 2)), F->a_2058), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P818)rt_nil_check(F->ct_2060)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1)))) && (!rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_356(F->ct_2060)) {
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_368(F->ct_2060, &F->a_2058, &F->b_2059);
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_368(F->ct_2060, &F->a_2058, &F->b_2059)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2058), rt_str(" == ", 4)), F->b_2059), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2058), rt_str(" != ", 4)), F->b_2059), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2058), rt_str(" ", 1)), (((P805)rt_nil_check(F->op_2033))->all)), rt_str(" ", 1)), F->b_2059), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2061 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).a, F->want_694, &F->ta_2034));
F->b_2062 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->e_693)).b, F->ta_2034, &F->tb_2035));
if (((rt_r_ichk((*(P818)rt_nil_check(F->ta_2034)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P818)rt_nil_check(F->tb_2035)).kind) == (((rt_int)3LL))))) {
F->t_695v = g_ty_float_894;
if (((rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("+", 1)) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("-", 1))) || rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2061), rt_str(" ", 1)), (((P805)rt_nil_check(F->op_2033))->all)), rt_str(" ", 1)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
}
}
f_check_type_223(F->ta_2034, g_ty_int_892, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
f_check_type_223(F->tb_2035, g_ty_int_892, rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line));
F->t_695v = g_ty_int_892;
if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P805)rt_nil_check(F->op_2033))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2061), rt_str(", ", 2)), F->b_2062), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P805)rt_nil_check(F->op_2033))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_695) = F->t_695v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_701(P812 e_697, P818 want_698, P814 ctx_699, P818 *t_700) {
  struct f_constructor_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_697 = e_697;
F->want_698 = want_698;
F->ctx_699 = ctx_699;
F->t_700 = t_700;
F->t_700v = *F->t_700;
F->it_2063 = NULL;
F->it_2063 = (*(P812)rt_nil_check(F->e_697)).a;
F->f_2064 = NULL;
F->vt_2065 = NULL;
if (((F->want_698 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_698)).kind) == (((rt_int)16LL))))) {
F->s_2066 = NULL;
F->s_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_294(F->want_698); b_; }));
F->t_700v = F->want_698;
while ((F->it_2063 != NULL)) {
F->v_2067 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->it_2063)).b, (*(P818)rt_nil_check(F->want_698)).elem, &F->vt_2065));
f_check_type_223(F->vt_2065, (*(P818)rt_nil_check(F->want_698)).elem, rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line));
F->s_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P805)rt_nil_check(F->s_2066))->all)), rt_str(", ", 2)), F->v_2067), rt_str(")", 1)); b_; }));
F->it_2063 = (*(P812)rt_nil_check(F->it_2063)).next;
}
F->result_ = (((P805)rt_nil_check(F->s_2066))->all);
goto ret_;
}
if (((F->want_698 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_698)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P805)rt_nil_check((*(P818)rt_nil_check(F->want_698)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_698 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_698)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_715(F->e_697, F->want_698, F->ctx_699, &F->t_700v);
goto ret_;
}
if (((F->want_698 != NULL) && (rt_r_ichk((*(P818)rt_nil_check(F->want_698)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2063 == NULL) || ((*(P812)rt_nil_check(F->it_2063)).next != NULL)) || ((*(P812)rt_nil_check(F->it_2063)).a == NULL)) || ((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2063)).a)).next != NULL)) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2063)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2064 = (*(P818)rt_nil_check(F->want_698)).fields;
{
F->i_2068 = RT_R_IUNDEF;
F->i_2068 = ((rt_int)0LL);
F->tmp_2069 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2064 != NULL) && (!rt_str_eq((((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all), (((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2063)).a)).a)).name))->all))))) {
F->i_2068 = rt_add(rt_r_ichk(F->i_2068), ((rt_int)1LL));
F->f_2064 = (*(P820)rt_nil_check(F->f_2064)).next;
}
if ((F->f_2064 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2063)).a)).a)).name))->all)); b_; }));
}
F->t_700v = F->want_698;
g_cons_ctx_883 = (*(P820)rt_nil_check(F->f_2064)).c;
{
F->v_2070 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->it_2063)).b, (*(P820)rt_nil_check(F->f_2064)).t, &F->vt_2065));
f_check_type_223(F->vt_2065, (*(P820)rt_nil_check(F->f_2064)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_698)), rt_str(" ", 1)), F->tmp_2069), rt_str("; ", 2)), F->tmp_2069), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2068))), rt_str("; ", 2)), F->tmp_2069), rt_str(".u.", 3)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all))), rt_str(" = ", 3)), f_comp_value_705((*(P820)rt_nil_check(F->f_2064)).t, (*(P820)rt_nil_check(F->f_2064)).c, &F->v_2070)), rt_str("; ", 2)), F->tmp_2069), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_698 == NULL) || (rt_r_ichk((*(P818)rt_nil_check(F->want_698)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_700v = F->want_698;
F->f_2064 = (*(P818)rt_nil_check(F->want_698)).fields;
{
F->tmp_2071 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2072 = NULL;
F->parts_2072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_698)), rt_str(" ", 1)), F->tmp_2071), rt_str(";", 1)); b_; }));
while ((F->it_2063 != NULL)) {
F->k_2073 = NULL;
F->k_2073 = (*(P812)rt_nil_check(F->it_2063)).a;
F->shared_2074 = NULL;
if ((F->k_2073 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2073 != NULL)) {
if (((((F->f_2064 == NULL) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->k_2073)).a)).kind) != (((rt_int)7LL)))) || ((*(P812)rt_nil_check(F->k_2073)).b != NULL)) || (!rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check((*(P812)rt_nil_check(F->k_2073)).a)).name))->all), (((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all))))) {
if ((F->f_2064 == NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2063)).a)).next == NULL)) {
g_cons_ctx_883 = (*(P820)rt_nil_check(F->f_2064)).c;
{
F->v_2075 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->it_2063)).b, (*(P820)rt_nil_check(F->f_2064)).t, &F->vt_2065));
f_check_type_223(F->vt_2065, (*(P820)rt_nil_check(F->f_2064)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line));
F->parts_2072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2072))->all), rt_str(" ", 1)), F->tmp_2071), rt_str(".", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all))), rt_str(" = ", 3)), f_comp_value_705((*(P820)rt_nil_check(F->f_2064)).t, (*(P820)rt_nil_check(F->f_2064)).c, &F->v_2075)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2074 == NULL)) {
F->v_2076 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->it_2063)).b, (*(P820)rt_nil_check(F->f_2064)).t, &F->vt_2065));
F->shared_2074 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_223(F->vt_2065, (*(P820)rt_nil_check(F->f_2064)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line));
F->parts_2072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2072))->all), rt_str(" ", 1)), f_ctype_225((*(P820)rt_nil_check(F->f_2064)).t)), rt_str(" ", 1)), (((P805)rt_nil_check(F->shared_2074))->all)), rt_str(" = ", 3)), F->v_2076), rt_str(";", 1)); b_; }));
}
f_check_type_223(F->vt_2065, (*(P820)rt_nil_check(F->f_2064)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line));
F->parts_2072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2072))->all), rt_str(" ", 1)), F->tmp_2071), rt_str(".", 1)), f_field_c_17(&(((P805)rt_nil_check((*(P820)rt_nil_check(F->f_2064)).name))->all))), rt_str(" = ", 3)), f_comp_value_705((*(P820)rt_nil_check(F->f_2064)).t, (*(P820)rt_nil_check(F->f_2064)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P820)rt_nil_check(F->f_2064)).t, &(((P805)rt_nil_check(F->shared_2074))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2064 = (*(P820)rt_nil_check(F->f_2064)).next;
F->k_2073 = (*(P812)rt_nil_check(F->k_2073)).next;
}
F->it_2063 = (*(P812)rt_nil_check(F->it_2063)).next;
}
if ((F->f_2064 != NULL)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2072))->all), rt_str(" ", 1)), F->tmp_2071), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_700) = F->t_700v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_705(P818 t_702, P814 c_703, rstr *v_704) {
  struct f_comp_value_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_702 = t_702;
F->c_703 = c_703;
F->v_704 = v_704;
if (((F->c_703 == NULL) || (((*(P814)rt_nil_check(F->c_703)).lo != NULL) && f_has_at_707(&(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_703)).lo))->all))))) {
F->result_ = f_copy_code_364(F->t_702, &(*F->v_704));
goto ret_;
} else if ((((rt_r_ichk((*(P818)rt_nil_check(F->t_702)).kind) == (((rt_int)5LL))) && ((*(P814)rt_nil_check(F->c_703)).slen != NULL)) && (!f_has_at_707(&(((P805)rt_nil_check((*(P814)rt_nil_check(F->c_703)).slen))->all))))) {
F->result_ = f_copy_code_364(F->t_702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_704)), rt_str(", ", 2)), (((P805)rt_nil_check((*(P814)rt_nil_check(F->c_703)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_702, F->c_703, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_702, &(*F->v_704)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_707(rstr *s_706) {
  struct f_has_at_707fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_706 = s_706;
{ rt_int lo2078 = ((rt_int)1LL), hi2079 = ((rt_int)(((*F->s_706)).len));
for (rt_int it2080 = lo2078; it2080 <= hi2079; it2080++) {
F->i_2077 = it2080;
if ((rt_r_echk(rt_str_get((*F->s_706), F->i_2077)) == 64)) {
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

static rstr f_set_elem_710(P818 st_708, rstr *v_709) {
  struct f_set_elem_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_708 = st_708;
F->v_709 = v_709;
F->result_ = (*F->v_709);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_715(P812 e_711, P818 at_712, P814 ctx_713, P818 *t_714) {
  struct f_array_cons_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_711 = e_711;
F->at_712 = at_712;
F->ctx_713 = ctx_713;
F->t_714 = t_714;
F->t_714v = *F->t_714;
F->tmp_2081 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2082 = NULL;
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->at_712)), rt_str(" ", 1)), F->tmp_2081), rt_str(";", 1)); b_; }));
F->it_2083 = NULL;
F->it_2083 = (*(P812)rt_nil_check(F->e_711)).a;
F->positional_2084 = RT_R_EUNDEF;
F->positional_2084 = 1;
F->t_714v = F->at_712;
while ((F->it_2083 != NULL)) {
if (((*(P812)rt_nil_check(F->it_2083)).a != NULL)) {
F->positional_2084 = 0;
}
F->it_2083 = (*(P812)rt_nil_check(F->it_2083)).next;
}
{ rt_int lo2086 = ((rt_int)1LL), hi2087 = rt_r_ichk((*(P818)rt_nil_check(F->at_712)).ndim);
for (rt_int it2088 = lo2086; it2088 <= hi2087; it2088++) {
F->k_2085 = it2088;
F->lo_2089 = NULL;
F->hi_2090 = NULL;
if ((((F->ctx_713 != NULL) && (f_cons_lo_243(F->ctx_713, F->k_2085) != NULL)) && (!f_has_at_707(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P805)rt_nil_check(f_cons_lo_243(F->ctx_713, F->k_2085)))->all); b_; }))))) {
F->lo_2089 = f_cons_lo_243(F->ctx_713, F->k_2085);
F->hi_2090 = f_cons_hi_246(F->ctx_713, F->k_2085);
} else if (((rt_r_ichk((*(P818)rt_nil_check(F->at_712)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2084))) {
if (((*(P818)rt_nil_check(f_base_of_214((*(P818)rt_nil_check(F->at_712)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2090 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->lo_2089))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P812)rt_nil_check(F->e_711)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_711)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2082))->all), rt_str(" ", 1)), F->tmp_2081), rt_str(".", 1)), f_dim_lo_233(F->k_2085)), rt_str(" = ", 3)), (((P805)rt_nil_check(F->lo_2089))->all)), rt_str("; ", 2)), F->tmp_2081), rt_str(".", 1)), f_dim_hi_235(F->k_2085)), rt_str(" = ", 3)), (((P805)rt_nil_check(F->hi_2090))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P818)rt_nil_check(F->at_712)).ndim) == ((rt_int)1LL))) {
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2082))->all), rt_str(" ", 1)), F->tmp_2081), rt_str(".lo2 = ", 7)), F->tmp_2081), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2082))->all), rt_str(" rt_int n_", 10)), F->tmp_2081), rt_str(" = ", 3)), f_acnt_240(F->at_712, &F->tmp_2081)), rt_str("; ", 2)), F->tmp_2081), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P818)rt_nil_check(F->at_712)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2081), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2081), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2081), rt_str(" + 1);", 6)); b_; }));
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->parts_2082))->all), f_fill_items_721((*(P812)rt_nil_check(F->e_711)).a, F->at_712, &F->tmp_2081, NULL, ((rt_int)1LL))); b_; }));
F->parts_2082 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->parts_2082))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2081), rt_str("; i_++) if (seen_", 17)), F->tmp_2081), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2081), rt_str("; })", 4)); b_; }));
F->result_ = (((P805)rt_nil_check(F->parts_2082))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_714) = F->t_714v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_721(P812 items_716, P818 at_717, rstr *tmp_718, P816 prefix_719, rt_int dim_720) {
  struct f_fill_items_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_716 = items_716;
F->at_717 = at_717;
F->tmp_718 = tmp_718;
F->prefix_719 = prefix_719;
F->dim_720 = dim_720;
F->it_2091 = NULL;
F->it_2091 = F->items_716;
F->pos_2092 = RT_R_IUNDEF;
F->pos_2092 = ((rt_int)0LL);
F->r_2093 = NULL;
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2094 = NULL;
while ((F->it_2091 != NULL)) {
if (((*(P812)rt_nil_check(F->it_2091)).a == NULL)) {
if (((F->dim_720 < rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim)) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2091)).b)).kind) == (((rt_int)14LL))))) {
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_720)), rt_str(" = ", 3)), (*F->tmp_718)), rt_str(".", 1)), f_dim_lo_233(F->dim_720)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2092))), rt_str("; ", 2)), f_fill_items_721((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2091)).b)).a, F->at_717, &(*F->tmp_718), f_add_line_726(F->prefix_719, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_720)); b_; })), rt_add(F->dim_720, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2095 = rt_str_copy(f_item_value_731((*(P812)rt_nil_check(F->it_2091)).b, F->at_717, f_e_line_723(F->it_2091), &F->vt_2094));
if (((F->dim_720 == ((rt_int)1LL)) && (rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim) > ((rt_int)1LL)))) {
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" { ", 3)), F->v_2095), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2092))), rt_str(" >= n_", 6)), (*F->tmp_718)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_718)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2092))), rt_str("] = ", 4)), f_copy_code_364((*(P818)rt_nil_check(F->at_717)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_718)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2092))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" { ", 3)), F->v_2095), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_720)), rt_str(" = ", 3)), (*F->tmp_718)), rt_str(".", 1)), f_dim_lo_233(F->dim_720)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2092))), rt_str("; ", 2)), f_store_at_741(F->at_717, &(*F->tmp_718), f_add_line_726(F->prefix_719, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_720)); b_; })), F->dim_720)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2092 = rt_add(rt_r_ichk(F->pos_2092), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_720, f_list_len_67((*(P812)rt_nil_check(F->it_2091)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim))) {
F->k_2096 = NULL;
F->k_2096 = (*(P812)rt_nil_check(F->it_2091)).a;
F->d_2097 = RT_R_IUNDEF;
F->d_2097 = F->dim_720;
F->pre_2098 = NULL;
F->pre_2098 = F->prefix_719;
F->loops_2099 = NULL;
F->loops_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2100 = NULL;
F->ends_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2101 = rt_str_copy(f_item_value_731((*(P812)rt_nil_check(F->it_2091)).b, F->at_717, rt_r_ichk((*(P812)rt_nil_check(F->it_2091)).line), &F->vt_2094));
while ((F->k_2096 != NULL)) {
F->xv_2102 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2097))));
F->loops_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->loops_2099))->all), f_key_loop_736(F->k_2096, F->at_717, rt_r_ichk(F->d_2097), &F->xv_2102)); b_; }));
F->ends_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->ends_2100))->all), rt_str(" }", 2)); b_; }));
F->pre_2098 = f_add_line_726(F->pre_2098, &F->xv_2102);
F->d_2097 = rt_add(rt_r_ichk(F->d_2097), ((rt_int)1LL));
F->k_2096 = (*(P812)rt_nil_check(F->k_2096)).next;
}
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" { ", 3)), F->v_2101), (((P805)rt_nil_check(F->loops_2099))->all)), rt_str(" ", 1)), f_store_at_741(F->at_717, &(*F->tmp_718), F->pre_2098, rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim))), (((P805)rt_nil_check(F->ends_2100))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_720 == rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim)) || (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2091)).b)).kind) == (((rt_int)14LL))))) {
F->k_2103 = NULL;
F->k_2103 = (*(P812)rt_nil_check(F->it_2091)).a;
while ((F->k_2103 != NULL)) {
F->xv_2104 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_720)));
if ((F->dim_720 < rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim))) {
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" {", 2)), f_key_loop_736(F->k_2103, F->at_717, F->dim_720, &F->xv_2104)), rt_str(" ", 1)), f_fill_items_721((*(P812)rt_nil_check((*(P812)rt_nil_check(F->it_2091)).b)).a, F->at_717, &(*F->tmp_718), f_add_line_726(F->prefix_719, &F->xv_2104), rt_add(F->dim_720, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2105 = rt_str_copy(f_item_value_731((*(P812)rt_nil_check(F->it_2091)).b, F->at_717, rt_r_ichk((*(P812)rt_nil_check(F->it_2091)).line), &F->vt_2094));
F->r_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->r_2093))->all), rt_str(" { ", 3)), F->v_2105), f_key_loop_736(F->k_2103, F->at_717, F->dim_720, &F->xv_2104)), rt_str(" ", 1)), f_store_at_741(F->at_717, &(*F->tmp_718), f_add_line_726(F->prefix_719, &F->xv_2104), F->dim_720)), rt_str(" } }", 4)); b_; }));
}
F->k_2103 = (*(P812)rt_nil_check(F->k_2103)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->it_2091)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P818)rt_nil_check(F->at_717)).ndim), F->dim_720), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2091 = (*(P812)rt_nil_check(F->it_2091)).next;
}
F->result_ = (((P805)rt_nil_check(F->r_2093))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_723(P812 e_722) {
  struct f_e_line_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_722 = e_722;
F->result_ = rt_r_ichk((*(P812)rt_nil_check(F->e_722)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P816 f_add_line_726(P816 l_724, rstr *s_725) {
  struct f_add_line_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_724 = l_724;
F->s_725 = s_725;
F->r_2106 = NULL;
F->tail_2107 = NULL;
F->x_2108 = NULL;
F->p_2109 = NULL;
F->p_2109 = F->l_724;
while ((F->p_2109 != NULL)) {
{ R817 *cell2110 = rt_alloc(sizeof(R817));
(*cell2110).s = NULL;
(*cell2110).next = NULL;
F->x_2108 = cell2110;
}
(*(P816)rt_nil_check(F->x_2108)).s = (*(P816)rt_nil_check(F->p_2109)).s;
if ((F->tail_2107 == NULL)) {
F->r_2106 = F->x_2108;
} else {
(*(P816)rt_nil_check(F->tail_2107)).next = F->x_2108;
}
F->tail_2107 = F->x_2108;
F->p_2109 = (*(P816)rt_nil_check(F->p_2109)).next;
}
{ R817 *cell2111 = rt_alloc(sizeof(R817));
(*cell2111).s = NULL;
(*cell2111).next = NULL;
F->x_2108 = cell2111;
}
(*(P816)rt_nil_check(F->x_2108)).s = f_mk_3(&(*F->s_725));
if ((F->tail_2107 == NULL)) {
F->r_2106 = F->x_2108;
} else {
(*(P816)rt_nil_check(F->tail_2107)).next = F->x_2108;
}
F->result_ = F->r_2106;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_731(P812 e_727, P818 at_728, rt_int line_729, P818 *vt_730) {
  struct f_item_value_731fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_727 = e_727;
F->at_728 = at_728;
F->line_729 = line_729;
F->vt_730 = vt_730;
F->vt_730v = *F->vt_730;
g_cons_ctx_883 = (*(P818)rt_nil_check(F->at_728)).elemcons;
{
F->v_2112 = rt_str_copy(f_gexpr_646(F->e_727, (*(P818)rt_nil_check(F->at_728)).elem, &F->vt_730v));
f_check_type_223(F->vt_730v, (*(P818)rt_nil_check(F->at_728)).elem, F->line_729);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P818)rt_nil_check(F->at_728)).elem), rt_str(" v_ = ", 6)), f_comp_value_705((*(P818)rt_nil_check(F->at_728)).elem, (*(P818)rt_nil_check(F->at_728)).elemcons, &F->v_2112)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_730) = F->vt_730v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_736(P812 k_732, P818 at_733, rt_int d_734, rstr *xv_735) {
  struct f_key_loop_736fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_732 = k_732;
F->at_733 = at_733;
F->d_734 = d_734;
F->xv_735 = xv_735;
F->it_2113 = NULL;
F->lo_2114 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->k_732)).a, f_idx_type_249(F->at_733, F->d_734), &F->it_2113));
f_check_type_223(F->it_2113, f_idx_type_249(F->at_733, F->d_734), rt_r_ichk((*(P812)rt_nil_check(F->k_732)).line));
if (((*(P812)rt_nil_check(F->k_732)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_735)), rt_str(" = ", 3)), F->lo_2114), rt_str(";", 1));
goto ret_;
}
{
F->hi_2115 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->k_732)).b, f_idx_type_249(F->at_733, F->d_734), &F->it_2113));
f_check_type_223(F->it_2113, f_idx_type_249(F->at_733, F->d_734), rt_r_ichk((*(P812)rt_nil_check(F->k_732)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_735)), rt_str(" = ", 3)), F->lo_2114), rt_str(", h", 3)), (*F->xv_735)), rt_str(" = ", 3)), F->hi_2115), rt_str("; ", 2)), (*F->xv_735)), rt_str(" <= h", 5)), (*F->xv_735)), rt_str("; ", 2)), (*F->xv_735)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_741(P818 at_737, rstr *tmp_738, P816 xs_739, rt_int n_740) {
  struct f_store_at_741fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_737 = at_737;
F->tmp_738 = tmp_738;
F->xs_739 = xs_739;
F->n_740 = n_740;
F->off_2116 = NULL;
F->x_2117 = NULL;
F->x_2117 = F->xs_739;
F->k_2118 = RT_R_IUNDEF;
F->k_2118 = ((rt_int)0LL);
while ((F->x_2117 != NULL)) {
F->k_2118 = rt_add(rt_r_ichk(F->k_2118), ((rt_int)1LL));
{
F->l_2119 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_738), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_2118))));
F->h_2120 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_738), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_2118))));
if ((F->off_2116 == NULL)) {
F->off_2116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P805)rt_nil_check((*(P816)rt_nil_check(F->x_2117)).s))->all)), rt_str(", ", 2)), F->l_2119), rt_str(", ", 2)), F->h_2120), rt_str(") - ", 4)), F->l_2119), rt_str(")", 1)); b_; }));
} else {
F->off_2116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P805)rt_nil_check(F->off_2116))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2119), rt_str(", ", 2)), F->h_2120), rt_str(") + rt_index(", 13)), (((P805)rt_nil_check((*(P816)rt_nil_check(F->x_2117)).s))->all)), rt_str(", ", 2)), F->l_2119), rt_str(", ", 2)), F->h_2120), rt_str(") - ", 4)), F->l_2119), rt_str(")", 1)); b_; }));
}
}
F->x_2117 = (*(P816)rt_nil_check(F->x_2117)).next;
}
if ((rt_r_ichk(F->k_2118) != rt_r_ichk((*(P818)rt_nil_check(F->at_737)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P818)rt_nil_check(F->at_737)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P805)rt_nil_check(F->off_2116))->all)), rt_str("; ", 2)), (*F->tmp_738)), rt_str(".p[o_] = ", 9)), f_copy_code_364((*(P818)rt_nil_check(F->at_737)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_738)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_744(P822 y_742, P812 args_743) {
  struct f_fits_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_742 = y_742;
F->args_743 = args_743;
F->a_2121 = NULL;
F->a_2121 = F->args_743;
F->pm_2122 = NULL;
F->pm_2122 = (*(P822)rt_nil_check(F->y_742)).params;
F->t_2123 = NULL;
F->saved_2124 = NULL;
F->saved_2124 = g_code_862;
F->ok_2125 = RT_R_EUNDEF;
F->ok_2125 = 1;
F->lv_2126 = NULL;
F->lc_2127 = NULL;
F->ro_2128 = RT_R_EUNDEF;
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = f_new_buffer_24();
{ rt_frame xf2129;
if (RT_TRY(xf2129)) {
while (((rt_r_echk(F->ok_2125) && (F->a_2121 != NULL)) && (F->pm_2122 != NULL))) {
if (((rt_r_ichk((*(P824)rt_nil_check(F->pm_2122)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P824)rt_nil_check(F->pm_2122)).mode) == (((rt_int)3LL))))) {
f_lvalue_615(F->a_2121, &F->lv_2126, &F->t_2123, &F->lc_2127, &F->ro_2128);
} else {
F->v_2131 = rt_str_copy(f_gexpr_646(F->a_2121, (*(P824)rt_nil_check(F->pm_2122)).t, &F->t_2123));
}
if ((!(f_same_212(F->t_2123, (*(P824)rt_nil_check(F->pm_2122)).t) || ((rt_r_ichk((*(P818)rt_nil_check(F->t_2123)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P818)rt_nil_check((*(P824)rt_nil_check(F->pm_2122)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2125 = 0;
}
F->a_2121 = (*(P812)rt_nil_check(F->a_2121)).next;
F->pm_2122 = (*(P824)rt_nil_check(F->pm_2122)).next;
}
if (((F->a_2121 != NULL) || (F->pm_2122 != NULL))) {
F->ok_2125 = 0;
}
RT_POP(xf2129);
} else {
RT_POP(xf2129);
int x2130 = rt_xcur;
if (0 || x2130 == ex_compile_error_1) {
F->ok_2125 = 0;
} else {
rt_raise(x2130);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = F->saved_2124;
F->result_ = rt_r_echk(F->ok_2125);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_resolve_overload_750(rstr *name_745, P812 tt_746, P812 args_747, int is_stmt_748, rt_int line_749) {
  struct f_resolve_overload_750fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_745 = name_745;
F->tt_746 = tt_746;
F->args_747 = args_747;
F->is_stmt_748 = is_stmt_748;
F->line_749 = line_749;
F->y_2132 = NULL;
F->first_2133 = NULL;
F->n_2134 = RT_R_IUNDEF;
F->n_2134 = ((rt_int)0LL);
{ rt_int lo2136 = ((rt_int)1LL), hi2137 = ((rt_int)3LL);
for (rt_int it2138 = lo2136; it2138 <= hi2137; it2138++) {
F->pass_2135 = it2138;
F->y_2132 = f_overload_chain_756(&(*F->name_745), F->pass_2135);
while ((F->y_2132 != NULL)) {
if (((rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_2132)).name))->all), (*F->name_745)) && ((rt_r_ichk((*(P822)rt_nil_check(F->y_2132)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_2132)).kind) == (((rt_int)4LL))))) && ((F->pass_2135 != ((rt_int)1LL)) || (rt_r_ichk((*(P822)rt_nil_check(F->y_2132)).depth) >= rt_r_ichk(g_gdepth_881))))) {
F->n_2134 = rt_add(rt_r_ichk(F->n_2134), ((rt_int)1LL));
if ((F->first_2133 == NULL)) {
F->first_2133 = F->y_2132;
}
if (((((rt_r_ichk((*(P822)rt_nil_check(F->y_2132)).kind) == (((rt_int)4LL))) == F->is_stmt_748) && f_tt_fits_753(F->y_2132, F->tt_746)) && f_fits_744(F->y_2132, F->args_747))) {
F->result_ = F->y_2132;
goto ret_;
}
}
F->y_2132 = (*(P822)rt_nil_check(F->y_2132)).chain;
}
}
}
if (f_is_builtin_758(&(*F->name_745))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2134) > ((rt_int)1LL))) {
f_fail_23(F->line_749, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_745)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2133;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_753(P822 y_751, P812 tt_752) {
  struct f_tt_fits_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_751 = y_751;
F->tt_752 = tt_752;
F->f_2139 = NULL;
F->a_2140 = NULL;
F->saved_2141 = NULL;
F->saved_2141 = g_code_862;
F->ok_2142 = RT_R_EUNDEF;
F->ok_2142 = 1;
if ((((*(P822)rt_nil_check(F->y_751)).decl == NULL) || ((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_751)).decl)).e == NULL))) {
F->result_ = (F->tt_752 == NULL);
goto ret_;
} else if ((F->tt_752 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2139 = (*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_751)).decl)).e;
F->a_2140 = F->tt_752;
g_trial_890 = rt_add(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = f_new_buffer_24();
{ rt_frame xf2143;
if (RT_TRY(xf2143)) {
while (((rt_r_echk(F->ok_2142) && (F->f_2139 != NULL)) && (F->a_2140 != NULL))) {
F->fc_2145 = NULL;
F->ac_2146 = NULL;
F->fst_2147 = NULL;
F->fst_2147 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->f_2139)).line));
F->ft_2148 = NULL;
F->at_2149 = NULL;
(*(P812)rt_nil_check(F->fst_2147)).name = (*(P812)rt_nil_check(F->f_2139)).name;
F->ft_2148 = f_resolve_subtype_256(F->fst_2147, &F->fc_2145);
if ((rt_r_ichk((*(P812)rt_nil_check(F->a_2140)).kind) >= (((rt_int)70LL)))) {
F->at_2149 = f_resolve_subtype_256(F->a_2140, &F->ac_2146);
} else {
F->ast_2150 = NULL;
F->ast_2150 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P812)rt_nil_check(F->a_2140)).line));
(*(P812)rt_nil_check(F->ast_2150)).name = (*(P812)rt_nil_check(F->a_2140)).name;
F->at_2149 = f_resolve_subtype_256(F->ast_2150, &F->ac_2146);
}
F->ok_2142 = f_same_212(F->ft_2148, F->at_2149);
F->f_2139 = (*(P812)rt_nil_check(F->f_2139)).next;
F->a_2140 = (*(P812)rt_nil_check(F->a_2140)).next;
}
F->ok_2142 = ((rt_r_echk(F->ok_2142) && (F->f_2139 == NULL)) && (F->a_2140 == NULL));
RT_POP(xf2143);
} else {
RT_POP(xf2143);
int x2144 = rt_xcur;
if (0 || x2144 == ex_compile_error_1) {
F->ok_2142 = 0;
} else {
rt_raise(x2144);
}
}
}
g_trial_890 = rt_sub(rt_r_ichk(g_trial_890), ((rt_int)1LL));
g_code_862 = F->saved_2141;
F->result_ = rt_r_echk(F->ok_2142);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_overload_chain_756(rstr *name_754, rt_int pass_755) {
  struct f_overload_chain_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_754 = name_754;
F->pass_755 = pass_755;
if (((g_genv_849 == NULL) && (F->pass_755 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_755 == ((rt_int)2LL))) {
F->result_ = ({ A828 b_ = (((P826)rt_nil_check(g_genv_849))->all); b_.p[(rt_index(f_hash_152(&(*F->name_754)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A828 b_ = (((P826)rt_nil_check(g_table_848))->all); b_.p[(rt_index(f_hash_152(&(*F->name_754)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_758(rstr *n_757) {
  struct f_is_builtin_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_757 = n_757;
F->result_ = (((((((((((((((rt_str_eq((*F->n_757), rt_str("ABS", 3)) || rt_str_eq((*F->n_757), rt_str("POS", 3))) || rt_str_eq((*F->n_757), rt_str("SUCC", 4))) || rt_str_eq((*F->n_757), rt_str("PRED", 4))) || rt_str_eq((*F->n_757), rt_str("SQRT", 4))) || rt_str_eq((*F->n_757), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_757), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_757), rt_str("WRITE", 5))) || rt_str_eq((*F->n_757), rt_str("READLN", 6))) || rt_str_eq((*F->n_757), rt_str("SEND", 4))) || rt_str_eq((*F->n_757), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_757), rt_str("DELAY", 5))) || rt_str_eq((*F->n_757), rt_str("TIME", 4))) || rt_str_eq((*F->n_757), rt_str("CNVT", 4))) || rt_str_eq((*F->n_757), rt_str("FORMAT", 6))) || f_is_low_level_760(&(*F->n_757)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_760(rstr *n_759) {
  struct f_is_low_level_760fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_759 = n_759;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_759), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_759), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_759), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_759), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_759), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_759), rt_str("LOCK", 4))) || rt_str_eq((*F->n_759), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_759), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_759), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_759), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_759), rt_str("WAITING", 7))) || rt_str_eq((*F->n_759), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_759), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_759), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_759), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_759), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_759), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_759), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_759), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_764(P812 tt_761, rt_int line_762, P818 *t_763) {
  struct f_me_high_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_761 = tt_761;
F->line_762 = line_762;
F->t_763 = t_763;
F->t_763v = *F->t_763;
F->c_2151 = NULL;
if ((F->tt_761 == NULL)) {
f_fail_23(F->line_762, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_763v = f_resolve_subtype_256(F->tt_761, &F->c_2151);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_763v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_766(F->t_763v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_763) = F->t_763v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_766(P818 t_765) {
  struct f_type_tag_766fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_765 = t_765;
if (((*(P818)rt_nil_check(F->t_765)).name != NULL)) {
F->result_ = (((P805)rt_nil_check((*(P818)rt_nil_check(F->t_765)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_769(P812 e_767, rstr *name_768) {
  struct f_lock_ref_769fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_767 = e_767;
F->name_768 = name_768;
F->lv_2152 = NULL;
F->t_2153 = NULL;
F->c_2154 = NULL;
F->ro_2155 = RT_R_EUNDEF;
f_lvalue_615(F->e_767, &F->lv_2152, &F->t_2153, &F->c_2154, &F->ro_2155);
if ((rt_r_ichk((*(P818)rt_nil_check(F->t_2153)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_767)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_768), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P805)rt_nil_check(F->lv_2152))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_user_op_772(rstr *op_770, P812 args_771) {
  struct f_user_op_772fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_770 = op_770;
F->args_771 = args_771;
F->y_2156 = NULL;
{ rt_int lo2158 = ((rt_int)1LL), hi2159 = ((rt_int)3LL);
for (rt_int it2160 = lo2158; it2160 <= hi2159; it2160++) {
F->pass_2157 = it2160;
F->y_2156 = f_overload_chain_756(&(*F->op_770), F->pass_2157);
while ((F->y_2156 != NULL)) {
if ((((rt_str_eq((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_2156)).name))->all), (*F->op_770)) && (rt_r_ichk((*(P822)rt_nil_check(F->y_2156)).kind) == (((rt_int)3LL)))) && ((F->pass_2157 != ((rt_int)1LL)) || (rt_r_ichk((*(P822)rt_nil_check(F->y_2156)).depth) >= rt_r_ichk(g_gdepth_881)))) && f_fits_744(F->y_2156, F->args_771))) {
F->result_ = F->y_2156;
goto ret_;
}
F->y_2156 = (*(P822)rt_nil_check(F->y_2156)).chain;
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

static rstr f_gcall_776(P812 e_773, int is_stmt_774, P818 *t_775) {
  struct f_gcall_776fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_773 = e_773;
F->is_stmt_774 = is_stmt_774;
F->t_775 = t_775;
F->t_775v = *F->t_775;
F->fn_2161 = NULL;
F->fn_2161 = (*(P812)rt_nil_check(F->e_773)).a;
F->tt_2162 = NULL;
F->y_2163 = NULL;
F->args_2164 = NULL;
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2165 = NULL;
F->a_2165 = (*(P812)rt_nil_check(F->e_773)).b;
F->pm_2166 = NULL;
F->lt_2167 = NULL;
F->vt_2168 = NULL;
F->lv_2169 = NULL;
F->lc_2170 = NULL;
F->ro_2171 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P812)rt_nil_check(F->fn_2161)).kind) == (((rt_int)12LL)))) {
F->tt_2162 = (*(P812)rt_nil_check(F->fn_2161)).b;
F->fn_2161 = (*(P812)rt_nil_check(F->fn_2161)).a;
}
F->y_2163 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all));
if ((F->y_2163 == NULL)) {
F->result_ = f_builtin_801(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), F->is_stmt_774, &F->t_775v);
goto ret_;
}
if ((((rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)10LL))))) {
F->alt_2172 = NULL;
F->alt_2172 = f_resolve_overload_750(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, F->is_stmt_774, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
if ((F->alt_2172 != NULL)) {
F->y_2163 = F->alt_2172;
} else if (f_is_builtin_758(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all))) {
F->result_ = f_builtin_801(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), F->is_stmt_774, &F->t_775v);
goto ret_;
}
}
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) == (((rt_int)10LL)))) {
F->y_2163 = f_instantiate_591(F->y_2163, F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
} else if (((rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) == (((rt_int)4LL))))) {
F->y_2163 = f_resolve_overload_750(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, F->is_stmt_774, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
if ((F->y_2163 == NULL)) {
F->result_ = f_builtin_801(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), F->tt_2162, (*(P812)rt_nil_check(F->e_773)).b, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), F->is_stmt_774, &F->t_775v);
goto ret_;
}
}
if (((rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_790(F->y_2163, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
if ((F->is_stmt_774 && (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_774) && (rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2166 = (*(P822)rt_nil_check(F->y_2163)).params;
if ((rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).level) > ((rt_int)0LL))) {
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2174 = ((rt_int)1LL), hi2175 = rt_sub(rt_r_ichk(g_cur_level_865), rt_r_ichk((*(P822)rt_nil_check(F->y_2163)).level));
for (rt_int it2176 = lo2174; it2176 <= hi2175; it2176++) {
F->i_2173 = it2176;
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2165 != NULL) && (F->pm_2166 != NULL))) {
if ((((rt_int)(((((P805)rt_nil_check(F->args_2164))->all)).len)) > ((rt_int)0LL))) {
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P824)rt_nil_check(F->pm_2166)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P824)rt_nil_check(F->pm_2166)).mode) == (((rt_int)3LL))))) {
f_lvalue_615(F->a_2165, &F->lv_2169, &F->lt_2167, &F->lc_2170, &F->ro_2171);
if (rt_r_echk(F->ro_2171)) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check((*(P824)rt_nil_check(F->pm_2166)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_223(F->lt_2167, (*(P824)rt_nil_check(F->pm_2166)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str("&", 1)), (((P805)rt_nil_check(F->lv_2169))->all)), f_actual_bounds_794((*(P824)rt_nil_check(F->pm_2166)).t, F->lt_2167, F->lc_2170)); b_; }));
} else if (((rt_r_ichk((*(P824)rt_nil_check(F->pm_2166)).mode) == (((rt_int)4LL))) && f_is_lvalue_609(F->a_2165))) {
f_lvalue_615(F->a_2165, &F->lv_2169, &F->lt_2167, &F->lc_2170, &F->ro_2171);
f_check_type_223(F->lt_2167, (*(P824)rt_nil_check(F->pm_2166)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str("&", 1)), (((P805)rt_nil_check(F->lv_2169))->all)), f_actual_bounds_794((*(P824)rt_nil_check(F->pm_2166)).t, F->lt_2167, F->lc_2170)); b_; }));
} else if ((rt_r_ichk((*(P824)rt_nil_check(F->pm_2166)).mode) == (((rt_int)4LL)))) {
F->v_2177 = rt_str_copy(f_gexpr_in_654(F->a_2165, (*(P824)rt_nil_check(F->pm_2166)).t, (*(P824)rt_nil_check(F->pm_2166)).c, &F->vt_2168));
F->ct_2178 = rt_str_copy(f_ctype_225((*(P824)rt_nil_check(F->pm_2166)).t));
f_check_type_223(F->vt_2168, (*(P824)rt_nil_check(F->pm_2166)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str("({ ", 3)), F->ct_2178), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2178), rt_str(")); *b_ = ", 10)), F->v_2177), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P824)rt_nil_check(F->pm_2166)).t)) {
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2179 = rt_str_copy(f_gexpr_in_654(F->a_2165, (*(P824)rt_nil_check(F->pm_2166)).t, (*(P824)rt_nil_check(F->pm_2166)).c, &F->vt_2168));
f_check_type_223(F->vt_2168, (*(P824)rt_nil_check(F->pm_2166)).t, rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line));
F->args_2164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P805)rt_nil_check(F->args_2164))->all), F->v_2179); b_; }));
}
F->a_2165 = (*(P812)rt_nil_check(F->a_2165)).next;
F->pm_2166 = (*(P824)rt_nil_check(F->pm_2166)).next;
}
if (((F->a_2165 != NULL) || (F->pm_2166 != NULL))) {
f_fail_23(rt_r_ichk((*(P812)rt_nil_check(F->e_773)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P812)rt_nil_check(F->fn_2161)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P812)rt_nil_check(F->e_773)).b), f_list_len_67(F->a_2165)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_775v = (*(P822)rt_nil_check(F->y_2163)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_2163)).cname))->all), rt_str("(", 1)), (((P805)rt_nil_check(F->args_2164))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_775) = F->t_775v;
  RT_FPOP();
  return F->result_;
}

static P816 f_requires_778(P822 y_777) {
  struct f_requires_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_777 = y_777;
if (rt_r_echk((*(P822)rt_nil_check(F->y_777)).reqdone)) {
F->result_ = (*(P822)rt_nil_check(F->y_777)).reqs;
goto ret_;
}
(*(P822)rt_nil_check(F->y_777)).reqdone = 1;
if ((((*(P822)rt_nil_check(F->y_777)).decl != NULL) && (((rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_777)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_777)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_777)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2180 = NULL;
F->imp_2180 = (*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_777)).decl)).d;
while ((F->imp_2180 != NULL)) {
f_add_req_781(F->y_777, &(((P805)rt_nil_check((*(P812)rt_nil_check(F->imp_2180)).name))->all));
F->imp_2180 = (*(P812)rt_nil_check(F->imp_2180)).next;
}
f_require_calls_784(F->y_777, (*(P812)rt_nil_check((*(P822)rt_nil_check(F->y_777)).decl)).c);
}
F->result_ = (*(P822)rt_nil_check(F->y_777)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_781(P822 y_779, rstr *name_780) {
  struct f_add_req_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_779 = y_779;
F->name_780 = name_780;
F->l_2181 = NULL;
if ((!f_seen_name_375((*(P822)rt_nil_check(F->y_779)).reqs, &(*F->name_780)))) {
{ R817 *cell2182 = rt_alloc(sizeof(R817));
(*cell2182).s = NULL;
(*cell2182).next = NULL;
F->l_2181 = cell2182;
}
(*(P816)rt_nil_check(F->l_2181)).s = f_mk_3(&(*F->name_780));
(*(P816)rt_nil_check(F->l_2181)).next = (*(P822)rt_nil_check(F->y_779)).reqs;
(*(P822)rt_nil_check(F->y_779)).reqs = F->l_2181;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_784(P822 y_782, P812 e_783) {
  struct f_require_calls_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_782 = y_782;
F->e_783 = e_783;
F->x_2183 = NULL;
F->x_2183 = F->e_783;
while ((F->x_2183 != NULL)) {
if ((((((rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)51LL))))) {
F->x_2183 = (*(P812)rt_nil_check(F->x_2183)).next;
} else {
F->callee_2184 = NULL;
if (((((rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->x_2183)).kind) == (((rt_int)21LL)))) && ((*(P812)rt_nil_check(F->x_2183)).a != NULL)) && (rt_r_ichk((*(P812)rt_nil_check((*(P812)rt_nil_check(F->x_2183)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2184 = (*(P812)rt_nil_check(F->x_2183)).a;
}
if ((F->callee_2184 != NULL)) {
F->z_2185 = NULL;
F->z_2185 = f_lookup_154(&(((P805)rt_nil_check((*(P812)rt_nil_check(F->callee_2184)).name))->all));
if ((((F->z_2185 != NULL) && (F->z_2185 != F->y_782)) && ((rt_r_ichk((*(P822)rt_nil_check(F->z_2185)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P822)rt_nil_check(F->z_2185)).kind) == (((rt_int)3LL)))))) {
F->l_2186 = NULL;
F->l_2186 = f_requires_778(F->z_2185);
while ((F->l_2186 != NULL)) {
f_add_req_781(F->y_782, &(((P805)rt_nil_check((*(P816)rt_nil_check(F->l_2186)).s))->all));
F->l_2186 = (*(P816)rt_nil_check(F->l_2186)).next;
}
}
}
if (((*(P812)rt_nil_check(F->x_2183)).a != NULL)) {
f_require_calls_784(F->y_782, (*(P812)rt_nil_check(F->x_2183)).a);
}
if (((*(P812)rt_nil_check(F->x_2183)).b != NULL)) {
f_require_calls_784(F->y_782, (*(P812)rt_nil_check(F->x_2183)).b);
}
if (((*(P812)rt_nil_check(F->x_2183)).c != NULL)) {
f_require_calls_784(F->y_782, (*(P812)rt_nil_check(F->x_2183)).c);
}
F->x_2183 = (*(P812)rt_nil_check(F->x_2183)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_787(P812 elems_785, rstr *name_786) {
  struct f_declared_in_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_785 = elems_785;
F->name_786 = name_786;
F->e_2187 = NULL;
F->e_2187 = F->elems_785;
while ((F->e_2187 != NULL)) {
if ((((rt_r_ichk((*(P812)rt_nil_check(F->e_2187)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P812)rt_nil_check(F->e_2187)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P805)rt_nil_check((*(P812)rt_nil_check(F->e_2187)).name))->all), (*F->name_786)))) {
F->result_ = 1;
goto ret_;
}
F->e_2187 = (*(P812)rt_nil_check(F->e_2187)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_790(P822 y_788, rt_int line_789) {
  struct f_check_requires_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_788 = y_788;
F->line_789 = line_789;
F->l_2188 = NULL;
F->l_2188 = f_requires_778(F->y_788);
if ((((*(P822)rt_nil_check(F->y_788)).home == NULL) || (rt_r_ichk((*(P822)rt_nil_check(F->y_788)).level) != rt_r_ichk(g_cur_level_865)))) {
goto ret_;
}
while ((F->l_2188 != NULL)) {
F->z_2189 = NULL;
F->z_2189 = f_lookup_154(&(((P805)rt_nil_check((*(P816)rt_nil_check(F->l_2188)).s))->all));
if ((f_declared_in_787((*(P822)rt_nil_check(F->y_788)).home, &(((P805)rt_nil_check((*(P816)rt_nil_check(F->l_2188)).s))->all)) && ((F->z_2189 == NULL) || (rt_r_ichk((*(P822)rt_nil_check(F->z_2189)).depth) < rt_r_ichk((*(P822)rt_nil_check(F->y_788)).depth))))) {
f_fail_23(F->line_789, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check((*(P822)rt_nil_check(F->y_788)).name))->all), rt_str(" requires ", 10)), (((P805)rt_nil_check((*(P816)rt_nil_check(F->l_2188)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2188 = (*(P816)rt_nil_check(F->l_2188)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_794(P818 ft_791, P818 t_792, P814 c_793) {
  struct f_actual_bounds_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_791 = ft_791;
F->t_792 = t_792;
F->c_793 = c_793;
if ((!f_scalar_kind_177(F->ft_791))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_792, F->c_793)), rt_str(", ", 2)), f_sub_hi_192(F->t_792, F->c_793));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_801(rstr *name_795, P812 tt_796, P812 args_797, rt_int line_798, int is_stmt_799, P818 *t_800) {
  struct f_builtin_801fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_795 = name_795;
F->tt_796 = tt_796;
F->args_797 = args_797;
F->line_798 = line_798;
F->is_stmt_799 = is_stmt_799;
F->t_800 = t_800;
F->t_800v = *F->t_800;
F->at_2190 = NULL;
F->n_2191 = RT_R_IUNDEF;
F->n_2191 = f_list_len_67(F->args_797);
F->t_800v = g_ty_void_897;
if (((rt_str_eq((*F->name_795), rt_str("POS", 3)) || rt_str_eq((*F->name_795), rt_str("SUCC", 4))) || rt_str_eq((*F->name_795), rt_str("PRED", 4)))) {
F->a_2192 = rt_str_copy(f_gexpr_646(F->args_797, NULL, &F->at_2190));
if (rt_str_eq((*F->name_795), rt_str("POS", 3))) {
if (((*(P818)rt_nil_check(f_base_of_214(F->at_2190))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2192), rt_str(") + 1)", 6));
goto ret_;
}
F->t_800v = F->at_2190;
if ((rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_795), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2192), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2192), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_795), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2192), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P818)rt_nil_check(f_base_of_214(F->at_2190))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2192), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P818)rt_nil_check(f_base_of_214(F->at_2190))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_795), rt_str("SQRT", 4)) || rt_str_eq((*F->name_795), rt_str("SIN", 3))) || rt_str_eq((*F->name_795), rt_str("COS", 3))) || rt_str_eq((*F->name_795), rt_str("EXP", 3))) || rt_str_eq((*F->name_795), rt_str("LN", 2))) || rt_str_eq((*F->name_795), rt_str("FLOOR", 5)))) {
F->a_2193 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_float_894, &F->at_2190));
F->t_800v = g_ty_float_894;
if (rt_str_eq((*F->name_795), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2193), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_795)), rt_str("(", 1)), F->a_2193), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("IFLOAT", 6))) {
F->a_2194 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, g_ty_int_892, &F->at_2190));
F->t_800v = g_ty_float_894;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2194), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("IFIX", 4))) {
F->a_2195 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_float_894, &F->at_2190));
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2195), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("FORMAT", 6))) {
F->a_2196 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_float_894, &F->at_2190));
F->n1_2197 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, g_ty_int_892, &F->at_2190));
F->m1_2198 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_797)).next)).next, g_ty_int_892, &F->at_2190));
F->t_800v = g_ty_string_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2196), rt_str(", ", 2)), F->n1_2197), rt_str(", ", 2)), F->m1_2198), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("ABS", 3))) {
F->a_2199 = rt_str_copy(f_gexpr_646(F->args_797, NULL, &F->at_2190));
F->t_800v = F->at_2190;
if ((rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2199), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2199), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("CNVT", 4))) {
if ((F->tt_796 == NULL)) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2200 = rt_str_copy(f_gexpr_646(F->args_797, NULL, &F->at_2190));
if (((rt_r_ichk((*(P812)rt_nil_check(F->tt_796)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)1LL))))) {
F->t_800v = g_ty_string_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2200), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->tt_796)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)3LL))))) {
F->t_800v = g_ty_string_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2200), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->tt_796)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)2LL))))) {
F->t_800v = g_ty_string_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2200), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P812)rt_nil_check(F->tt_796)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)5LL))))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2200), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_795), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2191) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2201 = NULL;
F->last_2201 = F->args_797;
while (((*(P812)rt_nil_check(F->last_2201)).next != NULL)) {
F->last_2201 = (*(P812)rt_nil_check(F->last_2201)).next;
}
{
F->a_2202 = rt_str_copy(f_gexpr_646(F->last_2201, g_ty_string_896, &F->at_2190));
f_check_type_223(F->at_2190, g_ty_string_896, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2202), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_795), rt_str("WRITE", 5))) {
F->a_2203 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, NULL, &F->at_2190));
if ((rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2203), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P818)rt_nil_check(F->at_2190)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2203), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_795), rt_str("READLN", 6))) {
F->lv_2204 = NULL;
F->lc_2205 = NULL;
F->ro_2206 = RT_R_EUNDEF;
F->last_2207 = NULL;
F->last_2207 = F->args_797;
while (((*(P812)rt_nil_check(F->last_2207)).next != NULL)) {
F->last_2207 = (*(P812)rt_nil_check(F->last_2207)).next;
}
f_lvalue_615(F->last_2207, &F->lv_2204, &F->at_2190, &F->lc_2205, &F->ro_2206);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P805)rt_nil_check(F->lv_2204))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("SIZELN", 6))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("EOF", 3))) {
F->t_800v = g_ty_bool_893;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_795), rt_str("SYS_OUT", 7)))) {
F->t_800v = g_ty_file_898;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("OPEN", 4)) || rt_str_eq((*F->name_795), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("SEND", 4)) || rt_str_eq((*F->name_795), rt_str("RECEIVE", 7)))) {
F->lv_2208 = NULL;
F->dv_2209 = NULL;
F->lc_2210 = NULL;
F->ro_2211 = RT_R_EUNDEF;
F->mt_2212 = NULL;
F->dt_2213 = NULL;
f_lvalue_615(F->args_797, &F->lv_2208, &F->mt_2212, &F->lc_2210, &F->ro_2211);
if ((rt_r_ichk((*(P818)rt_nil_check(F->mt_2212)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_795), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_795), rt_str("RECEIVE", 7))) {
f_lvalue_615((*(P812)rt_nil_check(F->args_797)).next, &F->dv_2209, &F->dt_2213, &F->lc_2210, &F->ro_2211);
f_check_type_223(F->dt_2213, (*(P818)rt_nil_check(F->mt_2212)).elem, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P805)rt_nil_check(F->lv_2208))->all)), rt_str(", &", 3)), (((P805)rt_nil_check(F->dv_2209))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2214 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, (*(P818)rt_nil_check(F->mt_2212)).elem, &F->at_2190));
f_check_type_223(F->at_2190, (*(P818)rt_nil_check(F->mt_2212)).elem, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P818)rt_nil_check(F->mt_2212)).elem)), rt_str(" m_ = ", 6)), F->v_2214), rt_str("; rt_send(", 10)), (((P805)rt_nil_check(F->lv_2208))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_795), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_795), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2215 = NULL;
F->lc_2216 = NULL;
F->ro_2217 = RT_R_EUNDEF;
F->mt_2218 = NULL;
f_lvalue_615(F->args_797, &F->lv_2215, &F->mt_2218, &F->lc_2216, &F->ro_2217);
if ((rt_r_ichk((*(P818)rt_nil_check(F->mt_2218)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_795), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_795))), rt_str("(", 1)), (((P805)rt_nil_check(F->lv_2215))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_795), rt_str("COND_RECEIVE", 12)))) {
F->lv_2219 = NULL;
F->dv_2220 = NULL;
F->bv_2221 = NULL;
F->lc_2222 = NULL;
F->ro_2223 = RT_R_EUNDEF;
F->mt_2224 = NULL;
F->dt_2225 = NULL;
F->bt_2226 = NULL;
f_lvalue_615(F->args_797, &F->lv_2219, &F->mt_2224, &F->lc_2222, &F->ro_2223);
if ((rt_r_ichk((*(P818)rt_nil_check(F->mt_2224)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_795), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_615((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_797)).next)).next, &F->bv_2221, &F->bt_2226, &F->lc_2222, &F->ro_2223);
f_check_type_223(F->bt_2226, g_ty_bool_893, F->line_798);
if (rt_str_eq((*F->name_795), rt_str("COND_RECEIVE", 12))) {
f_lvalue_615((*(P812)rt_nil_check(F->args_797)).next, &F->dv_2220, &F->dt_2225, &F->lc_2222, &F->ro_2223);
f_check_type_223(F->dt_2225, (*(P818)rt_nil_check(F->mt_2224)).elem, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->bv_2221))->all), rt_str(" = rt_cond_receive(", 19)), (((P805)rt_nil_check(F->lv_2219))->all)), rt_str(", &", 3)), (((P805)rt_nil_check(F->dv_2220))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2227 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, (*(P818)rt_nil_check(F->mt_2224)).elem, &F->at_2190));
f_check_type_223(F->at_2190, (*(P818)rt_nil_check(F->mt_2224)).elem, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P818)rt_nil_check(F->mt_2224)).elem)), rt_str(" m_ = ", 6)), F->v_2227), rt_str("; ", 2)), (((P805)rt_nil_check(F->bv_2221))->all)), rt_str(" = rt_cond_send(", 16)), (((P805)rt_nil_check(F->lv_2219))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_795), rt_str("PRIORITY", 8))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("SET_PRIORITY", 12))) {
F->v_2228 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, g_ty_int_892, &F->at_2190));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_518(F->args_797)), rt_str(", ", 2)), F->v_2228), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("ACTIVE", 6))) {
F->t_800v = g_ty_bool_893;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("DELAY", 5))) {
F->v_2229 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_int_892, &F->at_2190));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2229), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("DELAY_UNTIL", 11))) {
F->v_2230 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_int_892, &F->at_2190));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2230), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("TIME", 4))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_795), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_795), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_795), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_795), rt_str("HOURS", 5)))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_795));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("HALT", 4))) {
F->a_2231 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_int_892, &F->at_2190));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2231), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("ME", 2)) && (F->tt_796 != NULL))) {
F->result_ = f_me_high_764(F->tt_796, F->line_798, &F->t_800v);
goto ret_;
} else if ((rt_str_eq((*F->name_795), rt_str("WAITING", 7)) || rt_str_eq((*F->name_795), rt_str("SUSPENDED", 9)))) {
F->t_800v = g_ty_bool_893;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_795))), rt_str("(", 1)), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_795), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_795), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_795), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_795), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_795), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_795), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_795))), rt_str("(", 1)), f_act_ref_518(F->args_797)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2191) != ((rt_int)2LL))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_518(F->args_797)), rt_str(", ", 2)), f_act_ref_518((*(P812)rt_nil_check(F->args_797)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_795), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_795), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_795), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_795), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_795), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_795), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2191) != ((rt_int)0LL))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_795), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_795))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_769(F->args_797, &(*F->name_795))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_769(F->args_797, &(*F->name_795))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("COND_LOCK", 9))) {
F->bv_2232 = NULL;
F->bc_2233 = NULL;
F->ro_2234 = RT_R_EUNDEF;
F->bt_2235 = NULL;
F->l_2236 = rt_str_copy(f_lock_ref_769(F->args_797, &(*F->name_795)));
f_lvalue_615((*(P812)rt_nil_check(F->args_797)).next, &F->bv_2232, &F->bt_2235, &F->bc_2233, &F->ro_2234);
f_check_type_223(F->bt_2235, g_ty_bool_893, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P805)rt_nil_check(F->bv_2232))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2236), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("EXCESS_LOCKS", 12))) {
F->t_800v = g_ty_int_892;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_769(F->args_797, &(*F->name_795))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("OWNER", 5))) {
F->t_800v = g_ty_act_902;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_769(F->args_797, &(*F->name_795))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("FREE", 4))) {
F->pv_2237 = NULL;
F->pc_2238 = NULL;
F->ro_2239 = RT_R_EUNDEF;
F->pt_2240 = NULL;
f_lvalue_615(F->args_797, &F->pv_2237, &F->pt_2240, &F->pc_2238, &F->ro_2239);
if (((rt_r_ichk((*(P818)rt_nil_check(F->pt_2240)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2239))) {
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_873 = 1;
f_finish_ptr_409(F->pt_2240);
if (f_suppressed_440(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_315((*(P818)rt_nil_check(F->pt_2240)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_604(F->pt_2240, &(((P805)rt_nil_check(F->pv_2237))->all)); b_; }), (*(P818)rt_nil_check(F->pt_2240)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_315((*(P818)rt_nil_check(F->pt_2240)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str("); if (", 7)), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_604(F->pt_2240, &(((P805)rt_nil_check(F->pv_2237))->all)); b_; }), (*(P818)rt_nil_check(F->pt_2240)).target)), rt_str(" } rt_free((void **)&", 21)), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P805)rt_nil_check(F->pv_2237))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_795), rt_str("LOW_IO", 6))) {
F->dev_2241 = rt_str_copy(f_gexpr_646(F->args_797, g_ty_int_892, &F->at_2190));
F->cmd_2242 = rt_str_copy(f_gexpr_646((*(P812)rt_nil_check(F->args_797)).next, g_ty_int_892, &F->at_2190));
if ((rt_r_ichk(F->n_2191) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2241), rt_str(", ", 2)), F->cmd_2242), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2243 = NULL;
F->dc_2244 = NULL;
F->ro_2245 = RT_R_EUNDEF;
F->dt_2246 = NULL;
f_lvalue_615((*(P812)rt_nil_check((*(P812)rt_nil_check(F->args_797)).next)).next, &F->dv_2243, &F->dt_2246, &F->dc_2244, &F->ro_2245);
f_check_type_223(F->dt_2246, g_ty_int_892, F->line_798);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2241), rt_str(", ", 2)), F->cmd_2242), rt_str(", &", 3)), (((P805)rt_nil_check(F->dv_2243))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_798, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_795), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_800) = F->t_800v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_803(P812 units_802) {
  struct f_translate_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_802 = units_802;
F->u_2247 = NULL;
F->u_2247 = F->units_802;
while ((F->u_2247 != NULL)) {
if (((*(P812)rt_nil_check(F->u_2247)).next == NULL)) {
{ R840 *cell2248 = rt_alloc(sizeof(R840));
(*cell2248).d = NULL;
(*cell2248).next = NULL;
g_caps_867 = cell2248;
}
(*(P839)rt_nil_check(g_caps_867)).d = F->u_2247;
f_declare_labels_473((*(P812)rt_nil_check(F->u_2247)).c);
f_declare_body_380((*(P812)rt_nil_check(F->u_2247)).c);
f_capsule_body_480((*(P812)rt_nil_check(F->u_2247)).c);
f_await_tasks_469((*(P812)rt_nil_check(F->u_2247)).c);
{
F->l_2249 = NULL;
F->l_2249 = F->units_802;
while ((F->l_2249 != F->u_2247)) {
{
F->w_2250 = rt_str_copy(f_waits_of_465(F->l_2249));
if ((((rt_int)((F->w_2250).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2250);
}
}
F->l_2249 = (*(P812)rt_nil_check(F->l_2249)).next;
}
}
f_close_fins_456(NULL);
if (rt_r_echk(g_uses_findyn_875)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_390(F->u_2247);
}
F->u_2247 = (*(P812)rt_nil_check(F->u_2247)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_804(void) {
  struct f_print_program_804fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_376();
if (rt_r_echk(g_uses_free_873)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_855);
f_print_buffer_31(g_out_frames_871);
f_print_buffer_31(g_out_helpers_856);
f_print_buffer_31(g_out_protos_857);
f_print_buffer_31(g_out_globals_858);
f_print_buffer_31(g_out_funcs_859);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_872);
f_print_buffer_31(g_out_excs_861);
f_print_buffer_31(g_out_init_860);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R842(R842 *d, R842 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R842 cp_R842(R842 s) {
  R842 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R842(R842 a, R842 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R840(R840 *d, R840 s) {
  d->d = s.d;
  d->next = s.next;
}
static R840 cp_R840(R840 s) {
  R840 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R840(R840 a, R840 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R838(R838 *d, R838 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R838 cp_R838(R838 s) {
  R838 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R838(R838 a, R838 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R836(R836 *d, R836 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R836 cp_R836(R836 s) {
  R836 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R836(R836 a, R836 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R834(R834 *d, R834 s) {
  d->t = s.t;
  d->next = s.next;
}
static R834 cp_R834(R834 s) {
  R834 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R834(R834 a, R834 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R832(R832 *d, R832 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R832 cp_R832(R832 s) {
  R832 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R832(R832 a, R832 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R830(R830 *d, R830 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R830 cp_R830(R830 s) {
  R830 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R830(R830 a, R830 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A828(A828 *d, A828 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A828 cp_A828(A828 s) {
  A828 d = s; d.p = rt_alloc(sizeof(P822) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A828(A828 a, A828 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R825(R825 *d, R825 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R825 cp_R825(R825 s) {
  R825 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R825(R825 a, R825 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R823(R823 *d, R823 s) {
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
static R823 cp_R823(R823 s) {
  R823 d = s;
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
static int eq_R823(R823 a, R823 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home);
}
static void as_R821(R821 *d, R821 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R821 cp_R821(R821 s) {
  R821 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R821(R821 a, R821 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R819(R819 *d, R819 s) {
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
static R819 cp_R819(R819 s) {
  R819 d = s;
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
static int eq_R819(R819 a, R819 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R817(R817 *d, R817 s) {
  d->s = s.s;
  d->next = s.next;
}
static R817 cp_R817(R817 s) {
  R817 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R817(R817 a, R817 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R815(R815 *d, R815 s) {
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
static R815 cp_R815(R815 s) {
  R815 d = s;
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
static int eq_R815(R815 a, R815 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R813(R813 *d, R813 s) {
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
static R813 cp_R813(R813 s) {
  R813 d = s;
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
static int eq_R813(R813 a, R813 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A811(A811 *d, A811 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A811 cp_A811(A811 s) {
  A811 d = s; d.p = rt_alloc(sizeof(P807) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A811(A811 a, A811 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R808(R808 *d, R808 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R808 cp_R808(R808 s) {
  R808 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R808(R808 a, R808 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_843);
  RT_ROOT(g_ntoks_844);
  RT_ROOT(g_tpos_845);
  RT_ROOT(g_src_line_846);
  RT_ROOT(g_pending_prag_847);
  RT_ROOT(g_table_848);
  RT_ROOT(g_genv_849);
  RT_ROOT(g_all_insts_850);
  RT_ROOT(g_depth_851);
  RT_ROOT(g_scope_stack_852);
  RT_ROOT(g_all_types_853);
  RT_ROOT(g_serial_854);
  RT_ROOT(g_out_types_855);
  RT_ROOT(g_out_helpers_856);
  RT_ROOT(g_out_protos_857);
  RT_ROOT(g_out_globals_858);
  RT_ROOT(g_out_funcs_859);
  RT_ROOT(g_out_init_860);
  RT_ROOT(g_out_excs_861);
  RT_ROOT(g_code_862);
  RT_ROOT(g_fields_buf_863);
  RT_ROOT(g_in_func_864);
  RT_ROOT(g_cur_level_865);
  RT_ROOT(g_fctx_866);
  RT_ROOT(g_caps_867);
  RT_ROOT(g_cap_waits_868);
  RT_ROOT(g_psub_869);
  RT_ROOT(g_st_field_870);
  RT_ROOT(g_out_frames_871);
  RT_ROOT(g_out_roots_872);
  RT_ROOT(g_uses_free_873);
  RT_ROOT(g_fins_874);
  RT_ROOT(g_uses_findyn_875);
  RT_ROOT(g_func_sym_876);
  RT_ROOT(g_func_rc_877);
  RT_ROOT(g_cap_ret_878);
  RT_ROOT(g_cap_rflag_879);
  RT_ROOT(g_ret_frames_880);
  RT_ROOT(g_gdepth_881);
  RT_ROOT(g_suppress_882);
  RT_ROOT(g_cons_ctx_883);
  RT_ROOT(g_mark_uninit_884);
  RT_ROOT(g_exits_885);
  RT_ROOT(g_gotos_886);
  RT_ROOT(g_frames_887);
  RT_ROOT(g_handlers_888);
  RT_ROOT(g_cleanups_889);
  RT_ROOT(g_trial_890);
  RT_ROOT(g_mcopies_891);
  RT_ROOT(g_ty_int_892);
  RT_ROOT(g_ty_bool_893);
  RT_ROOT(g_ty_float_894);
  RT_ROOT(g_ty_ascii_895);
  RT_ROOT(g_ty_string_896);
  RT_ROOT(g_ty_void_897);
  RT_ROOT(g_ty_file_898);
  RT_ROOT(g_ty_nil_899);
  RT_ROOT(g_ty_lock_900);
  RT_ROOT(g_ty_latch_901);
  RT_ROOT(g_ty_act_902);
  RT_ROOT(g_file_mode_type_903);
  RT_ROOT(g_no_cons_904);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_843 = NULL;
g_ntoks_844 = RT_R_IUNDEF;
g_ntoks_844 = ((rt_int)0LL);
g_tpos_845 = RT_R_IUNDEF;
g_tpos_845 = ((rt_int)1LL);
g_src_line_846 = RT_R_IUNDEF;
g_src_line_846 = ((rt_int)0LL);
g_pending_prag_847 = NULL;
g_table_848 = NULL;
g_genv_849 = NULL;
g_all_insts_850 = NULL;
g_depth_851 = RT_R_IUNDEF;
g_depth_851 = ((rt_int)0LL);
g_scope_stack_852 = NULL;
g_all_types_853 = NULL;
g_serial_854 = RT_R_IUNDEF;
g_serial_854 = ((rt_int)0LL);
g_out_types_855 = NULL;
g_out_helpers_856 = NULL;
g_out_protos_857 = NULL;
g_out_globals_858 = NULL;
g_out_funcs_859 = NULL;
g_out_init_860 = NULL;
g_out_excs_861 = NULL;
g_code_862 = NULL;
g_fields_buf_863 = NULL;
g_in_func_864 = RT_R_EUNDEF;
g_in_func_864 = 0;
g_cur_level_865 = RT_R_IUNDEF;
g_cur_level_865 = ((rt_int)0LL);
g_fctx_866 = NULL;
g_caps_867 = NULL;
g_cap_waits_868 = NULL;
g_psub_869 = NULL;
g_st_field_870 = NULL;
g_out_frames_871 = NULL;
g_out_roots_872 = NULL;
g_uses_free_873 = RT_R_EUNDEF;
g_uses_free_873 = 0;
g_fins_874 = NULL;
g_uses_findyn_875 = RT_R_EUNDEF;
g_uses_findyn_875 = 0;
g_func_sym_876 = NULL;
g_func_rc_877 = NULL;
g_cap_ret_878 = NULL;
g_cap_rflag_879 = NULL;
g_ret_frames_880 = RT_R_IUNDEF;
g_ret_frames_880 = ((rt_int)0LL);
g_gdepth_881 = RT_R_IUNDEF;
g_gdepth_881 = ((rt_int)0LL);
g_suppress_882 = NULL;
g_cons_ctx_883 = NULL;
g_mark_uninit_884 = RT_R_EUNDEF;
g_mark_uninit_884 = 0;
g_exits_885 = NULL;
g_gotos_886 = NULL;
g_frames_887 = RT_R_IUNDEF;
g_frames_887 = ((rt_int)0LL);
g_handlers_888 = NULL;
g_cleanups_889 = NULL;
g_trial_890 = RT_R_IUNDEF;
g_trial_890 = ((rt_int)0LL);
g_mcopies_891 = NULL;
g_ty_int_892 = NULL;
g_ty_bool_893 = NULL;
g_ty_float_894 = NULL;
g_ty_ascii_895 = NULL;
g_ty_string_896 = NULL;
g_ty_void_897 = NULL;
g_ty_file_898 = NULL;
g_ty_nil_899 = NULL;
g_ty_lock_900 = NULL;
g_ty_latch_901 = NULL;
g_ty_act_902 = NULL;
g_file_mode_type_903 = NULL;
g_no_cons_904 = NULL;
{ P809 cell2251 = rt_alloc(sizeof *cell2251);
rt_int pv2252 = ((rt_int)1000000LL);
cell2251->p_n = pv2252;
cell2251->all.lo = ((rt_int)1LL); cell2251->all.hi = pv2252;
cell2251->all.lo2 = cell2251->all.hi2 = 1;
cell2251->all.p = rt_alloc(sizeof(P807) * (size_t)(RT_CNT(cell2251->all)) + 1);
for (rt_int i2253 = 0; i2253 < (RT_CNT(cell2251->all)); i2253++) {
cell2251->all.p[i2253] = NULL;
}
g_toks_843 = cell2251;
}
{ P826 cell2254 = rt_alloc(sizeof *cell2254);
rt_int pv2255 = (((rt_int)4093LL));
cell2254->p_n = pv2255;
cell2254->all.lo = ((rt_int)0LL); cell2254->all.hi = pv2255;
cell2254->all.lo2 = cell2254->all.hi2 = 1;
cell2254->all.p = rt_alloc(sizeof(P822) * (size_t)(RT_CNT(cell2254->all)) + 1);
for (rt_int i2256 = 0; i2256 < (RT_CNT(cell2254->all)); i2256++) {
cell2254->all.p[i2256] = NULL;
}
g_table_848 = cell2254;
}
g_out_types_855 = f_new_buffer_24();
g_out_helpers_856 = f_new_buffer_24();
g_out_protos_857 = f_new_buffer_24();
g_out_globals_858 = f_new_buffer_24();
g_out_funcs_859 = f_new_buffer_24();
g_out_init_860 = f_new_buffer_24();
g_out_excs_861 = f_new_buffer_24();
g_out_frames_871 = f_new_buffer_24();
g_out_roots_872 = f_new_buffer_24();
g_code_862 = g_out_init_860;
g_no_cons_904 = f_new_cons_175();
g_ty_int_892 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_893 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_894 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_896 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_897 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_898 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_899 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_900 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_901 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_902 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2257;
if (RT_TRY(xf2257)) {
f_init_ascii_250();
f_read_source_58();
f_translate_803(f_program_150());
f_print_program_804();
RT_POP(xf2257);
} else {
RT_POP(xf2257);
int x2258 = rt_xcur;
if (0 || x2258 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2258);
}
}
}
  rt_main_done();
  return 0;
}
