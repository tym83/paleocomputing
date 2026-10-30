#include "paleo.h"
#include <math.h>
typedef struct Pc814 *P813;
typedef struct R816 R816;
typedef struct R816 *P815;
struct R816 {  rt_int kind; rt_int line; rt_int ival; P813 s; P813 prags;  };
typedef struct Pc818 *P817;
typedef struct A819 A819;
struct A819 { rt_int lo, hi, lo2, hi2; P815 *p; };
typedef struct R821 R821;
typedef struct R821 *P820;
struct R821 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P813 name; P813 tag; P813 prags; P820 labels; P820 a; P820 b; P820 c; P820 d; P820 e; P820 next;  };
typedef struct R823 R823;
typedef struct R823 *P822;
typedef struct R825 R825;
typedef struct R825 *P824;
struct R825 {  P813 s; P824 next;  };
struct R823 {  P813 lo; P813 hi; P813 lo2; P813 hi2; P813 slen; rt_int mlo; rt_int mhi; int hasm; P820 args; int dyn; rt_int lvl; P813 prec; P824 bnds;  };
typedef struct R827 R827;
typedef struct R827 *P826;
typedef struct R829 R829;
typedef struct R829 *P828;
struct R829 {  P813 name; P826 t; P822 c; P820 st; P828 next;  };
typedef struct R831 R831;
typedef struct R831 *P830;
typedef struct R833 R833;
typedef struct R833 *P832;
struct R833 {  P813 name; rt_int mode; P826 t; P822 c; P813 cfield; P832 next;  };
typedef struct Pc835 *P834;
typedef struct A836 A836;
struct A836 { rt_int lo, hi, lo2, hi2; P830 *p; };
typedef struct R838 R838;
typedef struct R838 *P837;
struct R838 {  rt_int depth; P820 imps; int all_imp; P837 next;  };
typedef struct R840 R840;
typedef struct R840 *P839;
struct R840 {  rt_int kind; rt_int i; P813 s; P826 t;  };
struct R831 {  rt_int kind; P813 name; P826 t; P822 c; P813 access; P813 cname; int ro_flag; rt_int mvalue; int hasmv; P820 st; P820 decl; P832 params; P826 result; rt_int depth; rt_int level; int byref; P830 members; P830 mnext; P820 binds; P830 insts; P834 env; P830 chain; P830 stack; P830 owner; P837 gctx; P839 mv; P824 reqs; int reqdone; P820 home; P820 capn; P830 tbinds;  };
typedef struct R842 R842;
typedef struct R842 *P841;
struct R842 {  P826 t; P841 next;  };
struct R827 {  rt_int kind; P813 name; P820 lits; P826 elem; P826 idx; P826 idx2; P822 elemcons; P820 elemst; P826 under; P820 tparams; P820 ocap; P828 fields; P826 target; P820 decl; P813 cname; int forward; int defined; int helpers; P830 initp; P830 finalp; P830 tpsyms; P830 gen; P830 gbinds; P826 next; rt_int ndim; P841 idxs;  };
typedef struct R844 R844;
typedef struct R844 *P843;
struct R844 {  P824 head; P824 tail;  };
typedef struct R846 R846;
typedef struct R846 *P845;
struct R846 {  P813 match; P813 label; rt_int depth; P845 next;  };
typedef struct R848 R848;
typedef struct R848 *P847;
struct R848 {  P820 d; P847 next; rt_int depth;  };
typedef struct R850 R850;
typedef struct R850 *P849;
struct R850 {  P820 d; P813 w; P849 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P813 result_;
 P813 t_913;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_916;
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
 rstr r_917;
 rt_int i_918;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_922;
 rstr w_923;
 rt_int i_924;
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
 P843 result_;
 P843 b_928;
};
struct f_put_27fr { int dummy;
 P843 b_25;
 rstr *s_26;
 P824 l_930;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P843 b_30;
 P824 l_932;
};
struct f_splice_34fr { int dummy;
 P843 a_32;
 P843 b_33;
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
 P815 t_934;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_936;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_937;
 rt_int k_938;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_942;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_943;
 P813 r_944;
 int more_945;
 rt_int k_946;
 int go_947;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_948;
 rt_int k_949;
 rstr p_950;
 int ok_951;
 int known_952;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_953;
 rt_int j_954;
 rt_int n_955;
 int c_956;
 rstr w_957;
 rt_int k_958;
 rstr w_962;
 rt_int k_963;
 rstr two_967;
};
struct f_read_source_58fr { int dummy;
 rstr line_968;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P820 result_;
 P820 x_969;
};
struct f_append_65fr { int dummy;
 P820 *head_62;
 P820 *tail_63;
 P820 x_64;
};
struct f_list_len_67fr { int dummy;
 P820 l_66;
 rt_int result_;
 rt_int n_971;
 P820 p_972;
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
 P813 result_;
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
 P813 result_;
};
struct f_name_node_90fr { int dummy;
 P820 result_;
 P820 x_973;
};
struct f_id_list_91fr { int dummy;
 P820 result_;
 P820 head_974;
 P820 tail_975;
};
struct f_p_subtype_92fr { int dummy;
 P820 result_;
 rt_int line_976;
 P820 x_977;
 rstr w_978;
 P820 head_979;
 P820 tail_980;
 P820 head_981;
 P820 tail_982;
 int more_983;
 P820 names_984;
 P820 st_985;
 P820 cmp_986;
 P820 head_987;
 P820 tail_988;
 int more_989;
 P820 lit_990;
};
struct f_constraint_list_93fr { int dummy;
 P820 result_;
 P820 head_991;
 P820 tail_992;
 int more_993;
 rt_int line_994;
 P820 lo_995;
 P820 r_996;
};
struct f_actual_params_94fr { int dummy;
 P820 result_;
 P820 head_997;
 P820 tail_998;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P820 result_;
 P820 head_999;
 P820 tail_1000;
 int more_1001;
};
struct f_binop_102fr { int dummy;
 P813 op_98;
 P820 l_99;
 P820 r_100;
 rt_int line_101;
 P820 result_;
 P820 x_1002;
};
struct f_expr_103fr { int dummy;
 P820 result_;
 P820 l_1003;
 P813 op_1004;
 rt_int line_1005;
};
struct f_expr_and_104fr { int dummy;
 P820 result_;
 P820 l_1006;
 rt_int line_1007;
};
struct f_expr_not_105fr { int dummy;
 P820 result_;
 P820 x_1008;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P820 result_;
 P820 l_1009;
 P813 op_1010;
 rt_int line_1011;
};
struct f_expr_add_109fr { int dummy;
 P820 result_;
 P820 l_1012;
 P813 op_1013;
 rt_int line_1014;
};
struct f_expr_mul_110fr { int dummy;
 P820 result_;
 P820 l_1015;
 P813 op_1016;
 rt_int line_1017;
};
struct f_expr_pow_111fr { int dummy;
 P820 result_;
 P820 l_1018;
 rt_int line_1019;
};
struct f_expr_prefix_112fr { int dummy;
 P820 result_;
 P820 x_1020;
};
struct f_postfix_113fr { int dummy;
 P820 result_;
 P820 p_1021;
 rt_int line_1022;
 P820 x_1023;
 P820 head_1024;
 P820 tail_1025;
 int more_1026;
 P820 lo_1027;
 P820 r_1028;
 P820 x_1029;
 P820 x_1030;
 P820 x_1031;
};
struct f_primary_114fr { int dummy;
 P820 result_;
 rt_int line_1032;
 P820 x_1033;
 rt_int k_1034;
 rstr w_1035;
 P820 head_1036;
 P820 tail_1037;
 int more_1038;
};
struct f_constructor_item_115fr { int dummy;
 P820 result_;
 rt_int line_1039;
 P820 it_1040;
 P820 first_1041;
 P820 keys_1042;
 P820 ktail_1043;
 P820 lab_1044;
 rt_int save_1045;
 P820 more_1046;
 P820 tail2_1047;
 int ok_1048;
 int go_1049;
 P820 l2_1050;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P820 result_;
 P820 head_1051;
 P820 tail_1052;
 int stmts_1053;
 P820 after_1054;
 P820 x_1055;
};
struct f_body_element_118fr { int dummy;
 P820 result_;
 P820 x_1056;
 P813 pr_1057;
 P820 p_1058;
};
struct f_declaration_119fr { int dummy;
 P820 result_;
 rt_int line_1059;
 P820 head_1060;
 P820 tail_1061;
 P820 names_1062;
 P820 x_1063;
};
struct f_object_decl_120fr { int dummy;
 P820 result_;
 rt_int line_1064;
 int is_var_1065;
 P820 names_1066;
 P820 st_1067;
 P820 init_1068;
 P820 loc_1069;
 rt_int loc_kind_1070;
 P820 head_1071;
 P820 tail_1072;
 P820 x_1073;
};
struct f_abbrev_decl_121fr { int dummy;
 P820 result_;
 P820 x_1074;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1075;
};
struct f_type_decl_123fr { int dummy;
 P820 result_;
 rt_int line_1076;
 P813 name_1077;
 P820 params_1078;
 P820 x_1079;
 P820 tts_1080;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P820 result_;
 P820 head_1081;
 P820 tail_1082;
 int more_1083;
 rt_int mode_1084;
 P820 names_1085;
 P820 ntail_1086;
 P820 st_1087;
 P820 p_1088;
};
struct f_imports_list_128fr { int dummy;
 P820 owner_127;
 int result_;
 P820 head_1089;
 P820 tail_1090;
 int more_1091;
 int ro_1092;
 P820 x_1093;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P813 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P820 result_;
 rt_int line_1094;
 P820 x_1095;
 int is_abn_1096;
 int is_func_1097;
 int dummy_1098;
};
struct f_capsule_decl_133fr { int dummy;
 P820 result_;
 P820 x_1099;
 int dummy_1100;
 P820 head_1101;
 P820 tail_1102;
 int more_1103;
 P820 n_1104;
};
struct f_formal_tt_134fr { int dummy;
 P820 result_;
 P820 head_1105;
 P820 tail_1106;
 int more_1107;
};
struct f_generic_decl_135fr { int dummy;
 P820 result_;
 P820 x_1108;
 P820 head_1109;
 P820 tail_1110;
 int more_1111;
 P820 names_1112;
 rt_int kind_1113;
 P820 st_1114;
 P820 p_1115;
 P813 nm_1116;
 P820 st_1117;
};
struct f_task_decl_136fr { int dummy;
 P820 result_;
 P820 x_1118;
 int dummy_1119;
};
struct f_expose_decl_137fr { int dummy;
 P820 result_;
 P820 x_1120;
 P820 head_1121;
 P820 tail_1122;
 int more_1123;
 P820 n_1124;
 P820 head_1125;
 P820 tail_1126;
 int more_1127;
 P820 n_1128;
 P820 tgt_1129;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P820 result_;
 P820 labels_1130;
 P820 ltail_1131;
 P813 match_1132;
 P820 s_1133;
};
struct f_unlabeled_statement_141fr { int dummy;
 P820 result_;
 rt_int line_1134;
 P820 x_1135;
 P820 head_1136;
 P820 tail_1137;
 P820 invs_1138;
 P820 itail_1139;
 int more_1140;
 P820 target_1141;
};
struct f_arm_145fr { int dummy;
 P820 cond_142;
 P820 b_143;
 rt_int line_144;
 P820 result_;
 P820 x_1142;
};
struct f_if_stmt_146fr { int dummy;
 P820 result_;
 P820 x_1143;
 P820 head_1144;
 P820 tail_1145;
 P820 cond_1146;
 int go_1147;
};
struct f_case_stmt_147fr { int dummy;
 P820 result_;
 P820 x_1148;
 P820 head_1149;
 P820 tail_1150;
 P820 labs_1151;
 P820 ltail_1152;
 int more_1153;
 P820 l_1154;
};
struct f_repeat_stmt_148fr { int dummy;
 P820 result_;
 P820 x_1155;
};
struct f_guard_stmt_149fr { int dummy;
 P820 result_;
 P820 x_1156;
 P820 head_1157;
 P820 tail_1158;
 P820 h_1159;
};
struct f_program_150fr { int dummy;
 P820 result_;
 P820 head_1160;
 P820 tail_1161;
 P813 pr_1162;
 P820 u_1163;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1164;
 rt_int i_1165;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P830 result_;
 P830 y_1169;
};
struct f_lookup_decl_156fr { int dummy;
 P820 d_155;
 P830 result_;
 P830 y_1170;
};
struct f_define_159fr { int dummy;
 P830 y_157;
 rt_int line_158;
 rt_int h_1171;
 P830 z_1172;
};
struct f_overloadable_161fr { int dummy;
 P830 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P820 a_162;
 P820 b_163;
 int result_;
 P820 x_1173;
 P820 y_1174;
};
struct f_same_signature_167fr { int dummy;
 P832 a_165;
 P832 b_166;
 int result_;
 P832 x_1175;
 P832 y_1176;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P813 name_171;
 P830 result_;
 P830 y_1177;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P826 result_;
 P826 t_1179;
};
struct f_new_cons_175fr { int dummy;
 P822 result_;
 P822 c_1181;
};
struct f_scalar_kind_177fr { int dummy;
 P826 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P826 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P822 c_180;
 rstr *b_181;
 rstr result_;
 P813 p_1183;
 rt_int i_1184;
};
struct f_clo_184fr { int dummy;
 P822 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P822 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P826 t_187;
 P822 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P826 t_190;
 P822 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1188;
 rstr f_1189;
};
struct f_copy_cons_197fr { int dummy;
 P822 c_196;
 P822 result_;
 P822 r_1190;
};
struct f_freeze_200fr { int dummy;
 P822 c_198;
 P826 t_199;
 P822 result_;
 P822 r_1192;
 P813 saved_field_1193;
 rstr ct_1194;
 rstr la_1195;
 rstr lf_1196;
 rstr ha_1197;
 rstr hf_1198;
};
struct f_checked_204fr { int dummy;
 P826 t_201;
 P822 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P820 a_205;
 P820 b_206;
 int result_;
 P820 x_1199;
 P820 y_1200;
};
struct f_str_elem_209fr { int dummy;
 P826 t_208;
 P826 result_;
};
struct f_same_212fr { int dummy;
 P826 a_210;
 P826 b_211;
 int result_;
 P841 x_1201;
 P841 y_1202;
 P828 f_1203;
 P828 g_1204;
};
struct f_base_of_214fr { int dummy;
 P826 t_213;
 P826 result_;
};
struct f_base_cons_217fr { int dummy;
 P826 t_215;
 P822 c_216;
 P822 result_;
};
struct f_kind_name_219fr { int dummy;
 P826 t_218;
 rstr result_;
};
struct f_check_type_223fr { int dummy;
 P826 got_220;
 P826 want_221;
 rt_int line_222;
};
struct f_ctype_225fr { int dummy;
 P826 t_224;
 rstr result_;
};
struct f_struct_body_227fr { int dummy;
 P826 t_226;
 rstr result_;
};
struct f_field_decls_229fr { int dummy;
 P826 t_228;
 rstr result_;
 P828 f_1207;
 P813 s_1208;
};
struct f_declare_ctype_231fr { int dummy;
 P826 t_230;
 P826 u_1209;
 P820 p_1210;
 P813 fs_1211;
 rstr sn_1212;
 P822 pc_1213;
 P826 target_1214;
 P820 p_1215;
 P813 fs_1216;
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
 P826 t_236;
 rstr result_;
 P813 r_1217;
 rt_int k_1218;
};
struct f_acnt_240fr { int dummy;
 P826 t_238;
 rstr *base_239;
 rstr result_;
 P813 r_1222;
 rt_int k_1223;
};
struct f_cons_lo_243fr { int dummy;
 P822 c_241;
 rt_int k_242;
 P813 result_;
 P824 l_1227;
 rt_int i_1228;
};
struct f_cons_hi_246fr { int dummy;
 P822 c_244;
 rt_int k_245;
 P813 result_;
 P824 l_1232;
 rt_int i_1233;
};
struct f_idx_type_249fr { int dummy;
 P826 t_247;
 rt_int k_248;
 P826 result_;
 P841 l_1237;
 rt_int i_1238;
};
struct f_init_ascii_250fr { int dummy;
 P820 head_1242;
 P820 tail_1243;
 rt_int start_1244;
 rt_int i_1245;
 P820 lit_1249;
 P820 h2_1250;
 P820 t2_1251;
 P820 l1_1252;
 P820 l2_1253;
 P820 l3_1254;
};
struct f_lit_index_253fr { int dummy;
 P820 lits_251;
 rstr *name_252;
 rt_int result_;
 rt_int i_1255;
 P820 l_1256;
};
struct f_resolve_subtype_256fr { int dummy;
 P820 st_254;
 P822 *c_255;
 P822 c_255v;
 P826 result_;
 P826 t_1257;
 int ok_1258;
 P826 dummy_1259;
 P826 et_1261;
 P822 ec_1262;
 P826 et_1263;
 P820 ix_1264;
 rt_int k_1265;
 P841 tail_1266;
 P824 btail_1267;
 P822 ic_1268;
 P826 it_1269;
 P813 lo_1270;
 P813 hi_1271;
 P841 tl_1272;
 P824 l1_1274;
 P824 l2_1275;
 P822 ec_1278;
 P820 comp_1279;
 P828 tail_1280;
 P822 cc_1281;
 P828 f_1282;
 P820 lits_1284;
 P820 ltail_1285;
 P828 f_1286;
 P820 l_1287;
 P820 gt_1288;
 P822 ec_1289;
 P813 base_1290;
};
struct f_float_lit_258fr { int dummy;
 P820 e_257;
 int result_;
};
struct f_tag_constraint_262fr { int dummy;
 P826 t_259;
 P820 e_260;
 P822 c_261;
 P826 dummy_1291;
};
struct f_named_subtype_265fr { int dummy;
 P820 st_263;
 P822 *c_264;
 P822 c_264v;
 P826 result_;
 P826 t_1292;
 P830 y_1293;
 rstr name_1294;
};
struct f_invoke_abbrev_269fr { int dummy;
 P830 y_266;
 P820 st_267;
 P822 *c_268;
 P822 c_268v;
 P826 result_;
 P820 p_1295;
 P820 a_1296;
 P826 t_1297;
 P830 z_1298;
 P822 pc_1299;
 P826 at_1300;
 int ok_1301;
};
struct f_apply_constraint_274fr { int dummy;
 P826 t_270;
 P820 args_271;
 P822 c_272;
 rt_int line_273;
 P826 dummy_1302;
 int ok_1303;
};
struct f_value_subtype_278fr { int dummy;
 P820 e_275;
 P822 *c_276;
 P822 c_276v;
 P813 *base_277;
 P813 base_277v;
 P826 result_;
 P826 t_1304;
 P822 c0_1305;
 int ro_1306;
 rt_int k_1307;
 rstr lo_1311;
 rstr hi_1312;
 P824 l1_1313;
 P824 l2_1314;
 P820 p_1317;
 P820 head_1318;
 P820 tail_1319;
 P820 sel_1320;
};
struct f_reverse_pairs_280fr { int dummy;
 P824 l_279;
 P824 result_;
 P824 r_1321;
 P824 p_1322;
 P824 a_1323;
 P824 b_1324;
};
struct f_inquiry_283fr { int dummy;
 P820 st_281;
 P822 *c_282;
 P822 c_282v;
 P826 result_;
 P813 base_1325;
 P826 t_1326;
 rstr name_1327;
 P820 sub_1328;
 P822 c2_1329;
 rt_int k_1330;
 int ok_1331;
 P822 ac_1332;
};
struct f_as_subtype_285fr { int dummy;
 P820 e_284;
 P820 result_;
 P820 st_1333;
 rstr name_1334;
 P830 y_1335;
};
struct f_tt_subtype_290fr { int dummy;
 P813 name_286;
 P820 tt_287;
 P820 args_288;
 rt_int line_289;
 P820 result_;
 P820 st_1336;
};
struct f_type_name_292fr { int dummy;
 rstr *name_291;
 int result_;
 P830 y_1337;
};
struct f_empty_set_294fr { int dummy;
 P826 t_293;
 rstr result_;
};
struct f_opened_296fr { int dummy;
 P826 t_295;
 int result_;
 P847 c_1338;
};
struct f_replace_all_300fr { int dummy;
 rstr *s_297;
 rstr *pat_298;
 rstr *r_299;
 rstr result_;
 rt_int i_1339;
};
struct f_subst_302fr { int dummy;
 rstr *s_301;
 rstr result_;
 P824 l_1340;
 P813 r_1341;
};
struct f_new_type_306fr { int dummy;
 P830 y_303;
 P820 st_304;
 P822 *c_305;
 P822 c_305v;
 P826 result_;
 P820 d_1342;
 P820 p_1343;
 P822 uc_1344;
 P830 z_1345;
 P822 zc_1346;
};
struct f_init_storage_310fr { int dummy;
 rstr *lval_307;
 P826 t_308;
 P822 c_309;
};
struct f_init_call_313fr { int dummy;
 P830 y_311;
 rstr *lval_312;
 rstr result_;
 P813 link_1347;
 rt_int i_1348;
};
struct f_needs_fin_315fr { int dummy;
 P826 t_314;
 int result_;
 P828 f_1352;
};
struct f_fin_code_318fr { int dummy;
 rstr *lval_316;
 P826 t_317;
 rstr result_;
 P813 r_1353;
 rstr i_1354;
 P828 f_1355;
 P828 f_1356;
 rt_int i_1357;
};
struct f_tparam_type_321fr { int dummy;
 P826 t_319;
 rstr *name_320;
 P826 result_;
 P830 z_1358;
};
struct f_make_storage_325fr { int dummy;
 rstr *lval_322;
 P826 t_323;
 P822 c_324;
 P820 p_1359;
 P820 a_1360;
 P822 uc_1361;
 P826 ut_1362;
 P826 at_1363;
 P826 pt_1364;
 rstr v_1365;
 P824 saved_1366;
 P824 l1_1367;
 P824 l2_1368;
 rt_int k_1371;
 rstr i_1375;
 P828 f_1376;
 P828 f_1377;
 rt_int i_1378;
};
struct f_uninit_value_327fr { int dummy;
 P826 t_326;
 rstr result_;
};
struct f_init_chk_330fr { int dummy;
 P826 t_328;
 rstr *v_329;
 rstr result_;
 P826 b_1382;
};
struct f_manifest_333fr { int dummy;
 P820 e_331;
 int *ok_332;
 int ok_332v;
 rt_int result_;
 P839 v_1383;
};
struct f_mk_mval_336fr { int dummy;
 rt_int kind_334;
 rt_int i_335;
 P839 result_;
 P839 v_1384;
};
struct f_ipow_339fr { int dummy;
 rt_int a_337;
 rt_int b_338;
 rt_int result_;
 rt_int r_1386;
 rt_int i_1387;
};
struct f_meval_342fr { int dummy;
 P820 e_340;
 int *ok_341;
 int ok_341v;
 P839 result_;
 P839 a_1391;
 P839 b_1392;
 int ok2_1393;
 P813 op_1394;
 P830 y_1395;
 P839 r_1396;
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
 P839 v_347;
 rstr result_;
};
struct f_ascii_char_350fr { int dummy;
 rt_int i_349;
 int result_;
 rstr printable_1397;
};
struct f_user_defined_352fr { int dummy;
 rstr *op_351;
 int result_;
 P830 y_1398;
};
struct f_mcopy_354fr { int dummy;
 P826 t_353;
 rstr result_;
 rstr ct_1399;
 rstr name_1400;
 P824 l_1401;
};
struct f_composite_356fr { int dummy;
 P826 t_355;
 int result_;
};
struct f_assign_code_361fr { int dummy;
 rstr *lval_357;
 P826 t_358;
 rstr *v_359;
 P822 c_360;
 rstr result_;
};
struct f_copy_code_364fr { int dummy;
 P826 t_362;
 rstr *v_363;
 rstr result_;
};
struct f_eq_code_368fr { int dummy;
 P826 t_365;
 rstr *a_366;
 rstr *b_367;
 rstr result_;
};
struct f_elem_assign_372fr { int dummy;
 rstr *lval_369;
 P826 t_370;
 rstr *v_371;
 rstr result_;
};
struct f_seen_name_375fr { int dummy;
 P824 l_373;
 rstr *s_374;
 int result_;
 P824 p_1403;
};
struct f_emit_helpers_376fr { int dummy;
 P826 order_1404;
 P826 t_1405;
 P824 done_1406;
 P824 l_1407;
 rstr c_1408;
};
struct f_helper_bodies_378fr { int dummy;
 P826 t_377;
 rstr c_1410;
 P843 b_1411;
 P826 e_1412;
 P813 sizes_1413;
 P813 bounds_1414;
 rt_int k_1415;
 rstr l_1419;
 rstr h_1420;
 P824 saved_1421;
 P820 p_1422;
 P824 l1_1423;
 P824 l2_1424;
 P828 f_1427;
 rt_int i_1428;
 P813 cases_as_1429;
 P813 cases_cp_1430;
 P813 cases_eq_1431;
 rstr fn_1432;
 P828 f_1433;
 P813 conds_1434;
 rstr fn_1435;
 rstr fn_1436;
};
struct f_declare_body_380fr { int dummy;
 P820 elems_379;
 P820 e_1437;
 P830 g_1438;
 P830 y_1439;
 P830 y_1440;
 P830 y_1441;
 P826 t_1442;
 P830 y_1443;
 P830 y_1444;
 P834 snap_1445;
 rt_int i_1449;
 P830 g_1453;
 P830 y_1454;
};
struct f_manifest_const_382fr { int dummy;
 P820 d_381;
 int ok_1455;
 P839 v_1456;
 P830 y_1457;
 P826 t_1458;
 P813 ctext_1459;
 P843 saved_1460;
};
struct f_exported_386fr { int dummy;
 P820 d_383;
 rstr *name_384;
 int *ro_385;
 int ro_385v;
 int result_;
 P820 p_1463;
};
struct f_copy_sym_388fr { int dummy;
 P830 y_387;
 P830 result_;
 P830 z_1464;
};
struct f_gen_capsule_390fr { int dummy;
 P820 d_389;
 P830 y_1466;
 P813 saved_1467;
 P820 p_1468;
 P832 tail_1469;
 P832 pm_1470;
};
struct f_capsule_params_394fr { int dummy;
 P820 d_391;
 P820 args_392;
 rt_int line_393;
 P820 p_1472;
 P820 a_1473;
 P826 t_1474;
 P826 vt_1475;
 P822 c_1476;
 P813 lv_1477;
 P822 lc_1478;
 int ro_1479;
 P830 y_1480;
 rstr f_1481;
 rstr g_1482;
 P830 y_1483;
 rstr v_1484;
 rstr access_1485;
};
struct f_elaborate_capsule_399fr { int dummy;
 P820 d_395;
 P830 y_396;
 P820 args_397;
 P820 owner_398;
 P847 cr_1486;
 P837 ctx_1487;
 P845 saved_gotos_1488;
 P830 m_1489;
 P820 p_1490;
 int ro_1491;
 P849 w_1494;
 P830 z_1496;
};
struct f_exports_op_402fr { int dummy;
 P820 d_400;
 rstr *op_401;
 int result_;
 P820 p_1497;
};
struct f_renamed_405fr { int dummy;
 P820 d_403;
 P830 z_404;
 P813 result_;
 P820 r_1498;
};
struct f_pick_capsule_407fr { int dummy;
 P820 d_406;
 P830 result_;
 P830 y_1499;
 P830 first_1500;
 P830 fit_1501;
 rt_int n_1502;
};
struct f_capsule_instance_410fr { int dummy;
 P830 g_408;
 P820 d_409;
 P830 result_;
 P820 gd_1503;
 P820 pat_1504;
 P830 binds_1505;
 P830 inst_1506;
 P834 saved_env_1507;
 rt_int saved_gdepth_1508;
 P830 b_1509;
};
struct f_gen_expose_412fr { int dummy;
 P820 d_411;
 P830 y_1510;
 P830 m_1511;
 P820 p_1512;
 P820 r_1513;
 P830 inst_1514;
 int found_1515;
 P830 z_1516;
 int found_1517;
 P830 z_1518;
};
struct f_finish_ptr_414fr { int dummy;
 P826 t_413;
 P820 d_1519;
 P820 p_1520;
 P822 c_1521;
 rstr dummy_1522;
 rt_int pass_1523;
 P830 y_1527;
 P822 pc_1528;
};
struct f_ptr_args_416fr { int dummy;
 P822 c_415;
 P820 result_;
};
struct f_bind_ptr_params_421fr { int dummy;
 P820 formals_417;
 P820 actuals_418;
 rstr *cell_419;
 rt_int line_420;
 P820 p_1529;
 P820 a_1530;
 P826 vt_1531;
 P822 pc_1532;
 P830 y_1533;
 rstr v_1534;
 rstr pv_1535;
};
struct f_alloc_cell_426fr { int dummy;
 P820 s_422;
 rstr *lv_423;
 P826 t_424;
 P822 c_425;
 P820 d_1536;
 P822 tc_1537;
 P826 vt_1538;
 rstr pt_1539;
 rstr cell_1540;
 rstr fn_1541;
 rstr v_1542;
};
struct f_freeze_args_430fr { int dummy;
 P822 c_427;
 P826 t_428;
 rt_int line_429;
 P822 result_;
 P822 r_1543;
 P820 p_1544;
 P820 a_1545;
 P820 head_1546;
 P820 tail_1547;
 P813 saved_1548;
 P822 pc_1549;
 P826 vt_1550;
 P826 pt_1551;
 rstr nm_1552;
 P830 y_1553;
 P820 n_1554;
 rstr v_1555;
 rstr access_1556;
};
struct f_ptr_subtype_check_434fr { int dummy;
 P826 t_431;
 P822 c_432;
 P820 src_433;
 P813 lv_1557;
 P826 st_1558;
 P822 sc_1559;
 int ro_1560;
 P813 cond_1561;
 P820 a_1562;
 P820 b_1563;
 P826 at_1564;
 P826 bt_1565;
 rstr x_1566;
 rstr y_1567;
};
struct f_normal_function_437fr { int dummy;
 P820 d_435;
 P830 y_436;
 P832 p_1568;
 P820 imp_1569;
 int ro_1570;
 P830 z_1571;
};
struct f_declare_subprogram_439fr { int dummy;
 P820 d_438;
};
struct f_build_subprogram_441fr { int dummy;
 P820 d_440;
 P830 result_;
 P830 y_1572;
 P820 p_1573;
 P832 tail_1574;
 P832 pm_1575;
 P822 rc_1577;
 P832 pm_1578;
 P843 saved_1579;
 P830 z_1580;
};
struct f_has_pragmat_444fr { int dummy;
 P813 pr_442;
 rstr *p_443;
 int result_;
 rt_int i_1581;
};
struct f_suppressing_446fr { int dummy;
 P813 pr_445;
 P813 result_;
 P813 r_1585;
 rt_int i_1586;
 rt_int j_1587;
 rt_int k_1588;
};
struct f_suppressed_448fr { int dummy;
 rstr *x_447;
 int result_;
 rstr w_1589;
 rt_int i_1590;
};
struct f_element_450fr { int dummy;
 P820 e_449;
 P813 saved_1594;
};
struct f_element1_452fr { int dummy;
 P820 e_451;
 rt_int k_1595;
 P830 g_1596;
 rt_int i_1600;
 P826 t_1604;
 rstr c_1605;
};
struct f_storage_455fr { int dummy;
 rstr *name_453;
 P826 t_454;
 rstr result_;
 rstr g_1606;
 rstr f_1607;
};
struct f_bind_458fr { int dummy;
 P830 y_456;
 rstr *access_457;
};
struct f_var_decl_460fr { int dummy;
 P820 d_459;
 P822 c_1608;
 P826 t_1609;
 P830 y_1610;
 rstr access_1611;
 P826 it_1612;
 rstr n_1613;
 P826 vt_1614;
 rstr v_1615;
};
struct f_open_fin_462fr { int dummy;
 rstr *fc_461;
 rstr f_1616;
 P824 l_1617;
};
struct f_close_fins_464fr { int dummy;
 P824 saved_463;
};
struct f_const_decl_466fr { int dummy;
 P820 d_465;
 P822 c_1619;
 P826 t_1620;
 P826 vt_1621;
 P830 y_1622;
 int ok_1623;
 rstr v_1624;
 rstr access_1625;
};
struct f_subprogram_468fr { int dummy;
 P820 d_467;
};
struct f_gen_subprogram_471fr { int dummy;
 P820 d_469;
 P830 y_470;
 P843 saved_code_1626;
 P843 saved_fields_1627;
 int saved_in_1628;
 P830 saved_sym_1629;
 P845 saved_exits_1630;
 P845 saved_gotos_1631;
 rt_int saved_frames_1632;
 P813 args_1633;
 P832 pm_1634;
 P824 saved_handlers_1635;
 P824 saved_cleanups_1636;
 P837 ctx_1637;
 P813 head_1638;
 P813 frame_1639;
 P813 parent_1640;
 P813 copy_back_1641;
 P813 pfin_1642;
 P824 saved_fins_1643;
 P822 saved_rc_1644;
 P813 saved_ret_1645;
 P813 saved_rflag_1646;
 P820 pn_1647;
 P813 nonrec_end_1648;
 int has_pfin_1649;
 rstr ct_1651;
 rstr f_1652;
 P830 p_1653;
 P822 pc_1654;
 P822 ac_1655;
 P822 fc_1656;
 P826 ft_1657;
 rstr bt_1658;
 P822 rc_1659;
 P826 rt_1660;
 rstr g_1661;
 P813 leave_1662;
};
struct f_waits_of_473fr { int dummy;
 P820 d_472;
 rstr result_;
 P849 w_1663;
};
struct f_task_waits_475fr { int dummy;
 P820 elems_474;
 rstr result_;
 P820 e_1664;
 P813 r_1665;
};
struct f_await_tasks_477fr { int dummy;
 P820 elems_476;
 rstr w_1666;
};
struct f_capsule_elements_479fr { int dummy;
 P820 elems_478;
 P820 e_1667;
};
struct f_declare_labels_481fr { int dummy;
 P820 elems_480;
 P820 e_1668;
 P820 l_1669;
 P845 x_1670;
};
struct f_start_labels_482fr { int dummy;
 P845 x_1672;
};
struct f_goto_label_484fr { int dummy;
 rstr *name_483;
 P845 result_;
 P845 x_1673;
};
struct f_has_return_486fr { int dummy;
 P820 e_485;
 int result_;
 P820 x_1674;
};
struct f_capsule_body_488fr { int dummy;
 P820 elems_487;
 P813 saved_ret_1675;
 P813 saved_flag_1676;
 rt_int saved_frames_1677;
 P820 e_1678;
 int stmt_1679;
};
struct f_body_elements_490fr { int dummy;
 P820 elems_489;
};
struct f_gen_body_492fr { int dummy;
 P820 elems_491;
 P824 saved_1680;
 P845 saved_gotos_1681;
};
struct f_pop_frames_494fr { int dummy;
 rt_int upto_493;
 rt_int i_1682;
 P824 c_1683;
};
struct f_push_cleanup_496fr { int dummy;
 rstr *s_495;
 P824 c_1684;
};
struct f_pop_cleanup_497fr { int dummy;
};
struct f_gen_statement_499fr { int dummy;
 P820 s_498;
 P813 label_1686;
 P820 gl_1687;
 P845 x_1688;
 P845 x_1691;
};
struct f_st_assign_501fr { int dummy;
 P820 s_500;
 P813 lv_1692;
 P826 t_1693;
 P826 vt_1694;
 P822 c_1695;
 int ro_1696;
 rstr lo_1697;
 rstr hi_1698;
 rstr v_1699;
 rstr lo_1700;
 rstr hi_1701;
 rstr v_1702;
 rstr v_1703;
};
struct f_st_call_503fr { int dummy;
 P820 s_502;
 P820 c_1704;
 P826 t_1705;
 P820 x_1706;
};
struct f_st_if_505fr { int dummy;
 P820 s_504;
 P820 a_1707;
 int first_1708;
 P826 t_1709;
 int taken_1710;
 int ok_1711;
 P839 mv_1712;
 rstr c_1713;
};
struct f_st_case_507fr { int dummy;
 P820 s_506;
 P826 st_1714;
 P826 vt_1715;
 int first_1716;
 P820 a_1717;
 rstr sel_1718;
 rstr tmp_1719;
 P820 lab_1720;
 P813 conds_1721;
 rstr v_1722;
 rstr lo_1723;
 rstr hi_1724;
};
struct f_st_repeat_509fr { int dummy;
 P820 s_508;
 P826 t_1725;
 P822 c_1726;
 rstr cond_1727;
 rstr access_1728;
 rstr lov_1729;
 rstr hiv_1730;
 rstr it_1731;
 P830 y_1732;
};
struct f_st_exit_511fr { int dummy;
 P820 s_510;
 P845 x_1733;
};
struct f_st_return_513fr { int dummy;
 P820 s_512;
 P826 vt_1734;
 rstr v_1735;
};
struct f_result_checked_517fr { int dummy;
 P826 t_514;
 P822 c_515;
 rstr *v_516;
 rstr result_;
};
struct f_exc_id_520fr { int dummy;
 rstr *name_518;
 rt_int line_519;
 rstr result_;
 P830 y_1736;
};
struct f_st_guard_522fr { int dummy;
 P820 s_521;
 P820 h_1737;
 int first_1738;
 P824 hv_1739;
 rstr f_1740;
 rstr x_1741;
 P820 n_1743;
 P813 conds_1744;
};
struct f_st_alloc_524fr { int dummy;
 P820 s_523;
 P813 lv_1745;
 P826 t_1746;
 P826 target_1747;
 P826 vt_1748;
 P822 c_1749;
 P822 tc_1750;
 int ro_1751;
 P820 d_1752;
 P820 p_1753;
 P820 a_1754;
 rstr tcn_1755;
 rstr cell_1756;
 rstr fn_1757;
 rstr v_1758;
};
struct f_act_ref_526fr { int dummy;
 P820 e_525;
 rstr result_;
 P813 lv_1759;
 P826 t_1760;
 P822 c_1761;
 int ro_1762;
 rstr v_1763;
};
struct f_st_create_528fr { int dummy;
 P820 s_527;
 P830 y_1764;
 P832 pm_1765;
 P820 a_1766;
 P813 lv_1767;
 P826 lt_1768;
 P826 vt_1769;
 P822 lc_1770;
 int ro_1771;
 P826 at_1772;
 P822 ac_1773;
 int aro_1774;
 P813 act_1775;
 rstr nf_1776;
 P813 link_1777;
 rt_int i_1778;
 rstr v_1782;
};
struct f_hidden_var_532fr { int dummy;
 rstr *name_529;
 P826 t_530;
 rstr *place_531;
 P830 y_1783;
};
struct f_user_create_538fr { int dummy;
 P820 s_533;
 P830 y_534;
 rstr *uv_535;
 P826 ut_536;
 rstr *nf_537;
 P826 t_1784;
 P843 saved_1785;
 P843 hook_1786;
 P820 un_1787;
 rstr hn_1788;
 rstr aa_1789;
 rstr uname_1790;
 rstr aname_1791;
 P820 start_1792;
 P820 an_1793;
};
struct f_wait_alt_543fr { int dummy;
 P820 inv_539;
 rstr *arr_540;
 rt_int i_541;
 int mixed_542;
 rstr result_;
 P813 lv_1794;
 P826 t_1795;
 P826 vt_1796;
 P822 c_1797;
 int ro_1798;
 P820 fn_1799;
 P820 args_1800;
 rstr slot_1801;
 P813 dv_1802;
 P826 dt_1803;
 rstr tmp_1804;
 rstr v_1805;
 rstr v_1806;
};
struct f_builtin_wait_545fr { int dummy;
 P820 inv_544;
 int result_;
 P813 lv_1807;
 P826 t_1808;
 P822 c_1809;
 int ro_1810;
 P843 saved_1811;
 int ok_1812;
};
struct f_wait_op_550fr { int dummy;
 P820 inv_546;
 rstr *op_547;
 rstr *q_548;
 int is_stmt_549;
 rstr result_;
 P820 x_1815;
 P820 f_1816;
 P820 qn_1817;
 P826 t_1818;
 rstr r_1819;
};
struct f_user_wait_555fr { int dummy;
 P820 s_551;
 rstr *arr_552;
 rstr *w_553;
 rt_int n_554;
 P820 a_1820;
 rt_int i_1821;
 P813 tests_1822;
 P813 revokes_1823;
 P820 inv_1824;
 P820 st_1825;
 P822 c_1826;
 P826 qt_1827;
 rstr qname_1828;
 P830 y_1829;
 rstr access_1830;
};
struct f_st_wait_557fr { int dummy;
 P820 s_556;
 P820 a_1831;
 rt_int n_1832;
 int first_1833;
 P843 inits_1834;
 int user_1835;
 rstr arr_1836;
 rstr w_1837;
 P820 inv_1838;
 P820 inv_1839;
 P813 conds_1840;
 rt_int i_1841;
};
struct f_call_node_561fr { int dummy;
 rstr *name_558;
 P820 arg_559;
 rt_int line_560;
 P820 result_;
 P820 x_1845;
 P820 f_1846;
};
struct f_user_region_563fr { int dummy;
 P820 s_562;
 P826 t_1847;
 rstr f_1848;
 rstr lock_1849;
 rstr unlock_1850;
};
struct f_st_region_565fr { int dummy;
 P820 s_564;
 P813 lv_1851;
 P826 t_1852;
 P822 c_1853;
 int ro_1854;
 rstr lk_1855;
 rstr f_1856;
};
struct f_gparam_568fr { int dummy;
 P820 g_566;
 rstr *name_567;
 P820 result_;
 P820 p_1857;
};
struct f_bind_sym_570fr { int dummy;
 P820 p_569;
 P830 result_;
 P830 y_1858;
};
struct f_same_binds_573fr { int dummy;
 P830 a_571;
 P830 b_572;
 int result_;
 P830 x_1859;
 P830 y_1860;
};
struct f_same_binding_576fr { int dummy;
 P830 a_574;
 P830 b_575;
 int result_;
};
struct f_tt_binds_581fr { int dummy;
 P820 gd_577;
 P820 formals_578;
 P820 actuals_579;
 rt_int line_580;
 P830 result_;
 P820 f_1861;
 P820 a_1862;
 P830 binds_1863;
 P822 c_1864;
 P826 at_1865;
 P820 p_1866;
 P830 b_1867;
 P820 st_1868;
 int ok_1869;
};
struct f_generic_use_583fr { int dummy;
 P820 st_582;
 int result_;
};
struct f_infer_from_588fr { int dummy;
 P820 gd_584;
 P820 pat_585;
 P826 t_586;
 P830 known_587;
 P830 result_;
 P830 binds_1870;
 P820 e_1871;
 P820 tp_1872;
 P813 nm_1873;
 P830 q_1874;
 int have_1875;
 P830 g_1876;
 P830 b_1877;
};
struct f_instantiate_type_594fr { int dummy;
 P830 g_589;
 P820 tt_590;
 P820 args_591;
 P822 *c_592;
 P822 c_592v;
 rt_int line_593;
 P826 result_;
 P820 gd_1878;
 P820 pat_1879;
 P830 binds_1880;
 P830 inst_1881;
 P826 t_1882;
 P847 saved_caps_1883;
 P834 saved_env_1884;
 rt_int saved_gdepth_1885;
 P830 b_1886;
 P830 y_1887;
 P822 yc_1888;
};
struct f_instantiate_599fr { int dummy;
 P830 g_595;
 P820 tt_596;
 P820 args_597;
 rt_int line_598;
 P830 result_;
 P820 gd_1890;
 P820 pat_1891;
 P830 binds_1892;
 P820 f_1893;
 P820 a_1894;
 P820 fp_1895;
 P830 inst_1896;
 P826 at_1897;
 P822 c_1898;
 P837 saved_fctx_1899;
 int saved_in_1900;
 rt_int saved_level_1901;
 P830 saved_sym_1902;
 P843 saved_code_1903;
 P834 saved_env_1904;
 rt_int saved_gdepth_1905;
 rstr v_1906;
 int known_1907;
 P830 q_1908;
 P830 b_1909;
 rstr v_1910;
 P830 b_1911;
};
struct f_access_of_601fr { int dummy;
 P830 y_600;
 rstr result_;
 P813 p_1912;
 rt_int i_1913;
};
struct f_import_of_604fr { int dummy;
 P820 l_602;
 rstr *name_603;
 P820 result_;
 P820 p_1917;
};
struct f_check_import_607fr { int dummy;
 P830 y_605;
 rt_int line_606;
 int result_;
 P837 c_1918;
 int ro_1919;
 P820 imp_1920;
};
struct f_c_ident_609fr { int dummy;
 rstr *s_608;
 rstr result_;
};
struct f_cell_deref_612fr { int dummy;
 P826 t_610;
 rstr *p_611;
 rstr result_;
};
struct f_deref_615fr { int dummy;
 rstr *base_613;
 P826 t_614;
 rstr result_;
};
struct f_is_lvalue_617fr { int dummy;
 P820 e_616;
 int result_;
 P830 y_1921;
};
struct f_lvalue_623fr { int dummy;
 P820 e_618;
 P813 *code_619;
 P813 code_619v;
 P826 *t_620;
 P826 t_620v;
 P822 *c_621;
 P822 c_621v;
 int *ro_622;
 int ro_622v;
 P813 base_1922;
 P826 bt_1923;
 P822 bc_1924;
 P830 y_1925;
};
struct f_select_on_631fr { int dummy;
 rstr *base_624;
 P826 bt_625;
 P820 e_626;
 int *ro_627;
 P813 *code_628;
 P813 code_628v;
 P826 *t_629;
 P826 t_629v;
 P822 *c_630;
 P822 c_630v;
 P820 p_1926;
 P822 pc_1927;
 P820 p_1928;
 P828 f_1929;
 rt_int i_1930;
 rstr fn_1931;
 P828 f_1932;
};
struct f_has_call_633fr { int dummy;
 rstr *s_632;
 int result_;
 rt_int i_1933;
};
struct f_need_slice_635fr { int dummy;
 P826 t_634;
 rstr c_1937;
 rstr n_1938;
 P824 l_1939;
};
struct f_ix_639fr { int dummy;
 rstr *i_636;
 rstr *lo_637;
 rstr *hi_638;
 rstr result_;
};
struct f_index_on_648fr { int dummy;
 rstr *base_640;
 P826 bt_641;
 P820 e_642;
 int *ro_643;
 int lv_644;
 P813 *code_645;
 P813 code_645v;
 P826 *t_646;
 P826 t_646v;
 P822 *c_647;
 P822 c_647v;
 P820 a_1941;
 P826 it_1942;
 rstr lo_1943;
 rstr hi_1944;
 P813 off_1945;
 rt_int k_1946;
 P813 b_1947;
 P813 pre_1948;
 rstr i_1949;
 rstr l_1950;
 rstr h_1951;
 rstr lo_1952;
 rstr hi_1953;
 rstr i_1954;
};
struct f_own_attribute_650fr { int dummy;
 P820 e_649;
 int result_;
 P843 saved_1955;
 P826 bt_1956;
 int ok_1957;
 rstr base_1960;
 P820 p_1961;
 P828 f_1962;
};
struct f_gexpr_654fr { int dummy;
 P820 e_651;
 P826 want_652;
 P826 *t_653;
 P826 t_653v;
 rstr result_;
 rt_int k_1963;
 P813 code_1964;
 P822 c_1965;
 int ro_1966;
 P826 bt_1967;
 P822 ctx_1968;
 P813 r_1969;
 rt_int i_1970;
 rt_int pos_1974;
 rt_int i_1975;
 P830 y_1976;
 int ro_1977;
 P820 call_1978;
 P820 fname_1979;
 rstr a_1980;
 rstr a_1981;
 rstr a_1982;
 P820 nm_1983;
 P830 y_1984;
 rstr base_1985;
 rstr base_1986;
};
struct f_resolved_657fr { int dummy;
 P820 e_655;
 P826 *t_656;
 P826 t_656v;
 rstr result_;
 P822 c_1987;
 P826 vt_1988;
 P830 y_1989;
 P820 tt_1990;
 P820 call_1991;
 P820 f_1992;
 P820 fname_1993;
 rstr v_1994;
};
struct f_gexpr_in_662fr { int dummy;
 P820 e_658;
 P826 want_659;
 P822 c_660;
 P826 *t_661;
 P826 t_661v;
 rstr result_;
};
struct f_ascii_lit_664fr { int dummy;
 int ch_663;
 rstr result_;
 P820 l_1995;
 rt_int i_1996;
};
struct f_octal_666fr { int dummy;
 rt_int n_665;
 rstr result_;
 rstr r_2000;
};
struct f_str_cat_part_668fr { int dummy;
 P826 t_667;
 P826 result_;
};
struct f_peek_type_670fr { int dummy;
 P820 e_669;
 P826 result_;
 P843 saved_2001;
 P826 t_2002;
 rstr v_2005;
};
struct f_set_operands_673fr { int dummy;
 P820 e_671;
 P826 want_672;
 P826 result_;
 P826 t_2006;
};
struct f_copy_node_675fr { int dummy;
 P820 e_674;
 P820 result_;
 P820 x_2007;
};
struct f_wrap_apply_677fr { int dummy;
 P820 e_676;
 P820 result_;
 P820 x_2009;
};
struct f_c_string_679fr { int dummy;
 rstr *s_678;
 rstr result_;
 rt_int n_2010;
 rt_int i_2011;
 rstr r_2015;
 rt_int j_2016;
 rt_int i_2017;
};
struct f_enum_type_of_682fr { int dummy;
 rstr *lit_680;
 rt_int line_681;
 P826 result_;
 P830 y_2021;
 P822 c_2022;
 P820 st_2023;
};
struct f_ptr_attribute_684fr { int dummy;
 P820 e_683;
 int result_;
 P813 lv_2024;
 P826 t_2025;
 P822 c_2026;
 int ro_2027;
 P820 p_2028;
 P843 saved_2029;
};
struct f_attribute_687fr { int dummy;
 P820 e_685;
 P826 *t_686;
 P826 t_686v;
 rstr result_;
 P826 bt_2030;
 P822 c_2031;
 P813 base_2032;
 P820 sub_2033;
 rstr name_2034;
 P820 p_2035;
 P820 a_2036;
 P822 pc_2037;
 rstr v_2038;
 P820 p_2039;
 P820 a_2040;
 P826 pt_2041;
 rstr v_2042;
};
struct f_subtype_compare_692fr { int dummy;
 P820 sa_688;
 P820 sb_689;
 rstr *op_690;
 rt_int line_691;
 rstr result_;
 P822 ca_2043;
 P822 cb_2044;
 P826 ta_2045;
 P826 tb_2046;
 P813 r_2047;
 rstr yes_2048;
 rstr no_2049;
 rt_int k_2050;
 P820 a_2054;
 P820 b_2055;
 P826 at_2056;
 P826 bt2_2057;
 rstr x_2058;
 rstr y_2059;
};
struct f_float_prec_694fr { int dummy;
 P822 c_693;
 rstr result_;
};
struct f_file_attribute_700fr { int dummy;
 P820 e_695;
 P826 bt_696;
 P822 c_697;
 P813 base_698;
 P826 *t_699;
 P826 t_699v;
 rstr result_;
};
struct f_gbinop_704fr { int dummy;
 P820 e_701;
 P826 want_702;
 P826 *t_703;
 P826 t_703v;
 rstr result_;
 P813 op_2060;
 P826 ta_2061;
 P826 tb_2062;
 P826 hint_2063;
 P830 uy_2064;
 P820 l_2065;
 P820 r_2066;
 P820 call_2067;
 P820 fname_2068;
 rstr s_2069;
 rstr a_2070;
 rstr a_2071;
 rstr b_2072;
 rstr a_2073;
 rstr b_2074;
 P826 at_2075;
 rstr a_2076;
 rstr b_2077;
 P826 wa_2078;
 P826 wb_2079;
 P826 ws_2080;
 P826 ce_2081;
 rstr a_2082;
 rstr b_2083;
 rstr dummy_2084;
 rstr a_2085;
 rstr b_2086;
 P826 ct_2087;
 rstr a_2088;
 rstr b_2089;
};
struct f_constructor_709fr { int dummy;
 P820 e_705;
 P826 want_706;
 P822 ctx_707;
 P826 *t_708;
 P826 t_708v;
 rstr result_;
 P820 it_2090;
 P828 f_2091;
 P826 vt_2092;
 P813 s_2093;
 rstr v_2094;
 rt_int i_2095;
 rstr tmp_2096;
 rstr v_2097;
 rstr tmp_2098;
 P813 parts_2099;
 P820 k_2100;
 P813 shared_2101;
 rstr v_2102;
 rstr v_2103;
};
struct f_comp_value_713fr { int dummy;
 P826 t_710;
 P822 c_711;
 rstr *v_712;
 rstr result_;
};
struct f_has_at_715fr { int dummy;
 rstr *s_714;
 int result_;
 rt_int i_2104;
};
struct f_set_elem_718fr { int dummy;
 P826 st_716;
 rstr *v_717;
 rstr result_;
};
struct f_array_cons_723fr { int dummy;
 P820 e_719;
 P826 at_720;
 P822 ctx_721;
 P826 *t_722;
 P826 t_722v;
 rstr result_;
 rstr tmp_2108;
 P813 parts_2109;
 P820 it_2110;
 int positional_2111;
 rt_int k_2112;
 P813 lo_2116;
 P813 hi_2117;
};
struct f_fill_items_729fr { int dummy;
 P820 items_724;
 P826 at_725;
 rstr *tmp_726;
 P824 prefix_727;
 rt_int dim_728;
 rstr result_;
 P820 it_2118;
 rt_int pos_2119;
 P813 r_2120;
 P826 vt_2121;
 rstr v_2122;
 P820 k_2123;
 rt_int d_2124;
 P824 pre_2125;
 P813 loops_2126;
 P813 ends_2127;
 rstr v_2128;
 rstr xv_2129;
 P820 k_2130;
 rstr xv_2131;
 rstr v_2132;
};
struct f_e_line_731fr { int dummy;
 P820 e_730;
 rt_int result_;
};
struct f_add_line_734fr { int dummy;
 P824 l_732;
 rstr *s_733;
 P824 result_;
 P824 r_2133;
 P824 tail_2134;
 P824 x_2135;
 P824 p_2136;
};
struct f_item_value_739fr { int dummy;
 P820 e_735;
 P826 at_736;
 rt_int line_737;
 P826 *vt_738;
 P826 vt_738v;
 rstr result_;
 rstr v_2139;
};
struct f_key_loop_744fr { int dummy;
 P820 k_740;
 P826 at_741;
 rt_int d_742;
 rstr *xv_743;
 rstr result_;
 P826 it_2140;
 rstr lo_2141;
 rstr hi_2142;
};
struct f_store_at_749fr { int dummy;
 P826 at_745;
 rstr *tmp_746;
 P824 xs_747;
 rt_int n_748;
 rstr result_;
 P813 off_2143;
 P824 x_2144;
 rt_int k_2145;
 rstr l_2146;
 rstr h_2147;
};
struct f_fits_752fr { int dummy;
 P830 y_750;
 P820 args_751;
 int result_;
 P820 a_2148;
 P832 pm_2149;
 P826 t_2150;
 P843 saved_2151;
 int ok_2152;
 P813 lv_2153;
 P822 lc_2154;
 int ro_2155;
 rstr v_2158;
};
struct f_resolve_overload_758fr { int dummy;
 rstr *name_753;
 P820 tt_754;
 P820 args_755;
 int is_stmt_756;
 rt_int line_757;
 P830 result_;
 P830 y_2159;
 P830 first_2160;
 rt_int n_2161;
 rt_int pass_2162;
};
struct f_tt_fits_761fr { int dummy;
 P830 y_759;
 P820 tt_760;
 int result_;
 P820 f_2166;
 P820 a_2167;
 P843 saved_2168;
 int ok_2169;
 P822 fc_2172;
 P822 ac_2173;
 P820 fst_2174;
 P826 ft_2175;
 P826 at_2176;
 P820 ast_2177;
};
struct f_overload_chain_764fr { int dummy;
 rstr *name_762;
 rt_int pass_763;
 P830 result_;
};
struct f_is_builtin_766fr { int dummy;
 rstr *n_765;
 int result_;
};
struct f_is_low_level_768fr { int dummy;
 rstr *n_767;
 int result_;
};
struct f_me_high_772fr { int dummy;
 P820 tt_769;
 rt_int line_770;
 P826 *t_771;
 P826 t_771v;
 rstr result_;
 P822 c_2178;
};
struct f_type_tag_774fr { int dummy;
 P826 t_773;
 rstr result_;
};
struct f_lock_ref_777fr { int dummy;
 P820 e_775;
 rstr *name_776;
 rstr result_;
 P813 lv_2179;
 P826 t_2180;
 P822 c_2181;
 int ro_2182;
};
struct f_user_op_780fr { int dummy;
 rstr *op_778;
 P820 args_779;
 P830 result_;
 P830 y_2183;
 rt_int pass_2184;
};
struct f_gcall_784fr { int dummy;
 P820 e_781;
 int is_stmt_782;
 P826 *t_783;
 P826 t_783v;
 rstr result_;
 P820 fn_2188;
 P820 tt_2189;
 P830 y_2190;
 P813 args_2191;
 P820 a_2192;
 P832 pm_2193;
 P826 lt_2194;
 P826 vt_2195;
 P813 lv_2196;
 P822 lc_2197;
 int ro_2198;
 P830 alt_2199;
 P847 cr_2200;
 rt_int i_2201;
 rstr v_2205;
 rstr ct_2206;
 rstr v_2207;
};
struct f_requires_786fr { int dummy;
 P830 y_785;
 P824 result_;
 P820 imp_2208;
};
struct f_add_req_789fr { int dummy;
 P830 y_787;
 rstr *name_788;
 P824 l_2209;
};
struct f_require_calls_792fr { int dummy;
 P830 y_790;
 P820 e_791;
 P820 x_2211;
 P820 callee_2212;
 P830 z_2213;
 P824 l_2214;
};
struct f_declared_in_795fr { int dummy;
 P820 elems_793;
 rstr *name_794;
 int result_;
 P820 e_2215;
};
struct f_check_requires_798fr { int dummy;
 P830 y_796;
 rt_int line_797;
 P824 l_2216;
 P830 z_2217;
};
struct f_actual_bounds_802fr { int dummy;
 P826 ft_799;
 P826 t_800;
 P822 c_801;
 rstr result_;
};
struct f_builtin_809fr { int dummy;
 rstr *name_803;
 P820 tt_804;
 P820 args_805;
 rt_int line_806;
 int is_stmt_807;
 P826 *t_808;
 P826 t_808v;
 rstr result_;
 P826 at_2218;
 rt_int n_2219;
 rstr a_2220;
 rstr a_2221;
 rstr a_2222;
 rstr a_2223;
 rstr a_2224;
 rstr n1_2225;
 rstr m1_2226;
 rstr a_2227;
 rstr a_2228;
 P820 last_2229;
 rstr a_2230;
 rstr a_2231;
 P813 lv_2232;
 P822 lc_2233;
 int ro_2234;
 P820 last_2235;
 P813 lv_2236;
 P813 dv_2237;
 P822 lc_2238;
 int ro_2239;
 P826 mt_2240;
 P826 dt_2241;
 rstr v_2242;
 P813 lv_2243;
 P822 lc_2244;
 int ro_2245;
 P826 mt_2246;
 P813 lv_2247;
 P813 dv_2248;
 P813 bv_2249;
 P822 lc_2250;
 int ro_2251;
 P826 mt_2252;
 P826 dt_2253;
 P826 bt_2254;
 rstr v_2255;
 rstr v_2256;
 rstr v_2257;
 rstr v_2258;
 rstr a_2259;
 P813 bv_2260;
 P822 bc_2261;
 int ro_2262;
 P826 bt_2263;
 rstr l_2264;
 P813 pv_2265;
 P822 pc_2266;
 int ro_2267;
 P826 pt_2268;
 rstr dev_2269;
 rstr cmd_2270;
 P813 dv_2271;
 P822 dc_2272;
 int ro_2273;
 P826 dt_2274;
};
struct f_translate_811fr { int dummy;
 P820 units_810;
 P820 u_2275;
 P820 l_2277;
 rstr w_2278;
};
struct f_print_program_812fr { int dummy;
};
struct Pc814 { rt_int p_n; rstr all; };
struct Pc818 { rt_int p_n; A819 all; };
struct Pc835 { rt_int p_n; A836 all; };
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
static void as_R842(R842 *d, R842 s);
static R842 cp_R842(R842 s);
static int eq_R842(R842 a, R842 b);
static void as_R840(R840 *d, R840 s);
static R840 cp_R840(R840 s);
static int eq_R840(R840 a, R840 b);
static void as_R838(R838 *d, R838 s);
static R838 cp_R838(R838 s);
static int eq_R838(R838 a, R838 b);
static void as_A836(A836 *d, A836 s);
static A836 cp_A836(A836 s);
static int eq_A836(A836 a, A836 b);
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
static void as_R823(R823 *d, R823 s);
static R823 cp_R823(R823 s);
static int eq_R823(R823 a, R823 b);
static void as_R821(R821 *d, R821 s);
static R821 cp_R821(R821 s);
static int eq_R821(R821 a, R821 b);
static void as_A819(A819 *d, A819 s);
static A819 cp_A819(A819 s);
static int eq_A819(A819 a, A819 b);
static void as_R816(R816 *d, R816 s);
static R816 cp_R816(R816 s);
static int eq_R816(R816 a, R816 b);
static P813 f_mk_3(rstr *s_2);
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
static P843 f_new_buffer_24(void);
static void f_put_27(P843 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P843 b_30);
static void f_splice_34(P843 a_32, P843 b_33);
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
static P820 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P820 *head_62, P820 *tail_63, P820 x_64);
static rt_int f_list_len_67(P820 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P813 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P813 f_expect_id_89(void);
static P820 f_name_node_90(void);
static P820 f_id_list_91(void);
static P820 f_p_subtype_92(void);
static P820 f_constraint_list_93(void);
static P820 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P820 f_actual_tt_97(void);
static P820 f_binop_102(P813 op_98, P820 l_99, P820 r_100, rt_int line_101);
static P820 f_expr_103(void);
static P820 f_expr_and_104(void);
static P820 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P820 f_expr_rel_108(void);
static P820 f_expr_add_109(void);
static P820 f_expr_mul_110(void);
static P820 f_expr_pow_111(void);
static P820 f_expr_prefix_112(void);
static P820 f_postfix_113(void);
static P820 f_primary_114(void);
static P820 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P820 f_body_117(void);
static P820 f_body_element_118(void);
static P820 f_declaration_119(void);
static P820 f_object_decl_120(void);
static P820 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P820 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P820 f_formal_params_126(void);
static int f_imports_list_128(P820 owner_127);
static int f_is_definable_130(rstr *w_129);
static P813 f_definable_name_131(void);
static P820 f_subprogram_decl_132(void);
static P820 f_capsule_decl_133(void);
static P820 f_formal_tt_134(void);
static P820 f_generic_decl_135(void);
static P820 f_task_decl_136(void);
static P820 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P820 f_statement_140(void);
static P820 f_unlabeled_statement_141(void);
static P820 f_arm_145(P820 cond_142, P820 b_143, rt_int line_144);
static P820 f_if_stmt_146(void);
static P820 f_case_stmt_147(void);
static P820 f_repeat_stmt_148(void);
static P820 f_guard_stmt_149(void);
static P820 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P830 f_lookup_154(rstr *name_153);
static P830 f_lookup_decl_156(P820 d_155);
static void f_define_159(P830 y_157, rt_int line_158);
static int f_overloadable_161(P830 y_160);
static int f_same_tt_164(P820 a_162, P820 b_163);
static int f_same_signature_167(P832 a_165, P832 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P830 f_new_sym_172(rt_int kind_170, P813 name_171);
static P826 f_new_typ_174(rt_int kind_173);
static P822 f_new_cons_175(void);
static int f_scalar_kind_177(P826 t_176);
static rstr f_bound_ctype_179(P826 t_178);
static rstr f_cbound_182(P822 c_180, rstr *b_181);
static rstr f_clo_184(P822 c_183);
static rstr f_chi_186(P822 c_185);
static rstr f_sub_lo_189(P826 t_187, P822 c_188);
static rstr f_sub_hi_192(P826 t_190, P822 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P822 f_copy_cons_197(P822 c_196);
static P822 f_freeze_200(P822 c_198, P826 t_199);
static rstr f_checked_204(P826 t_201, P822 c_202, rstr *v_203);
static int f_same_lits_207(P820 a_205, P820 b_206);
static P826 f_str_elem_209(P826 t_208);
static int f_same_212(P826 a_210, P826 b_211);
static P826 f_base_of_214(P826 t_213);
static P822 f_base_cons_217(P826 t_215, P822 c_216);
static rstr f_kind_name_219(P826 t_218);
static void f_check_type_223(P826 got_220, P826 want_221, rt_int line_222);
static rstr f_ctype_225(P826 t_224);
static rstr f_struct_body_227(P826 t_226);
static rstr f_field_decls_229(P826 t_228);
static void f_declare_ctype_231(P826 t_230);
static rstr f_dim_lo_233(rt_int k_232);
static rstr f_dim_hi_235(rt_int k_234);
static rstr f_more_dims_237(P826 t_236);
static rstr f_acnt_240(P826 t_238, rstr *base_239);
static P813 f_cons_lo_243(P822 c_241, rt_int k_242);
static P813 f_cons_hi_246(P822 c_244, rt_int k_245);
static P826 f_idx_type_249(P826 t_247, rt_int k_248);
static void f_init_ascii_250(void);
static rt_int f_lit_index_253(P820 lits_251, rstr *name_252);
static P826 f_resolve_subtype_256(P820 st_254, P822 *c_255);
static int f_float_lit_258(P820 e_257);
static void f_tag_constraint_262(P826 t_259, P820 e_260, P822 c_261);
static P826 f_named_subtype_265(P820 st_263, P822 *c_264);
static P826 f_invoke_abbrev_269(P830 y_266, P820 st_267, P822 *c_268);
static void f_apply_constraint_274(P826 t_270, P820 args_271, P822 c_272, rt_int line_273);
static P826 f_value_subtype_278(P820 e_275, P822 *c_276, P813 *base_277);
static P824 f_reverse_pairs_280(P824 l_279);
static P826 f_inquiry_283(P820 st_281, P822 *c_282);
static P820 f_as_subtype_285(P820 e_284);
static P820 f_tt_subtype_290(P813 name_286, P820 tt_287, P820 args_288, rt_int line_289);
static int f_type_name_292(rstr *name_291);
static rstr f_empty_set_294(P826 t_293);
static int f_opened_296(P826 t_295);
static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299);
static rstr f_subst_302(rstr *s_301);
static P826 f_new_type_306(P830 y_303, P820 st_304, P822 *c_305);
static void f_init_storage_310(rstr *lval_307, P826 t_308, P822 c_309);
static rstr f_init_call_313(P830 y_311, rstr *lval_312);
static int f_needs_fin_315(P826 t_314);
static rstr f_fin_code_318(rstr *lval_316, P826 t_317);
static P826 f_tparam_type_321(P826 t_319, rstr *name_320);
static void f_make_storage_325(rstr *lval_322, P826 t_323, P822 c_324);
static rstr f_uninit_value_327(P826 t_326);
static rstr f_init_chk_330(P826 t_328, rstr *v_329);
static rt_int f_manifest_333(P820 e_331, int *ok_332);
static P839 f_mk_mval_336(rt_int kind_334, rt_int i_335);
static rt_int f_ipow_339(rt_int a_337, rt_int b_338);
static P839 f_meval_342(P820 e_340, int *ok_341);
static rstr f_bool_text_344(int b_343);
static rt_int f_bool_i_346(int b_345);
static rstr f_mstr_348(P839 v_347);
static int f_ascii_char_350(rt_int i_349);
static int f_user_defined_352(rstr *op_351);
static rstr f_mcopy_354(P826 t_353);
static int f_composite_356(P826 t_355);
static rstr f_assign_code_361(rstr *lval_357, P826 t_358, rstr *v_359, P822 c_360);
static rstr f_copy_code_364(P826 t_362, rstr *v_363);
static rstr f_eq_code_368(P826 t_365, rstr *a_366, rstr *b_367);
static rstr f_elem_assign_372(rstr *lval_369, P826 t_370, rstr *v_371);
static int f_seen_name_375(P824 l_373, rstr *s_374);
static void f_emit_helpers_376(void);
static void f_helper_bodies_378(P826 t_377);
static void f_declare_body_380(P820 elems_379);
static void f_manifest_const_382(P820 d_381);
static int f_exported_386(P820 d_383, rstr *name_384, int *ro_385);
static P830 f_copy_sym_388(P830 y_387);
static void f_gen_capsule_390(P820 d_389);
static void f_capsule_params_394(P820 d_391, P820 args_392, rt_int line_393);
static void f_elaborate_capsule_399(P820 d_395, P830 y_396, P820 args_397, P820 owner_398);
static int f_exports_op_402(P820 d_400, rstr *op_401);
static P813 f_renamed_405(P820 d_403, P830 z_404);
static P830 f_pick_capsule_407(P820 d_406);
static P830 f_capsule_instance_410(P830 g_408, P820 d_409);
static void f_gen_expose_412(P820 d_411);
static void f_finish_ptr_414(P826 t_413);
static P820 f_ptr_args_416(P822 c_415);
static void f_bind_ptr_params_421(P820 formals_417, P820 actuals_418, rstr *cell_419, rt_int line_420);
static void f_alloc_cell_426(P820 s_422, rstr *lv_423, P826 t_424, P822 c_425);
static P822 f_freeze_args_430(P822 c_427, P826 t_428, rt_int line_429);
static void f_ptr_subtype_check_434(P826 t_431, P822 c_432, P820 src_433);
static void f_normal_function_437(P820 d_435, P830 y_436);
static void f_declare_subprogram_439(P820 d_438);
static P830 f_build_subprogram_441(P820 d_440);
static int f_has_pragmat_444(P813 pr_442, rstr *p_443);
static P813 f_suppressing_446(P813 pr_445);
static int f_suppressed_448(rstr *x_447);
static void f_element_450(P820 e_449);
static void f_element1_452(P820 e_451);
static rstr f_storage_455(rstr *name_453, P826 t_454);
static void f_bind_458(P830 y_456, rstr *access_457);
static void f_var_decl_460(P820 d_459);
static void f_open_fin_462(rstr *fc_461);
static void f_close_fins_464(P824 saved_463);
static void f_const_decl_466(P820 d_465);
static void f_subprogram_468(P820 d_467);
static void f_gen_subprogram_471(P820 d_469, P830 y_470);
static rstr f_waits_of_473(P820 d_472);
static rstr f_task_waits_475(P820 elems_474);
static void f_await_tasks_477(P820 elems_476);
static void f_capsule_elements_479(P820 elems_478);
static void f_declare_labels_481(P820 elems_480);
static void f_start_labels_482(void);
static P845 f_goto_label_484(rstr *name_483);
static int f_has_return_486(P820 e_485);
static void f_capsule_body_488(P820 elems_487);
static void f_body_elements_490(P820 elems_489);
static void f_gen_body_492(P820 elems_491);
static void f_pop_frames_494(rt_int upto_493);
static void f_push_cleanup_496(rstr *s_495);
static void f_pop_cleanup_497(void);
static void f_gen_statement_499(P820 s_498);
static void f_st_assign_501(P820 s_500);
static void f_st_call_503(P820 s_502);
static void f_st_if_505(P820 s_504);
static void f_st_case_507(P820 s_506);
static void f_st_repeat_509(P820 s_508);
static void f_st_exit_511(P820 s_510);
static void f_st_return_513(P820 s_512);
static rstr f_result_checked_517(P826 t_514, P822 c_515, rstr *v_516);
static rstr f_exc_id_520(rstr *name_518, rt_int line_519);
static void f_st_guard_522(P820 s_521);
static void f_st_alloc_524(P820 s_523);
static rstr f_act_ref_526(P820 e_525);
static void f_st_create_528(P820 s_527);
static void f_hidden_var_532(rstr *name_529, P826 t_530, rstr *place_531);
static void f_user_create_538(P820 s_533, P830 y_534, rstr *uv_535, P826 ut_536, rstr *nf_537);
static rstr f_wait_alt_543(P820 inv_539, rstr *arr_540, rt_int i_541, int mixed_542);
static int f_builtin_wait_545(P820 inv_544);
static rstr f_wait_op_550(P820 inv_546, rstr *op_547, rstr *q_548, int is_stmt_549);
static void f_user_wait_555(P820 s_551, rstr *arr_552, rstr *w_553, rt_int n_554);
static void f_st_wait_557(P820 s_556);
static P820 f_call_node_561(rstr *name_558, P820 arg_559, rt_int line_560);
static void f_user_region_563(P820 s_562);
static void f_st_region_565(P820 s_564);
static P820 f_gparam_568(P820 g_566, rstr *name_567);
static P830 f_bind_sym_570(P820 p_569);
static int f_same_binds_573(P830 a_571, P830 b_572);
static int f_same_binding_576(P830 a_574, P830 b_575);
static P830 f_tt_binds_581(P820 gd_577, P820 formals_578, P820 actuals_579, rt_int line_580);
static int f_generic_use_583(P820 st_582);
static P830 f_infer_from_588(P820 gd_584, P820 pat_585, P826 t_586, P830 known_587);
static P826 f_instantiate_type_594(P830 g_589, P820 tt_590, P820 args_591, P822 *c_592, rt_int line_593);
static P830 f_instantiate_599(P830 g_595, P820 tt_596, P820 args_597, rt_int line_598);
static rstr f_access_of_601(P830 y_600);
static P820 f_import_of_604(P820 l_602, rstr *name_603);
static int f_check_import_607(P830 y_605, rt_int line_606);
static rstr f_c_ident_609(rstr *s_608);
static rstr f_cell_deref_612(P826 t_610, rstr *p_611);
static rstr f_deref_615(rstr *base_613, P826 t_614);
static int f_is_lvalue_617(P820 e_616);
static void f_lvalue_623(P820 e_618, P813 *code_619, P826 *t_620, P822 *c_621, int *ro_622);
static void f_select_on_631(rstr *base_624, P826 bt_625, P820 e_626, int *ro_627, P813 *code_628, P826 *t_629, P822 *c_630);
static int f_has_call_633(rstr *s_632);
static void f_need_slice_635(P826 t_634);
static rstr f_ix_639(rstr *i_636, rstr *lo_637, rstr *hi_638);
static void f_index_on_648(rstr *base_640, P826 bt_641, P820 e_642, int *ro_643, int lv_644, P813 *code_645, P826 *t_646, P822 *c_647);
static int f_own_attribute_650(P820 e_649);
static rstr f_gexpr_654(P820 e_651, P826 want_652, P826 *t_653);
static rstr f_resolved_657(P820 e_655, P826 *t_656);
static rstr f_gexpr_in_662(P820 e_658, P826 want_659, P822 c_660, P826 *t_661);
static rstr f_ascii_lit_664(int ch_663);
static rstr f_octal_666(rt_int n_665);
static P826 f_str_cat_part_668(P826 t_667);
static P826 f_peek_type_670(P820 e_669);
static P826 f_set_operands_673(P820 e_671, P826 want_672);
static P820 f_copy_node_675(P820 e_674);
static P820 f_wrap_apply_677(P820 e_676);
static rstr f_c_string_679(rstr *s_678);
static P826 f_enum_type_of_682(rstr *lit_680, rt_int line_681);
static int f_ptr_attribute_684(P820 e_683);
static rstr f_attribute_687(P820 e_685, P826 *t_686);
static rstr f_subtype_compare_692(P820 sa_688, P820 sb_689, rstr *op_690, rt_int line_691);
static rstr f_float_prec_694(P822 c_693);
static rstr f_file_attribute_700(P820 e_695, P826 bt_696, P822 c_697, P813 base_698, P826 *t_699);
static rstr f_gbinop_704(P820 e_701, P826 want_702, P826 *t_703);
static rstr f_constructor_709(P820 e_705, P826 want_706, P822 ctx_707, P826 *t_708);
static rstr f_comp_value_713(P826 t_710, P822 c_711, rstr *v_712);
static int f_has_at_715(rstr *s_714);
static rstr f_set_elem_718(P826 st_716, rstr *v_717);
static rstr f_array_cons_723(P820 e_719, P826 at_720, P822 ctx_721, P826 *t_722);
static rstr f_fill_items_729(P820 items_724, P826 at_725, rstr *tmp_726, P824 prefix_727, rt_int dim_728);
static rt_int f_e_line_731(P820 e_730);
static P824 f_add_line_734(P824 l_732, rstr *s_733);
static rstr f_item_value_739(P820 e_735, P826 at_736, rt_int line_737, P826 *vt_738);
static rstr f_key_loop_744(P820 k_740, P826 at_741, rt_int d_742, rstr *xv_743);
static rstr f_store_at_749(P826 at_745, rstr *tmp_746, P824 xs_747, rt_int n_748);
static int f_fits_752(P830 y_750, P820 args_751);
static P830 f_resolve_overload_758(rstr *name_753, P820 tt_754, P820 args_755, int is_stmt_756, rt_int line_757);
static int f_tt_fits_761(P830 y_759, P820 tt_760);
static P830 f_overload_chain_764(rstr *name_762, rt_int pass_763);
static int f_is_builtin_766(rstr *n_765);
static int f_is_low_level_768(rstr *n_767);
static rstr f_me_high_772(P820 tt_769, rt_int line_770, P826 *t_771);
static rstr f_type_tag_774(P826 t_773);
static rstr f_lock_ref_777(P820 e_775, rstr *name_776);
static P830 f_user_op_780(rstr *op_778, P820 args_779);
static rstr f_gcall_784(P820 e_781, int is_stmt_782, P826 *t_783);
static P824 f_requires_786(P830 y_785);
static void f_add_req_789(P830 y_787, rstr *name_788);
static void f_require_calls_792(P830 y_790, P820 e_791);
static int f_declared_in_795(P820 elems_793, rstr *name_794);
static void f_check_requires_798(P830 y_796, rt_int line_797);
static rstr f_actual_bounds_802(P826 ft_799, P826 t_800, P822 c_801);
static rstr f_builtin_809(rstr *name_803, P820 tt_804, P820 args_805, rt_int line_806, int is_stmt_807, P826 *t_808);
static void f_translate_811(P820 units_810);
static void f_print_program_812(void);
static int ex_compile_error_1;
static P817 g_toks_851;
static rt_int g_ntoks_852;
static rt_int g_tpos_853;
static rt_int g_src_line_854;
static P813 g_pending_prag_855;
static P834 g_table_856;
static P834 g_genv_857;
static P830 g_all_insts_858;
static rt_int g_depth_859;
static P830 g_scope_stack_860;
static P826 g_all_types_861;
static rt_int g_serial_862;
static P843 g_out_types_863;
static P843 g_out_helpers_864;
static P843 g_out_protos_865;
static P843 g_out_globals_866;
static P843 g_out_funcs_867;
static P843 g_out_init_868;
static P843 g_out_excs_869;
static P843 g_code_870;
static P843 g_fields_buf_871;
static int g_in_func_872;
static rt_int g_cur_level_873;
static P837 g_fctx_874;
static P847 g_caps_875;
static P849 g_cap_waits_876;
static P824 g_psub_877;
static P813 g_st_field_878;
static P843 g_out_frames_879;
static P843 g_out_roots_880;
static int g_uses_free_881;
static P824 g_fins_882;
static int g_uses_findyn_883;
static P830 g_func_sym_884;
static P822 g_func_rc_885;
static P813 g_cap_ret_886;
static P813 g_cap_rflag_887;
static rt_int g_ret_frames_888;
static rt_int g_gdepth_889;
static P813 g_suppress_890;
static P822 g_cons_ctx_891;
static int g_mark_uninit_892;
static P845 g_exits_893;
static P845 g_gotos_894;
static rt_int g_frames_895;
static P824 g_handlers_896;
static P824 g_cleanups_897;
static rt_int g_trial_898;
static P824 g_mcopies_899;
static P826 g_ty_int_900;
static P826 g_ty_bool_901;
static P826 g_ty_float_902;
static P826 g_ty_ascii_903;
static P826 g_ty_string_904;
static P826 g_ty_void_905;
static P826 g_ty_file_906;
static P826 g_ty_nil_907;
static P826 g_ty_lock_908;
static P826 g_ty_latch_909;
static P826 g_ty_act_910;
static P826 g_file_mode_type_911;
static P822 g_no_cons_912;
static P813 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_913 = NULL;
{ P813 cell914 = rt_alloc(sizeof *cell914);
rt_int pv915 = ((rt_int)(((*F->s_2)).len));
cell914->p_n = pv915;
cell914->all = rt_str_new(pv915);
rt_str_assign(&cell914->all, (*F->s_2));
F->t_913 = cell914;
}
F->result_ = F->t_913;
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
F->r_916 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_916, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_916;
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
F->r_917 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_917, (*F->s_14));
{ rt_int lo919 = ((rt_int)1LL), hi920 = ((rt_int)(((*F->s_14)).len));
for (rt_int it921 = lo919; it921 <= hi920; it921++) {
F->i_918 = it921;
if (((65 <= rt_r_echk(rt_str_get(F->r_917, F->i_918))) && (rt_r_echk(rt_str_get(F->r_917, F->i_918)) <= 90))) {
(*rt_str_at(&F->r_917, F->i_918)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_917, F->i_918))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_917;
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
F->l_922 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_923 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_922), rt_str(" ", 1)));
{ rt_int lo925 = ((rt_int)1LL), hi926 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_923).len))), ((rt_int)1LL));
for (rt_int it927 = lo925; it927 <= hi926; it927++) {
F->i_924 = it927;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_924, rt_sub(rt_add(F->i_924, ((rt_int)((F->w_923).len))), ((rt_int)1LL))), F->w_923)) {
F->result_ = rt_str_cat(F->l_922, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_922;
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
g_serial_862 = rt_add(rt_r_ichk(g_serial_862), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_862)));
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
if ((rt_r_ichk(g_trial_898) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P843 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_928 = NULL;
{ R844 *cell929 = rt_alloc(sizeof(R844));
(*cell929).head = NULL;
(*cell929).tail = NULL;
F->b_928 = cell929;
}
F->result_ = F->b_928;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P843 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_930 = NULL;
{ R825 *cell931 = rt_alloc(sizeof(R825));
(*cell931).s = NULL;
(*cell931).next = NULL;
F->l_930 = cell931;
}
(*(P824)rt_nil_check(F->l_930)).s = f_mk_3(&(*F->s_26));
if (((*(P843)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P843)rt_nil_check(F->b_25)).head = F->l_930;
} else {
(*(P824)rt_nil_check((*(P843)rt_nil_check(F->b_25)).tail)).next = F->l_930;
}
(*(P843)rt_nil_check(F->b_25)).tail = F->l_930;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_870, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P843 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_932 = NULL;
F->l_932 = (*(P843)rt_nil_check(F->b_30)).head;
while ((F->l_932 != NULL)) {
rt_putln((((P813)rt_nil_check((*(P824)rt_nil_check(F->l_932)).s))->all));
F->l_932 = (*(P824)rt_nil_check(F->l_932)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P843 a_32, P843 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P843)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P843)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P843)rt_nil_check(F->a_32)).head = (*(P843)rt_nil_check(F->b_33)).head;
} else {
(*(P824)rt_nil_check((*(P843)rt_nil_check(F->a_32)).tail)).next = (*(P843)rt_nil_check(F->b_33)).head;
}
(*(P843)rt_nil_check(F->a_32)).tail = (*(P843)rt_nil_check(F->b_33)).tail;
(*(P843)rt_nil_check(F->b_33)).head = NULL;
(*(P843)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel933 = (*F->w_35);
if (0 || rt_str_eq(sel933, rt_str("ABBREV", 6)) || rt_str_eq(sel933, rt_str("ABNORMAL", 8)) || rt_str_eq(sel933, rt_str("ALL", 3)) || rt_str_eq(sel933, rt_str("ALLOC", 5)) || rt_str_eq(sel933, rt_str("ASSERT", 6)) || rt_str_eq(sel933, rt_str("BEGIN", 5)) || rt_str_eq(sel933, rt_str("BY", 2)) || rt_str_eq(sel933, rt_str("CAPSULE", 7)) || rt_str_eq(sel933, rt_str("CASE", 4)) || rt_str_eq(sel933, rt_str("CONST", 5)) || rt_str_eq(sel933, rt_str("CREATE", 6)) || rt_str_eq(sel933, rt_str("DO", 2)) || rt_str_eq(sel933, rt_str("ELSE", 4)) || rt_str_eq(sel933, rt_str("ELSEIF", 6)) || rt_str_eq(sel933, rt_str("END", 3)) || rt_str_eq(sel933, rt_str("EXCEPTION", 9)) || rt_str_eq(sel933, rt_str("EXIT", 4)) || rt_str_eq(sel933, rt_str("EXPORTS", 7)) || rt_str_eq(sel933, rt_str("EXPOSE", 6)) || rt_str_eq(sel933, rt_str("EXTERNAL", 8)) || rt_str_eq(sel933, rt_str("FOR", 3)) || rt_str_eq(sel933, rt_str("FROM", 4)) || rt_str_eq(sel933, rt_str("FUNC", 4)) || rt_str_eq(sel933, rt_str("GENERIC", 7)) || rt_str_eq(sel933, rt_str("GOTO", 4)) || rt_str_eq(sel933, rt_str("GUARD", 5)) || rt_str_eq(sel933, rt_str("IF", 2)) || rt_str_eq(sel933, rt_str("IMPORTS", 7)) || rt_str_eq(sel933, rt_str("LOCATION", 8)) || rt_str_eq(sel933, rt_str("NAMED", 5)) || rt_str_eq(sel933, rt_str("NEEDS", 5)) || rt_str_eq(sel933, rt_str("NEW", 3)) || rt_str_eq(sel933, rt_str("NONE", 4)) || rt_str_eq(sel933, rt_str("OUT", 3)) || rt_str_eq(sel933, rt_str("OF", 2)) || rt_str_eq(sel933, rt_str("PRAG", 4)) || rt_str_eq(sel933, rt_str("PROC", 4)) || rt_str_eq(sel933, rt_str("RAISE", 5)) || rt_str_eq(sel933, rt_str("READONLY", 8)) || rt_str_eq(sel933, rt_str("REVERSE", 7)) || rt_str_eq(sel933, rt_str("REGION", 6)) || rt_str_eq(sel933, rt_str("RENAMING", 8)) || rt_str_eq(sel933, rt_str("REP", 3)) || rt_str_eq(sel933, rt_str("REPEAT", 6)) || rt_str_eq(sel933, rt_str("RERAISE", 7)) || rt_str_eq(sel933, rt_str("RETURN", 6)) || rt_str_eq(sel933, rt_str("SUBTYPE", 7)) || rt_str_eq(sel933, rt_str("TASK", 4)) || rt_str_eq(sel933, rt_str("THEN", 4)) || rt_str_eq(sel933, rt_str("TO", 2)) || rt_str_eq(sel933, rt_str("TYPE", 4)) || rt_str_eq(sel933, rt_str("VAR", 3)) || rt_str_eq(sel933, rt_str("WAIT", 4)) || rt_str_eq(sel933, rt_str("WHEN", 4)) || rt_str_eq(sel933, rt_str("WHILE", 5))) {
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
F->t_934 = NULL;
{ R816 *cell935 = rt_alloc(sizeof(R816));
(*cell935).s = NULL;
(*cell935).prags = NULL;
F->t_934 = cell935;
}
(*(P815)rt_nil_check(F->t_934)).kind = F->kind_39;
(*(P815)rt_nil_check(F->t_934)).line = rt_r_ichk(g_src_line_854);
(*(P815)rt_nil_check(F->t_934)).ival = F->ival_41;
(*(P815)rt_nil_check(F->t_934)).s = f_mk_3(&(*F->s_40));
(*(P815)rt_nil_check(F->t_934)).prags = g_pending_prag_855;
g_pending_prag_855 = NULL;
g_ntoks_852 = rt_add(rt_r_ichk(g_ntoks_852), ((rt_int)1LL));
(((P817)rt_nil_check(g_toks_851))->all).p[(rt_index(rt_r_ichk(g_ntoks_852), (((P817)rt_nil_check(g_toks_851))->all).lo, (((P817)rt_nil_check(g_toks_851))->all).hi) - (((P817)rt_nil_check(g_toks_851))->all).lo)] = F->t_934;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_936 = RT_R_IUNDEF;
F->j_936 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_936) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_936)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_936))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_936))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_936))) == 95) && ((rt_r_ichk(F->j_936) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_936), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_936), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_936 = rt_add(rt_r_ichk(F->j_936), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_936);
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
F->w_937 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_937, (*F->s_46));
{ rt_int lo939 = ((rt_int)1LL), hi940 = ((rt_int)((F->w_937).len));
for (rt_int it941 = lo939; it941 <= hi940; it941++) {
F->k_938 = it941;
(*rt_str_at(&F->w_937, F->k_938)) = f_upper_13(rt_r_echk(rt_str_get(F->w_937, F->k_938)));
}
}
F->result_ = F->w_937;
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
F->j_942 = RT_R_IUNDEF;
F->j_942 = F->i_49;
while (((rt_r_ichk(F->j_942) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_942))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_942))) == 9)))) {
F->j_942 = rt_add(rt_r_ichk(F->j_942), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_942);
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
F->j_943 = RT_R_IUNDEF;
F->j_943 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_944 = NULL;
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_945 = RT_R_EUNDEF;
F->more_945 = 1;
if (((rt_r_ichk(F->j_943) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
while (rt_r_echk(F->more_945)) {
F->k_946 = RT_R_IUNDEF;
F->j_943 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_943));
if (((rt_r_ichk(F->j_943) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))))))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_946 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_943));
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_943), rt_sub(rt_r_ichk(F->k_946), ((rt_int)1LL))); b_; }))); b_; }));
F->j_943 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_946));
if (((rt_r_ichk(F->j_943) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) == 40))) {
F->go_947 = RT_R_EUNDEF;
F->go_947 = 1;
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), rt_str("(", 1)); b_; }));
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
while (rt_r_echk(F->go_947)) {
F->j_943 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_943));
if (((rt_r_ichk(F->j_943) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))))))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_946 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_943));
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_943), rt_sub(rt_r_ichk(F->k_946), ((rt_int)1LL))); b_; }))); b_; }));
F->j_943 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_946));
if (((rt_r_ichk(F->j_943) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) == 44))) {
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), rt_str(",", 1)); b_; }));
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_943) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) == 41))) {
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
F->go_947 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), rt_str(")", 1)); b_; }));
}
F->r_944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_944))->all), rt_str(";", 1)); b_; }));
F->j_943 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_943));
if (((rt_r_ichk(F->j_943) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) == 44))) {
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_943) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_943))) == 41))) {
F->j_943 = rt_add(rt_r_ichk(F->j_943), ((rt_int)1LL));
F->more_945 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P813)rt_nil_check(F->r_944))->all));
if ((g_pending_prag_855 == NULL)) {
g_pending_prag_855 = F->r_944;
} else {
g_pending_prag_855 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(g_pending_prag_855))->all), (((P813)rt_nil_check(F->r_944))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_943);
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
F->i_948 = RT_R_IUNDEF;
F->i_948 = ((rt_int)1LL);
F->k_949 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_948) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_949 = rt_r_ichk(F->i_948);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_949))) != 59)) {
F->k_949 = rt_add(rt_r_ichk(F->k_949), ((rt_int)1LL));
}
{
F->p_950 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_948), rt_sub(rt_r_ichk(F->k_949), ((rt_int)1LL))));
F->ok_951 = ((((((((((rt_str_eq(F->p_950, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_950, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_950, rt_str("OPEN", 4))) || rt_str_eq(F->p_950, rt_str("CLOSED", 6))) || rt_str_eq(F->p_950, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_950, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_950, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_950, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_950, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_950, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_950).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_950, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_952 = ((((((((((rt_int)((F->p_950).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_950, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_950, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_950, rt_str("OPEN", 4))) || rt_str_eq(F->p_950, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_950).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_950, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_950, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_950, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_950).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_950, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_952 && (!F->ok_951))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_950); b_; }));
}
}
F->i_948 = rt_add(rt_r_ichk(F->k_949), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_953 = RT_R_IUNDEF;
F->i_953 = ((rt_int)1LL);
F->j_954 = RT_R_IUNDEF;
F->j_954 = ((rt_int)0LL);
F->n_955 = RT_R_IUNDEF;
F->n_955 = ((rt_int)(((*F->line_56)).len));
F->c_956 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_953) <= rt_r_ichk(F->n_955))) {
F->c_956 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_953)));
if (((((rt_r_echk(F->c_956) == 32) || (rt_r_echk(F->c_956) == 9)) || (rt_r_echk(F->c_956) == 13)) || (rt_r_echk(F->c_956) == 12))) {
F->i_953 = rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_956) == 37)) {
F->i_953 = rt_add(rt_r_ichk(F->n_955), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_956))) {
F->j_954 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_953));
{
F->w_957 = rt_str_new(rt_sub(rt_r_ichk(F->j_954), rt_r_ichk(F->i_953)));
rt_str_assign(&F->w_957, rt_str_slice((*F->line_56), rt_r_ichk(F->i_953), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))));
{ rt_int lo959 = ((rt_int)1LL), hi960 = ((rt_int)((F->w_957).len));
for (rt_int it961 = lo959; it961 <= hi960; it961++) {
F->k_958 = it961;
(*rt_str_at(&F->w_957, F->k_958)) = f_upper_13(rt_r_echk(rt_str_get(F->w_957, F->k_958)));
}
}
if (rt_str_eq(F->w_957, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) != 59))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
} else if (rt_str_eq(F->w_957, rt_str("PRAG", 4))) {
F->j_954 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_954));
} else if (f_is_reserved_36(&F->w_957)) {
f_add_token_42((((rt_int)2LL)), &F->w_957, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_957)) {
f_add_token_42((((rt_int)3LL)), &F->w_957, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_957, ((rt_int)0LL));
}
}
F->i_953 = rt_r_ichk(F->j_954);
} else if (f_is_digit_11(rt_r_echk(F->c_956))) {
F->j_954 = rt_r_ichk(F->i_953);
while (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954)))))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_954) < rt_r_ichk(F->n_955)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL))))))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
while (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954)))))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 101)))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
if (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 45)))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954)))))) {
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_953), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_953), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_953), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL)))));
}
F->i_953 = rt_r_ichk(F->j_954);
} else if ((((rt_r_echk(F->c_956) == 39) && (rt_r_ichk(F->i_953) < rt_r_ichk(F->n_955))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL)))) == 39))) {
F->j_954 = rt_add(rt_r_ichk(F->i_953), ((rt_int)2LL));
while (((rt_r_ichk(F->j_954) < rt_r_ichk(F->n_955)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_954) >= rt_r_ichk(F->n_955))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_953), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_953 = rt_add(rt_r_ichk(F->j_954), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_956) == 39)) {
F->j_954 = rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL));
if (((rt_r_ichk(F->j_954) > rt_r_ichk(F->n_955)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))))))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_954 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_954));
{
F->w_962 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_954), rt_r_ichk(F->i_953)), ((rt_int)1LL)));
rt_str_assign(&F->w_962, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))));
{ rt_int lo964 = ((rt_int)1LL), hi965 = ((rt_int)((F->w_962).len));
for (rt_int it966 = lo964; it966 <= hi965; it966++) {
F->k_963 = it966;
(*rt_str_at(&F->w_962, F->k_963)) = f_upper_13(rt_r_echk(rt_str_get(F->w_962, F->k_963)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_962, ((rt_int)0LL));
}
F->i_953 = rt_r_ichk(F->j_954);
} else if ((rt_r_echk(F->c_956) == 34)) {
F->j_954 = rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL));
while (((rt_r_ichk(F->j_954) <= rt_r_ichk(F->n_955)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_954))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_954 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_954) > rt_r_ichk(F->n_955))) {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_954), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_953 = rt_add(rt_r_ichk(F->j_954), ((rt_int)1LL));
} else {
{
F->two_967 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_967, rt_str("  ", 2));
(*rt_str_at(&F->two_967, ((rt_int)1LL))) = rt_r_echk(F->c_956);
if ((rt_r_ichk(F->i_953) < rt_r_ichk(F->n_955))) {
(*rt_str_at(&F->two_967, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_967, rt_str(":=", 2)) || rt_str_eq(F->two_967, rt_str("=>", 2))) || rt_str_eq(F->two_967, rt_str("..", 2))) || rt_str_eq(F->two_967, rt_str("**", 2))) || rt_str_eq(F->two_967, rt_str("/=", 2))) || rt_str_eq(F->two_967, rt_str("<=", 2))) || rt_str_eq(F->two_967, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_967, ((rt_int)0LL));
F->i_953 = rt_add(rt_r_ichk(F->i_953), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_967, rt_str("<<", 2)) || rt_str_eq(F->two_967, rt_str(">>", 2))) || rt_str_eq(F->two_967, rt_str("::", 2)))) {
if (rt_str_eq(F->two_967, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_967, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_953 = rt_add(rt_r_ichk(F->i_953), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_956) == 40) || (rt_r_echk(F->c_956) == 41)) || (rt_r_echk(F->c_956) == 91)) || (rt_r_echk(F->c_956) == 93)) || (rt_r_echk(F->c_956) == 44)) || (rt_r_echk(F->c_956) == 58)) || (rt_r_echk(F->c_956) == 59)) || (rt_r_echk(F->c_956) == 46)) || (rt_r_echk(F->c_956) == 35)) || (rt_r_echk(F->c_956) == 43)) || (rt_r_echk(F->c_956) == 45)) || (rt_r_echk(F->c_956) == 42)) || (rt_r_echk(F->c_956) == 47)) || (rt_r_echk(F->c_956) == 38)) || (rt_r_echk(F->c_956) == 61)) || (rt_r_echk(F->c_956) == 60)) || (rt_r_echk(F->c_956) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_956)); b_; }), ((rt_int)0LL));
F->i_953 = rt_add(rt_r_ichk(F->i_953), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_854), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_968 = rt_str_new(rt_sizeln());
rt_readln(&F->line_968);
g_src_line_854 = rt_add(rt_r_ichk(g_src_line_854), ((rt_int)1LL));
f_lex_line_57(&F->line_968);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P820 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_969 = NULL;
{ R821 *cell970 = rt_alloc(sizeof(R821));
(*cell970).name = NULL;
(*cell970).tag = NULL;
(*cell970).prags = NULL;
(*cell970).labels = NULL;
(*cell970).a = NULL;
(*cell970).b = NULL;
(*cell970).c = NULL;
(*cell970).d = NULL;
(*cell970).e = NULL;
(*cell970).next = NULL;
F->x_969 = cell970;
}
(*(P820)rt_nil_check(F->x_969)).kind = F->kind_59;
(*(P820)rt_nil_check(F->x_969)).line = F->line_60;
F->result_ = F->x_969;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P820 *head_62, P820 *tail_63, P820 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P820)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P820)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P820)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P820 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_971 = RT_R_IUNDEF;
F->n_971 = ((rt_int)0LL);
F->p_972 = NULL;
F->p_972 = F->l_66;
while ((F->p_972 != NULL)) {
F->n_971 = rt_add(rt_r_ichk(F->n_971), ((rt_int)1LL));
F->p_972 = (*(P820)rt_nil_check(F->p_972)).next;
}
F->result_ = rt_r_ichk(F->n_971);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_853), F->k_75) > rt_r_ichk(g_ntoks_852))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_853), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_853), F->k_77) > rt_r_ichk(g_ntoks_852))) {
F->result_ = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_852), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_853), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
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
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
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
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
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
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P813 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_853), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_973 = NULL;
F->x_973 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P820)rt_nil_check(F->x_973)).name = f_expect_id_89();
F->result_ = F->x_973;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_974 = NULL;
F->tail_975 = NULL;
f_append_65(&F->head_974, &F->tail_975, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_974, &F->tail_975, f_name_node_90());
}
F->result_ = F->head_974;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_976 = RT_R_IUNDEF;
F->line_976 = f_cur_line_68();
F->x_977 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->x_977 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_976));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P820)rt_nil_check(F->x_977)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_977;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_978 = rt_str_copy((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if (rt_str_eq(F->w_978, rt_str("ARRAY", 5))) {
F->x_977 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_976));
{
F->head_979 = NULL;
F->tail_980 = NULL;
f_append_65(&F->head_979, &F->tail_980, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_979, &F->tail_980, f_p_subtype_92());
}
(*(P820)rt_nil_check(F->x_977)).a = F->head_979;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P820)rt_nil_check(F->x_977)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_978, rt_str("RECORD", 6)) || rt_str_eq(F->w_978, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_978, rt_str("RECORD", 6))) {
F->x_977 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_976));
} else {
F->x_977 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_976));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_981 = NULL;
F->tail_982 = NULL;
F->more_983 = RT_R_EUNDEF;
F->more_983 = 1;
while (rt_r_echk(F->more_983)) {
F->names_984 = NULL;
F->names_984 = f_id_list_91();
F->st_985 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_985 = f_p_subtype_92();
while ((F->names_984 != NULL)) {
F->cmp_986 = NULL;
F->cmp_986 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P820)rt_nil_check(F->names_984)).line));
(*(P820)rt_nil_check(F->cmp_986)).name = (*(P820)rt_nil_check(F->names_984)).name;
(*(P820)rt_nil_check(F->cmp_986)).a = F->st_985;
f_append_65(&F->head_981, &F->tail_982, F->cmp_986);
F->names_984 = (*(P820)rt_nil_check(F->names_984)).next;
}
F->more_983 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->x_977)).a = F->head_981;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_978, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_977)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_978, rt_str("ENUM", 4))) {
F->x_977 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_976));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_987 = NULL;
F->tail_988 = NULL;
F->more_989 = RT_R_EUNDEF;
F->more_989 = 1;
while (rt_r_echk(F->more_989)) {
F->lit_990 = NULL;
F->lit_990 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_976));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P820)rt_nil_check(F->lit_990)).name = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
f_append_65(&F->head_987, &F->tail_988, F->lit_990);
F->more_989 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->x_977)).a = F->head_987;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_977)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P820)rt_nil_check(F->x_977)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_978, rt_str("STRING", 6)) || rt_str_eq(F->w_978, rt_str("SET", 3))) || rt_str_eq(F->w_978, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_978, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_978, rt_str("STRING", 6))) {
F->x_977 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_976));
} else if (rt_str_eq(F->w_978, rt_str("SET", 3))) {
F->x_977 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_976));
} else if (rt_str_eq(F->w_978, rt_str("MAILBOX", 7))) {
F->x_977 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_976));
} else {
F->x_977 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_976));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P820)rt_nil_check(F->x_977)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_977)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_978, rt_str("INT", 3))) {
F->x_977 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_976));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_977)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P820)rt_nil_check(F->x_977)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_978, rt_str("FLOAT", 5))) {
F->x_977 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_976));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_977)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_977)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P820)rt_nil_check(F->x_977)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_977 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_976));
(*(P820)rt_nil_check(F->x_977)).name = f_mk_3(&F->w_978);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_977)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_977)).b = f_constraint_list_93();
(*(P820)rt_nil_check(F->x_977)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_991 = NULL;
F->tail_992 = NULL;
F->more_993 = RT_R_EUNDEF;
F->more_993 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_993)) {
F->line_994 = RT_R_IUNDEF;
F->line_994 = f_cur_line_68();
F->lo_995 = NULL;
F->lo_995 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_996 = NULL;
F->r_996 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_994));
(*(P820)rt_nil_check(F->r_996)).a = F->lo_995;
(*(P820)rt_nil_check(F->r_996)).b = f_expr_103();
f_append_65(&F->head_991, &F->tail_992, F->r_996);
} else {
f_append_65(&F->head_991, &F->tail_992, F->lo_995);
}
F->more_993 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_991;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_997 = NULL;
F->tail_998 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_997, &F->tail_998, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_997, &F->tail_998, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_997;
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

static P820 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_999 = NULL;
F->tail_1000 = NULL;
F->more_1001 = RT_R_EUNDEF;
F->more_1001 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1001)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P813)rt_nil_check((*(P815)rt_nil_check((((P817)rt_nil_check(g_toks_851))->all).p[(rt_index(rt_r_ichk(g_tpos_853), (((P817)rt_nil_check(g_toks_851))->all).lo, (((P817)rt_nil_check(g_toks_851))->all).hi) - (((P817)rt_nil_check(g_toks_851))->all).lo)])).s))->all)))) {
f_append_65(&F->head_999, &F->tail_1000, f_p_subtype_92());
} else {
f_append_65(&F->head_999, &F->tail_1000, f_expr_103());
}
F->more_1001 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_999;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_binop_102(P813 op_98, P820 l_99, P820 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1002 = NULL;
F->x_1002 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P820)rt_nil_check(F->x_1002)).name = F->op_98;
(*(P820)rt_nil_check(F->x_1002)).a = F->l_99;
(*(P820)rt_nil_check(F->x_1002)).b = F->r_100;
F->result_ = F->x_1002;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1003 = NULL;
F->l_1003 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1004 = NULL;
F->op_1004 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1005 = RT_R_IUNDEF;
F->line_1005 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1003 = f_binop_102(F->op_1004, F->l_1003, f_expr_and_104(), rt_r_ichk(F->line_1005));
}
F->result_ = F->l_1003;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1006 = NULL;
F->l_1006 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1007 = RT_R_IUNDEF;
F->line_1007 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1006 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1006, f_expr_not_105(), rt_r_ichk(F->line_1007));
}
F->result_ = F->l_1006;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1008 = NULL;
F->x_1008 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1008)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P820)rt_nil_check(F->x_1008)).a = f_expr_not_105();
F->result_ = F->x_1008;
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

static P820 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1009 = NULL;
F->l_1009 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P813)rt_nil_check((*(P815)rt_nil_check((((P817)rt_nil_check(g_toks_851))->all).p[(rt_index(rt_r_ichk(g_tpos_853), (((P817)rt_nil_check(g_toks_851))->all).lo, (((P817)rt_nil_check(g_toks_851))->all).hi) - (((P817)rt_nil_check(g_toks_851))->all).lo)])).s))->all)))) {
F->op_1010 = NULL;
F->op_1010 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1011 = RT_R_IUNDEF;
F->line_1011 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1009 = f_binop_102(F->op_1010, F->l_1009, f_expr_add_109(), rt_r_ichk(F->line_1011));
}
F->result_ = F->l_1009;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1012 = NULL;
F->l_1012 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1013 = NULL;
F->op_1013 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1014 = RT_R_IUNDEF;
F->line_1014 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1012 = f_binop_102(F->op_1013, F->l_1012, f_expr_mul_110(), rt_r_ichk(F->line_1014));
}
F->result_ = F->l_1012;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1015 = NULL;
F->l_1015 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1016 = NULL;
F->op_1016 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1017 = RT_R_IUNDEF;
F->line_1017 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1015 = f_binop_102(F->op_1016, F->l_1015, f_expr_pow_111(), rt_r_ichk(F->line_1017));
}
F->result_ = F->l_1015;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1018 = NULL;
F->l_1018 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1019 = RT_R_IUNDEF;
F->line_1019 = f_cur_line_68();
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->l_1018 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1018, f_expr_prefix_112(), rt_r_ichk(F->line_1019));
}
F->result_ = F->l_1018;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1020 = NULL;
F->x_1020 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P820)rt_nil_check(F->x_1020)).name = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1020)).a = f_expr_prefix_112();
F->result_ = F->x_1020;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1021 = NULL;
F->p_1021 = f_primary_114();
while (1) {
F->line_1022 = RT_R_IUNDEF;
F->line_1022 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1023 = NULL;
F->x_1023 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1022));
F->head_1024 = NULL;
F->tail_1025 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1026 = RT_R_EUNDEF;
F->more_1026 = 1;
while (rt_r_echk(F->more_1026)) {
F->lo_1027 = NULL;
F->lo_1027 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1028 = NULL;
F->r_1028 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1022));
(*(P820)rt_nil_check(F->r_1028)).a = F->lo_1027;
(*(P820)rt_nil_check(F->r_1028)).b = f_expr_103();
f_append_65(&F->head_1024, &F->tail_1025, F->r_1028);
} else {
f_append_65(&F->head_1024, &F->tail_1025, F->lo_1027);
}
F->more_1026 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P820)rt_nil_check(F->x_1023)).a = F->p_1021;
(*(P820)rt_nil_check(F->x_1023)).b = F->head_1024;
F->p_1021 = F->x_1023;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1029 = NULL;
F->x_1029 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1022));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1029)).a = F->p_1021;
(*(P820)rt_nil_check(F->x_1029)).name = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->p_1021 = F->x_1029;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P820)rt_nil_check(F->p_1021)).kind) == (((rt_int)7LL))))) {
F->x_1030 = NULL;
F->x_1030 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1022));
(*(P820)rt_nil_check(F->x_1030)).a = F->p_1021;
(*(P820)rt_nil_check(F->x_1030)).b = f_actual_tt_97();
F->p_1021 = F->x_1030;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1031 = NULL;
F->x_1031 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1022));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1031)).a = F->p_1021;
(*(P820)rt_nil_check(F->x_1031)).b = f_p_subtype_92();
F->p_1021 = F->x_1031;
} else {
F->result_ = F->p_1021;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1032 = RT_R_IUNDEF;
F->line_1032 = f_cur_line_68();
F->x_1033 = NULL;
F->k_1034 = RT_R_IUNDEF;
F->k_1034 = rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1034) == (((rt_int)4LL)))) {
F->x_1033 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1032));
(*(P820)rt_nil_check(F->x_1033)).ival = rt_r_ichk((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P820)rt_nil_check(F->x_1033)).name = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = F->x_1033;
goto ret_;
}
if ((((rt_r_ichk(F->k_1034) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1034) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1034) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1034) == (((rt_int)5LL)))) {
F->x_1033 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1032));
} else if ((rt_r_ichk(F->k_1034) == (((rt_int)7LL)))) {
F->x_1033 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1032));
} else {
F->x_1033 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1032));
}
(*(P820)rt_nil_check(F->x_1033)).name = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = F->x_1033;
goto ret_;
}
if ((rt_r_ichk(F->k_1034) == (((rt_int)1LL)))) {
F->w_1035 = rt_str_copy((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1035, rt_str("TRUE", 4)) || rt_str_eq(F->w_1035, rt_str("FALSE", 5)))) {
F->x_1033 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1032));
if (rt_str_eq(F->w_1035, rt_str("TRUE", 4))) {
(*(P820)rt_nil_check(F->x_1033)).ival = ((rt_int)1LL);
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = F->x_1033;
goto ret_;
}
if (rt_str_eq(F->w_1035, rt_str("NIL", 3))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1032));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1033 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1032));
(*(P820)rt_nil_check(F->x_1033)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1033;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1036 = NULL;
F->tail_1037 = NULL;
F->x_1033 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1032));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1038 = RT_R_EUNDEF;
F->more_1038 = 1;
while (rt_r_echk(F->more_1038)) {
f_append_65(&F->head_1036, &F->tail_1037, f_constructor_item_115());
F->more_1038 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P820)rt_nil_check(F->x_1033)).a = F->head_1036;
F->result_ = F->x_1033;
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

static P820 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1039 = RT_R_IUNDEF;
F->line_1039 = f_cur_line_68();
F->it_1040 = NULL;
F->it_1040 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1039));
F->first_1041 = NULL;
F->first_1041 = f_expr_103();
F->keys_1042 = NULL;
F->ktail_1043 = NULL;
F->lab_1044 = NULL;
F->lab_1044 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1039));
(*(P820)rt_nil_check(F->lab_1044)).a = F->first_1041;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P820)rt_nil_check(F->lab_1044)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1042, &F->ktail_1043, F->lab_1044);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1045 = RT_R_IUNDEF;
F->save_1045 = rt_r_ichk(g_tpos_853);
F->more_1046 = NULL;
F->tail2_1047 = NULL;
F->ok_1048 = RT_R_EUNDEF;
F->ok_1048 = 0;
F->go_1049 = RT_R_EUNDEF;
F->go_1049 = 1;
while ((rt_r_echk(F->go_1049) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1050 = NULL;
F->l2_1050 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1039));
(*(P820)rt_nil_check(F->l2_1050)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P820)rt_nil_check(F->l2_1050)).b = f_expr_103();
}
f_append_65(&F->more_1046, &F->tail2_1047, F->l2_1050);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1048 = 1;
F->go_1049 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1049 = 0;
}
}
if (rt_r_echk(F->ok_1048)) {
f_append_65(&F->keys_1042, &F->ktail_1043, F->lab_1044);
f_append_65(&F->keys_1042, &F->ktail_1043, F->more_1046);
} else {
g_tpos_853 = rt_r_ichk(F->save_1045);
}
}
if (((F->keys_1042 == NULL) && ((*(P820)rt_nil_check(F->lab_1044)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1042 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P820)rt_nil_check(F->it_1040)).a = F->keys_1042;
(*(P820)rt_nil_check(F->it_1040)).b = f_expr_103();
} else {
(*(P820)rt_nil_check(F->it_1040)).b = F->first_1041;
}
F->result_ = F->it_1040;
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

static P820 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1051 = NULL;
F->tail_1052 = NULL;
F->stmts_1053 = RT_R_EUNDEF;
F->stmts_1053 = 0;
F->after_1054 = NULL;
while ((!f_at_body_end_116())) {
F->x_1055 = NULL;
F->x_1055 = f_body_element_118();
if (((F->x_1055 != NULL) && ((((rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1053)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1055 != NULL) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1053) && (F->after_1054 == NULL))) {
F->after_1054 = F->x_1055;
}
} else if (((F->x_1055 != NULL) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1055)).kind) != (((rt_int)33LL))))) {
if ((F->after_1054 != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->after_1054)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1053 = 1;
}
f_append_65(&F->head_1051, &F->tail_1052, F->x_1055);
}
F->result_ = F->head_1051;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1056 = NULL;
F->pr_1057 = NULL;
F->pr_1057 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1056 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1056 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1056)).a = f_expr_103();
} else {
F->x_1056 = f_statement_140();
}
if ((F->pr_1057 != NULL)) {
F->p_1058 = NULL;
F->p_1058 = F->x_1056;
while ((F->p_1058 != NULL)) {
if (((*(P820)rt_nil_check(F->p_1058)).prags == NULL)) {
(*(P820)rt_nil_check(F->p_1058)).prags = F->pr_1057;
} else {
(*(P820)rt_nil_check(F->p_1058)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->pr_1057))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1058)).prags))->all)); b_; }));
}
F->p_1058 = (*(P820)rt_nil_check(F->p_1058)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1056;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1059 = RT_R_IUNDEF;
F->line_1059 = f_cur_line_68();
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
F->head_1060 = NULL;
F->tail_1061 = NULL;
F->names_1062 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->names_1062 = f_id_list_91();
while ((F->names_1062 != NULL)) {
F->x_1063 = NULL;
F->x_1063 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1059));
(*(P820)rt_nil_check(F->x_1063)).name = (*(P820)rt_nil_check(F->names_1062)).name;
f_append_65(&F->head_1060, &F->tail_1061, F->x_1063);
F->names_1062 = (*(P820)rt_nil_check(F->names_1062)).next;
}
F->result_ = F->head_1060;
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

static P820 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1064 = RT_R_IUNDEF;
F->line_1064 = f_cur_line_68();
F->is_var_1065 = RT_R_EUNDEF;
F->is_var_1065 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1066 = NULL;
F->st_1067 = NULL;
F->init_1068 = NULL;
F->loc_1069 = NULL;
F->loc_kind_1070 = RT_R_IUNDEF;
F->loc_kind_1070 = ((rt_int)0LL);
F->head_1071 = NULL;
F->tail_1072 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->names_1066 = f_id_list_91();
if (rt_r_echk(F->is_var_1065)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1067 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->loc_kind_1070 = ((rt_int)1LL);
} else {
F->loc_kind_1070 = ((rt_int)2LL);
}
F->loc_1069 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1068 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1067 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1068 = f_expr_103();
}
while ((F->names_1066 != NULL)) {
F->x_1073 = NULL;
if (rt_r_echk(F->is_var_1065)) {
F->x_1073 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1064));
} else {
F->x_1073 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1064));
}
(*(P820)rt_nil_check(F->x_1073)).name = (*(P820)rt_nil_check(F->names_1066)).name;
(*(P820)rt_nil_check(F->x_1073)).a = F->st_1067;
(*(P820)rt_nil_check(F->x_1073)).b = F->init_1068;
(*(P820)rt_nil_check(F->x_1073)).c = F->loc_1069;
(*(P820)rt_nil_check(F->x_1073)).ival = rt_r_ichk(F->loc_kind_1070);
f_append_65(&F->head_1071, &F->tail_1072, F->x_1073);
F->names_1066 = (*(P820)rt_nil_check(F->names_1066)).next;
}
F->result_ = F->head_1071;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1074 = NULL;
F->x_1074 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1074)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1074)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P820)rt_nil_check(F->x_1074)).a = f_p_subtype_92();
F->result_ = F->x_1074;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1075 = RT_R_IUNDEF;
F->depth_1075 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1075) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1075 = rt_add(rt_r_ichk(F->depth_1075), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1075 = rt_sub(rt_r_ichk(F->depth_1075), ((rt_int)1LL));
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P820 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1076 = RT_R_IUNDEF;
F->line_1076 = f_cur_line_68();
F->name_1077 = NULL;
F->params_1078 = NULL;
F->x_1079 = NULL;
F->tts_1080 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->name_1077 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1080 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1078 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->x_1079 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1076));
(*(P820)rt_nil_check(F->x_1079)).d = F->params_1078;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1079)).b = f_formal_params_126();
}
} else {
F->x_1079 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1076));
(*(P820)rt_nil_check(F->x_1079)).b = F->params_1078;
}
(*(P820)rt_nil_check(F->x_1079)).name = F->name_1077;
(*(P820)rt_nil_check(F->x_1079)).e = F->tts_1080;
(*(P820)rt_nil_check(F->x_1079)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1079;
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

static P820 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1081 = NULL;
F->tail_1082 = NULL;
F->more_1083 = RT_R_EUNDEF;
F->more_1083 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1083)) {
F->mode_1084 = RT_R_IUNDEF;
F->mode_1084 = (((rt_int)1LL));
F->names_1085 = NULL;
F->ntail_1086 = NULL;
F->st_1087 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1084 = f_mode_of_125(&(((P813)rt_nil_check((*(P815)rt_nil_check((((P817)rt_nil_check(g_toks_851))->all).p[(rt_index(rt_r_ichk(g_tpos_853), (((P817)rt_nil_check(g_toks_851))->all).lo, (((P817)rt_nil_check(g_toks_851))->all).hi) - (((P817)rt_nil_check(g_toks_851))->all).lo)])).s))->all));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
}
f_append_65(&F->names_1085, &F->ntail_1086, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P813)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P813)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
f_append_65(&F->names_1085, &F->ntail_1086, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1087 = f_p_subtype_92();
while ((F->names_1085 != NULL)) {
F->p_1088 = NULL;
F->p_1088 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P820)rt_nil_check(F->names_1085)).line));
(*(P820)rt_nil_check(F->p_1088)).name = (*(P820)rt_nil_check(F->names_1085)).name;
(*(P820)rt_nil_check(F->p_1088)).ival = rt_r_ichk(F->mode_1084);
(*(P820)rt_nil_check(F->p_1088)).a = F->st_1087;
f_append_65(&F->head_1081, &F->tail_1082, F->p_1088);
F->names_1085 = (*(P820)rt_nil_check(F->names_1085)).next;
}
F->more_1083 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1081;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P820 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1089 = NULL;
F->tail_1090 = NULL;
F->more_1091 = RT_R_EUNDEF;
F->more_1091 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P820)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P820)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1091)) {
F->ro_1092 = RT_R_EUNDEF;
F->ro_1092 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1093 = NULL;
F->x_1093 = f_name_node_90();
if (rt_r_echk(F->ro_1092)) {
(*(P820)rt_nil_check(F->x_1093)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1089, &F->tail_1090, F->x_1093);
F->more_1091 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->owner_127)).d = F->head_1089;
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

static P813 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P813)rt_nil_check((*(P815)rt_nil_check((((P817)rt_nil_check(g_toks_851))->all).p[(rt_index(rt_r_ichk(g_tpos_853), (((P817)rt_nil_check(g_toks_851))->all).lo, (((P817)rt_nil_check(g_toks_851))->all).hi) - (((P817)rt_nil_check(g_toks_851))->all).lo)])).s))->all))))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_853), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P820 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1094 = RT_R_IUNDEF;
F->line_1094 = f_cur_line_68();
F->x_1095 = NULL;
F->is_abn_1096 = RT_R_EUNDEF;
F->is_abn_1096 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1097 = RT_R_EUNDEF;
F->is_func_1097 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1098 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1097)) {
F->x_1095 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1094));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1095 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1094));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1096)) {
(*(P820)rt_nil_check(F->x_1095)).flag = ((rt_int)1LL);
}
(*(P820)rt_nil_check(F->x_1095)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1095)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1095)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1097)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P820)rt_nil_check(F->x_1095)).b = f_p_subtype_92();
}
F->dummy_1098 = f_imports_list_128(F->x_1095);
if (((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P820)rt_nil_check(F->x_1095)).prags == NULL)) {
(*(P820)rt_nil_check(F->x_1095)).prags = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P820)rt_nil_check(F->x_1095)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1095)).prags))->all), (((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P820)rt_nil_check(F->x_1095)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1097)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P813)rt_nil_check(f_definable_name_131()))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1095)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1095)).name))->all)); b_; }));
}
F->result_ = F->x_1095;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1099 = NULL;
F->x_1099 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1100 = RT_R_EUNDEF;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1099)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1099)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1099)).b = f_formal_params_126();
}
F->dummy_1100 = f_imports_list_128(F->x_1099);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P820)rt_nil_check(F->x_1099)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P820)rt_nil_check(F->x_1099)).ival = ((rt_int)0LL);
} else {
F->head_1101 = NULL;
F->tail_1102 = NULL;
F->more_1103 = RT_R_EUNDEF;
F->more_1103 = 1;
while (rt_r_echk(F->more_1103)) {
F->n_1104 = NULL;
F->n_1104 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P820)rt_nil_check(F->n_1104)).ival = ((rt_int)1LL);
}
(*(P820)rt_nil_check(F->n_1104)).name = f_definable_name_131();
f_append_65(&F->head_1101, &F->tail_1102, F->n_1104);
F->more_1103 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->x_1099)).a = F->head_1101;
(*(P820)rt_nil_check(F->x_1099)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P820)rt_nil_check(F->x_1099)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P813)rt_nil_check(f_expect_id_89()))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1099)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1099;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1105 = NULL;
F->tail_1106 = NULL;
F->more_1107 = RT_R_EUNDEF;
F->more_1107 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1107)) {
f_append_65(&F->head_1105, &F->tail_1106, f_name_node_90());
F->more_1107 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1105;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1108 = NULL;
F->x_1108 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1109 = NULL;
F->tail_1110 = NULL;
F->more_1111 = RT_R_EUNDEF;
F->more_1111 = 1;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
while (rt_r_echk(F->more_1111)) {
F->names_1112 = NULL;
F->names_1112 = f_id_list_91();
F->kind_1113 = RT_R_IUNDEF;
F->kind_1113 = ((rt_int)6LL);
F->st_1114 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1113 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1113 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1113 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1113 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1113 = ((rt_int)5LL);
} else {
F->st_1114 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1113) <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P820)rt_nil_check(F->x_1108)).e = f_actual_params_94();
} else if (((rt_r_ichk(F->kind_1113) >= ((rt_int)3LL)) && (rt_r_ichk(F->kind_1113) <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1114 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
}
if (((rt_r_ichk(F->kind_1113) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1114 = f_p_subtype_92();
}
}
while ((F->names_1112 != NULL)) {
F->p_1115 = NULL;
F->p_1115 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P820)rt_nil_check(F->names_1112)).line));
(*(P820)rt_nil_check(F->p_1115)).name = (*(P820)rt_nil_check(F->names_1112)).name;
(*(P820)rt_nil_check(F->p_1115)).ival = rt_r_ichk(F->kind_1113);
(*(P820)rt_nil_check(F->p_1115)).a = F->st_1114;
f_append_65(&F->head_1109, &F->tail_1110, F->p_1115);
F->names_1112 = (*(P820)rt_nil_check(F->names_1112)).next;
}
F->more_1111 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1111 = 1;
while (rt_r_echk(F->more_1111)) {
F->nm_1116 = NULL;
F->nm_1116 = f_definable_name_131();
F->st_1117 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1117 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1117 = f_p_subtype_92();
}
F->more_1111 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P820)rt_nil_check(F->x_1108)).a = F->head_1109;
(*(P820)rt_nil_check(F->x_1108)).b = f_declaration_119();
(*(P820)rt_nil_check(F->x_1108)).name = (*(P820)rt_nil_check((*(P820)rt_nil_check(F->x_1108)).b)).name;
F->result_ = F->x_1108;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1118 = NULL;
F->x_1118 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1119 = RT_R_EUNDEF;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1118)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1118)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1118)).a = f_formal_params_126();
}
F->dummy_1119 = f_imports_list_128(F->x_1118);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P820)rt_nil_check(F->x_1118)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P813)rt_nil_check(f_expect_id_89()))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1118)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1118)).name))->all)); b_; }));
}
F->result_ = F->x_1118;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1120 = NULL;
F->x_1120 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P820)rt_nil_check(F->x_1120)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1121 = NULL;
F->tail_1122 = NULL;
F->more_1123 = RT_R_EUNDEF;
F->more_1123 = 1;
while (rt_r_echk(F->more_1123)) {
F->n_1124 = NULL;
F->n_1124 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P820)rt_nil_check(F->n_1124)).ival = ((rt_int)1LL);
}
(*(P820)rt_nil_check(F->n_1124)).name = f_definable_name_131();
f_append_65(&F->head_1121, &F->tail_1122, F->n_1124);
F->more_1123 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->x_1120)).a = F->head_1121;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P820)rt_nil_check(F->x_1120)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P820)rt_nil_check(F->x_1120)).flag = rt_add(rt_r_ichk((*(P820)rt_nil_check(F->x_1120)).flag), ((rt_int)2LL));
}
(*(P820)rt_nil_check(F->x_1120)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1120)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1120)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1125 = NULL;
F->tail_1126 = NULL;
F->more_1127 = RT_R_EUNDEF;
F->more_1127 = 1;
while (rt_r_echk(F->more_1127)) {
F->n_1128 = NULL;
F->n_1128 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1129 = NULL;
F->tgt_1129 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P820)rt_nil_check(F->n_1128)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P820)rt_nil_check(F->tgt_1129)).name = f_definable_name_131();
(*(P820)rt_nil_check(F->n_1128)).a = F->tgt_1129;
f_append_65(&F->head_1125, &F->tail_1126, F->n_1128);
F->more_1127 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P820)rt_nil_check(F->x_1120)).c = F->head_1125;
}
F->result_ = F->x_1120;
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

static P820 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1130 = NULL;
F->ltail_1131 = NULL;
F->match_1132 = NULL;
F->s_1133 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P813)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1130, &F->ltail_1131, f_name_node_90());
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P813)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1132 = f_expect_id_89();
}
F->s_1133 = f_unlabeled_statement_141();
if ((F->match_1132 != NULL)) {
if ((((((((rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P813)rt_nil_check(f_expect_id_89()))->all), (((P813)rt_nil_check(F->match_1132))->all)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_1133)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P813)rt_nil_check(F->match_1132))->all)); b_; }));
}
(*(P820)rt_nil_check(F->s_1133)).tag = F->match_1132;
}
(*(P820)rt_nil_check(F->s_1133)).labels = F->labels_1130;
F->result_ = F->s_1133;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1134 = RT_R_IUNDEF;
F->line_1134 = f_cur_line_68();
F->x_1135 = NULL;
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
F->x_1135 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).name = f_expect_id_89();
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P820)rt_nil_check(F->x_1135)).a = f_expr_103();
}
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).name = f_expect_id_89();
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).name = f_expect_id_89();
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1134));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1135)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1135)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P820)rt_nil_check(F->x_1135)).a = f_postfix_113();
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1136 = NULL;
F->tail_1137 = NULL;
F->x_1135 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1138 = NULL;
F->itail_1139 = NULL;
F->more_1140 = RT_R_EUNDEF;
F->more_1140 = 1;
while (rt_r_echk(F->more_1140)) {
f_append_65(&F->invs_1138, &F->itail_1139, f_postfix_113());
F->more_1140 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1136, &F->tail_1137, f_arm_145(F->invs_1138, f_body_117(), rt_r_ichk(F->line_1134)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P820)rt_nil_check(F->x_1135)).a = F->head_1136;
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P820)rt_nil_check(F->x_1135)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1135;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1134));
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1135)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P813)rt_nil_check((*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P820)rt_nil_check(F->x_1135)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P820)rt_nil_check(F->x_1135)).c = f_expr_103();
}
F->result_ = F->x_1135;
goto ret_;
}
{
F->target_1141 = NULL;
F->target_1141 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1135 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1134));
(*(P820)rt_nil_check(F->x_1135)).a = F->target_1141;
(*(P820)rt_nil_check(F->x_1135)).b = f_expr_103();
} else {
F->x_1135 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1134));
(*(P820)rt_nil_check(F->x_1135)).a = F->target_1141;
}
}
F->result_ = F->x_1135;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_arm_145(P820 cond_142, P820 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1142 = NULL;
F->x_1142 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P820)rt_nil_check(F->x_1142)).a = F->cond_142;
(*(P820)rt_nil_check(F->x_1142)).b = F->b_143;
F->result_ = F->x_1142;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1143 = NULL;
F->x_1143 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1144 = NULL;
F->tail_1145 = NULL;
F->cond_1146 = NULL;
F->go_1147 = RT_R_EUNDEF;
F->go_1147 = 1;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
F->cond_1146 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1144, &F->tail_1145, f_arm_145(F->cond_1146, f_body_117(), rt_r_ichk((*(P820)rt_nil_check(F->x_1143)).line)));
while (rt_r_echk(F->go_1147)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1146 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1144, &F->tail_1145, f_arm_145(F->cond_1146, f_body_117(), rt_r_ichk((*(P820)rt_nil_check(F->x_1143)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P820)rt_nil_check(F->x_1143)).flag = ((rt_int)1LL);
(*(P820)rt_nil_check(F->x_1143)).b = f_body_117();
} else {
F->go_1147 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P820)rt_nil_check(F->x_1143)).a = F->head_1144;
F->result_ = F->x_1143;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1148 = NULL;
F->x_1148 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1149 = NULL;
F->tail_1150 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1148)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1151 = NULL;
F->ltail_1152 = NULL;
F->more_1153 = RT_R_EUNDEF;
F->more_1153 = 1;
while (rt_r_echk(F->more_1153)) {
F->l_1154 = NULL;
F->l_1154 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P820)rt_nil_check(F->l_1154)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P820)rt_nil_check(F->l_1154)).b = f_expr_103();
}
f_append_65(&F->labs_1151, &F->ltail_1152, F->l_1154);
F->more_1153 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1149, &F->tail_1150, f_arm_145(F->labs_1151, f_body_117(), rt_r_ichk((*(P820)rt_nil_check(F->x_1148)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P820)rt_nil_check(F->x_1148)).flag = ((rt_int)1LL);
(*(P820)rt_nil_check(F->x_1148)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P820)rt_nil_check(F->x_1148)).b = F->head_1149;
F->result_ = F->x_1148;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1155 = NULL;
F->x_1155 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P820)rt_nil_check(F->x_1155)).flag = ((rt_int)1LL);
(*(P820)rt_nil_check(F->x_1155)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P820)rt_nil_check(F->x_1155)).ival = ((rt_int)1LL);
}
(*(P820)rt_nil_check(F->x_1155)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P820)rt_nil_check(F->x_1155)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P820)rt_nil_check(F->x_1155)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1155;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1156 = NULL;
F->x_1156 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1157 = NULL;
F->tail_1158 = NULL;
g_tpos_853 = rt_add(rt_r_ichk(g_tpos_853), ((rt_int)1LL));
(*(P820)rt_nil_check(F->x_1156)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1159 = NULL;
F->h_1159 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P820)rt_nil_check(F->h_1159)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P820)rt_nil_check(F->h_1159)).b = f_body_117();
f_append_65(&F->head_1157, &F->tail_1158, F->h_1159);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P820)rt_nil_check(F->x_1156)).flag = ((rt_int)1LL);
(*(P820)rt_nil_check(F->x_1156)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P820)rt_nil_check(F->x_1156)).b = F->head_1157;
F->result_ = F->x_1156;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1160 = NULL;
F->tail_1161 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1162 = NULL;
F->pr_1162 = (*(P815)rt_nil_check(({ A819 b_ = (((P817)rt_nil_check(g_toks_851))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_853), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1163 = NULL;
F->u_1163 = f_capsule_decl_133();
(*(P820)rt_nil_check(F->u_1163)).prags = F->pr_1162;
f_append_65(&F->head_1160, &F->tail_1161, F->u_1163);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1160;
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
F->h_1164 = RT_R_IUNDEF;
F->h_1164 = ((rt_int)0LL);
{ rt_int lo1166 = ((rt_int)1LL), hi1167 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1168 = lo1166; it1168 <= hi1167; it1168++) {
F->i_1165 = it1168;
F->h_1164 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1164), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_151), F->i_1165))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1164);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1169 = NULL;
F->y_1169 = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_857 != NULL)) {
while ((F->y_1169 != NULL)) {
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1169)).depth) >= rt_r_ichk(g_gdepth_889)) && rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1169)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1169;
goto ret_;
}
F->y_1169 = (*(P830)rt_nil_check(F->y_1169)).chain;
}
F->y_1169 = ({ A836 b_ = (((P834)rt_nil_check(g_genv_857))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1169 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1169)).name))->all), (*F->name_153))) {
F->result_ = F->y_1169;
goto ret_;
}
F->y_1169 = (*(P830)rt_nil_check(F->y_1169)).chain;
}
F->y_1169 = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1169 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1169)).name))->all), (*F->name_153))) {
F->result_ = F->y_1169;
goto ret_;
}
F->y_1169 = (*(P830)rt_nil_check(F->y_1169)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_lookup_decl_156(P820 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1170 = NULL;
F->y_1170 = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(f_hash_152(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1170 != NULL)) {
if (((*(P830)rt_nil_check(F->y_1170)).decl == F->d_155)) {
F->result_ = F->y_1170;
goto ret_;
}
F->y_1170 = (*(P830)rt_nil_check(F->y_1170)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P830 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1171 = RT_R_IUNDEF;
F->h_1171 = f_hash_152(&(((P813)rt_nil_check((*(P830)rt_nil_check(F->y_157)).name))->all));
F->z_1172 = NULL;
F->z_1172 = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(rt_r_ichk(F->h_1171), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1172 != NULL)) {
if ((((rt_r_ichk((*(P830)rt_nil_check(F->z_1172)).depth) == rt_r_ichk(g_depth_859)) && rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->z_1172)).name))->all), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1172)) && (rt_r_ichk((*(P830)rt_nil_check(F->z_1172)).kind) == rt_r_ichk((*(P830)rt_nil_check(F->y_157)).kind))) && (!(f_same_signature_167((*(P830)rt_nil_check(F->y_157)).params, (*(P830)rt_nil_check(F->z_1172)).params) && f_same_tt_164((*(P830)rt_nil_check(F->y_157)).decl, (*(P830)rt_nil_check(F->z_1172)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1172 = (*(P830)rt_nil_check(F->z_1172)).chain;
}
(*(P830)rt_nil_check(F->y_157)).depth = rt_r_ichk(g_depth_859);
(*(P830)rt_nil_check(F->y_157)).chain = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(rt_r_ichk(F->h_1171), b_.lo, b_.hi) - b_.lo)]; });
(((P834)rt_nil_check(g_table_856))->all).p[(rt_index(rt_r_ichk(F->h_1171), (((P834)rt_nil_check(g_table_856))->all).lo, (((P834)rt_nil_check(g_table_856))->all).hi) - (((P834)rt_nil_check(g_table_856))->all).lo)] = F->y_157;
(*(P830)rt_nil_check(F->y_157)).stack = g_scope_stack_860;
g_scope_stack_860 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P830 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = ((((rt_r_ichk((*(P830)rt_nil_check(F->y_160)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_160)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_160)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_160)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P820 a_162, P820 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1173 = NULL;
F->y_1174 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1173 = (*(P820)rt_nil_check(F->a_162)).e;
F->y_1174 = (*(P820)rt_nil_check(F->b_163)).e;
while (((F->x_1173 != NULL) && (F->y_1174 != NULL))) {
if ((!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1173)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->y_1174)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1173 = (*(P820)rt_nil_check(F->x_1173)).next;
F->y_1174 = (*(P820)rt_nil_check(F->y_1174)).next;
}
F->result_ = ((F->x_1173 == NULL) && (F->y_1174 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P832 a_165, P832 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1175 = NULL;
F->x_1175 = F->a_165;
F->y_1176 = NULL;
F->y_1176 = F->b_166;
while (((F->x_1175 != NULL) && (F->y_1176 != NULL))) {
if ((!f_same_212((*(P832)rt_nil_check(F->x_1175)).t, (*(P832)rt_nil_check(F->y_1176)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1175 = (*(P832)rt_nil_check(F->x_1175)).next;
F->y_1176 = (*(P832)rt_nil_check(F->y_1176)).next;
}
F->result_ = ((F->x_1175 == NULL) && (F->y_1176 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_859 = rt_add(rt_r_ichk(g_depth_859), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_860 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(g_scope_stack_860)).depth) == rt_r_ichk(g_depth_859)))) {
(((P834)rt_nil_check(g_table_856))->all).p[(rt_index(f_hash_152(&(((P813)rt_nil_check((*(P830)rt_nil_check(g_scope_stack_860)).name))->all)), (((P834)rt_nil_check(g_table_856))->all).lo, (((P834)rt_nil_check(g_table_856))->all).hi) - (((P834)rt_nil_check(g_table_856))->all).lo)] = (*(P830)rt_nil_check(g_scope_stack_860)).chain;
g_scope_stack_860 = (*(P830)rt_nil_check(g_scope_stack_860)).stack;
}
g_depth_859 = rt_sub(rt_r_ichk(g_depth_859), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P830 f_new_sym_172(rt_int kind_170, P813 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1177 = NULL;
{ R831 *cell1178 = rt_alloc(sizeof(R831));
(*cell1178).name = NULL;
(*cell1178).t = NULL;
(*cell1178).c = NULL;
(*cell1178).access = NULL;
(*cell1178).cname = NULL;
(*cell1178).st = NULL;
(*cell1178).decl = NULL;
(*cell1178).params = NULL;
(*cell1178).result = NULL;
(*cell1178).members = NULL;
(*cell1178).mnext = NULL;
(*cell1178).binds = NULL;
(*cell1178).insts = NULL;
(*cell1178).env = NULL;
(*cell1178).chain = NULL;
(*cell1178).stack = NULL;
(*cell1178).owner = NULL;
(*cell1178).gctx = NULL;
(*cell1178).mv = NULL;
(*cell1178).reqs = NULL;
(*cell1178).home = NULL;
(*cell1178).capn = NULL;
(*cell1178).tbinds = NULL;
F->y_1177 = cell1178;
}
(*(P830)rt_nil_check(F->y_1177)).kind = F->kind_170;
(*(P830)rt_nil_check(F->y_1177)).name = F->name_171;
F->result_ = F->y_1177;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1179 = NULL;
{ R827 *cell1180 = rt_alloc(sizeof(R827));
(*cell1180).name = NULL;
(*cell1180).lits = NULL;
(*cell1180).elem = NULL;
(*cell1180).idx = NULL;
(*cell1180).idx2 = NULL;
(*cell1180).elemcons = NULL;
(*cell1180).elemst = NULL;
(*cell1180).under = NULL;
(*cell1180).tparams = NULL;
(*cell1180).ocap = NULL;
(*cell1180).fields = NULL;
(*cell1180).target = NULL;
(*cell1180).decl = NULL;
(*cell1180).cname = NULL;
(*cell1180).initp = NULL;
(*cell1180).finalp = NULL;
(*cell1180).tpsyms = NULL;
(*cell1180).gen = NULL;
(*cell1180).gbinds = NULL;
(*cell1180).next = NULL;
(*cell1180).idxs = NULL;
F->t_1179 = cell1180;
}
(*(P826)rt_nil_check(F->t_1179)).kind = F->kind_173;
F->result_ = F->t_1179;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1181 = NULL;
{ R823 *cell1182 = rt_alloc(sizeof(R823));
(*cell1182).lo = NULL;
(*cell1182).hi = NULL;
(*cell1182).lo2 = NULL;
(*cell1182).hi2 = NULL;
(*cell1182).slen = NULL;
(*cell1182).args = NULL;
(*cell1182).prec = NULL;
(*cell1182).bnds = NULL;
F->c_1181 = cell1182;
}
F->result_ = F->c_1181;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P826 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && (((rt_r_ichk((*(P826)rt_nil_check(F->t_176)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_176)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_176)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P826 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_178)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P822 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1183 = NULL;
F->p_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P822)rt_nil_check(F->c_180)).dyn)) || (rt_r_ichk((*(P822)rt_nil_check(F->c_180)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1185 = ((rt_int)1LL), hi1186 = rt_sub(rt_r_ichk(g_cur_level_873), rt_r_ichk((*(P822)rt_nil_check(F->c_180)).lvl));
for (rt_int it1187 = lo1185; it1187 <= hi1186; it1187++) {
F->i_1184 = it1187;
F->p_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->p_1183))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->p_1183))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P822 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P822 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P826 t_187, P822 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P822)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_187)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P826 t_190, P822 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P822)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_190)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_190)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_872))) {
F->g_1188 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1188), rt_str(";", 1)); b_; }));
g_st_field_878 = f_mk_3(&F->g_1188);
F->result_ = F->g_1188;
goto ret_;
}
{
F->f_1189 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1189), rt_str(";", 1)); b_; }));
g_st_field_878 = f_mk_3(&F->f_1189);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1189);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_copy_cons_197(P822 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1190 = NULL;
{ R823 *cell1191 = rt_alloc(sizeof(R823));
(*cell1191).lo = NULL;
(*cell1191).hi = NULL;
(*cell1191).lo2 = NULL;
(*cell1191).hi2 = NULL;
(*cell1191).slen = NULL;
(*cell1191).args = NULL;
(*cell1191).prec = NULL;
(*cell1191).bnds = NULL;
F->r_1190 = cell1191;
}
(*(P822)rt_nil_check(F->r_1190)).lo = (*(P822)rt_nil_check(F->c_196)).lo;
(*(P822)rt_nil_check(F->r_1190)).hi = (*(P822)rt_nil_check(F->c_196)).hi;
(*(P822)rt_nil_check(F->r_1190)).lo2 = (*(P822)rt_nil_check(F->c_196)).lo2;
(*(P822)rt_nil_check(F->r_1190)).hi2 = (*(P822)rt_nil_check(F->c_196)).hi2;
(*(P822)rt_nil_check(F->r_1190)).slen = (*(P822)rt_nil_check(F->c_196)).slen;
(*(P822)rt_nil_check(F->r_1190)).mlo = rt_r_ichk((*(P822)rt_nil_check(F->c_196)).mlo);
(*(P822)rt_nil_check(F->r_1190)).mhi = rt_r_ichk((*(P822)rt_nil_check(F->c_196)).mhi);
(*(P822)rt_nil_check(F->r_1190)).hasm = rt_r_echk((*(P822)rt_nil_check(F->c_196)).hasm);
(*(P822)rt_nil_check(F->r_1190)).args = (*(P822)rt_nil_check(F->c_196)).args;
(*(P822)rt_nil_check(F->r_1190)).dyn = rt_r_echk((*(P822)rt_nil_check(F->c_196)).dyn);
(*(P822)rt_nil_check(F->r_1190)).lvl = rt_r_ichk((*(P822)rt_nil_check(F->c_196)).lvl);
(*(P822)rt_nil_check(F->r_1190)).prec = (*(P822)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1190;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_freeze_200(P822 c_198, P826 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1192 = NULL;
F->saved_field_1193 = NULL;
F->saved_field_1193 = g_st_field_878;
if ((((((F->c_198 == NULL) || ((*(P822)rt_nil_check(F->c_198)).lo == NULL)) || rt_r_echk((*(P822)rt_nil_check(F->c_198)).hasm)) || rt_r_echk((*(P822)rt_nil_check(F->c_198)).dyn)) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1192 = f_copy_cons_197(F->c_198);
{
F->ct_1194 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1195 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1194));
F->lf_1196 = rt_str_copy((((P813)rt_nil_check(g_st_field_878))->all));
F->ha_1197 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1194));
F->hf_1198 = rt_str_copy((((P813)rt_nil_check(g_st_field_878))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1195, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1197), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_872)) {
(*(P822)rt_nil_check(F->r_1192)).lo = f_mk_3(&F->lf_1196);
(*(P822)rt_nil_check(F->r_1192)).hi = f_mk_3(&F->hf_1198);
(*(P822)rt_nil_check(F->r_1192)).dyn = 1;
(*(P822)rt_nil_check(F->r_1192)).lvl = rt_r_ichk(g_cur_level_873);
} else {
(*(P822)rt_nil_check(F->r_1192)).lo = f_mk_3(&F->la_1195);
(*(P822)rt_nil_check(F->r_1192)).hi = f_mk_3(&F->ha_1197);
(*(P822)rt_nil_check(F->r_1192)).dyn = 0;
}
}
g_st_field_878 = F->saved_field_1193;
F->result_ = F->r_1192;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P826 t_201, P822 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_201)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P822)rt_nil_check(F->c_202)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P822)rt_nil_check(F->c_202)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P822)rt_nil_check(F->c_202)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P822)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_201)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_207(P820 a_205, P820 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1199 = NULL;
F->x_1199 = F->a_205;
F->y_1200 = NULL;
F->y_1200 = F->b_206;
while (((F->x_1199 != NULL) && (F->y_1200 != NULL))) {
if ((!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->x_1199)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->y_1200)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1199 = (*(P820)rt_nil_check(F->x_1199)).next;
F->y_1200 = (*(P820)rt_nil_check(F->y_1200)).next;
}
F->result_ = ((F->x_1199 == NULL) && (F->y_1200 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_str_elem_209(P826 t_208) {
  struct f_str_elem_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if (((*(P826)rt_nil_check(F->t_208)).elem == NULL)) {
F->result_ = g_ty_ascii_903;
goto ret_;
}
F->result_ = (*(P826)rt_nil_check(F->t_208)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_212(P826 a_210, P826 b_211) {
  struct f_same_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
if ((F->a_210 == F->b_211)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_210 == NULL) || (F->b_211 == NULL)) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) != rt_r_ichk((*(P826)rt_nil_check(F->b_211)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_212(f_str_elem_209(F->a_210), f_str_elem_209(F->b_211));
goto ret_;
}
if ((((((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P826)rt_nil_check(F->a_210)).lits, (*(P826)rt_nil_check(F->b_211)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)6LL)))) {
F->x_1201 = NULL;
F->x_1201 = (*(P826)rt_nil_check(F->a_210)).idxs;
F->y_1202 = NULL;
F->y_1202 = (*(P826)rt_nil_check(F->b_211)).idxs;
while (((F->x_1201 != NULL) && (F->y_1202 != NULL))) {
if ((!f_same_212((*(P841)rt_nil_check(F->x_1201)).t, (*(P841)rt_nil_check(F->y_1202)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1201 = (*(P841)rt_nil_check(F->x_1201)).next;
F->y_1202 = (*(P841)rt_nil_check(F->y_1202)).next;
}
F->result_ = (((F->x_1201 == NULL) && (F->y_1202 == NULL)) && f_same_212((*(P826)rt_nil_check(F->a_210)).elem, (*(P826)rt_nil_check(F->b_211)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_212((*(P826)rt_nil_check(F->a_210)).elem, (*(P826)rt_nil_check(F->b_211)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->a_210)).kind) == (((rt_int)17LL))))) {
F->f_1203 = NULL;
F->f_1203 = (*(P826)rt_nil_check(F->a_210)).fields;
F->g_1204 = NULL;
F->g_1204 = (*(P826)rt_nil_check(F->b_211)).fields;
while (((F->f_1203 != NULL) && (F->g_1204 != NULL))) {
if (((!rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1203)).name))->all), (((P813)rt_nil_check((*(P828)rt_nil_check(F->g_1204)).name))->all))) || (!f_same_212((*(P828)rt_nil_check(F->f_1203)).t, (*(P828)rt_nil_check(F->g_1204)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1203 = (*(P828)rt_nil_check(F->f_1203)).next;
F->g_1204 = (*(P828)rt_nil_check(F->g_1204)).next;
}
F->result_ = ((F->f_1203 == NULL) && (F->g_1204 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_base_of_214(P826 t_213) {
  struct f_base_of_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if ((((F->t_213 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->t_213)).kind) == (((rt_int)15LL)))) && ((*(P826)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_base_of_214((*(P826)rt_nil_check(F->t_213)).under);
goto ret_;
}
F->result_ = F->t_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P822 f_base_cons_217(P826 t_215, P822 c_216) {
  struct f_base_cons_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
F->c_216 = c_216;
if (((((F->t_215 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->t_215)).kind) == (((rt_int)15LL)))) && ((*(P826)rt_nil_check(F->t_215)).tparams == NULL)) && ((*(P826)rt_nil_check(F->t_215)).elemcons != NULL))) {
F->result_ = f_base_cons_217((*(P826)rt_nil_check(F->t_215)).under, (*(P826)rt_nil_check(F->t_215)).elemcons);
goto ret_;
}
F->result_ = F->c_216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_219(P826 t_218) {
  struct f_kind_name_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
{ rt_int sel1205 = rt_r_ichk((*(P826)rt_nil_check(F->t_218)).kind);
if (0 || (sel1205 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1205 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_218)).name))->all));
goto ret_;
} else if (0 || (sel1205 == (((rt_int)11LL)))) {
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

static void f_check_type_223(P826 got_220, P826 want_221, rt_int line_222) {
  struct f_check_type_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_220 = got_220;
F->want_221 = want_221;
F->line_222 = line_222;
if ((F->want_221 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->got_220)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->want_221)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_212(F->got_220, F->want_221))) {
f_fail_23(F->line_222, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_219(F->got_220)), rt_str(" where ", 7)), f_kind_name_219(F->want_221)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_225(P826 t_224) {
  struct f_ctype_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
{ rt_int sel1206 = rt_r_ichk((*(P826)rt_nil_check(F->t_224)).kind);
if (0 || (sel1206 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)2LL))) || (sel1206 == (((rt_int)4LL))) || (sel1206 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1206 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P826)rt_nil_check(F->t_224)).cname == NULL)) {
f_declare_ctype_231(F->t_224);
} else if (((((rt_r_ichk((*(P826)rt_nil_check(F->t_224)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_224)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P826)rt_nil_check(F->t_224)).forward)) && (!rt_r_echk((*(P826)rt_nil_check(F->t_224)).defined)))) {
(*(P826)rt_nil_check(F->t_224)).defined = 1;
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_224)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_224)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_224)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_227(P826 t_226) {
  struct f_struct_body_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_226)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_229(P826 t_228) {
  struct f_field_decls_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->f_1207 = NULL;
F->f_1207 = (*(P826)rt_nil_check(F->t_228)).fields;
F->s_1208 = NULL;
F->s_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1207 != NULL)) {
F->s_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->s_1208))->all), f_ctype_225((*(P828)rt_nil_check(F->f_1207)).t)), rt_str(" ", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1207)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1207 = (*(P828)rt_nil_check(F->f_1207)).next;
}
F->result_ = (((P813)rt_nil_check(F->s_1208))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_231(P826 t_230) {
  struct f_declare_ctype_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_230 = t_230;
F->u_1209 = NULL;
F->u_1209 = g_all_types_861;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P826)rt_nil_check(F->t_230)).target == NULL))) {
f_finish_ptr_414(F->t_230);
if (((*(P826)rt_nil_check(F->t_230)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) != (((rt_int)8LL)))) {
while ((F->u_1209 != NULL)) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->u_1209)).kind) == rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind)) && f_same_212(F->u_1209, F->t_230))) {
(*(P826)rt_nil_check(F->t_230)).cname = (*(P826)rt_nil_check(F->u_1209)).cname;
goto ret_;
}
F->u_1209 = (*(P826)rt_nil_check(F->u_1209)).next;
}
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_230)).tparams == NULL))) {
(*(P826)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225((*(P826)rt_nil_check(F->t_230)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
(*(P826)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
(*(P826)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)17LL))))) {
(*(P826)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P826)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P826)rt_nil_check(F->t_230)).next = g_all_types_861;
g_all_types_861 = F->t_230;
if ((((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P826)rt_nil_check(F->t_230)).decl != NULL)) && ((*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_230)).decl)).b != NULL))) {
F->p_1210 = NULL;
F->p_1210 = (*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_230)).decl)).b;
F->fs_1211 = NULL;
F->fs_1211 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1212 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1210 != NULL)) {
F->pc_1213 = NULL;
F->fs_1211 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->fs_1211))->all), rt_str(" ", 1)), f_ctype_225(f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1210)).a, &F->pc_1213))), rt_str(" p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1210)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1210 = (*(P820)rt_nil_check(F->p_1210)).next;
}
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1212), rt_str(" *", 2)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1212), rt_str(" {", 2)), (((P813)rt_nil_check(F->fs_1211))->all)), rt_str(" ", 1)), f_ctype_225((*(P826)rt_nil_check(F->t_230)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL)))) {
F->target_1214 = NULL;
F->target_1214 = (*(P826)rt_nil_check(F->t_230)).target;
if (((rt_r_ichk((*(P826)rt_nil_check(F->target_1214)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->target_1214)).kind) == (((rt_int)17LL))))) {
if (((*(P826)rt_nil_check(F->target_1214)).cname == NULL)) {
(*(P826)rt_nil_check(F->target_1214)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P826)rt_nil_check(F->target_1214)).next = g_all_types_861;
g_all_types_861 = F->target_1214;
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P813)rt_nil_check((*(P826)rt_nil_check(F->target_1214)).cname))->all)), rt_str(" ", 1)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->target_1214)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P826)rt_nil_check(F->target_1214)).forward = 1;
}
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P813)rt_nil_check((*(P826)rt_nil_check(F->target_1214)).cname))->all)), rt_str(" *", 2)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_225(F->target_1214)), rt_str(" *", 2)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_225((*(P826)rt_nil_check(F->t_230)).elem)), rt_str(" *p;", 4)), f_more_dims_237(F->t_230)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
F->p_1215 = NULL;
F->p_1215 = (*(P826)rt_nil_check(F->t_230)).tparams;
F->fs_1216 = NULL;
F->fs_1216 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1215 != NULL)) {
F->fs_1216 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->fs_1216))->all), f_ctype_225(f_tparam_type_321(F->t_230, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1215)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1215)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1215 = (*(P820)rt_nil_check(F->p_1215)).next;
}
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" {", 2)), (((P813)rt_nil_check(F->fs_1216))->all)), f_ctype_225((*(P826)rt_nil_check(F->t_230)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P826)rt_nil_check(F->t_230)).defined = 1;
f_put_27(g_out_types_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_230)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_237(P826 t_236) {
  struct f_more_dims_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->r_1217 = NULL;
F->r_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1219 = ((rt_int)3LL), hi1220 = rt_r_ichk((*(P826)rt_nil_check(F->t_236)).ndim);
for (rt_int it1221 = lo1219; it1221 <= hi1220; it1221++) {
F->k_1218 = it1221;
F->r_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1217))->all), rt_str(" rt_int ", 8)), f_dim_lo_233(F->k_1218)), rt_str(", ", 2)), f_dim_hi_235(F->k_1218)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P813)rt_nil_check(F->r_1217))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_240(P826 t_238, rstr *base_239) {
  struct f_acnt_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_238 = t_238;
F->base_239 = base_239;
F->r_1222 = NULL;
F->r_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_239)), rt_str(")", 1)); b_; }));
{ rt_int lo1224 = ((rt_int)3LL), hi1225 = rt_r_ichk((*(P826)rt_nil_check(F->t_238)).ndim);
for (rt_int it1226 = lo1224; it1226 <= hi1225; it1226++) {
F->k_1223 = it1226;
F->r_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1222))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_239)), rt_str(".", 1)), f_dim_lo_233(F->k_1223)), rt_str(", ", 2)), (*F->base_239)), rt_str(".", 1)), f_dim_hi_235(F->k_1223)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->r_1222))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_cons_lo_243(P822 c_241, rt_int k_242) {
  struct f_cons_lo_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1227 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P822)rt_nil_check(F->c_241)).lo;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P822)rt_nil_check(F->c_241)).lo2;
goto ret_;
}
F->l_1227 = (*(P822)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1229 = ((rt_int)1LL), hi1230 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)6LL));
for (rt_int it1231 = lo1229; it1231 <= hi1230; it1231++) {
F->i_1228 = it1231;
if ((F->l_1227 != NULL)) {
F->l_1227 = (*(P824)rt_nil_check(F->l_1227)).next;
}
}
}
if ((F->l_1227 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P824)rt_nil_check(F->l_1227)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_cons_hi_246(P822 c_244, rt_int k_245) {
  struct f_cons_hi_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_244 = c_244;
F->k_245 = k_245;
F->l_1232 = NULL;
if ((F->k_245 == ((rt_int)1LL))) {
F->result_ = (*(P822)rt_nil_check(F->c_244)).hi;
goto ret_;
} else if ((F->k_245 == ((rt_int)2LL))) {
F->result_ = (*(P822)rt_nil_check(F->c_244)).hi2;
goto ret_;
}
F->l_1232 = (*(P822)rt_nil_check(F->c_244)).bnds;
{ rt_int lo1234 = ((rt_int)1LL), hi1235 = rt_sub(rt_add(F->k_245, F->k_245), ((rt_int)5LL));
for (rt_int it1236 = lo1234; it1236 <= hi1235; it1236++) {
F->i_1233 = it1236;
if ((F->l_1232 != NULL)) {
F->l_1232 = (*(P824)rt_nil_check(F->l_1232)).next;
}
}
}
if ((F->l_1232 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P824)rt_nil_check(F->l_1232)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_idx_type_249(P826 t_247, rt_int k_248) {
  struct f_idx_type_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->k_248 = k_248;
F->l_1237 = NULL;
F->l_1237 = (*(P826)rt_nil_check(F->t_247)).idxs;
{ rt_int lo1239 = ((rt_int)2LL), hi1240 = F->k_248;
for (rt_int it1241 = lo1239; it1241 <= hi1240; it1241++) {
F->i_1238 = it1241;
F->l_1237 = (*(P841)rt_nil_check(F->l_1237)).next;
}
}
F->result_ = (*(P841)rt_nil_check(F->l_1237)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_250(void) {
  struct f_init_ascii_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1242 = NULL;
F->tail_1243 = NULL;
F->start_1244 = RT_R_IUNDEF;
F->start_1244 = ((rt_int)1LL);
{ rt_int lo1246 = ((rt_int)1LL), hi1247 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1248 = lo1246; it1248 <= hi1247; it1248++) {
F->i_1245 = it1248;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1245) == 32)) {
F->lit_1249 = NULL;
F->lit_1249 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P820)rt_nil_check(F->lit_1249)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1244), rt_sub(F->i_1245, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1242, &F->tail_1243, F->lit_1249);
F->start_1244 = rt_add(F->i_1245, ((rt_int)1LL));
}
}
}
g_ty_ascii_903 = f_new_typ_174((((rt_int)4LL)));
(*(P826)rt_nil_check(g_ty_ascii_903)).lits = F->head_1242;
(*(P826)rt_nil_check(g_ty_ascii_903)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1250 = NULL;
F->t2_1251 = NULL;
F->l1_1252 = NULL;
F->l1_1252 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1253 = NULL;
F->l2_1253 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1254 = NULL;
F->l3_1254 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P820)rt_nil_check(F->l1_1252)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P820)rt_nil_check(F->l2_1253)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P820)rt_nil_check(F->l3_1254)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1250, &F->t2_1251, F->l1_1252);
f_append_65(&F->h2_1250, &F->t2_1251, F->l2_1253);
f_append_65(&F->h2_1250, &F->t2_1251, F->l3_1254);
g_file_mode_type_911 = f_new_typ_174((((rt_int)4LL)));
(*(P826)rt_nil_check(g_file_mode_type_911)).lits = F->h2_1250;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_253(P820 lits_251, rstr *name_252) {
  struct f_lit_index_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_251 = lits_251;
F->name_252 = name_252;
F->i_1255 = RT_R_IUNDEF;
F->i_1255 = ((rt_int)0LL);
F->l_1256 = NULL;
F->l_1256 = F->lits_251;
while ((F->l_1256 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->l_1256)).name))->all), (*F->name_252))) {
F->result_ = rt_r_ichk(F->i_1255);
goto ret_;
}
F->i_1255 = rt_add(rt_r_ichk(F->i_1255), ((rt_int)1LL));
F->l_1256 = (*(P820)rt_nil_check(F->l_1256)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_resolve_subtype_256(P820 st_254, P822 *c_255) {
  struct f_resolve_subtype_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_254 = st_254;
F->c_255 = c_255;
F->c_255v = *F->c_255;
F->t_1257 = NULL;
F->ok_1258 = RT_R_EUNDEF;
F->dummy_1259 = NULL;
F->c_255v = f_new_cons_175();
{ rt_int sel1260 = rt_r_ichk((*(P820)rt_nil_check(F->st_254)).kind);
if (0 || (sel1260 == (((rt_int)70LL)))) {
if (((*(P820)rt_nil_check(F->st_254)).a != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).a, g_ty_int_900, &F->dummy_1259); b_; }));
(*(P822)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).b, g_ty_int_900, &F->dummy_1259); b_; }));
(*(P822)rt_nil_check(F->c_255v)).mlo = f_manifest_333((*(P820)rt_nil_check(F->st_254)).a, &F->ok_1258);
(*(P822)rt_nil_check(F->c_255v)).hasm = rt_r_echk(F->ok_1258);
(*(P822)rt_nil_check(F->c_255v)).mhi = f_manifest_333((*(P820)rt_nil_check(F->st_254)).b, &F->ok_1258);
(*(P822)rt_nil_check(F->c_255v)).hasm = (rt_r_echk((*(P822)rt_nil_check(F->c_255v)).hasm) && rt_r_echk(F->ok_1258));
}
F->result_ = g_ty_int_900;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)71LL)))) {
if (((*(P820)rt_nil_check(F->st_254)).a != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).a, g_ty_int_900, &F->dummy_1259); b_; }));
}
if (((*(P820)rt_nil_check(F->st_254)).b != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).b, g_ty_float_902, &F->dummy_1259); b_; }));
(*(P822)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).c, g_ty_float_902, &F->dummy_1259); b_; }));
(*(P822)rt_nil_check(F->c_255v)).hasm = (f_float_lit_258((*(P820)rt_nil_check(F->st_254)).b) && f_float_lit_258((*(P820)rt_nil_check(F->st_254)).c));
}
F->result_ = g_ty_float_902;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)72LL)))) {
F->t_1257 = f_new_typ_174((((rt_int)4LL)));
(*(P826)rt_nil_check(F->t_1257)).lits = (*(P820)rt_nil_check(F->st_254)).a;
if (((*(P820)rt_nil_check(F->st_254)).b != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).b, F->t_1257, &F->dummy_1259); b_; }));
(*(P822)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).c, F->t_1257, &F->dummy_1259); b_; }));
if (((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_254)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_254)).c)).kind) == (((rt_int)4LL))))) {
(*(P822)rt_nil_check(F->c_255v)).mlo = f_lit_index_253((*(P826)rt_nil_check(F->t_1257)).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_254)).b)).name))->all));
(*(P822)rt_nil_check(F->c_255v)).mhi = f_lit_index_253((*(P826)rt_nil_check(F->t_1257)).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_254)).c)).name))->all));
(*(P822)rt_nil_check(F->c_255v)).hasm = 1;
}
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)73LL)))) {
F->t_1257 = f_resolve_subtype_256((*(P820)rt_nil_check(F->st_254)).a, &F->c_255v);
if (((*(P826)rt_nil_check(f_base_of_214(F->t_1257))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_212(F->t_1257, g_ty_ascii_903) && ((F->c_255v == NULL) || ((*(P822)rt_nil_check(F->c_255v)).lo == NULL)))) {
F->t_1257 = g_ty_string_904;
} else {
F->et_1261 = NULL;
F->et_1261 = F->t_1257;
F->t_1257 = f_new_typ_174((((rt_int)5LL)));
(*(P826)rt_nil_check(F->t_1257)).elem = F->et_1261;
(*(P826)rt_nil_check(F->t_1257)).elemcons = F->c_255v;
}
F->c_255v = f_new_cons_175();
if (((*(P820)rt_nil_check(F->st_254)).b != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).b, g_ty_int_900, &F->dummy_1259); b_; }));
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)74LL)))) {
{
F->ec_1262 = NULL;
F->et_1263 = NULL;
F->et_1263 = f_resolve_subtype_256((*(P820)rt_nil_check(F->st_254)).b, &F->ec_1262);
F->ix_1264 = NULL;
F->ix_1264 = (*(P820)rt_nil_check(F->st_254)).a;
F->k_1265 = RT_R_IUNDEF;
F->k_1265 = ((rt_int)0LL);
F->tail_1266 = NULL;
F->btail_1267 = NULL;
F->t_1257 = f_new_typ_174((((rt_int)6LL)));
(*(P826)rt_nil_check(F->t_1257)).elem = F->et_1263;
(*(P826)rt_nil_check(F->t_1257)).elemcons = F->ec_1262;
(*(P826)rt_nil_check(F->t_1257)).elemst = (*(P820)rt_nil_check(F->st_254)).b;
(*(P822)rt_nil_check(F->c_255v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P822)rt_nil_check(F->c_255v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1264 != NULL)) {
F->ic_1268 = NULL;
F->it_1269 = NULL;
F->it_1269 = f_resolve_subtype_256(F->ix_1264, &F->ic_1268);
F->lo_1270 = NULL;
F->hi_1271 = NULL;
F->tl_1272 = NULL;
if ((((*(P826)rt_nil_check(f_base_of_214(F->it_1269))).kind != (((rt_int)1LL))) && ((*(P826)rt_nil_check(f_base_of_214(F->it_1269))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1268 = f_base_cons_217(F->it_1269, F->ic_1268);
F->k_1265 = rt_add(rt_r_ichk(F->k_1265), ((rt_int)1LL));
{ R842 *cell1273 = rt_alloc(sizeof(R842));
(*cell1273).t = NULL;
(*cell1273).next = NULL;
F->tl_1272 = cell1273;
}
(*(P841)rt_nil_check(F->tl_1272)).t = F->it_1269;
if ((F->tail_1266 == NULL)) {
(*(P826)rt_nil_check(F->t_1257)).idxs = F->tl_1272;
} else {
(*(P841)rt_nil_check(F->tail_1266)).next = F->tl_1272;
}
F->tail_1266 = F->tl_1272;
if (((F->ic_1268 != NULL) && ((*(P822)rt_nil_check(F->ic_1268)).lo != NULL))) {
F->lo_1270 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1268); b_; }));
F->hi_1271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1268); b_; }));
} else if (((*(P826)rt_nil_check(f_base_of_214(F->it_1269))).kind == (((rt_int)4LL)))) {
F->lo_1270 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(f_base_of_214(F->it_1269))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1265) == ((rt_int)1LL))) {
(*(P826)rt_nil_check(F->t_1257)).idx = F->it_1269;
(*(P822)rt_nil_check(F->c_255v)).lo = F->lo_1270;
(*(P822)rt_nil_check(F->c_255v)).hi = F->hi_1271;
} else if ((rt_r_ichk(F->k_1265) == ((rt_int)2LL))) {
(*(P826)rt_nil_check(F->t_1257)).idx2 = F->it_1269;
(*(P822)rt_nil_check(F->c_255v)).lo2 = F->lo_1270;
(*(P822)rt_nil_check(F->c_255v)).hi2 = F->hi_1271;
} else if ((F->lo_1270 != NULL)) {
F->l1_1274 = NULL;
F->l2_1275 = NULL;
{ R825 *cell1276 = rt_alloc(sizeof(R825));
(*cell1276).s = NULL;
(*cell1276).next = NULL;
F->l1_1274 = cell1276;
}
{ R825 *cell1277 = rt_alloc(sizeof(R825));
(*cell1277).s = NULL;
(*cell1277).next = NULL;
F->l2_1275 = cell1277;
}
(*(P824)rt_nil_check(F->l1_1274)).s = F->lo_1270;
(*(P824)rt_nil_check(F->l2_1275)).s = F->hi_1271;
(*(P824)rt_nil_check(F->l1_1274)).next = F->l2_1275;
if ((F->btail_1267 == NULL)) {
(*(P822)rt_nil_check(F->c_255v)).bnds = F->l1_1274;
} else {
(*(P824)rt_nil_check(F->btail_1267)).next = F->l1_1274;
}
F->btail_1267 = F->l2_1275;
}
F->ix_1264 = (*(P820)rt_nil_check(F->ix_1264)).next;
}
(*(P826)rt_nil_check(F->t_1257)).ndim = rt_r_ichk(F->k_1265);
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)77LL)))) {
F->t_1257 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1278 = NULL;
(*(P826)rt_nil_check(F->t_1257)).elem = f_resolve_subtype_256((*(P820)rt_nil_check(F->st_254)).a, &F->ec_1278);
(*(P826)rt_nil_check(F->t_1257)).elemcons = F->ec_1278;
if ((((*(P826)rt_nil_check(f_base_of_214((*(P826)rt_nil_check(F->t_1257)).elem))).kind != (((rt_int)1LL))) && ((*(P826)rt_nil_check(f_base_of_214((*(P826)rt_nil_check(F->t_1257)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P826)rt_nil_check(f_base_of_214((*(P826)rt_nil_check(F->t_1257)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1278 == NULL) || ((*(P822)rt_nil_check(F->ec_1278)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)75LL))) || (sel1260 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->st_254)).kind) == (((rt_int)76LL)))) {
F->t_1257 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1257 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1279 = NULL;
F->comp_1279 = (*(P820)rt_nil_check(F->st_254)).a;
F->tail_1280 = NULL;
while ((F->comp_1279 != NULL)) {
F->cc_1281 = NULL;
F->f_1282 = NULL;
{ R829 *cell1283 = rt_alloc(sizeof(R829));
(*cell1283).name = NULL;
(*cell1283).t = NULL;
(*cell1283).c = NULL;
(*cell1283).st = NULL;
(*cell1283).next = NULL;
F->f_1282 = cell1283;
}
(*(P828)rt_nil_check(F->f_1282)).name = (*(P820)rt_nil_check(F->comp_1279)).name;
(*(P828)rt_nil_check(F->f_1282)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->comp_1279)).a, &F->cc_1281);
(*(P828)rt_nil_check(F->f_1282)).c = F->cc_1281;
(*(P828)rt_nil_check(F->f_1282)).st = (*(P820)rt_nil_check(F->comp_1279)).a;
if ((F->tail_1280 == NULL)) {
(*(P826)rt_nil_check(F->t_1257)).fields = F->f_1282;
} else {
(*(P828)rt_nil_check(F->tail_1280)).next = F->f_1282;
}
F->tail_1280 = F->f_1282;
F->comp_1279 = (*(P820)rt_nil_check(F->comp_1279)).next;
}
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1257)).kind) == (((rt_int)17LL)))) {
F->lits_1284 = NULL;
F->ltail_1285 = NULL;
F->f_1286 = NULL;
F->f_1286 = (*(P826)rt_nil_check(F->t_1257)).fields;
while ((F->f_1286 != NULL)) {
F->l_1287 = NULL;
F->l_1287 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line));
if (rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1286)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P820)rt_nil_check(F->l_1287)).name = (*(P828)rt_nil_check(F->f_1286)).name;
f_append_65(&F->lits_1284, &F->ltail_1285, F->l_1287);
F->f_1286 = (*(P828)rt_nil_check(F->f_1286)).next;
}
(*(P826)rt_nil_check(F->t_1257)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_1257)).elem)).lits = F->lits_1284;
if (((*(P820)rt_nil_check(F->st_254)).b != NULL)) {
f_tag_constraint_262(F->t_1257, (*(P820)rt_nil_check(F->st_254)).b, F->c_255v);
}
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_906;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P830)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1288 = NULL;
F->gt_1288 = f_copy_node_675((*(P820)rt_nil_check(F->st_254)).a);
(*(P820)rt_nil_check(F->gt_1288)).next = NULL;
F->result_ = f_instantiate_type_594(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1288, (*(P820)rt_nil_check(F->st_254)).b, &F->c_255v, rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line));
goto ret_;
}
{
F->ec_1289 = NULL;
F->t_1257 = f_new_typ_174((((rt_int)12LL)));
(*(P826)rt_nil_check(F->t_1257)).elem = f_resolve_subtype_256((*(P820)rt_nil_check(F->st_254)).a, &F->ec_1289);
(*(P826)rt_nil_check(F->t_1257)).elemcons = F->ec_1289;
if (((*(P820)rt_nil_check(F->st_254)).b != NULL)) {
(*(P822)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->st_254)).b, g_ty_int_900, &F->dummy_1259); b_; }));
}
}
F->result_ = F->t_1257;
goto ret_;
} else if (0 || (sel1260 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_265(F->st_254, &F->c_255v);
goto ret_;
} else if (0 || (sel1260 == (((rt_int)81LL)))) {
{
F->base_1290 = NULL;
F->result_ = f_value_subtype_278((*(P820)rt_nil_check(F->st_254)).a, &F->c_255v, &F->base_1290);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_258(P820 e_257) {
  struct f_float_lit_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_257 = e_257;
if (((rt_r_ichk((*(P820)rt_nil_check(F->e_257)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_257)).name))->all), rt_str("-", 1)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_257)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_258((*(P820)rt_nil_check(F->e_257)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P820)rt_nil_check(F->e_257)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->e_257)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_262(P826 t_259, P820 e_260, P822 c_261) {
  struct f_tag_constraint_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_259 = t_259;
F->e_260 = e_260;
F->c_261 = c_261;
F->dummy_1291 = NULL;
(*(P822)rt_nil_check(F->c_261)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->e_260, (*(P826)rt_nil_check(F->t_259)).elem, &F->dummy_1291); b_; }));
f_check_type_223(F->dummy_1291, (*(P826)rt_nil_check(F->t_259)).elem, rt_r_ichk((*(P820)rt_nil_check(F->e_260)).line));
(*(P822)rt_nil_check(F->c_261)).hi = (*(P822)rt_nil_check(F->c_261)).lo;
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_260)).kind) == (((rt_int)4LL)))) {
(*(P822)rt_nil_check(F->c_261)).mlo = f_lit_index_253((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_259)).elem)).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_260)).name))->all));
(*(P822)rt_nil_check(F->c_261)).mhi = rt_r_ichk((*(P822)rt_nil_check(F->c_261)).mlo);
(*(P822)rt_nil_check(F->c_261)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P826 f_named_subtype_265(P820 st_263, P822 *c_264) {
  struct f_named_subtype_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_263 = st_263;
F->c_264 = c_264;
F->c_264v = *F->c_264;
F->t_1292 = NULL;
F->y_1293 = NULL;
F->y_1293 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->st_263)).name))->all));
F->name_1294 = rt_str_copy((((P813)rt_nil_check((*(P820)rt_nil_check(F->st_263)).name))->all));
F->c_264v = f_new_cons_175();
if (((F->y_1293 == NULL) && ((rt_str_eq(F->name_1294, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1294, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1294, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_283(F->st_263, &F->c_264v);
goto ret_;
}
if ((F->y_1293 == NULL)) {
if (rt_str_eq(F->name_1294, rt_str("BOOL", 4))) {
F->t_1292 = g_ty_bool_901;
} else if (rt_str_eq(F->name_1294, rt_str("ASCII", 5))) {
F->t_1292 = g_ty_ascii_903;
} else if (rt_str_eq(F->name_1294, rt_str("DATA_LOCK", 9))) {
F->t_1292 = g_ty_lock_908;
} else if (rt_str_eq(F->name_1294, rt_str("LATCH", 5))) {
F->t_1292 = g_ty_latch_909;
} else if (rt_str_eq(F->name_1294, rt_str("ACT", 3))) {
F->t_1292 = g_ty_act_910;
} else if (rt_str_eq(F->name_1294, rt_str("INT", 3))) {
F->t_1292 = g_ty_int_900;
} else if (rt_str_eq(F->name_1294, rt_str("FLOAT", 5))) {
F->t_1292 = g_ty_float_902;
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1294); b_; }));
}
if (((*(P820)rt_nil_check(F->st_263)).b != NULL)) {
f_apply_constraint_274(F->t_1292, (*(P820)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P820)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1292;
goto ret_;
}
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_594(F->y_1293, (*(P820)rt_nil_check(F->st_263)).a, (*(P820)rt_nil_check(F->st_263)).b, &F->c_264v, rt_r_ichk((*(P820)rt_nil_check(F->st_263)).line));
goto ret_;
}
if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)5LL))) && ((*(P830)rt_nil_check(F->y_1293)).t != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_306(F->y_1293, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)5LL))) && ((*(P830)rt_nil_check(F->y_1293)).t != NULL)) && (rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).t)).kind) == (((rt_int)8LL))))) {
(*(P822)rt_nil_check(F->c_264v)).args = (*(P820)rt_nil_check(F->st_263)).b;
F->result_ = (*(P830)rt_nil_check(F->y_1293)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)6LL))) && ((*(P830)rt_nil_check(F->y_1293)).decl != NULL)) && ((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_269(F->y_1293, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)5LL)))) && ((*(P830)rt_nil_check(F->y_1293)).t != NULL))) {
if (((*(P830)rt_nil_check(F->y_1293)).c != NULL)) {
F->c_264v = (*(P830)rt_nil_check(F->y_1293)).c;
}
F->t_1292 = (*(P830)rt_nil_check(F->y_1293)).t;
} else if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)5LL))) && ((*(P830)rt_nil_check(F->y_1293)).decl != NULL)) && (rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1293)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_306(F->y_1293, F->st_263, &F->c_264v);
goto ret_;
} else if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1293)).kind) == (((rt_int)5LL))))) {
F->t_1292 = f_resolve_subtype_256((*(P830)rt_nil_check(F->y_1293)).st, &F->c_264v);
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1294, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P820)rt_nil_check(F->st_263)).b != NULL)) {
F->c_264v = f_copy_cons_197(F->c_264v);
f_apply_constraint_274(F->t_1292, (*(P820)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P820)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1292;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_264) = F->c_264v;
  RT_FPOP();
  return F->result_;
}

static P826 f_invoke_abbrev_269(P830 y_266, P820 st_267, P822 *c_268) {
  struct f_invoke_abbrev_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_266 = y_266;
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->p_1295 = NULL;
F->p_1295 = (*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_266)).decl)).b;
F->a_1296 = NULL;
F->a_1296 = (*(P820)rt_nil_check(F->st_267)).b;
F->t_1297 = NULL;
if ((f_list_len_67(F->p_1295) != f_list_len_67(F->a_1296))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_266)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1295))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1295 != NULL)) {
F->z_1298 = NULL;
F->z_1298 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_1295)).name);
F->pc_1299 = NULL;
F->at_1300 = NULL;
F->ok_1301 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P820)rt_nil_check(F->p_1295)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P830)rt_nil_check(F->z_1298)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1295)).a, &F->pc_1299);
(*(P830)rt_nil_check(F->z_1298)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_654(F->a_1296, (*(P830)rt_nil_check(F->z_1298)).t, &F->at_1300)), rt_str(")", 1)); b_; }));
f_check_type_223(F->at_1300, (*(P830)rt_nil_check(F->z_1298)).t, rt_r_ichk((*(P820)rt_nil_check(F->st_267)).line));
(*(P830)rt_nil_check(F->z_1298)).mvalue = f_manifest_333(F->a_1296, &F->ok_1301);
(*(P830)rt_nil_check(F->z_1298)).hasmv = rt_r_echk(F->ok_1301);
(*(P830)rt_nil_check(F->z_1298)).mv = f_meval_342(F->a_1296, &F->ok_1301);
if ((!rt_r_echk(F->ok_1301))) {
(*(P830)rt_nil_check(F->z_1298)).mv = NULL;
}
(*(P830)rt_nil_check(F->z_1298)).ro_flag = 1;
f_define_159(F->z_1298, rt_r_ichk((*(P820)rt_nil_check(F->st_267)).line));
F->p_1295 = (*(P820)rt_nil_check(F->p_1295)).next;
F->a_1296 = (*(P820)rt_nil_check(F->a_1296)).next;
}
F->t_1297 = f_resolve_subtype_256((*(P830)rt_nil_check(F->y_266)).st, &F->c_268v);
f_close_scope_169();
F->result_ = F->t_1297;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_274(P826 t_270, P820 args_271, P822 c_272, rt_int line_273) {
  struct f_apply_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_270 = t_270;
F->args_271 = args_271;
F->c_272 = c_272;
F->line_273 = line_273;
F->dummy_1302 = NULL;
F->ok_1303 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P820)rt_nil_check(F->args_271)).kind) != (((rt_int)16LL))) || ((*(P820)rt_nil_check(F->args_271)).next != NULL))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P822)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->args_271)).a, F->t_270, &F->dummy_1302); b_; }));
f_check_type_223(F->dummy_1302, F->t_270, F->line_273);
(*(P822)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check(F->args_271)).b, F->t_270, &F->dummy_1302); b_; }));
f_check_type_223(F->dummy_1302, F->t_270, F->line_273);
(*(P822)rt_nil_check(F->c_272)).hasm = 0;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL)))) {
(*(P822)rt_nil_check(F->c_272)).mlo = f_manifest_333((*(P820)rt_nil_check(F->args_271)).a, &F->ok_1303);
(*(P822)rt_nil_check(F->c_272)).hasm = rt_r_echk(F->ok_1303);
(*(P822)rt_nil_check(F->c_272)).mhi = f_manifest_333((*(P820)rt_nil_check(F->args_271)).b, &F->ok_1303);
(*(P822)rt_nil_check(F->c_272)).hasm = (rt_r_echk((*(P822)rt_nil_check(F->c_272)).hasm) && rt_r_echk(F->ok_1303));
} else if (((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).b)).kind) == (((rt_int)4LL))))) {
(*(P822)rt_nil_check(F->c_272)).mlo = f_lit_index_253((*(P826)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).a)).name))->all));
(*(P822)rt_nil_check(F->c_272)).mhi = f_lit_index_253((*(P826)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).b)).name))->all));
(*(P822)rt_nil_check(F->c_272)).hasm = 1;
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)3LL)))) {
(*(P822)rt_nil_check(F->c_272)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->args_271, g_ty_int_900, &F->dummy_1302); b_; }));
if (((*(P820)rt_nil_check(F->args_271)).next != NULL)) {
if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P822)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).next)).a, g_ty_float_902, &F->dummy_1302); b_; }));
(*(P822)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).next)).b, g_ty_float_902, &F->dummy_1302); b_; }));
(*(P822)rt_nil_check(F->c_272)).hasm = (f_float_lit_258((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).next)).a) && f_float_lit_258((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_271)).next)).b));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)5LL)))) {
(*(P822)rt_nil_check(F->c_272)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->args_271, g_ty_int_900, &F->dummy_1302); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)12LL)))) {
(*(P822)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->args_271, g_ty_int_900, &F->dummy_1302); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_270)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_262(F->t_270, F->args_271, F->c_272);
} else {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P826 f_value_subtype_278(P820 e_275, P822 *c_276, P813 *base_277) {
  struct f_value_subtype_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_275 = e_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->base_277 = base_277;
F->base_277v = *F->base_277;
F->t_1304 = NULL;
F->c0_1305 = NULL;
F->ro_1306 = RT_R_EUNDEF;
if (f_is_lvalue_617(F->e_275)) {
f_lvalue_623(F->e_275, &F->base_277v, &F->t_1304, &F->c0_1305, &F->ro_1306);
} else {
F->base_277v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->e_275, NULL, &F->t_1304); b_; }));
}
if ((F->c0_1305 == NULL)) {
F->c_276v = f_new_cons_175();
} else {
F->c_276v = f_copy_cons_197(F->c0_1305);
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1304)).kind) == (((rt_int)5LL)))) {
(*(P822)rt_nil_check(F->c_276v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->base_277v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1304)).kind) == (((rt_int)6LL)))) {
(*(P822)rt_nil_check(F->c_276v)).bnds = NULL;
{ rt_int lo1308 = ((rt_int)1LL), hi1309 = rt_r_ichk((*(P826)rt_nil_check(F->t_1304)).ndim);
for (rt_int it1310 = lo1308; it1310 <= hi1309; it1310++) {
F->k_1307 = it1310;
F->lo_1311 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_lo_233(F->k_1307)));
F->hi_1312 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_hi_235(F->k_1307)));
if ((F->k_1307 == ((rt_int)1LL))) {
(*(P822)rt_nil_check(F->c_276v)).lo = f_mk_3(&F->lo_1311);
(*(P822)rt_nil_check(F->c_276v)).hi = f_mk_3(&F->hi_1312);
} else if ((F->k_1307 == ((rt_int)2LL))) {
(*(P822)rt_nil_check(F->c_276v)).lo2 = f_mk_3(&F->lo_1311);
(*(P822)rt_nil_check(F->c_276v)).hi2 = f_mk_3(&F->hi_1312);
} else {
F->l1_1313 = NULL;
F->l2_1314 = NULL;
{ R825 *cell1315 = rt_alloc(sizeof(R825));
(*cell1315).s = NULL;
(*cell1315).next = NULL;
F->l1_1313 = cell1315;
}
{ R825 *cell1316 = rt_alloc(sizeof(R825));
(*cell1316).s = NULL;
(*cell1316).next = NULL;
F->l2_1314 = cell1316;
}
(*(P824)rt_nil_check(F->l1_1313)).s = f_mk_3(&F->lo_1311);
(*(P824)rt_nil_check(F->l2_1314)).s = f_mk_3(&F->hi_1312);
(*(P824)rt_nil_check(F->l1_1313)).next = F->l2_1314;
(*(P824)rt_nil_check(F->l2_1314)).next = (*(P822)rt_nil_check(F->c_276v)).bnds;
(*(P822)rt_nil_check(F->c_276v)).bnds = F->l1_1313;
}
}
}
(*(P822)rt_nil_check(F->c_276v)).bnds = f_reverse_pairs_280((*(P822)rt_nil_check(F->c_276v)).bnds);
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1304)).kind) == (((rt_int)12LL)))) {
(*(P822)rt_nil_check(F->c_276v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->base_277v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_1304)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_1304)).tparams != NULL))) {
F->p_1317 = NULL;
F->p_1317 = (*(P826)rt_nil_check(F->t_1304)).tparams;
F->head_1318 = NULL;
F->tail_1319 = NULL;
while ((F->p_1317 != NULL)) {
F->sel_1320 = NULL;
F->sel_1320 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_275)).line));
(*(P820)rt_nil_check(F->sel_1320)).a = F->e_275;
(*(P820)rt_nil_check(F->sel_1320)).name = (*(P820)rt_nil_check(F->p_1317)).name;
f_append_65(&F->head_1318, &F->tail_1319, F->sel_1320);
F->p_1317 = (*(P820)rt_nil_check(F->p_1317)).next;
}
(*(P822)rt_nil_check(F->c_276v)).args = F->head_1318;
}
F->result_ = F->t_1304;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;  (*F->base_277) = F->base_277v;
  RT_FPOP();
  return F->result_;
}

static P824 f_reverse_pairs_280(P824 l_279) {
  struct f_reverse_pairs_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_279 = l_279;
F->r_1321 = NULL;
F->p_1322 = NULL;
F->p_1322 = F->l_279;
while ((F->p_1322 != NULL)) {
F->a_1323 = NULL;
F->a_1323 = F->p_1322;
F->b_1324 = NULL;
F->b_1324 = (*(P824)rt_nil_check(F->p_1322)).next;
F->p_1322 = (*(P824)rt_nil_check(F->b_1324)).next;
(*(P824)rt_nil_check(F->b_1324)).next = F->r_1321;
F->r_1321 = F->a_1323;
}
F->result_ = F->r_1321;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_inquiry_283(P820 st_281, P822 *c_282) {
  struct f_inquiry_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_281 = st_281;
F->c_282 = c_282;
F->c_282v = *F->c_282;
F->base_1325 = NULL;
F->t_1326 = NULL;
F->name_1327 = rt_str_copy((((P813)rt_nil_check((*(P820)rt_nil_check(F->st_281)).name))->all));
if (((*(P820)rt_nil_check(F->st_281)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1327, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1327, rt_str("TYPEOF", 6))) {
F->sub_1328 = NULL;
F->sub_1328 = f_as_subtype_285((*(P820)rt_nil_check(F->st_281)).b);
F->c2_1329 = NULL;
if ((F->sub_1328 != NULL)) {
F->t_1326 = f_resolve_subtype_256(F->sub_1328, &F->c2_1329);
} else {
F->t_1326 = f_value_subtype_278((*(P820)rt_nil_check(F->st_281)).b, &F->c2_1329, &F->base_1325);
}
F->c_282v = f_new_cons_175();
F->result_ = F->t_1326;
goto ret_;
}
F->t_1326 = f_value_subtype_278((*(P820)rt_nil_check(F->st_281)).b, &F->c_282v, &F->base_1325);
if (rt_str_eq(F->name_1327, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1326;
goto ret_;
}
{
F->k_1330 = RT_R_IUNDEF;
F->k_1330 = ((rt_int)1LL);
F->ok_1331 = RT_R_EUNDEF;
F->ok_1331 = 1;
F->ac_1332 = NULL;
F->ac_1332 = F->c_282v;
if (((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_281)).b)).next != NULL)) {
F->k_1330 = f_manifest_333((*(P820)rt_nil_check((*(P820)rt_nil_check(F->st_281)).b)).next, &F->ok_1331);
}
while (((rt_r_ichk((*(P826)rt_nil_check(F->t_1326)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_1326)).tparams == NULL))) {
F->t_1326 = (*(P826)rt_nil_check(F->t_1326)).under;
}
if (((((rt_r_ichk((*(P826)rt_nil_check(F->t_1326)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1331))) || (rt_r_ichk(F->k_1330) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1330) > rt_r_ichk((*(P826)rt_nil_check(F->t_1326)).ndim)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_282v = f_new_cons_175();
(*(P822)rt_nil_check(F->c_282v)).lo = f_cons_lo_243(F->ac_1332, rt_r_ichk(F->k_1330));
(*(P822)rt_nil_check(F->c_282v)).hi = f_cons_hi_246(F->ac_1332, rt_r_ichk(F->k_1330));
F->result_ = f_idx_type_249(F->t_1326, rt_r_ichk(F->k_1330));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_282) = F->c_282v;
  RT_FPOP();
  return F->result_;
}

static P820 f_as_subtype_285(P820 e_284) {
  struct f_as_subtype_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->st_1333 = NULL;
if ((F->e_284 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_284)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_285((*(P820)rt_nil_check(F->e_284)).a);
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_284)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_292(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_284)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1333 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
(*(P820)rt_nil_check(F->st_1333)).name = (*(P820)rt_nil_check(F->e_284)).name;
F->result_ = F->st_1333;
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->e_284)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).name, (*(P820)rt_nil_check(F->e_284)).b, NULL, rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_284)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).a)).name, (*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).b, (*(P820)rt_nil_check(F->e_284)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1334 = rt_str_copy((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).name))->all));
F->y_1335 = NULL;
F->y_1335 = f_lookup_154(&F->name_1334);
if ((rt_str_eq(F->name_1334, rt_str("INT", 3)) && (F->y_1335 == NULL))) {
if (((((*(P820)rt_nil_check(F->e_284)).b == NULL) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).kind) != (((rt_int)16LL)))) || ((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1333 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
(*(P820)rt_nil_check(F->st_1333)).a = (*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).a;
(*(P820)rt_nil_check(F->st_1333)).b = (*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).b;
F->result_ = F->st_1333;
goto ret_;
} else if ((rt_str_eq(F->name_1334, rt_str("FLOAT", 5)) && (F->y_1335 == NULL))) {
F->st_1333 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
(*(P820)rt_nil_check(F->st_1333)).a = (*(P820)rt_nil_check(F->e_284)).b;
if ((((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).next != NULL) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P820)rt_nil_check(F->st_1333)).b = (*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).next)).a;
(*(P820)rt_nil_check(F->st_1333)).c = (*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).b)).next)).b;
}
F->result_ = F->st_1333;
goto ret_;
} else if (((!f_type_name_292(&F->name_1334)) && (!((F->y_1335 == NULL) && ((rt_str_eq(F->name_1334, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1334, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1334, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1333 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_284)).line));
(*(P820)rt_nil_check(F->st_1333)).name = (*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_284)).a)).name;
(*(P820)rt_nil_check(F->st_1333)).b = (*(P820)rt_nil_check(F->e_284)).b;
(*(P820)rt_nil_check(F->st_1333)).flag = ((rt_int)1LL);
F->result_ = F->st_1333;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_tt_subtype_290(P813 name_286, P820 tt_287, P820 args_288, rt_int line_289) {
  struct f_tt_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->tt_287 = tt_287;
F->args_288 = args_288;
F->line_289 = line_289;
F->st_1336 = NULL;
if (rt_str_eq((((P813)rt_nil_check(F->name_286))->all), rt_str("STRING", 6))) {
F->st_1336 = f_nn_61((((rt_int)73LL)), F->line_289);
} else if (rt_str_eq((((P813)rt_nil_check(F->name_286))->all), rt_str("SET", 3))) {
F->st_1336 = f_nn_61((((rt_int)77LL)), F->line_289);
} else if ((rt_str_eq((((P813)rt_nil_check(F->name_286))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P830)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1336 = f_nn_61((((rt_int)78LL)), F->line_289);
} else if (rt_str_eq((((P813)rt_nil_check(F->name_286))->all), rt_str("FILE", 4))) {
F->st_1336 = f_nn_61((((rt_int)79LL)), F->line_289);
} else if (f_type_name_292(&(((P813)rt_nil_check(F->name_286))->all))) {
F->st_1336 = f_nn_61((((rt_int)80LL)), F->line_289);
(*(P820)rt_nil_check(F->st_1336)).name = F->name_286;
(*(P820)rt_nil_check(F->st_1336)).a = F->tt_287;
(*(P820)rt_nil_check(F->st_1336)).b = F->args_288;
F->result_ = F->st_1336;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P820)rt_nil_check(F->st_1336)).a = F->tt_287;
(*(P820)rt_nil_check(F->st_1336)).b = F->args_288;
F->result_ = F->st_1336;
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
F->y_1337 = NULL;
F->y_1337 = f_lookup_154(&(*F->name_291));
if ((F->y_1337 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_291), rt_str("INT", 3)) || rt_str_eq((*F->name_291), rt_str("BOOL", 4))) || rt_str_eq((*F->name_291), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_291), rt_str("ASCII", 5))) || rt_str_eq((*F->name_291), rt_str("ACT", 3))) || rt_str_eq((*F->name_291), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_291), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P830)rt_nil_check(F->y_1337)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1337)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P830)rt_nil_check(F->y_1337)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1337)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1337)).decl)).b)).kind) == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_294(P826 t_293) {
  struct f_empty_set_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_293 = t_293;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_189(f_base_of_214((*(P826)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P826)rt_nil_check(F->t_293)).elem, (*(P826)rt_nil_check(F->t_293)).elemcons))), rt_str(", ", 2)), f_sub_hi_192(f_base_of_214((*(P826)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P826)rt_nil_check(F->t_293)).elem, (*(P826)rt_nil_check(F->t_293)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_296(P826 t_295) {
  struct f_opened_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1338 = NULL;
F->c_1338 = g_caps_875;
if ((((rt_r_ichk((*(P826)rt_nil_check(F->t_295)).kind) != (((rt_int)15LL))) || ((*(P826)rt_nil_check(F->t_295)).ocap == NULL)) || (rt_r_ichk((*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_295)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1338 != NULL)) {
if (((*(P847)rt_nil_check(F->c_1338)).d == (*(P826)rt_nil_check(F->t_295)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1338 = (*(P847)rt_nil_check(F->c_1338)).next;
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
F->i_1339 = RT_R_IUNDEF;
F->i_1339 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_298)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_297)).len)) < ((rt_int)(((*F->pat_298)).len))))) {
F->result_ = (*F->s_297);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1339), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_297)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_297), rt_r_ichk(F->i_1339), rt_sub(rt_add(rt_r_ichk(F->i_1339), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL))), (*F->pat_298))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_297), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1339), ((rt_int)1LL))), (*F->r_299)), f_replace_all_300(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_297), rt_add(rt_r_ichk(F->i_1339), ((rt_int)(((*F->pat_298)).len))), ((rt_int)(((*F->s_297)).len))); b_; }), &(*F->pat_298), &(*F->r_299)));
goto ret_;
}
F->i_1339 = rt_add(rt_r_ichk(F->i_1339), ((rt_int)1LL));
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
F->l_1340 = NULL;
F->l_1340 = g_psub_877;
F->r_1341 = NULL;
F->r_1341 = f_mk_3(&(*F->s_301));
while ((F->l_1340 != NULL)) {
F->r_1341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_300(&(((P813)rt_nil_check(F->r_1341))->all), &(((P813)rt_nil_check((*(P824)rt_nil_check(F->l_1340)).s))->all), &(((P813)rt_nil_check((*(P824)rt_nil_check((*(P824)rt_nil_check(F->l_1340)).next)).s))->all)); b_; }));
F->l_1340 = (*(P824)rt_nil_check((*(P824)rt_nil_check(F->l_1340)).next)).next;
}
F->result_ = (((P813)rt_nil_check(F->r_1341))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_new_type_306(P830 y_303, P820 st_304, P822 *c_305) {
  struct f_new_type_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_303 = y_303;
F->st_304 = st_304;
F->c_305 = c_305;
F->c_305v = *F->c_305;
F->d_1342 = NULL;
F->d_1342 = (*(P830)rt_nil_check(F->y_303)).decl;
F->p_1343 = NULL;
F->uc_1344 = NULL;
F->c_305v = f_new_cons_175();
if (((*(P830)rt_nil_check(F->y_303)).t == NULL)) {
(*(P830)rt_nil_check(F->y_303)).t = f_new_typ_174((((rt_int)15LL)));
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).name = (*(P830)rt_nil_check(F->y_303)).name;
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).decl = F->d_1342;
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).tparams = (*(P820)rt_nil_check(F->d_1342)).b;
if ((g_caps_875 != NULL)) {
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).ocap = (*(P847)rt_nil_check(g_caps_875)).d;
}
f_open_scope_168();
F->p_1343 = (*(P820)rt_nil_check(F->d_1342)).b;
while ((F->p_1343 != NULL)) {
F->z_1345 = NULL;
F->z_1345 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_1343)).name);
F->zc_1346 = NULL;
(*(P830)rt_nil_check(F->z_1345)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1343)).a, &F->zc_1346);
(*(P830)rt_nil_check(F->z_1345)).mnext = (*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).tpsyms;
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).tpsyms = F->z_1345;
(*(P830)rt_nil_check(F->z_1345)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1343)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1345, rt_r_ichk((*(P820)rt_nil_check(F->d_1342)).line));
F->p_1343 = (*(P820)rt_nil_check(F->p_1343)).next;
}
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).under = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_1342)).a, &F->uc_1344);
(*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_303)).t)).elemcons = F->uc_1344;
f_close_scope_169();
}
(*(P822)rt_nil_check(F->c_305v)).args = (*(P820)rt_nil_check(F->st_304)).b;
F->result_ = (*(P830)rt_nil_check(F->y_303)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_305) = F->c_305v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_310(rstr *lval_307, P826 t_308, P822 c_309) {
  struct f_init_storage_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_307 = lval_307;
F->t_308 = t_308;
F->c_309 = c_309;
f_make_storage_325(&(*F->lval_307), F->t_308, F->c_309);
if (((*(P826)rt_nil_check(F->t_308)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P826)rt_nil_check(F->t_308)).initp, &(*F->lval_307)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_313(P830 y_311, rstr *lval_312) {
  struct f_init_call_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->lval_312 = lval_312;
F->link_1347 = NULL;
F->link_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_311)).level) > ((rt_int)0LL))) {
F->link_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1349 = ((rt_int)1LL), hi1350 = rt_sub(rt_r_ichk(g_cur_level_873), rt_r_ichk((*(P830)rt_nil_check(F->y_311)).level));
for (rt_int it1351 = lo1349; it1351 <= hi1350; it1351++) {
F->i_1348 = it1351;
F->link_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->link_1347))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->link_1347))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_311)).cname))->all), rt_str("(", 1)), (((P813)rt_nil_check(F->link_1347))->all)), rt_str("&", 1)), (*F->lval_312)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_315(P826 t_314) {
  struct f_needs_fin_315fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_314 = t_314;
if ((F->t_314 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P826)rt_nil_check(F->t_314)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_314)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_315((*(P826)rt_nil_check(F->t_314)).under);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_314)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_315((*(P826)rt_nil_check(F->t_314)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_314)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_314)).kind) == (((rt_int)17LL))))) {
F->f_1352 = NULL;
F->f_1352 = (*(P826)rt_nil_check(F->t_314)).fields;
while ((F->f_1352 != NULL)) {
if (f_needs_fin_315((*(P828)rt_nil_check(F->f_1352)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1352 = (*(P828)rt_nil_check(F->f_1352)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_318(rstr *lval_316, P826 t_317) {
  struct f_fin_code_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_316 = lval_316;
F->t_317 = t_317;
F->r_1353 = NULL;
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P826)rt_nil_check(F->t_317)).finalp != NULL)) {
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_313((*(P826)rt_nil_check(F->t_317)).finalp, &(*F->lval_316)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_317)).tparams == NULL))) {
F->result_ = rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), f_fin_code_318(&(*F->lval_316), (*(P826)rt_nil_check(F->t_317)).under));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_316), rt_str(".all", 4)); b_; }), (*(P826)rt_nil_check(F->t_317)).under));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_317)).kind) == (((rt_int)6LL))) && f_needs_fin_315((*(P826)rt_nil_check(F->t_317)).elem))) {
F->i_1354 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), rt_str("for (rt_int ", 12)), F->i_1354), rt_str(" = 0; ", 6)), F->i_1354), rt_str(" < ", 3)), f_acnt_240(F->t_317, &(*F->lval_316))), rt_str("; ", 2)), F->i_1354), rt_str("++) { ", 6)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".p[", 3)), F->i_1354), rt_str("]", 1)); b_; }), (*(P826)rt_nil_check(F->t_317)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_317)).kind) == (((rt_int)7LL)))) {
F->f_1355 = NULL;
F->f_1355 = (*(P826)rt_nil_check(F->t_317)).fields;
while ((F->f_1355 != NULL)) {
if (f_needs_fin_315((*(P828)rt_nil_check(F->f_1355)).t)) {
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1355)).name))->all))); b_; }), (*(P828)rt_nil_check(F->f_1355)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1355 = (*(P828)rt_nil_check(F->f_1355)).next;
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_317)).kind) == (((rt_int)17LL)))) {
F->f_1356 = NULL;
F->f_1356 = (*(P826)rt_nil_check(F->t_317)).fields;
F->i_1357 = RT_R_IUNDEF;
F->i_1357 = ((rt_int)0LL);
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), rt_str("switch (", 8)), (*F->lval_316)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1356 != NULL)) {
if (f_needs_fin_315((*(P828)rt_nil_check(F->f_1356)).t)) {
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1357))), rt_str(": ", 2)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".u.", 3)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1356)).name))->all))); b_; }), (*(P828)rt_nil_check(F->f_1356)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1357 = rt_add(rt_r_ichk(F->i_1357), ((rt_int)1LL));
F->f_1356 = (*(P828)rt_nil_check(F->f_1356)).next;
}
F->r_1353 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_1353))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P813)rt_nil_check(F->r_1353))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_tparam_type_321(P826 t_319, rstr *name_320) {
  struct f_tparam_type_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->name_320 = name_320;
F->z_1358 = NULL;
F->z_1358 = (*(P826)rt_nil_check(F->t_319)).tpsyms;
while ((F->z_1358 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->z_1358)).name))->all), (*F->name_320))) {
F->result_ = (*(P830)rt_nil_check(F->z_1358)).t;
goto ret_;
}
F->z_1358 = (*(P830)rt_nil_check(F->z_1358)).mnext;
}
F->result_ = g_ty_int_900;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_325(rstr *lval_322, P826 t_323, P822 c_324) {
  struct f_make_storage_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_322 = lval_322;
F->t_323 = t_323;
F->c_324 = c_324;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)15LL)))) {
F->p_1359 = NULL;
F->p_1359 = (*(P826)rt_nil_check(F->t_323)).tparams;
F->a_1360 = NULL;
F->a_1360 = (*(P822)rt_nil_check(F->c_324)).args;
F->uc_1361 = NULL;
F->ut_1362 = NULL;
F->at_1363 = NULL;
if ((f_list_len_67(F->a_1360) != f_list_len_67(F->p_1359))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_323)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1359))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1359 != NULL)) {
F->pt_1364 = f_tparam_type_321(F->t_323, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1359)).name))->all));
F->v_1365 = rt_str_copy(f_gexpr_654(F->a_1360, F->pt_1364, &F->at_1363));
f_check_type_223(F->at_1363, F->pt_1364, rt_r_ichk((*(P820)rt_nil_check(F->a_1360)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1359)).name))->all))), rt_str(" = ", 3)), F->v_1365), rt_str(";", 1)); b_; }));
F->p_1359 = (*(P820)rt_nil_check(F->p_1359)).next;
F->a_1360 = (*(P820)rt_nil_check(F->a_1360)).next;
}
{
F->saved_1366 = NULL;
F->saved_1366 = g_psub_877;
F->p_1359 = (*(P826)rt_nil_check(F->t_323)).tparams;
while ((F->p_1359 != NULL)) {
F->l1_1367 = NULL;
F->l2_1368 = NULL;
{ R825 *cell1369 = rt_alloc(sizeof(R825));
(*cell1369).s = NULL;
(*cell1369).next = NULL;
F->l1_1367 = cell1369;
}
{ R825 *cell1370 = rt_alloc(sizeof(R825));
(*cell1370).s = NULL;
(*cell1370).next = NULL;
F->l2_1368 = cell1370;
}
(*(P824)rt_nil_check(F->l1_1367)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1359)).name))->all))), rt_str("@", 1)); b_; }));
(*(P824)rt_nil_check(F->l2_1368)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1359)).name))->all))); b_; }));
(*(P824)rt_nil_check(F->l1_1367)).next = F->l2_1368;
(*(P824)rt_nil_check(F->l2_1368)).next = g_psub_877;
g_psub_877 = F->l1_1367;
F->p_1359 = (*(P820)rt_nil_check(F->p_1359)).next;
}
if (((*(P826)rt_nil_check(F->t_323)).tparams == NULL)) {
f_init_storage_310(&(*F->lval_322), (*(P826)rt_nil_check(F->t_323)).under, (*(P826)rt_nil_check(F->t_323)).elemcons);
} else {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".all", 4)); b_; }), (*(P826)rt_nil_check(F->t_323)).under, (*(P826)rt_nil_check(F->t_323)).elemcons);
}
g_psub_877 = F->saved_1366;
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)12LL)))) {
if (((*(P822)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_322)), rt_str(", ", 2)), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_324)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_225((*(P826)rt_nil_check(F->t_323)).elem)), rt_str("), ", 3)), f_mcopy_354((*(P826)rt_nil_check(F->t_323)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_322)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_empty_set_294(F->t_323)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)5LL)))) {
if (((*(P822)rt_nil_check(F->c_324)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = rt_str_new(", 14)), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_324)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)6LL)))) {
if (((*(P822)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1372 = ((rt_int)1LL), hi1373 = rt_r_ichk((*(P826)rt_nil_check(F->t_323)).ndim);
for (rt_int it1374 = lo1372; it1374 <= hi1373; it1374++) {
F->k_1371 = it1374;
if ((f_cons_lo_243(F->c_324, F->k_1371) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_dim_lo_233(F->k_1371)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P813)rt_nil_check(f_cons_lo_243(F->c_324, F->k_1371)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_322)), rt_str(".", 1)), f_dim_hi_235(F->k_1371)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P813)rt_nil_check(f_cons_hi_246(F->c_324, F->k_1371)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".lo2 = ", 7)), (*F->lval_322)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P826)rt_nil_check(F->t_323)).elem)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_892) && (!rt_str_eq(f_uninit_value_327((*(P826)rt_nil_check(F->t_323)).elem), rt_str("", 0)))))) {
F->i_1375 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1375), rt_str(" = 0; ", 6)), F->i_1375), rt_str(" < ", 3)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str("; ", 2)), F->i_1375), rt_str("++) {", 5)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p[", 3)), F->i_1375), rt_str("]", 1)); b_; }), (*(P826)rt_nil_check(F->t_323)).elem, (*(P826)rt_nil_check(F->t_323)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)7LL)))) {
F->f_1376 = NULL;
F->f_1376 = (*(P826)rt_nil_check(F->t_323)).fields;
while ((F->f_1376 != NULL)) {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1376)).name))->all))); b_; }), (*(P828)rt_nil_check(F->f_1376)).t, (*(P828)rt_nil_check(F->f_1376)).c);
F->f_1376 = (*(P828)rt_nil_check(F->f_1376)).next;
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_323)).kind) == (((rt_int)17LL)))) {
if (((F->c_324 != NULL) && rt_r_echk((*(P822)rt_nil_check(F->c_324)).hasm))) {
F->f_1377 = NULL;
F->f_1377 = (*(P826)rt_nil_check(F->t_323)).fields;
{ rt_int lo1379 = ((rt_int)1LL), hi1380 = rt_r_ichk((*(P822)rt_nil_check(F->c_324)).mlo);
for (rt_int it1381 = lo1379; it1381 <= hi1380; it1381++) {
F->i_1378 = it1381;
F->f_1377 = (*(P828)rt_nil_check(F->f_1377)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P822)rt_nil_check(F->c_324)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".u.", 3)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1377)).name))->all))); b_; }), (*(P828)rt_nil_check(F->f_1377)).t, (*(P828)rt_nil_check(F->f_1377)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_892) && (!rt_str_eq(f_uninit_value_327(F->t_323), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_uninit_value_327(F->t_323)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_327(P826 t_326) {
  struct f_uninit_value_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_326 = t_326;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_326)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_326)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_326)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_326)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_330(P826 t_328, rstr *v_329) {
  struct f_init_chk_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_328 = t_328;
F->v_329 = v_329;
F->b_1382 = NULL;
F->b_1382 = f_base_of_214(F->t_328);
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_329);
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->b_1382)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->b_1382)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->b_1382)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->b_1382)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_333(P820 e_331, int *ok_332) {
  struct f_manifest_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_331 = e_331;
F->ok_332 = ok_332;
F->ok_332v = *F->ok_332;
F->v_1383 = NULL;
F->v_1383 = f_meval_342(F->e_331, &F->ok_332v);
if ((rt_r_echk(F->ok_332v) && (rt_r_ichk((*(P839)rt_nil_check(F->v_1383)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P839)rt_nil_check(F->v_1383)).i);
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

static P839 f_mk_mval_336(rt_int kind_334, rt_int i_335) {
  struct f_mk_mval_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_334 = kind_334;
F->i_335 = i_335;
F->v_1384 = NULL;
{ R840 *cell1385 = rt_alloc(sizeof(R840));
(*cell1385).s = NULL;
(*cell1385).t = NULL;
F->v_1384 = cell1385;
}
(*(P839)rt_nil_check(F->v_1384)).kind = F->kind_334;
(*(P839)rt_nil_check(F->v_1384)).i = F->i_335;
F->result_ = F->v_1384;
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
F->r_1386 = RT_R_IUNDEF;
F->r_1386 = ((rt_int)1LL);
{ rt_int lo1388 = ((rt_int)1LL), hi1389 = F->b_338;
for (rt_int it1390 = lo1388; it1390 <= hi1389; it1390++) {
F->i_1387 = it1390;
F->r_1386 = rt_mul(rt_r_ichk(F->r_1386), F->a_337);
}
}
F->result_ = rt_r_ichk(F->r_1386);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P839 f_meval_342(P820 e_340, int *ok_341) {
  struct f_meval_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_340 = e_340;
F->ok_341 = ok_341;
F->ok_341v = *F->ok_341;
F->a_1391 = NULL;
F->b_1392 = NULL;
F->ok2_1393 = RT_R_EUNDEF;
F->op_1394 = NULL;
F->ok_341v = 0;
if ((F->e_340 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)1LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)5LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)2LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)3LL)))) {
F->ok_341v = 1;
F->a_1391 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
(*(P839)rt_nil_check(F->a_1391)).s = (*(P820)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1391;
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_253((*(P826)rt_nil_check(g_ty_ascii_903)).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all)) >= ((rt_int)0LL))) {
F->ok_341v = 1;
F->a_1391 = f_mk_mval_336((((rt_int)4LL)), f_lit_index_253((*(P826)rt_nil_check(g_ty_ascii_903)).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all)));
(*(P839)rt_nil_check(F->a_1391)).t = g_ty_ascii_903;
(*(P839)rt_nil_check(F->a_1391)).s = (*(P820)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1391;
goto ret_;
}
F->a_1391 = f_mk_mval_336((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P839)rt_nil_check(F->a_1391)).s = (*(P820)rt_nil_check(F->e_340)).name;
F->ok_341v = 1;
F->result_ = F->a_1391;
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_342((*(P820)rt_nil_check(F->e_340)).a, &F->ok_341v);
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)7LL)))) {
F->y_1395 = NULL;
F->y_1395 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all));
if ((((F->y_1395 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1395)).kind) == (((rt_int)2LL)))) && ((*(P830)rt_nil_check(F->y_1395)).mv != NULL))) {
F->ok_341v = 1;
F->result_ = (*(P830)rt_nil_check(F->y_1395)).mv;
goto ret_;
} else if ((((F->y_1395 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1395)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P830)rt_nil_check(F->y_1395)).hasmv))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P830)rt_nil_check(F->y_1395)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) == (((rt_int)8LL)))) {
F->a_1391 = f_meval_342((*(P820)rt_nil_check(F->e_340)).a, &F->ok_341v);
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i)));
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i)));
goto ret_;
} else if (((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all), rt_str("+", 1)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1391;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->e_340)).kind) != (((rt_int)9LL))) || f_user_defined_352(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_340)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1394 = (*(P820)rt_nil_check(F->e_340)).name;
F->a_1391 = f_meval_342((*(P820)rt_nil_check(F->e_340)).a, &F->ok_341v);
F->b_1392 = f_meval_342((*(P820)rt_nil_check(F->e_340)).b, &F->ok2_1393);
F->ok_341v = (rt_r_echk(F->ok_341v) && rt_r_echk(F->ok2_1393));
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_341v = 0;
if (((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)1LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_add(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_div(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("**", 2)) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), f_ipow_339(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) == rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) != rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) < rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) <= rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) > rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) >= rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("+", 1)) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("-", 1))) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("*", 1))) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("/", 1))))) {
F->ok_341v = 1;
F->result_ = F->a_1391;
goto ret_;
} else if ((((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("**", 2)))) {
F->ok_341v = 1;
F->result_ = F->a_1391;
goto ret_;
} else if (((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)2LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_add(rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i), rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("XOR", 3)) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) != rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).i) == rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1)) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P813)rt_nil_check((*(P839)rt_nil_check(F->a_1391)).s))->all), (((P813)rt_nil_check((*(P839)rt_nil_check(F->b_1392)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P813)rt_nil_check((*(P839)rt_nil_check(F->a_1391)).s))->all), (((P813)rt_nil_check((*(P839)rt_nil_check(F->b_1392)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1)) || rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P813)rt_nil_check((*(P839)rt_nil_check(F->a_1391)).s))->all), (((P813)rt_nil_check((*(P839)rt_nil_check(F->b_1392)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P813)rt_nil_check((*(P839)rt_nil_check(F->a_1391)).s))->all), (((P813)rt_nil_check((*(P839)rt_nil_check(F->b_1392)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P813)rt_nil_check(F->op_1394))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P839)rt_nil_check(F->a_1391)).kind) == (((rt_int)5LL))) || ((*(P839)rt_nil_check(F->a_1391)).t == g_ty_ascii_903))) && ((rt_r_ichk((*(P839)rt_nil_check(F->b_1392)).kind) == (((rt_int)5LL))) || ((*(P839)rt_nil_check(F->b_1392)).t == g_ty_ascii_903)))) {
F->r_1396 = NULL;
F->r_1396 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
F->ok_341v = 1;
(*(P839)rt_nil_check(F->r_1396)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_348(F->a_1391), f_mstr_348(F->b_1392)); b_; }));
F->result_ = F->r_1396;
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

static rstr f_mstr_348(P839 v_347) {
  struct f_mstr_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_347 = v_347;
if ((rt_r_ichk((*(P839)rt_nil_check(F->v_347)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P813)rt_nil_check((*(P839)rt_nil_check(F->v_347)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_350(rt_r_ichk((*(P839)rt_nil_check(F->v_347)).i)));
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
F->printable_1397 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_349 >= ((rt_int)32LL)) && (F->i_349 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1397, rt_sub(F->i_349, ((rt_int)31LL))));
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
F->y_1398 = NULL;
F->y_1398 = f_lookup_154(&(*F->op_351));
F->result_ = ((F->y_1398 != NULL) && ((rt_r_ichk((*(P830)rt_nil_check(F->y_1398)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1398)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_354(P826 t_353) {
  struct f_mcopy_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
F->ct_1399 = rt_str_copy(f_ctype_225(F->t_353));
F->name_1400 = rt_str_new(rt_add(((rt_int)((F->ct_1399).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1400, rt_str_cat(rt_str("mc_", 3), F->ct_1399));
F->l_1401 = NULL;
if ((!f_seen_name_375(g_mcopies_899, &F->name_1400))) {
{ R825 *cell1402 = rt_alloc(sizeof(R825));
(*cell1402).s = NULL;
(*cell1402).next = NULL;
F->l_1401 = cell1402;
}
(*(P824)rt_nil_check(F->l_1401)).s = f_mk_3(&F->name_1400);
(*(P824)rt_nil_check(F->l_1401)).next = g_mcopies_899;
g_mcopies_899 = F->l_1401;
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1400), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1400), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1399), rt_str(" *)d = ", 7)), f_copy_code_364(F->t_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1399), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1400;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_356(P826 t_355) {
  struct f_composite_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->result_ = ((((rt_r_ichk((*(P826)rt_nil_check(F->t_355)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_355)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_355)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P826)rt_nil_check(F->t_355)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_355)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_361(rstr *lval_357, P826 t_358, rstr *v_359, P822 c_360) {
  struct f_assign_code_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_357 = lval_357;
F->t_358 = t_358;
F->v_359 = v_359;
F->c_360 = c_360;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_358)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_358)).tparams == NULL))) {
F->result_ = f_assign_code_361(&(*F->lval_357), (*(P826)rt_nil_check(F->t_358)).under, &(*F->v_359), F->c_360);
goto ret_;
}
if ((((rt_r_ichk((*(P826)rt_nil_check(F->t_358)).kind) == (((rt_int)17LL))) && (F->c_360 != NULL)) && ((*(P822)rt_nil_check(F->c_360)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_358)), rt_str(" u_ = ", 6)), (*F->v_359)), rt_str("; if (u_.tag != (", 17)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_360)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_356(F->t_358)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_358)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_358)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_358)).kind) == (((rt_int)7LL))))) {
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

static rstr f_copy_code_364(P826 t_362, rstr *v_363) {
  struct f_copy_code_364fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
F->v_363 = v_363;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_362)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_copy_code_364((*(P826)rt_nil_check(F->t_362)).under, &(*F->v_363));
goto ret_;
}
if (f_composite_356(F->t_362)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_362)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_363)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_362)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_362)).kind) == (((rt_int)7LL))))) {
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

static rstr f_eq_code_368(P826 t_365, rstr *a_366, rstr *b_367) {
  struct f_eq_code_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_365 = t_365;
F->a_366 = a_366;
F->b_367 = b_367;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_365)).tparams == NULL))) {
F->result_ = f_eq_code_368((*(P826)rt_nil_check(F->t_365)).under, &(*F->a_366), &(*F->b_367));
goto ret_;
}
if (f_composite_356(F->t_365)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_365)).kind) == (((rt_int)7LL))))) {
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

static rstr f_elem_assign_372(rstr *lval_369, P826 t_370, rstr *v_371) {
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

static int f_seen_name_375(P824 l_373, rstr *s_374) {
  struct f_seen_name_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_373 = l_373;
F->s_374 = s_374;
F->p_1403 = NULL;
F->p_1403 = F->l_373;
while ((F->p_1403 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P824)rt_nil_check(F->p_1403)).s))->all), (*F->s_374))) {
F->result_ = 1;
goto ret_;
}
F->p_1403 = (*(P824)rt_nil_check(F->p_1403)).next;
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
F->order_1404 = NULL;
F->t_1405 = NULL;
F->t_1405 = g_all_types_861;
F->done_1406 = NULL;
while ((F->t_1405 != NULL)) {
if ((f_composite_356(F->t_1405) && (!f_seen_name_375(F->done_1406, &(((P813)rt_nil_check((*(P826)rt_nil_check(F->t_1405)).cname))->all))))) {
F->l_1407 = NULL;
F->c_1408 = rt_str_new(((rt_int)(((((P813)rt_nil_check((*(P826)rt_nil_check(F->t_1405)).cname))->all)).len)));
rt_str_assign(&F->c_1408, (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_1405)).cname))->all));
{ R825 *cell1409 = rt_alloc(sizeof(R825));
(*cell1409).s = NULL;
(*cell1409).next = NULL;
F->l_1407 = cell1409;
}
(*(P824)rt_nil_check(F->l_1407)).s = (*(P826)rt_nil_check(F->t_1405)).cname;
(*(P824)rt_nil_check(F->l_1407)).next = F->done_1406;
F->done_1406 = F->l_1407;
f_put_27(g_out_helpers_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1408), rt_str("(", 1)), F->c_1408), rt_str(" *d, ", 5)), F->c_1408), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1408), rt_str(" cp_", 4)), F->c_1408), rt_str("(", 1)), F->c_1408), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1408), rt_str("(", 1)), F->c_1408), rt_str(" a, ", 4)), F->c_1408), rt_str(" b);", 4)); b_; }));
f_helper_bodies_378(F->t_1405);
}
F->t_1405 = (*(P826)rt_nil_check(F->t_1405)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_378(P826 t_377) {
  struct f_helper_bodies_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_377 = t_377;
F->c_1410 = rt_str_new(((rt_int)(((((P813)rt_nil_check((*(P826)rt_nil_check(F->t_377)).cname))->all)).len)));
rt_str_assign(&F->c_1410, (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_377)).cname))->all));
F->b_1411 = NULL;
F->b_1411 = g_out_funcs_867;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_377)).kind) == (((rt_int)6LL)))) {
F->e_1412 = NULL;
F->e_1412 = (*(P826)rt_nil_check(F->t_377)).elem;
F->sizes_1413 = NULL;
F->sizes_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1414 = NULL;
F->bounds_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1416 = ((rt_int)1LL), hi1417 = rt_r_ichk((*(P826)rt_nil_check(F->t_377)).ndim);
for (rt_int it1418 = lo1416; it1418 <= hi1417; it1418++) {
F->k_1415 = it1418;
F->l_1419 = rt_str_copy(f_dim_lo_233(F->k_1415));
F->h_1420 = rt_str_copy(f_dim_hi_235(F->k_1415));
F->sizes_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->sizes_1413))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1419), rt_str(", d->", 5)), F->h_1420), rt_str(") != RT_R_EXT(s.", 16)), F->l_1419), rt_str(", s.", 4)), F->h_1420), rt_str(")", 1)); b_; }));
F->bounds_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->bounds_1414))->all), rt_str(" || a.", 6)), F->l_1419), rt_str(" != b.", 6)), F->l_1419), rt_str(" || a.", 6)), F->h_1420), rt_str(" != b.", 6)), F->h_1420); b_; }));
}
}
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" *d, ", 5)), F->c_1410), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P813)rt_nil_check(F->sizes_1413))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1412, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1412, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1410), rt_str(" cp_", 4)), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1410), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_225(F->e_1412)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_364(F->e_1412, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" a, ", 4)), F->c_1410), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P813)rt_nil_check(F->bounds_1414))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_368(F->e_1412, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_377)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" *d, ", 5)), F->c_1410), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P826)rt_nil_check(F->t_377)).under) && ((*(P826)rt_nil_check(F->t_377)).elemcons != NULL)) && ((*(P822)rt_nil_check((*(P826)rt_nil_check(F->t_377)).elemcons)).lo != NULL))) {
F->saved_1421 = NULL;
F->saved_1421 = g_psub_877;
F->p_1422 = NULL;
F->p_1422 = (*(P826)rt_nil_check(F->t_377)).tparams;
while ((F->p_1422 != NULL)) {
F->l1_1423 = NULL;
F->l2_1424 = NULL;
{ R825 *cell1425 = rt_alloc(sizeof(R825));
(*cell1425).s = NULL;
(*cell1425).next = NULL;
F->l1_1423 = cell1425;
}
{ R825 *cell1426 = rt_alloc(sizeof(R825));
(*cell1426).s = NULL;
(*cell1426).next = NULL;
F->l2_1424 = cell1426;
}
(*(P824)rt_nil_check(F->l1_1423)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1422)).name))->all))), rt_str("@", 1)); b_; }));
(*(P824)rt_nil_check(F->l2_1424)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1422)).name))->all))); b_; }));
(*(P824)rt_nil_check(F->l1_1423)).next = F->l2_1424;
(*(P824)rt_nil_check(F->l2_1424)).next = g_psub_877;
g_psub_877 = F->l1_1423;
F->p_1422 = (*(P820)rt_nil_check(F->p_1422)).next;
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P826)rt_nil_check(F->t_377)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check((*(P826)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check((*(P826)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check((*(P826)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P813)rt_nil_check((*(P822)rt_nil_check((*(P826)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_877 = F->saved_1421;
} else {
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P826)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1410), rt_str(" cp_", 4)), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" s) { s.all = ", 14)), f_copy_code_364((*(P826)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" a, ", 4)), F->c_1410), rt_str(" b) { return ", 13)), f_eq_code_368((*(P826)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_377)).kind) == (((rt_int)17LL)))) {
F->f_1427 = NULL;
F->f_1427 = (*(P826)rt_nil_check(F->t_377)).fields;
F->i_1428 = RT_R_IUNDEF;
F->i_1428 = ((rt_int)0LL);
F->cases_as_1429 = NULL;
F->cases_as_1429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1430 = NULL;
F->cases_cp_1430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1431 = NULL;
F->cases_eq_1431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1427 != NULL)) {
F->fn_1432 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1427)).name))->all))));
F->cases_as_1429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->cases_as_1429))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1428))), rt_str(": d->", 5)), F->fn_1432), rt_str(" = ", 3)), f_copy_code_364((*(P828)rt_nil_check(F->f_1427)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1432); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->cases_cp_1430))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1428))), rt_str(": d.", 4)), F->fn_1432), rt_str(" = ", 3)), f_copy_code_364((*(P828)rt_nil_check(F->f_1427)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1432); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->cases_eq_1431))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1428))), rt_str(": return ", 9)), f_eq_code_368((*(P828)rt_nil_check(F->f_1427)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1432); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1432); b_; }))), rt_str(";", 1)); b_; }));
F->i_1428 = rt_add(rt_r_ichk(F->i_1428), ((rt_int)1LL));
F->f_1427 = (*(P828)rt_nil_check(F->f_1427)).next;
}
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" *d, ", 5)), F->c_1410), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P813)rt_nil_check(F->cases_as_1429))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1410), rt_str(" cp_", 4)), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1410), rt_str(" d = s; switch (s.tag) {", 24)), (((P813)rt_nil_check(F->cases_cp_1430))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" a, ", 4)), F->c_1410), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P813)rt_nil_check(F->cases_eq_1431))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1433 = NULL;
F->f_1433 = (*(P826)rt_nil_check(F->t_377)).fields;
F->conds_1434 = NULL;
F->conds_1434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" *d, ", 5)), F->c_1410), rt_str(" s) {", 5)); b_; }));
while ((F->f_1433 != NULL)) {
F->fn_1435 = rt_str_copy(f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1433)).name))->all)));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1435); b_; }), (*(P828)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1435); b_; }))); b_; }));
F->f_1433 = (*(P828)rt_nil_check(F->f_1433)).next;
}
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1410), rt_str(" cp_", 4)), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1410), rt_str(" d = s;", 7)); b_; }));
F->f_1433 = (*(P826)rt_nil_check(F->t_377)).fields;
while ((F->f_1433 != NULL)) {
F->fn_1436 = rt_str_copy(f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1433)).name))->all)));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1436), rt_str(" = ", 3)), f_copy_code_364((*(P828)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1436); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->conds_1434))->all), rt_str(" && ", 4)), f_eq_code_368((*(P828)rt_nil_check(F->f_1433)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1436); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1436); b_; }))); b_; }));
F->f_1433 = (*(P828)rt_nil_check(F->f_1433)).next;
}
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1410), rt_str("(", 1)), F->c_1410), rt_str(" a, ", 4)), F->c_1410), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P813)rt_nil_check(F->conds_1434))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_380(P820 elems_379) {
  struct f_declare_body_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_379 = elems_379;
F->e_1437 = NULL;
F->e_1437 = F->elems_379;
while ((F->e_1437 != NULL)) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)51LL)))) {
F->g_1438 = NULL;
F->g_1438 = f_new_sym_172((((rt_int)10LL)), (*(P820)rt_nil_check(F->e_1437)).name);
(*(P830)rt_nil_check(F->g_1438)).decl = F->e_1437;
(*(P830)rt_nil_check(F->g_1438)).level = rt_r_ichk(g_cur_level_873);
(*(P830)rt_nil_check(F->g_1438)).owner = g_func_sym_884;
(*(P830)rt_nil_check(F->g_1438)).gctx = g_fctx_874;
f_define_159(F->g_1438, rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).line));
}
F->e_1437 = (*(P820)rt_nil_check(F->e_1437)).next;
}
F->e_1437 = F->elems_379;
while ((F->e_1437 != NULL)) {
if (((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).flag) == ((rt_int)0LL)))) {
f_manifest_const_382(F->e_1437);
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_390(F->e_1437);
} else if ((((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).flag) != ((rt_int)3LL)))) {
f_gen_expose_412(F->e_1437);
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)49LL)))) {
F->y_1439 = NULL;
F->y_1439 = f_new_sym_172((((rt_int)7LL)), (*(P820)rt_nil_check(F->e_1437)).name);
(*(P830)rt_nil_check(F->y_1439)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1439, rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).line));
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1439)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1439)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)42LL)))) {
F->y_1440 = NULL;
F->y_1440 = f_new_sym_172((((rt_int)6LL)), (*(P820)rt_nil_check(F->e_1437)).name);
(*(P830)rt_nil_check(F->y_1440)).st = (*(P820)rt_nil_check(F->e_1437)).a;
(*(P830)rt_nil_check(F->y_1440)).decl = F->e_1437;
f_define_159(F->y_1440, rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).line));
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)44LL)))) {
F->y_1441 = NULL;
F->y_1441 = f_new_sym_172((((rt_int)5LL)), (*(P820)rt_nil_check(F->e_1437)).name);
F->t_1442 = NULL;
F->t_1442 = f_new_typ_174((((rt_int)8LL)));
(*(P826)rt_nil_check(F->t_1442)).name = (*(P820)rt_nil_check(F->e_1437)).name;
(*(P826)rt_nil_check(F->t_1442)).decl = F->e_1437;
(*(P830)rt_nil_check(F->y_1441)).t = F->t_1442;
f_define_159(F->y_1441, rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).line));
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)43LL)))) {
F->y_1443 = NULL;
F->y_1443 = f_new_sym_172((((rt_int)5LL)), (*(P820)rt_nil_check(F->e_1437)).name);
(*(P830)rt_nil_check(F->y_1443)).st = (*(P820)rt_nil_check(F->e_1437)).a;
(*(P830)rt_nil_check(F->y_1443)).decl = F->e_1437;
f_define_159(F->y_1443, rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).line));
}
F->e_1437 = (*(P820)rt_nil_check(F->e_1437)).next;
}
F->e_1437 = F->elems_379;
while ((F->e_1437 != NULL)) {
if ((((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)50LL))))) {
F->y_1444 = NULL;
f_declare_subprogram_439(F->e_1437);
F->y_1444 = f_lookup_decl_156(F->e_1437);
(*(P830)rt_nil_check(F->y_1444)).home = F->elems_379;
f_normal_function_437(F->e_1437, F->y_1444);
}
F->e_1437 = (*(P820)rt_nil_check(F->e_1437)).next;
}
F->e_1437 = F->elems_379;
{
F->snap_1445 = NULL;
while ((F->e_1437 != NULL)) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1445 == NULL)) {
{ P834 cell1446 = rt_alloc(sizeof *cell1446);
rt_int pv1447 = (((rt_int)4093LL));
cell1446->p_n = pv1447;
cell1446->all.lo = ((rt_int)0LL); cell1446->all.hi = pv1447;
cell1446->all.lo2 = cell1446->all.hi2 = 1;
cell1446->all.p = rt_alloc(sizeof(P830) * (size_t)(RT_CNT(cell1446->all)) + 1);
for (rt_int i1448 = 0; i1448 < (RT_CNT(cell1446->all)); i1448++) {
cell1446->all.p[i1448] = NULL;
}
F->snap_1445 = cell1446;
}
{ rt_int lo1450 = ((rt_int)0LL), hi1451 = (((rt_int)4093LL));
for (rt_int it1452 = lo1450; it1452 <= hi1451; it1452++) {
F->i_1449 = it1452;
(((P834)rt_nil_check(F->snap_1445))->all).p[(rt_index(F->i_1449, (((P834)rt_nil_check(F->snap_1445))->all).lo, (((P834)rt_nil_check(F->snap_1445))->all).hi) - (((P834)rt_nil_check(F->snap_1445))->all).lo)] = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(F->i_1449, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1453 = NULL;
F->g_1453 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all));
(*(P830)rt_nil_check(F->g_1453)).env = F->snap_1445;
}
}
F->e_1437 = (*(P820)rt_nil_check(F->e_1437)).next;
}
}
F->e_1437 = F->elems_379;
while ((F->e_1437 != NULL)) {
if (((rt_r_ichk((*(P820)rt_nil_check(F->e_1437)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1454 = NULL;
F->y_1454 = f_lookup_decl_156(F->e_1437);
if (((((F->y_1454 != NULL) && ((*(P830)rt_nil_check(F->y_1454)).params != NULL)) && ((*(P832)rt_nil_check((*(P830)rt_nil_check(F->y_1454)).params)).next == NULL)) && ((rt_r_ichk((*(P826)rt_nil_check((*(P832)rt_nil_check((*(P830)rt_nil_check(F->y_1454)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P826)rt_nil_check((*(P832)rt_nil_check((*(P830)rt_nil_check(F->y_1454)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1437)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P826)rt_nil_check((*(P832)rt_nil_check((*(P830)rt_nil_check(F->y_1454)).params)).t)).initp = F->y_1454;
} else {
(*(P826)rt_nil_check((*(P832)rt_nil_check((*(P830)rt_nil_check(F->y_1454)).params)).t)).finalp = F->y_1454;
}
}
}
F->e_1437 = (*(P820)rt_nil_check(F->e_1437)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_382(P820 d_381) {
  struct f_manifest_const_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_381 = d_381;
F->ok_1455 = RT_R_EUNDEF;
F->v_1456 = NULL;
F->y_1457 = NULL;
F->t_1458 = NULL;
F->ctext_1459 = NULL;
if (((*(P820)rt_nil_check(F->d_381)).a != NULL)) {
if (((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->d_381)).a)).kind) != (((rt_int)70LL))) || ((*(P820)rt_nil_check((*(P820)rt_nil_check(F->d_381)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1456 = f_meval_342((*(P820)rt_nil_check(F->d_381)).b, &F->ok_1455);
if ((!rt_r_echk(F->ok_1455))) {
goto ret_;
}
{
F->saved_1460 = NULL;
F->saved_1460 = g_code_870;
g_code_870 = f_new_buffer_24();
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
{ rt_frame xf1461;
if (RT_TRY(xf1461)) {
F->ctext_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_654((*(P820)rt_nil_check(F->d_381)).b, NULL, &F->t_1458)), rt_str(")", 1)); b_; }));
RT_POP(xf1461);
} else {
RT_POP(xf1461);
int x1462 = rt_xcur;
if (0 || x1462 == ex_compile_error_1) {
F->ok_1455 = 0;
} else {
rt_raise(x1462);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
F->ok_1455 = (rt_r_echk(F->ok_1455) && ((*(P843)rt_nil_check(g_code_870)).head == NULL));
g_code_870 = F->saved_1460;
}
if (((!rt_r_echk(F->ok_1455)) || (((*(P820)rt_nil_check(F->d_381)).a != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->t_1458)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P839)rt_nil_check(F->v_1456)).kind) == (((rt_int)4LL)))) {
(*(P839)rt_nil_check(F->v_1456)).t = F->t_1458;
(*(P839)rt_nil_check(F->v_1456)).i = f_lit_index_253((*(P826)rt_nil_check(f_base_of_214(F->t_1458))).lits, &(((P813)rt_nil_check((*(P839)rt_nil_check(F->v_1456)).s))->all));
}
(*(P820)rt_nil_check(F->d_381)).flag = ((rt_int)1LL);
F->y_1457 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->d_381)).name);
(*(P830)rt_nil_check(F->y_1457)).t = F->t_1458;
(*(P830)rt_nil_check(F->y_1457)).c = f_new_cons_175();
(*(P830)rt_nil_check(F->y_1457)).mv = F->v_1456;
if ((rt_r_ichk((*(P839)rt_nil_check(F->v_1456)).kind) == (((rt_int)1LL)))) {
(*(P830)rt_nil_check(F->y_1457)).mvalue = rt_r_ichk((*(P839)rt_nil_check(F->v_1456)).i);
(*(P830)rt_nil_check(F->y_1457)).hasmv = 1;
}
(*(P830)rt_nil_check(F->y_1457)).ro_flag = 1;
(*(P830)rt_nil_check(F->y_1457)).access = F->ctext_1459;
f_define_159(F->y_1457, rt_r_ichk((*(P820)rt_nil_check(F->d_381)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_386(P820 d_383, rstr *name_384, int *ro_385) {
  struct f_exported_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_383 = d_383;
F->name_384 = name_384;
F->ro_385 = ro_385;
F->ro_385v = *F->ro_385;
F->p_1463 = NULL;
F->p_1463 = (*(P820)rt_nil_check(F->d_383)).a;
F->ro_385v = 0;
if ((rt_r_ichk((*(P820)rt_nil_check(F->d_383)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1463 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1463)).name))->all), (*F->name_384))) {
F->ro_385v = (rt_r_ichk((*(P820)rt_nil_check(F->p_1463)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1463 = (*(P820)rt_nil_check(F->p_1463)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_385v)) (*F->ro_385) = F->ro_385v;
  RT_FPOP();
  return F->result_;
}

static P830 f_copy_sym_388(P830 y_387) {
  struct f_copy_sym_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_387 = y_387;
F->z_1464 = NULL;
{ R831 *cell1465 = rt_alloc(sizeof(R831));
(*cell1465).name = NULL;
(*cell1465).t = NULL;
(*cell1465).c = NULL;
(*cell1465).access = NULL;
(*cell1465).cname = NULL;
(*cell1465).st = NULL;
(*cell1465).decl = NULL;
(*cell1465).params = NULL;
(*cell1465).result = NULL;
(*cell1465).members = NULL;
(*cell1465).mnext = NULL;
(*cell1465).binds = NULL;
(*cell1465).insts = NULL;
(*cell1465).env = NULL;
(*cell1465).chain = NULL;
(*cell1465).stack = NULL;
(*cell1465).owner = NULL;
(*cell1465).gctx = NULL;
(*cell1465).mv = NULL;
(*cell1465).reqs = NULL;
(*cell1465).home = NULL;
(*cell1465).capn = NULL;
(*cell1465).tbinds = NULL;
F->z_1464 = cell1465;
}
(*(P830)rt_nil_check(F->z_1464)).kind = rt_r_ichk((*(P830)rt_nil_check(F->y_387)).kind);
(*(P830)rt_nil_check(F->z_1464)).name = (*(P830)rt_nil_check(F->y_387)).name;
(*(P830)rt_nil_check(F->z_1464)).t = (*(P830)rt_nil_check(F->y_387)).t;
(*(P830)rt_nil_check(F->z_1464)).c = (*(P830)rt_nil_check(F->y_387)).c;
(*(P830)rt_nil_check(F->z_1464)).access = (*(P830)rt_nil_check(F->y_387)).access;
(*(P830)rt_nil_check(F->z_1464)).cname = (*(P830)rt_nil_check(F->y_387)).cname;
(*(P830)rt_nil_check(F->z_1464)).ro_flag = rt_r_echk((*(P830)rt_nil_check(F->y_387)).ro_flag);
(*(P830)rt_nil_check(F->z_1464)).mvalue = rt_r_ichk((*(P830)rt_nil_check(F->y_387)).mvalue);
(*(P830)rt_nil_check(F->z_1464)).hasmv = rt_r_echk((*(P830)rt_nil_check(F->y_387)).hasmv);
(*(P830)rt_nil_check(F->z_1464)).st = (*(P830)rt_nil_check(F->y_387)).st;
(*(P830)rt_nil_check(F->z_1464)).decl = (*(P830)rt_nil_check(F->y_387)).decl;
(*(P830)rt_nil_check(F->z_1464)).params = (*(P830)rt_nil_check(F->y_387)).params;
(*(P830)rt_nil_check(F->z_1464)).result = (*(P830)rt_nil_check(F->y_387)).result;
(*(P830)rt_nil_check(F->z_1464)).level = rt_r_ichk((*(P830)rt_nil_check(F->y_387)).level);
(*(P830)rt_nil_check(F->z_1464)).byref = rt_r_echk((*(P830)rt_nil_check(F->y_387)).byref);
(*(P830)rt_nil_check(F->z_1464)).members = (*(P830)rt_nil_check(F->y_387)).members;
(*(P830)rt_nil_check(F->z_1464)).env = (*(P830)rt_nil_check(F->y_387)).env;
F->result_ = F->z_1464;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_390(P820 d_389) {
  struct f_gen_capsule_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_389 = d_389;
F->y_1466 = NULL;
F->y_1466 = f_new_sym_172((((rt_int)8LL)), (*(P820)rt_nil_check(F->d_389)).name);
F->saved_1467 = NULL;
F->saved_1467 = g_suppress_890;
F->p_1468 = NULL;
F->p_1468 = (*(P820)rt_nil_check(F->d_389)).b;
F->tail_1469 = NULL;
(*(P830)rt_nil_check(F->y_1466)).decl = F->d_389;
while ((F->p_1468 != NULL)) {
F->pm_1470 = NULL;
{ R833 *cell1471 = rt_alloc(sizeof(R833));
(*cell1471).name = NULL;
(*cell1471).t = NULL;
(*cell1471).c = NULL;
(*cell1471).cfield = NULL;
(*cell1471).next = NULL;
F->pm_1470 = cell1471;
}
(*(P832)rt_nil_check(F->pm_1470)).name = (*(P820)rt_nil_check(F->p_1468)).name;
(*(P832)rt_nil_check(F->pm_1470)).mode = rt_r_ichk((*(P820)rt_nil_check(F->p_1468)).ival);
(*(P832)rt_nil_check(F->pm_1470)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1468)).a, &(*(P832)rt_nil_check(F->pm_1470)).c);
if ((F->tail_1469 == NULL)) {
(*(P830)rt_nil_check(F->y_1466)).params = F->pm_1470;
} else {
(*(P832)rt_nil_check(F->tail_1469)).next = F->pm_1470;
}
F->tail_1469 = F->pm_1470;
F->p_1468 = (*(P820)rt_nil_check(F->p_1468)).next;
}
if (((*(P820)rt_nil_check(F->d_389)).b == NULL)) {
g_suppress_890 = f_suppressing_446((*(P820)rt_nil_check(F->d_389)).prags);
f_elaborate_capsule_399(F->d_389, F->y_1466, NULL, F->d_389);
g_suppress_890 = F->saved_1467;
}
f_define_159(F->y_1466, rt_r_ichk((*(P820)rt_nil_check(F->d_389)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_394(P820 d_391, P820 args_392, rt_int line_393) {
  struct f_capsule_params_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->args_392 = args_392;
F->line_393 = line_393;
F->p_1472 = NULL;
F->p_1472 = (*(P820)rt_nil_check(F->d_391)).b;
F->a_1473 = NULL;
F->a_1473 = F->args_392;
F->t_1474 = NULL;
F->vt_1475 = NULL;
F->c_1476 = NULL;
while (((F->p_1472 != NULL) && (F->a_1473 != NULL))) {
F->t_1474 = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1472)).a, &F->c_1476);
if ((rt_r_ichk((*(P820)rt_nil_check(F->p_1472)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->p_1472)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->p_1472)).ival) == (((rt_int)4LL))))) {
F->lv_1477 = NULL;
F->lc_1478 = NULL;
F->ro_1479 = RT_R_EUNDEF;
F->y_1480 = NULL;
F->y_1480 = f_new_sym_172((((rt_int)1LL)), (*(P820)rt_nil_check(F->p_1472)).name);
f_lvalue_623(F->a_1473, &F->lv_1477, &F->vt_1475, &F->lc_1478, &F->ro_1479);
f_check_type_223(F->vt_1475, F->t_1474, F->line_393);
if ((rt_r_echk(F->ro_1479) && (rt_r_ichk((*(P820)rt_nil_check(F->p_1472)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1472)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_872)) {
F->f_1481 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1472)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_1474)), rt_str(" *", 2)), F->f_1481), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1481), rt_str(" = &", 4)), (((P813)rt_nil_check(F->lv_1477))->all)), rt_str(";", 1)); b_; }));
(*(P830)rt_nil_check(F->y_1480)).level = rt_r_ichk(g_cur_level_873);
(*(P830)rt_nil_check(F->y_1480)).access = f_mk_3(&F->f_1481);
(*(P830)rt_nil_check(F->y_1480)).byref = 1;
} else {
F->g_1482 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1472)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_1474)), rt_str(" *", 2)), F->g_1482), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_880, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1482), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1482, rt_str(" = &", 4)), (((P813)rt_nil_check(F->lv_1477))->all)), rt_str(";", 1)); b_; }));
(*(P830)rt_nil_check(F->y_1480)).level = ((rt_int)0LL);
(*(P830)rt_nil_check(F->y_1480)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1482), rt_str(")", 1)); b_; }));
}
(*(P830)rt_nil_check(F->y_1480)).t = F->t_1474;
(*(P830)rt_nil_check(F->y_1480)).c = F->lc_1478;
(*(P830)rt_nil_check(F->y_1480)).ro_flag = (rt_r_ichk((*(P820)rt_nil_check(F->p_1472)).ival) == (((rt_int)4LL)));
f_define_159(F->y_1480, F->line_393);
} else {
F->y_1483 = NULL;
F->y_1483 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_1472)).name);
F->v_1484 = rt_str_copy(f_gexpr_654(F->a_1473, F->t_1474, &F->vt_1475));
f_check_type_223(F->vt_1475, F->t_1474, F->line_393);
{
F->access_1485 = rt_str_copy(f_storage_455(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1472)).name))->all), F->t_1474));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1485, rt_str(" = ", 3)), f_copy_code_364(F->t_1474, &F->v_1484)), rt_str(";", 1)); b_; }));
f_bind_458(F->y_1483, &F->access_1485);
}
(*(P830)rt_nil_check(F->y_1483)).t = F->t_1474;
(*(P830)rt_nil_check(F->y_1483)).c = F->c_1476;
(*(P830)rt_nil_check(F->y_1483)).ro_flag = 1;
f_define_159(F->y_1483, F->line_393);
}
F->p_1472 = (*(P820)rt_nil_check(F->p_1472)).next;
F->a_1473 = (*(P820)rt_nil_check(F->a_1473)).next;
}
if (((F->p_1472 != NULL) || (F->a_1473 != NULL))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_391)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_399(P820 d_395, P830 y_396, P820 args_397, P820 owner_398) {
  struct f_elaborate_capsule_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_395 = d_395;
F->y_396 = y_396;
F->args_397 = args_397;
F->owner_398 = owner_398;
F->cr_1486 = NULL;
F->ctx_1487 = NULL;
F->saved_gotos_1488 = NULL;
F->m_1489 = NULL;
F->p_1490 = NULL;
F->p_1490 = (*(P820)rt_nil_check(F->d_395)).a;
F->ro_1491 = RT_R_EUNDEF;
{ R848 *cell1492 = rt_alloc(sizeof(R848));
(*cell1492).d = NULL;
(*cell1492).next = NULL;
F->cr_1486 = cell1492;
}
(*(P847)rt_nil_check(F->cr_1486)).d = F->d_395;
(*(P847)rt_nil_check(F->cr_1486)).next = g_caps_875;
g_caps_875 = F->cr_1486;
f_open_scope_168();
(*(P847)rt_nil_check(F->cr_1486)).depth = rt_r_ichk(g_depth_859);
if (((*(P820)rt_nil_check(F->d_395)).b != NULL)) {
f_capsule_params_394(F->d_395, F->args_397, rt_r_ichk((*(P820)rt_nil_check(F->owner_398)).line));
}
{ R838 *cell1493 = rt_alloc(sizeof(R838));
(*cell1493).imps = NULL;
(*cell1493).next = NULL;
F->ctx_1487 = cell1493;
}
(*(P837)rt_nil_check(F->ctx_1487)).depth = rt_r_ichk(g_depth_859);
(*(P837)rt_nil_check(F->ctx_1487)).imps = (*(P820)rt_nil_check(F->d_395)).d;
(*(P837)rt_nil_check(F->ctx_1487)).all_imp = (rt_r_ichk((*(P820)rt_nil_check(F->d_395)).flag) >= ((rt_int)2LL));
(*(P837)rt_nil_check(F->ctx_1487)).next = g_fctx_874;
g_fctx_874 = F->ctx_1487;
F->saved_gotos_1488 = g_gotos_894;
g_gotos_894 = NULL;
f_declare_labels_481((*(P820)rt_nil_check(F->d_395)).c);
f_declare_body_380((*(P820)rt_nil_check(F->d_395)).c);
f_capsule_body_488((*(P820)rt_nil_check(F->d_395)).c);
{
F->w_1494 = NULL;
{ R850 *cell1495 = rt_alloc(sizeof(R850));
(*cell1495).d = NULL;
(*cell1495).w = NULL;
(*cell1495).next = NULL;
F->w_1494 = cell1495;
}
(*(P849)rt_nil_check(F->w_1494)).d = F->owner_398;
(*(P849)rt_nil_check(F->w_1494)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_475((*(P820)rt_nil_check(F->d_395)).c); b_; }));
(*(P849)rt_nil_check(F->w_1494)).next = g_cap_waits_876;
g_cap_waits_876 = F->w_1494;
}
g_fctx_874 = (*(P837)rt_nil_check(g_fctx_874)).next;
F->m_1489 = g_scope_stack_860;
while (((F->m_1489 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).depth) == rt_r_ichk(g_depth_859)))) {
if (((((rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).kind) == (((rt_int)5LL))) && ((*(P830)rt_nil_check(F->m_1489)).t == NULL)) && ((*(P830)rt_nil_check(F->m_1489)).decl != NULL)) && (rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->m_1489)).decl)).kind) == (((rt_int)43LL))))) {
(*(P830)rt_nil_check(F->m_1489)).t = f_new_type_306(F->m_1489, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->d_395)).line)), &(*(P830)rt_nil_check(F->m_1489)).c);
} else if ((((rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).kind) == (((rt_int)6LL)))) && ((*(P830)rt_nil_check(F->m_1489)).t == NULL))) {
(*(P830)rt_nil_check(F->m_1489)).t = f_resolve_subtype_256((*(P830)rt_nil_check(F->m_1489)).st, &(*(P830)rt_nil_check(F->m_1489)).c);
} else if (((rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(F->m_1489)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_414((*(P830)rt_nil_check(F->m_1489)).t);
}
F->m_1489 = (*(P830)rt_nil_check(F->m_1489)).stack;
}
F->m_1489 = g_scope_stack_860;
while (((F->m_1489 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->m_1489)).depth) == rt_r_ichk(g_depth_859)))) {
if (f_exported_386(F->d_395, &(((P813)rt_nil_check((*(P830)rt_nil_check(F->m_1489)).name))->all), &F->ro_1491)) {
F->z_1496 = NULL;
F->z_1496 = f_copy_sym_388(F->m_1489);
if (rt_r_echk(F->ro_1491)) {
(*(P830)rt_nil_check(F->z_1496)).ro_flag = 1;
}
(*(P830)rt_nil_check(F->z_1496)).mnext = (*(P830)rt_nil_check(F->y_396)).members;
(*(P830)rt_nil_check(F->y_396)).members = F->z_1496;
}
F->m_1489 = (*(P830)rt_nil_check(F->m_1489)).stack;
}
while ((F->p_1490 != NULL)) {
if ((((!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1490)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1490)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1490)).name))->all)) == NULL) || ((*(P830)rt_nil_check(f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1490)).name))->all)))).depth != rt_r_ichk(g_depth_859))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_395)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1490)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_395)).name))->all)); b_; }));
}
F->p_1490 = (*(P820)rt_nil_check(F->p_1490)).next;
}
f_close_scope_169();
g_caps_875 = (*(P847)rt_nil_check(g_caps_875)).next;
g_gotos_894 = F->saved_gotos_1488;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_402(P820 d_400, rstr *op_401) {
  struct f_exports_op_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_400 = d_400;
F->op_401 = op_401;
F->p_1497 = NULL;
if ((F->d_400 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1497 = (*(P820)rt_nil_check(F->d_400)).a;
while ((F->p_1497 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1497)).name))->all), (*F->op_401))) {
F->result_ = 1;
goto ret_;
}
F->p_1497 = (*(P820)rt_nil_check(F->p_1497)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P813 f_renamed_405(P820 d_403, P830 z_404) {
  struct f_renamed_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_403 = d_403;
F->z_404 = z_404;
F->r_1498 = NULL;
F->r_1498 = (*(P820)rt_nil_check(F->d_403)).c;
while ((F->r_1498 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->r_1498)).name))->all), (((P813)rt_nil_check((*(P830)rt_nil_check(F->z_404)).name))->all))) {
F->result_ = (*(P820)rt_nil_check((*(P820)rt_nil_check(F->r_1498)).a)).name;
goto ret_;
}
F->r_1498 = (*(P820)rt_nil_check(F->r_1498)).next;
}
F->result_ = (*(P830)rt_nil_check(F->z_404)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_pick_capsule_407(P820 d_406) {
  struct f_pick_capsule_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_406 = d_406;
F->y_1499 = NULL;
F->y_1499 = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(f_hash_152(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_406)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1500 = NULL;
F->fit_1501 = NULL;
F->n_1502 = RT_R_IUNDEF;
F->n_1502 = ((rt_int)0LL);
while ((F->y_1499 != NULL)) {
if ((rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1499)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_406)).name))->all)) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1499)).kind) == (((rt_int)8LL))))) {
F->n_1502 = rt_add(rt_r_ichk(F->n_1502), ((rt_int)1LL));
if ((F->first_1500 == NULL)) {
F->first_1500 = F->y_1499;
}
if (((F->fit_1501 == NULL) && f_fits_752(F->y_1499, (*(P820)rt_nil_check(F->d_406)).b))) {
F->fit_1501 = F->y_1499;
}
}
F->y_1499 = (*(P830)rt_nil_check(F->y_1499)).chain;
}
if ((rt_r_ichk(F->n_1502) > ((rt_int)1LL))) {
if ((F->fit_1501 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_406)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1501;
goto ret_;
}
if ((F->first_1500 == NULL)) {
F->result_ = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_406)).name))->all));
goto ret_;
}
F->result_ = F->first_1500;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_capsule_instance_410(P830 g_408, P820 d_409) {
  struct f_capsule_instance_410fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_408 = g_408;
F->d_409 = d_409;
F->gd_1503 = NULL;
F->gd_1503 = (*(P830)rt_nil_check(F->g_408)).decl;
F->pat_1504 = NULL;
F->pat_1504 = (*(P820)rt_nil_check(F->gd_1503)).b;
F->binds_1505 = NULL;
F->binds_1505 = f_tt_binds_581(F->gd_1503, (*(P820)rt_nil_check(F->pat_1504)).e, (*(P820)rt_nil_check(F->d_409)).e, rt_r_ichk((*(P820)rt_nil_check(F->d_409)).line));
F->inst_1506 = NULL;
F->inst_1506 = (*(P830)rt_nil_check(F->g_408)).insts;
F->saved_env_1507 = NULL;
F->saved_env_1507 = g_genv_857;
F->saved_gdepth_1508 = RT_R_IUNDEF;
F->saved_gdepth_1508 = rt_r_ichk(g_gdepth_889);
if (((rt_r_ichk((*(P820)rt_nil_check(F->d_409)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P820)rt_nil_check(F->d_409)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1506 != NULL)) {
if (f_same_binds_573((*(P830)rt_nil_check(F->inst_1506)).tbinds, F->binds_1505)) {
F->result_ = F->inst_1506;
goto ret_;
}
F->inst_1506 = (*(P830)rt_nil_check(F->inst_1506)).insts;
}
}
F->inst_1506 = f_new_sym_172((((rt_int)8LL)), (*(P820)rt_nil_check(F->pat_1504)).name);
(*(P830)rt_nil_check(F->inst_1506)).decl = F->pat_1504;
(*(P830)rt_nil_check(F->inst_1506)).tbinds = F->binds_1505;
f_open_scope_168();
{
F->b_1509 = NULL;
F->b_1509 = F->binds_1505;
while ((F->b_1509 != NULL)) {
f_define_159(F->b_1509, rt_r_ichk((*(P820)rt_nil_check(F->d_409)).line));
F->b_1509 = (*(P830)rt_nil_check(F->b_1509)).mnext;
}
}
g_genv_857 = (*(P830)rt_nil_check(F->g_408)).env;
g_gdepth_889 = rt_r_ichk(g_depth_859);
f_elaborate_capsule_399(F->pat_1504, F->inst_1506, (*(P820)rt_nil_check(F->d_409)).b, F->d_409);
g_genv_857 = F->saved_env_1507;
g_gdepth_889 = rt_r_ichk(F->saved_gdepth_1508);
f_close_scope_169();
if (((rt_r_ichk((*(P820)rt_nil_check(F->d_409)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P820)rt_nil_check(F->d_409)).flag) != ((rt_int)3LL)))) {
(*(P830)rt_nil_check(F->inst_1506)).insts = (*(P830)rt_nil_check(F->g_408)).insts;
(*(P830)rt_nil_check(F->g_408)).insts = F->inst_1506;
}
F->result_ = F->inst_1506;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_412(P820 d_411) {
  struct f_gen_expose_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_411 = d_411;
F->y_1510 = NULL;
F->y_1510 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all));
F->m_1511 = NULL;
F->p_1512 = NULL;
F->p_1512 = (*(P820)rt_nil_check(F->d_411)).a;
F->r_1513 = NULL;
F->r_1513 = (*(P820)rt_nil_check(F->d_411)).c;
if ((((F->y_1510 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1510)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1510)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1510 = f_capsule_instance_410(F->y_1510, F->d_411);
} else {
F->y_1510 = f_pick_capsule_407(F->d_411);
if (((F->y_1510 == NULL) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1510)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P820)rt_nil_check(F->d_411)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P830)rt_nil_check(F->y_1510)).tbinds != NULL) || (((*(P830)rt_nil_check(F->y_1510)).decl != NULL) && ((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1510)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->d_411)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P820)rt_nil_check(F->d_411)).flag) == ((rt_int)3LL)))) {
F->inst_1514 = NULL;
F->inst_1514 = f_new_sym_172((((rt_int)8LL)), (*(P830)rt_nil_check(F->y_1510)).name);
(*(P830)rt_nil_check(F->inst_1514)).decl = (*(P830)rt_nil_check(F->y_1510)).decl;
f_elaborate_capsule_399((*(P830)rt_nil_check(F->y_1510)).decl, F->inst_1514, (*(P820)rt_nil_check(F->d_411)).b, F->d_411);
F->y_1510 = F->inst_1514;
} else if ((((*(P830)rt_nil_check(F->y_1510)).decl != NULL) && ((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_1510)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P820)rt_nil_check(F->d_411)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1513 != NULL)) {
F->found_1515 = RT_R_EUNDEF;
F->found_1515 = 0;
F->m_1511 = (*(P830)rt_nil_check(F->y_1510)).members;
while ((F->m_1511 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->m_1511)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->r_1513)).name))->all))) {
F->found_1515 = 1;
}
F->m_1511 = (*(P830)rt_nil_check(F->m_1511)).mnext;
}
if ((!rt_r_echk(F->found_1515))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->r_1513)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all)); b_; }));
}
F->r_1513 = (*(P820)rt_nil_check(F->r_1513)).next;
}
if ((rt_r_ichk((*(P820)rt_nil_check(F->d_411)).ival) == ((rt_int)1LL))) {
F->m_1511 = (*(P830)rt_nil_check(F->y_1510)).members;
while ((F->m_1511 != NULL)) {
F->z_1516 = NULL;
F->z_1516 = f_copy_sym_388(F->m_1511);
(*(P830)rt_nil_check(F->z_1516)).name = f_renamed_405(F->d_411, F->m_1511);
f_define_159(F->z_1516, rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line));
F->m_1511 = (*(P830)rt_nil_check(F->m_1511)).mnext;
}
goto ret_;
}
while ((F->p_1512 != NULL)) {
F->found_1517 = RT_R_EUNDEF;
F->found_1517 = 0;
F->m_1511 = (*(P830)rt_nil_check(F->y_1510)).members;
while ((F->m_1511 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->m_1511)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1512)).name))->all))) {
F->z_1518 = NULL;
F->z_1518 = f_copy_sym_388(F->m_1511);
if ((rt_r_ichk((*(P820)rt_nil_check(F->p_1512)).ival) == ((rt_int)1LL))) {
(*(P830)rt_nil_check(F->z_1518)).ro_flag = 1;
}
(*(P830)rt_nil_check(F->z_1518)).name = f_renamed_405(F->d_411, F->m_1511);
f_define_159(F->z_1518, rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line));
F->found_1517 = 1;
}
F->m_1511 = (*(P830)rt_nil_check(F->m_1511)).mnext;
}
if ((!rt_r_echk(F->found_1517))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_411)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1512)).name))->all), rt_str(" is not exported by ", 20)), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_411)).name))->all)); b_; }));
}
F->p_1512 = (*(P820)rt_nil_check(F->p_1512)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_414(P826 t_413) {
  struct f_finish_ptr_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_413 = t_413;
F->d_1519 = NULL;
F->d_1519 = (*(P826)rt_nil_check(F->t_413)).decl;
F->p_1520 = NULL;
F->c_1521 = NULL;
F->dummy_1522 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1522, rt_str(" ", 1));
if (((*(P826)rt_nil_check(F->t_413)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1524 = ((rt_int)1LL), hi1525 = ((rt_int)2LL);
for (rt_int it1526 = lo1524; it1526 <= hi1525; it1526++) {
F->pass_1523 = it1526;
if ((F->pass_1523 == ((rt_int)1LL))) {
F->p_1520 = (*(P820)rt_nil_check(F->d_1519)).d;
} else {
F->p_1520 = (*(P820)rt_nil_check(F->d_1519)).b;
}
while ((F->p_1520 != NULL)) {
F->y_1527 = NULL;
F->y_1527 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_1520)).name);
F->pc_1528 = NULL;
(*(P830)rt_nil_check(F->y_1527)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1520)).a, &F->pc_1528);
(*(P830)rt_nil_check(F->y_1527)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1527, rt_r_ichk((*(P820)rt_nil_check(F->d_1519)).line));
F->p_1520 = (*(P820)rt_nil_check(F->p_1520)).next;
}
}
}
(*(P826)rt_nil_check(F->t_413)).target = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_1519)).a, &F->c_1521);
f_close_scope_169();
(*rt_str_at(&F->dummy_1522, ((rt_int)1LL))) = rt_str_get(f_ctype_225(F->t_413), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1522, ((rt_int)1LL))) = rt_str_get(f_ctype_225((*(P826)rt_nil_check(F->t_413)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P820 f_ptr_args_416(P822 c_415) {
  struct f_ptr_args_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_415 = c_415;
if ((F->c_415 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P822)rt_nil_check(F->c_415)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_421(P820 formals_417, P820 actuals_418, rstr *cell_419, rt_int line_420) {
  struct f_bind_ptr_params_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_417 = formals_417;
F->actuals_418 = actuals_418;
F->cell_419 = cell_419;
F->line_420 = line_420;
F->p_1529 = NULL;
F->p_1529 = F->formals_417;
F->a_1530 = NULL;
F->a_1530 = F->actuals_418;
F->vt_1531 = NULL;
if ((f_list_len_67(F->formals_417) != f_list_len_67(F->actuals_418))) {
f_fail_23(F->line_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_417))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1529 != NULL)) {
F->pc_1532 = NULL;
F->y_1533 = NULL;
F->y_1533 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_1529)).name);
(*(P830)rt_nil_check(F->y_1533)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1529)).a, &F->pc_1532);
{
F->v_1534 = rt_str_copy(f_gexpr_654(F->a_1530, (*(P830)rt_nil_check(F->y_1533)).t, &F->vt_1531));
F->pv_1535 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_223(F->vt_1531, (*(P830)rt_nil_check(F->y_1533)).t, F->line_420);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P830)rt_nil_check(F->y_1533)).t), rt_str(" ", 1)), F->pv_1535), rt_str(" = ", 3)), f_checked_204((*(P830)rt_nil_check(F->y_1533)).t, F->pc_1532, &F->v_1534)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_419), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_419), rt_str("->p_", 4)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1529)).name))->all))), rt_str(" = ", 3)), F->pv_1535), rt_str(";", 1)); b_; }));
}
(*(P830)rt_nil_check(F->y_1533)).access = f_mk_3(&F->pv_1535);
}
f_define_159(F->y_1533, F->line_420);
F->p_1529 = (*(P820)rt_nil_check(F->p_1529)).next;
F->a_1530 = (*(P820)rt_nil_check(F->a_1530)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_426(P820 s_422, rstr *lv_423, P826 t_424, P822 c_425) {
  struct f_alloc_cell_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_422 = s_422;
F->lv_423 = lv_423;
F->t_424 = t_424;
F->c_425 = c_425;
F->d_1536 = NULL;
F->d_1536 = (*(P826)rt_nil_check(F->t_424)).decl;
F->tc_1537 = NULL;
F->vt_1538 = NULL;
F->pt_1539 = rt_str_copy(f_ctype_225(F->t_424));
F->cell_1540 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315((*(P826)rt_nil_check(F->t_424)).target)) {
F->fn_1541 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_881 = 1;
g_uses_findyn_883 = 1;
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1541), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1541), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P813)rt_nil_check((*(P830)rt_nil_check(g_func_sym_884)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1539), rt_str(")cell_)->all)", 13)); b_; }), (*(P826)rt_nil_check(F->t_424)).target)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1539), rt_str(" ", 1)), F->cell_1540), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1540), rt_str(", ", 2)), F->fn_1541), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1539), rt_str(" ", 1)), F->cell_1540), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1540), rt_str(", ", 2)), F->fn_1541), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1539), rt_str(" ", 1)), F->cell_1540), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1540), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_421((*(P820)rt_nil_check(F->d_1536)).d, f_ptr_args_416(F->c_425), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P820)rt_nil_check(F->s_422)).line));
f_bind_ptr_params_421((*(P820)rt_nil_check(F->d_1536)).b, (*(P820)rt_nil_check(F->s_422)).b, &F->cell_1540, rt_r_ichk((*(P820)rt_nil_check(F->s_422)).line));
F->vt_1538 = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_1536)).a, &F->tc_1537);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1540, rt_str("->all", 5)); b_; }), (*(P826)rt_nil_check(F->t_424)).target, F->tc_1537);
f_close_scope_169();
if (((*(P820)rt_nil_check(F->s_422)).c != NULL)) {
F->v_1542 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->s_422)).c, (*(P826)rt_nil_check(F->t_424)).target, F->tc_1537, &F->vt_1538));
f_check_type_223(F->vt_1538, (*(P826)rt_nil_check(F->t_424)).target, rt_r_ichk((*(P820)rt_nil_check(F->s_422)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1540, rt_str("->all", 5)); b_; }), (*(P826)rt_nil_check(F->t_424)).target, &F->v_1542, F->tc_1537); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_423), rt_str(" = ", 3)), F->cell_1540), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P822 f_freeze_args_430(P822 c_427, P826 t_428, rt_int line_429) {
  struct f_freeze_args_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_427 = c_427;
F->t_428 = t_428;
F->line_429 = line_429;
F->r_1543 = NULL;
F->r_1543 = f_copy_cons_197(F->c_427);
F->p_1544 = NULL;
F->p_1544 = (*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_428)).decl)).d;
F->a_1545 = NULL;
F->a_1545 = (*(P822)rt_nil_check(F->c_427)).args;
F->head_1546 = NULL;
F->tail_1547 = NULL;
F->saved_1548 = NULL;
F->saved_1548 = g_st_field_878;
if ((f_list_len_67(F->p_1544) != f_list_len_67(F->a_1545))) {
f_fail_23(F->line_429, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P826)rt_nil_check(F->t_428)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1544))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1545 != NULL)) {
F->pc_1549 = NULL;
F->vt_1550 = NULL;
F->pt_1551 = NULL;
F->pt_1551 = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1544)).a, &F->pc_1549);
F->nm_1552 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1553 = NULL;
F->y_1553 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1552));
F->n_1554 = NULL;
F->n_1554 = f_nn_61((((rt_int)7LL)), F->line_429);
F->v_1555 = rt_str_copy(f_gexpr_654(F->a_1545, F->pt_1551, &F->vt_1550));
F->access_1556 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225(F->pt_1551); b_; })));
f_check_type_223(F->vt_1550, F->pt_1551, F->line_429);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1556, rt_str(" = ", 3)), f_checked_204(F->pt_1551, F->pc_1549, &F->v_1555)), rt_str(";", 1)); b_; }));
(*(P830)rt_nil_check(F->y_1553)).t = F->pt_1551;
(*(P830)rt_nil_check(F->y_1553)).ro_flag = 1;
f_bind_458(F->y_1553, &F->access_1556);
f_define_159(F->y_1553, F->line_429);
(*(P820)rt_nil_check(F->n_1554)).name = f_mk_3(&F->nm_1552);
f_append_65(&F->head_1546, &F->tail_1547, F->n_1554);
F->a_1545 = (*(P820)rt_nil_check(F->a_1545)).next;
F->p_1544 = (*(P820)rt_nil_check(F->p_1544)).next;
}
(*(P822)rt_nil_check(F->r_1543)).args = F->head_1546;
g_st_field_878 = F->saved_1548;
F->result_ = F->r_1543;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_434(P826 t_431, P822 c_432, P820 src_433) {
  struct f_ptr_subtype_check_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_431 = t_431;
F->c_432 = c_432;
F->src_433 = src_433;
F->lv_1557 = NULL;
F->st_1558 = NULL;
F->sc_1559 = NULL;
F->ro_1560 = RT_R_EUNDEF;
F->cond_1561 = NULL;
F->cond_1561 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1562 = NULL;
F->b_1563 = NULL;
F->at_1564 = NULL;
F->bt_1565 = NULL;
if ((((((rt_r_ichk((*(P826)rt_nil_check(F->t_431)).kind) != (((rt_int)8LL))) || (F->c_432 == NULL)) || ((*(P822)rt_nil_check(F->c_432)).args == NULL)) || (F->src_433 == NULL)) || (!f_is_lvalue_617(F->src_433)))) {
goto ret_;
}
f_lvalue_623(F->src_433, &F->lv_1557, &F->st_1558, &F->sc_1559, &F->ro_1560);
if (((F->sc_1559 == NULL) || ((*(P822)rt_nil_check(F->sc_1559)).args == NULL))) {
goto ret_;
}
F->a_1562 = (*(P822)rt_nil_check(F->c_432)).args;
F->b_1563 = (*(P822)rt_nil_check(F->sc_1559)).args;
while (((F->a_1562 != NULL) && (F->b_1563 != NULL))) {
F->x_1566 = rt_str_copy(f_gexpr_654(F->a_1562, NULL, &F->at_1564));
F->y_1567 = rt_str_copy(f_gexpr_654(F->b_1563, F->at_1564, &F->bt_1565));
F->cond_1561 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->cond_1561))->all), rt_str(" || !", 5)), f_eq_code_368(F->at_1564, &F->x_1566, &F->y_1567)); b_; }));
F->a_1562 = (*(P820)rt_nil_check(F->a_1562)).next;
F->b_1563 = (*(P820)rt_nil_check(F->b_1563)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P813)rt_nil_check(F->cond_1561))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_437(P820 d_435, P830 y_436) {
  struct f_normal_function_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_435 = d_435;
F->y_436 = y_436;
F->p_1568 = NULL;
F->p_1568 = (*(P830)rt_nil_check(F->y_436)).params;
F->imp_1569 = NULL;
F->imp_1569 = (*(P820)rt_nil_check(F->d_435)).d;
if (((rt_r_ichk((*(P820)rt_nil_check(F->d_435)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P820)rt_nil_check(F->d_435)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1568 != NULL)) {
if (((rt_r_ichk((*(P832)rt_nil_check(F->p_1568)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->p_1568)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_435)).name))->all)); b_; }));
}
F->p_1568 = (*(P832)rt_nil_check(F->p_1568)).next;
}
if ((((*(P820)rt_nil_check(F->d_435)).d == NULL) && (rt_r_ichk((*(P820)rt_nil_check(F->d_435)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_875 == NULL) || (rt_r_ichk(g_depth_859) != rt_r_ichk((*(P847)rt_nil_check(g_caps_875)).depth)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_435)).name))->all)); b_; }));
}
while ((F->imp_1569 != NULL)) {
F->ro_1570 = RT_R_EUNDEF;
F->z_1571 = NULL;
F->z_1571 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->imp_1569)).name))->all));
if ((((F->z_1571 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->z_1571)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P830)rt_nil_check(F->z_1571)).depth) != rt_r_ichk((*(P847)rt_nil_check(g_caps_875)).depth)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P813)rt_nil_check((*(P820)rt_nil_check(F->imp_1569)).name))->all)); b_; }));
}
if ((f_exported_386((*(P847)rt_nil_check(g_caps_875)).d, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->imp_1569)).name))->all), &F->ro_1570) && (rt_r_ichk((*(P820)rt_nil_check((*(P847)rt_nil_check(g_caps_875)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_435)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P813)rt_nil_check((*(P820)rt_nil_check(F->imp_1569)).name))->all)); b_; }));
}
F->imp_1569 = (*(P820)rt_nil_check(F->imp_1569)).next;
}
(*(P830)rt_nil_check(F->y_436)).capn = (*(P847)rt_nil_check(g_caps_875)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_439(P820 d_438) {
  struct f_declare_subprogram_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_438 = d_438;
f_define_159(f_build_subprogram_441(F->d_438), rt_r_ichk((*(P820)rt_nil_check(F->d_438)).line));
ret_:
  RT_FPOP();
  return;
}

static P830 f_build_subprogram_441(P820 d_440) {
  struct f_build_subprogram_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_440 = d_440;
F->y_1572 = NULL;
F->p_1573 = NULL;
F->p_1573 = (*(P820)rt_nil_check(F->d_440)).a;
F->tail_1574 = NULL;
if ((rt_r_ichk((*(P820)rt_nil_check(F->d_440)).kind) == (((rt_int)46LL)))) {
F->y_1572 = f_new_sym_172((((rt_int)3LL)), (*(P820)rt_nil_check(F->d_440)).name);
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->d_440)).kind) == (((rt_int)50LL)))) {
F->y_1572 = f_new_sym_172((((rt_int)9LL)), (*(P820)rt_nil_check(F->d_440)).name);
} else {
F->y_1572 = f_new_sym_172((((rt_int)4LL)), (*(P820)rt_nil_check(F->d_440)).name);
}
while ((F->p_1573 != NULL)) {
F->pm_1575 = NULL;
{ R833 *cell1576 = rt_alloc(sizeof(R833));
(*cell1576).name = NULL;
(*cell1576).t = NULL;
(*cell1576).c = NULL;
(*cell1576).cfield = NULL;
(*cell1576).next = NULL;
F->pm_1575 = cell1576;
}
(*(P832)rt_nil_check(F->pm_1575)).name = (*(P820)rt_nil_check(F->p_1573)).name;
(*(P832)rt_nil_check(F->pm_1575)).mode = rt_r_ichk((*(P820)rt_nil_check(F->p_1573)).ival);
(*(P832)rt_nil_check(F->pm_1575)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1573)).a, &(*(P832)rt_nil_check(F->pm_1575)).c);
(*(P832)rt_nil_check(F->pm_1575)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1573)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1574 == NULL)) {
(*(P830)rt_nil_check(F->y_1572)).params = F->pm_1575;
} else {
(*(P832)rt_nil_check(F->tail_1574)).next = F->pm_1575;
}
F->tail_1574 = F->pm_1575;
F->p_1573 = (*(P820)rt_nil_check(F->p_1573)).next;
}
(*(P830)rt_nil_check(F->y_1572)).result = g_ty_void_905;
if (((*(P820)rt_nil_check(F->d_440)).b != NULL)) {
F->rc_1577 = NULL;
F->pm_1578 = NULL;
F->pm_1578 = (*(P830)rt_nil_check(F->y_1572)).params;
F->saved_1579 = NULL;
F->saved_1579 = g_code_870;
g_code_870 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1578 != NULL)) {
F->z_1580 = NULL;
F->z_1580 = f_new_sym_172((((rt_int)2LL)), (*(P832)rt_nil_check(F->pm_1578)).name);
(*(P830)rt_nil_check(F->z_1580)).t = (*(P832)rt_nil_check(F->pm_1578)).t;
(*(P830)rt_nil_check(F->z_1580)).c = (*(P832)rt_nil_check(F->pm_1578)).c;
(*(P830)rt_nil_check(F->z_1580)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1580, rt_r_ichk((*(P820)rt_nil_check(F->d_440)).line));
F->pm_1578 = (*(P832)rt_nil_check(F->pm_1578)).next;
}
(*(P830)rt_nil_check(F->y_1572)).result = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_440)).b, &F->rc_1577);
f_close_scope_169();
g_code_870 = F->saved_1579;
}
(*(P830)rt_nil_check(F->y_1572)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_609(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_440)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P830)rt_nil_check(F->y_1572)).decl = F->d_440;
(*(P830)rt_nil_check(F->y_1572)).level = rt_r_ichk(g_cur_level_873);
if ((rt_r_ichk((*(P820)rt_nil_check(F->d_440)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1572)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1572;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_444(P813 pr_442, rstr *p_443) {
  struct f_has_pragmat_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_442 = pr_442;
F->p_443 = p_443;
if ((F->pr_442 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1582 = ((rt_int)1LL), hi1583 = rt_sub(((rt_int)(((((P813)rt_nil_check(F->pr_442))->all)).len)), ((rt_int)(((*F->p_443)).len)));
for (rt_int it1584 = lo1582; it1584 <= hi1583; it1584++) {
F->i_1581 = it1584;
if (((rt_str_eq(rt_str_slice((((P813)rt_nil_check(F->pr_442))->all), F->i_1581, rt_sub(rt_add(F->i_1581, ((rt_int)(((*F->p_443)).len))), ((rt_int)1LL))), (*F->p_443)) && (rt_r_echk(rt_str_get((((P813)rt_nil_check(F->pr_442))->all), rt_add(F->i_1581, ((rt_int)(((*F->p_443)).len))))) == 59)) && ((F->i_1581 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P813)rt_nil_check(F->pr_442))->all), rt_sub(F->i_1581, ((rt_int)1LL)))) == 59)))) {
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

static P813 f_suppressing_446(P813 pr_445) {
  struct f_suppressing_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_445 = pr_445;
F->r_1585 = NULL;
F->r_1585 = g_suppress_890;
F->i_1586 = RT_R_IUNDEF;
F->i_1586 = ((rt_int)1LL);
if ((F->pr_445 == NULL)) {
F->result_ = F->r_1585;
goto ret_;
}
if ((F->r_1585 == NULL)) {
F->r_1585 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1586), ((rt_int)9LL)) <= ((rt_int)(((((P813)rt_nil_check(F->pr_445))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P813)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->i_1586), rt_add(rt_r_ichk(F->i_1586), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1587 = RT_R_IUNDEF;
F->j_1587 = rt_add(rt_r_ichk(F->i_1586), ((rt_int)9LL));
F->k_1588 = RT_R_IUNDEF;
F->k_1588 = rt_r_ichk(F->j_1587);
while ((rt_r_echk(rt_str_get((((P813)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->k_1588))) != 41)) {
if ((rt_r_echk(rt_str_get((((P813)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->k_1588))) == 44)) {
F->r_1585 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1585))->all), rt_str_slice((((P813)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->j_1587), rt_sub(rt_r_ichk(F->k_1588), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1587 = rt_add(rt_r_ichk(F->k_1588), ((rt_int)1LL));
}
F->k_1588 = rt_add(rt_r_ichk(F->k_1588), ((rt_int)1LL));
}
F->r_1585 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1585))->all), rt_str_slice((((P813)rt_nil_check(F->pr_445))->all), rt_r_ichk(F->j_1587), rt_sub(rt_r_ichk(F->k_1588), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1586 = rt_r_ichk(F->k_1588);
}
F->i_1586 = rt_add(rt_r_ichk(F->i_1586), ((rt_int)1LL));
}
F->result_ = F->r_1585;
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
F->w_1589 = rt_str_new(rt_add(((rt_int)(((*F->x_447)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1589, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_447)), rt_str(" ", 1)));
if ((g_suppress_890 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1591 = ((rt_int)1LL), hi1592 = rt_add(rt_sub(((rt_int)(((((P813)rt_nil_check(g_suppress_890))->all)).len)), ((rt_int)((F->w_1589).len))), ((rt_int)1LL));
for (rt_int it1593 = lo1591; it1593 <= hi1592; it1593++) {
F->i_1590 = it1593;
if (rt_str_eq(rt_str_slice((((P813)rt_nil_check(g_suppress_890))->all), F->i_1590, rt_sub(rt_add(F->i_1590, ((rt_int)((F->w_1589).len))), ((rt_int)1LL))), F->w_1589)) {
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

static void f_element_450(P820 e_449) {
  struct f_element_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_449 = e_449;
F->saved_1594 = NULL;
F->saved_1594 = g_suppress_890;
g_suppress_890 = f_suppressing_446((*(P820)rt_nil_check(F->e_449)).prags);
f_element1_452(F->e_449);
g_suppress_890 = F->saved_1594;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_452(P820 e_451) {
  struct f_element1_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_451 = e_451;
F->k_1595 = RT_R_IUNDEF;
F->k_1595 = rt_r_ichk((*(P820)rt_nil_check(F->e_451)).kind);
if (((rt_r_ichk(F->k_1595) == (((rt_int)48LL))) && ((rt_r_ichk((*(P820)rt_nil_check(F->e_451)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P820)rt_nil_check(F->e_451)).flag) == ((rt_int)3LL))))) {
f_gen_expose_412(F->e_451);
} else if ((((rt_r_ichk(F->k_1595) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1595) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1595) == (((rt_int)50LL))))) {
f_subprogram_468(F->e_451);
} else if ((rt_r_ichk(F->k_1595) == (((rt_int)51LL)))) {
F->g_1596 = NULL;
F->g_1596 = f_lookup_decl_156(F->e_451);
if ((F->g_1596 != NULL)) {
{ P834 cell1597 = rt_alloc(sizeof *cell1597);
rt_int pv1598 = (((rt_int)4093LL));
cell1597->p_n = pv1598;
cell1597->all.lo = ((rt_int)0LL); cell1597->all.hi = pv1598;
cell1597->all.lo2 = cell1597->all.hi2 = 1;
cell1597->all.p = rt_alloc(sizeof(P830) * (size_t)(RT_CNT(cell1597->all)) + 1);
for (rt_int i1599 = 0; i1599 < (RT_CNT(cell1597->all)); i1599++) {
cell1597->all.p[i1599] = NULL;
}
(*(P830)rt_nil_check(F->g_1596)).env = cell1597;
}
{ rt_int lo1601 = ((rt_int)0LL), hi1602 = (((rt_int)4093LL));
for (rt_int it1603 = lo1601; it1603 <= hi1602; it1603++) {
F->i_1600 = it1603;
(((P834)rt_nil_check((*(P830)rt_nil_check(F->g_1596)).env))->all).p[(rt_index(F->i_1600, (((P834)rt_nil_check((*(P830)rt_nil_check(F->g_1596)).env))->all).lo, (((P834)rt_nil_check((*(P830)rt_nil_check(F->g_1596)).env))->all).hi) - (((P834)rt_nil_check((*(P830)rt_nil_check(F->g_1596)).env))->all).lo)] = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(F->i_1600, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1595) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1595) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1595) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1595) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1595) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1595) == (((rt_int)44LL)))) {
f_finish_ptr_414((*(P830)rt_nil_check(f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_451)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1595) == (((rt_int)40LL)))) {
f_var_decl_460(F->e_451);
} else if (((rt_r_ichk(F->k_1595) == (((rt_int)41LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_451)).flag) == ((rt_int)0LL)))) {
f_const_decl_466(F->e_451);
} else if ((rt_r_ichk(F->k_1595) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1595) == (((rt_int)33LL)))) {
F->t_1604 = NULL;
F->c_1605 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_451)).a, g_ty_bool_901, &F->t_1604));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1605), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_499(F->e_451);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_455(rstr *name_453, P826 t_454) {
  struct f_storage_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_453 = name_453;
F->t_454 = t_454;
if ((!rt_r_echk(g_in_func_872))) {
F->g_1606 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_453))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_454)), rt_str(" ", 1)), F->g_1606), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_880, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1606), rt_str(");", 2)); b_; }));
g_st_field_878 = f_mk_3(&F->g_1606);
F->result_ = F->g_1606;
goto ret_;
}
{
F->f_1607 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_453)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_454)), rt_str(" ", 1)), F->f_1607), rt_str(";", 1)); b_; }));
g_st_field_878 = f_mk_3(&F->f_1607);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1607);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_458(P830 y_456, rstr *access_457) {
  struct f_bind_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_456 = y_456;
F->access_457 = access_457;
if (rt_r_echk(g_in_func_872)) {
(*(P830)rt_nil_check(F->y_456)).level = rt_r_ichk(g_cur_level_873);
(*(P830)rt_nil_check(F->y_456)).access = g_st_field_878;
} else {
(*(P830)rt_nil_check(F->y_456)).level = ((rt_int)0LL);
(*(P830)rt_nil_check(F->y_456)).access = f_mk_3(&(*F->access_457));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_460(P820 d_459) {
  struct f_var_decl_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->c_1608 = NULL;
F->t_1609 = NULL;
F->t_1609 = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_459)).a, &F->c_1608);
F->y_1610 = NULL;
F->y_1610 = f_new_sym_172((((rt_int)1LL)), (*(P820)rt_nil_check(F->d_459)).name);
F->access_1611 = rt_str_copy(f_storage_455(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_459)).name))->all), F->t_1609));
F->c_1608 = f_freeze_200(F->c_1608, F->t_1609);
if ((((rt_r_ichk((*(P826)rt_nil_check(F->t_1609)).kind) == (((rt_int)8LL))) && (F->c_1608 != NULL)) && ((*(P822)rt_nil_check(F->c_1608)).args != NULL))) {
F->c_1608 = f_freeze_args_430(F->c_1608, F->t_1609, rt_r_ichk((*(P820)rt_nil_check(F->d_459)).line));
}
g_mark_uninit_892 = 1;
f_init_storage_310(&F->access_1611, F->t_1609, F->c_1608);
g_mark_uninit_892 = 0;
if ((rt_r_ichk((*(P820)rt_nil_check(F->d_459)).ival) == ((rt_int)1LL))) {
F->it_1612 = NULL;
F->n_1613 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->d_459)).c, g_ty_int_900, &F->it_1612));
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1609)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_459)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_212((*(P826)rt_nil_check(F->t_1609)).elem, g_ty_ascii_903)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1611), rt_str(", ", 2)), F->n_1613), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1611), rt_str(", ", 2)), F->n_1613), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->d_459)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->d_459)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P820)rt_nil_check(F->d_459)).b != NULL)) {
F->vt_1614 = NULL;
F->v_1615 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->d_459)).b, F->t_1609, F->c_1608, &F->vt_1614));
f_check_type_223(F->vt_1614, F->t_1609, rt_r_ichk((*(P820)rt_nil_check(F->d_459)).line));
f_ptr_subtype_check_434(F->t_1609, F->c_1608, (*(P820)rt_nil_check(F->d_459)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&F->access_1611, F->t_1609, &F->v_1615, F->c_1608); b_; }));
}
(*(P830)rt_nil_check(F->y_1610)).t = F->t_1609;
(*(P830)rt_nil_check(F->y_1610)).c = F->c_1608;
f_bind_458(F->y_1610, &F->access_1611);
f_define_159(F->y_1610, rt_r_ichk((*(P820)rt_nil_check(F->d_459)).line));
if (f_needs_fin_315(F->t_1609)) {
f_open_fin_462(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1611, F->t_1609); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_462(rstr *fc_461) {
  struct f_open_fin_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_461 = fc_461;
F->f_1616 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1617 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1616), rt_str("; if (RT_TRY(", 13)), F->f_1616), rt_str(")) {", 4)); b_; }));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1616), rt_str("); ", 3)), (*F->fc_461)); b_; }));
{ R825 *cell1618 = rt_alloc(sizeof(R825));
(*cell1618).s = NULL;
(*cell1618).next = NULL;
F->l_1617 = cell1618;
}
(*(P824)rt_nil_check(F->l_1617)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1616), rt_str("); ", 3)), (*F->fc_461)), rt_str(" } else { RT_POP(", 17)), F->f_1616), rt_str("); ", 3)), (*F->fc_461)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P824)rt_nil_check(F->l_1617)).next = g_fins_882;
g_fins_882 = F->l_1617;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_464(P824 saved_463) {
  struct f_close_fins_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_463 = saved_463;
while (((g_fins_882 != F->saved_463) && (g_fins_882 != NULL))) {
f_emit_29(&(((P813)rt_nil_check((*(P824)rt_nil_check(g_fins_882)).s))->all));
f_pop_cleanup_497();
g_fins_882 = (*(P824)rt_nil_check(g_fins_882)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_466(P820 d_465) {
  struct f_const_decl_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_465 = d_465;
F->c_1619 = NULL;
F->c_1619 = f_new_cons_175();
F->t_1620 = NULL;
F->vt_1621 = NULL;
F->y_1622 = NULL;
F->y_1622 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->d_465)).name);
F->ok_1623 = RT_R_EUNDEF;
if (((*(P820)rt_nil_check(F->d_465)).a != NULL)) {
F->t_1620 = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_465)).a, &F->c_1619);
}
{
F->v_1624 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->d_465)).b, F->t_1620, F->c_1619, &F->vt_1621));
if ((F->t_1620 != NULL)) {
f_check_type_223(F->vt_1621, F->t_1620, rt_r_ichk((*(P820)rt_nil_check(F->d_465)).line));
} else {
F->t_1620 = F->vt_1621;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1620)).kind) == (((rt_int)1LL)))) {
(*(P830)rt_nil_check(F->y_1622)).mvalue = f_manifest_333((*(P820)rt_nil_check(F->d_465)).b, &F->ok_1623);
(*(P830)rt_nil_check(F->y_1622)).hasmv = rt_r_echk(F->ok_1623);
}
{
F->access_1625 = rt_str_copy(f_storage_455(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->d_465)).name))->all), F->t_1620));
if (((*(P826)rt_nil_check(F->t_1620)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P826)rt_nil_check(F->t_1620)).initp, &F->access_1625); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1625, rt_str(" = ", 3)), f_checked_204(F->t_1620, F->c_1619, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_1620, &F->v_1624); b_; }))), rt_str(";", 1)); b_; }));
f_bind_458(F->y_1622, &F->access_1625);
if (f_needs_fin_315(F->t_1620)) {
f_open_fin_462(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1625, F->t_1620); b_; }));
}
}
}
(*(P830)rt_nil_check(F->y_1622)).t = F->t_1620;
(*(P830)rt_nil_check(F->y_1622)).c = F->c_1619;
(*(P830)rt_nil_check(F->y_1622)).ro_flag = 1;
f_define_159(F->y_1622, rt_r_ichk((*(P820)rt_nil_check(F->d_465)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_468(P820 d_467) {
  struct f_subprogram_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_467 = d_467;
f_gen_subprogram_471(F->d_467, f_lookup_decl_156(F->d_467));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_471(P820 d_469, P830 y_470) {
  struct f_gen_subprogram_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_469 = d_469;
F->y_470 = y_470;
F->saved_code_1626 = NULL;
F->saved_code_1626 = g_code_870;
F->saved_fields_1627 = NULL;
F->saved_fields_1627 = g_fields_buf_871;
F->saved_in_1628 = RT_R_EUNDEF;
F->saved_in_1628 = rt_r_echk(g_in_func_872);
F->saved_sym_1629 = NULL;
F->saved_sym_1629 = g_func_sym_884;
F->saved_exits_1630 = NULL;
F->saved_exits_1630 = g_exits_893;
F->saved_gotos_1631 = NULL;
F->saved_gotos_1631 = g_gotos_894;
F->saved_frames_1632 = RT_R_IUNDEF;
F->saved_frames_1632 = rt_r_ichk(g_frames_895);
F->args_1633 = NULL;
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1634 = NULL;
F->pm_1634 = (*(P830)rt_nil_check(F->y_470)).params;
F->saved_handlers_1635 = NULL;
F->saved_handlers_1635 = g_handlers_896;
F->saved_cleanups_1636 = NULL;
F->saved_cleanups_1636 = g_cleanups_897;
F->ctx_1637 = NULL;
F->head_1638 = NULL;
F->frame_1639 = NULL;
F->frame_1639 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_470)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1640 = NULL;
F->copy_back_1641 = NULL;
F->copy_back_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1642 = NULL;
F->pfin_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1643 = NULL;
F->saved_fins_1643 = g_fins_882;
F->saved_rc_1644 = NULL;
F->saved_rc_1644 = g_func_rc_885;
F->saved_ret_1645 = NULL;
F->saved_ret_1645 = g_cap_ret_886;
F->saved_rflag_1646 = NULL;
F->saved_rflag_1646 = g_cap_rflag_887;
F->pn_1647 = NULL;
F->pn_1647 = (*(P820)rt_nil_check(F->d_469)).a;
F->nonrec_end_1648 = NULL;
F->has_pfin_1649 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_872)) {
F->parent_1640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(g_func_sym_884)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_882 = NULL;
g_func_rc_885 = NULL;
g_cap_ret_886 = NULL;
g_cap_rflag_887 = NULL;
g_code_870 = f_new_buffer_24();
g_fields_buf_871 = f_new_buffer_24();
g_in_func_872 = 1;
g_func_sym_884 = F->y_470;
g_exits_893 = NULL;
g_gotos_894 = NULL;
g_frames_895 = ((rt_int)0LL);
g_handlers_896 = NULL;
g_cleanups_897 = NULL;
g_cur_level_873 = rt_add(rt_r_ichk(g_cur_level_873), ((rt_int)1LL));
f_open_scope_168();
{ R838 *cell1650 = rt_alloc(sizeof(R838));
(*cell1650).imps = NULL;
(*cell1650).next = NULL;
F->ctx_1637 = cell1650;
}
(*(P837)rt_nil_check(F->ctx_1637)).depth = rt_r_ichk(g_depth_859);
(*(P837)rt_nil_check(F->ctx_1637)).imps = (*(P820)rt_nil_check(F->d_469)).d;
(*(P837)rt_nil_check(F->ctx_1637)).all_imp = (rt_r_ichk((*(P820)rt_nil_check(F->d_469)).flag) >= ((rt_int)2LL));
(*(P837)rt_nil_check(F->ctx_1637)).next = g_fctx_874;
g_fctx_874 = F->ctx_1637;
if ((F->parent_1640 != NULL)) {
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P813)rt_nil_check(F->parent_1640))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check(F->parent_1640))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1634 != NULL)) {
F->ct_1651 = rt_str_copy(f_ctype_225((*(P832)rt_nil_check(F->pm_1634)).t));
F->f_1652 = rt_str_copy((((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_1634)).cfield))->all));
F->p_1653 = NULL;
F->pc_1654 = NULL;
F->pc_1654 = (*(P832)rt_nil_check(F->pm_1634)).c;
F->ac_1655 = NULL;
if ((((rt_int)(((((P813)rt_nil_check(F->args_1633))->all)).len)) > ((rt_int)0LL))) {
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->args_1633))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P832)rt_nil_check(F->pm_1634)).t)) {
F->fc_1656 = NULL;
F->ft_1657 = NULL;
F->ft_1657 = f_resolve_subtype_256((*(P820)rt_nil_check(F->pn_1647)).a, &F->fc_1656);
F->pc_1654 = f_freeze_200(F->fc_1656, (*(P832)rt_nil_check(F->pm_1634)).t);
}
if ((rt_r_ichk((*(P832)rt_nil_check(F->pm_1634)).mode) == (((rt_int)1LL)))) {
F->p_1653 = f_new_sym_172((((rt_int)2LL)), (*(P832)rt_nil_check(F->pm_1634)).name);
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1651), rt_str(" ", 1)), F->f_1652), rt_str(";", 1)); b_; }));
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_1633))->all), F->ct_1651), rt_str(" ", 1)), F->f_1652); b_; }));
(*(P830)rt_nil_check(F->p_1653)).access = f_mk_3(&F->f_1652);
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
if (((*(P826)rt_nil_check((*(P832)rt_nil_check(F->pm_1634)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P826)rt_nil_check((*(P832)rt_nil_check(F->pm_1634)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1652); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str(" = ", 3)), f_checked_204((*(P832)rt_nil_check(F->pm_1634)).t, F->pc_1654, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P832)rt_nil_check(F->pm_1634)).t, &F->f_1652); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_315((*(P832)rt_nil_check(F->pm_1634)).t)) {
F->pfin_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->pfin_1642))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1652); b_; }), (*(P832)rt_nil_check(F->pm_1634)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1653 = f_new_sym_172((((rt_int)1LL)), (*(P832)rt_nil_check(F->pm_1634)).name);
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1651), rt_str(" *", 2)), F->f_1652), rt_str(";", 1)); b_; }));
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_1633))->all), F->ct_1651), rt_str(" *", 2)), F->f_1652); b_; }));
(*(P830)rt_nil_check(F->p_1653)).access = f_mk_3(&F->f_1652);
(*(P830)rt_nil_check(F->p_1653)).byref = 1;
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str(" = ", 3)), F->f_1652), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P832)rt_nil_check(F->pm_1634)).t)) {
F->bt_1658 = rt_str_copy(f_bound_ctype_179((*(P832)rt_nil_check(F->pm_1634)).t));
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1658), rt_str(" ", 1)), F->f_1652), rt_str("lo, ", 4)), F->f_1652), rt_str("hi;", 3)); b_; }));
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_1633))->all), rt_str(", ", 2)), F->bt_1658), rt_str(" ", 1)), F->f_1652), rt_str("lo, ", 4)), F->bt_1658), rt_str(" ", 1)), F->f_1652), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("lo = ", 5)), F->f_1652), rt_str("lo; F->", 7)), F->f_1652), rt_str("hi = ", 5)), F->f_1652), rt_str("hi;", 3)); b_; }));
}
F->ac_1655 = f_new_cons_175();
(*(P822)rt_nil_check(F->ac_1655)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1652, rt_str("lo", 2)); b_; }));
(*(P822)rt_nil_check(F->ac_1655)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1652, rt_str("hi", 2)); b_; }));
(*(P822)rt_nil_check(F->ac_1655)).dyn = 1;
(*(P822)rt_nil_check(F->ac_1655)).lvl = rt_r_ichk(g_cur_level_873);
if (((F->pc_1654 == NULL) || ((*(P822)rt_nil_check(F->pc_1654)).lo == NULL))) {
F->pc_1654 = F->ac_1655;
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->pm_1634)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1652), rt_str("lo <= F->", 9)), F->f_1652), rt_str("hi && (F->", 10)), F->f_1652), rt_str("lo != ", 6)), f_sub_lo_189((*(P832)rt_nil_check(F->pm_1634)).t, F->pc_1654)), rt_str(" || F->", 7)), F->f_1652), rt_str("hi != ", 6)), f_sub_hi_192((*(P832)rt_nil_check(F->pm_1634)).t, F->pc_1654)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->pm_1634)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1651), rt_str(" ", 1)), F->f_1652), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("v = ", 4)), f_copy_code_364((*(P832)rt_nil_check(F->pm_1634)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1652); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P826)rt_nil_check((*(P832)rt_nil_check(F->pm_1634)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P826)rt_nil_check((*(P832)rt_nil_check(F->pm_1634)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1655 == NULL)) {
F->ac_1655 = (*(P832)rt_nil_check(F->pm_1634)).c;
}
if ((!rt_str_eq(f_uninit_value_327(f_base_of_214((*(P832)rt_nil_check(F->pm_1634)).t)), rt_str("", 0)))) {
F->copy_back_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->copy_back_1641))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_219(f_base_of_214((*(P832)rt_nil_check(F->pm_1634)).t))), rt_str("(F->", 4)), F->f_1652), rt_str("v)) ", 4)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1652), rt_str(")", 1)); b_; }), (*(P832)rt_nil_check(F->pm_1634)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("v", 1)); b_; }), F->ac_1655)); b_; }));
} else {
F->copy_back_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->copy_back_1641))->all), rt_str("  ", 2)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1652), rt_str(")", 1)); b_; }), (*(P832)rt_nil_check(F->pm_1634)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("v", 1)); b_; }), F->ac_1655)); b_; }));
}
if (f_needs_fin_315((*(P832)rt_nil_check(F->pm_1634)).t)) {
F->pfin_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->pfin_1642))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1652), rt_str("v", 1)); b_; }), (*(P832)rt_nil_check(F->pm_1634)).t)), rt_str(" ", 1)); b_; }));
}
(*(P830)rt_nil_check(F->p_1653)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1652, rt_str("v", 1)); b_; }));
(*(P830)rt_nil_check(F->p_1653)).byref = 0;
}
}
(*(P830)rt_nil_check(F->p_1653)).t = (*(P832)rt_nil_check(F->pm_1634)).t;
(*(P830)rt_nil_check(F->p_1653)).c = F->pc_1654;
(*(P830)rt_nil_check(F->p_1653)).level = rt_r_ichk(g_cur_level_873);
(*(P830)rt_nil_check(F->p_1653)).ro_flag = ((rt_r_ichk((*(P832)rt_nil_check(F->pm_1634)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->pm_1634)).mode) == (((rt_int)4LL))));
f_define_159(F->p_1653, rt_r_ichk((*(P820)rt_nil_check(F->d_469)).line));
F->pm_1634 = (*(P832)rt_nil_check(F->pm_1634)).next;
F->pn_1647 = (*(P820)rt_nil_check(F->pn_1647)).next;
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_470)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P820)rt_nil_check(F->d_469)).b != NULL)) {
F->rc_1659 = NULL;
F->rt_1660 = NULL;
F->rt_1660 = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_469)).b, &F->rc_1659);
g_func_rc_885 = f_freeze_200(F->rc_1659, (*(P830)rt_nil_check(F->y_470)).result);
}
f_put_27(g_fields_buf_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225((*(P830)rt_nil_check(F->y_470)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_470)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_470)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1649 = (((rt_int)(((((P813)rt_nil_check(F->pfin_1642))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1649)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_444((*(P820)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_444((*(P820)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1661 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1662 = NULL;
F->leave_1662 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1661), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1661), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1661), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_444((*(P820)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_444((*(P820)rt_nil_check(F->d_469)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P813)rt_nil_check((*(P820)rt_nil_check(F->d_469)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->copy_back_1641))->all), rt_str("  ", 2)), (((P813)rt_nil_check(F->leave_1662))->all)); b_; }));
F->nonrec_end_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P813)rt_nil_check(F->leave_1662))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_481((*(P820)rt_nil_check(F->d_469)).c);
f_declare_body_380((*(P820)rt_nil_check(F->d_469)).c);
f_body_elements_490((*(P820)rt_nil_check(F->d_469)).c);
f_close_fins_464(NULL);
if ((F->nonrec_end_1648 != NULL)) {
f_emit_29(&(((P813)rt_nil_check(F->nonrec_end_1648))->all));
f_pop_cleanup_497();
}
if (rt_r_echk(F->has_pfin_1649)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P813)rt_nil_check(F->pfin_1642))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_497();
F->copy_back_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->copy_back_1641))->all), rt_str("  ", 2)), (((P813)rt_nil_check(F->pfin_1642))->all)); b_; }));
}
f_close_scope_169();
g_fctx_874 = (*(P837)rt_nil_check(g_fctx_874)).next;
g_cur_level_873 = rt_sub(rt_r_ichk(g_cur_level_873), ((rt_int)1LL));
if (((((rt_int)(((((P813)rt_nil_check(F->args_1633))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL))))) {
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL)))) {
F->args_1633 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1638 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225((*(P830)rt_nil_check(F->y_470)).result)), rt_str(" ", 1)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_470)).cname))->all)), rt_str("(", 1)), (((P813)rt_nil_check(F->args_1633))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->head_1638))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->head_1638))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_879, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P813)rt_nil_check(F->frame_1639))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_879, g_fields_buf_871);
f_put_27(g_out_frames_879, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_470)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P813)rt_nil_check(F->frame_1639))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P813)rt_nil_check(F->frame_1639))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_867, g_code_870);
if ((rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(F->y_470)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P813)rt_nil_check(F->copy_back_1641))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_867, &(((P813)rt_nil_check(F->copy_back_1641))->all));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P813)rt_nil_check(F->copy_back_1641))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_867, &(((P813)rt_nil_check(F->copy_back_1641))->all));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_870 = F->saved_code_1626;
g_fields_buf_871 = F->saved_fields_1627;
g_in_func_872 = rt_r_echk(F->saved_in_1628);
g_func_sym_884 = F->saved_sym_1629;
g_exits_893 = F->saved_exits_1630;
g_gotos_894 = F->saved_gotos_1631;
g_frames_895 = rt_r_ichk(F->saved_frames_1632);
g_handlers_896 = F->saved_handlers_1635;
g_cleanups_897 = F->saved_cleanups_1636;
g_fins_882 = F->saved_fins_1643;
g_func_rc_885 = F->saved_rc_1644;
g_cap_ret_886 = F->saved_ret_1645;
g_cap_rflag_887 = F->saved_rflag_1646;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_473(P820 d_472) {
  struct f_waits_of_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->w_1663 = NULL;
F->w_1663 = g_cap_waits_876;
while ((F->w_1663 != NULL)) {
if (((*(P849)rt_nil_check(F->w_1663)).d == F->d_472)) {
F->result_ = (((P813)rt_nil_check((*(P849)rt_nil_check(F->w_1663)).w))->all);
goto ret_;
}
F->w_1663 = (*(P849)rt_nil_check(F->w_1663)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_475(P820 elems_474) {
  struct f_task_waits_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_474 = elems_474;
F->e_1664 = NULL;
F->e_1664 = F->elems_474;
F->r_1665 = NULL;
F->r_1665 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1664 != NULL)) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_1664)).kind) == (((rt_int)50LL)))) {
F->r_1665 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1665))->all), rt_str(" rt_await_decl(&", 16)), (((P813)rt_nil_check((*(P830)rt_nil_check(f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_1664)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->e_1664)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P820)rt_nil_check(F->e_1664)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P820)rt_nil_check(F->e_1664)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P820)rt_nil_check(F->e_1664)).flag) == ((rt_int)3LL)))))) {
F->r_1665 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->r_1665))->all), f_waits_of_473(F->e_1664)); b_; }));
}
F->e_1664 = (*(P820)rt_nil_check(F->e_1664)).next;
}
F->result_ = (((P813)rt_nil_check(F->r_1665))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_477(P820 elems_476) {
  struct f_await_tasks_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_476 = elems_476;
F->w_1666 = rt_str_copy(f_task_waits_475(F->elems_476));
if ((((rt_int)((F->w_1666).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1666);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_479(P820 elems_478) {
  struct f_capsule_elements_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_478 = elems_478;
F->e_1667 = NULL;
F->e_1667 = F->elems_478;
while ((F->e_1667 != NULL)) {
if (((rt_r_ichk((*(P820)rt_nil_check(F->e_1667)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_1667)).kind) <= (((rt_int)36LL))))) {
f_start_labels_482();
}
f_element_450(F->e_1667);
F->e_1667 = (*(P820)rt_nil_check(F->e_1667)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_481(P820 elems_480) {
  struct f_declare_labels_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_480 = elems_480;
F->e_1668 = NULL;
F->e_1668 = F->elems_480;
while ((F->e_1668 != NULL)) {
F->l_1669 = NULL;
F->l_1669 = (*(P820)rt_nil_check(F->e_1668)).labels;
while ((F->l_1669 != NULL)) {
F->x_1670 = NULL;
F->x_1670 = g_gotos_894;
while (((F->x_1670 != NULL) && (rt_r_ichk((*(P845)rt_nil_check(F->x_1670)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P813)rt_nil_check((*(P845)rt_nil_check(F->x_1670)).match))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->l_1669)).name))->all))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->l_1669)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P813)rt_nil_check((*(P820)rt_nil_check(F->l_1669)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1670 = (*(P845)rt_nil_check(F->x_1670)).next;
}
{ R846 *cell1671 = rt_alloc(sizeof(R846));
(*cell1671).match = NULL;
(*cell1671).label = NULL;
(*cell1671).next = NULL;
F->x_1670 = cell1671;
}
(*(P845)rt_nil_check(F->x_1670)).match = (*(P820)rt_nil_check(F->l_1669)).name;
(*(P845)rt_nil_check(F->x_1670)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P845)rt_nil_check(F->x_1670)).depth = rt_neg(((rt_int)1LL));
(*(P845)rt_nil_check(F->x_1670)).next = g_gotos_894;
g_gotos_894 = F->x_1670;
F->l_1669 = (*(P820)rt_nil_check(F->l_1669)).next;
}
F->e_1668 = (*(P820)rt_nil_check(F->e_1668)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_482(void) {
  struct f_start_labels_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1672 = NULL;
F->x_1672 = g_gotos_894;
while (((F->x_1672 != NULL) && (rt_r_ichk((*(P845)rt_nil_check(F->x_1672)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P845)rt_nil_check(F->x_1672)).depth = rt_r_ichk(g_frames_895);
F->x_1672 = (*(P845)rt_nil_check(F->x_1672)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P845 f_goto_label_484(rstr *name_483) {
  struct f_goto_label_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_483 = name_483;
F->x_1673 = NULL;
F->x_1673 = g_gotos_894;
while ((F->x_1673 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P845)rt_nil_check(F->x_1673)).match))->all), (*F->name_483))) {
F->result_ = F->x_1673;
goto ret_;
}
F->x_1673 = (*(P845)rt_nil_check(F->x_1673)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_486(P820 e_485) {
  struct f_has_return_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_485 = e_485;
F->x_1674 = NULL;
F->x_1674 = F->e_485;
while ((F->x_1674 != NULL)) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P820)rt_nil_check(F->x_1674)).kind) != (((rt_int)51LL))))) {
if ((((((*(P820)rt_nil_check(F->x_1674)).a != NULL) && f_has_return_486((*(P820)rt_nil_check(F->x_1674)).a)) || (((*(P820)rt_nil_check(F->x_1674)).b != NULL) && f_has_return_486((*(P820)rt_nil_check(F->x_1674)).b))) || (((*(P820)rt_nil_check(F->x_1674)).c != NULL) && f_has_return_486((*(P820)rt_nil_check(F->x_1674)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1674 = (*(P820)rt_nil_check(F->x_1674)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_488(P820 elems_487) {
  struct f_capsule_body_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_487 = elems_487;
F->saved_ret_1675 = NULL;
F->saved_ret_1675 = g_cap_ret_886;
F->saved_flag_1676 = NULL;
F->saved_flag_1676 = g_cap_rflag_887;
F->saved_frames_1677 = RT_R_IUNDEF;
F->saved_frames_1677 = rt_r_ichk(g_ret_frames_888);
F->e_1678 = NULL;
F->e_1678 = F->elems_487;
if ((!f_has_return_486(F->elems_487))) {
g_cap_ret_886 = NULL;
g_cap_rflag_887 = NULL;
f_capsule_elements_479(F->elems_487);
} else {
g_cap_rflag_887 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(g_cap_rflag_887))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1678 != NULL)) {
F->stmt_1679 = RT_R_EUNDEF;
F->stmt_1679 = ((rt_r_ichk((*(P820)rt_nil_check(F->e_1678)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P820)rt_nil_check(F->e_1678)).kind) <= (((rt_int)36LL))));
g_cap_ret_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_888 = rt_r_ichk(g_frames_895);
if (rt_r_echk(F->stmt_1679)) {
f_start_labels_482();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P813)rt_nil_check(g_cap_rflag_887))->all)), rt_str(") {", 3)); b_; }));
}
f_element_450(F->e_1678);
if (rt_r_echk(F->stmt_1679)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(g_cap_ret_886))->all), rt_str(": ;", 3)); b_; }));
F->e_1678 = (*(P820)rt_nil_check(F->e_1678)).next;
}
}
g_cap_ret_886 = F->saved_ret_1675;
g_cap_rflag_887 = F->saved_flag_1676;
g_ret_frames_888 = rt_r_ichk(F->saved_frames_1677);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_490(P820 elems_489) {
  struct f_body_elements_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_489 = elems_489;
f_capsule_elements_479(F->elems_489);
f_await_tasks_477(F->elems_489);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_492(P820 elems_491) {
  struct f_gen_body_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_491 = elems_491;
F->saved_1680 = NULL;
F->saved_1680 = g_fins_882;
F->saved_gotos_1681 = NULL;
F->saved_gotos_1681 = g_gotos_894;
f_open_scope_168();
f_declare_labels_481(F->elems_491);
f_declare_body_380(F->elems_491);
f_body_elements_490(F->elems_491);
f_close_fins_464(F->saved_1680);
f_close_scope_169();
g_gotos_894 = F->saved_gotos_1681;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_494(rt_int upto_493) {
  struct f_pop_frames_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_493 = upto_493;
F->i_1682 = RT_R_IUNDEF;
F->i_1682 = rt_r_ichk(g_frames_895);
F->c_1683 = NULL;
F->c_1683 = g_cleanups_897;
while ((rt_r_ichk(F->i_1682) > F->upto_493)) {
f_emit_29(&(((P813)rt_nil_check((*(P824)rt_nil_check(F->c_1683)).s))->all));
F->c_1683 = (*(P824)rt_nil_check(F->c_1683)).next;
F->i_1682 = rt_sub(rt_r_ichk(F->i_1682), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_496(rstr *s_495) {
  struct f_push_cleanup_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_495 = s_495;
F->c_1684 = NULL;
{ R825 *cell1685 = rt_alloc(sizeof(R825));
(*cell1685).s = NULL;
(*cell1685).next = NULL;
F->c_1684 = cell1685;
}
(*(P824)rt_nil_check(F->c_1684)).s = f_mk_3(&(*F->s_495));
(*(P824)rt_nil_check(F->c_1684)).next = g_cleanups_897;
g_cleanups_897 = F->c_1684;
g_frames_895 = rt_add(rt_r_ichk(g_frames_895), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_497(void) {
  struct f_pop_cleanup_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_897 = (*(P824)rt_nil_check(g_cleanups_897)).next;
g_frames_895 = rt_sub(rt_r_ichk(g_frames_895), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_499(P820 s_498) {
  struct f_gen_statement_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_498 = s_498;
F->label_1686 = NULL;
F->gl_1687 = NULL;
F->gl_1687 = (*(P820)rt_nil_check(F->s_498)).labels;
while ((F->gl_1687 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P845)rt_nil_check(f_goto_label_484(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->gl_1687)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1687 = (*(P820)rt_nil_check(F->gl_1687)).next;
}
if (((*(P820)rt_nil_check(F->s_498)).tag != NULL)) {
F->x_1688 = NULL;
{ R846 *cell1689 = rt_alloc(sizeof(R846));
(*cell1689).match = NULL;
(*cell1689).label = NULL;
(*cell1689).next = NULL;
F->x_1688 = cell1689;
}
F->label_1686 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P845)rt_nil_check(F->x_1688)).match = (*(P820)rt_nil_check(F->s_498)).tag;
(*(P845)rt_nil_check(F->x_1688)).label = F->label_1686;
(*(P845)rt_nil_check(F->x_1688)).depth = rt_r_ichk(g_frames_895);
(*(P845)rt_nil_check(F->x_1688)).next = g_exits_893;
g_exits_893 = F->x_1688;
}
{ rt_int sel1690 = rt_r_ichk((*(P820)rt_nil_check(F->s_498)).kind);
if (0 || (sel1690 == (((rt_int)20LL)))) {
f_st_assign_501(F->s_498);
} else if (0 || (sel1690 == (((rt_int)21LL)))) {
f_st_call_503(F->s_498);
} else if (0 || (sel1690 == (((rt_int)22LL)))) {
f_st_if_505(F->s_498);
} else if (0 || (sel1690 == (((rt_int)23LL)))) {
f_st_case_507(F->s_498);
} else if (0 || (sel1690 == (((rt_int)24LL)))) {
f_st_repeat_509(F->s_498);
} else if (0 || (sel1690 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_492((*(P820)rt_nil_check(F->s_498)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1690 == (((rt_int)27LL)))) {
f_st_exit_511(F->s_498);
} else if (0 || (sel1690 == (((rt_int)29LL)))) {
{
F->x_1691 = NULL;
F->x_1691 = f_goto_label_484(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->s_498)).name))->all));
if ((F->x_1691 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_498)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->s_498)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_494(rt_r_ichk((*(P845)rt_nil_check(F->x_1691)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P813)rt_nil_check((*(P845)rt_nil_check(F->x_1691)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1690 == (((rt_int)28LL)))) {
f_st_return_513(F->s_498);
} else if (0 || (sel1690 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_520(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->s_498)).name))->all), rt_r_ichk((*(P820)rt_nil_check(F->s_498)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1690 == (((rt_int)31LL)))) {
if ((g_handlers_896 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_498)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P813)rt_nil_check((*(P824)rt_nil_check(g_handlers_896)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1690 == (((rt_int)26LL)))) {
f_st_guard_522(F->s_498);
} else if (0 || (sel1690 == (((rt_int)32LL)))) {
f_st_alloc_524(F->s_498);
} else if (0 || (sel1690 == (((rt_int)34LL)))) {
f_st_create_528(F->s_498);
} else if (0 || (sel1690 == (((rt_int)35LL)))) {
f_st_wait_557(F->s_498);
} else if (0 || (sel1690 == (((rt_int)36LL)))) {
f_st_region_565(F->s_498);
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_498)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P820)rt_nil_check(F->s_498)).tag != NULL)) {
g_exits_893 = (*(P845)rt_nil_check(g_exits_893)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->label_1686))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_501(P820 s_500) {
  struct f_st_assign_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_500 = s_500;
F->lv_1692 = NULL;
F->t_1693 = NULL;
F->vt_1694 = NULL;
F->c_1695 = NULL;
F->ro_1696 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).kind) == (((rt_int)10LL))) && ((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b != NULL)) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_623((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).a, &F->lv_1692, &F->t_1693, &F->c_1695, &F->ro_1696);
while ((rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->t_1693);
F->lv_1692 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_615(&(((P813)rt_nil_check(F->lv_1692))->all), F->t_1693); b_; }));
F->t_1693 = (*(P826)rt_nil_check(F->t_1693)).target;
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->t_1693)).tparams == NULL))) {
F->t_1693 = (*(P826)rt_nil_check(F->t_1693)).under;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).kind) == (((rt_int)15LL)))) {
F->lv_1692 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->lv_1692))->all), rt_str(".all", 4)); b_; }));
F->t_1693 = (*(P826)rt_nil_check(F->t_1693)).under;
}
if ((((!rt_r_echk(F->ro_1696)) && (rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).ndim) == ((rt_int)1LL)))) {
F->lo_1697 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b)).a, (*(P826)rt_nil_check(F->t_1693)).idx, &F->vt_1694));
F->hi_1698 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b)).b, (*(P826)rt_nil_check(F->t_1693)).idx, &F->vt_1694));
F->v_1699 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->s_500)).b, F->t_1693, &F->vt_1694));
f_need_slice_635(F->t_1693);
f_check_type_223(F->vt_1694, F->t_1693, rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_1693)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_225(F->t_1693)), rt_str("(", 1)), (((P813)rt_nil_check(F->lv_1692))->all)), rt_str(", ", 2)), F->lo_1697), rt_str(", ", 2)), F->hi_1698), rt_str("); as_", 6)), f_ctype_225(F->t_1693)), rt_str("(&sl_, ", 7)), F->v_1699), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1696) || (rt_r_ichk((*(P826)rt_nil_check(F->t_1693)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1700 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b)).a, g_ty_int_900, &F->vt_1694));
F->hi_1701 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->s_500)).a)).b)).b, g_ty_int_900, &F->vt_1694));
F->v_1702 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->s_500)).b, g_ty_string_904, &F->vt_1694));
f_check_type_223(F->vt_1694, g_ty_string_904, rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P813)rt_nil_check(F->lv_1692))->all)), rt_str(", ", 2)), F->lo_1700), rt_str(", ", 2)), F->hi_1701), rt_str(", ", 2)), F->v_1702), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_623((*(P820)rt_nil_check(F->s_500)).a, &F->lv_1692, &F->t_1693, &F->c_1695, &F->ro_1696);
if (rt_r_echk(F->ro_1696)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_296(F->t_1693)) && (!f_exports_op_402((*(P826)rt_nil_check(F->t_1693)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_1693)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1703 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->s_500)).b, F->t_1693, F->c_1695, &F->vt_1694));
f_check_type_223(F->vt_1694, F->t_1693, rt_r_ichk((*(P820)rt_nil_check(F->s_500)).line));
f_ptr_subtype_check_434(F->t_1693, F->c_1695, (*(P820)rt_nil_check(F->s_500)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&(((P813)rt_nil_check(F->lv_1692))->all), F->t_1693, &F->v_1703, F->c_1695); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_503(P820 s_502) {
  struct f_st_call_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_502 = s_502;
F->c_1704 = NULL;
F->c_1704 = (*(P820)rt_nil_check(F->s_502)).a;
F->t_1705 = NULL;
if (((rt_r_ichk((*(P820)rt_nil_check(F->c_1704)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->c_1704)).kind) == (((rt_int)12LL))))) {
F->x_1706 = NULL;
F->x_1706 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->c_1704)).line));
(*(P820)rt_nil_check(F->x_1706)).a = F->c_1704;
F->c_1704 = F->x_1706;
}
if ((rt_r_ichk((*(P820)rt_nil_check(F->c_1704)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_502)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_784(F->c_1704, 1, &F->t_1705), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_505(P820 s_504) {
  struct f_st_if_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_504 = s_504;
F->a_1707 = NULL;
F->a_1707 = (*(P820)rt_nil_check(F->s_504)).a;
F->first_1708 = RT_R_EUNDEF;
F->first_1708 = 1;
F->t_1709 = NULL;
F->taken_1710 = RT_R_EUNDEF;
F->taken_1710 = 0;
F->ok_1711 = RT_R_EUNDEF;
F->mv_1712 = NULL;
while (((F->a_1707 != NULL) && (!rt_r_echk(F->taken_1710)))) {
F->mv_1712 = f_meval_342((*(P820)rt_nil_check(F->a_1707)).a, &F->ok_1711);
if (((rt_r_echk(F->ok_1711) && (rt_r_ichk((*(P839)rt_nil_check(F->mv_1712)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P839)rt_nil_check(F->mv_1712)).i) == ((rt_int)0LL)))) {
F->a_1707 = (*(P820)rt_nil_check(F->a_1707)).next;
} else {
if ((rt_r_echk(F->ok_1711) && (rt_r_ichk((*(P839)rt_nil_check(F->mv_1712)).kind) == (((rt_int)2LL))))) {
F->taken_1710 = 1;
if (rt_r_echk(F->first_1708)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1713 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->a_1707)).a, g_ty_bool_901, &F->t_1709));
f_check_type_223(F->t_1709, g_ty_bool_901, rt_r_ichk((*(P820)rt_nil_check(F->s_504)).line));
if (rt_r_echk(F->first_1708)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1713), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1713), rt_str(") {", 3)); b_; }));
}
}
F->first_1708 = 0;
f_gen_body_492((*(P820)rt_nil_check(F->a_1707)).b);
F->a_1707 = (*(P820)rt_nil_check(F->a_1707)).next;
}
}
if (((rt_r_ichk((*(P820)rt_nil_check(F->s_504)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1710)))) {
if (rt_r_echk(F->first_1708)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1708 = 0;
f_gen_body_492((*(P820)rt_nil_check(F->s_504)).b);
}
if ((!rt_r_echk(F->first_1708))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_507(P820 s_506) {
  struct f_st_case_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_506 = s_506;
F->st_1714 = NULL;
F->vt_1715 = NULL;
F->first_1716 = RT_R_EUNDEF;
F->first_1716 = 1;
F->a_1717 = NULL;
F->a_1717 = (*(P820)rt_nil_check(F->s_506)).b;
F->sel_1718 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->s_506)).a, NULL, &F->st_1714));
F->tmp_1719 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->st_1714)), rt_str(" ", 1)), F->tmp_1719), rt_str(" = ", 3)), F->sel_1718), rt_str(";", 1)); b_; }));
while ((F->a_1717 != NULL)) {
F->lab_1720 = NULL;
F->lab_1720 = (*(P820)rt_nil_check(F->a_1717)).a;
F->conds_1721 = NULL;
F->conds_1721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1720 != NULL)) {
if (((*(P820)rt_nil_check(F->lab_1720)).b == NULL)) {
F->v_1722 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->lab_1720)).a, F->st_1714, &F->vt_1715));
f_check_type_223(F->vt_1715, F->st_1714, rt_r_ichk((*(P820)rt_nil_check(F->s_506)).line));
F->conds_1721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->conds_1721))->all), rt_str(" || ", 4)), f_eq_code_368(F->st_1714, &F->tmp_1719, &F->v_1722)); b_; }));
} else {
F->lo_1723 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->lab_1720)).a, F->st_1714, &F->vt_1715));
F->hi_1724 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->lab_1720)).b, F->st_1714, &F->vt_1715));
F->conds_1721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->conds_1721))->all), rt_str(" || (", 5)), F->tmp_1719), rt_str(" >= ", 4)), F->lo_1723), rt_str(" && ", 4)), F->tmp_1719), rt_str(" <= ", 4)), F->hi_1724), rt_str(")", 1)); b_; }));
}
F->lab_1720 = (*(P820)rt_nil_check(F->lab_1720)).next;
}
if (rt_r_echk(F->first_1716)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P813)rt_nil_check(F->conds_1721))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P813)rt_nil_check(F->conds_1721))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1716 = 0;
f_gen_body_492((*(P820)rt_nil_check(F->a_1717)).b);
F->a_1717 = (*(P820)rt_nil_check(F->a_1717)).next;
}
if (rt_r_echk(F->first_1716)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P820)rt_nil_check(F->s_506)).flag) == ((rt_int)1LL))) {
f_gen_body_492((*(P820)rt_nil_check(F->s_506)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_509(P820 s_508) {
  struct f_st_repeat_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_508 = s_508;
F->t_1725 = NULL;
F->c_1726 = NULL;
if ((rt_r_ichk((*(P820)rt_nil_check(F->s_508)).flag) == ((rt_int)0LL))) {
F->cond_1727 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->s_508)).a, g_ty_bool_901, &F->t_1725));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1727), rt_str(") {", 3)); b_; }));
f_gen_body_492((*(P820)rt_nil_check(F->s_508)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1725 = f_resolve_subtype_256((*(P820)rt_nil_check(F->s_508)).a, &F->c_1726);
F->c_1726 = f_base_cons_217(F->t_1725, F->c_1726);
if ((((*(P826)rt_nil_check(f_base_of_214(F->t_1725))).kind == (((rt_int)4LL))) && ((*(P822)rt_nil_check(F->c_1726)).lo == NULL))) {
F->c_1726 = f_new_cons_175();
(*(P822)rt_nil_check(F->c_1726)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P822)rt_nil_check(F->c_1726)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(f_base_of_214(F->t_1725))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P822)rt_nil_check(F->c_1726)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_508)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1728 = rt_str_copy(f_storage_455(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->s_508)).name))->all), F->t_1725));
F->lov_1729 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1730 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1731 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1732 = NULL;
F->y_1732 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->s_508)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1729), rt_str(" = ", 3)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_1726)).lo))->all)), rt_str(", ", 2)), F->hiv_1730), rt_str(" = ", 3)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_1726)).hi))->all)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P820)rt_nil_check(F->s_508)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1731), rt_str(" = ", 3)), F->hiv_1730), rt_str("; ", 2)), F->it_1731), rt_str(" >= ", 4)), F->lov_1729), rt_str("; ", 2)), F->it_1731), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1731), rt_str(" = ", 3)), F->lov_1729), rt_str("; ", 2)), F->it_1731), rt_str(" <= ", 4)), F->hiv_1730), rt_str("; ", 2)), F->it_1731), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1728, rt_str(" = ", 3)), F->it_1731), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P830)rt_nil_check(F->y_1732)).t = F->t_1725;
(*(P830)rt_nil_check(F->y_1732)).c = F->c_1726;
f_bind_458(F->y_1732, &F->access_1728);
(*(P830)rt_nil_check(F->y_1732)).ro_flag = 1;
f_define_159(F->y_1732, rt_r_ichk((*(P820)rt_nil_check(F->s_508)).line));
f_gen_body_492((*(P820)rt_nil_check(F->s_508)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_511(P820 s_510) {
  struct f_st_exit_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_510 = s_510;
F->x_1733 = NULL;
F->x_1733 = g_exits_893;
while ((F->x_1733 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P845)rt_nil_check(F->x_1733)).match))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->s_510)).name))->all))) {
f_pop_frames_494(rt_r_ichk((*(P845)rt_nil_check(F->x_1733)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P813)rt_nil_check((*(P845)rt_nil_check(F->x_1733)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1733 = (*(P845)rt_nil_check(F->x_1733)).next;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_510)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P813)rt_nil_check((*(P820)rt_nil_check(F->s_510)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_513(P820 s_512) {
  struct f_st_return_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_512 = s_512;
F->vt_1734 = NULL;
if ((g_cap_ret_886 != NULL)) {
if (((*(P820)rt_nil_check(F->s_512)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_512)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_494(rt_r_ichk(g_ret_frames_888));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(g_cap_rflag_887))->all), rt_str(" = 1; goto ", 11)), (((P813)rt_nil_check(g_cap_ret_886))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_872))) {
f_pop_frames_494(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check((*(P830)rt_nil_check(g_func_sym_884)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P820)rt_nil_check(F->s_512)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_512)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_494(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P820)rt_nil_check(F->s_512)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_512)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1735 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->s_512)).a, (*(P830)rt_nil_check(g_func_sym_884)).result, g_func_rc_885, &F->vt_1734));
f_check_type_223(F->vt_1734, (*(P830)rt_nil_check(g_func_sym_884)).result, rt_r_ichk((*(P820)rt_nil_check(F->s_512)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_517((*(P830)rt_nil_check(g_func_sym_884)).result, g_func_rc_885, &F->v_1735)), rt_str(";", 1)); b_; }));
f_pop_frames_494(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_517(P826 t_514, P822 c_515, rstr *v_516) {
  struct f_result_checked_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_514 = t_514;
F->c_515 = c_515;
F->v_516 = v_516;
if ((F->c_515 == NULL)) {
F->result_ = (*F->v_516);
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_514)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->c_515)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_516)), rt_str(", ", 2)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_515)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->t_514)).kind) == (((rt_int)6LL))) && ((*(P822)rt_nil_check(F->c_515)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->t_514)), rt_str(" r_ = ", 6)), (*F->v_516)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_515)).lo))->all)), rt_str(", ", 2)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_515)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_514, F->c_515, &(*F->v_516));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_520(rstr *name_518, rt_int line_519) {
  struct f_exc_id_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_518 = name_518;
F->line_519 = line_519;
F->y_1736 = NULL;
F->y_1736 = f_lookup_154(&(*F->name_518));
if (((F->y_1736 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1736)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1736)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_518)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_518), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_518)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_519, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_518), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_522(P820 s_521) {
  struct f_st_guard_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_521 = s_521;
F->h_1737 = NULL;
F->h_1737 = (*(P820)rt_nil_check(F->s_521)).b;
F->first_1738 = RT_R_EUNDEF;
F->first_1738 = 1;
F->hv_1739 = NULL;
{
F->f_1740 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1741 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1740), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1740), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1740), rt_str(")) {", 4)); b_; }));
f_gen_body_492((*(P820)rt_nil_check(F->s_521)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1740), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_497();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1740), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1741), rt_str(" = rt_xcur;", 11)); b_; }));
{ R825 *cell1742 = rt_alloc(sizeof(R825));
(*cell1742).s = NULL;
(*cell1742).next = NULL;
F->hv_1739 = cell1742;
}
(*(P824)rt_nil_check(F->hv_1739)).s = f_mk_3(&F->x_1741);
(*(P824)rt_nil_check(F->hv_1739)).next = g_handlers_896;
g_handlers_896 = F->hv_1739;
while ((F->h_1737 != NULL)) {
F->n_1743 = NULL;
F->n_1743 = (*(P820)rt_nil_check(F->h_1737)).a;
F->conds_1744 = NULL;
F->conds_1744 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1743 != NULL)) {
F->conds_1744 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->conds_1744))->all), rt_str(" || ", 4)), F->x_1741), rt_str(" == ", 4)), f_exc_id_520(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->n_1743)).name))->all), rt_r_ichk((*(P820)rt_nil_check(F->s_521)).line))); b_; }));
F->n_1743 = (*(P820)rt_nil_check(F->n_1743)).next;
}
if (rt_r_echk(F->first_1738)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P813)rt_nil_check(F->conds_1744))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P813)rt_nil_check(F->conds_1744))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1738 = 0;
f_gen_body_492((*(P820)rt_nil_check(F->h_1737)).b);
F->h_1737 = (*(P820)rt_nil_check(F->h_1737)).next;
}
if (rt_r_echk(F->first_1738)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P820)rt_nil_check(F->s_521)).flag) == ((rt_int)1LL))) {
f_gen_body_492((*(P820)rt_nil_check(F->s_521)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1741), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_896 = (*(P824)rt_nil_check(g_handlers_896)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_524(P820 s_523) {
  struct f_st_alloc_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_523 = s_523;
F->lv_1745 = NULL;
F->t_1746 = NULL;
F->target_1747 = NULL;
F->vt_1748 = NULL;
F->c_1749 = NULL;
F->tc_1750 = NULL;
F->ro_1751 = RT_R_EUNDEF;
F->d_1752 = NULL;
F->p_1753 = NULL;
F->a_1754 = NULL;
f_lvalue_623((*(P820)rt_nil_check(F->s_523)).a, &F->lv_1745, &F->t_1746, &F->c_1749, &F->ro_1751);
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1746)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_523)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_414(F->t_1746);
F->d_1752 = (*(P826)rt_nil_check(F->t_1746)).decl;
F->target_1747 = (*(P826)rt_nil_check(F->t_1746)).target;
if ((f_list_len_67((*(P820)rt_nil_check(F->s_523)).b) != f_list_len_67((*(P820)rt_nil_check(F->d_1752)).b))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_523)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P820)rt_nil_check(F->d_1752)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P820)rt_nil_check(F->d_1752)).b != NULL)) {
f_alloc_cell_426(F->s_523, &(((P813)rt_nil_check(F->lv_1745))->all), F->t_1746, F->c_1749);
goto ret_;
}
{
F->tcn_1755 = rt_str_copy(f_ctype_225(F->target_1747));
F->cell_1756 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315(F->target_1747)) {
F->fn_1757 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_881 = 1;
g_uses_findyn_883 = 1;
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1757), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1757), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P813)rt_nil_check((*(P830)rt_nil_check(g_func_sym_884)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1755), rt_str(" *)cell_)", 9)); b_; }), F->target_1747)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1755), rt_str(" *", 2)), F->cell_1756), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1755), rt_str("), ", 3)), F->fn_1757), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1755), rt_str(" *", 2)), F->cell_1756), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1755), rt_str("), ", 3)), F->fn_1757), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1755), rt_str(" *", 2)), F->cell_1756), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1755), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_421((*(P820)rt_nil_check(F->d_1752)).d, f_ptr_args_416(F->c_1749), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P820)rt_nil_check(F->s_523)).line));
F->vt_1748 = f_resolve_subtype_256((*(P820)rt_nil_check(F->d_1752)).a, &F->tc_1750);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1756), rt_str(")", 1)); b_; }), F->target_1747, F->tc_1750);
f_close_scope_169();
if (((*(P820)rt_nil_check(F->s_523)).c != NULL)) {
F->v_1758 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->s_523)).c, F->target_1747, F->tc_1750, &F->vt_1748));
f_check_type_223(F->vt_1748, F->target_1747, rt_r_ichk((*(P820)rt_nil_check(F->s_523)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1756), rt_str(")", 1)); b_; }), F->target_1747, &F->v_1758, F->tc_1750); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->lv_1745))->all), rt_str(" = ", 3)), F->cell_1756), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_526(P820 e_525) {
  struct f_act_ref_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_525 = e_525;
F->lv_1759 = NULL;
F->t_1760 = NULL;
F->c_1761 = NULL;
F->ro_1762 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P820)rt_nil_check(F->e_525)).kind) == (((rt_int)7LL))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_525)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_617(F->e_525))) {
F->v_1763 = rt_str_copy(f_gexpr_654(F->e_525, g_ty_act_910, &F->t_1760));
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1760)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_525)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1763;
goto ret_;
}
f_lvalue_623(F->e_525, &F->lv_1759, &F->t_1760, &F->c_1761, &F->ro_1762);
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1760)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_525)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P813)rt_nil_check(F->lv_1759))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_528(P820 s_527) {
  struct f_st_create_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_527 = s_527;
F->y_1764 = NULL;
F->y_1764 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->s_527)).name))->all));
F->pm_1765 = NULL;
F->a_1766 = NULL;
F->a_1766 = (*(P820)rt_nil_check(F->s_527)).b;
F->lv_1767 = NULL;
F->lt_1768 = NULL;
F->vt_1769 = NULL;
F->lc_1770 = NULL;
F->ro_1771 = RT_R_EUNDEF;
if (((F->y_1764 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1764)).kind) == (((rt_int)10LL))))) {
F->y_1764 = f_instantiate_599(F->y_1764, (*(P820)rt_nil_check(F->s_527)).e, (*(P820)rt_nil_check(F->s_527)).b, rt_r_ichk((*(P820)rt_nil_check(F->s_527)).line));
}
if (((F->y_1764 == NULL) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1764)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_527)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->s_527)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1765 = (*(P830)rt_nil_check(F->y_1764)).params;
{
F->at_1772 = NULL;
F->ac_1773 = NULL;
F->aro_1774 = RT_R_EUNDEF;
F->act_1775 = NULL;
F->nf_1776 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_623((*(P820)rt_nil_check(F->s_527)).a, &F->lv_1767, &F->at_1772, &F->ac_1773, &F->aro_1774);
if ((rt_r_ichk((*(P826)rt_nil_check(F->at_1772)).kind) == (((rt_int)14LL)))) {
F->act_1775 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_526((*(P820)rt_nil_check(F->s_527)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1764)).cname))->all)), rt_str("fr *", 4)), F->nf_1776), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1776), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_1764)).level) > ((rt_int)0LL))) {
F->link_1777 = NULL;
F->link_1777 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1779 = ((rt_int)1LL), hi1780 = rt_sub(rt_r_ichk(g_cur_level_873), rt_r_ichk((*(P830)rt_nil_check(F->y_1764)).level));
for (rt_int it1781 = lo1779; it1781 <= hi1780; it1781++) {
F->i_1778 = it1781;
F->link_1777 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->link_1777))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1776, rt_str("->up = ", 7)), (((P813)rt_nil_check(F->link_1777))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1766 != NULL) && (F->pm_1765 != NULL))) {
if ((rt_r_ichk((*(P832)rt_nil_check(F->pm_1765)).mode) == (((rt_int)1LL)))) {
F->v_1782 = rt_str_copy(f_gexpr_in_662(F->a_1766, (*(P832)rt_nil_check(F->pm_1765)).t, (*(P832)rt_nil_check(F->pm_1765)).c, &F->vt_1769));
f_check_type_223(F->vt_1769, (*(P832)rt_nil_check(F->pm_1765)).t, rt_r_ichk((*(P820)rt_nil_check(F->s_527)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1776, rt_str("->", 2)), (((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_1765)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_364((*(P832)rt_nil_check(F->pm_1765)).t, &F->v_1782)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_623(F->a_1766, &F->lv_1767, &F->lt_1768, &F->lc_1770, &F->ro_1771);
f_check_type_223(F->lt_1768, (*(P832)rt_nil_check(F->pm_1765)).t, rt_r_ichk((*(P820)rt_nil_check(F->s_527)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1776, rt_str("->", 2)), (((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_1765)).cfield))->all)), rt_str(" = &", 4)), (((P813)rt_nil_check(F->lv_1767))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P832)rt_nil_check(F->pm_1765)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1776, rt_str("->", 2)), (((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_1765)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1768, F->lc_1770)), rt_str("; ", 2)), F->nf_1776), rt_str("->", 2)), (((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_1765)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1768, F->lc_1770)), rt_str(";", 1)); b_; }));
}
}
F->a_1766 = (*(P820)rt_nil_check(F->a_1766)).next;
F->pm_1765 = (*(P832)rt_nil_check(F->pm_1765)).next;
}
if (((F->a_1766 != NULL) || (F->pm_1765 != NULL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->s_527)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P813)rt_nil_check((*(P820)rt_nil_check(F->s_527)).name))->all)); b_; }));
}
if ((F->act_1775 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P813)rt_nil_check(F->act_1775))->all)), rt_str(", &", 3)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1764)).cname))->all)), rt_str("decl, ", 6)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1764)).cname))->all)), rt_str(", ", 2)), F->nf_1776), rt_str("); }", 4)); b_; }));
} else {
f_user_create_538(F->s_527, F->y_1764, &(((P813)rt_nil_check(F->lv_1767))->all), F->at_1772, &F->nf_1776);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_532(rstr *name_529, P826 t_530, rstr *place_531) {
  struct f_hidden_var_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_529 = name_529;
F->t_530 = t_530;
F->place_531 = place_531;
F->y_1783 = NULL;
F->y_1783 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_529)));
(*(P830)rt_nil_check(F->y_1783)).t = F->t_530;
(*(P830)rt_nil_check(F->y_1783)).level = ((rt_int)0LL);
(*(P830)rt_nil_check(F->y_1783)).access = f_mk_3(&(*F->place_531));
f_define_159(F->y_1783, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_538(P820 s_533, P830 y_534, rstr *uv_535, P826 ut_536, rstr *nf_537) {
  struct f_user_create_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_533 = s_533;
F->y_534 = y_534;
F->uv_535 = uv_535;
F->ut_536 = ut_536;
F->nf_537 = nf_537;
F->t_1784 = NULL;
F->saved_1785 = NULL;
F->saved_1785 = g_code_870;
F->hook_1786 = NULL;
F->hook_1786 = f_new_buffer_24();
F->un_1787 = NULL;
F->un_1787 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line));
F->hn_1788 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1789 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1790 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1791 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_532(&F->uname_1790, F->ut_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->ut_536)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P820)rt_nil_check(F->un_1787)).name = f_mk_3(&F->uname_1790);
g_code_870 = F->hook_1786;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1787, rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line)), 1, &F->t_1784)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1787, rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line)), 1, &F->t_1784)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1787, rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line)), 1, &F->t_1784)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1787, rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line)), 1, &F->t_1784)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_870 = F->saved_1785;
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1788), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1788), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P813)rt_nil_check((*(P830)rt_nil_check(g_func_sym_884)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_867, F->hook_1786);
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1789), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1789, rt_str("->hook = ", 9)), F->hn_1788), rt_str("; ", 2)), F->aa_1789), rt_str("->ua = &", 8)), (*F->uv_535)), rt_str("; ", 2)), F->aa_1789), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_774(F->ut_536)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_872)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1789, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1789), rt_str(", &", 3)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_534)).cname))->all)), rt_str("decl, ", 6)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_534)).cname))->all)), rt_str(", ", 2)), (*F->nf_537)), rt_str(");", 2)); b_; }));
f_hidden_var_532(&F->aname_1791, g_ty_act_910, &F->aa_1789);
{
F->start_1792 = NULL;
F->start_1792 = f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P820)rt_nil_check(F->s_533)).a, rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line));
F->an_1793 = NULL;
F->an_1793 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->s_533)).line));
(*(P820)rt_nil_check(F->an_1793)).name = f_mk_3(&F->aname_1791);
(*(P820)rt_nil_check((*(P820)rt_nil_check(F->start_1792)).b)).next = F->an_1793;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_784(F->start_1792, 1, &F->t_1784), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_543(P820 inv_539, rstr *arr_540, rt_int i_541, int mixed_542) {
  struct f_wait_alt_543fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_539 = inv_539;
F->arr_540 = arr_540;
F->i_541 = i_541;
F->mixed_542 = mixed_542;
F->lv_1794 = NULL;
F->t_1795 = NULL;
F->vt_1796 = NULL;
F->c_1797 = NULL;
F->ro_1798 = RT_R_EUNDEF;
F->fn_1799 = NULL;
F->args_1800 = NULL;
F->slot_1801 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_540), rt_str("[", 1)), f_itos_7(F->i_541)), rt_str("]", 1)));
if (((rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_539)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1799 = (*(P820)rt_nil_check(F->inv_539)).a;
F->args_1800 = (*(P820)rt_nil_check(F->inv_539)).b;
if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_623(F->args_1800, &F->lv_1794, &F->t_1795, &F->c_1797, &F->ro_1798);
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1795)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1802 = NULL;
F->dt_1803 = NULL;
f_lvalue_623((*(P820)rt_nil_check(F->args_1800)).next, &F->dv_1802, &F->dt_1803, &F->c_1797, &F->ro_1798);
f_check_type_223(F->dt_1803, (*(P826)rt_nil_check(F->t_1795)).elem, rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P813)rt_nil_check(F->lv_1794))->all)), rt_str(", &", 3)), (((P813)rt_nil_check(F->dv_1802))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1804 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1805 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_1800)).next, (*(P826)rt_nil_check(F->t_1795)).elem, &F->vt_1796));
f_check_type_223(F->vt_1796, (*(P826)rt_nil_check(F->t_1795)).elem, rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P826)rt_nil_check(F->t_1795)).elem), rt_str(" ", 1)), F->tmp_1804), rt_str(" = ", 3)), F->v_1805), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P813)rt_nil_check(F->lv_1794))->all)), rt_str(", &", 3)), F->tmp_1804), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1806 = rt_str_copy(f_gexpr_654(F->args_1800, g_ty_int_900, &F->vt_1796));
if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("DELAY", 5)) && F->mixed_542)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1806), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1806), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1806), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1801, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_526(F->args_1800)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->inv_539)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_1799)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_545(P820 inv_544) {
  struct f_builtin_wait_545fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_544 = inv_544;
F->lv_1807 = NULL;
F->t_1808 = NULL;
F->c_1809 = NULL;
F->ro_1810 = RT_R_EUNDEF;
F->saved_1811 = NULL;
F->saved_1811 = g_code_870;
F->ok_1812 = RT_R_EUNDEF;
F->ok_1812 = 0;
if (((rt_r_ichk((*(P820)rt_nil_check(F->inv_544)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_544)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = f_new_buffer_24();
{ rt_frame xf1813;
if (RT_TRY(xf1813)) {
f_lvalue_623((*(P820)rt_nil_check(F->inv_544)).b, &F->lv_1807, &F->t_1808, &F->c_1809, &F->ro_1810);
F->ok_1812 = (rt_r_ichk((*(P826)rt_nil_check(F->t_1808)).kind) == (((rt_int)12LL)));
RT_POP(xf1813);
} else {
RT_POP(xf1813);
int x1814 = rt_xcur;
if (0 || x1814 == ex_compile_error_1) {
F->ok_1812 = 0;
} else {
rt_raise(x1814);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = F->saved_1811;
F->result_ = rt_r_echk(F->ok_1812);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_550(P820 inv_546, rstr *op_547, rstr *q_548, int is_stmt_549) {
  struct f_wait_op_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_546 = inv_546;
F->op_547 = op_547;
F->q_548 = q_548;
F->is_stmt_549 = is_stmt_549;
F->x_1815 = NULL;
F->x_1815 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->inv_546)).line));
F->f_1816 = NULL;
F->f_1816 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->inv_546)).line));
F->qn_1817 = NULL;
F->qn_1817 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->inv_546)).line));
F->t_1818 = NULL;
(*(P820)rt_nil_check(F->f_1816)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_546)).a)).name))->all), rt_str("_", 1)), (*F->op_547)); b_; }));
(*(P820)rt_nil_check(F->qn_1817)).name = f_mk_3(&(*F->q_548));
(*(P820)rt_nil_check(F->qn_1817)).next = (*(P820)rt_nil_check(F->inv_546)).b;
(*(P820)rt_nil_check(F->x_1815)).a = F->f_1816;
(*(P820)rt_nil_check(F->x_1815)).b = F->qn_1817;
{
F->r_1819 = rt_str_copy(f_gcall_784(F->x_1815, F->is_stmt_549, &F->t_1818));
if ((!F->is_stmt_549)) {
f_check_type_223(F->t_1818, g_ty_bool_901, rt_r_ichk((*(P820)rt_nil_check(F->inv_546)).line));
}
F->result_ = F->r_1819;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_555(P820 s_551, rstr *arr_552, rstr *w_553, rt_int n_554) {
  struct f_user_wait_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_551 = s_551;
F->arr_552 = arr_552;
F->w_553 = w_553;
F->n_554 = n_554;
F->a_1820 = NULL;
F->a_1820 = (*(P820)rt_nil_check(F->s_551)).a;
F->i_1821 = RT_R_IUNDEF;
F->i_1821 = ((rt_int)0LL);
F->tests_1822 = NULL;
F->tests_1822 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1823 = NULL;
F->revokes_1823 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1820 != NULL)) {
F->inv_1824 = NULL;
F->inv_1824 = (*(P820)rt_nil_check(F->a_1820)).a;
while ((F->inv_1824 != NULL)) {
if (f_builtin_wait_545(F->inv_1824)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_543(F->inv_1824, &(*F->arr_552), rt_r_ichk(F->i_1821), 1); b_; }));
} else {
F->st_1825 = NULL;
F->st_1825 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->inv_1824)).line));
F->c_1826 = NULL;
F->qt_1827 = NULL;
F->qname_1828 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1829 = NULL;
F->y_1829 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1828));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_552), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1821))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P820)rt_nil_check(F->st_1825)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->inv_1824)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1827 = f_resolve_subtype_256(F->st_1825, &F->c_1826);
{
F->access_1830 = rt_str_copy(f_storage_455(&F->qname_1828, F->qt_1827));
f_init_storage_310(&F->access_1830, F->qt_1827, F->c_1826);
(*(P830)rt_nil_check(F->y_1829)).t = F->qt_1827;
(*(P830)rt_nil_check(F->y_1829)).c = F->c_1826;
f_bind_458(F->y_1829, &F->access_1830);
f_define_159(F->y_1829, rt_r_ichk((*(P820)rt_nil_check(F->inv_1824)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_550(F->inv_1824, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1828, 1), rt_str(";", 1)); b_; }));
F->tests_1822 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->tests_1822))->all), rt_str("if (", 4)), f_wait_op_550(F->inv_1824, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1828, 0)), rt_str(") { ", 4)), f_wait_op_550(F->inv_1824, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1828, 1)), rt_str("; ", 2)), (*F->w_553)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1821))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1823 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->revokes_1823))->all), f_wait_op_550(F->inv_1824, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1828, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1821 = rt_add(rt_r_ichk(F->i_1821), ((rt_int)1LL));
F->inv_1824 = (*(P820)rt_nil_check(F->inv_1824)).next;
}
F->a_1820 = (*(P820)rt_nil_check(F->a_1820)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_553)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P813)rt_nil_check(F->tests_1822))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_553), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_554)), rt_str(", ", 2)), (*F->arr_552)), rt_str("); if (", 7)), (*F->w_553)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_554)), rt_str(", ", 2)), (*F->arr_552)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_553)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_553)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P813)rt_nil_check(F->revokes_1823))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_557(P820 s_556) {
  struct f_st_wait_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_556 = s_556;
F->a_1831 = NULL;
F->a_1831 = (*(P820)rt_nil_check(F->s_556)).a;
F->n_1832 = RT_R_IUNDEF;
F->n_1832 = ((rt_int)0LL);
F->first_1833 = RT_R_EUNDEF;
F->first_1833 = 1;
F->inits_1834 = NULL;
F->inits_1834 = f_new_buffer_24();
F->user_1835 = RT_R_EUNDEF;
F->user_1835 = 0;
F->arr_1836 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1837 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1831 != NULL)) {
F->inv_1838 = NULL;
F->inv_1838 = (*(P820)rt_nil_check(F->a_1831)).a;
F->n_1832 = rt_add(rt_r_ichk(F->n_1832), f_list_len_67((*(P820)rt_nil_check(F->a_1831)).a));
while ((F->inv_1838 != NULL)) {
if ((!f_builtin_wait_545(F->inv_1838))) {
F->user_1835 = 1;
}
F->inv_1838 = (*(P820)rt_nil_check(F->inv_1838)).next;
}
F->a_1831 = (*(P820)rt_nil_check(F->a_1831)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1836), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1832))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1835)) {
f_user_wait_555(F->s_556, &F->arr_1836, &F->w_1837, rt_r_ichk(F->n_1832));
} else {
F->a_1831 = (*(P820)rt_nil_check(F->s_556)).a;
F->n_1832 = ((rt_int)0LL);
while ((F->a_1831 != NULL)) {
F->inv_1839 = NULL;
F->inv_1839 = (*(P820)rt_nil_check(F->a_1831)).a;
while ((F->inv_1839 != NULL)) {
f_put_27(F->inits_1834, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_543(F->inv_1839, &F->arr_1836, rt_r_ichk(F->n_1832), 0); b_; }));
F->n_1832 = rt_add(rt_r_ichk(F->n_1832), ((rt_int)1LL));
F->inv_1839 = (*(P820)rt_nil_check(F->inv_1839)).next;
}
F->a_1831 = (*(P820)rt_nil_check(F->a_1831)).next;
}
f_splice_34(g_code_870, F->inits_1834);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1837), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1832))), rt_str(", ", 2)), F->arr_1836), rt_str(");", 2)); b_; }));
}
F->a_1831 = (*(P820)rt_nil_check(F->s_556)).a;
F->n_1832 = ((rt_int)0LL);
while ((F->a_1831 != NULL)) {
F->conds_1840 = NULL;
F->conds_1840 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1842 = ((rt_int)1LL), hi1843 = f_list_len_67((*(P820)rt_nil_check(F->a_1831)).a);
for (rt_int it1844 = lo1842; it1844 <= hi1843; it1844++) {
F->i_1841 = it1844;
F->conds_1840 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->conds_1840))->all), rt_str(" || ", 4)), F->w_1837), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1832))); b_; }));
F->n_1832 = rt_add(rt_r_ichk(F->n_1832), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1833)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P813)rt_nil_check(F->conds_1840))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P813)rt_nil_check(F->conds_1840))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1833 = 0;
f_gen_body_492((*(P820)rt_nil_check(F->a_1831)).b);
F->a_1831 = (*(P820)rt_nil_check(F->a_1831)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P820 f_call_node_561(rstr *name_558, P820 arg_559, rt_int line_560) {
  struct f_call_node_561fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_558 = name_558;
F->arg_559 = arg_559;
F->line_560 = line_560;
F->x_1845 = NULL;
F->x_1845 = f_nn_61((((rt_int)10LL)), F->line_560);
F->f_1846 = NULL;
F->f_1846 = f_nn_61((((rt_int)7LL)), F->line_560);
(*(P820)rt_nil_check(F->f_1846)).name = f_mk_3(&(*F->name_558));
(*(P820)rt_nil_check(F->x_1845)).a = F->f_1846;
(*(P820)rt_nil_check(F->x_1845)).b = f_copy_node_675(F->arg_559);
(*(P820)rt_nil_check((*(P820)rt_nil_check(F->x_1845)).b)).next = NULL;
F->result_ = F->x_1845;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_563(P820 s_562) {
  struct f_user_region_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_562 = s_562;
F->t_1847 = NULL;
F->f_1848 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1849 = rt_str_copy(f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P820)rt_nil_check(F->s_562)).a, rt_r_ichk((*(P820)rt_nil_check(F->s_562)).line)), 1, &F->t_1847));
F->unlock_1850 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_784(f_call_node_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P820)rt_nil_check(F->s_562)).a, rt_r_ichk((*(P820)rt_nil_check(F->s_562)).line)), 1, &F->t_1847)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1849), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1848), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1848), rt_str(")) {", 4)); b_; }));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1848), rt_str("); ", 3)), F->unlock_1850); b_; }));
f_gen_body_492((*(P820)rt_nil_check(F->s_562)).b);
f_pop_cleanup_497();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1848), rt_str("); ", 3)), F->unlock_1850); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1848), rt_str("); ", 3)), F->unlock_1850), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_565(P820 s_564) {
  struct f_st_region_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_564 = s_564;
F->lv_1851 = NULL;
F->t_1852 = NULL;
F->c_1853 = NULL;
F->ro_1854 = RT_R_EUNDEF;
F->lk_1855 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1856 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_623((*(P820)rt_nil_check(F->s_564)).a, &F->lv_1851, &F->t_1852, &F->c_1853, &F->ro_1854);
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_1852)).kind) != (((rt_int)13LL)))) {
f_user_region_563(F->s_564);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1855), rt_str(" = &", 4)), (((P813)rt_nil_check(F->lv_1851))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1855), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1856), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1856), rt_str(")) {", 4)); b_; }));
f_push_cleanup_496(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1856), rt_str("); rt_region_leave(", 19)), F->lk_1855), rt_str(");", 2)); b_; }));
f_gen_body_492((*(P820)rt_nil_check(F->s_564)).b);
f_pop_cleanup_497();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1856), rt_str("); rt_region_leave(", 19)), F->lk_1855), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1856), rt_str("); rt_region_leave(", 19)), F->lk_1855), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P820 f_gparam_568(P820 g_566, rstr *name_567) {
  struct f_gparam_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_566 = g_566;
F->name_567 = name_567;
F->p_1857 = NULL;
F->p_1857 = (*(P820)rt_nil_check(F->g_566)).a;
while ((F->p_1857 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1857)).name))->all), (*F->name_567))) {
F->result_ = F->p_1857;
goto ret_;
}
F->p_1857 = (*(P820)rt_nil_check(F->p_1857)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_bind_sym_570(P820 p_569) {
  struct f_bind_sym_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_569 = p_569;
F->y_1858 = NULL;
if ((rt_r_ichk((*(P820)rt_nil_check(F->p_569)).ival) <= ((rt_int)2LL))) {
F->y_1858 = f_new_sym_172((((rt_int)5LL)), (*(P820)rt_nil_check(F->p_569)).name);
} else {
F->y_1858 = f_new_sym_172((((rt_int)2LL)), (*(P820)rt_nil_check(F->p_569)).name);
}
F->result_ = F->y_1858;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_573(P830 a_571, P830 b_572) {
  struct f_same_binds_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_571 = a_571;
F->b_572 = b_572;
F->x_1859 = NULL;
F->x_1859 = F->a_571;
F->y_1860 = NULL;
F->y_1860 = F->b_572;
while (((F->x_1859 != NULL) && (F->y_1860 != NULL))) {
if (((!rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->x_1859)).name))->all), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_1860)).name))->all))) || (!f_same_binding_576(F->x_1859, F->y_1860)))) {
F->result_ = 0;
goto ret_;
}
F->x_1859 = (*(P830)rt_nil_check(F->x_1859)).mnext;
F->y_1860 = (*(P830)rt_nil_check(F->y_1860)).mnext;
}
F->result_ = ((F->x_1859 == NULL) && (F->y_1860 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_576(P830 a_574, P830 b_575) {
  struct f_same_binding_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_574 = a_574;
F->b_575 = b_575;
if ((rt_r_ichk((*(P830)rt_nil_check(F->a_574)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P830)rt_nil_check(F->b_575)).kind) == (((rt_int)5LL))) && f_same_212((*(P830)rt_nil_check(F->a_574)).t, (*(P830)rt_nil_check(F->b_575)).t));
goto ret_;
}
if (((rt_r_ichk((*(P830)rt_nil_check(F->a_574)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P830)rt_nil_check(F->a_574)).hasmv))) {
F->result_ = (rt_r_echk((*(P830)rt_nil_check(F->b_575)).hasmv) && (rt_r_ichk((*(P830)rt_nil_check(F->a_574)).mvalue) == rt_r_ichk((*(P830)rt_nil_check(F->b_575)).mvalue)));
goto ret_;
}
F->result_ = ((((*(P830)rt_nil_check(F->a_574)).cname != NULL) && ((*(P830)rt_nil_check(F->b_575)).cname != NULL)) && rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->a_574)).cname))->all), (((P813)rt_nil_check((*(P830)rt_nil_check(F->b_575)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_tt_binds_581(P820 gd_577, P820 formals_578, P820 actuals_579, rt_int line_580) {
  struct f_tt_binds_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_577 = gd_577;
F->formals_578 = formals_578;
F->actuals_579 = actuals_579;
F->line_580 = line_580;
F->f_1861 = NULL;
F->f_1861 = F->formals_578;
F->a_1862 = NULL;
F->a_1862 = F->actuals_579;
F->binds_1863 = NULL;
F->c_1864 = NULL;
F->at_1865 = NULL;
while (((F->f_1861 != NULL) && (F->a_1862 != NULL))) {
F->p_1866 = NULL;
F->p_1866 = f_gparam_568(F->gd_577, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->f_1861)).name))->all));
F->b_1867 = NULL;
if ((F->p_1866 == NULL)) {
f_fail_23(F->line_580, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->f_1861)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1867 = f_bind_sym_570(F->p_1866);
if ((rt_r_ichk((*(P820)rt_nil_check(F->p_1866)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->a_1862)).kind) >= (((rt_int)70LL)))) {
(*(P830)rt_nil_check(F->b_1867)).t = f_resolve_subtype_256(F->a_1862, &F->c_1864);
} else {
F->st_1868 = NULL;
F->st_1868 = f_nn_61((((rt_int)80LL)), F->line_580);
(*(P820)rt_nil_check(F->st_1868)).name = (*(P820)rt_nil_check(F->a_1862)).name;
(*(P830)rt_nil_check(F->b_1867)).t = f_resolve_subtype_256(F->st_1868, &F->c_1864);
}
(*(P830)rt_nil_check(F->b_1867)).c = F->c_1864;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->p_1866)).ival) <= ((rt_int)5LL))) {
if (((rt_r_ichk((*(P820)rt_nil_check(F->a_1862)).kind) != (((rt_int)7LL))) || (f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->a_1862)).name))->all)) == NULL))) {
f_fail_23(F->line_580, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1866)).name))->all)); b_; }));
}
F->b_1867 = f_copy_sym_388(f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->a_1862)).name))->all)));
(*(P830)rt_nil_check(F->b_1867)).name = (*(P820)rt_nil_check(F->p_1866)).name;
} else {
F->ok_1869 = RT_R_EUNDEF;
(*(P830)rt_nil_check(F->b_1867)).t = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1866)).a, &F->c_1864);
(*(P830)rt_nil_check(F->b_1867)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_654(F->a_1862, (*(P830)rt_nil_check(F->b_1867)).t, &F->at_1865); b_; }));
(*(P830)rt_nil_check(F->b_1867)).mvalue = f_manifest_333(F->a_1862, &F->ok_1869);
(*(P830)rt_nil_check(F->b_1867)).hasmv = rt_r_echk(F->ok_1869);
}
(*(P830)rt_nil_check(F->b_1867)).mnext = F->binds_1863;
F->binds_1863 = F->b_1867;
F->f_1861 = (*(P820)rt_nil_check(F->f_1861)).next;
F->a_1862 = (*(P820)rt_nil_check(F->a_1862)).next;
}
F->result_ = F->binds_1863;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_583(P820 st_582) {
  struct f_generic_use_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_582 = st_582;
if ((rt_r_ichk((*(P820)rt_nil_check(F->st_582)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P830)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P820)rt_nil_check(F->st_582)).kind) == (((rt_int)80LL))) && ((*(P820)rt_nil_check(F->st_582)).a != NULL)) && (f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->st_582)).name))->all)) != NULL)) && ((*(P830)rt_nil_check(f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->st_582)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_infer_from_588(P820 gd_584, P820 pat_585, P826 t_586, P830 known_587) {
  struct f_infer_from_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_584 = gd_584;
F->pat_585 = pat_585;
F->t_586 = t_586;
F->known_587 = known_587;
F->binds_1870 = NULL;
F->binds_1870 = F->known_587;
F->e_1871 = NULL;
F->e_1871 = (*(P820)rt_nil_check(F->pat_585)).a;
F->tp_1872 = NULL;
if (((F->t_586 == NULL) || ((*(P826)rt_nil_check(F->t_586)).gen == NULL))) {
F->result_ = F->binds_1870;
goto ret_;
}
F->tp_1872 = (*(P820)rt_nil_check((*(P830)rt_nil_check((*(P826)rt_nil_check(F->t_586)).gen)).decl)).a;
if ((rt_r_ichk((*(P820)rt_nil_check(F->pat_585)).kind) == (((rt_int)78LL)))) {
F->e_1871 = f_copy_node_675((*(P820)rt_nil_check(F->pat_585)).a);
(*(P820)rt_nil_check(F->e_1871)).next = NULL;
}
while (((F->e_1871 != NULL) && (F->tp_1872 != NULL))) {
F->nm_1873 = NULL;
if (((rt_r_ichk((*(P820)rt_nil_check(F->e_1871)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->e_1871)).kind) == (((rt_int)80LL))))) {
F->nm_1873 = (*(P820)rt_nil_check(F->e_1871)).name;
}
if ((((F->nm_1873 != NULL) && (f_gparam_568(F->gd_584, &(((P813)rt_nil_check(F->nm_1873))->all)) != NULL)) && ((*(P820)rt_nil_check(f_gparam_568(F->gd_584, &(((P813)rt_nil_check(F->nm_1873))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1874 = NULL;
F->q_1874 = F->binds_1870;
F->have_1875 = RT_R_EUNDEF;
F->have_1875 = 0;
while ((F->q_1874 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->q_1874)).name))->all), (((P813)rt_nil_check(F->nm_1873))->all))) {
F->have_1875 = 1;
}
F->q_1874 = (*(P830)rt_nil_check(F->q_1874)).mnext;
}
if ((!rt_r_echk(F->have_1875))) {
F->g_1876 = NULL;
F->g_1876 = (*(P826)rt_nil_check(F->t_586)).gbinds;
while ((F->g_1876 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->g_1876)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->tp_1872)).name))->all))) {
F->b_1877 = NULL;
F->b_1877 = f_bind_sym_570(f_gparam_568(F->gd_584, &(((P813)rt_nil_check(F->nm_1873))->all)));
(*(P830)rt_nil_check(F->b_1877)).t = (*(P830)rt_nil_check(F->g_1876)).t;
(*(P830)rt_nil_check(F->b_1877)).c = (*(P830)rt_nil_check(F->g_1876)).c;
(*(P830)rt_nil_check(F->b_1877)).mnext = F->binds_1870;
F->binds_1870 = F->b_1877;
}
F->g_1876 = (*(P830)rt_nil_check(F->g_1876)).mnext;
}
}
}
F->e_1871 = (*(P820)rt_nil_check(F->e_1871)).next;
F->tp_1872 = (*(P820)rt_nil_check(F->tp_1872)).next;
}
F->result_ = F->binds_1870;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_instantiate_type_594(P830 g_589, P820 tt_590, P820 args_591, P822 *c_592, rt_int line_593) {
  struct f_instantiate_type_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_589 = g_589;
F->tt_590 = tt_590;
F->args_591 = args_591;
F->c_592 = c_592;
F->c_592v = *F->c_592;
F->line_593 = line_593;
F->gd_1878 = NULL;
F->gd_1878 = (*(P830)rt_nil_check(F->g_589)).decl;
F->pat_1879 = NULL;
F->pat_1879 = (*(P820)rt_nil_check(F->gd_1878)).b;
F->binds_1880 = NULL;
F->binds_1880 = f_tt_binds_581(F->gd_1878, (*(P820)rt_nil_check(F->pat_1879)).e, F->tt_590, F->line_593);
F->inst_1881 = NULL;
F->inst_1881 = g_all_insts_858;
F->t_1882 = NULL;
F->saved_caps_1883 = NULL;
F->saved_caps_1883 = g_caps_875;
F->saved_env_1884 = NULL;
F->saved_env_1884 = g_genv_857;
F->saved_gdepth_1885 = RT_R_IUNDEF;
F->saved_gdepth_1885 = rt_r_ichk(g_gdepth_889);
F->c_592v = f_new_cons_175();
(*(P822)rt_nil_check(F->c_592v)).args = F->args_591;
while ((F->inst_1881 != NULL)) {
if ((((*(P830)rt_nil_check(F->inst_1881)).decl == F->pat_1879) && f_same_binds_573((*(P830)rt_nil_check(F->inst_1881)).members, F->binds_1880))) {
F->result_ = (*(P830)rt_nil_check(F->inst_1881)).t;
goto ret_;
}
F->inst_1881 = (*(P830)rt_nil_check(F->inst_1881)).insts;
}
f_open_scope_168();
{
F->b_1886 = NULL;
F->b_1886 = F->binds_1880;
while ((F->b_1886 != NULL)) {
f_define_159(F->b_1886, F->line_593);
F->b_1886 = (*(P830)rt_nil_check(F->b_1886)).mnext;
}
}
g_caps_875 = NULL;
g_genv_857 = (*(P830)rt_nil_check(F->g_589)).env;
g_gdepth_889 = rt_r_ichk(g_depth_859);
{
F->y_1887 = NULL;
F->y_1887 = f_new_sym_172((((rt_int)5LL)), (*(P820)rt_nil_check(F->pat_1879)).name);
F->yc_1888 = NULL;
(*(P830)rt_nil_check(F->y_1887)).decl = F->pat_1879;
if ((rt_r_ichk((*(P820)rt_nil_check(F->pat_1879)).kind) == (((rt_int)44LL)))) {
F->t_1882 = f_new_typ_174((((rt_int)8LL)));
(*(P826)rt_nil_check(F->t_1882)).name = (*(P820)rt_nil_check(F->pat_1879)).name;
(*(P826)rt_nil_check(F->t_1882)).decl = F->pat_1879;
(*(P830)rt_nil_check(F->y_1887)).t = F->t_1882;
f_define_159(F->y_1887, F->line_593);
f_finish_ptr_414(F->t_1882);
} else {
f_define_159(F->y_1887, F->line_593);
F->t_1882 = f_new_type_306(F->y_1887, f_nn_61((((rt_int)80LL)), F->line_593), &F->yc_1888);
}
}
g_caps_875 = F->saved_caps_1883;
g_genv_857 = F->saved_env_1884;
g_gdepth_889 = rt_r_ichk(F->saved_gdepth_1885);
(*(P826)rt_nil_check(F->t_1882)).gen = F->g_589;
(*(P826)rt_nil_check(F->t_1882)).gbinds = F->binds_1880;
f_close_scope_169();
{ R831 *cell1889 = rt_alloc(sizeof(R831));
(*cell1889).name = NULL;
(*cell1889).t = NULL;
(*cell1889).c = NULL;
(*cell1889).access = NULL;
(*cell1889).cname = NULL;
(*cell1889).st = NULL;
(*cell1889).decl = NULL;
(*cell1889).params = NULL;
(*cell1889).result = NULL;
(*cell1889).members = NULL;
(*cell1889).mnext = NULL;
(*cell1889).binds = NULL;
(*cell1889).insts = NULL;
(*cell1889).env = NULL;
(*cell1889).chain = NULL;
(*cell1889).stack = NULL;
(*cell1889).owner = NULL;
(*cell1889).gctx = NULL;
(*cell1889).mv = NULL;
(*cell1889).reqs = NULL;
(*cell1889).home = NULL;
(*cell1889).capn = NULL;
(*cell1889).tbinds = NULL;
F->inst_1881 = cell1889;
}
(*(P830)rt_nil_check(F->inst_1881)).kind = (((rt_int)5LL));
(*(P830)rt_nil_check(F->inst_1881)).name = (*(P830)rt_nil_check(F->g_589)).name;
(*(P830)rt_nil_check(F->inst_1881)).decl = F->pat_1879;
(*(P830)rt_nil_check(F->inst_1881)).t = F->t_1882;
(*(P830)rt_nil_check(F->inst_1881)).members = F->binds_1880;
(*(P830)rt_nil_check(F->inst_1881)).insts = g_all_insts_858;
g_all_insts_858 = F->inst_1881;
F->result_ = F->t_1882;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_592) = F->c_592v;
  RT_FPOP();
  return F->result_;
}

static P830 f_instantiate_599(P830 g_595, P820 tt_596, P820 args_597, rt_int line_598) {
  struct f_instantiate_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_595 = g_595;
F->tt_596 = tt_596;
F->args_597 = args_597;
F->line_598 = line_598;
F->gd_1890 = NULL;
F->gd_1890 = (*(P830)rt_nil_check(F->g_595)).decl;
F->pat_1891 = NULL;
F->pat_1891 = (*(P820)rt_nil_check(F->gd_1890)).b;
F->binds_1892 = NULL;
F->f_1893 = NULL;
F->f_1893 = (*(P820)rt_nil_check(F->pat_1891)).e;
F->a_1894 = NULL;
F->a_1894 = F->tt_596;
F->fp_1895 = NULL;
F->fp_1895 = (*(P820)rt_nil_check(F->pat_1891)).a;
F->inst_1896 = NULL;
F->at_1897 = NULL;
F->c_1898 = NULL;
F->saved_fctx_1899 = NULL;
F->saved_fctx_1899 = g_fctx_874;
F->saved_in_1900 = RT_R_EUNDEF;
F->saved_in_1900 = rt_r_echk(g_in_func_872);
F->saved_level_1901 = RT_R_IUNDEF;
F->saved_level_1901 = rt_r_ichk(g_cur_level_873);
F->saved_sym_1902 = NULL;
F->saved_sym_1902 = g_func_sym_884;
F->saved_code_1903 = NULL;
F->saved_code_1903 = g_code_870;
F->saved_env_1904 = NULL;
F->saved_env_1904 = g_genv_857;
F->saved_gdepth_1905 = RT_R_IUNDEF;
F->saved_gdepth_1905 = rt_r_ichk(g_gdepth_889);
F->binds_1892 = f_tt_binds_581(F->gd_1890, F->f_1893, F->a_1894, F->line_598);
F->a_1894 = F->args_597;
while (((F->fp_1895 != NULL) && (F->a_1894 != NULL))) {
if (f_generic_use_583((*(P820)rt_nil_check(F->fp_1895)).a)) {
F->v_1906 = rt_str_copy(f_gexpr_654(F->a_1894, NULL, &F->at_1897));
F->binds_1892 = f_infer_from_588(F->gd_1890, (*(P820)rt_nil_check(F->fp_1895)).a, F->at_1897, F->binds_1892);
} else if ((((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->fp_1895)).a)).kind) == (((rt_int)80LL))) && (f_gparam_568(F->gd_1890, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->fp_1895)).a)).name))->all)) != NULL)) && ((*(P820)rt_nil_check(f_gparam_568(F->gd_1890, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->fp_1895)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1907 = RT_R_EUNDEF;
F->known_1907 = 0;
F->q_1908 = NULL;
F->q_1908 = F->binds_1892;
while ((F->q_1908 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->q_1908)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->fp_1895)).a)).name))->all))) {
F->known_1907 = 1;
}
F->q_1908 = (*(P830)rt_nil_check(F->q_1908)).mnext;
}
if ((!rt_r_echk(F->known_1907))) {
F->b_1909 = NULL;
F->b_1909 = f_bind_sym_570(f_gparam_568(F->gd_1890, &(((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->fp_1895)).a)).name))->all)));
F->v_1910 = rt_str_copy(f_gexpr_654(F->a_1894, NULL, &F->at_1897));
(*(P830)rt_nil_check(F->b_1909)).t = F->at_1897;
(*(P830)rt_nil_check(F->b_1909)).c = g_no_cons_912;
(*(P830)rt_nil_check(F->b_1909)).mnext = F->binds_1892;
F->binds_1892 = F->b_1909;
}
}
F->fp_1895 = (*(P820)rt_nil_check(F->fp_1895)).next;
F->a_1894 = (*(P820)rt_nil_check(F->a_1894)).next;
}
F->inst_1896 = g_all_insts_858;
while ((F->inst_1896 != NULL)) {
if ((((*(P830)rt_nil_check(F->inst_1896)).decl == F->pat_1891) && f_same_binds_573((*(P830)rt_nil_check(F->inst_1896)).members, F->binds_1892))) {
F->result_ = F->inst_1896;
goto ret_;
}
F->inst_1896 = (*(P830)rt_nil_check(F->inst_1896)).insts;
}
g_fctx_874 = (*(P830)rt_nil_check(F->g_595)).gctx;
g_in_func_872 = (rt_r_ichk((*(P830)rt_nil_check(F->g_595)).level) > ((rt_int)0LL));
g_cur_level_873 = rt_r_ichk((*(P830)rt_nil_check(F->g_595)).level);
g_func_sym_884 = (*(P830)rt_nil_check(F->g_595)).owner;
g_code_870 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_889 = rt_r_ichk(g_depth_859);
{
F->b_1911 = NULL;
F->b_1911 = F->binds_1892;
while ((F->b_1911 != NULL)) {
f_define_159(F->b_1911, F->line_598);
F->b_1911 = (*(P830)rt_nil_check(F->b_1911)).mnext;
}
}
g_genv_857 = (*(P830)rt_nil_check(F->g_595)).env;
F->inst_1896 = f_build_subprogram_441(F->pat_1891);
(*(P830)rt_nil_check(F->inst_1896)).members = F->binds_1892;
(*(P830)rt_nil_check(F->inst_1896)).insts = g_all_insts_858;
g_all_insts_858 = F->inst_1896;
f_define_159(F->inst_1896, F->line_598);
f_gen_subprogram_471(F->pat_1891, F->inst_1896);
f_close_scope_169();
g_fctx_874 = F->saved_fctx_1899;
g_in_func_872 = rt_r_echk(F->saved_in_1900);
g_cur_level_873 = rt_r_ichk(F->saved_level_1901);
g_func_sym_884 = F->saved_sym_1902;
g_code_870 = F->saved_code_1903;
g_genv_857 = F->saved_env_1904;
g_gdepth_889 = rt_r_ichk(F->saved_gdepth_1905);
F->result_ = F->inst_1896;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_601(P830 y_600) {
  struct f_access_of_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_600 = y_600;
F->p_1912 = NULL;
F->p_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_600)).level) <= ((rt_int)0LL))) {
F->result_ = (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_600)).access))->all);
goto ret_;
}
{ rt_int lo1914 = ((rt_int)1LL), hi1915 = rt_sub(rt_r_ichk(g_cur_level_873), rt_r_ichk((*(P830)rt_nil_check(F->y_600)).level));
for (rt_int it1916 = lo1914; it1916 <= hi1915; it1916++) {
F->i_1913 = it1916;
F->p_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->p_1912))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P830)rt_nil_check(F->y_600)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P813)rt_nil_check(F->p_1912))->all)), rt_str("->", 2)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_600)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->p_1912))->all), rt_str("->", 2)), (((P813)rt_nil_check((*(P830)rt_nil_check(F->y_600)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_import_of_604(P820 l_602, rstr *name_603) {
  struct f_import_of_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_602 = l_602;
F->name_603 = name_603;
F->p_1917 = NULL;
F->p_1917 = F->l_602;
while ((F->p_1917 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1917)).name))->all), (*F->name_603))) {
F->result_ = F->p_1917;
goto ret_;
}
F->p_1917 = (*(P820)rt_nil_check(F->p_1917)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_607(P830 y_605, rt_int line_606) {
  struct f_check_import_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_605 = y_605;
F->line_606 = line_606;
F->c_1918 = NULL;
F->c_1918 = g_fctx_874;
F->ro_1919 = RT_R_EUNDEF;
F->ro_1919 = 0;
while (((F->c_1918 != NULL) && (rt_r_ichk((*(P830)rt_nil_check(F->y_605)).depth) < rt_r_ichk((*(P837)rt_nil_check(F->c_1918)).depth)))) {
if ((!rt_r_echk((*(P837)rt_nil_check(F->c_1918)).all_imp))) {
F->imp_1920 = NULL;
F->imp_1920 = f_import_of_604((*(P837)rt_nil_check(F->c_1918)).imps, &(((P813)rt_nil_check((*(P830)rt_nil_check(F->y_605)).name))->all));
if ((F->imp_1920 == NULL)) {
f_fail_23(F->line_606, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_605)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P820)rt_nil_check(F->imp_1920)).ival) == ((rt_int)1LL))) {
F->ro_1919 = 1;
}
}
F->c_1918 = (*(P837)rt_nil_check(F->c_1918)).next;
}
F->result_ = rt_r_echk(F->ro_1919);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_609(rstr *s_608) {
  struct f_c_ident_609fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_608 = s_608;
if (rt_str_eq((*F->s_608), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_608), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_608));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_612(P826 t_610, rstr *p_611) {
  struct f_cell_deref_612fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_610 = t_610;
F->p_611 = p_611;
if ((((*(P826)rt_nil_check(F->t_610)).decl != NULL) && ((*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_610)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_611)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_611)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_615(rstr *base_613, P826 t_614) {
  struct f_deref_615fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_613 = base_613;
F->t_614 = t_614;
if ((((*(P826)rt_nil_check(F->t_614)).decl != NULL) && ((*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_614)).decl)).b != NULL))) {
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_613)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->t_614)), rt_str(")rt_nil_check(", 14)), (*F->base_613)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_614)), rt_str(")(", 2)), (*F->base_613)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_614)), rt_str(")rt_nil_check(", 14)), (*F->base_613)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_617(P820 e_616) {
  struct f_is_lvalue_617fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_616 = e_616;
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_616)).kind) == (((rt_int)7LL)))) {
F->y_1921 = NULL;
F->y_1921 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_616)).name))->all));
F->result_ = ((F->y_1921 != NULL) && ((rt_r_ichk((*(P830)rt_nil_check(F->y_1921)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P830)rt_nil_check(F->y_1921)).kind) == (((rt_int)2LL))) && ((*(P830)rt_nil_check(F->y_1921)).mv == NULL)) && (!rt_r_echk((*(P830)rt_nil_check(F->y_1921)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_616)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_617((*(P820)rt_nil_check(F->e_616)).a);
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_616)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_616)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_617((*(P820)rt_nil_check(F->e_616)).a));
goto ret_;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_616)).kind) == (((rt_int)10LL)))) {
if ((((*(P820)rt_nil_check(F->e_616)).b != NULL) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_616)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_617((*(P820)rt_nil_check(F->e_616)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_623(P820 e_618, P813 *code_619, P826 *t_620, P822 *c_621, int *ro_622) {
  struct f_lvalue_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_618 = e_618;
F->code_619 = code_619;
F->code_619v = *F->code_619;
F->t_620 = t_620;
F->t_620v = *F->t_620;
F->c_621 = c_621;
F->c_621v = *F->c_621;
F->ro_622 = ro_622;
F->ro_622v = *F->ro_622;
F->base_1922 = NULL;
F->bt_1923 = NULL;
F->bc_1924 = NULL;
if ((rt_r_ichk((*(P820)rt_nil_check(F->e_618)).kind) == (((rt_int)7LL)))) {
F->y_1925 = NULL;
F->y_1925 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_618)).name))->all));
if ((F->y_1925 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_618)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1925)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P830)rt_nil_check(F->y_1925)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_618)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_619v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_601(F->y_1925); b_; }));
F->t_620v = (*(P830)rt_nil_check(F->y_1925)).t;
F->c_621v = (*(P830)rt_nil_check(F->y_1925)).c;
F->ro_622v = rt_r_echk((*(P830)rt_nil_check(F->y_1925)).ro_flag);
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1925)).kind) == (((rt_int)1LL))) && f_check_import_607(F->y_1925, rt_r_ichk((*(P820)rt_nil_check(F->e_618)).line)))) {
F->ro_622v = 1;
}
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_618)).kind) == (((rt_int)17LL)))) {
f_lvalue_623((*(P820)rt_nil_check(F->e_618)).a, &F->code_619v, &F->t_620v, &F->c_621v, &F->ro_622v);
} else if (((((rt_r_ichk((*(P820)rt_nil_check(F->e_618)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_618)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_618)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_619v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_772((*(P820)rt_nil_check(F->e_618)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_618)).line), &F->t_620v); b_; }));
F->c_621v = g_no_cons_912;
F->ro_622v = 0;
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_618)).kind) == (((rt_int)11LL)))) {
f_lvalue_623((*(P820)rt_nil_check(F->e_618)).a, &F->base_1922, &F->bt_1923, &F->bc_1924, &F->ro_622v);
f_select_on_631(&(((P813)rt_nil_check(F->base_1922))->all), F->bt_1923, F->e_618, &F->ro_622v, &F->code_619v, &F->t_620v, &F->c_621v);
} else if ((rt_r_ichk((*(P820)rt_nil_check(F->e_618)).kind) == (((rt_int)10LL)))) {
f_lvalue_623((*(P820)rt_nil_check(F->e_618)).a, &F->base_1922, &F->bt_1923, &F->bc_1924, &F->ro_622v);
f_index_on_648(&(((P813)rt_nil_check(F->base_1922))->all), F->bt_1923, F->e_618, &F->ro_622v, 1, &F->code_619v, &F->t_620v, &F->c_621v);
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_618)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_619) = F->code_619v;  (*F->t_620) = F->t_620v;  (*F->c_621) = F->c_621v;  if (!rt_r_undef_BOOL(F->ro_622v)) (*F->ro_622) = F->ro_622v;
  RT_FPOP();
  return;
}

static void f_select_on_631(rstr *base_624, P826 bt_625, P820 e_626, int *ro_627, P813 *code_628, P826 *t_629, P822 *c_630) {
  struct f_select_on_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_624 = base_624;
F->bt_625 = bt_625;
F->e_626 = e_626;
F->ro_627 = ro_627;
F->code_628 = code_628;
F->code_628v = *F->code_628;
F->t_629 = t_629;
F->t_629v = *F->t_629;
F->c_630 = c_630;
F->c_630v = *F->c_630;
F->c_630v = g_no_cons_912;
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_625)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->bt_625);
(*F->ro_627) = 0;
if (((*(P826)rt_nil_check(F->bt_625)).decl != NULL)) {
F->p_1926 = NULL;
F->p_1926 = (*(P820)rt_nil_check((*(P826)rt_nil_check(F->bt_625)).decl)).b;
while ((F->p_1926 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1926)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))) {
F->pc_1927 = NULL;
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->bt_625)), rt_str(")rt_nil_check(", 14)), (*F->base_624)), rt_str("))->p_", 6)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1926)).name))->all))), rt_str(")", 1)); b_; }));
F->t_629v = f_resolve_subtype_256((*(P820)rt_nil_check(F->p_1926)).a, &F->pc_1927);
(*F->ro_627) = 1;
goto ret_;
}
F->p_1926 = (*(P820)rt_nil_check(F->p_1926)).next;
}
}
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all), rt_str("ALL", 3))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_615(&(*F->base_624), F->bt_625); b_; }));
F->t_629v = (*(P826)rt_nil_check(F->bt_625)).target;
goto ret_;
}
f_select_on_631(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_615(&(*F->base_624), F->bt_625); b_; }), (*(P826)rt_nil_check(F->bt_625)).target, F->e_626, &(*F->ro_627), &F->code_628v, &F->t_629v, &F->c_630v);
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_625)).kind) == (((rt_int)15LL)))) {
F->p_1928 = NULL;
F->p_1928 = (*(P826)rt_nil_check(F->bt_625)).tparams;
while ((F->p_1928 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_624), rt_str(".p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all))); b_; }));
F->t_629v = f_tparam_type_321(F->bt_625, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all));
(*F->ro_627) = 1;
goto ret_;
}
F->p_1928 = (*(P820)rt_nil_check(F->p_1928)).next;
}
F->p_1928 = (*(P826)rt_nil_check(F->bt_625)).tparams;
if ((!f_opened_296(F->bt_625))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P813)rt_nil_check((*(P826)rt_nil_check(F->bt_625)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P826)rt_nil_check(F->bt_625)).tparams == NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all), rt_str("ALL", 3))) {
F->code_628v = f_mk_3(&(*F->base_624));
F->t_629v = (*(P826)rt_nil_check(F->bt_625)).under;
goto ret_;
}
f_select_on_631(&(*F->base_624), (*(P826)rt_nil_check(F->bt_625)).under, F->e_626, &(*F->ro_627), &F->code_628v, &F->t_629v, &F->c_630v);
goto ret_;
}
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all), rt_str("ALL", 3))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_624), rt_str(".all", 4)); b_; }));
F->t_629v = (*(P826)rt_nil_check(F->bt_625)).under;
goto ret_;
}
while ((F->p_1928 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_624), rt_str(".p_", 3)), f_lower_s_15(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all))); b_; }));
F->t_629v = f_tparam_type_321(F->bt_625, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1928)).name))->all));
(*F->ro_627) = 1;
goto ret_;
}
F->p_1928 = (*(P820)rt_nil_check(F->p_1928)).next;
}
f_select_on_631(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_624), rt_str(".all", 4)); b_; }), (*(P826)rt_nil_check(F->bt_625)).under, F->e_626, &(*F->ro_627), &F->code_628v, &F->t_629v, &F->c_630v);
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_625)).kind) == (((rt_int)17LL)))) {
F->f_1929 = NULL;
F->f_1929 = (*(P826)rt_nil_check(F->bt_625)).fields;
F->i_1930 = RT_R_IUNDEF;
F->i_1930 = ((rt_int)0LL);
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all), rt_str("TAG", 3))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_624)), rt_str(").tag)", 6)); b_; }));
F->t_629v = (*(P826)rt_nil_check(F->bt_625)).elem;
(*F->ro_627) = 1;
goto ret_;
}
while ((F->f_1929 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1929)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))) {
F->fn_1931 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_624)), rt_str(").u.", 4)), f_field_c_17(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))));
F->c_630v = (*(P828)rt_nil_check(F->f_1929)).c;
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_624)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_1930))), rt_str(" \? &", 4)), F->fn_1931), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1931), rt_str(")))", 3)); b_; }));
F->t_629v = (*(P828)rt_nil_check(F->f_1929)).t;
goto ret_;
}
F->i_1930 = rt_add(rt_r_ichk(F->i_1930), ((rt_int)1LL));
F->f_1929 = (*(P828)rt_nil_check(F->f_1929)).next;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_625)).kind) == (((rt_int)7LL)))) {
F->f_1932 = NULL;
F->f_1932 = (*(P826)rt_nil_check(F->bt_625)).fields;
while ((F->f_1932 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1932)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))) {
F->c_630v = (*(P828)rt_nil_check(F->f_1932)).c;
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_624), rt_str(".", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all))); b_; }));
F->t_629v = (*(P828)rt_nil_check(F->f_1932)).t;
goto ret_;
}
F->f_1932 = (*(P828)rt_nil_check(F->f_1932)).next;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_626)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_626)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_628) = F->code_628v;  (*F->t_629) = F->t_629v;  (*F->c_630) = F->c_630v;
  RT_FPOP();
  return;
}

static int f_has_call_633(rstr *s_632) {
  struct f_has_call_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_632 = s_632;
{ rt_int lo1934 = ((rt_int)1LL), hi1935 = ((rt_int)(((*F->s_632)).len));
for (rt_int it1936 = lo1934; it1936 <= hi1935; it1936++) {
F->i_1933 = it1936;
if ((rt_r_echk(rt_str_get((*F->s_632), F->i_1933)) == 40)) {
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

static void f_need_slice_635(P826 t_634) {
  struct f_need_slice_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_634 = t_634;
F->c_1937 = rt_str_copy(f_ctype_225(F->t_634));
F->n_1938 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1937));
F->l_1939 = NULL;
if (f_seen_name_375(g_mcopies_899, &F->n_1938)) {
goto ret_;
}
{ R825 *cell1940 = rt_alloc(sizeof(R825));
(*cell1940).s = NULL;
(*cell1940).next = NULL;
F->l_1939 = cell1940;
}
(*(P824)rt_nil_check(F->l_1939)).s = f_mk_3(&F->n_1938);
(*(P824)rt_nil_check(F->l_1939)).next = g_mcopies_899;
g_mcopies_899 = F->l_1939;
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1937), rt_str(" ", 1)), F->n_1938), rt_str("(", 1)), F->c_1937), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1937), rt_str(" ", 1)), F->n_1938), rt_str("(", 1)), F->c_1937), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_865, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1937), rt_str(" rt_r_acat_", 11)), F->c_1937), rt_str("(", 1)), F->c_1937), rt_str(" a, ", 4)), F->c_1937), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1937), rt_str(" rt_r_acat_", 11)), F->c_1937), rt_str("(", 1)), F->c_1937), rt_str(" a, ", 4)), F->c_1937), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1937), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_364((*(P826)rt_nil_check(F->t_634)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_364((*(P826)rt_nil_check(F->t_634)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_639(rstr *i_636, rstr *lo_637, rstr *hi_638) {
  struct f_ix_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_636 = i_636;
F->lo_637 = lo_637;
F->hi_638 = hi_638;
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_636)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_636)), rt_str(", ", 2)), (*F->lo_637)), rt_str(", ", 2)), (*F->hi_638)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_648(rstr *base_640, P826 bt_641, P820 e_642, int *ro_643, int lv_644, P813 *code_645, P826 *t_646, P822 *c_647) {
  struct f_index_on_648fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_640 = base_640;
F->bt_641 = bt_641;
F->e_642 = e_642;
F->ro_643 = ro_643;
F->lv_644 = lv_644;
F->code_645 = code_645;
F->code_645v = *F->code_645;
F->t_646 = t_646;
F->t_646v = *F->t_646;
F->c_647 = c_647;
F->c_647v = *F->c_647;
F->a_1941 = NULL;
F->a_1941 = (*(P820)rt_nil_check(F->e_642)).b;
F->it_1942 = NULL;
F->c_647v = g_no_cons_912;
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_414(F->bt_641);
(*F->ro_643) = 0;
f_index_on_648(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_615(&(*F->base_640), F->bt_641); b_; }), (*(P826)rt_nil_check(F->bt_641)).target, F->e_642, &(*F->ro_643), F->lv_644, &F->code_645v, &F->t_646v, &F->c_647v);
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_296(F->bt_641))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P813)rt_nil_check((*(P826)rt_nil_check(F->bt_641)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P826)rt_nil_check(F->bt_641)).tparams == NULL)) {
f_index_on_648(&(*F->base_640), (*(P826)rt_nil_check(F->bt_641)).under, F->e_642, &(*F->ro_643), F->lv_644, &F->code_645v, &F->t_646v, &F->c_647v);
} else {
f_index_on_648(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_640), rt_str(".all", 4)); b_; }), (*(P826)rt_nil_check(F->bt_641)).under, F->e_642, &(*F->ro_643), F->lv_644, &F->code_645v, &F->t_646v, &F->c_647v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).kind) == (((rt_int)6LL))) && (F->a_1941 != NULL)) && (rt_r_ichk((*(P820)rt_nil_check(F->a_1941)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).ndim) != ((rt_int)1LL)) || ((*(P820)rt_nil_check(F->a_1941)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1943 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->a_1941)).a, (*(P826)rt_nil_check(F->bt_641)).idx, &F->it_1942));
F->hi_1944 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->a_1941)).b, (*(P826)rt_nil_check(F->bt_641)).idx, &F->it_1942));
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_225(F->bt_641)), rt_str("(", 1)), (*F->base_640)), rt_str(", ", 2)), F->lo_1943), rt_str(", ", 2)), F->hi_1944), rt_str(")", 1)); b_; }));
f_need_slice_635(F->bt_641);
F->t_646v = F->bt_641;
(*F->ro_643) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).kind) == (((rt_int)6LL)))) {
F->off_1945 = NULL;
F->k_1946 = RT_R_IUNDEF;
F->k_1946 = ((rt_int)0LL);
F->b_1947 = NULL;
F->b_1947 = f_mk_3(&(*F->base_640));
F->pre_1948 = NULL;
F->pre_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1941) != rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).ndim))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_644) && f_has_call_633(&(*F->base_640)))) {
F->pre_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->bt_641)), rt_str(" b_ = ", 6)), (*F->base_640)), rt_str("; ", 2)); b_; }));
F->b_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1941 != NULL)) {
F->k_1946 = rt_add(rt_r_ichk(F->k_1946), ((rt_int)1LL));
{
F->i_1949 = rt_str_copy(f_gexpr_654(F->a_1941, f_idx_type_249(F->bt_641, rt_r_ichk(F->k_1946)), &F->it_1942));
F->l_1950 = rt_str_copy(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->b_1947))->all), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_1946))));
F->h_1951 = rt_str_copy(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->b_1947))->all), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_1946))));
f_check_type_223(F->it_1942, f_idx_type_249(F->bt_641, rt_r_ichk(F->k_1946)), rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line));
if ((F->off_1945 == NULL)) {
F->off_1945 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_639(&F->i_1949, &F->l_1950, &F->h_1951)), rt_str(" - ", 3)), F->l_1950), rt_str(")", 1)); b_; }));
} else {
F->off_1945 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->off_1945))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1950), rt_str(", ", 2)), F->h_1951), rt_str(") + ", 4)), f_ix_639(&F->i_1949, &F->l_1950, &F->h_1951)), rt_str(" - ", 3)), F->l_1950), rt_str(")", 1)); b_; }));
}
}
F->a_1941 = (*(P820)rt_nil_check(F->a_1941)).next;
}
if ((((rt_int)(((((P813)rt_nil_check(F->pre_1948))->all)).len)) > ((rt_int)0LL))) {
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->pre_1948))->all), (((P813)rt_nil_check(F->b_1947))->all)), rt_str(".p[", 3)), (((P813)rt_nil_check(F->off_1945))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->b_1947))->all), rt_str(".p[", 3)), (((P813)rt_nil_check(F->off_1945))->all)), rt_str("]", 1)); b_; }));
}
F->t_646v = (*(P826)rt_nil_check(F->bt_641)).elem;
F->c_647v = (*(P826)rt_nil_check(F->bt_641)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1941) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_641)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P820)rt_nil_check(F->a_1941)).kind) == (((rt_int)16LL)))) {
F->lo_1952 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->a_1941)).a, g_ty_int_900, &F->it_1942));
F->hi_1953 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->a_1941)).b, g_ty_int_900, &F->it_1942));
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_640)), rt_str(", ", 2)), F->lo_1952), rt_str(", ", 2)), F->hi_1953), rt_str(")", 1)); b_; }));
F->t_646v = F->bt_641;
(*F->ro_643) = 1;
goto ret_;
}
{
F->i_1954 = rt_str_copy(f_gexpr_654(F->a_1941, g_ty_int_900, &F->it_1942));
F->t_646v = f_str_elem_209(F->bt_641);
F->c_647v = (*(P826)rt_nil_check(F->bt_641)).elemcons;
if (F->lv_644) {
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_640)), rt_str(", ", 2)), F->i_1954), rt_str("))", 2)); b_; }));
} else {
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_640)), rt_str(", ", 2)), F->i_1954), rt_str(")", 1)); b_; }));
(*F->ro_643) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_645) = F->code_645v;  (*F->t_646) = F->t_646v;  (*F->c_647) = F->c_647v;
  RT_FPOP();
  return;
}

static int f_own_attribute_650(P820 e_649) {
  struct f_own_attribute_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_649 = e_649;
F->saved_1955 = NULL;
F->saved_1955 = g_code_870;
F->bt_1956 = NULL;
F->ok_1957 = RT_R_EUNDEF;
F->ok_1957 = 0;
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = f_new_buffer_24();
{ rt_frame xf1958;
if (RT_TRY(xf1958)) {
F->base_1960 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_649)).a, NULL, &F->bt_1956));
while (((F->bt_1956 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_1956)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_414(F->bt_1956);
F->bt_1956 = (*(P826)rt_nil_check(F->bt_1956)).target;
}
while ((((F->bt_1956 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_1956)).kind) == (((rt_int)15LL)))) && ((*(P826)rt_nil_check(F->bt_1956)).tparams == NULL))) {
F->bt_1956 = (*(P826)rt_nil_check(F->bt_1956)).under;
}
if (((F->bt_1956 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_1956)).kind) == (((rt_int)15LL))))) {
F->p_1961 = NULL;
F->p_1961 = (*(P826)rt_nil_check(F->bt_1956)).tparams;
while ((F->p_1961 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_1961)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_649)).name))->all))) {
F->ok_1957 = 1;
}
F->p_1961 = (*(P820)rt_nil_check(F->p_1961)).next;
}
F->bt_1956 = (*(P826)rt_nil_check(F->bt_1956)).under;
}
if (((F->bt_1956 != NULL) && ((rt_r_ichk((*(P826)rt_nil_check(F->bt_1956)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->bt_1956)).kind) == (((rt_int)17LL)))))) {
F->f_1962 = NULL;
F->f_1962 = (*(P826)rt_nil_check(F->bt_1956)).fields;
while ((F->f_1962 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_1962)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_649)).name))->all))) {
F->ok_1957 = 1;
}
F->f_1962 = (*(P828)rt_nil_check(F->f_1962)).next;
}
}
RT_POP(xf1958);
} else {
RT_POP(xf1958);
int x1959 = rt_xcur;
if (0 || x1959 == ex_compile_error_1) {
F->ok_1957 = 0;
} else {
rt_raise(x1959);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = F->saved_1955;
F->result_ = rt_r_echk(F->ok_1957);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_654(P820 e_651, P826 want_652, P826 *t_653) {
  struct f_gexpr_654fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_651 = e_651;
F->want_652 = want_652;
F->t_653 = t_653;
F->t_653v = *F->t_653;
F->k_1963 = RT_R_IUNDEF;
F->k_1963 = rt_r_ichk((*(P820)rt_nil_check(F->e_651)).kind);
F->code_1964 = NULL;
F->c_1965 = NULL;
F->ro_1966 = RT_R_EUNDEF;
F->bt_1967 = NULL;
F->ctx_1968 = NULL;
F->ctx_1968 = g_cons_ctx_891;
g_cons_ctx_891 = NULL;
F->t_653v = g_ty_int_900;
if ((rt_r_ichk(F->k_1963) == (((rt_int)1LL)))) {
if (((F->want_652 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_652)).kind) == (((rt_int)3LL))))) {
F->t_653v = g_ty_float_902;
F->result_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)2LL)))) {
F->t_653v = g_ty_float_902;
F->result_ = (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)5LL)))) {
F->t_653v = g_ty_bool_901;
F->result_ = f_itos_7(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_1963) == (((rt_int)3LL))) && (F->want_652 != NULL)) && (rt_r_ichk((*(P826)rt_nil_check(F->want_652)).kind) == (((rt_int)5LL)))) && (!f_same_212(f_str_elem_209(F->want_652), g_ty_ascii_903)))) {
F->r_1969 = NULL;
F->r_1969 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_653v = F->want_652;
{ rt_int lo1971 = ((rt_int)1LL), hi1972 = ((rt_int)(((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)).len));
for (rt_int it1973 = lo1971; it1973 <= hi1972; it1973++) {
F->i_1970 = it1973;
F->pos_1974 = RT_R_IUNDEF;
F->pos_1974 = f_lit_index_253((*(P826)rt_nil_check(f_base_of_214(f_str_elem_209(F->want_652)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_664(rt_r_echk(rt_str_get((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), F->i_1970))); b_; }));
if ((rt_r_ichk(F->pos_1974) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_664(rt_r_echk(rt_str_get((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), F->i_1970)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_1969 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_1969))->all), rt_str("\\", 1)), f_octal_666(rt_r_ichk(F->pos_1974))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P813)rt_nil_check(F->r_1969))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)3LL)))) {
F->t_653v = g_ty_string_904;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_679(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)6LL)))) {
F->t_653v = g_ty_nil_907;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)4LL)))) {
if (((F->want_652 != NULL) && ((*(P826)rt_nil_check(f_base_of_214(F->want_652))).kind == (((rt_int)4LL))))) {
F->t_653v = F->want_652;
} else {
F->t_653v = f_enum_type_of_682(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
}
{
F->i_1975 = RT_R_IUNDEF;
F->i_1975 = f_lit_index_253((*(P826)rt_nil_check(f_base_of_214(F->t_653v))).lits, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all));
if ((rt_r_ichk(F->i_1975) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_1975));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)17LL)))) {
g_cons_ctx_891 = F->ctx_1968;
F->result_ = f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, F->want_652, &F->t_653v);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)7LL)))) {
F->y_1976 = NULL;
F->y_1976 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all));
if ((F->y_1976 == NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("ME", 2))) {
F->t_653v = g_ty_act_910;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_653v = g_ty_act_910;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_784(f_wrap_apply_677(F->e_651), 0, &F->t_653v);
goto ret_;
}
if (((((((((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_784(f_wrap_apply_677(F->e_651), 0, &F->t_653v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_1976)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1976)).kind) == (((rt_int)2LL))))) {
F->ro_1977 = RT_R_EUNDEF;
F->t_653v = (*(P830)rt_nil_check(F->y_1976)).t;
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_1976)).kind) == (((rt_int)1LL)))) {
F->ro_1977 = f_check_import_607(F->y_1976, rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
F->result_ = f_init_chk_330((*(P830)rt_nil_check(F->y_1976)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_601(F->y_1976); b_; }));
goto ret_;
}
F->result_ = f_access_of_601(F->y_1976);
goto ret_;
}
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_1976)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_784(f_wrap_apply_677(F->e_651), 0, &F->t_653v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_1963) == (((rt_int)8LL))) && (f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all)) != NULL)) && (f_user_op_780(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), f_copy_node_675((*(P820)rt_nil_check(F->e_651)).a)) != NULL))) {
F->call_1978 = NULL;
F->call_1978 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
F->fname_1979 = NULL;
F->fname_1979 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
(*(P820)rt_nil_check(F->fname_1979)).name = (*(P820)rt_nil_check(F->e_651)).name;
(*(P820)rt_nil_check(F->call_1978)).a = F->fname_1979;
(*(P820)rt_nil_check(F->call_1978)).b = f_copy_node_675((*(P820)rt_nil_check(F->e_651)).a);
F->result_ = f_gcall_784(F->call_1978, 0, &F->t_653v);
goto ret_;
} else if (((((rt_r_ichk(F->k_1963) == (((rt_int)8LL))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("NOT", 3))) && (F->want_652 != NULL)) && (rt_r_ichk((*(P826)rt_nil_check(F->want_652)).kind) == (((rt_int)16LL))))) {
F->a_1980 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, F->want_652, &F->t_653v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_1980), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)8LL)))) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("NOT", 3))) {
F->a_1981 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, g_ty_bool_901, &F->t_653v));
f_check_type_223(F->t_653v, g_ty_bool_901, rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1981), rt_str(")", 1));
goto ret_;
}
{
F->a_1982 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, F->want_652, &F->t_653v));
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1982;
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->t_653v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1982), rt_str(")", 1));
goto ret_;
}
f_check_type_223(F->t_653v, g_ty_int_900, rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1982), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_704(F->e_651, F->want_652, &F->t_653v);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_651)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_651)).a)).kind) == (((rt_int)12LL))))) {
F->nm_1983 = NULL;
F->nm_1983 = (*(P820)rt_nil_check(F->e_651)).a;
F->y_1984 = NULL;
if ((rt_r_ichk((*(P820)rt_nil_check(F->nm_1983)).kind) == (((rt_int)12LL)))) {
F->nm_1983 = (*(P820)rt_nil_check(F->nm_1983)).a;
}
F->y_1984 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->nm_1983)).name))->all));
if (((((F->y_1984 == NULL) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1984)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1984)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_1984)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_784(F->e_651, 0, &F->t_653v);
goto ret_;
}
}
{
F->base_1985 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, NULL, &F->bt_1967));
F->ro_1966 = 1;
f_index_on_648(&F->base_1985, F->bt_1967, F->e_651, &F->ro_1966, 0, &F->code_1964, &F->t_653v, &F->c_1965);
if ((((!f_is_lvalue_617(F->e_651)) || (rt_r_ichk((*(P826)rt_nil_check(F->t_653v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->t_653v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P813)rt_nil_check(F->code_1964))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_653v, &(((P813)rt_nil_check(F->code_1964))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_650(F->e_651)))) {
F->result_ = f_attribute_687(F->e_651, &F->t_653v);
goto ret_;
} else if (((f_as_subtype_285((*(P820)rt_nil_check(F->e_651)).a) != NULL) || f_ptr_attribute_684(F->e_651))) {
F->result_ = f_attribute_687(F->e_651, &F->t_653v);
goto ret_;
}
{
F->base_1986 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_651)).a, NULL, &F->bt_1967));
F->ro_1966 = 1;
f_select_on_631(&F->base_1986, F->bt_1967, F->e_651, &F->ro_1966, &F->code_1964, &F->t_653v, &F->c_1965);
if ((rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_651)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_617(F->e_651)))) {
F->result_ = (((P813)rt_nil_check(F->code_1964))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_653v, &(((P813)rt_nil_check(F->code_1964))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)12LL)))) {
F->result_ = f_gcall_784(f_wrap_apply_677(F->e_651), 0, &F->t_653v);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)14LL)))) {
F->result_ = f_constructor_709(F->e_651, F->want_652, F->ctx_1968, &F->t_653v);
goto ret_;
} else if ((rt_r_ichk(F->k_1963) == (((rt_int)13LL)))) {
F->result_ = f_resolved_657(F->e_651, &F->t_653v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_651)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_653) = F->t_653v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_657(P820 e_655, P826 *t_656) {
  struct f_resolved_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_655 = e_655;
F->t_656 = t_656;
F->t_656v = *F->t_656;
F->c_1987 = NULL;
F->vt_1988 = NULL;
F->y_1989 = NULL;
F->y_1989 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1990 = NULL;
F->tt_1990 = f_copy_node_675((*(P820)rt_nil_check(F->e_655)).b);
(*(P820)rt_nil_check(F->tt_1990)).next = NULL;
if (((F->y_1989 != NULL) && ((rt_r_ichk((*(P830)rt_nil_check(F->y_1989)).kind) == (((rt_int)10LL))) || (f_resolve_overload_758(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1990, f_copy_node_675((*(P820)rt_nil_check(F->e_655)).a), 0, rt_r_ichk((*(P820)rt_nil_check(F->e_655)).line)) != NULL)))) {
F->call_1991 = NULL;
F->call_1991 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_655)).line));
F->f_1992 = NULL;
F->f_1992 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_655)).line));
F->fname_1993 = NULL;
F->fname_1993 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_655)).line));
(*(P820)rt_nil_check(F->fname_1993)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P820)rt_nil_check(F->f_1992)).a = F->fname_1993;
(*(P820)rt_nil_check(F->f_1992)).b = F->tt_1990;
(*(P820)rt_nil_check(F->call_1991)).a = F->f_1992;
(*(P820)rt_nil_check(F->call_1991)).b = f_copy_node_675((*(P820)rt_nil_check(F->e_655)).a);
(*(P820)rt_nil_check((*(P820)rt_nil_check(F->call_1991)).b)).next = NULL;
F->result_ = f_gcall_784(F->call_1991, 0, &F->t_656v);
goto ret_;
}
F->t_656v = f_resolve_subtype_256((*(P820)rt_nil_check(F->e_655)).b, &F->c_1987);
{
F->v_1994 = rt_str_copy(f_gexpr_in_662((*(P820)rt_nil_check(F->e_655)).a, F->t_656v, F->c_1987, &F->vt_1988));
f_check_type_223(F->vt_1988, F->t_656v, rt_r_ichk((*(P820)rt_nil_check(F->e_655)).line));
F->result_ = f_checked_204(F->t_656v, F->c_1987, &F->v_1994);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_656) = F->t_656v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_662(P820 e_658, P826 want_659, P822 c_660, P826 *t_661) {
  struct f_gexpr_in_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_658 = e_658;
F->want_659 = want_659;
F->c_660 = c_660;
F->t_661 = t_661;
F->t_661v = *F->t_661;
g_cons_ctx_891 = F->c_660;
F->result_ = f_gexpr_654(F->e_658, F->want_659, &F->t_661v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_661) = F->t_661v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_664(int ch_663) {
  struct f_ascii_lit_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_663 = ch_663;
F->l_1995 = NULL;
F->l_1995 = (*(P826)rt_nil_check(g_ty_ascii_903)).lits;
{ rt_int lo1997 = ((rt_int)1LL), hi1998 = rt_sub(((rt_int)(F->ch_663) + 1), ((rt_int)1LL));
for (rt_int it1999 = lo1997; it1999 <= hi1998; it1999++) {
F->i_1996 = it1999;
F->l_1995 = (*(P820)rt_nil_check(F->l_1995)).next;
}
}
F->result_ = (((P813)rt_nil_check((*(P820)rt_nil_check(F->l_1995)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_666(rt_int n_665) {
  struct f_octal_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_665 = n_665;
F->r_2000 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2000, rt_str("000", 3));
(*rt_str_at(&F->r_2000, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_665, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2000, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_665, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2000, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_665, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2000;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_str_cat_part_668(P826 t_667) {
  struct f_str_cat_part_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_667 = t_667;
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_667)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_209(F->t_667);
goto ret_;
}
F->result_ = F->t_667;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_peek_type_670(P820 e_669) {
  struct f_peek_type_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_669 = e_669;
F->saved_2001 = NULL;
F->saved_2001 = g_code_870;
F->t_2002 = NULL;
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = f_new_buffer_24();
{ rt_frame xf2003;
if (RT_TRY(xf2003)) {
F->v_2005 = rt_str_copy(f_gexpr_654(F->e_669, NULL, &F->t_2002));
RT_POP(xf2003);
} else {
RT_POP(xf2003);
int x2004 = rt_xcur;
if (0 || x2004 == ex_compile_error_1) {
F->t_2002 = NULL;
} else {
rt_raise(x2004);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = F->saved_2001;
F->result_ = F->t_2002;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_set_operands_673(P820 e_671, P826 want_672) {
  struct f_set_operands_673fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_671 = e_671;
F->want_672 = want_672;
F->t_2006 = NULL;
if (((F->want_672 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_672)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_672;
goto ret_;
} else if ((F->want_672 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_671)).a)).kind) != (((rt_int)14LL)))) {
F->t_2006 = f_peek_type_670((*(P820)rt_nil_check(F->e_671)).a);
} else if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_671)).b)).kind) != (((rt_int)14LL)))) {
F->t_2006 = f_peek_type_670((*(P820)rt_nil_check(F->e_671)).b);
}
if (((F->t_2006 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->t_2006)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2006;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_copy_node_675(P820 e_674) {
  struct f_copy_node_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_674 = e_674;
F->x_2007 = NULL;
{ R821 *cell2008 = rt_alloc(sizeof(R821));
(*cell2008).name = NULL;
(*cell2008).tag = NULL;
(*cell2008).prags = NULL;
(*cell2008).labels = NULL;
(*cell2008).a = NULL;
(*cell2008).b = NULL;
(*cell2008).c = NULL;
(*cell2008).d = NULL;
(*cell2008).e = NULL;
(*cell2008).next = NULL;
F->x_2007 = cell2008;
}
(*(P820)rt_nil_check(F->x_2007)).kind = rt_r_ichk((*(P820)rt_nil_check(F->e_674)).kind);
(*(P820)rt_nil_check(F->x_2007)).line = rt_r_ichk((*(P820)rt_nil_check(F->e_674)).line);
(*(P820)rt_nil_check(F->x_2007)).ival = rt_r_ichk((*(P820)rt_nil_check(F->e_674)).ival);
(*(P820)rt_nil_check(F->x_2007)).flag = rt_r_ichk((*(P820)rt_nil_check(F->e_674)).flag);
(*(P820)rt_nil_check(F->x_2007)).name = (*(P820)rt_nil_check(F->e_674)).name;
(*(P820)rt_nil_check(F->x_2007)).tag = (*(P820)rt_nil_check(F->e_674)).tag;
(*(P820)rt_nil_check(F->x_2007)).a = (*(P820)rt_nil_check(F->e_674)).a;
(*(P820)rt_nil_check(F->x_2007)).b = (*(P820)rt_nil_check(F->e_674)).b;
(*(P820)rt_nil_check(F->x_2007)).c = (*(P820)rt_nil_check(F->e_674)).c;
(*(P820)rt_nil_check(F->x_2007)).d = (*(P820)rt_nil_check(F->e_674)).d;
F->result_ = F->x_2007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P820 f_wrap_apply_677(P820 e_676) {
  struct f_wrap_apply_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_676 = e_676;
F->x_2009 = NULL;
F->x_2009 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_676)).line));
(*(P820)rt_nil_check(F->x_2009)).a = F->e_676;
F->result_ = F->x_2009;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_679(rstr *s_678) {
  struct f_c_string_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_678 = s_678;
F->n_2010 = RT_R_IUNDEF;
F->n_2010 = ((rt_int)0LL);
{ rt_int lo2012 = ((rt_int)1LL), hi2013 = ((rt_int)(((*F->s_678)).len));
for (rt_int it2014 = lo2012; it2014 <= hi2013; it2014++) {
F->i_2011 = it2014;
if (((rt_r_echk(rt_str_get((*F->s_678), F->i_2011)) == 92) || (rt_r_echk(rt_str_get((*F->s_678), F->i_2011)) == 63))) {
F->n_2010 = rt_add(rt_r_ichk(F->n_2010), ((rt_int)1LL));
}
}
}
{
F->r_2015 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_678)).len)), rt_r_ichk(F->n_2010)), ((rt_int)2LL)));
F->j_2016 = RT_R_IUNDEF;
F->j_2016 = ((rt_int)1LL);
(*rt_str_at(&F->r_2015, ((rt_int)1LL))) = 34;
{ rt_int lo2018 = ((rt_int)1LL), hi2019 = ((rt_int)(((*F->s_678)).len));
for (rt_int it2020 = lo2018; it2020 <= hi2019; it2020++) {
F->i_2017 = it2020;
F->j_2016 = rt_add(rt_r_ichk(F->j_2016), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_678), F->i_2017)) == 92) || (rt_r_echk(rt_str_get((*F->s_678), F->i_2017)) == 63))) {
(*rt_str_at(&F->r_2015, rt_r_ichk(F->j_2016))) = 92;
F->j_2016 = rt_add(rt_r_ichk(F->j_2016), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2015, rt_r_ichk(F->j_2016))) = rt_r_echk(rt_str_get((*F->s_678), F->i_2017));
}
}
(*rt_str_at(&F->r_2015, rt_add(rt_r_ichk(F->j_2016), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2015;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P826 f_enum_type_of_682(rstr *lit_680, rt_int line_681) {
  struct f_enum_type_of_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_680 = lit_680;
F->line_681 = line_681;
F->y_2021 = NULL;
F->y_2021 = g_scope_stack_860;
F->c_2022 = NULL;
if ((f_lit_index_253((*(P826)rt_nil_check(g_ty_ascii_903)).lits, &(*F->lit_680)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_903;
goto ret_;
}
while ((F->y_2021 != NULL)) {
if (((((rt_r_ichk((*(P830)rt_nil_check(F->y_2021)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_2021)).kind) == (((rt_int)5LL)))) && ((*(P830)rt_nil_check(F->y_2021)).st != NULL)) && (rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_2021)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_253((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_2021)).st)).a, &(*F->lit_680)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_2021)).kind) == (((rt_int)5LL)))) {
F->st_2023 = NULL;
F->st_2023 = f_nn_61((((rt_int)80LL)), F->line_681);
(*(P820)rt_nil_check(F->st_2023)).name = (*(P830)rt_nil_check(F->y_2021)).name;
F->result_ = f_resolve_subtype_256(F->st_2023, &F->c_2022);
goto ret_;
}
F->result_ = f_resolve_subtype_256((*(P830)rt_nil_check(F->y_2021)).st, &F->c_2022);
goto ret_;
}
}
F->y_2021 = (*(P830)rt_nil_check(F->y_2021)).stack;
}
f_fail_23(F->line_681, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_680)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_684(P820 e_683) {
  struct f_ptr_attribute_684fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_683 = e_683;
F->lv_2024 = NULL;
F->t_2025 = NULL;
F->c_2026 = NULL;
F->ro_2027 = RT_R_EUNDEF;
F->p_2028 = NULL;
F->saved_2029 = NULL;
F->saved_2029 = g_code_870;
if ((!f_is_lvalue_617((*(P820)rt_nil_check(F->e_683)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_870 = f_new_buffer_24();
f_lvalue_623((*(P820)rt_nil_check(F->e_683)).a, &F->lv_2024, &F->t_2025, &F->c_2026, &F->ro_2027);
g_code_870 = F->saved_2029;
if (((rt_r_ichk((*(P826)rt_nil_check(F->t_2025)).kind) != (((rt_int)8LL))) || ((*(P826)rt_nil_check(F->t_2025)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2028 = (*(P820)rt_nil_check((*(P826)rt_nil_check(F->t_2025)).decl)).d;
while ((F->p_2028 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_2028)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_683)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2028 = (*(P820)rt_nil_check(F->p_2028)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_687(P820 e_685, P826 *t_686) {
  struct f_attribute_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_685 = e_685;
F->t_686 = t_686;
F->t_686v = *F->t_686;
F->bt_2030 = NULL;
F->c_2031 = NULL;
F->base_2032 = NULL;
F->sub_2033 = NULL;
F->sub_2033 = f_as_subtype_285((*(P820)rt_nil_check(F->e_685)).a);
F->name_2034 = rt_str_copy((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_685)).name))->all));
if ((F->sub_2033 != NULL)) {
F->bt_2030 = f_resolve_subtype_256(F->sub_2033, &F->c_2031);
} else {
F->bt_2030 = f_value_subtype_278((*(P820)rt_nil_check(F->e_685)).a, &F->c_2031, &F->base_2032);
}
if (((((rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)8LL))) && (F->c_2031 != NULL)) && ((*(P822)rt_nil_check(F->c_2031)).args != NULL)) && ((*(P826)rt_nil_check(F->bt_2030)).decl != NULL))) {
F->p_2035 = NULL;
F->p_2035 = (*(P820)rt_nil_check((*(P826)rt_nil_check(F->bt_2030)).decl)).d;
F->a_2036 = NULL;
F->a_2036 = (*(P822)rt_nil_check(F->c_2031)).args;
while (((F->p_2035 != NULL) && (F->a_2036 != NULL))) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_2035)).name))->all), F->name_2034)) {
F->pc_2037 = NULL;
F->v_2038 = rt_str_copy(f_gexpr_654(F->a_2036, f_resolve_subtype_256((*(P820)rt_nil_check(F->p_2035)).a, &F->pc_2037), &F->t_686v));
F->result_ = F->v_2038;
goto ret_;
}
F->p_2035 = (*(P820)rt_nil_check(F->p_2035)).next;
F->a_2036 = (*(P820)rt_nil_check(F->a_2036)).next;
}
}
while (((rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)8LL))) && (F->base_2032 != NULL))) {
f_finish_ptr_414(F->bt_2030);
F->base_2032 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_615(&(((P813)rt_nil_check(F->base_2032))->all), F->bt_2030); b_; }));
F->bt_2030 = (*(P826)rt_nil_check(F->bt_2030)).target;
F->c_2031 = NULL;
if ((rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)5LL)))) {
F->c_2031 = f_new_cons_175();
(*(P822)rt_nil_check(F->c_2031)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->base_2032))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->bt_2030)).tparams != NULL)) && (F->c_2031 != NULL)) && ((*(P822)rt_nil_check(F->c_2031)).args != NULL))) {
F->p_2039 = NULL;
F->p_2039 = (*(P826)rt_nil_check(F->bt_2030)).tparams;
F->a_2040 = NULL;
F->a_2040 = (*(P822)rt_nil_check(F->c_2031)).args;
while (((F->p_2039 != NULL) && (F->a_2040 != NULL))) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->p_2039)).name))->all), F->name_2034)) {
F->pt_2041 = f_tparam_type_321(F->bt_2030, &F->name_2034);
F->v_2042 = rt_str_copy(f_gexpr_654(F->a_2040, F->pt_2041, &F->t_686v));
F->result_ = F->v_2042;
goto ret_;
}
F->p_2039 = (*(P820)rt_nil_check(F->p_2039)).next;
F->a_2040 = (*(P820)rt_nil_check(F->a_2040)).next;
}
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->bt_2030)).tparams == NULL))) {
F->c_2031 = f_base_cons_217(F->bt_2030, F->c_2031);
F->bt_2030 = f_base_of_214(F->bt_2030);
}
F->t_686v = g_ty_int_900;
if ((rt_str_eq(F->name_2034, rt_str("LEN", 3)) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)5LL))))) {
if (((F->c_2031 != NULL) && ((*(P822)rt_nil_check(F->c_2031)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_2031)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_685)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2034, rt_str("LEN", 3)) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)12LL))))) {
if (((F->c_2031 != NULL) && ((*(P822)rt_nil_check(F->c_2031)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_2031)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_685)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2034, rt_str("MIN", 3)) || rt_str_eq(F->name_2034, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_2030))) {
F->t_686v = F->bt_2030;
if (rt_str_eq(F->name_2034, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_2030, F->c_2031);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_2030, F->c_2031);
goto ret_;
} else if ((rt_str_eq(F->name_2034, rt_str("PREC", 4)) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)3LL))))) {
if (((F->c_2031 != NULL) && ((*(P822)rt_nil_check(F->c_2031)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_2031)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2034, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2034, rt_str("USE", 3))) && (rt_r_ichk((*(P826)rt_nil_check(F->bt_2030)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_700(F->e_685, F->bt_2030, F->c_2031, F->base_2032, &F->t_686v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_685)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2034, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_686) = F->t_686v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_692(P820 sa_688, P820 sb_689, rstr *op_690, rt_int line_691) {
  struct f_subtype_compare_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_688 = sa_688;
F->sb_689 = sb_689;
F->op_690 = op_690;
F->line_691 = line_691;
F->ca_2043 = NULL;
F->cb_2044 = NULL;
F->ta_2045 = NULL;
F->ta_2045 = f_resolve_subtype_256(F->sa_688, &F->ca_2043);
F->tb_2046 = NULL;
F->tb_2046 = f_resolve_subtype_256(F->sb_689, &F->cb_2044);
F->r_2047 = NULL;
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2048 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2048, rt_str("1", 1));
F->no_2049 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2049, rt_str("0", 1));
if (rt_str_eq((*F->op_690), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2048, rt_str("0", 1));
rt_str_assign(&F->no_2049, rt_str("1", 1));
}
if ((!f_same_212(F->ta_2045, F->tb_2046))) {
F->result_ = F->no_2049;
goto ret_;
} else if ((((rt_r_ichk((*(P820)rt_nil_check(F->sa_688)).kind) == (((rt_int)80LL))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->sa_688)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P820)rt_nil_check(F->sb_689)).kind) == (((rt_int)80LL))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->sb_689)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2048;
goto ret_;
}
if (f_scalar_kind_177(F->ta_2045)) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_2045, F->ca_2043)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_2046, F->cb_2044)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_2045, F->ca_2043)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_2046, F->cb_2044)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).kind) == (((rt_int)3LL)))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2047))->all), rt_str(" && ", 4)), f_float_prec_694(F->ca_2043)), rt_str(" == ", 4)), f_float_prec_694(F->cb_2044)); b_; }));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2043 != NULL) && (F->cb_2044 != NULL)) && ((*(P822)rt_nil_check(F->ca_2043)).slen != NULL)) && ((*(P822)rt_nil_check(F->cb_2044)).slen != NULL))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check((*(P822)rt_nil_check(F->ca_2043)).slen))->all)), rt_str(") == (", 6)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->cb_2044)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2043 == NULL) || ((*(P822)rt_nil_check(F->ca_2043)).slen == NULL)) && ((F->cb_2044 == NULL) || ((*(P822)rt_nil_check(F->cb_2044)).slen == NULL))))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2051 = ((rt_int)1LL), hi2052 = rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).ndim);
for (rt_int it2053 = lo2051; it2053 <= hi2052; it2053++) {
F->k_2050 = it2053;
if (((((F->ca_2043 != NULL) && (F->cb_2044 != NULL)) && (f_cons_lo_243(F->ca_2043, F->k_2050) != NULL)) && (f_cons_lo_243(F->cb_2044, F->k_2050) != NULL))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2047))->all), rt_str(" && (", 5)), (((P813)rt_nil_check(f_cons_lo_243(F->ca_2043, F->k_2050)))->all)), rt_str(") == (", 6)), (((P813)rt_nil_check(f_cons_lo_243(F->cb_2044, F->k_2050)))->all)), rt_str(") && (", 6)), (((P813)rt_nil_check(f_cons_hi_246(F->ca_2043, F->k_2050)))->all)), rt_str(") == (", 6)), (((P813)rt_nil_check(f_cons_hi_246(F->cb_2044, F->k_2050)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).kind) == (((rt_int)15LL))) && ((*(P826)rt_nil_check(F->ta_2045)).tparams != NULL)) && (F->ca_2043 != NULL)) && (F->cb_2044 != NULL))) {
F->a_2054 = NULL;
F->a_2054 = (*(P822)rt_nil_check(F->ca_2043)).args;
F->b_2055 = NULL;
F->b_2055 = (*(P822)rt_nil_check(F->cb_2044)).args;
F->at_2056 = NULL;
F->bt2_2057 = NULL;
while (((F->a_2054 != NULL) && (F->b_2055 != NULL))) {
F->x_2058 = rt_str_copy(f_gexpr_654(F->a_2054, NULL, &F->at_2056));
F->y_2059 = rt_str_copy(f_gexpr_654(F->b_2055, F->at_2056, &F->bt2_2057));
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2047))->all), rt_str(" && ", 4)), f_eq_code_368(F->at_2056, &F->x_2058, &F->y_2059)); b_; }));
F->a_2054 = (*(P820)rt_nil_check(F->a_2054)).next;
F->b_2055 = (*(P820)rt_nil_check(F->b_2055)).next;
}
} else if ((((rt_r_ichk((*(P826)rt_nil_check(F->ta_2045)).kind) == (((rt_int)17LL))) && (F->ca_2043 != NULL)) && (F->cb_2044 != NULL))) {
if ((((*(P822)rt_nil_check(F->ca_2043)).lo != NULL) && ((*(P822)rt_nil_check(F->cb_2044)).lo != NULL))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check((*(P822)rt_nil_check(F->ca_2043)).lo))->all)), rt_str(") == (", 6)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->cb_2044)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P822)rt_nil_check(F->ca_2043)).lo != NULL) || ((*(P822)rt_nil_check(F->cb_2044)).lo != NULL))) {
F->r_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_690), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P813)rt_nil_check(F->r_2047))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->r_2047))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_694(P822 c_693) {
  struct f_float_prec_694fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_693 = c_693;
if (((F->c_693 != NULL) && ((*(P822)rt_nil_check(F->c_693)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_693)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_700(P820 e_695, P826 bt_696, P822 c_697, P813 base_698, P826 *t_699) {
  struct f_file_attribute_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_695 = e_695;
F->bt_696 = bt_696;
F->c_697 = c_697;
F->base_698 = base_698;
F->t_699 = t_699;
F->t_699v = *F->t_699;
F->t_699v = g_file_mode_type_911;
if ((F->base_698 != NULL)) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_695)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P813)rt_nil_check(F->base_698))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P813)rt_nil_check(F->base_698))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_697 != NULL) && ((*(P822)rt_nil_check(F->c_697)).args != NULL))) {
if (rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_695)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_654((*(P822)rt_nil_check(F->c_697)).args, F->t_699v, &F->t_699v);
goto ret_;
} else if (((*(P820)rt_nil_check((*(P822)rt_nil_check(F->c_697)).args)).next != NULL)) {
F->result_ = f_gexpr_654((*(P820)rt_nil_check((*(P822)rt_nil_check(F->c_697)).args)).next, F->t_699v, &F->t_699v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_695)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P813)rt_nil_check((*(P820)rt_nil_check(F->e_695)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_699) = F->t_699v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_704(P820 e_701, P826 want_702, P826 *t_703) {
  struct f_gbinop_704fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_701 = e_701;
F->want_702 = want_702;
F->t_703 = t_703;
F->t_703v = *F->t_703;
F->op_2060 = NULL;
F->op_2060 = (*(P820)rt_nil_check(F->e_701)).name;
F->ta_2061 = NULL;
F->tb_2062 = NULL;
F->hint_2063 = NULL;
F->uy_2064 = NULL;
F->t_703v = g_ty_bool_901;
if ((f_lookup_154(&(((P813)rt_nil_check(F->op_2060))->all)) != NULL)) {
F->l_2065 = NULL;
F->r_2066 = NULL;
F->l_2065 = f_copy_node_675((*(P820)rt_nil_check(F->e_701)).a);
F->r_2066 = f_copy_node_675((*(P820)rt_nil_check(F->e_701)).b);
(*(P820)rt_nil_check(F->l_2065)).next = F->r_2066;
F->uy_2064 = f_user_op_780(&(((P813)rt_nil_check(F->op_2060))->all), F->l_2065);
if ((F->uy_2064 != NULL)) {
F->call_2067 = NULL;
F->call_2067 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
F->fname_2068 = NULL;
F->fname_2068 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
(*(P820)rt_nil_check(F->fname_2068)).name = F->op_2060;
(*(P820)rt_nil_check(F->call_2067)).a = F->fname_2068;
(*(P820)rt_nil_check(F->call_2067)).b = F->l_2065;
F->result_ = f_gcall_784(F->call_2067, 0, &F->t_703v);
goto ret_;
}
}
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("IN", 2))) {
F->s_2069 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, NULL, &F->tb_2062));
if ((rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2070 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, (*(P826)rt_nil_check(F->tb_2062)).elem, &F->ta_2061));
f_check_type_223(F->ta_2061, (*(P826)rt_nil_check(F->tb_2062)).elem, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
F->t_703v = g_ty_bool_901;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2070), rt_str(", ", 2)), F->s_2069), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("AND", 3)) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("OR", 2))) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("XOR", 3))) && (f_set_operands_673(F->e_701, F->want_702) != NULL))) {
F->a_2071 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, f_set_operands_673(F->e_701, F->want_702), &F->ta_2061));
F->b_2072 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, F->ta_2061, &F->tb_2062));
f_check_type_223(F->tb_2062, F->ta_2061, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
F->t_703v = F->ta_2061;
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2071), rt_str(", ", 2)), F->b_2072), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2071), rt_str(", ", 2)), F->b_2072), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2071), rt_str(", ", 2)), F->b_2072), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("AND", 3)) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("OR", 2))) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("XOR", 3)))) {
F->a_2073 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, g_ty_bool_901, &F->ta_2061));
F->b_2074 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, g_ty_bool_901, &F->tb_2062));
f_check_type_223(F->ta_2061, g_ty_bool_901, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
f_check_type_223(F->tb_2062, g_ty_bool_901, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2073), rt_str(" && ", 4)), F->b_2074), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2073), rt_str(" || ", 4)), F->b_2074), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2073), rt_str(" != ", 4)), F->b_2074), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("&", 1)) && (F->want_702 != NULL)) && ((*(P826)rt_nil_check(f_base_of_214(F->want_702))).kind == (((rt_int)6LL))))) {
F->at_2075 = NULL;
F->at_2075 = f_base_of_214(F->want_702);
F->a_2076 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, F->at_2075, &F->ta_2061));
F->b_2077 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, F->at_2075, &F->tb_2062));
f_check_type_223(F->ta_2061, F->at_2075, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
f_check_type_223(F->tb_2062, F->at_2075, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
if (((rt_r_ichk((*(P826)rt_nil_check(F->at_2075)).ndim) != ((rt_int)1LL)) || ((*(P826)rt_nil_check(f_base_of_214((*(P826)rt_nil_check(F->at_2075)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_635(F->at_2075);
F->t_703v = F->at_2075;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->at_2075)), rt_str("(", 1)), F->a_2076), rt_str(", ", 2)), F->b_2077), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("&", 1))) {
F->wa_2078 = NULL;
F->wb_2079 = NULL;
F->ws_2080 = NULL;
F->ce_2081 = NULL;
F->ce_2081 = g_ty_ascii_903;
if (((F->want_702 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_702)).kind) == (((rt_int)5LL))))) {
F->ws_2080 = F->want_702;
F->ce_2081 = f_str_elem_209(F->want_702);
}
if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2078 = F->ce_2081;
} else {
F->wa_2078 = F->ws_2080;
}
if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2079 = F->ce_2081;
} else {
F->wb_2079 = F->ws_2080;
}
{
F->a_2082 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, F->wa_2078, &F->ta_2061));
F->b_2083 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, F->wb_2079, &F->tb_2062));
F->t_703v = g_ty_string_904;
if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)5LL)))) {
F->t_703v = F->ta_2061;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)5LL)))) {
F->t_703v = F->tb_2062;
} else if ((!f_same_212(F->ta_2061, g_ty_ascii_903))) {
F->t_703v = f_new_typ_174((((rt_int)5LL)));
(*(P826)rt_nil_check(F->t_703v)).elem = F->ta_2061;
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)6LL))))) {
f_need_slice_635(F->ta_2061);
f_check_type_223(F->tb_2062, F->ta_2061, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
F->t_703v = F->ta_2061;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->ta_2061)), rt_str("(", 1)), F->a_2082), rt_str(", ", 2)), F->b_2083), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)5LL)))) {
f_check_type_223(f_str_cat_part_668(F->tb_2062), f_str_elem_209(F->ta_2061), rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)5LL)))) {
f_check_type_223(F->ta_2061, f_str_elem_209(F->tb_2062), rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
} else {
f_check_type_223(F->tb_2062, F->ta_2061, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
}
if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2082), rt_str(", ", 2)), F->b_2083), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2082), rt_str(", ", 2)), F->b_2083), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2082), rt_str(", ", 2)), F->b_2083), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2082), rt_str(", ", 2)), F->b_2083), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1)) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))) && (f_as_subtype_285((*(P820)rt_nil_check(F->e_701)).a) != NULL)) && (f_as_subtype_285((*(P820)rt_nil_check(F->e_701)).b) != NULL))) {
F->t_703v = g_ty_bool_901;
F->result_ = f_subtype_compare_692(f_as_subtype_285((*(P820)rt_nil_check(F->e_701)).a), f_as_subtype_285((*(P820)rt_nil_check(F->e_701)).b), &(((P813)rt_nil_check(F->op_2060))->all), rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P813)rt_nil_check(F->op_2060))->all)) && (!rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2084 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, NULL, &F->hint_2063));
} else if ((rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->e_701)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2063 = f_peek_type_670((*(P820)rt_nil_check(F->e_701)).b);
}
{
F->a_2085 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, F->hint_2063, &F->ta_2061));
F->b_2086 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, F->ta_2061, &F->tb_2062));
F->ct_2087 = NULL;
F->ct_2087 = f_base_of_214(F->ta_2061);
F->t_703v = g_ty_bool_901;
if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) != (((rt_int)11LL))))) {
f_check_type_223(F->tb_2062, F->ta_2061, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)11LL)))) {
F->ct_2087 = f_base_of_214(F->tb_2062);
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2086), rt_str(", ", 2)), F->a_2085), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2086), rt_str(", ", 2)), F->a_2085), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2086), rt_str(", ", 2)), F->a_2085), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2085), rt_str(", ", 2)), F->b_2086), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2086), rt_str(", ", 2)), F->a_2085), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P826)rt_nil_check(F->ct_2087)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1)))) && (!rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_356(F->ct_2087)) {
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_368(F->ct_2087, &F->a_2085, &F->b_2086);
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_368(F->ct_2087, &F->a_2085, &F->b_2086)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2085), rt_str(" == ", 4)), F->b_2086), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2085), rt_str(" != ", 4)), F->b_2086), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2085), rt_str(" ", 1)), (((P813)rt_nil_check(F->op_2060))->all)), rt_str(" ", 1)), F->b_2086), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2088 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).a, F->want_702, &F->ta_2061));
F->b_2089 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->e_701)).b, F->ta_2061, &F->tb_2062));
if (((rt_r_ichk((*(P826)rt_nil_check(F->ta_2061)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P826)rt_nil_check(F->tb_2062)).kind) == (((rt_int)3LL))))) {
F->t_703v = g_ty_float_902;
if (((rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("+", 1)) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("-", 1))) || rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2088), rt_str(" ", 1)), (((P813)rt_nil_check(F->op_2060))->all)), rt_str(" ", 1)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
}
}
f_check_type_223(F->ta_2061, g_ty_int_900, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
f_check_type_223(F->tb_2062, g_ty_int_900, rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line));
F->t_703v = g_ty_int_900;
if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P813)rt_nil_check(F->op_2060))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2088), rt_str(", ", 2)), F->b_2089), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_701)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P813)rt_nil_check(F->op_2060))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_703) = F->t_703v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_709(P820 e_705, P826 want_706, P822 ctx_707, P826 *t_708) {
  struct f_constructor_709fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_705 = e_705;
F->want_706 = want_706;
F->ctx_707 = ctx_707;
F->t_708 = t_708;
F->t_708v = *F->t_708;
F->it_2090 = NULL;
F->it_2090 = (*(P820)rt_nil_check(F->e_705)).a;
F->f_2091 = NULL;
F->vt_2092 = NULL;
if (((F->want_706 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_706)).kind) == (((rt_int)16LL))))) {
F->s_2093 = NULL;
F->s_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_294(F->want_706); b_; }));
F->t_708v = F->want_706;
while ((F->it_2090 != NULL)) {
F->v_2094 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->it_2090)).b, (*(P826)rt_nil_check(F->want_706)).elem, &F->vt_2092));
f_check_type_223(F->vt_2092, (*(P826)rt_nil_check(F->want_706)).elem, rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line));
F->s_2093 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P813)rt_nil_check(F->s_2093))->all)), rt_str(", ", 2)), F->v_2094), rt_str(")", 1)); b_; }));
F->it_2090 = (*(P820)rt_nil_check(F->it_2090)).next;
}
F->result_ = (((P813)rt_nil_check(F->s_2093))->all);
goto ret_;
}
if (((F->want_706 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_706)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P813)rt_nil_check((*(P826)rt_nil_check(F->want_706)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_706 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_706)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_723(F->e_705, F->want_706, F->ctx_707, &F->t_708v);
goto ret_;
}
if (((F->want_706 != NULL) && (rt_r_ichk((*(P826)rt_nil_check(F->want_706)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2090 == NULL) || ((*(P820)rt_nil_check(F->it_2090)).next != NULL)) || ((*(P820)rt_nil_check(F->it_2090)).a == NULL)) || ((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2090)).a)).next != NULL)) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2090)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2091 = (*(P826)rt_nil_check(F->want_706)).fields;
{
F->i_2095 = RT_R_IUNDEF;
F->i_2095 = ((rt_int)0LL);
F->tmp_2096 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2091 != NULL) && (!rt_str_eq((((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all), (((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2090)).a)).a)).name))->all))))) {
F->i_2095 = rt_add(rt_r_ichk(F->i_2095), ((rt_int)1LL));
F->f_2091 = (*(P828)rt_nil_check(F->f_2091)).next;
}
if ((F->f_2091 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2090)).a)).a)).name))->all)); b_; }));
}
F->t_708v = F->want_706;
g_cons_ctx_891 = (*(P828)rt_nil_check(F->f_2091)).c;
{
F->v_2097 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->it_2090)).b, (*(P828)rt_nil_check(F->f_2091)).t, &F->vt_2092));
f_check_type_223(F->vt_2092, (*(P828)rt_nil_check(F->f_2091)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_706)), rt_str(" ", 1)), F->tmp_2096), rt_str("; ", 2)), F->tmp_2096), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2095))), rt_str("; ", 2)), F->tmp_2096), rt_str(".u.", 3)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all))), rt_str(" = ", 3)), f_comp_value_713((*(P828)rt_nil_check(F->f_2091)).t, (*(P828)rt_nil_check(F->f_2091)).c, &F->v_2097)), rt_str("; ", 2)), F->tmp_2096), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_706 == NULL) || (rt_r_ichk((*(P826)rt_nil_check(F->want_706)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_708v = F->want_706;
F->f_2091 = (*(P826)rt_nil_check(F->want_706)).fields;
{
F->tmp_2098 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2099 = NULL;
F->parts_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_706)), rt_str(" ", 1)), F->tmp_2098), rt_str(";", 1)); b_; }));
while ((F->it_2090 != NULL)) {
F->k_2100 = NULL;
F->k_2100 = (*(P820)rt_nil_check(F->it_2090)).a;
F->shared_2101 = NULL;
if ((F->k_2100 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2100 != NULL)) {
if (((((F->f_2091 == NULL) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->k_2100)).a)).kind) != (((rt_int)7LL)))) || ((*(P820)rt_nil_check(F->k_2100)).b != NULL)) || (!rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check((*(P820)rt_nil_check(F->k_2100)).a)).name))->all), (((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all))))) {
if ((F->f_2091 == NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2090)).a)).next == NULL)) {
g_cons_ctx_891 = (*(P828)rt_nil_check(F->f_2091)).c;
{
F->v_2102 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->it_2090)).b, (*(P828)rt_nil_check(F->f_2091)).t, &F->vt_2092));
f_check_type_223(F->vt_2092, (*(P828)rt_nil_check(F->f_2091)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line));
F->parts_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2099))->all), rt_str(" ", 1)), F->tmp_2098), rt_str(".", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all))), rt_str(" = ", 3)), f_comp_value_713((*(P828)rt_nil_check(F->f_2091)).t, (*(P828)rt_nil_check(F->f_2091)).c, &F->v_2102)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2101 == NULL)) {
F->v_2103 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->it_2090)).b, (*(P828)rt_nil_check(F->f_2091)).t, &F->vt_2092));
F->shared_2101 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_223(F->vt_2092, (*(P828)rt_nil_check(F->f_2091)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line));
F->parts_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2099))->all), rt_str(" ", 1)), f_ctype_225((*(P828)rt_nil_check(F->f_2091)).t)), rt_str(" ", 1)), (((P813)rt_nil_check(F->shared_2101))->all)), rt_str(" = ", 3)), F->v_2103), rt_str(";", 1)); b_; }));
}
f_check_type_223(F->vt_2092, (*(P828)rt_nil_check(F->f_2091)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line));
F->parts_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2099))->all), rt_str(" ", 1)), F->tmp_2098), rt_str(".", 1)), f_field_c_17(&(((P813)rt_nil_check((*(P828)rt_nil_check(F->f_2091)).name))->all))), rt_str(" = ", 3)), f_comp_value_713((*(P828)rt_nil_check(F->f_2091)).t, (*(P828)rt_nil_check(F->f_2091)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P828)rt_nil_check(F->f_2091)).t, &(((P813)rt_nil_check(F->shared_2101))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2091 = (*(P828)rt_nil_check(F->f_2091)).next;
F->k_2100 = (*(P820)rt_nil_check(F->k_2100)).next;
}
F->it_2090 = (*(P820)rt_nil_check(F->it_2090)).next;
}
if ((F->f_2091 != NULL)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_705)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2099))->all), rt_str(" ", 1)), F->tmp_2098), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_708) = F->t_708v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_713(P826 t_710, P822 c_711, rstr *v_712) {
  struct f_comp_value_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_710 = t_710;
F->c_711 = c_711;
F->v_712 = v_712;
if (((F->c_711 == NULL) || (((*(P822)rt_nil_check(F->c_711)).lo != NULL) && f_has_at_715(&(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_711)).lo))->all))))) {
F->result_ = f_copy_code_364(F->t_710, &(*F->v_712));
goto ret_;
} else if ((((rt_r_ichk((*(P826)rt_nil_check(F->t_710)).kind) == (((rt_int)5LL))) && ((*(P822)rt_nil_check(F->c_711)).slen != NULL)) && (!f_has_at_715(&(((P813)rt_nil_check((*(P822)rt_nil_check(F->c_711)).slen))->all))))) {
F->result_ = f_copy_code_364(F->t_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_712)), rt_str(", ", 2)), (((P813)rt_nil_check((*(P822)rt_nil_check(F->c_711)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_710, F->c_711, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_710, &(*F->v_712)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_715(rstr *s_714) {
  struct f_has_at_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_714 = s_714;
{ rt_int lo2105 = ((rt_int)1LL), hi2106 = ((rt_int)(((*F->s_714)).len));
for (rt_int it2107 = lo2105; it2107 <= hi2106; it2107++) {
F->i_2104 = it2107;
if ((rt_r_echk(rt_str_get((*F->s_714), F->i_2104)) == 64)) {
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

static rstr f_set_elem_718(P826 st_716, rstr *v_717) {
  struct f_set_elem_718fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_716 = st_716;
F->v_717 = v_717;
F->result_ = (*F->v_717);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_723(P820 e_719, P826 at_720, P822 ctx_721, P826 *t_722) {
  struct f_array_cons_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_719 = e_719;
F->at_720 = at_720;
F->ctx_721 = ctx_721;
F->t_722 = t_722;
F->t_722v = *F->t_722;
F->tmp_2108 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2109 = NULL;
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->at_720)), rt_str(" ", 1)), F->tmp_2108), rt_str(";", 1)); b_; }));
F->it_2110 = NULL;
F->it_2110 = (*(P820)rt_nil_check(F->e_719)).a;
F->positional_2111 = RT_R_EUNDEF;
F->positional_2111 = 1;
F->t_722v = F->at_720;
while ((F->it_2110 != NULL)) {
if (((*(P820)rt_nil_check(F->it_2110)).a != NULL)) {
F->positional_2111 = 0;
}
F->it_2110 = (*(P820)rt_nil_check(F->it_2110)).next;
}
{ rt_int lo2113 = ((rt_int)1LL), hi2114 = rt_r_ichk((*(P826)rt_nil_check(F->at_720)).ndim);
for (rt_int it2115 = lo2113; it2115 <= hi2114; it2115++) {
F->k_2112 = it2115;
F->lo_2116 = NULL;
F->hi_2117 = NULL;
if ((((F->ctx_721 != NULL) && (f_cons_lo_243(F->ctx_721, F->k_2112) != NULL)) && (!f_has_at_715(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P813)rt_nil_check(f_cons_lo_243(F->ctx_721, F->k_2112)))->all); b_; }))))) {
F->lo_2116 = f_cons_lo_243(F->ctx_721, F->k_2112);
F->hi_2117 = f_cons_hi_246(F->ctx_721, F->k_2112);
} else if (((rt_r_ichk((*(P826)rt_nil_check(F->at_720)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2111))) {
if (((*(P826)rt_nil_check(f_base_of_214((*(P826)rt_nil_check(F->at_720)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2117 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->lo_2116))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P820)rt_nil_check(F->e_719)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_719)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2109))->all), rt_str(" ", 1)), F->tmp_2108), rt_str(".", 1)), f_dim_lo_233(F->k_2112)), rt_str(" = ", 3)), (((P813)rt_nil_check(F->lo_2116))->all)), rt_str("; ", 2)), F->tmp_2108), rt_str(".", 1)), f_dim_hi_235(F->k_2112)), rt_str(" = ", 3)), (((P813)rt_nil_check(F->hi_2117))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P826)rt_nil_check(F->at_720)).ndim) == ((rt_int)1LL))) {
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2109))->all), rt_str(" ", 1)), F->tmp_2108), rt_str(".lo2 = ", 7)), F->tmp_2108), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2109))->all), rt_str(" rt_int n_", 10)), F->tmp_2108), rt_str(" = ", 3)), f_acnt_240(F->at_720, &F->tmp_2108)), rt_str("; ", 2)), F->tmp_2108), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P826)rt_nil_check(F->at_720)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2108), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2108), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2108), rt_str(" + 1);", 6)); b_; }));
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->parts_2109))->all), f_fill_items_729((*(P820)rt_nil_check(F->e_719)).a, F->at_720, &F->tmp_2108, NULL, ((rt_int)1LL))); b_; }));
F->parts_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->parts_2109))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2108), rt_str("; i_++) if (seen_", 17)), F->tmp_2108), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2108), rt_str("; })", 4)); b_; }));
F->result_ = (((P813)rt_nil_check(F->parts_2109))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_722) = F->t_722v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_729(P820 items_724, P826 at_725, rstr *tmp_726, P824 prefix_727, rt_int dim_728) {
  struct f_fill_items_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_724 = items_724;
F->at_725 = at_725;
F->tmp_726 = tmp_726;
F->prefix_727 = prefix_727;
F->dim_728 = dim_728;
F->it_2118 = NULL;
F->it_2118 = F->items_724;
F->pos_2119 = RT_R_IUNDEF;
F->pos_2119 = ((rt_int)0LL);
F->r_2120 = NULL;
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2121 = NULL;
while ((F->it_2118 != NULL)) {
if (((*(P820)rt_nil_check(F->it_2118)).a == NULL)) {
if (((F->dim_728 < rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim)) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2118)).b)).kind) == (((rt_int)14LL))))) {
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_728)), rt_str(" = ", 3)), (*F->tmp_726)), rt_str(".", 1)), f_dim_lo_233(F->dim_728)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2119))), rt_str("; ", 2)), f_fill_items_729((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2118)).b)).a, F->at_725, &(*F->tmp_726), f_add_line_734(F->prefix_727, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_728)); b_; })), rt_add(F->dim_728, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2122 = rt_str_copy(f_item_value_739((*(P820)rt_nil_check(F->it_2118)).b, F->at_725, f_e_line_731(F->it_2118), &F->vt_2121));
if (((F->dim_728 == ((rt_int)1LL)) && (rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim) > ((rt_int)1LL)))) {
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" { ", 3)), F->v_2122), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2119))), rt_str(" >= n_", 6)), (*F->tmp_726)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_726)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2119))), rt_str("] = ", 4)), f_copy_code_364((*(P826)rt_nil_check(F->at_725)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_726)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2119))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" { ", 3)), F->v_2122), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_728)), rt_str(" = ", 3)), (*F->tmp_726)), rt_str(".", 1)), f_dim_lo_233(F->dim_728)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2119))), rt_str("; ", 2)), f_store_at_749(F->at_725, &(*F->tmp_726), f_add_line_734(F->prefix_727, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_728)); b_; })), F->dim_728)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2119 = rt_add(rt_r_ichk(F->pos_2119), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_728, f_list_len_67((*(P820)rt_nil_check(F->it_2118)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim))) {
F->k_2123 = NULL;
F->k_2123 = (*(P820)rt_nil_check(F->it_2118)).a;
F->d_2124 = RT_R_IUNDEF;
F->d_2124 = F->dim_728;
F->pre_2125 = NULL;
F->pre_2125 = F->prefix_727;
F->loops_2126 = NULL;
F->loops_2126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2127 = NULL;
F->ends_2127 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2128 = rt_str_copy(f_item_value_739((*(P820)rt_nil_check(F->it_2118)).b, F->at_725, rt_r_ichk((*(P820)rt_nil_check(F->it_2118)).line), &F->vt_2121));
while ((F->k_2123 != NULL)) {
F->xv_2129 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2124))));
F->loops_2126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->loops_2126))->all), f_key_loop_744(F->k_2123, F->at_725, rt_r_ichk(F->d_2124), &F->xv_2129)); b_; }));
F->ends_2127 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->ends_2127))->all), rt_str(" }", 2)); b_; }));
F->pre_2125 = f_add_line_734(F->pre_2125, &F->xv_2129);
F->d_2124 = rt_add(rt_r_ichk(F->d_2124), ((rt_int)1LL));
F->k_2123 = (*(P820)rt_nil_check(F->k_2123)).next;
}
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" { ", 3)), F->v_2128), (((P813)rt_nil_check(F->loops_2126))->all)), rt_str(" ", 1)), f_store_at_749(F->at_725, &(*F->tmp_726), F->pre_2125, rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim))), (((P813)rt_nil_check(F->ends_2127))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_728 == rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim)) || (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2118)).b)).kind) == (((rt_int)14LL))))) {
F->k_2130 = NULL;
F->k_2130 = (*(P820)rt_nil_check(F->it_2118)).a;
while ((F->k_2130 != NULL)) {
F->xv_2131 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_728)));
if ((F->dim_728 < rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim))) {
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" {", 2)), f_key_loop_744(F->k_2130, F->at_725, F->dim_728, &F->xv_2131)), rt_str(" ", 1)), f_fill_items_729((*(P820)rt_nil_check((*(P820)rt_nil_check(F->it_2118)).b)).a, F->at_725, &(*F->tmp_726), f_add_line_734(F->prefix_727, &F->xv_2131), rt_add(F->dim_728, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2132 = rt_str_copy(f_item_value_739((*(P820)rt_nil_check(F->it_2118)).b, F->at_725, rt_r_ichk((*(P820)rt_nil_check(F->it_2118)).line), &F->vt_2121));
F->r_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->r_2120))->all), rt_str(" { ", 3)), F->v_2132), f_key_loop_744(F->k_2130, F->at_725, F->dim_728, &F->xv_2131)), rt_str(" ", 1)), f_store_at_749(F->at_725, &(*F->tmp_726), f_add_line_734(F->prefix_727, &F->xv_2131), F->dim_728)), rt_str(" } }", 4)); b_; }));
}
F->k_2130 = (*(P820)rt_nil_check(F->k_2130)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->it_2118)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P826)rt_nil_check(F->at_725)).ndim), F->dim_728), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2118 = (*(P820)rt_nil_check(F->it_2118)).next;
}
F->result_ = (((P813)rt_nil_check(F->r_2120))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_731(P820 e_730) {
  struct f_e_line_731fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_730 = e_730;
F->result_ = rt_r_ichk((*(P820)rt_nil_check(F->e_730)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P824 f_add_line_734(P824 l_732, rstr *s_733) {
  struct f_add_line_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_732 = l_732;
F->s_733 = s_733;
F->r_2133 = NULL;
F->tail_2134 = NULL;
F->x_2135 = NULL;
F->p_2136 = NULL;
F->p_2136 = F->l_732;
while ((F->p_2136 != NULL)) {
{ R825 *cell2137 = rt_alloc(sizeof(R825));
(*cell2137).s = NULL;
(*cell2137).next = NULL;
F->x_2135 = cell2137;
}
(*(P824)rt_nil_check(F->x_2135)).s = (*(P824)rt_nil_check(F->p_2136)).s;
if ((F->tail_2134 == NULL)) {
F->r_2133 = F->x_2135;
} else {
(*(P824)rt_nil_check(F->tail_2134)).next = F->x_2135;
}
F->tail_2134 = F->x_2135;
F->p_2136 = (*(P824)rt_nil_check(F->p_2136)).next;
}
{ R825 *cell2138 = rt_alloc(sizeof(R825));
(*cell2138).s = NULL;
(*cell2138).next = NULL;
F->x_2135 = cell2138;
}
(*(P824)rt_nil_check(F->x_2135)).s = f_mk_3(&(*F->s_733));
if ((F->tail_2134 == NULL)) {
F->r_2133 = F->x_2135;
} else {
(*(P824)rt_nil_check(F->tail_2134)).next = F->x_2135;
}
F->result_ = F->r_2133;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_739(P820 e_735, P826 at_736, rt_int line_737, P826 *vt_738) {
  struct f_item_value_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_735 = e_735;
F->at_736 = at_736;
F->line_737 = line_737;
F->vt_738 = vt_738;
F->vt_738v = *F->vt_738;
g_cons_ctx_891 = (*(P826)rt_nil_check(F->at_736)).elemcons;
{
F->v_2139 = rt_str_copy(f_gexpr_654(F->e_735, (*(P826)rt_nil_check(F->at_736)).elem, &F->vt_738v));
f_check_type_223(F->vt_738v, (*(P826)rt_nil_check(F->at_736)).elem, F->line_737);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P826)rt_nil_check(F->at_736)).elem), rt_str(" v_ = ", 6)), f_comp_value_713((*(P826)rt_nil_check(F->at_736)).elem, (*(P826)rt_nil_check(F->at_736)).elemcons, &F->v_2139)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_738) = F->vt_738v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_744(P820 k_740, P826 at_741, rt_int d_742, rstr *xv_743) {
  struct f_key_loop_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_740 = k_740;
F->at_741 = at_741;
F->d_742 = d_742;
F->xv_743 = xv_743;
F->it_2140 = NULL;
F->lo_2141 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->k_740)).a, f_idx_type_249(F->at_741, F->d_742), &F->it_2140));
f_check_type_223(F->it_2140, f_idx_type_249(F->at_741, F->d_742), rt_r_ichk((*(P820)rt_nil_check(F->k_740)).line));
if (((*(P820)rt_nil_check(F->k_740)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_743)), rt_str(" = ", 3)), F->lo_2141), rt_str(";", 1));
goto ret_;
}
{
F->hi_2142 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->k_740)).b, f_idx_type_249(F->at_741, F->d_742), &F->it_2140));
f_check_type_223(F->it_2140, f_idx_type_249(F->at_741, F->d_742), rt_r_ichk((*(P820)rt_nil_check(F->k_740)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_743)), rt_str(" = ", 3)), F->lo_2141), rt_str(", h", 3)), (*F->xv_743)), rt_str(" = ", 3)), F->hi_2142), rt_str("; ", 2)), (*F->xv_743)), rt_str(" <= h", 5)), (*F->xv_743)), rt_str("; ", 2)), (*F->xv_743)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_749(P826 at_745, rstr *tmp_746, P824 xs_747, rt_int n_748) {
  struct f_store_at_749fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_745 = at_745;
F->tmp_746 = tmp_746;
F->xs_747 = xs_747;
F->n_748 = n_748;
F->off_2143 = NULL;
F->x_2144 = NULL;
F->x_2144 = F->xs_747;
F->k_2145 = RT_R_IUNDEF;
F->k_2145 = ((rt_int)0LL);
while ((F->x_2144 != NULL)) {
F->k_2145 = rt_add(rt_r_ichk(F->k_2145), ((rt_int)1LL));
{
F->l_2146 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_746), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_2145))));
F->h_2147 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_746), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_2145))));
if ((F->off_2143 == NULL)) {
F->off_2143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P813)rt_nil_check((*(P824)rt_nil_check(F->x_2144)).s))->all)), rt_str(", ", 2)), F->l_2146), rt_str(", ", 2)), F->h_2147), rt_str(") - ", 4)), F->l_2146), rt_str(")", 1)); b_; }));
} else {
F->off_2143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P813)rt_nil_check(F->off_2143))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2146), rt_str(", ", 2)), F->h_2147), rt_str(") + rt_index(", 13)), (((P813)rt_nil_check((*(P824)rt_nil_check(F->x_2144)).s))->all)), rt_str(", ", 2)), F->l_2146), rt_str(", ", 2)), F->h_2147), rt_str(") - ", 4)), F->l_2146), rt_str(")", 1)); b_; }));
}
}
F->x_2144 = (*(P824)rt_nil_check(F->x_2144)).next;
}
if ((rt_r_ichk(F->k_2145) != rt_r_ichk((*(P826)rt_nil_check(F->at_745)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P826)rt_nil_check(F->at_745)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P813)rt_nil_check(F->off_2143))->all)), rt_str("; ", 2)), (*F->tmp_746)), rt_str(".p[o_] = ", 9)), f_copy_code_364((*(P826)rt_nil_check(F->at_745)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_746)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_752(P830 y_750, P820 args_751) {
  struct f_fits_752fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_750 = y_750;
F->args_751 = args_751;
F->a_2148 = NULL;
F->a_2148 = F->args_751;
F->pm_2149 = NULL;
F->pm_2149 = (*(P830)rt_nil_check(F->y_750)).params;
F->t_2150 = NULL;
F->saved_2151 = NULL;
F->saved_2151 = g_code_870;
F->ok_2152 = RT_R_EUNDEF;
F->ok_2152 = 1;
F->lv_2153 = NULL;
F->lc_2154 = NULL;
F->ro_2155 = RT_R_EUNDEF;
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = f_new_buffer_24();
{ rt_frame xf2156;
if (RT_TRY(xf2156)) {
while (((rt_r_echk(F->ok_2152) && (F->a_2148 != NULL)) && (F->pm_2149 != NULL))) {
if (((rt_r_ichk((*(P832)rt_nil_check(F->pm_2149)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->pm_2149)).mode) == (((rt_int)3LL))))) {
f_lvalue_623(F->a_2148, &F->lv_2153, &F->t_2150, &F->lc_2154, &F->ro_2155);
} else {
F->v_2158 = rt_str_copy(f_gexpr_654(F->a_2148, (*(P832)rt_nil_check(F->pm_2149)).t, &F->t_2150));
}
if ((!(f_same_212(F->t_2150, (*(P832)rt_nil_check(F->pm_2149)).t) || ((rt_r_ichk((*(P826)rt_nil_check(F->t_2150)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P826)rt_nil_check((*(P832)rt_nil_check(F->pm_2149)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2152 = 0;
}
F->a_2148 = (*(P820)rt_nil_check(F->a_2148)).next;
F->pm_2149 = (*(P832)rt_nil_check(F->pm_2149)).next;
}
if (((F->a_2148 != NULL) || (F->pm_2149 != NULL))) {
F->ok_2152 = 0;
}
RT_POP(xf2156);
} else {
RT_POP(xf2156);
int x2157 = rt_xcur;
if (0 || x2157 == ex_compile_error_1) {
F->ok_2152 = 0;
} else {
rt_raise(x2157);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = F->saved_2151;
F->result_ = rt_r_echk(F->ok_2152);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_resolve_overload_758(rstr *name_753, P820 tt_754, P820 args_755, int is_stmt_756, rt_int line_757) {
  struct f_resolve_overload_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_753 = name_753;
F->tt_754 = tt_754;
F->args_755 = args_755;
F->is_stmt_756 = is_stmt_756;
F->line_757 = line_757;
F->y_2159 = NULL;
F->first_2160 = NULL;
F->n_2161 = RT_R_IUNDEF;
F->n_2161 = ((rt_int)0LL);
{ rt_int lo2163 = ((rt_int)1LL), hi2164 = ((rt_int)3LL);
for (rt_int it2165 = lo2163; it2165 <= hi2164; it2165++) {
F->pass_2162 = it2165;
F->y_2159 = f_overload_chain_764(&(*F->name_753), F->pass_2162);
while ((F->y_2159 != NULL)) {
if (((rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_2159)).name))->all), (*F->name_753)) && ((rt_r_ichk((*(P830)rt_nil_check(F->y_2159)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_2159)).kind) == (((rt_int)4LL))))) && ((F->pass_2162 != ((rt_int)1LL)) || (rt_r_ichk((*(P830)rt_nil_check(F->y_2159)).depth) >= rt_r_ichk(g_gdepth_889))))) {
F->n_2161 = rt_add(rt_r_ichk(F->n_2161), ((rt_int)1LL));
if ((F->first_2160 == NULL)) {
F->first_2160 = F->y_2159;
}
if (((((rt_r_ichk((*(P830)rt_nil_check(F->y_2159)).kind) == (((rt_int)4LL))) == F->is_stmt_756) && f_tt_fits_761(F->y_2159, F->tt_754)) && f_fits_752(F->y_2159, F->args_755))) {
F->result_ = F->y_2159;
goto ret_;
}
}
F->y_2159 = (*(P830)rt_nil_check(F->y_2159)).chain;
}
}
}
if (f_is_builtin_766(&(*F->name_753))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2161) > ((rt_int)1LL))) {
f_fail_23(F->line_757, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_753)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2160;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_761(P830 y_759, P820 tt_760) {
  struct f_tt_fits_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_759 = y_759;
F->tt_760 = tt_760;
F->f_2166 = NULL;
F->a_2167 = NULL;
F->saved_2168 = NULL;
F->saved_2168 = g_code_870;
F->ok_2169 = RT_R_EUNDEF;
F->ok_2169 = 1;
if ((((*(P830)rt_nil_check(F->y_759)).decl == NULL) || ((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_759)).decl)).e == NULL))) {
F->result_ = (F->tt_760 == NULL);
goto ret_;
} else if ((F->tt_760 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2166 = (*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_759)).decl)).e;
F->a_2167 = F->tt_760;
g_trial_898 = rt_add(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = f_new_buffer_24();
{ rt_frame xf2170;
if (RT_TRY(xf2170)) {
while (((rt_r_echk(F->ok_2169) && (F->f_2166 != NULL)) && (F->a_2167 != NULL))) {
F->fc_2172 = NULL;
F->ac_2173 = NULL;
F->fst_2174 = NULL;
F->fst_2174 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->f_2166)).line));
F->ft_2175 = NULL;
F->at_2176 = NULL;
(*(P820)rt_nil_check(F->fst_2174)).name = (*(P820)rt_nil_check(F->f_2166)).name;
F->ft_2175 = f_resolve_subtype_256(F->fst_2174, &F->fc_2172);
if ((rt_r_ichk((*(P820)rt_nil_check(F->a_2167)).kind) >= (((rt_int)70LL)))) {
F->at_2176 = f_resolve_subtype_256(F->a_2167, &F->ac_2173);
} else {
F->ast_2177 = NULL;
F->ast_2177 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P820)rt_nil_check(F->a_2167)).line));
(*(P820)rt_nil_check(F->ast_2177)).name = (*(P820)rt_nil_check(F->a_2167)).name;
F->at_2176 = f_resolve_subtype_256(F->ast_2177, &F->ac_2173);
}
F->ok_2169 = f_same_212(F->ft_2175, F->at_2176);
F->f_2166 = (*(P820)rt_nil_check(F->f_2166)).next;
F->a_2167 = (*(P820)rt_nil_check(F->a_2167)).next;
}
F->ok_2169 = ((rt_r_echk(F->ok_2169) && (F->f_2166 == NULL)) && (F->a_2167 == NULL));
RT_POP(xf2170);
} else {
RT_POP(xf2170);
int x2171 = rt_xcur;
if (0 || x2171 == ex_compile_error_1) {
F->ok_2169 = 0;
} else {
rt_raise(x2171);
}
}
}
g_trial_898 = rt_sub(rt_r_ichk(g_trial_898), ((rt_int)1LL));
g_code_870 = F->saved_2168;
F->result_ = rt_r_echk(F->ok_2169);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_overload_chain_764(rstr *name_762, rt_int pass_763) {
  struct f_overload_chain_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_762 = name_762;
F->pass_763 = pass_763;
if (((g_genv_857 == NULL) && (F->pass_763 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_763 == ((rt_int)2LL))) {
F->result_ = ({ A836 b_ = (((P834)rt_nil_check(g_genv_857))->all); b_.p[(rt_index(f_hash_152(&(*F->name_762)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A836 b_ = (((P834)rt_nil_check(g_table_856))->all); b_.p[(rt_index(f_hash_152(&(*F->name_762)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_766(rstr *n_765) {
  struct f_is_builtin_766fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_765 = n_765;
F->result_ = (((((((((((((((rt_str_eq((*F->n_765), rt_str("ABS", 3)) || rt_str_eq((*F->n_765), rt_str("POS", 3))) || rt_str_eq((*F->n_765), rt_str("SUCC", 4))) || rt_str_eq((*F->n_765), rt_str("PRED", 4))) || rt_str_eq((*F->n_765), rt_str("SQRT", 4))) || rt_str_eq((*F->n_765), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_765), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_765), rt_str("WRITE", 5))) || rt_str_eq((*F->n_765), rt_str("READLN", 6))) || rt_str_eq((*F->n_765), rt_str("SEND", 4))) || rt_str_eq((*F->n_765), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_765), rt_str("DELAY", 5))) || rt_str_eq((*F->n_765), rt_str("TIME", 4))) || rt_str_eq((*F->n_765), rt_str("CNVT", 4))) || rt_str_eq((*F->n_765), rt_str("FORMAT", 6))) || f_is_low_level_768(&(*F->n_765)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_768(rstr *n_767) {
  struct f_is_low_level_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_767 = n_767;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_767), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_767), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_767), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_767), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_767), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_767), rt_str("LOCK", 4))) || rt_str_eq((*F->n_767), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_767), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_767), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_767), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_767), rt_str("WAITING", 7))) || rt_str_eq((*F->n_767), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_767), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_767), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_767), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_767), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_767), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_767), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_767), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_772(P820 tt_769, rt_int line_770, P826 *t_771) {
  struct f_me_high_772fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_769 = tt_769;
F->line_770 = line_770;
F->t_771 = t_771;
F->t_771v = *F->t_771;
F->c_2178 = NULL;
if ((F->tt_769 == NULL)) {
f_fail_23(F->line_770, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_771v = f_resolve_subtype_256(F->tt_769, &F->c_2178);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_771v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_774(F->t_771v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_771) = F->t_771v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_774(P826 t_773) {
  struct f_type_tag_774fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_773 = t_773;
if (((*(P826)rt_nil_check(F->t_773)).name != NULL)) {
F->result_ = (((P813)rt_nil_check((*(P826)rt_nil_check(F->t_773)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_777(P820 e_775, rstr *name_776) {
  struct f_lock_ref_777fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_775 = e_775;
F->name_776 = name_776;
F->lv_2179 = NULL;
F->t_2180 = NULL;
F->c_2181 = NULL;
F->ro_2182 = RT_R_EUNDEF;
f_lvalue_623(F->e_775, &F->lv_2179, &F->t_2180, &F->c_2181, &F->ro_2182);
if ((rt_r_ichk((*(P826)rt_nil_check(F->t_2180)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_775)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_776), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P813)rt_nil_check(F->lv_2179))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P830 f_user_op_780(rstr *op_778, P820 args_779) {
  struct f_user_op_780fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_778 = op_778;
F->args_779 = args_779;
F->y_2183 = NULL;
{ rt_int lo2185 = ((rt_int)1LL), hi2186 = ((rt_int)3LL);
for (rt_int it2187 = lo2185; it2187 <= hi2186; it2187++) {
F->pass_2184 = it2187;
F->y_2183 = f_overload_chain_764(&(*F->op_778), F->pass_2184);
while ((F->y_2183 != NULL)) {
if ((((rt_str_eq((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_2183)).name))->all), (*F->op_778)) && (rt_r_ichk((*(P830)rt_nil_check(F->y_2183)).kind) == (((rt_int)3LL)))) && ((F->pass_2184 != ((rt_int)1LL)) || (rt_r_ichk((*(P830)rt_nil_check(F->y_2183)).depth) >= rt_r_ichk(g_gdepth_889)))) && f_fits_752(F->y_2183, F->args_779))) {
F->result_ = F->y_2183;
goto ret_;
}
F->y_2183 = (*(P830)rt_nil_check(F->y_2183)).chain;
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

static rstr f_gcall_784(P820 e_781, int is_stmt_782, P826 *t_783) {
  struct f_gcall_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_781 = e_781;
F->is_stmt_782 = is_stmt_782;
F->t_783 = t_783;
F->t_783v = *F->t_783;
F->fn_2188 = NULL;
F->fn_2188 = (*(P820)rt_nil_check(F->e_781)).a;
F->tt_2189 = NULL;
F->y_2190 = NULL;
F->args_2191 = NULL;
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2192 = NULL;
F->a_2192 = (*(P820)rt_nil_check(F->e_781)).b;
F->pm_2193 = NULL;
F->lt_2194 = NULL;
F->vt_2195 = NULL;
F->lv_2196 = NULL;
F->lc_2197 = NULL;
F->ro_2198 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P820)rt_nil_check(F->fn_2188)).kind) == (((rt_int)12LL)))) {
F->tt_2189 = (*(P820)rt_nil_check(F->fn_2188)).b;
F->fn_2188 = (*(P820)rt_nil_check(F->fn_2188)).a;
}
F->y_2190 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all));
if ((F->y_2190 == NULL)) {
F->result_ = f_builtin_809(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), F->is_stmt_782, &F->t_783v);
goto ret_;
}
if ((((rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)10LL))))) {
F->alt_2199 = NULL;
F->alt_2199 = f_resolve_overload_758(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, F->is_stmt_782, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
if ((F->alt_2199 != NULL)) {
F->y_2190 = F->alt_2199;
} else if (f_is_builtin_766(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all))) {
F->result_ = f_builtin_809(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), F->is_stmt_782, &F->t_783v);
goto ret_;
}
}
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) == (((rt_int)10LL)))) {
F->y_2190 = f_instantiate_599(F->y_2190, F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
} else if (((rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) == (((rt_int)4LL))))) {
F->y_2190 = f_resolve_overload_758(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, F->is_stmt_782, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
if ((F->y_2190 == NULL)) {
F->result_ = f_builtin_809(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), F->tt_2189, (*(P820)rt_nil_check(F->e_781)).b, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), F->is_stmt_782, &F->t_783v);
goto ret_;
}
}
if (((rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_798(F->y_2190, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
if (((*(P830)rt_nil_check(F->y_2190)).capn != NULL)) {
F->cr_2200 = NULL;
F->cr_2200 = g_caps_875;
while ((F->cr_2200 != NULL)) {
if (((*(P847)rt_nil_check(F->cr_2200)).d == (*(P830)rt_nil_check(F->y_2190)).capn)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_2190)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2200 = (*(P847)rt_nil_check(F->cr_2200)).next;
}
}
if ((F->is_stmt_782 && (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_782) && (rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2193 = (*(P830)rt_nil_check(F->y_2190)).params;
if ((rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).level) > ((rt_int)0LL))) {
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2202 = ((rt_int)1LL), hi2203 = rt_sub(rt_r_ichk(g_cur_level_873), rt_r_ichk((*(P830)rt_nil_check(F->y_2190)).level));
for (rt_int it2204 = lo2202; it2204 <= hi2203; it2204++) {
F->i_2201 = it2204;
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2192 != NULL) && (F->pm_2193 != NULL))) {
if ((((rt_int)(((((P813)rt_nil_check(F->args_2191))->all)).len)) > ((rt_int)0LL))) {
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P832)rt_nil_check(F->pm_2193)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P832)rt_nil_check(F->pm_2193)).mode) == (((rt_int)3LL))))) {
f_lvalue_623(F->a_2192, &F->lv_2196, &F->lt_2194, &F->lc_2197, &F->ro_2198);
if (rt_r_echk(F->ro_2198)) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check((*(P832)rt_nil_check(F->pm_2193)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_223(F->lt_2194, (*(P832)rt_nil_check(F->pm_2193)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str("&", 1)), (((P813)rt_nil_check(F->lv_2196))->all)), f_actual_bounds_802((*(P832)rt_nil_check(F->pm_2193)).t, F->lt_2194, F->lc_2197)); b_; }));
} else if (((rt_r_ichk((*(P832)rt_nil_check(F->pm_2193)).mode) == (((rt_int)4LL))) && f_is_lvalue_617(F->a_2192))) {
f_lvalue_623(F->a_2192, &F->lv_2196, &F->lt_2194, &F->lc_2197, &F->ro_2198);
f_check_type_223(F->lt_2194, (*(P832)rt_nil_check(F->pm_2193)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str("&", 1)), (((P813)rt_nil_check(F->lv_2196))->all)), f_actual_bounds_802((*(P832)rt_nil_check(F->pm_2193)).t, F->lt_2194, F->lc_2197)); b_; }));
} else if ((rt_r_ichk((*(P832)rt_nil_check(F->pm_2193)).mode) == (((rt_int)4LL)))) {
F->v_2205 = rt_str_copy(f_gexpr_in_662(F->a_2192, (*(P832)rt_nil_check(F->pm_2193)).t, (*(P832)rt_nil_check(F->pm_2193)).c, &F->vt_2195));
F->ct_2206 = rt_str_copy(f_ctype_225((*(P832)rt_nil_check(F->pm_2193)).t));
f_check_type_223(F->vt_2195, (*(P832)rt_nil_check(F->pm_2193)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str("({ ", 3)), F->ct_2206), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2206), rt_str(")); *b_ = ", 10)), F->v_2205), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P832)rt_nil_check(F->pm_2193)).t)) {
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2207 = rt_str_copy(f_gexpr_in_662(F->a_2192, (*(P832)rt_nil_check(F->pm_2193)).t, (*(P832)rt_nil_check(F->pm_2193)).c, &F->vt_2195));
f_check_type_223(F->vt_2195, (*(P832)rt_nil_check(F->pm_2193)).t, rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line));
F->args_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P813)rt_nil_check(F->args_2191))->all), F->v_2207); b_; }));
}
F->a_2192 = (*(P820)rt_nil_check(F->a_2192)).next;
F->pm_2193 = (*(P832)rt_nil_check(F->pm_2193)).next;
}
if (((F->a_2192 != NULL) || (F->pm_2193 != NULL))) {
f_fail_23(rt_r_ichk((*(P820)rt_nil_check(F->e_781)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P820)rt_nil_check(F->fn_2188)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P820)rt_nil_check(F->e_781)).b), f_list_len_67(F->a_2192)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_783v = (*(P830)rt_nil_check(F->y_2190)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_2190)).cname))->all), rt_str("(", 1)), (((P813)rt_nil_check(F->args_2191))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_783) = F->t_783v;
  RT_FPOP();
  return F->result_;
}

static P824 f_requires_786(P830 y_785) {
  struct f_requires_786fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_785 = y_785;
if (rt_r_echk((*(P830)rt_nil_check(F->y_785)).reqdone)) {
F->result_ = (*(P830)rt_nil_check(F->y_785)).reqs;
goto ret_;
}
(*(P830)rt_nil_check(F->y_785)).reqdone = 1;
if ((((*(P830)rt_nil_check(F->y_785)).decl != NULL) && (((rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_785)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_785)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_785)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2208 = NULL;
F->imp_2208 = (*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_785)).decl)).d;
while ((F->imp_2208 != NULL)) {
f_add_req_789(F->y_785, &(((P813)rt_nil_check((*(P820)rt_nil_check(F->imp_2208)).name))->all));
F->imp_2208 = (*(P820)rt_nil_check(F->imp_2208)).next;
}
f_require_calls_792(F->y_785, (*(P820)rt_nil_check((*(P830)rt_nil_check(F->y_785)).decl)).c);
}
F->result_ = (*(P830)rt_nil_check(F->y_785)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_789(P830 y_787, rstr *name_788) {
  struct f_add_req_789fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_787 = y_787;
F->name_788 = name_788;
F->l_2209 = NULL;
if ((!f_seen_name_375((*(P830)rt_nil_check(F->y_787)).reqs, &(*F->name_788)))) {
{ R825 *cell2210 = rt_alloc(sizeof(R825));
(*cell2210).s = NULL;
(*cell2210).next = NULL;
F->l_2209 = cell2210;
}
(*(P824)rt_nil_check(F->l_2209)).s = f_mk_3(&(*F->name_788));
(*(P824)rt_nil_check(F->l_2209)).next = (*(P830)rt_nil_check(F->y_787)).reqs;
(*(P830)rt_nil_check(F->y_787)).reqs = F->l_2209;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_792(P830 y_790, P820 e_791) {
  struct f_require_calls_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_790 = y_790;
F->e_791 = e_791;
F->x_2211 = NULL;
F->x_2211 = F->e_791;
while ((F->x_2211 != NULL)) {
if ((((((rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)51LL))))) {
F->x_2211 = (*(P820)rt_nil_check(F->x_2211)).next;
} else {
F->callee_2212 = NULL;
if (((((rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->x_2211)).kind) == (((rt_int)21LL)))) && ((*(P820)rt_nil_check(F->x_2211)).a != NULL)) && (rt_r_ichk((*(P820)rt_nil_check((*(P820)rt_nil_check(F->x_2211)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2212 = (*(P820)rt_nil_check(F->x_2211)).a;
}
if ((F->callee_2212 != NULL)) {
F->z_2213 = NULL;
F->z_2213 = f_lookup_154(&(((P813)rt_nil_check((*(P820)rt_nil_check(F->callee_2212)).name))->all));
if ((((F->z_2213 != NULL) && (F->z_2213 != F->y_790)) && ((rt_r_ichk((*(P830)rt_nil_check(F->z_2213)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P830)rt_nil_check(F->z_2213)).kind) == (((rt_int)3LL)))))) {
F->l_2214 = NULL;
F->l_2214 = f_requires_786(F->z_2213);
while ((F->l_2214 != NULL)) {
f_add_req_789(F->y_790, &(((P813)rt_nil_check((*(P824)rt_nil_check(F->l_2214)).s))->all));
F->l_2214 = (*(P824)rt_nil_check(F->l_2214)).next;
}
}
}
if (((*(P820)rt_nil_check(F->x_2211)).a != NULL)) {
f_require_calls_792(F->y_790, (*(P820)rt_nil_check(F->x_2211)).a);
}
if (((*(P820)rt_nil_check(F->x_2211)).b != NULL)) {
f_require_calls_792(F->y_790, (*(P820)rt_nil_check(F->x_2211)).b);
}
if (((*(P820)rt_nil_check(F->x_2211)).c != NULL)) {
f_require_calls_792(F->y_790, (*(P820)rt_nil_check(F->x_2211)).c);
}
F->x_2211 = (*(P820)rt_nil_check(F->x_2211)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_795(P820 elems_793, rstr *name_794) {
  struct f_declared_in_795fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_793 = elems_793;
F->name_794 = name_794;
F->e_2215 = NULL;
F->e_2215 = F->elems_793;
while ((F->e_2215 != NULL)) {
if ((((rt_r_ichk((*(P820)rt_nil_check(F->e_2215)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P820)rt_nil_check(F->e_2215)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P813)rt_nil_check((*(P820)rt_nil_check(F->e_2215)).name))->all), (*F->name_794)))) {
F->result_ = 1;
goto ret_;
}
F->e_2215 = (*(P820)rt_nil_check(F->e_2215)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_798(P830 y_796, rt_int line_797) {
  struct f_check_requires_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_796 = y_796;
F->line_797 = line_797;
F->l_2216 = NULL;
F->l_2216 = f_requires_786(F->y_796);
if ((((*(P830)rt_nil_check(F->y_796)).home == NULL) || (rt_r_ichk((*(P830)rt_nil_check(F->y_796)).level) != rt_r_ichk(g_cur_level_873)))) {
goto ret_;
}
while ((F->l_2216 != NULL)) {
F->z_2217 = NULL;
F->z_2217 = f_lookup_154(&(((P813)rt_nil_check((*(P824)rt_nil_check(F->l_2216)).s))->all));
if ((f_declared_in_795((*(P830)rt_nil_check(F->y_796)).home, &(((P813)rt_nil_check((*(P824)rt_nil_check(F->l_2216)).s))->all)) && ((F->z_2217 == NULL) || (rt_r_ichk((*(P830)rt_nil_check(F->z_2217)).depth) < rt_r_ichk((*(P830)rt_nil_check(F->y_796)).depth))))) {
f_fail_23(F->line_797, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check((*(P830)rt_nil_check(F->y_796)).name))->all), rt_str(" requires ", 10)), (((P813)rt_nil_check((*(P824)rt_nil_check(F->l_2216)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2216 = (*(P824)rt_nil_check(F->l_2216)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_802(P826 ft_799, P826 t_800, P822 c_801) {
  struct f_actual_bounds_802fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_799 = ft_799;
F->t_800 = t_800;
F->c_801 = c_801;
if ((!f_scalar_kind_177(F->ft_799))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_800, F->c_801)), rt_str(", ", 2)), f_sub_hi_192(F->t_800, F->c_801));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_809(rstr *name_803, P820 tt_804, P820 args_805, rt_int line_806, int is_stmt_807, P826 *t_808) {
  struct f_builtin_809fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_803 = name_803;
F->tt_804 = tt_804;
F->args_805 = args_805;
F->line_806 = line_806;
F->is_stmt_807 = is_stmt_807;
F->t_808 = t_808;
F->t_808v = *F->t_808;
F->at_2218 = NULL;
F->n_2219 = RT_R_IUNDEF;
F->n_2219 = f_list_len_67(F->args_805);
F->t_808v = g_ty_void_905;
if (((rt_str_eq((*F->name_803), rt_str("POS", 3)) || rt_str_eq((*F->name_803), rt_str("SUCC", 4))) || rt_str_eq((*F->name_803), rt_str("PRED", 4)))) {
F->a_2220 = rt_str_copy(f_gexpr_654(F->args_805, NULL, &F->at_2218));
if (rt_str_eq((*F->name_803), rt_str("POS", 3))) {
if (((*(P826)rt_nil_check(f_base_of_214(F->at_2218))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2220), rt_str(") + 1)", 6));
goto ret_;
}
F->t_808v = F->at_2218;
if ((rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_803), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2220), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2220), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_803), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2220), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(f_base_of_214(F->at_2218))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2220), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P826)rt_nil_check(f_base_of_214(F->at_2218))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_803), rt_str("SQRT", 4)) || rt_str_eq((*F->name_803), rt_str("SIN", 3))) || rt_str_eq((*F->name_803), rt_str("COS", 3))) || rt_str_eq((*F->name_803), rt_str("EXP", 3))) || rt_str_eq((*F->name_803), rt_str("LN", 2))) || rt_str_eq((*F->name_803), rt_str("FLOOR", 5)))) {
F->a_2221 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_float_902, &F->at_2218));
F->t_808v = g_ty_float_902;
if (rt_str_eq((*F->name_803), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2221), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_803)), rt_str("(", 1)), F->a_2221), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("IFLOAT", 6))) {
F->a_2222 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, g_ty_int_900, &F->at_2218));
F->t_808v = g_ty_float_902;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2222), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("IFIX", 4))) {
F->a_2223 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_float_902, &F->at_2218));
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2223), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("FORMAT", 6))) {
F->a_2224 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_float_902, &F->at_2218));
F->n1_2225 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, g_ty_int_900, &F->at_2218));
F->m1_2226 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_805)).next)).next, g_ty_int_900, &F->at_2218));
F->t_808v = g_ty_string_904;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2224), rt_str(", ", 2)), F->n1_2225), rt_str(", ", 2)), F->m1_2226), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("ABS", 3))) {
F->a_2227 = rt_str_copy(f_gexpr_654(F->args_805, NULL, &F->at_2218));
F->t_808v = F->at_2218;
if ((rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2227), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2227), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("CNVT", 4))) {
if ((F->tt_804 == NULL)) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2228 = rt_str_copy(f_gexpr_654(F->args_805, NULL, &F->at_2218));
if (((rt_r_ichk((*(P820)rt_nil_check(F->tt_804)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)1LL))))) {
F->t_808v = g_ty_string_904;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2228), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->tt_804)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)3LL))))) {
F->t_808v = g_ty_string_904;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2228), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->tt_804)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)2LL))))) {
F->t_808v = g_ty_string_904;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2228), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P820)rt_nil_check(F->tt_804)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)5LL))))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2228), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_803), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2219) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2229 = NULL;
F->last_2229 = F->args_805;
while (((*(P820)rt_nil_check(F->last_2229)).next != NULL)) {
F->last_2229 = (*(P820)rt_nil_check(F->last_2229)).next;
}
{
F->a_2230 = rt_str_copy(f_gexpr_654(F->last_2229, g_ty_string_904, &F->at_2218));
f_check_type_223(F->at_2218, g_ty_string_904, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2230), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_803), rt_str("WRITE", 5))) {
F->a_2231 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, NULL, &F->at_2218));
if ((rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2231), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P826)rt_nil_check(F->at_2218)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2231), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_803), rt_str("READLN", 6))) {
F->lv_2232 = NULL;
F->lc_2233 = NULL;
F->ro_2234 = RT_R_EUNDEF;
F->last_2235 = NULL;
F->last_2235 = F->args_805;
while (((*(P820)rt_nil_check(F->last_2235)).next != NULL)) {
F->last_2235 = (*(P820)rt_nil_check(F->last_2235)).next;
}
f_lvalue_623(F->last_2235, &F->lv_2232, &F->at_2218, &F->lc_2233, &F->ro_2234);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P813)rt_nil_check(F->lv_2232))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("SIZELN", 6))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("EOF", 3))) {
F->t_808v = g_ty_bool_901;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_803), rt_str("SYS_OUT", 7)))) {
F->t_808v = g_ty_file_906;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("OPEN", 4)) || rt_str_eq((*F->name_803), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("SEND", 4)) || rt_str_eq((*F->name_803), rt_str("RECEIVE", 7)))) {
F->lv_2236 = NULL;
F->dv_2237 = NULL;
F->lc_2238 = NULL;
F->ro_2239 = RT_R_EUNDEF;
F->mt_2240 = NULL;
F->dt_2241 = NULL;
f_lvalue_623(F->args_805, &F->lv_2236, &F->mt_2240, &F->lc_2238, &F->ro_2239);
if ((rt_r_ichk((*(P826)rt_nil_check(F->mt_2240)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_803), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_803), rt_str("RECEIVE", 7))) {
f_lvalue_623((*(P820)rt_nil_check(F->args_805)).next, &F->dv_2237, &F->dt_2241, &F->lc_2238, &F->ro_2239);
f_check_type_223(F->dt_2241, (*(P826)rt_nil_check(F->mt_2240)).elem, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P813)rt_nil_check(F->lv_2236))->all)), rt_str(", &", 3)), (((P813)rt_nil_check(F->dv_2237))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2242 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, (*(P826)rt_nil_check(F->mt_2240)).elem, &F->at_2218));
f_check_type_223(F->at_2218, (*(P826)rt_nil_check(F->mt_2240)).elem, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P826)rt_nil_check(F->mt_2240)).elem)), rt_str(" m_ = ", 6)), F->v_2242), rt_str("; rt_send(", 10)), (((P813)rt_nil_check(F->lv_2236))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_803), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_803), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2243 = NULL;
F->lc_2244 = NULL;
F->ro_2245 = RT_R_EUNDEF;
F->mt_2246 = NULL;
f_lvalue_623(F->args_805, &F->lv_2243, &F->mt_2246, &F->lc_2244, &F->ro_2245);
if ((rt_r_ichk((*(P826)rt_nil_check(F->mt_2246)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_803), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_803))), rt_str("(", 1)), (((P813)rt_nil_check(F->lv_2243))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_803), rt_str("COND_RECEIVE", 12)))) {
F->lv_2247 = NULL;
F->dv_2248 = NULL;
F->bv_2249 = NULL;
F->lc_2250 = NULL;
F->ro_2251 = RT_R_EUNDEF;
F->mt_2252 = NULL;
F->dt_2253 = NULL;
F->bt_2254 = NULL;
f_lvalue_623(F->args_805, &F->lv_2247, &F->mt_2252, &F->lc_2250, &F->ro_2251);
if ((rt_r_ichk((*(P826)rt_nil_check(F->mt_2252)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_803), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_623((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_805)).next)).next, &F->bv_2249, &F->bt_2254, &F->lc_2250, &F->ro_2251);
f_check_type_223(F->bt_2254, g_ty_bool_901, F->line_806);
if (rt_str_eq((*F->name_803), rt_str("COND_RECEIVE", 12))) {
f_lvalue_623((*(P820)rt_nil_check(F->args_805)).next, &F->dv_2248, &F->dt_2253, &F->lc_2250, &F->ro_2251);
f_check_type_223(F->dt_2253, (*(P826)rt_nil_check(F->mt_2252)).elem, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->bv_2249))->all), rt_str(" = rt_cond_receive(", 19)), (((P813)rt_nil_check(F->lv_2247))->all)), rt_str(", &", 3)), (((P813)rt_nil_check(F->dv_2248))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2255 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, (*(P826)rt_nil_check(F->mt_2252)).elem, &F->at_2218));
f_check_type_223(F->at_2218, (*(P826)rt_nil_check(F->mt_2252)).elem, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P826)rt_nil_check(F->mt_2252)).elem)), rt_str(" m_ = ", 6)), F->v_2255), rt_str("; ", 2)), (((P813)rt_nil_check(F->bv_2249))->all)), rt_str(" = rt_cond_send(", 16)), (((P813)rt_nil_check(F->lv_2247))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_803), rt_str("PRIORITY", 8))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("SET_PRIORITY", 12))) {
F->v_2256 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, g_ty_int_900, &F->at_2218));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_526(F->args_805)), rt_str(", ", 2)), F->v_2256), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("ACTIVE", 6))) {
F->t_808v = g_ty_bool_901;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("DELAY", 5))) {
F->v_2257 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_int_900, &F->at_2218));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2257), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("DELAY_UNTIL", 11))) {
F->v_2258 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_int_900, &F->at_2218));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2258), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("TIME", 4))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_803), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_803), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_803), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_803), rt_str("HOURS", 5)))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_803));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("HALT", 4))) {
F->a_2259 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_int_900, &F->at_2218));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2259), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("ME", 2)) && (F->tt_804 != NULL))) {
F->result_ = f_me_high_772(F->tt_804, F->line_806, &F->t_808v);
goto ret_;
} else if ((rt_str_eq((*F->name_803), rt_str("WAITING", 7)) || rt_str_eq((*F->name_803), rt_str("SUSPENDED", 9)))) {
F->t_808v = g_ty_bool_901;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_803))), rt_str("(", 1)), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_803), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_803), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_803), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_803), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_803), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_803), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_803))), rt_str("(", 1)), f_act_ref_526(F->args_805)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2219) != ((rt_int)2LL))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_526(F->args_805)), rt_str(", ", 2)), f_act_ref_526((*(P820)rt_nil_check(F->args_805)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_803), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_803), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_803), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_803), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_803), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_803), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2219) != ((rt_int)0LL))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_803), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_803))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_777(F->args_805, &(*F->name_803))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_777(F->args_805, &(*F->name_803))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("COND_LOCK", 9))) {
F->bv_2260 = NULL;
F->bc_2261 = NULL;
F->ro_2262 = RT_R_EUNDEF;
F->bt_2263 = NULL;
F->l_2264 = rt_str_copy(f_lock_ref_777(F->args_805, &(*F->name_803)));
f_lvalue_623((*(P820)rt_nil_check(F->args_805)).next, &F->bv_2260, &F->bt_2263, &F->bc_2261, &F->ro_2262);
f_check_type_223(F->bt_2263, g_ty_bool_901, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P813)rt_nil_check(F->bv_2260))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2264), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("EXCESS_LOCKS", 12))) {
F->t_808v = g_ty_int_900;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_777(F->args_805, &(*F->name_803))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("OWNER", 5))) {
F->t_808v = g_ty_act_910;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_777(F->args_805, &(*F->name_803))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("FREE", 4))) {
F->pv_2265 = NULL;
F->pc_2266 = NULL;
F->ro_2267 = RT_R_EUNDEF;
F->pt_2268 = NULL;
f_lvalue_623(F->args_805, &F->pv_2265, &F->pt_2268, &F->pc_2266, &F->ro_2267);
if (((rt_r_ichk((*(P826)rt_nil_check(F->pt_2268)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2267))) {
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_881 = 1;
f_finish_ptr_414(F->pt_2268);
if (f_suppressed_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_315((*(P826)rt_nil_check(F->pt_2268)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_612(F->pt_2268, &(((P813)rt_nil_check(F->pv_2265))->all)); b_; }), (*(P826)rt_nil_check(F->pt_2268)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_315((*(P826)rt_nil_check(F->pt_2268)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str("); if (", 7)), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_612(F->pt_2268, &(((P813)rt_nil_check(F->pv_2265))->all)); b_; }), (*(P826)rt_nil_check(F->pt_2268)).target)), rt_str(" } rt_free((void **)&", 21)), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P813)rt_nil_check(F->pv_2265))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_803), rt_str("LOW_IO", 6))) {
F->dev_2269 = rt_str_copy(f_gexpr_654(F->args_805, g_ty_int_900, &F->at_2218));
F->cmd_2270 = rt_str_copy(f_gexpr_654((*(P820)rt_nil_check(F->args_805)).next, g_ty_int_900, &F->at_2218));
if ((rt_r_ichk(F->n_2219) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2269), rt_str(", ", 2)), F->cmd_2270), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2271 = NULL;
F->dc_2272 = NULL;
F->ro_2273 = RT_R_EUNDEF;
F->dt_2274 = NULL;
f_lvalue_623((*(P820)rt_nil_check((*(P820)rt_nil_check(F->args_805)).next)).next, &F->dv_2271, &F->dt_2274, &F->dc_2272, &F->ro_2273);
f_check_type_223(F->dt_2274, g_ty_int_900, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2269), rt_str(", ", 2)), F->cmd_2270), rt_str(", &", 3)), (((P813)rt_nil_check(F->dv_2271))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_806, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_803), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_808) = F->t_808v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_811(P820 units_810) {
  struct f_translate_811fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_810 = units_810;
F->u_2275 = NULL;
F->u_2275 = F->units_810;
while ((F->u_2275 != NULL)) {
if (((*(P820)rt_nil_check(F->u_2275)).next == NULL)) {
{ R848 *cell2276 = rt_alloc(sizeof(R848));
(*cell2276).d = NULL;
(*cell2276).next = NULL;
g_caps_875 = cell2276;
}
(*(P847)rt_nil_check(g_caps_875)).d = F->u_2275;
(*(P847)rt_nil_check(g_caps_875)).depth = rt_r_ichk(g_depth_859);
f_declare_labels_481((*(P820)rt_nil_check(F->u_2275)).c);
f_declare_body_380((*(P820)rt_nil_check(F->u_2275)).c);
f_capsule_body_488((*(P820)rt_nil_check(F->u_2275)).c);
f_await_tasks_477((*(P820)rt_nil_check(F->u_2275)).c);
{
F->l_2277 = NULL;
F->l_2277 = F->units_810;
while ((F->l_2277 != F->u_2275)) {
{
F->w_2278 = rt_str_copy(f_waits_of_473(F->l_2277));
if ((((rt_int)((F->w_2278).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2278);
}
}
F->l_2277 = (*(P820)rt_nil_check(F->l_2277)).next;
}
}
f_close_fins_464(NULL);
if (rt_r_echk(g_uses_findyn_883)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_390(F->u_2275);
}
F->u_2275 = (*(P820)rt_nil_check(F->u_2275)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_812(void) {
  struct f_print_program_812fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_376();
if (rt_r_echk(g_uses_free_881)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_863);
f_print_buffer_31(g_out_frames_879);
f_print_buffer_31(g_out_helpers_864);
f_print_buffer_31(g_out_protos_865);
f_print_buffer_31(g_out_globals_866);
f_print_buffer_31(g_out_funcs_867);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_880);
f_print_buffer_31(g_out_excs_869);
f_print_buffer_31(g_out_init_868);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R850(R850 *d, R850 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R850 cp_R850(R850 s) {
  R850 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R850(R850 a, R850 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R848(R848 *d, R848 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R848 cp_R848(R848 s) {
  R848 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R848(R848 a, R848 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R846(R846 *d, R846 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R846 cp_R846(R846 s) {
  R846 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R846(R846 a, R846 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R844(R844 *d, R844 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R844 cp_R844(R844 s) {
  R844 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R844(R844 a, R844 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R842(R842 *d, R842 s) {
  d->t = s.t;
  d->next = s.next;
}
static R842 cp_R842(R842 s) {
  R842 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R842(R842 a, R842 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R840(R840 *d, R840 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R840 cp_R840(R840 s) {
  R840 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R840(R840 a, R840 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R838(R838 *d, R838 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R838 cp_R838(R838 s) {
  R838 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R838(R838 a, R838 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A836(A836 *d, A836 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A836 cp_A836(A836 s) {
  A836 d = s; d.p = rt_alloc(sizeof(P830) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A836(A836 a, A836 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R833(R833 *d, R833 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R833 cp_R833(R833 s) {
  R833 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R833(R833 a, R833 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R831(R831 *d, R831 s) {
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
static R831 cp_R831(R831 s) {
  R831 d = s;
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
static int eq_R831(R831 a, R831 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R829(R829 *d, R829 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R829 cp_R829(R829 s) {
  R829 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R829(R829 a, R829 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R827(R827 *d, R827 s) {
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
static R827 cp_R827(R827 s) {
  R827 d = s;
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
static int eq_R827(R827 a, R827 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R825(R825 *d, R825 s) {
  d->s = s.s;
  d->next = s.next;
}
static R825 cp_R825(R825 s) {
  R825 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R825(R825 a, R825 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R823(R823 *d, R823 s) {
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
static R823 cp_R823(R823 s) {
  R823 d = s;
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
static int eq_R823(R823 a, R823 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R821(R821 *d, R821 s) {
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
static R821 cp_R821(R821 s) {
  R821 d = s;
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
static int eq_R821(R821 a, R821 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A819(A819 *d, A819 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A819 cp_A819(A819 s) {
  A819 d = s; d.p = rt_alloc(sizeof(P815) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A819(A819 a, A819 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R816(R816 *d, R816 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R816 cp_R816(R816 s) {
  R816 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R816(R816 a, R816 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_851);
  RT_ROOT(g_ntoks_852);
  RT_ROOT(g_tpos_853);
  RT_ROOT(g_src_line_854);
  RT_ROOT(g_pending_prag_855);
  RT_ROOT(g_table_856);
  RT_ROOT(g_genv_857);
  RT_ROOT(g_all_insts_858);
  RT_ROOT(g_depth_859);
  RT_ROOT(g_scope_stack_860);
  RT_ROOT(g_all_types_861);
  RT_ROOT(g_serial_862);
  RT_ROOT(g_out_types_863);
  RT_ROOT(g_out_helpers_864);
  RT_ROOT(g_out_protos_865);
  RT_ROOT(g_out_globals_866);
  RT_ROOT(g_out_funcs_867);
  RT_ROOT(g_out_init_868);
  RT_ROOT(g_out_excs_869);
  RT_ROOT(g_code_870);
  RT_ROOT(g_fields_buf_871);
  RT_ROOT(g_in_func_872);
  RT_ROOT(g_cur_level_873);
  RT_ROOT(g_fctx_874);
  RT_ROOT(g_caps_875);
  RT_ROOT(g_cap_waits_876);
  RT_ROOT(g_psub_877);
  RT_ROOT(g_st_field_878);
  RT_ROOT(g_out_frames_879);
  RT_ROOT(g_out_roots_880);
  RT_ROOT(g_uses_free_881);
  RT_ROOT(g_fins_882);
  RT_ROOT(g_uses_findyn_883);
  RT_ROOT(g_func_sym_884);
  RT_ROOT(g_func_rc_885);
  RT_ROOT(g_cap_ret_886);
  RT_ROOT(g_cap_rflag_887);
  RT_ROOT(g_ret_frames_888);
  RT_ROOT(g_gdepth_889);
  RT_ROOT(g_suppress_890);
  RT_ROOT(g_cons_ctx_891);
  RT_ROOT(g_mark_uninit_892);
  RT_ROOT(g_exits_893);
  RT_ROOT(g_gotos_894);
  RT_ROOT(g_frames_895);
  RT_ROOT(g_handlers_896);
  RT_ROOT(g_cleanups_897);
  RT_ROOT(g_trial_898);
  RT_ROOT(g_mcopies_899);
  RT_ROOT(g_ty_int_900);
  RT_ROOT(g_ty_bool_901);
  RT_ROOT(g_ty_float_902);
  RT_ROOT(g_ty_ascii_903);
  RT_ROOT(g_ty_string_904);
  RT_ROOT(g_ty_void_905);
  RT_ROOT(g_ty_file_906);
  RT_ROOT(g_ty_nil_907);
  RT_ROOT(g_ty_lock_908);
  RT_ROOT(g_ty_latch_909);
  RT_ROOT(g_ty_act_910);
  RT_ROOT(g_file_mode_type_911);
  RT_ROOT(g_no_cons_912);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_851 = NULL;
g_ntoks_852 = RT_R_IUNDEF;
g_ntoks_852 = ((rt_int)0LL);
g_tpos_853 = RT_R_IUNDEF;
g_tpos_853 = ((rt_int)1LL);
g_src_line_854 = RT_R_IUNDEF;
g_src_line_854 = ((rt_int)0LL);
g_pending_prag_855 = NULL;
g_table_856 = NULL;
g_genv_857 = NULL;
g_all_insts_858 = NULL;
g_depth_859 = RT_R_IUNDEF;
g_depth_859 = ((rt_int)0LL);
g_scope_stack_860 = NULL;
g_all_types_861 = NULL;
g_serial_862 = RT_R_IUNDEF;
g_serial_862 = ((rt_int)0LL);
g_out_types_863 = NULL;
g_out_helpers_864 = NULL;
g_out_protos_865 = NULL;
g_out_globals_866 = NULL;
g_out_funcs_867 = NULL;
g_out_init_868 = NULL;
g_out_excs_869 = NULL;
g_code_870 = NULL;
g_fields_buf_871 = NULL;
g_in_func_872 = RT_R_EUNDEF;
g_in_func_872 = 0;
g_cur_level_873 = RT_R_IUNDEF;
g_cur_level_873 = ((rt_int)0LL);
g_fctx_874 = NULL;
g_caps_875 = NULL;
g_cap_waits_876 = NULL;
g_psub_877 = NULL;
g_st_field_878 = NULL;
g_out_frames_879 = NULL;
g_out_roots_880 = NULL;
g_uses_free_881 = RT_R_EUNDEF;
g_uses_free_881 = 0;
g_fins_882 = NULL;
g_uses_findyn_883 = RT_R_EUNDEF;
g_uses_findyn_883 = 0;
g_func_sym_884 = NULL;
g_func_rc_885 = NULL;
g_cap_ret_886 = NULL;
g_cap_rflag_887 = NULL;
g_ret_frames_888 = RT_R_IUNDEF;
g_ret_frames_888 = ((rt_int)0LL);
g_gdepth_889 = RT_R_IUNDEF;
g_gdepth_889 = ((rt_int)0LL);
g_suppress_890 = NULL;
g_cons_ctx_891 = NULL;
g_mark_uninit_892 = RT_R_EUNDEF;
g_mark_uninit_892 = 0;
g_exits_893 = NULL;
g_gotos_894 = NULL;
g_frames_895 = RT_R_IUNDEF;
g_frames_895 = ((rt_int)0LL);
g_handlers_896 = NULL;
g_cleanups_897 = NULL;
g_trial_898 = RT_R_IUNDEF;
g_trial_898 = ((rt_int)0LL);
g_mcopies_899 = NULL;
g_ty_int_900 = NULL;
g_ty_bool_901 = NULL;
g_ty_float_902 = NULL;
g_ty_ascii_903 = NULL;
g_ty_string_904 = NULL;
g_ty_void_905 = NULL;
g_ty_file_906 = NULL;
g_ty_nil_907 = NULL;
g_ty_lock_908 = NULL;
g_ty_latch_909 = NULL;
g_ty_act_910 = NULL;
g_file_mode_type_911 = NULL;
g_no_cons_912 = NULL;
{ P817 cell2279 = rt_alloc(sizeof *cell2279);
rt_int pv2280 = ((rt_int)1000000LL);
cell2279->p_n = pv2280;
cell2279->all.lo = ((rt_int)1LL); cell2279->all.hi = pv2280;
cell2279->all.lo2 = cell2279->all.hi2 = 1;
cell2279->all.p = rt_alloc(sizeof(P815) * (size_t)(RT_CNT(cell2279->all)) + 1);
for (rt_int i2281 = 0; i2281 < (RT_CNT(cell2279->all)); i2281++) {
cell2279->all.p[i2281] = NULL;
}
g_toks_851 = cell2279;
}
{ P834 cell2282 = rt_alloc(sizeof *cell2282);
rt_int pv2283 = (((rt_int)4093LL));
cell2282->p_n = pv2283;
cell2282->all.lo = ((rt_int)0LL); cell2282->all.hi = pv2283;
cell2282->all.lo2 = cell2282->all.hi2 = 1;
cell2282->all.p = rt_alloc(sizeof(P830) * (size_t)(RT_CNT(cell2282->all)) + 1);
for (rt_int i2284 = 0; i2284 < (RT_CNT(cell2282->all)); i2284++) {
cell2282->all.p[i2284] = NULL;
}
g_table_856 = cell2282;
}
g_out_types_863 = f_new_buffer_24();
g_out_helpers_864 = f_new_buffer_24();
g_out_protos_865 = f_new_buffer_24();
g_out_globals_866 = f_new_buffer_24();
g_out_funcs_867 = f_new_buffer_24();
g_out_init_868 = f_new_buffer_24();
g_out_excs_869 = f_new_buffer_24();
g_out_frames_879 = f_new_buffer_24();
g_out_roots_880 = f_new_buffer_24();
g_code_870 = g_out_init_868;
g_no_cons_912 = f_new_cons_175();
g_ty_int_900 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_901 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_902 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_904 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_905 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_906 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_907 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_908 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_909 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_910 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2285;
if (RT_TRY(xf2285)) {
f_init_ascii_250();
f_read_source_58();
f_translate_811(f_program_150());
f_print_program_812();
RT_POP(xf2285);
} else {
RT_POP(xf2285);
int x2286 = rt_xcur;
if (0 || x2286 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2286);
}
}
}
  rt_main_done();
  return 0;
}
