#include "paleo.h"
#include <math.h>
typedef struct Pc786 *P785;
typedef struct R788 R788;
typedef struct R788 *P787;
struct R788 {  rt_int kind; rt_int line; rt_int ival; P785 s; P785 prags;  };
typedef struct Pc790 *P789;
typedef struct A791 A791;
struct A791 { rt_int lo, hi, lo2, hi2; P787 *p; };
typedef struct R793 R793;
typedef struct R793 *P792;
struct R793 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P785 name; P785 tag; P785 prags; P792 labels; P792 a; P792 b; P792 c; P792 d; P792 e; P792 next;  };
typedef struct R795 R795;
typedef struct R795 *P794;
typedef struct R797 R797;
typedef struct R797 *P796;
struct R797 {  P785 s; P796 next;  };
struct R795 {  P785 lo; P785 hi; P785 lo2; P785 hi2; P785 slen; rt_int mlo; rt_int mhi; int hasm; P792 args; int dyn; rt_int lvl; P785 prec; P796 bnds;  };
typedef struct R799 R799;
typedef struct R799 *P798;
typedef struct R801 R801;
typedef struct R801 *P800;
struct R801 {  P785 name; P798 t; P794 c; P792 st; P800 next;  };
typedef struct R803 R803;
typedef struct R803 *P802;
typedef struct R805 R805;
typedef struct R805 *P804;
struct R805 {  P785 name; rt_int mode; P798 t; P794 c; P785 cfield; P804 next;  };
typedef struct Pc807 *P806;
typedef struct A808 A808;
struct A808 { rt_int lo, hi, lo2, hi2; P802 *p; };
typedef struct R810 R810;
typedef struct R810 *P809;
struct R810 {  rt_int depth; P792 imps; int all_imp; P809 next;  };
typedef struct R812 R812;
typedef struct R812 *P811;
struct R812 {  rt_int kind; rt_int i; P785 s; P798 t;  };
struct R803 {  rt_int kind; P785 name; P798 t; P794 c; P785 access; P785 cname; int ro_flag; rt_int mvalue; int hasmv; P792 st; P792 decl; P804 params; P798 result; rt_int depth; rt_int level; int byref; P802 members; P802 mnext; P792 binds; P802 insts; P806 env; P802 chain; P802 stack; P802 owner; P809 gctx; P811 mv; P796 reqs; int reqdone; P792 home;  };
typedef struct R814 R814;
typedef struct R814 *P813;
struct R814 {  P798 t; P813 next;  };
struct R799 {  rt_int kind; P785 name; P792 lits; P798 elem; P798 idx; P798 idx2; P794 elemcons; P792 elemst; P798 under; P792 tparams; P792 ocap; P800 fields; P798 target; P792 decl; P785 cname; int forward; int defined; int helpers; P802 initp; P802 finalp; P802 tpsyms; P802 gen; P802 gbinds; P798 next; rt_int ndim; P813 idxs;  };
typedef struct R816 R816;
typedef struct R816 *P815;
struct R816 {  P796 head; P796 tail;  };
typedef struct R818 R818;
typedef struct R818 *P817;
struct R818 {  P785 match; P785 label; rt_int depth; P817 next;  };
typedef struct R820 R820;
typedef struct R820 *P819;
struct R820 {  P792 d; P819 next;  };
typedef struct R822 R822;
typedef struct R822 *P821;
struct R822 {  P792 d; P785 w; P821 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P785 result_;
 P785 t_884;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_887;
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
 rstr r_888;
 rt_int i_889;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_893;
 rstr w_894;
 rt_int i_895;
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
 P815 result_;
 P815 b_899;
};
struct f_put_27fr { int dummy;
 P815 b_25;
 rstr *s_26;
 P796 l_901;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P815 b_30;
 P796 l_903;
};
struct f_splice_34fr { int dummy;
 P815 a_32;
 P815 b_33;
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
 P787 t_905;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_907;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_908;
 rt_int k_909;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_913;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_914;
 P785 r_915;
 int more_916;
 rt_int k_917;
 int go_918;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_919;
 rt_int k_920;
 rstr p_921;
 int ok_922;
 int known_923;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_924;
 rt_int j_925;
 rt_int n_926;
 int c_927;
 rstr w_928;
 rt_int k_929;
 rstr w_933;
 rt_int k_934;
 rstr two_938;
};
struct f_read_source_58fr { int dummy;
 rstr line_939;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P792 result_;
 P792 x_940;
};
struct f_append_65fr { int dummy;
 P792 *head_62;
 P792 *tail_63;
 P792 x_64;
};
struct f_list_len_67fr { int dummy;
 P792 l_66;
 rt_int result_;
 rt_int n_942;
 P792 p_943;
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
 P785 result_;
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
 P785 result_;
};
struct f_name_node_90fr { int dummy;
 P792 result_;
 P792 x_944;
};
struct f_id_list_91fr { int dummy;
 P792 result_;
 P792 head_945;
 P792 tail_946;
};
struct f_p_subtype_92fr { int dummy;
 P792 result_;
 rt_int line_947;
 P792 x_948;
 rstr w_949;
 P792 head_950;
 P792 tail_951;
 P792 head_952;
 P792 tail_953;
 int more_954;
 P792 names_955;
 P792 st_956;
 P792 cmp_957;
 P792 head_958;
 P792 tail_959;
 int more_960;
 P792 lit_961;
};
struct f_constraint_list_93fr { int dummy;
 P792 result_;
 P792 head_962;
 P792 tail_963;
 int more_964;
 rt_int line_965;
 P792 lo_966;
 P792 r_967;
};
struct f_actual_params_94fr { int dummy;
 P792 result_;
 P792 head_968;
 P792 tail_969;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P792 result_;
 P792 head_970;
 P792 tail_971;
 int more_972;
};
struct f_binop_102fr { int dummy;
 P785 op_98;
 P792 l_99;
 P792 r_100;
 rt_int line_101;
 P792 result_;
 P792 x_973;
};
struct f_expr_103fr { int dummy;
 P792 result_;
 P792 l_974;
 P785 op_975;
 rt_int line_976;
};
struct f_expr_and_104fr { int dummy;
 P792 result_;
 P792 l_977;
 rt_int line_978;
};
struct f_expr_not_105fr { int dummy;
 P792 result_;
 P792 x_979;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P792 result_;
 P792 l_980;
 P785 op_981;
 rt_int line_982;
};
struct f_expr_add_109fr { int dummy;
 P792 result_;
 P792 l_983;
 P785 op_984;
 rt_int line_985;
};
struct f_expr_mul_110fr { int dummy;
 P792 result_;
 P792 l_986;
 P785 op_987;
 rt_int line_988;
};
struct f_expr_pow_111fr { int dummy;
 P792 result_;
 P792 l_989;
 rt_int line_990;
};
struct f_expr_prefix_112fr { int dummy;
 P792 result_;
 P792 x_991;
};
struct f_postfix_113fr { int dummy;
 P792 result_;
 P792 p_992;
 rt_int line_993;
 P792 x_994;
 P792 head_995;
 P792 tail_996;
 int more_997;
 P792 lo_998;
 P792 r_999;
 P792 x_1000;
 P792 x_1001;
 P792 x_1002;
};
struct f_primary_114fr { int dummy;
 P792 result_;
 rt_int line_1003;
 P792 x_1004;
 rt_int k_1005;
 rstr w_1006;
 P792 head_1007;
 P792 tail_1008;
 int more_1009;
};
struct f_constructor_item_115fr { int dummy;
 P792 result_;
 rt_int line_1010;
 P792 it_1011;
 P792 first_1012;
 P792 keys_1013;
 P792 ktail_1014;
 P792 lab_1015;
 rt_int save_1016;
 P792 more_1017;
 P792 tail2_1018;
 int ok_1019;
 int go_1020;
 P792 l2_1021;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P792 result_;
 P792 head_1022;
 P792 tail_1023;
 int stmts_1024;
 P792 after_1025;
 P792 x_1026;
};
struct f_body_element_118fr { int dummy;
 P792 result_;
 P792 x_1027;
 P785 pr_1028;
 P792 p_1029;
};
struct f_declaration_119fr { int dummy;
 P792 result_;
 rt_int line_1030;
 P792 head_1031;
 P792 tail_1032;
 P792 names_1033;
 P792 x_1034;
};
struct f_object_decl_120fr { int dummy;
 P792 result_;
 rt_int line_1035;
 int is_var_1036;
 P792 names_1037;
 P792 st_1038;
 P792 init_1039;
 P792 loc_1040;
 rt_int loc_kind_1041;
 P792 head_1042;
 P792 tail_1043;
 P792 x_1044;
};
struct f_abbrev_decl_121fr { int dummy;
 P792 result_;
 P792 x_1045;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1046;
};
struct f_type_decl_123fr { int dummy;
 P792 result_;
 rt_int line_1047;
 P785 name_1048;
 P792 params_1049;
 P792 x_1050;
 P792 tts_1051;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P792 result_;
 P792 head_1052;
 P792 tail_1053;
 int more_1054;
 rt_int mode_1055;
 P792 names_1056;
 P792 ntail_1057;
 P792 st_1058;
 P792 p_1059;
};
struct f_imports_list_128fr { int dummy;
 P792 owner_127;
 int result_;
 P792 head_1060;
 P792 tail_1061;
 int more_1062;
 int ro_1063;
 P792 x_1064;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P785 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P792 result_;
 rt_int line_1065;
 P792 x_1066;
 int is_abn_1067;
 int is_func_1068;
 int dummy_1069;
};
struct f_capsule_decl_133fr { int dummy;
 P792 result_;
 P792 x_1070;
 int dummy_1071;
 P792 head_1072;
 P792 tail_1073;
 int more_1074;
 P792 n_1075;
};
struct f_formal_tt_134fr { int dummy;
 P792 result_;
 P792 head_1076;
 P792 tail_1077;
 int more_1078;
};
struct f_generic_decl_135fr { int dummy;
 P792 result_;
 P792 x_1079;
 P792 head_1080;
 P792 tail_1081;
 int more_1082;
 P792 names_1083;
 rt_int kind_1084;
 P792 st_1085;
 P792 p_1086;
 P785 nm_1087;
 P792 st_1088;
};
struct f_task_decl_136fr { int dummy;
 P792 result_;
 P792 x_1089;
 int dummy_1090;
};
struct f_expose_decl_137fr { int dummy;
 P792 result_;
 P792 x_1091;
 P792 head_1092;
 P792 tail_1093;
 int more_1094;
 P792 n_1095;
 P792 head_1096;
 P792 tail_1097;
 int more_1098;
 P792 n_1099;
 P792 tgt_1100;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P792 result_;
 P792 labels_1101;
 P792 ltail_1102;
 P785 match_1103;
 P792 s_1104;
};
struct f_unlabeled_statement_141fr { int dummy;
 P792 result_;
 rt_int line_1105;
 P792 x_1106;
 P792 head_1107;
 P792 tail_1108;
 P792 invs_1109;
 P792 itail_1110;
 int more_1111;
 P792 target_1112;
};
struct f_arm_145fr { int dummy;
 P792 cond_142;
 P792 b_143;
 rt_int line_144;
 P792 result_;
 P792 x_1113;
};
struct f_if_stmt_146fr { int dummy;
 P792 result_;
 P792 x_1114;
 P792 head_1115;
 P792 tail_1116;
 P792 cond_1117;
 int go_1118;
};
struct f_case_stmt_147fr { int dummy;
 P792 result_;
 P792 x_1119;
 P792 head_1120;
 P792 tail_1121;
 P792 labs_1122;
 P792 ltail_1123;
 int more_1124;
 P792 l_1125;
};
struct f_repeat_stmt_148fr { int dummy;
 P792 result_;
 P792 x_1126;
};
struct f_guard_stmt_149fr { int dummy;
 P792 result_;
 P792 x_1127;
 P792 head_1128;
 P792 tail_1129;
 P792 h_1130;
};
struct f_program_150fr { int dummy;
 P792 result_;
 P792 head_1131;
 P792 tail_1132;
 P785 pr_1133;
 P792 u_1134;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1135;
 rt_int i_1136;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P802 result_;
 P802 y_1140;
};
struct f_lookup_decl_156fr { int dummy;
 P792 d_155;
 P802 result_;
 P802 y_1141;
};
struct f_define_159fr { int dummy;
 P802 y_157;
 rt_int line_158;
 rt_int h_1142;
 P802 z_1143;
};
struct f_overloadable_161fr { int dummy;
 P802 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P792 a_162;
 P792 b_163;
 int result_;
 P792 x_1144;
 P792 y_1145;
};
struct f_same_signature_167fr { int dummy;
 P804 a_165;
 P804 b_166;
 int result_;
 P804 x_1146;
 P804 y_1147;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P785 name_171;
 P802 result_;
 P802 y_1148;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P798 result_;
 P798 t_1150;
};
struct f_new_cons_175fr { int dummy;
 P794 result_;
 P794 c_1152;
};
struct f_scalar_kind_177fr { int dummy;
 P798 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P798 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P794 c_180;
 rstr *b_181;
 rstr result_;
 P785 p_1154;
 rt_int i_1155;
};
struct f_clo_184fr { int dummy;
 P794 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P794 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P798 t_187;
 P794 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P798 t_190;
 P794 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1159;
 rstr f_1160;
};
struct f_copy_cons_197fr { int dummy;
 P794 c_196;
 P794 result_;
 P794 r_1161;
};
struct f_freeze_200fr { int dummy;
 P794 c_198;
 P798 t_199;
 P794 result_;
 P794 r_1163;
 P785 saved_field_1164;
 rstr ct_1165;
 rstr la_1166;
 rstr lf_1167;
 rstr ha_1168;
 rstr hf_1169;
};
struct f_checked_204fr { int dummy;
 P798 t_201;
 P794 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P792 a_205;
 P792 b_206;
 int result_;
 P792 x_1170;
 P792 y_1171;
};
struct f_same_210fr { int dummy;
 P798 a_208;
 P798 b_209;
 int result_;
 P813 x_1172;
 P813 y_1173;
 P800 f_1174;
 P800 g_1175;
};
struct f_base_of_212fr { int dummy;
 P798 t_211;
 P798 result_;
};
struct f_base_cons_215fr { int dummy;
 P798 t_213;
 P794 c_214;
 P794 result_;
};
struct f_kind_name_217fr { int dummy;
 P798 t_216;
 rstr result_;
};
struct f_check_type_221fr { int dummy;
 P798 got_218;
 P798 want_219;
 rt_int line_220;
};
struct f_ctype_223fr { int dummy;
 P798 t_222;
 rstr result_;
};
struct f_struct_body_225fr { int dummy;
 P798 t_224;
 rstr result_;
};
struct f_field_decls_227fr { int dummy;
 P798 t_226;
 rstr result_;
 P800 f_1178;
 P785 s_1179;
};
struct f_declare_ctype_229fr { int dummy;
 P798 t_228;
 P798 u_1180;
 P792 p_1181;
 P785 fs_1182;
 rstr sn_1183;
 P794 pc_1184;
 P798 target_1185;
 P792 p_1186;
 P785 fs_1187;
};
struct f_dim_lo_231fr { int dummy;
 rt_int k_230;
 rstr result_;
};
struct f_dim_hi_233fr { int dummy;
 rt_int k_232;
 rstr result_;
};
struct f_more_dims_235fr { int dummy;
 P798 t_234;
 rstr result_;
 P785 r_1188;
 rt_int k_1189;
};
struct f_acnt_238fr { int dummy;
 P798 t_236;
 rstr *base_237;
 rstr result_;
 P785 r_1193;
 rt_int k_1194;
};
struct f_cons_lo_241fr { int dummy;
 P794 c_239;
 rt_int k_240;
 P785 result_;
 P796 l_1198;
 rt_int i_1199;
};
struct f_cons_hi_244fr { int dummy;
 P794 c_242;
 rt_int k_243;
 P785 result_;
 P796 l_1203;
 rt_int i_1204;
};
struct f_idx_type_247fr { int dummy;
 P798 t_245;
 rt_int k_246;
 P798 result_;
 P813 l_1208;
 rt_int i_1209;
};
struct f_init_ascii_248fr { int dummy;
 P792 head_1213;
 P792 tail_1214;
 rt_int start_1215;
 rt_int i_1216;
 P792 lit_1220;
 P792 h2_1221;
 P792 t2_1222;
 P792 l1_1223;
 P792 l2_1224;
 P792 l3_1225;
};
struct f_lit_index_251fr { int dummy;
 P792 lits_249;
 rstr *name_250;
 rt_int result_;
 rt_int i_1226;
 P792 l_1227;
};
struct f_resolve_subtype_254fr { int dummy;
 P792 st_252;
 P794 *c_253;
 P794 c_253v;
 P798 result_;
 P798 t_1228;
 int ok_1229;
 P798 dummy_1230;
 P794 ec_1232;
 P798 et_1233;
 P792 ix_1234;
 rt_int k_1235;
 P813 tail_1236;
 P796 btail_1237;
 P794 ic_1238;
 P798 it_1239;
 P785 lo_1240;
 P785 hi_1241;
 P813 tl_1242;
 P796 l1_1244;
 P796 l2_1245;
 P794 ec_1248;
 P792 comp_1249;
 P800 tail_1250;
 P794 cc_1251;
 P800 f_1252;
 P792 lits_1254;
 P792 ltail_1255;
 P800 f_1256;
 P792 l_1257;
 P792 gt_1258;
 P794 ec_1259;
 P785 base_1260;
};
struct f_float_lit_256fr { int dummy;
 P792 e_255;
 int result_;
};
struct f_tag_constraint_260fr { int dummy;
 P798 t_257;
 P792 e_258;
 P794 c_259;
 P798 dummy_1261;
};
struct f_named_subtype_263fr { int dummy;
 P792 st_261;
 P794 *c_262;
 P794 c_262v;
 P798 result_;
 P798 t_1262;
 P802 y_1263;
 rstr name_1264;
};
struct f_invoke_abbrev_267fr { int dummy;
 P802 y_264;
 P792 st_265;
 P794 *c_266;
 P794 c_266v;
 P798 result_;
 P792 p_1265;
 P792 a_1266;
 P798 t_1267;
 P802 z_1268;
 P794 pc_1269;
 P798 at_1270;
 int ok_1271;
};
struct f_apply_constraint_272fr { int dummy;
 P798 t_268;
 P792 args_269;
 P794 c_270;
 rt_int line_271;
 P798 dummy_1272;
 int ok_1273;
};
struct f_value_subtype_276fr { int dummy;
 P792 e_273;
 P794 *c_274;
 P794 c_274v;
 P785 *base_275;
 P785 base_275v;
 P798 result_;
 P798 t_1274;
 P794 c0_1275;
 int ro_1276;
 rt_int k_1277;
 rstr lo_1281;
 rstr hi_1282;
 P796 l1_1283;
 P796 l2_1284;
 P792 p_1287;
 P792 head_1288;
 P792 tail_1289;
 P792 sel_1290;
};
struct f_reverse_pairs_278fr { int dummy;
 P796 l_277;
 P796 result_;
 P796 r_1291;
 P796 p_1292;
 P796 a_1293;
 P796 b_1294;
};
struct f_inquiry_281fr { int dummy;
 P792 st_279;
 P794 *c_280;
 P794 c_280v;
 P798 result_;
 P785 base_1295;
 P798 t_1296;
 rstr name_1297;
 P792 sub_1298;
 P794 c2_1299;
 rt_int k_1300;
 int ok_1301;
 P794 ac_1302;
};
struct f_as_subtype_283fr { int dummy;
 P792 e_282;
 P792 result_;
 P792 st_1303;
 rstr name_1304;
 P802 y_1305;
};
struct f_tt_subtype_288fr { int dummy;
 P785 name_284;
 P792 tt_285;
 P792 args_286;
 rt_int line_287;
 P792 result_;
 P792 st_1306;
};
struct f_type_name_290fr { int dummy;
 rstr *name_289;
 int result_;
 P802 y_1307;
};
struct f_opened_292fr { int dummy;
 P798 t_291;
 int result_;
 P819 c_1308;
};
struct f_replace_all_296fr { int dummy;
 rstr *s_293;
 rstr *pat_294;
 rstr *r_295;
 rstr result_;
 rt_int i_1309;
};
struct f_subst_298fr { int dummy;
 rstr *s_297;
 rstr result_;
 P796 l_1310;
 P785 r_1311;
};
struct f_new_type_302fr { int dummy;
 P802 y_299;
 P792 st_300;
 P794 *c_301;
 P794 c_301v;
 P798 result_;
 P792 d_1312;
 P792 p_1313;
 P794 uc_1314;
 P802 z_1315;
 P794 zc_1316;
};
struct f_init_storage_306fr { int dummy;
 rstr *lval_303;
 P798 t_304;
 P794 c_305;
};
struct f_init_call_309fr { int dummy;
 P802 y_307;
 rstr *lval_308;
 rstr result_;
 P785 link_1317;
 rt_int i_1318;
};
struct f_needs_fin_311fr { int dummy;
 P798 t_310;
 int result_;
 P800 f_1322;
};
struct f_fin_code_314fr { int dummy;
 rstr *lval_312;
 P798 t_313;
 rstr result_;
 P785 r_1323;
 rstr i_1324;
 P800 f_1325;
 P800 f_1326;
 rt_int i_1327;
};
struct f_tparam_type_317fr { int dummy;
 P798 t_315;
 rstr *name_316;
 P798 result_;
 P802 z_1328;
};
struct f_make_storage_321fr { int dummy;
 rstr *lval_318;
 P798 t_319;
 P794 c_320;
 P792 p_1329;
 P792 a_1330;
 P794 uc_1331;
 P798 ut_1332;
 P798 at_1333;
 P798 pt_1334;
 rstr v_1335;
 P796 saved_1336;
 P796 l1_1337;
 P796 l2_1338;
 rt_int k_1341;
 rstr i_1345;
 P800 f_1346;
 P800 f_1347;
 rt_int i_1348;
};
struct f_manifest_324fr { int dummy;
 P792 e_322;
 int *ok_323;
 int ok_323v;
 rt_int result_;
 P811 v_1352;
};
struct f_mk_mval_327fr { int dummy;
 rt_int kind_325;
 rt_int i_326;
 P811 result_;
 P811 v_1353;
};
struct f_ipow_330fr { int dummy;
 rt_int a_328;
 rt_int b_329;
 rt_int result_;
 rt_int r_1355;
 rt_int i_1356;
};
struct f_meval_333fr { int dummy;
 P792 e_331;
 int *ok_332;
 int ok_332v;
 P811 result_;
 P811 a_1360;
 P811 b_1361;
 int ok2_1362;
 P785 op_1363;
 P802 y_1364;
 P811 r_1365;
};
struct f_bool_text_335fr { int dummy;
 int b_334;
 rstr result_;
};
struct f_bool_i_337fr { int dummy;
 int b_336;
 rt_int result_;
};
struct f_mstr_339fr { int dummy;
 P811 v_338;
 rstr result_;
};
struct f_ascii_char_341fr { int dummy;
 rt_int i_340;
 int result_;
 rstr printable_1366;
};
struct f_user_defined_343fr { int dummy;
 rstr *op_342;
 int result_;
 P802 y_1367;
};
struct f_mcopy_345fr { int dummy;
 P798 t_344;
 rstr result_;
 rstr ct_1368;
 rstr name_1369;
 P796 l_1370;
};
struct f_composite_347fr { int dummy;
 P798 t_346;
 int result_;
};
struct f_assign_code_352fr { int dummy;
 rstr *lval_348;
 P798 t_349;
 rstr *v_350;
 P794 c_351;
 rstr result_;
};
struct f_copy_code_355fr { int dummy;
 P798 t_353;
 rstr *v_354;
 rstr result_;
};
struct f_eq_code_359fr { int dummy;
 P798 t_356;
 rstr *a_357;
 rstr *b_358;
 rstr result_;
};
struct f_elem_assign_363fr { int dummy;
 rstr *lval_360;
 P798 t_361;
 rstr *v_362;
 rstr result_;
};
struct f_seen_name_366fr { int dummy;
 P796 l_364;
 rstr *s_365;
 int result_;
 P796 p_1372;
};
struct f_emit_helpers_367fr { int dummy;
 P798 order_1373;
 P798 t_1374;
 P796 done_1375;
 P796 l_1376;
 rstr c_1377;
};
struct f_helper_bodies_369fr { int dummy;
 P798 t_368;
 rstr c_1379;
 P815 b_1380;
 P798 e_1381;
 P785 sizes_1382;
 P785 bounds_1383;
 rt_int k_1384;
 rstr l_1388;
 rstr h_1389;
 P796 saved_1390;
 P792 p_1391;
 P796 l1_1392;
 P796 l2_1393;
 P800 f_1396;
 rt_int i_1397;
 P785 cases_as_1398;
 P785 cases_cp_1399;
 P785 cases_eq_1400;
 rstr fn_1401;
 P800 f_1402;
 P785 conds_1403;
 rstr fn_1404;
 rstr fn_1405;
};
struct f_declare_body_371fr { int dummy;
 P792 elems_370;
 P792 e_1406;
 P802 y_1407;
 P802 y_1408;
 P802 y_1409;
 P798 t_1410;
 P802 y_1411;
 P802 y_1412;
 P802 g_1413;
 P806 snap_1414;
 rt_int i_1418;
 P802 g_1422;
 P802 y_1423;
};
struct f_manifest_const_373fr { int dummy;
 P792 d_372;
 int ok_1424;
 P811 v_1425;
 P802 y_1426;
 P798 t_1427;
 P785 ctext_1428;
 P815 saved_1429;
};
struct f_exported_377fr { int dummy;
 P792 d_374;
 rstr *name_375;
 int *ro_376;
 int ro_376v;
 int result_;
 P792 p_1432;
};
struct f_copy_sym_379fr { int dummy;
 P802 y_378;
 P802 result_;
 P802 z_1433;
};
struct f_gen_capsule_381fr { int dummy;
 P792 d_380;
 P802 y_1435;
 P785 saved_1436;
};
struct f_capsule_params_385fr { int dummy;
 P792 d_382;
 P792 args_383;
 rt_int line_384;
 P792 p_1437;
 P792 a_1438;
 P798 t_1439;
 P798 vt_1440;
 P794 c_1441;
 P785 lv_1442;
 P794 lc_1443;
 int ro_1444;
 P802 y_1445;
 rstr f_1446;
 rstr g_1447;
 P802 y_1448;
 rstr v_1449;
 rstr access_1450;
};
struct f_elaborate_capsule_390fr { int dummy;
 P792 d_386;
 P802 y_387;
 P792 args_388;
 P792 owner_389;
 P819 cr_1451;
 P809 ctx_1452;
 P817 saved_gotos_1453;
 P802 m_1454;
 P792 p_1455;
 int ro_1456;
 P821 w_1459;
 P802 z_1461;
};
struct f_exports_op_393fr { int dummy;
 P792 d_391;
 rstr *op_392;
 int result_;
 P792 p_1462;
};
struct f_renamed_396fr { int dummy;
 P792 d_394;
 P802 z_395;
 P785 result_;
 P792 r_1463;
};
struct f_gen_expose_398fr { int dummy;
 P792 d_397;
 P802 y_1464;
 P802 m_1465;
 P792 p_1466;
 P792 r_1467;
 P802 inst_1468;
 int found_1469;
 P802 z_1470;
 int found_1471;
 P802 z_1472;
};
struct f_finish_ptr_400fr { int dummy;
 P798 t_399;
 P792 d_1473;
 P792 p_1474;
 P794 c_1475;
 rstr dummy_1476;
 rt_int pass_1477;
 P802 y_1481;
 P794 pc_1482;
};
struct f_ptr_args_402fr { int dummy;
 P794 c_401;
 P792 result_;
};
struct f_bind_ptr_params_407fr { int dummy;
 P792 formals_403;
 P792 actuals_404;
 rstr *cell_405;
 rt_int line_406;
 P792 p_1483;
 P792 a_1484;
 P798 vt_1485;
 P794 pc_1486;
 P802 y_1487;
 rstr v_1488;
 rstr pv_1489;
};
struct f_alloc_cell_412fr { int dummy;
 P792 s_408;
 rstr *lv_409;
 P798 t_410;
 P794 c_411;
 P792 d_1490;
 P794 tc_1491;
 P798 vt_1492;
 rstr pt_1493;
 rstr cell_1494;
 rstr fn_1495;
 rstr v_1496;
};
struct f_freeze_args_416fr { int dummy;
 P794 c_413;
 P798 t_414;
 rt_int line_415;
 P794 result_;
 P794 r_1497;
 P792 p_1498;
 P792 a_1499;
 P792 head_1500;
 P792 tail_1501;
 P785 saved_1502;
 P794 pc_1503;
 P798 vt_1504;
 P798 pt_1505;
 rstr nm_1506;
 P802 y_1507;
 P792 n_1508;
 rstr v_1509;
 rstr access_1510;
};
struct f_ptr_subtype_check_420fr { int dummy;
 P798 t_417;
 P794 c_418;
 P792 src_419;
 P785 lv_1511;
 P798 st_1512;
 P794 sc_1513;
 int ro_1514;
 P785 cond_1515;
 P792 a_1516;
 P792 b_1517;
 P798 at_1518;
 P798 bt_1519;
 rstr x_1520;
 rstr y_1521;
};
struct f_declare_subprogram_422fr { int dummy;
 P792 d_421;
};
struct f_build_subprogram_424fr { int dummy;
 P792 d_423;
 P802 result_;
 P802 y_1522;
 P792 p_1523;
 P804 tail_1524;
 P804 pm_1525;
 P794 rc_1527;
 P804 pm_1528;
 P815 saved_1529;
 P802 z_1530;
};
struct f_has_pragmat_427fr { int dummy;
 P785 pr_425;
 rstr *p_426;
 int result_;
 rt_int i_1531;
};
struct f_suppressing_429fr { int dummy;
 P785 pr_428;
 P785 result_;
 P785 r_1535;
 rt_int i_1536;
 rt_int j_1537;
 rt_int k_1538;
};
struct f_suppressed_431fr { int dummy;
 rstr *x_430;
 int result_;
 rstr w_1539;
 rt_int i_1540;
};
struct f_element_433fr { int dummy;
 P792 e_432;
 P785 saved_1544;
};
struct f_element1_435fr { int dummy;
 P792 e_434;
 rt_int k_1545;
 P802 g_1546;
 rt_int i_1550;
 P798 t_1554;
 rstr c_1555;
};
struct f_storage_438fr { int dummy;
 rstr *name_436;
 P798 t_437;
 rstr result_;
 rstr g_1556;
 rstr f_1557;
};
struct f_bind_441fr { int dummy;
 P802 y_439;
 rstr *access_440;
};
struct f_var_decl_443fr { int dummy;
 P792 d_442;
 P794 c_1558;
 P798 t_1559;
 P802 y_1560;
 rstr access_1561;
 P798 it_1562;
 rstr n_1563;
 P798 vt_1564;
 rstr v_1565;
};
struct f_open_fin_445fr { int dummy;
 rstr *fc_444;
 rstr f_1566;
 P796 l_1567;
};
struct f_close_fins_447fr { int dummy;
 P796 saved_446;
};
struct f_const_decl_449fr { int dummy;
 P792 d_448;
 P794 c_1569;
 P798 t_1570;
 P798 vt_1571;
 P802 y_1572;
 int ok_1573;
 rstr v_1574;
 rstr access_1575;
};
struct f_subprogram_451fr { int dummy;
 P792 d_450;
};
struct f_gen_subprogram_454fr { int dummy;
 P792 d_452;
 P802 y_453;
 P815 saved_code_1576;
 P815 saved_fields_1577;
 int saved_in_1578;
 P802 saved_sym_1579;
 P817 saved_exits_1580;
 P817 saved_gotos_1581;
 rt_int saved_frames_1582;
 P785 args_1583;
 P804 pm_1584;
 P796 saved_handlers_1585;
 P796 saved_cleanups_1586;
 P809 ctx_1587;
 P785 head_1588;
 P785 frame_1589;
 P785 parent_1590;
 P785 copy_back_1591;
 P785 pfin_1592;
 P796 saved_fins_1593;
 P794 saved_rc_1594;
 P785 saved_ret_1595;
 P785 saved_rflag_1596;
 P792 pn_1597;
 P785 nonrec_end_1598;
 int has_pfin_1599;
 rstr ct_1601;
 rstr f_1602;
 P802 p_1603;
 P794 pc_1604;
 P794 ac_1605;
 P794 fc_1606;
 P798 ft_1607;
 rstr bt_1608;
 P794 rc_1609;
 P798 rt_1610;
 rstr g_1611;
 P785 leave_1612;
};
struct f_waits_of_456fr { int dummy;
 P792 d_455;
 rstr result_;
 P821 w_1613;
};
struct f_task_waits_458fr { int dummy;
 P792 elems_457;
 rstr result_;
 P792 e_1614;
 P785 r_1615;
};
struct f_await_tasks_460fr { int dummy;
 P792 elems_459;
 rstr w_1616;
};
struct f_capsule_elements_462fr { int dummy;
 P792 elems_461;
 P792 e_1617;
};
struct f_declare_labels_464fr { int dummy;
 P792 elems_463;
 P792 e_1618;
 P792 l_1619;
 P817 x_1620;
};
struct f_start_labels_465fr { int dummy;
 P817 x_1622;
};
struct f_goto_label_467fr { int dummy;
 rstr *name_466;
 P817 result_;
 P817 x_1623;
};
struct f_has_return_469fr { int dummy;
 P792 e_468;
 int result_;
 P792 x_1624;
};
struct f_capsule_body_471fr { int dummy;
 P792 elems_470;
 P785 saved_ret_1625;
 P785 saved_flag_1626;
 rt_int saved_frames_1627;
 P792 e_1628;
 int stmt_1629;
};
struct f_body_elements_473fr { int dummy;
 P792 elems_472;
};
struct f_gen_body_475fr { int dummy;
 P792 elems_474;
 P796 saved_1630;
 P817 saved_gotos_1631;
};
struct f_pop_frames_477fr { int dummy;
 rt_int upto_476;
 rt_int i_1632;
 P796 c_1633;
};
struct f_push_cleanup_479fr { int dummy;
 rstr *s_478;
 P796 c_1634;
};
struct f_pop_cleanup_480fr { int dummy;
};
struct f_gen_statement_482fr { int dummy;
 P792 s_481;
 P785 label_1636;
 P792 gl_1637;
 P817 x_1638;
 P817 x_1641;
};
struct f_st_assign_484fr { int dummy;
 P792 s_483;
 P785 lv_1642;
 P798 t_1643;
 P798 vt_1644;
 P794 c_1645;
 int ro_1646;
 rstr lo_1647;
 rstr hi_1648;
 rstr v_1649;
 rstr lo_1650;
 rstr hi_1651;
 rstr v_1652;
 rstr v_1653;
};
struct f_st_call_486fr { int dummy;
 P792 s_485;
 P792 c_1654;
 P798 t_1655;
 P792 x_1656;
};
struct f_st_if_488fr { int dummy;
 P792 s_487;
 P792 a_1657;
 int first_1658;
 P798 t_1659;
 int taken_1660;
 int ok_1661;
 P811 mv_1662;
 rstr c_1663;
};
struct f_st_case_490fr { int dummy;
 P792 s_489;
 P798 st_1664;
 P798 vt_1665;
 int first_1666;
 P792 a_1667;
 rstr sel_1668;
 rstr tmp_1669;
 P792 lab_1670;
 P785 conds_1671;
 rstr v_1672;
 rstr lo_1673;
 rstr hi_1674;
};
struct f_st_repeat_492fr { int dummy;
 P792 s_491;
 P798 t_1675;
 P794 c_1676;
 rstr cond_1677;
 rstr access_1678;
 rstr lov_1679;
 rstr hiv_1680;
 rstr it_1681;
 P802 y_1682;
};
struct f_st_exit_494fr { int dummy;
 P792 s_493;
 P817 x_1683;
};
struct f_st_return_496fr { int dummy;
 P792 s_495;
 P798 vt_1684;
 rstr v_1685;
};
struct f_result_checked_500fr { int dummy;
 P798 t_497;
 P794 c_498;
 rstr *v_499;
 rstr result_;
};
struct f_exc_id_503fr { int dummy;
 rstr *name_501;
 rt_int line_502;
 rstr result_;
 P802 y_1686;
};
struct f_st_guard_505fr { int dummy;
 P792 s_504;
 P792 h_1687;
 int first_1688;
 P796 hv_1689;
 rstr f_1690;
 rstr x_1691;
 P792 n_1693;
 P785 conds_1694;
};
struct f_st_alloc_507fr { int dummy;
 P792 s_506;
 P785 lv_1695;
 P798 t_1696;
 P798 target_1697;
 P798 vt_1698;
 P794 c_1699;
 P794 tc_1700;
 int ro_1701;
 P792 d_1702;
 P792 p_1703;
 P792 a_1704;
 rstr tcn_1705;
 rstr cell_1706;
 rstr fn_1707;
 rstr v_1708;
};
struct f_act_ref_509fr { int dummy;
 P792 e_508;
 rstr result_;
 P785 lv_1709;
 P798 t_1710;
 P794 c_1711;
 int ro_1712;
 rstr v_1713;
};
struct f_st_create_511fr { int dummy;
 P792 s_510;
 P802 y_1714;
 P804 pm_1715;
 P792 a_1716;
 P785 lv_1717;
 P798 lt_1718;
 P798 vt_1719;
 P794 lc_1720;
 int ro_1721;
 P798 at_1722;
 P794 ac_1723;
 int aro_1724;
 P785 act_1725;
 rstr nf_1726;
 P785 link_1727;
 rt_int i_1728;
 rstr v_1732;
};
struct f_hidden_var_515fr { int dummy;
 rstr *name_512;
 P798 t_513;
 rstr *place_514;
 P802 y_1733;
};
struct f_user_create_521fr { int dummy;
 P792 s_516;
 P802 y_517;
 rstr *uv_518;
 P798 ut_519;
 rstr *nf_520;
 P798 t_1734;
 P815 saved_1735;
 P815 hook_1736;
 P792 un_1737;
 rstr hn_1738;
 rstr aa_1739;
 rstr uname_1740;
 rstr aname_1741;
 P792 start_1742;
 P792 an_1743;
};
struct f_wait_alt_526fr { int dummy;
 P792 inv_522;
 rstr *arr_523;
 rt_int i_524;
 int mixed_525;
 rstr result_;
 P785 lv_1744;
 P798 t_1745;
 P798 vt_1746;
 P794 c_1747;
 int ro_1748;
 P792 fn_1749;
 P792 args_1750;
 rstr slot_1751;
 P785 dv_1752;
 P798 dt_1753;
 rstr tmp_1754;
 rstr v_1755;
 rstr v_1756;
};
struct f_builtin_wait_528fr { int dummy;
 P792 inv_527;
 int result_;
 P785 lv_1757;
 P798 t_1758;
 P794 c_1759;
 int ro_1760;
 P815 saved_1761;
 int ok_1762;
};
struct f_wait_op_533fr { int dummy;
 P792 inv_529;
 rstr *op_530;
 rstr *q_531;
 int is_stmt_532;
 rstr result_;
 P792 x_1765;
 P792 f_1766;
 P792 qn_1767;
 P798 t_1768;
 rstr r_1769;
};
struct f_user_wait_538fr { int dummy;
 P792 s_534;
 rstr *arr_535;
 rstr *w_536;
 rt_int n_537;
 P792 a_1770;
 rt_int i_1771;
 P785 tests_1772;
 P785 revokes_1773;
 P792 inv_1774;
 P792 st_1775;
 P794 c_1776;
 P798 qt_1777;
 rstr qname_1778;
 P802 y_1779;
 rstr access_1780;
};
struct f_st_wait_540fr { int dummy;
 P792 s_539;
 P792 a_1781;
 rt_int n_1782;
 int first_1783;
 P815 inits_1784;
 int user_1785;
 rstr arr_1786;
 rstr w_1787;
 P792 inv_1788;
 P792 inv_1789;
 P785 conds_1790;
 rt_int i_1791;
};
struct f_call_node_544fr { int dummy;
 rstr *name_541;
 P792 arg_542;
 rt_int line_543;
 P792 result_;
 P792 x_1795;
 P792 f_1796;
};
struct f_user_region_546fr { int dummy;
 P792 s_545;
 P798 t_1797;
 rstr f_1798;
 rstr lock_1799;
 rstr unlock_1800;
};
struct f_st_region_548fr { int dummy;
 P792 s_547;
 P785 lv_1801;
 P798 t_1802;
 P794 c_1803;
 int ro_1804;
 rstr lk_1805;
 rstr f_1806;
};
struct f_gparam_551fr { int dummy;
 P792 g_549;
 rstr *name_550;
 P792 result_;
 P792 p_1807;
};
struct f_bind_sym_553fr { int dummy;
 P792 p_552;
 P802 result_;
 P802 y_1808;
};
struct f_same_binds_556fr { int dummy;
 P802 a_554;
 P802 b_555;
 int result_;
 P802 x_1809;
 P802 y_1810;
};
struct f_same_binding_559fr { int dummy;
 P802 a_557;
 P802 b_558;
 int result_;
};
struct f_tt_binds_564fr { int dummy;
 P792 gd_560;
 P792 formals_561;
 P792 actuals_562;
 rt_int line_563;
 P802 result_;
 P792 f_1811;
 P792 a_1812;
 P802 binds_1813;
 P794 c_1814;
 P798 at_1815;
 P792 p_1816;
 P802 b_1817;
 P792 st_1818;
 int ok_1819;
};
struct f_generic_use_566fr { int dummy;
 P792 st_565;
 int result_;
};
struct f_infer_from_571fr { int dummy;
 P792 gd_567;
 P792 pat_568;
 P798 t_569;
 P802 known_570;
 P802 result_;
 P802 binds_1820;
 P792 e_1821;
 P792 tp_1822;
 P785 nm_1823;
 P802 q_1824;
 int have_1825;
 P802 g_1826;
 P802 b_1827;
};
struct f_instantiate_type_577fr { int dummy;
 P802 g_572;
 P792 tt_573;
 P792 args_574;
 P794 *c_575;
 P794 c_575v;
 rt_int line_576;
 P798 result_;
 P792 gd_1828;
 P792 pat_1829;
 P802 binds_1830;
 P802 inst_1831;
 P798 t_1832;
 P819 saved_caps_1833;
 P806 saved_env_1834;
 rt_int saved_gdepth_1835;
 P802 b_1836;
 P802 y_1837;
 P794 yc_1838;
};
struct f_instantiate_582fr { int dummy;
 P802 g_578;
 P792 tt_579;
 P792 args_580;
 rt_int line_581;
 P802 result_;
 P792 gd_1840;
 P792 pat_1841;
 P802 binds_1842;
 P792 f_1843;
 P792 a_1844;
 P792 fp_1845;
 P802 inst_1846;
 P798 at_1847;
 P794 c_1848;
 P809 saved_fctx_1849;
 int saved_in_1850;
 rt_int saved_level_1851;
 P802 saved_sym_1852;
 P815 saved_code_1853;
 P806 saved_env_1854;
 rt_int saved_gdepth_1855;
 rstr v_1856;
 int known_1857;
 P802 q_1858;
 P802 b_1859;
 rstr v_1860;
 P802 b_1861;
};
struct f_access_of_584fr { int dummy;
 P802 y_583;
 rstr result_;
 P785 p_1862;
 rt_int i_1863;
};
struct f_import_of_587fr { int dummy;
 P792 l_585;
 rstr *name_586;
 P792 result_;
 P792 p_1867;
};
struct f_check_import_590fr { int dummy;
 P802 y_588;
 rt_int line_589;
 int result_;
 P809 c_1868;
 int ro_1869;
 P792 imp_1870;
};
struct f_c_ident_592fr { int dummy;
 rstr *s_591;
 rstr result_;
};
struct f_cell_deref_595fr { int dummy;
 P798 t_593;
 rstr *p_594;
 rstr result_;
};
struct f_deref_598fr { int dummy;
 rstr *base_596;
 P798 t_597;
 rstr result_;
};
struct f_is_lvalue_600fr { int dummy;
 P792 e_599;
 int result_;
 P802 y_1871;
};
struct f_lvalue_606fr { int dummy;
 P792 e_601;
 P785 *code_602;
 P785 code_602v;
 P798 *t_603;
 P798 t_603v;
 P794 *c_604;
 P794 c_604v;
 int *ro_605;
 int ro_605v;
 P785 base_1872;
 P798 bt_1873;
 P794 bc_1874;
 P802 y_1875;
};
struct f_select_on_614fr { int dummy;
 rstr *base_607;
 P798 bt_608;
 P792 e_609;
 int *ro_610;
 P785 *code_611;
 P785 code_611v;
 P798 *t_612;
 P798 t_612v;
 P794 *c_613;
 P794 c_613v;
 P792 p_1876;
 P794 pc_1877;
 P792 p_1878;
 P800 f_1879;
 rt_int i_1880;
 rstr fn_1881;
 P800 f_1882;
};
struct f_has_call_616fr { int dummy;
 rstr *s_615;
 int result_;
 rt_int i_1883;
};
struct f_need_slice_618fr { int dummy;
 P798 t_617;
 rstr c_1887;
 rstr n_1888;
 P796 l_1889;
};
struct f_ix_622fr { int dummy;
 rstr *i_619;
 rstr *lo_620;
 rstr *hi_621;
 rstr result_;
};
struct f_index_on_631fr { int dummy;
 rstr *base_623;
 P798 bt_624;
 P792 e_625;
 int *ro_626;
 int lv_627;
 P785 *code_628;
 P785 code_628v;
 P798 *t_629;
 P798 t_629v;
 P794 *c_630;
 P794 c_630v;
 P792 a_1891;
 P798 it_1892;
 rstr lo_1893;
 rstr hi_1894;
 P785 off_1895;
 rt_int k_1896;
 P785 b_1897;
 P785 pre_1898;
 rstr i_1899;
 rstr l_1900;
 rstr h_1901;
 rstr lo_1902;
 rstr hi_1903;
 rstr i_1904;
};
struct f_own_attribute_633fr { int dummy;
 P792 e_632;
 int result_;
 P815 saved_1905;
 P798 bt_1906;
 int ok_1907;
 rstr base_1910;
 P792 p_1911;
 P800 f_1912;
};
struct f_gexpr_637fr { int dummy;
 P792 e_634;
 P798 want_635;
 P798 *t_636;
 P798 t_636v;
 rstr result_;
 rt_int k_1913;
 P785 code_1914;
 P794 c_1915;
 int ro_1916;
 P798 bt_1917;
 P794 ctx_1918;
 rt_int i_1919;
 P802 y_1920;
 int ro_1921;
 P792 call_1922;
 P792 fname_1923;
 rstr a_1924;
 rstr a_1925;
 rstr a_1926;
 P792 nm_1927;
 P802 y_1928;
 rstr base_1929;
 rstr base_1930;
};
struct f_resolved_640fr { int dummy;
 P792 e_638;
 P798 *t_639;
 P798 t_639v;
 rstr result_;
 P794 c_1931;
 P798 vt_1932;
 P802 y_1933;
 P792 tt_1934;
 P792 call_1935;
 P792 f_1936;
 P792 fname_1937;
 rstr v_1938;
};
struct f_gexpr_in_645fr { int dummy;
 P792 e_641;
 P798 want_642;
 P794 c_643;
 P798 *t_644;
 P798 t_644v;
 rstr result_;
};
struct f_copy_node_647fr { int dummy;
 P792 e_646;
 P792 result_;
 P792 x_1939;
};
struct f_wrap_apply_649fr { int dummy;
 P792 e_648;
 P792 result_;
 P792 x_1941;
};
struct f_c_string_651fr { int dummy;
 rstr *s_650;
 rstr result_;
 rt_int n_1942;
 rt_int i_1943;
 rstr r_1947;
 rt_int j_1948;
 rt_int i_1949;
};
struct f_enum_type_of_654fr { int dummy;
 rstr *lit_652;
 rt_int line_653;
 P798 result_;
 P802 y_1953;
 P794 c_1954;
 P792 st_1955;
};
struct f_ptr_attribute_656fr { int dummy;
 P792 e_655;
 int result_;
 P785 lv_1956;
 P798 t_1957;
 P794 c_1958;
 int ro_1959;
 P792 p_1960;
 P815 saved_1961;
};
struct f_attribute_659fr { int dummy;
 P792 e_657;
 P798 *t_658;
 P798 t_658v;
 rstr result_;
 P798 bt_1962;
 P794 c_1963;
 P785 base_1964;
 P792 sub_1965;
 rstr name_1966;
 P792 p_1967;
 P792 a_1968;
 P794 pc_1969;
 rstr v_1970;
 P792 p_1971;
 P792 a_1972;
 P798 pt_1973;
 rstr v_1974;
};
struct f_subtype_compare_664fr { int dummy;
 P792 sa_660;
 P792 sb_661;
 rstr *op_662;
 rt_int line_663;
 rstr result_;
 P794 ca_1975;
 P794 cb_1976;
 P798 ta_1977;
 P798 tb_1978;
 P785 r_1979;
 rstr yes_1980;
 rstr no_1981;
 rt_int k_1982;
 P792 a_1986;
 P792 b_1987;
 P798 at_1988;
 P798 bt2_1989;
 rstr x_1990;
 rstr y_1991;
};
struct f_float_prec_666fr { int dummy;
 P794 c_665;
 rstr result_;
};
struct f_file_attribute_672fr { int dummy;
 P792 e_667;
 P798 bt_668;
 P794 c_669;
 P785 base_670;
 P798 *t_671;
 P798 t_671v;
 rstr result_;
};
struct f_gbinop_676fr { int dummy;
 P792 e_673;
 P798 want_674;
 P798 *t_675;
 P798 t_675v;
 rstr result_;
 P785 op_1992;
 P798 ta_1993;
 P798 tb_1994;
 P798 hint_1995;
 P802 uy_1996;
 P792 l_1997;
 P792 r_1998;
 P792 call_1999;
 P792 fname_2000;
 rstr s_2001;
 rstr a_2002;
 rstr a_2003;
 rstr b_2004;
 rstr a_2005;
 rstr b_2006;
 P798 at_2007;
 rstr a_2008;
 rstr b_2009;
 P798 wa_2010;
 P798 wb_2011;
 rstr a_2012;
 rstr b_2013;
 rstr dummy_2014;
 rstr a_2015;
 rstr b_2016;
 P798 ct_2017;
 rstr a_2018;
 rstr b_2019;
};
struct f_constructor_681fr { int dummy;
 P792 e_677;
 P798 want_678;
 P794 ctx_679;
 P798 *t_680;
 P798 t_680v;
 rstr result_;
 P792 it_2020;
 P800 f_2021;
 P798 vt_2022;
 P785 s_2023;
 rstr v_2024;
 rt_int i_2025;
 rstr tmp_2026;
 rstr v_2027;
 rstr tmp_2028;
 P785 parts_2029;
 P792 k_2030;
 P785 shared_2031;
 rstr v_2032;
 rstr v_2033;
};
struct f_comp_value_685fr { int dummy;
 P798 t_682;
 P794 c_683;
 rstr *v_684;
 rstr result_;
};
struct f_has_at_687fr { int dummy;
 rstr *s_686;
 int result_;
 rt_int i_2034;
};
struct f_set_elem_690fr { int dummy;
 P798 st_688;
 rstr *v_689;
 rstr result_;
};
struct f_array_cons_695fr { int dummy;
 P792 e_691;
 P798 at_692;
 P794 ctx_693;
 P798 *t_694;
 P798 t_694v;
 rstr result_;
 rstr tmp_2038;
 P785 parts_2039;
 P792 it_2040;
 int positional_2041;
 rt_int k_2042;
 P785 lo_2046;
 P785 hi_2047;
};
struct f_fill_items_701fr { int dummy;
 P792 items_696;
 P798 at_697;
 rstr *tmp_698;
 P796 prefix_699;
 rt_int dim_700;
 rstr result_;
 P792 it_2048;
 rt_int pos_2049;
 P785 r_2050;
 P798 vt_2051;
 rstr v_2052;
 P792 k_2053;
 rt_int d_2054;
 P796 pre_2055;
 P785 loops_2056;
 P785 ends_2057;
 rstr v_2058;
 rstr xv_2059;
 P792 k_2060;
 rstr xv_2061;
 rstr v_2062;
};
struct f_e_line_703fr { int dummy;
 P792 e_702;
 rt_int result_;
};
struct f_add_line_706fr { int dummy;
 P796 l_704;
 rstr *s_705;
 P796 result_;
 P796 r_2063;
 P796 tail_2064;
 P796 x_2065;
 P796 p_2066;
};
struct f_item_value_711fr { int dummy;
 P792 e_707;
 P798 at_708;
 rt_int line_709;
 P798 *vt_710;
 P798 vt_710v;
 rstr result_;
 rstr v_2069;
};
struct f_key_loop_716fr { int dummy;
 P792 k_712;
 P798 at_713;
 rt_int d_714;
 rstr *xv_715;
 rstr result_;
 P798 it_2070;
 rstr lo_2071;
 rstr hi_2072;
};
struct f_store_at_721fr { int dummy;
 P798 at_717;
 rstr *tmp_718;
 P796 xs_719;
 rt_int n_720;
 rstr result_;
 P785 off_2073;
 P796 x_2074;
 rt_int k_2075;
 rstr l_2076;
 rstr h_2077;
};
struct f_fits_724fr { int dummy;
 P802 y_722;
 P792 args_723;
 int result_;
 P792 a_2078;
 P804 pm_2079;
 P798 t_2080;
 P815 saved_2081;
 int ok_2082;
 P785 lv_2083;
 P794 lc_2084;
 int ro_2085;
 rstr v_2088;
};
struct f_resolve_overload_730fr { int dummy;
 rstr *name_725;
 P792 tt_726;
 P792 args_727;
 int is_stmt_728;
 rt_int line_729;
 P802 result_;
 P802 y_2089;
 P802 first_2090;
 rt_int n_2091;
 rt_int pass_2092;
};
struct f_tt_fits_733fr { int dummy;
 P802 y_731;
 P792 tt_732;
 int result_;
 P792 f_2096;
 P792 a_2097;
 P815 saved_2098;
 int ok_2099;
 P794 fc_2102;
 P794 ac_2103;
 P792 fst_2104;
 P798 ft_2105;
 P798 at_2106;
 P792 ast_2107;
};
struct f_overload_chain_736fr { int dummy;
 rstr *name_734;
 rt_int pass_735;
 P802 result_;
};
struct f_is_builtin_738fr { int dummy;
 rstr *n_737;
 int result_;
};
struct f_is_low_level_740fr { int dummy;
 rstr *n_739;
 int result_;
};
struct f_me_high_744fr { int dummy;
 P792 tt_741;
 rt_int line_742;
 P798 *t_743;
 P798 t_743v;
 rstr result_;
 P794 c_2108;
};
struct f_type_tag_746fr { int dummy;
 P798 t_745;
 rstr result_;
};
struct f_lock_ref_749fr { int dummy;
 P792 e_747;
 rstr *name_748;
 rstr result_;
 P785 lv_2109;
 P798 t_2110;
 P794 c_2111;
 int ro_2112;
};
struct f_user_op_752fr { int dummy;
 rstr *op_750;
 P792 args_751;
 P802 result_;
 P802 y_2113;
 rt_int pass_2114;
};
struct f_gcall_756fr { int dummy;
 P792 e_753;
 int is_stmt_754;
 P798 *t_755;
 P798 t_755v;
 rstr result_;
 P792 fn_2118;
 P792 tt_2119;
 P802 y_2120;
 P785 args_2121;
 P792 a_2122;
 P804 pm_2123;
 P798 lt_2124;
 P798 vt_2125;
 P785 lv_2126;
 P794 lc_2127;
 int ro_2128;
 P802 alt_2129;
 rt_int i_2130;
 rstr v_2134;
 rstr ct_2135;
 rstr v_2136;
};
struct f_requires_758fr { int dummy;
 P802 y_757;
 P796 result_;
 P792 imp_2137;
};
struct f_add_req_761fr { int dummy;
 P802 y_759;
 rstr *name_760;
 P796 l_2138;
};
struct f_require_calls_764fr { int dummy;
 P802 y_762;
 P792 e_763;
 P792 x_2140;
 P792 callee_2141;
 P802 z_2142;
 P796 l_2143;
};
struct f_declared_in_767fr { int dummy;
 P792 elems_765;
 rstr *name_766;
 int result_;
 P792 e_2144;
};
struct f_check_requires_770fr { int dummy;
 P802 y_768;
 rt_int line_769;
 P796 l_2145;
 P802 z_2146;
};
struct f_actual_bounds_774fr { int dummy;
 P798 ft_771;
 P798 t_772;
 P794 c_773;
 rstr result_;
};
struct f_builtin_781fr { int dummy;
 rstr *name_775;
 P792 tt_776;
 P792 args_777;
 rt_int line_778;
 int is_stmt_779;
 P798 *t_780;
 P798 t_780v;
 rstr result_;
 P798 at_2147;
 rt_int n_2148;
 rstr a_2149;
 rstr a_2150;
 rstr a_2151;
 rstr a_2152;
 rstr a_2153;
 rstr n1_2154;
 rstr m1_2155;
 rstr a_2156;
 rstr a_2157;
 P792 last_2158;
 rstr a_2159;
 rstr a_2160;
 P785 lv_2161;
 P794 lc_2162;
 int ro_2163;
 P792 last_2164;
 P785 lv_2165;
 P785 dv_2166;
 P794 lc_2167;
 int ro_2168;
 P798 mt_2169;
 P798 dt_2170;
 rstr v_2171;
 P785 lv_2172;
 P794 lc_2173;
 int ro_2174;
 P798 mt_2175;
 P785 lv_2176;
 P785 dv_2177;
 P785 bv_2178;
 P794 lc_2179;
 int ro_2180;
 P798 mt_2181;
 P798 dt_2182;
 P798 bt_2183;
 rstr v_2184;
 rstr v_2185;
 rstr v_2186;
 rstr v_2187;
 rstr a_2188;
 P785 bv_2189;
 P794 bc_2190;
 int ro_2191;
 P798 bt_2192;
 rstr l_2193;
 P785 pv_2194;
 P794 pc_2195;
 int ro_2196;
 P798 pt_2197;
 rstr dev_2198;
 rstr cmd_2199;
 P785 dv_2200;
 P794 dc_2201;
 int ro_2202;
 P798 dt_2203;
};
struct f_translate_783fr { int dummy;
 P792 units_782;
 P792 u_2204;
 P792 l_2206;
 rstr w_2207;
};
struct f_print_program_784fr { int dummy;
};
struct Pc786 { rt_int p_n; rstr all; };
struct Pc790 { rt_int p_n; A791 all; };
struct Pc807 { rt_int p_n; A808 all; };
static void as_R822(R822 *d, R822 s);
static R822 cp_R822(R822 s);
static int eq_R822(R822 a, R822 b);
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
static void as_A808(A808 *d, A808 s);
static A808 cp_A808(A808 s);
static int eq_A808(A808 a, A808 b);
static void as_R805(R805 *d, R805 s);
static R805 cp_R805(R805 s);
static int eq_R805(R805 a, R805 b);
static void as_R803(R803 *d, R803 s);
static R803 cp_R803(R803 s);
static int eq_R803(R803 a, R803 b);
static void as_R801(R801 *d, R801 s);
static R801 cp_R801(R801 s);
static int eq_R801(R801 a, R801 b);
static void as_R799(R799 *d, R799 s);
static R799 cp_R799(R799 s);
static int eq_R799(R799 a, R799 b);
static void as_R797(R797 *d, R797 s);
static R797 cp_R797(R797 s);
static int eq_R797(R797 a, R797 b);
static void as_R795(R795 *d, R795 s);
static R795 cp_R795(R795 s);
static int eq_R795(R795 a, R795 b);
static void as_R793(R793 *d, R793 s);
static R793 cp_R793(R793 s);
static int eq_R793(R793 a, R793 b);
static void as_A791(A791 *d, A791 s);
static A791 cp_A791(A791 s);
static int eq_A791(A791 a, A791 b);
static void as_R788(R788 *d, R788 s);
static R788 cp_R788(R788 s);
static int eq_R788(R788 a, R788 b);
static P785 f_mk_3(rstr *s_2);
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
static P815 f_new_buffer_24(void);
static void f_put_27(P815 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P815 b_30);
static void f_splice_34(P815 a_32, P815 b_33);
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
static P792 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P792 *head_62, P792 *tail_63, P792 x_64);
static rt_int f_list_len_67(P792 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P785 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P785 f_expect_id_89(void);
static P792 f_name_node_90(void);
static P792 f_id_list_91(void);
static P792 f_p_subtype_92(void);
static P792 f_constraint_list_93(void);
static P792 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P792 f_actual_tt_97(void);
static P792 f_binop_102(P785 op_98, P792 l_99, P792 r_100, rt_int line_101);
static P792 f_expr_103(void);
static P792 f_expr_and_104(void);
static P792 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P792 f_expr_rel_108(void);
static P792 f_expr_add_109(void);
static P792 f_expr_mul_110(void);
static P792 f_expr_pow_111(void);
static P792 f_expr_prefix_112(void);
static P792 f_postfix_113(void);
static P792 f_primary_114(void);
static P792 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P792 f_body_117(void);
static P792 f_body_element_118(void);
static P792 f_declaration_119(void);
static P792 f_object_decl_120(void);
static P792 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P792 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P792 f_formal_params_126(void);
static int f_imports_list_128(P792 owner_127);
static int f_is_definable_130(rstr *w_129);
static P785 f_definable_name_131(void);
static P792 f_subprogram_decl_132(void);
static P792 f_capsule_decl_133(void);
static P792 f_formal_tt_134(void);
static P792 f_generic_decl_135(void);
static P792 f_task_decl_136(void);
static P792 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P792 f_statement_140(void);
static P792 f_unlabeled_statement_141(void);
static P792 f_arm_145(P792 cond_142, P792 b_143, rt_int line_144);
static P792 f_if_stmt_146(void);
static P792 f_case_stmt_147(void);
static P792 f_repeat_stmt_148(void);
static P792 f_guard_stmt_149(void);
static P792 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P802 f_lookup_154(rstr *name_153);
static P802 f_lookup_decl_156(P792 d_155);
static void f_define_159(P802 y_157, rt_int line_158);
static int f_overloadable_161(P802 y_160);
static int f_same_tt_164(P792 a_162, P792 b_163);
static int f_same_signature_167(P804 a_165, P804 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P802 f_new_sym_172(rt_int kind_170, P785 name_171);
static P798 f_new_typ_174(rt_int kind_173);
static P794 f_new_cons_175(void);
static int f_scalar_kind_177(P798 t_176);
static rstr f_bound_ctype_179(P798 t_178);
static rstr f_cbound_182(P794 c_180, rstr *b_181);
static rstr f_clo_184(P794 c_183);
static rstr f_chi_186(P794 c_185);
static rstr f_sub_lo_189(P798 t_187, P794 c_188);
static rstr f_sub_hi_192(P798 t_190, P794 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P794 f_copy_cons_197(P794 c_196);
static P794 f_freeze_200(P794 c_198, P798 t_199);
static rstr f_checked_204(P798 t_201, P794 c_202, rstr *v_203);
static int f_same_lits_207(P792 a_205, P792 b_206);
static int f_same_210(P798 a_208, P798 b_209);
static P798 f_base_of_212(P798 t_211);
static P794 f_base_cons_215(P798 t_213, P794 c_214);
static rstr f_kind_name_217(P798 t_216);
static void f_check_type_221(P798 got_218, P798 want_219, rt_int line_220);
static rstr f_ctype_223(P798 t_222);
static rstr f_struct_body_225(P798 t_224);
static rstr f_field_decls_227(P798 t_226);
static void f_declare_ctype_229(P798 t_228);
static rstr f_dim_lo_231(rt_int k_230);
static rstr f_dim_hi_233(rt_int k_232);
static rstr f_more_dims_235(P798 t_234);
static rstr f_acnt_238(P798 t_236, rstr *base_237);
static P785 f_cons_lo_241(P794 c_239, rt_int k_240);
static P785 f_cons_hi_244(P794 c_242, rt_int k_243);
static P798 f_idx_type_247(P798 t_245, rt_int k_246);
static void f_init_ascii_248(void);
static rt_int f_lit_index_251(P792 lits_249, rstr *name_250);
static P798 f_resolve_subtype_254(P792 st_252, P794 *c_253);
static int f_float_lit_256(P792 e_255);
static void f_tag_constraint_260(P798 t_257, P792 e_258, P794 c_259);
static P798 f_named_subtype_263(P792 st_261, P794 *c_262);
static P798 f_invoke_abbrev_267(P802 y_264, P792 st_265, P794 *c_266);
static void f_apply_constraint_272(P798 t_268, P792 args_269, P794 c_270, rt_int line_271);
static P798 f_value_subtype_276(P792 e_273, P794 *c_274, P785 *base_275);
static P796 f_reverse_pairs_278(P796 l_277);
static P798 f_inquiry_281(P792 st_279, P794 *c_280);
static P792 f_as_subtype_283(P792 e_282);
static P792 f_tt_subtype_288(P785 name_284, P792 tt_285, P792 args_286, rt_int line_287);
static int f_type_name_290(rstr *name_289);
static int f_opened_292(P798 t_291);
static rstr f_replace_all_296(rstr *s_293, rstr *pat_294, rstr *r_295);
static rstr f_subst_298(rstr *s_297);
static P798 f_new_type_302(P802 y_299, P792 st_300, P794 *c_301);
static void f_init_storage_306(rstr *lval_303, P798 t_304, P794 c_305);
static rstr f_init_call_309(P802 y_307, rstr *lval_308);
static int f_needs_fin_311(P798 t_310);
static rstr f_fin_code_314(rstr *lval_312, P798 t_313);
static P798 f_tparam_type_317(P798 t_315, rstr *name_316);
static void f_make_storage_321(rstr *lval_318, P798 t_319, P794 c_320);
static rt_int f_manifest_324(P792 e_322, int *ok_323);
static P811 f_mk_mval_327(rt_int kind_325, rt_int i_326);
static rt_int f_ipow_330(rt_int a_328, rt_int b_329);
static P811 f_meval_333(P792 e_331, int *ok_332);
static rstr f_bool_text_335(int b_334);
static rt_int f_bool_i_337(int b_336);
static rstr f_mstr_339(P811 v_338);
static int f_ascii_char_341(rt_int i_340);
static int f_user_defined_343(rstr *op_342);
static rstr f_mcopy_345(P798 t_344);
static int f_composite_347(P798 t_346);
static rstr f_assign_code_352(rstr *lval_348, P798 t_349, rstr *v_350, P794 c_351);
static rstr f_copy_code_355(P798 t_353, rstr *v_354);
static rstr f_eq_code_359(P798 t_356, rstr *a_357, rstr *b_358);
static rstr f_elem_assign_363(rstr *lval_360, P798 t_361, rstr *v_362);
static int f_seen_name_366(P796 l_364, rstr *s_365);
static void f_emit_helpers_367(void);
static void f_helper_bodies_369(P798 t_368);
static void f_declare_body_371(P792 elems_370);
static void f_manifest_const_373(P792 d_372);
static int f_exported_377(P792 d_374, rstr *name_375, int *ro_376);
static P802 f_copy_sym_379(P802 y_378);
static void f_gen_capsule_381(P792 d_380);
static void f_capsule_params_385(P792 d_382, P792 args_383, rt_int line_384);
static void f_elaborate_capsule_390(P792 d_386, P802 y_387, P792 args_388, P792 owner_389);
static int f_exports_op_393(P792 d_391, rstr *op_392);
static P785 f_renamed_396(P792 d_394, P802 z_395);
static void f_gen_expose_398(P792 d_397);
static void f_finish_ptr_400(P798 t_399);
static P792 f_ptr_args_402(P794 c_401);
static void f_bind_ptr_params_407(P792 formals_403, P792 actuals_404, rstr *cell_405, rt_int line_406);
static void f_alloc_cell_412(P792 s_408, rstr *lv_409, P798 t_410, P794 c_411);
static P794 f_freeze_args_416(P794 c_413, P798 t_414, rt_int line_415);
static void f_ptr_subtype_check_420(P798 t_417, P794 c_418, P792 src_419);
static void f_declare_subprogram_422(P792 d_421);
static P802 f_build_subprogram_424(P792 d_423);
static int f_has_pragmat_427(P785 pr_425, rstr *p_426);
static P785 f_suppressing_429(P785 pr_428);
static int f_suppressed_431(rstr *x_430);
static void f_element_433(P792 e_432);
static void f_element1_435(P792 e_434);
static rstr f_storage_438(rstr *name_436, P798 t_437);
static void f_bind_441(P802 y_439, rstr *access_440);
static void f_var_decl_443(P792 d_442);
static void f_open_fin_445(rstr *fc_444);
static void f_close_fins_447(P796 saved_446);
static void f_const_decl_449(P792 d_448);
static void f_subprogram_451(P792 d_450);
static void f_gen_subprogram_454(P792 d_452, P802 y_453);
static rstr f_waits_of_456(P792 d_455);
static rstr f_task_waits_458(P792 elems_457);
static void f_await_tasks_460(P792 elems_459);
static void f_capsule_elements_462(P792 elems_461);
static void f_declare_labels_464(P792 elems_463);
static void f_start_labels_465(void);
static P817 f_goto_label_467(rstr *name_466);
static int f_has_return_469(P792 e_468);
static void f_capsule_body_471(P792 elems_470);
static void f_body_elements_473(P792 elems_472);
static void f_gen_body_475(P792 elems_474);
static void f_pop_frames_477(rt_int upto_476);
static void f_push_cleanup_479(rstr *s_478);
static void f_pop_cleanup_480(void);
static void f_gen_statement_482(P792 s_481);
static void f_st_assign_484(P792 s_483);
static void f_st_call_486(P792 s_485);
static void f_st_if_488(P792 s_487);
static void f_st_case_490(P792 s_489);
static void f_st_repeat_492(P792 s_491);
static void f_st_exit_494(P792 s_493);
static void f_st_return_496(P792 s_495);
static rstr f_result_checked_500(P798 t_497, P794 c_498, rstr *v_499);
static rstr f_exc_id_503(rstr *name_501, rt_int line_502);
static void f_st_guard_505(P792 s_504);
static void f_st_alloc_507(P792 s_506);
static rstr f_act_ref_509(P792 e_508);
static void f_st_create_511(P792 s_510);
static void f_hidden_var_515(rstr *name_512, P798 t_513, rstr *place_514);
static void f_user_create_521(P792 s_516, P802 y_517, rstr *uv_518, P798 ut_519, rstr *nf_520);
static rstr f_wait_alt_526(P792 inv_522, rstr *arr_523, rt_int i_524, int mixed_525);
static int f_builtin_wait_528(P792 inv_527);
static rstr f_wait_op_533(P792 inv_529, rstr *op_530, rstr *q_531, int is_stmt_532);
static void f_user_wait_538(P792 s_534, rstr *arr_535, rstr *w_536, rt_int n_537);
static void f_st_wait_540(P792 s_539);
static P792 f_call_node_544(rstr *name_541, P792 arg_542, rt_int line_543);
static void f_user_region_546(P792 s_545);
static void f_st_region_548(P792 s_547);
static P792 f_gparam_551(P792 g_549, rstr *name_550);
static P802 f_bind_sym_553(P792 p_552);
static int f_same_binds_556(P802 a_554, P802 b_555);
static int f_same_binding_559(P802 a_557, P802 b_558);
static P802 f_tt_binds_564(P792 gd_560, P792 formals_561, P792 actuals_562, rt_int line_563);
static int f_generic_use_566(P792 st_565);
static P802 f_infer_from_571(P792 gd_567, P792 pat_568, P798 t_569, P802 known_570);
static P798 f_instantiate_type_577(P802 g_572, P792 tt_573, P792 args_574, P794 *c_575, rt_int line_576);
static P802 f_instantiate_582(P802 g_578, P792 tt_579, P792 args_580, rt_int line_581);
static rstr f_access_of_584(P802 y_583);
static P792 f_import_of_587(P792 l_585, rstr *name_586);
static int f_check_import_590(P802 y_588, rt_int line_589);
static rstr f_c_ident_592(rstr *s_591);
static rstr f_cell_deref_595(P798 t_593, rstr *p_594);
static rstr f_deref_598(rstr *base_596, P798 t_597);
static int f_is_lvalue_600(P792 e_599);
static void f_lvalue_606(P792 e_601, P785 *code_602, P798 *t_603, P794 *c_604, int *ro_605);
static void f_select_on_614(rstr *base_607, P798 bt_608, P792 e_609, int *ro_610, P785 *code_611, P798 *t_612, P794 *c_613);
static int f_has_call_616(rstr *s_615);
static void f_need_slice_618(P798 t_617);
static rstr f_ix_622(rstr *i_619, rstr *lo_620, rstr *hi_621);
static void f_index_on_631(rstr *base_623, P798 bt_624, P792 e_625, int *ro_626, int lv_627, P785 *code_628, P798 *t_629, P794 *c_630);
static int f_own_attribute_633(P792 e_632);
static rstr f_gexpr_637(P792 e_634, P798 want_635, P798 *t_636);
static rstr f_resolved_640(P792 e_638, P798 *t_639);
static rstr f_gexpr_in_645(P792 e_641, P798 want_642, P794 c_643, P798 *t_644);
static P792 f_copy_node_647(P792 e_646);
static P792 f_wrap_apply_649(P792 e_648);
static rstr f_c_string_651(rstr *s_650);
static P798 f_enum_type_of_654(rstr *lit_652, rt_int line_653);
static int f_ptr_attribute_656(P792 e_655);
static rstr f_attribute_659(P792 e_657, P798 *t_658);
static rstr f_subtype_compare_664(P792 sa_660, P792 sb_661, rstr *op_662, rt_int line_663);
static rstr f_float_prec_666(P794 c_665);
static rstr f_file_attribute_672(P792 e_667, P798 bt_668, P794 c_669, P785 base_670, P798 *t_671);
static rstr f_gbinop_676(P792 e_673, P798 want_674, P798 *t_675);
static rstr f_constructor_681(P792 e_677, P798 want_678, P794 ctx_679, P798 *t_680);
static rstr f_comp_value_685(P798 t_682, P794 c_683, rstr *v_684);
static int f_has_at_687(rstr *s_686);
static rstr f_set_elem_690(P798 st_688, rstr *v_689);
static rstr f_array_cons_695(P792 e_691, P798 at_692, P794 ctx_693, P798 *t_694);
static rstr f_fill_items_701(P792 items_696, P798 at_697, rstr *tmp_698, P796 prefix_699, rt_int dim_700);
static rt_int f_e_line_703(P792 e_702);
static P796 f_add_line_706(P796 l_704, rstr *s_705);
static rstr f_item_value_711(P792 e_707, P798 at_708, rt_int line_709, P798 *vt_710);
static rstr f_key_loop_716(P792 k_712, P798 at_713, rt_int d_714, rstr *xv_715);
static rstr f_store_at_721(P798 at_717, rstr *tmp_718, P796 xs_719, rt_int n_720);
static int f_fits_724(P802 y_722, P792 args_723);
static P802 f_resolve_overload_730(rstr *name_725, P792 tt_726, P792 args_727, int is_stmt_728, rt_int line_729);
static int f_tt_fits_733(P802 y_731, P792 tt_732);
static P802 f_overload_chain_736(rstr *name_734, rt_int pass_735);
static int f_is_builtin_738(rstr *n_737);
static int f_is_low_level_740(rstr *n_739);
static rstr f_me_high_744(P792 tt_741, rt_int line_742, P798 *t_743);
static rstr f_type_tag_746(P798 t_745);
static rstr f_lock_ref_749(P792 e_747, rstr *name_748);
static P802 f_user_op_752(rstr *op_750, P792 args_751);
static rstr f_gcall_756(P792 e_753, int is_stmt_754, P798 *t_755);
static P796 f_requires_758(P802 y_757);
static void f_add_req_761(P802 y_759, rstr *name_760);
static void f_require_calls_764(P802 y_762, P792 e_763);
static int f_declared_in_767(P792 elems_765, rstr *name_766);
static void f_check_requires_770(P802 y_768, rt_int line_769);
static rstr f_actual_bounds_774(P798 ft_771, P798 t_772, P794 c_773);
static rstr f_builtin_781(rstr *name_775, P792 tt_776, P792 args_777, rt_int line_778, int is_stmt_779, P798 *t_780);
static void f_translate_783(P792 units_782);
static void f_print_program_784(void);
static int ex_compile_error_1;
static P789 g_toks_823;
static rt_int g_ntoks_824;
static rt_int g_tpos_825;
static rt_int g_src_line_826;
static P785 g_pending_prag_827;
static P806 g_table_828;
static P806 g_genv_829;
static P802 g_all_insts_830;
static rt_int g_depth_831;
static P802 g_scope_stack_832;
static P798 g_all_types_833;
static rt_int g_serial_834;
static P815 g_out_types_835;
static P815 g_out_helpers_836;
static P815 g_out_protos_837;
static P815 g_out_globals_838;
static P815 g_out_funcs_839;
static P815 g_out_init_840;
static P815 g_out_excs_841;
static P815 g_code_842;
static P815 g_fields_buf_843;
static int g_in_func_844;
static rt_int g_cur_level_845;
static P809 g_fctx_846;
static P819 g_caps_847;
static P821 g_cap_waits_848;
static P796 g_psub_849;
static P785 g_st_field_850;
static P815 g_out_frames_851;
static P815 g_out_roots_852;
static int g_uses_free_853;
static P796 g_fins_854;
static int g_uses_findyn_855;
static P802 g_func_sym_856;
static P794 g_func_rc_857;
static P785 g_cap_ret_858;
static P785 g_cap_rflag_859;
static rt_int g_ret_frames_860;
static rt_int g_gdepth_861;
static P785 g_suppress_862;
static P794 g_cons_ctx_863;
static P817 g_exits_864;
static P817 g_gotos_865;
static rt_int g_frames_866;
static P796 g_handlers_867;
static P796 g_cleanups_868;
static rt_int g_trial_869;
static P796 g_mcopies_870;
static P798 g_ty_int_871;
static P798 g_ty_bool_872;
static P798 g_ty_float_873;
static P798 g_ty_ascii_874;
static P798 g_ty_string_875;
static P798 g_ty_void_876;
static P798 g_ty_file_877;
static P798 g_ty_nil_878;
static P798 g_ty_lock_879;
static P798 g_ty_latch_880;
static P798 g_ty_act_881;
static P798 g_file_mode_type_882;
static P794 g_no_cons_883;
static P785 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_884 = NULL;
{ P785 cell885 = rt_alloc(sizeof *cell885);
rt_int pv886 = ((rt_int)(((*F->s_2)).len));
cell885->p_n = pv886;
cell885->all = rt_str_new(pv886);
rt_str_assign(&cell885->all, (*F->s_2));
F->t_884 = cell885;
}
F->result_ = F->t_884;
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
F->r_887 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_887, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_887;
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
F->r_888 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_888, (*F->s_14));
{ rt_int lo890 = ((rt_int)1LL), hi891 = ((rt_int)(((*F->s_14)).len));
for (rt_int it892 = lo890; it892 <= hi891; it892++) {
F->i_889 = it892;
if (((65 <= rt_str_get(F->r_888, F->i_889)) && (rt_str_get(F->r_888, F->i_889) <= 90))) {
(*rt_str_at(&F->r_888, F->i_889)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_888, F->i_889)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_888;
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
F->l_893 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_894 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_893), rt_str(" ", 1)));
{ rt_int lo896 = ((rt_int)1LL), hi897 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_894).len))), ((rt_int)1LL));
for (rt_int it898 = lo896; it898 <= hi897; it898++) {
F->i_895 = it898;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_895, rt_sub(rt_add(F->i_895, ((rt_int)((F->w_894).len))), ((rt_int)1LL))), F->w_894)) {
F->result_ = rt_str_cat(F->l_893, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_893;
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
g_serial_834 = rt_add(g_serial_834, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_834));
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
if ((g_trial_869 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P815 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_899 = NULL;
{ R816 *cell900 = rt_alloc(sizeof(R816));
(*cell900).head = NULL;
(*cell900).tail = NULL;
F->b_899 = cell900;
}
F->result_ = F->b_899;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P815 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_901 = NULL;
{ R797 *cell902 = rt_alloc(sizeof(R797));
(*cell902).s = NULL;
(*cell902).next = NULL;
F->l_901 = cell902;
}
(*(P796)rt_nil_check(F->l_901)).s = f_mk_3(&(*F->s_26));
if (((*(P815)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P815)rt_nil_check(F->b_25)).head = F->l_901;
} else {
(*(P796)rt_nil_check((*(P815)rt_nil_check(F->b_25)).tail)).next = F->l_901;
}
(*(P815)rt_nil_check(F->b_25)).tail = F->l_901;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_842, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P815 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_903 = NULL;
F->l_903 = (*(P815)rt_nil_check(F->b_30)).head;
while ((F->l_903 != NULL)) {
rt_putln((((P785)rt_nil_check((*(P796)rt_nil_check(F->l_903)).s))->all));
F->l_903 = (*(P796)rt_nil_check(F->l_903)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P815 a_32, P815 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P815)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P815)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P815)rt_nil_check(F->a_32)).head = (*(P815)rt_nil_check(F->b_33)).head;
} else {
(*(P796)rt_nil_check((*(P815)rt_nil_check(F->a_32)).tail)).next = (*(P815)rt_nil_check(F->b_33)).head;
}
(*(P815)rt_nil_check(F->a_32)).tail = (*(P815)rt_nil_check(F->b_33)).tail;
(*(P815)rt_nil_check(F->b_33)).head = NULL;
(*(P815)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel904 = (*F->w_35);
if (0 || rt_str_eq(sel904, rt_str("ABBREV", 6)) || rt_str_eq(sel904, rt_str("ABNORMAL", 8)) || rt_str_eq(sel904, rt_str("ALL", 3)) || rt_str_eq(sel904, rt_str("ALLOC", 5)) || rt_str_eq(sel904, rt_str("ASSERT", 6)) || rt_str_eq(sel904, rt_str("BEGIN", 5)) || rt_str_eq(sel904, rt_str("BY", 2)) || rt_str_eq(sel904, rt_str("CAPSULE", 7)) || rt_str_eq(sel904, rt_str("CASE", 4)) || rt_str_eq(sel904, rt_str("CONST", 5)) || rt_str_eq(sel904, rt_str("CREATE", 6)) || rt_str_eq(sel904, rt_str("DO", 2)) || rt_str_eq(sel904, rt_str("ELSE", 4)) || rt_str_eq(sel904, rt_str("ELSEIF", 6)) || rt_str_eq(sel904, rt_str("END", 3)) || rt_str_eq(sel904, rt_str("EXCEPTION", 9)) || rt_str_eq(sel904, rt_str("EXIT", 4)) || rt_str_eq(sel904, rt_str("EXPORTS", 7)) || rt_str_eq(sel904, rt_str("EXPOSE", 6)) || rt_str_eq(sel904, rt_str("EXTERNAL", 8)) || rt_str_eq(sel904, rt_str("FOR", 3)) || rt_str_eq(sel904, rt_str("FROM", 4)) || rt_str_eq(sel904, rt_str("FUNC", 4)) || rt_str_eq(sel904, rt_str("GENERIC", 7)) || rt_str_eq(sel904, rt_str("GOTO", 4)) || rt_str_eq(sel904, rt_str("GUARD", 5)) || rt_str_eq(sel904, rt_str("IF", 2)) || rt_str_eq(sel904, rt_str("IMPORTS", 7)) || rt_str_eq(sel904, rt_str("LOCATION", 8)) || rt_str_eq(sel904, rt_str("NAMED", 5)) || rt_str_eq(sel904, rt_str("NEEDS", 5)) || rt_str_eq(sel904, rt_str("NEW", 3)) || rt_str_eq(sel904, rt_str("NONE", 4)) || rt_str_eq(sel904, rt_str("OUT", 3)) || rt_str_eq(sel904, rt_str("OF", 2)) || rt_str_eq(sel904, rt_str("PRAG", 4)) || rt_str_eq(sel904, rt_str("PROC", 4)) || rt_str_eq(sel904, rt_str("RAISE", 5)) || rt_str_eq(sel904, rt_str("READONLY", 8)) || rt_str_eq(sel904, rt_str("REVERSE", 7)) || rt_str_eq(sel904, rt_str("REGION", 6)) || rt_str_eq(sel904, rt_str("RENAMING", 8)) || rt_str_eq(sel904, rt_str("REP", 3)) || rt_str_eq(sel904, rt_str("REPEAT", 6)) || rt_str_eq(sel904, rt_str("RERAISE", 7)) || rt_str_eq(sel904, rt_str("RETURN", 6)) || rt_str_eq(sel904, rt_str("SUBTYPE", 7)) || rt_str_eq(sel904, rt_str("TASK", 4)) || rt_str_eq(sel904, rt_str("THEN", 4)) || rt_str_eq(sel904, rt_str("TO", 2)) || rt_str_eq(sel904, rt_str("TYPE", 4)) || rt_str_eq(sel904, rt_str("VAR", 3)) || rt_str_eq(sel904, rt_str("WAIT", 4)) || rt_str_eq(sel904, rt_str("WHEN", 4)) || rt_str_eq(sel904, rt_str("WHILE", 5))) {
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
F->t_905 = NULL;
{ R788 *cell906 = rt_alloc(sizeof(R788));
(*cell906).s = NULL;
(*cell906).prags = NULL;
F->t_905 = cell906;
}
(*(P787)rt_nil_check(F->t_905)).kind = F->kind_39;
(*(P787)rt_nil_check(F->t_905)).line = g_src_line_826;
(*(P787)rt_nil_check(F->t_905)).ival = F->ival_41;
(*(P787)rt_nil_check(F->t_905)).s = f_mk_3(&(*F->s_40));
(*(P787)rt_nil_check(F->t_905)).prags = g_pending_prag_827;
g_pending_prag_827 = NULL;
g_ntoks_824 = rt_add(g_ntoks_824, ((rt_int)1LL));
(((P789)rt_nil_check(g_toks_823))->all).p[(rt_index(g_ntoks_824, (((P789)rt_nil_check(g_toks_823))->all).lo, (((P789)rt_nil_check(g_toks_823))->all).hi) - (((P789)rt_nil_check(g_toks_823))->all).lo)] = F->t_905;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_907 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_907 <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_907)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_907))) || (rt_str_get((*F->line_43), F->j_907) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_907) == 95) && ((F->j_907 == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_907, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_907, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_907 = rt_add(F->j_907, ((rt_int)1LL));
}
F->result_ = F->j_907;
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
F->w_908 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_908, (*F->s_46));
{ rt_int lo910 = ((rt_int)1LL), hi911 = ((rt_int)((F->w_908).len));
for (rt_int it912 = lo910; it912 <= hi911; it912++) {
F->k_909 = it912;
(*rt_str_at(&F->w_908, F->k_909)) = f_upper_13(rt_str_get(F->w_908, F->k_909));
}
}
F->result_ = F->w_908;
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
F->j_913 = F->i_49;
while (((F->j_913 <= ((rt_int)(((*F->line_48)).len))) && ((rt_str_get((*F->line_48), F->j_913) == 32) || (rt_str_get((*F->line_48), F->j_913) == 9)))) {
F->j_913 = rt_add(F->j_913, ((rt_int)1LL));
}
F->result_ = F->j_913;
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
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_915 = NULL;
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_916 = 1;
if (((F->j_914 > ((rt_int)(((*F->line_51)).len))) || (rt_str_get((*F->line_51), F->j_914) != 40))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
while (F->more_916) {
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->j_914);
if (((F->j_914 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_914))))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_917 = f_ident_end_45(&(*F->line_51), F->j_914);
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_914, rt_sub(F->k_917, ((rt_int)1LL))); b_; }))); b_; }));
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->k_917);
if (((F->j_914 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_914) == 40))) {
F->go_918 = 1;
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), rt_str("(", 1)); b_; }));
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
while (F->go_918) {
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->j_914);
if (((F->j_914 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_914))))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_917 = f_ident_end_45(&(*F->line_51), F->j_914);
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_914, rt_sub(F->k_917, ((rt_int)1LL))); b_; }))); b_; }));
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->k_917);
if (((F->j_914 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_914) == 44))) {
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), rt_str(",", 1)); b_; }));
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
} else if (((F->j_914 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_914) == 41))) {
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
F->go_918 = 0;
} else {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), rt_str(")", 1)); b_; }));
}
F->r_915 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_915))->all), rt_str(";", 1)); b_; }));
F->j_914 = f_skip_blanks_50(&(*F->line_51), F->j_914);
if (((F->j_914 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_914) == 44))) {
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
} else if (((F->j_914 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_914) == 41))) {
F->j_914 = rt_add(F->j_914, ((rt_int)1LL));
F->more_916 = 0;
} else {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P785)rt_nil_check(F->r_915))->all));
if ((g_pending_prag_827 == NULL)) {
g_pending_prag_827 = F->r_915;
} else {
g_pending_prag_827 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(g_pending_prag_827))->all), (((P785)rt_nil_check(F->r_915))->all)); b_; }));
}
F->result_ = F->j_914;
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
F->i_919 = ((rt_int)1LL);
while ((F->i_919 <= ((rt_int)(((*F->r_54)).len)))) {
F->k_920 = F->i_919;
while ((rt_str_get((*F->r_54), F->k_920) != 59)) {
F->k_920 = rt_add(F->k_920, ((rt_int)1LL));
}
{
F->p_921 = rt_str_copy(rt_str_slice((*F->r_54), F->i_919, rt_sub(F->k_920, ((rt_int)1LL))));
F->ok_922 = ((((((((((rt_str_eq(F->p_921, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_921, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_921, rt_str("OPEN", 4))) || rt_str_eq(F->p_921, rt_str("CLOSED", 6))) || rt_str_eq(F->p_921, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_921, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_921, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_921, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_921, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_921, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_921).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_921, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_923 = ((((((((((rt_int)((F->p_921).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_921, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_921, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_921, rt_str("OPEN", 4))) || rt_str_eq(F->p_921, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_921).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_921, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_921, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_921, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_921).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_921, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_923 && (!F->ok_922))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_921); b_; }));
}
}
F->i_919 = rt_add(F->k_920, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_924 = ((rt_int)1LL);
F->j_925 = ((rt_int)0LL);
F->n_926 = ((rt_int)(((*F->line_56)).len));
while ((F->i_924 <= F->n_926)) {
F->c_927 = rt_str_get((*F->line_56), F->i_924);
if (((((F->c_927 == 32) || (F->c_927 == 9)) || (F->c_927 == 13)) || (F->c_927 == 12))) {
F->i_924 = rt_add(F->i_924, ((rt_int)1LL));
} else if ((F->c_927 == 37)) {
F->i_924 = rt_add(F->n_926, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_927)) {
F->j_925 = f_ident_end_45(&(*F->line_56), F->i_924);
{
F->w_928 = rt_str_new(rt_sub(F->j_925, F->i_924));
rt_str_assign(&F->w_928, rt_str_slice((*F->line_56), F->i_924, rt_sub(F->j_925, ((rt_int)1LL))));
{ rt_int lo930 = ((rt_int)1LL), hi931 = ((rt_int)((F->w_928).len));
for (rt_int it932 = lo930; it932 <= hi931; it932++) {
F->k_929 = it932;
(*rt_str_at(&F->w_928, F->k_929)) = f_upper_13(rt_str_get(F->w_928, F->k_929));
}
}
if (rt_str_eq(F->w_928, rt_str("PRAGMAT", 7))) {
while (((F->j_925 <= F->n_926) && (rt_str_get((*F->line_56), F->j_925) != 59))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
} else if (rt_str_eq(F->w_928, rt_str("PRAG", 4))) {
F->j_925 = f_lex_prag_53(&(*F->line_56), F->j_925);
} else if (f_is_reserved_36(&F->w_928)) {
f_add_token_42((((rt_int)2LL)), &F->w_928, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_928)) {
f_add_token_42((((rt_int)3LL)), &F->w_928, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_928, ((rt_int)0LL));
}
}
F->i_924 = F->j_925;
} else if (f_is_digit_11(F->c_927)) {
F->j_925 = F->i_924;
while (((F->j_925 <= F->n_926) && f_is_digit_11(rt_str_get((*F->line_56), F->j_925)))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
if ((((F->j_925 < F->n_926) && (rt_str_get((*F->line_56), F->j_925) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_925, ((rt_int)1LL)))))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
while (((F->j_925 <= F->n_926) && f_is_digit_11(rt_str_get((*F->line_56), F->j_925)))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
if (((F->j_925 <= F->n_926) && ((rt_str_get((*F->line_56), F->j_925) == 69) || (rt_str_get((*F->line_56), F->j_925) == 101)))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
if (((F->j_925 <= F->n_926) && ((rt_str_get((*F->line_56), F->j_925) == 43) || (rt_str_get((*F->line_56), F->j_925) == 45)))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
while (((F->j_925 <= F->n_926) && f_is_digit_11(rt_str_get((*F->line_56), F->j_925)))) {
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_924, rt_sub(F->j_925, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_924, rt_sub(F->j_925, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_924, rt_sub(F->j_925, ((rt_int)1LL)))));
}
F->i_924 = F->j_925;
} else if ((((F->c_927 == 39) && (F->i_924 < F->n_926)) && (rt_str_get((*F->line_56), rt_add(F->i_924, ((rt_int)1LL))) == 39))) {
F->j_925 = rt_add(F->i_924, ((rt_int)2LL));
while (((F->j_925 < F->n_926) && (!((rt_str_get((*F->line_56), F->j_925) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_925, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_925) == 34)) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
if ((F->j_925 >= F->n_926)) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_924, ((rt_int)2LL)), rt_sub(F->j_925, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_924 = rt_add(F->j_925, ((rt_int)2LL));
} else if ((F->c_927 == 39)) {
F->j_925 = rt_add(F->i_924, ((rt_int)1LL));
if (((F->j_925 > F->n_926) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_925))))) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_925 = f_ident_end_45(&(*F->line_56), F->j_925);
{
F->w_933 = rt_str_new(rt_sub(rt_sub(F->j_925, F->i_924), ((rt_int)1LL)));
rt_str_assign(&F->w_933, rt_str_slice((*F->line_56), rt_add(F->i_924, ((rt_int)1LL)), rt_sub(F->j_925, ((rt_int)1LL))));
{ rt_int lo935 = ((rt_int)1LL), hi936 = ((rt_int)((F->w_933).len));
for (rt_int it937 = lo935; it937 <= hi936; it937++) {
F->k_934 = it937;
(*rt_str_at(&F->w_933, F->k_934)) = f_upper_13(rt_str_get(F->w_933, F->k_934));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_933, ((rt_int)0LL));
}
F->i_924 = F->j_925;
} else if ((F->c_927 == 34)) {
F->j_925 = rt_add(F->i_924, ((rt_int)1LL));
while (((F->j_925 <= F->n_926) && (rt_str_get((*F->line_56), F->j_925) != 34))) {
if ((rt_str_get((*F->line_56), F->j_925) == 39)) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_925 = rt_add(F->j_925, ((rt_int)1LL));
}
if ((F->j_925 > F->n_926)) {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_924, ((rt_int)1LL)), rt_sub(F->j_925, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_924 = rt_add(F->j_925, ((rt_int)1LL));
} else {
{
F->two_938 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_938, rt_str("  ", 2));
(*rt_str_at(&F->two_938, ((rt_int)1LL))) = F->c_927;
if ((F->i_924 < F->n_926)) {
(*rt_str_at(&F->two_938, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_924, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_938, rt_str(":=", 2)) || rt_str_eq(F->two_938, rt_str("=>", 2))) || rt_str_eq(F->two_938, rt_str("..", 2))) || rt_str_eq(F->two_938, rt_str("**", 2))) || rt_str_eq(F->two_938, rt_str("/=", 2))) || rt_str_eq(F->two_938, rt_str("<=", 2))) || rt_str_eq(F->two_938, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_938, ((rt_int)0LL));
F->i_924 = rt_add(F->i_924, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_938, rt_str("<<", 2)) || rt_str_eq(F->two_938, rt_str(">>", 2))) || rt_str_eq(F->two_938, rt_str("::", 2)))) {
if (rt_str_eq(F->two_938, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_938, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_924 = rt_add(F->i_924, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_927 == 40) || (F->c_927 == 41)) || (F->c_927 == 91)) || (F->c_927 == 93)) || (F->c_927 == 44)) || (F->c_927 == 58)) || (F->c_927 == 59)) || (F->c_927 == 46)) || (F->c_927 == 35)) || (F->c_927 == 43)) || (F->c_927 == 45)) || (F->c_927 == 42)) || (F->c_927 == 47)) || (F->c_927 == 38)) || (F->c_927 == 61)) || (F->c_927 == 60)) || (F->c_927 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_927); b_; }), ((rt_int)0LL));
F->i_924 = rt_add(F->i_924, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_939 = rt_str_new(rt_sizeln());
rt_readln(&F->line_939);
g_src_line_826 = rt_add(g_src_line_826, ((rt_int)1LL));
f_lex_line_57(&F->line_939);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P792 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_940 = NULL;
{ R793 *cell941 = rt_alloc(sizeof(R793));
(*cell941).name = NULL;
(*cell941).tag = NULL;
(*cell941).prags = NULL;
(*cell941).labels = NULL;
(*cell941).a = NULL;
(*cell941).b = NULL;
(*cell941).c = NULL;
(*cell941).d = NULL;
(*cell941).e = NULL;
(*cell941).next = NULL;
F->x_940 = cell941;
}
(*(P792)rt_nil_check(F->x_940)).kind = F->kind_59;
(*(P792)rt_nil_check(F->x_940)).line = F->line_60;
F->result_ = F->x_940;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P792 *head_62, P792 *tail_63, P792 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P792)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P792)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P792)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P792 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_942 = ((rt_int)0LL);
F->p_943 = NULL;
F->p_943 = F->l_66;
while ((F->p_943 != NULL)) {
F->n_942 = rt_add(F->n_942, ((rt_int)1LL));
F->p_943 = (*(P792)rt_nil_check(F->p_943)).next;
}
F->result_ = F->n_942;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).line;
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
F->result_ = (((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = (((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = ((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_73);
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
if ((rt_add(g_tpos_825, F->k_75) > g_ntoks_824)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(rt_add(g_tpos_825, F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P785 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(g_tpos_825, F->k_77) > g_ntoks_824)) {
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_ntoks_824, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(rt_add(g_tpos_825, F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
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
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
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
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
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
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P785 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(rt_sub(g_tpos_825, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_944 = NULL;
F->x_944 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P792)rt_nil_check(F->x_944)).name = f_expect_id_89();
F->result_ = F->x_944;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_945 = NULL;
F->tail_946 = NULL;
f_append_65(&F->head_945, &F->tail_946, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_945, &F->tail_946, f_name_node_90());
}
F->result_ = F->head_945;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_947 = f_cur_line_68();
F->x_948 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->x_948 = f_nn_61((((rt_int)81LL)), F->line_947);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P792)rt_nil_check(F->x_948)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_948;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_949 = rt_str_copy((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if (rt_str_eq(F->w_949, rt_str("ARRAY", 5))) {
F->x_948 = f_nn_61((((rt_int)74LL)), F->line_947);
{
F->head_950 = NULL;
F->tail_951 = NULL;
f_append_65(&F->head_950, &F->tail_951, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_950, &F->tail_951, f_p_subtype_92());
}
(*(P792)rt_nil_check(F->x_948)).a = F->head_950;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P792)rt_nil_check(F->x_948)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_949, rt_str("RECORD", 6)) || rt_str_eq(F->w_949, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_949, rt_str("RECORD", 6))) {
F->x_948 = f_nn_61((((rt_int)75LL)), F->line_947);
} else {
F->x_948 = f_nn_61((((rt_int)76LL)), F->line_947);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_952 = NULL;
F->tail_953 = NULL;
F->more_954 = 1;
while (F->more_954) {
F->names_955 = NULL;
F->names_955 = f_id_list_91();
F->st_956 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_956 = f_p_subtype_92();
while ((F->names_955 != NULL)) {
F->cmp_957 = NULL;
F->cmp_957 = f_nn_61((((rt_int)63LL)), (*(P792)rt_nil_check(F->names_955)).line);
(*(P792)rt_nil_check(F->cmp_957)).name = (*(P792)rt_nil_check(F->names_955)).name;
(*(P792)rt_nil_check(F->cmp_957)).a = F->st_956;
f_append_65(&F->head_952, &F->tail_953, F->cmp_957);
F->names_955 = (*(P792)rt_nil_check(F->names_955)).next;
}
F->more_954 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->x_948)).a = F->head_952;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_949, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_948)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_949, rt_str("ENUM", 4))) {
F->x_948 = f_nn_61((((rt_int)72LL)), F->line_947);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_958 = NULL;
F->tail_959 = NULL;
F->more_960 = 1;
while (F->more_960) {
F->lit_961 = NULL;
F->lit_961 = f_nn_61((((rt_int)4LL)), F->line_947);
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P792)rt_nil_check(F->lit_961)).name = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
f_append_65(&F->head_958, &F->tail_959, F->lit_961);
F->more_960 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->x_948)).a = F->head_958;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_948)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P792)rt_nil_check(F->x_948)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_949, rt_str("STRING", 6)) || rt_str_eq(F->w_949, rt_str("SET", 3))) || rt_str_eq(F->w_949, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_949, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_949, rt_str("STRING", 6))) {
F->x_948 = f_nn_61((((rt_int)73LL)), F->line_947);
} else if (rt_str_eq(F->w_949, rt_str("SET", 3))) {
F->x_948 = f_nn_61((((rt_int)77LL)), F->line_947);
} else if (rt_str_eq(F->w_949, rt_str("MAILBOX", 7))) {
F->x_948 = f_nn_61((((rt_int)78LL)), F->line_947);
} else {
F->x_948 = f_nn_61((((rt_int)79LL)), F->line_947);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P792)rt_nil_check(F->x_948)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_948)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_949, rt_str("INT", 3))) {
F->x_948 = f_nn_61((((rt_int)70LL)), F->line_947);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_948)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P792)rt_nil_check(F->x_948)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_949, rt_str("FLOAT", 5))) {
F->x_948 = f_nn_61((((rt_int)71LL)), F->line_947);
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_948)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_948)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P792)rt_nil_check(F->x_948)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_948 = f_nn_61((((rt_int)80LL)), F->line_947);
(*(P792)rt_nil_check(F->x_948)).name = f_mk_3(&F->w_949);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_948)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_948)).b = f_constraint_list_93();
(*(P792)rt_nil_check(F->x_948)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_948;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_962 = NULL;
F->tail_963 = NULL;
F->more_964 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_964) {
F->line_965 = f_cur_line_68();
F->lo_966 = NULL;
F->lo_966 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_967 = NULL;
F->r_967 = f_nn_61((((rt_int)16LL)), F->line_965);
(*(P792)rt_nil_check(F->r_967)).a = F->lo_966;
(*(P792)rt_nil_check(F->r_967)).b = f_expr_103();
f_append_65(&F->head_962, &F->tail_963, F->r_967);
} else {
f_append_65(&F->head_962, &F->tail_963, F->lo_966);
}
F->more_964 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_962;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_968 = NULL;
F->tail_969 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_968, &F->tail_969, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_968, &F->tail_969, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_968;
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

static P792 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_970 = NULL;
F->tail_971 = NULL;
F->more_972 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_972) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P785)rt_nil_check((*(P787)rt_nil_check((((P789)rt_nil_check(g_toks_823))->all).p[(rt_index(g_tpos_825, (((P789)rt_nil_check(g_toks_823))->all).lo, (((P789)rt_nil_check(g_toks_823))->all).hi) - (((P789)rt_nil_check(g_toks_823))->all).lo)])).s))->all)))) {
f_append_65(&F->head_970, &F->tail_971, f_p_subtype_92());
} else {
f_append_65(&F->head_970, &F->tail_971, f_expr_103());
}
F->more_972 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_970;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_binop_102(P785 op_98, P792 l_99, P792 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_973 = NULL;
F->x_973 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P792)rt_nil_check(F->x_973)).name = F->op_98;
(*(P792)rt_nil_check(F->x_973)).a = F->l_99;
(*(P792)rt_nil_check(F->x_973)).b = F->r_100;
F->result_ = F->x_973;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_974 = NULL;
F->l_974 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_975 = NULL;
F->op_975 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_976 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_974 = f_binop_102(F->op_975, F->l_974, f_expr_and_104(), F->line_976);
}
F->result_ = F->l_974;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_977 = NULL;
F->l_977 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_978 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_977 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_977, f_expr_not_105(), F->line_978);
}
F->result_ = F->l_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_979 = NULL;
F->x_979 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_979)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P792)rt_nil_check(F->x_979)).a = f_expr_not_105();
F->result_ = F->x_979;
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

static P792 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_980 = NULL;
F->l_980 = f_expr_add_109();
if ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P785)rt_nil_check((*(P787)rt_nil_check((((P789)rt_nil_check(g_toks_823))->all).p[(rt_index(g_tpos_825, (((P789)rt_nil_check(g_toks_823))->all).lo, (((P789)rt_nil_check(g_toks_823))->all).hi) - (((P789)rt_nil_check(g_toks_823))->all).lo)])).s))->all)))) {
F->op_981 = NULL;
F->op_981 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_982 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_980 = f_binop_102(F->op_981, F->l_980, f_expr_add_109(), F->line_982);
}
F->result_ = F->l_980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_983 = NULL;
F->l_983 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_984 = NULL;
F->op_984 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_985 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_983 = f_binop_102(F->op_984, F->l_983, f_expr_mul_110(), F->line_985);
}
F->result_ = F->l_983;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_986 = NULL;
F->l_986 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_987 = NULL;
F->op_987 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_988 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_986 = f_binop_102(F->op_987, F->l_986, f_expr_pow_111(), F->line_988);
}
F->result_ = F->l_986;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_989 = NULL;
F->l_989 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_990 = f_cur_line_68();
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->l_989 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_989, f_expr_prefix_112(), F->line_990);
}
F->result_ = F->l_989;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_991 = NULL;
F->x_991 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P792)rt_nil_check(F->x_991)).name = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_991)).a = f_expr_prefix_112();
F->result_ = F->x_991;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_992 = NULL;
F->p_992 = f_primary_114();
while (1) {
F->line_993 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_994 = NULL;
F->x_994 = f_nn_61((((rt_int)10LL)), F->line_993);
F->head_995 = NULL;
F->tail_996 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_997 = 1;
while (F->more_997) {
F->lo_998 = NULL;
F->lo_998 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_999 = NULL;
F->r_999 = f_nn_61((((rt_int)16LL)), F->line_993);
(*(P792)rt_nil_check(F->r_999)).a = F->lo_998;
(*(P792)rt_nil_check(F->r_999)).b = f_expr_103();
f_append_65(&F->head_995, &F->tail_996, F->r_999);
} else {
f_append_65(&F->head_995, &F->tail_996, F->lo_998);
}
F->more_997 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P792)rt_nil_check(F->x_994)).a = F->p_992;
(*(P792)rt_nil_check(F->x_994)).b = F->head_995;
F->p_992 = F->x_994;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1000 = NULL;
F->x_1000 = f_nn_61((((rt_int)11LL)), F->line_993);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1000)).a = F->p_992;
(*(P792)rt_nil_check(F->x_1000)).name = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->p_992 = F->x_1000;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P792)rt_nil_check(F->p_992)).kind == (((rt_int)7LL))))) {
F->x_1001 = NULL;
F->x_1001 = f_nn_61((((rt_int)12LL)), F->line_993);
(*(P792)rt_nil_check(F->x_1001)).a = F->p_992;
(*(P792)rt_nil_check(F->x_1001)).b = f_actual_tt_97();
F->p_992 = F->x_1001;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1002 = NULL;
F->x_1002 = f_nn_61((((rt_int)13LL)), F->line_993);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1002)).a = F->p_992;
(*(P792)rt_nil_check(F->x_1002)).b = f_p_subtype_92();
F->p_992 = F->x_1002;
} else {
F->result_ = F->p_992;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1003 = f_cur_line_68();
F->x_1004 = NULL;
F->k_1005 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_1005 == (((rt_int)4LL)))) {
F->x_1004 = f_nn_61((((rt_int)1LL)), F->line_1003);
(*(P792)rt_nil_check(F->x_1004)).ival = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P792)rt_nil_check(F->x_1004)).name = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = F->x_1004;
goto ret_;
}
if ((((F->k_1005 == (((rt_int)5LL))) || (F->k_1005 == (((rt_int)7LL)))) || (F->k_1005 == (((rt_int)6LL))))) {
if ((F->k_1005 == (((rt_int)5LL)))) {
F->x_1004 = f_nn_61((((rt_int)2LL)), F->line_1003);
} else if ((F->k_1005 == (((rt_int)7LL)))) {
F->x_1004 = f_nn_61((((rt_int)3LL)), F->line_1003);
} else {
F->x_1004 = f_nn_61((((rt_int)4LL)), F->line_1003);
}
(*(P792)rt_nil_check(F->x_1004)).name = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = F->x_1004;
goto ret_;
}
if ((F->k_1005 == (((rt_int)1LL)))) {
F->w_1006 = rt_str_copy((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1006, rt_str("TRUE", 4)) || rt_str_eq(F->w_1006, rt_str("FALSE", 5)))) {
F->x_1004 = f_nn_61((((rt_int)5LL)), F->line_1003);
if (rt_str_eq(F->w_1006, rt_str("TRUE", 4))) {
(*(P792)rt_nil_check(F->x_1004)).ival = ((rt_int)1LL);
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = F->x_1004;
goto ret_;
}
if (rt_str_eq(F->w_1006, rt_str("NIL", 3))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), F->line_1003);
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1004 = f_nn_61((((rt_int)17LL)), F->line_1003);
(*(P792)rt_nil_check(F->x_1004)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1004;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1007 = NULL;
F->tail_1008 = NULL;
F->x_1004 = f_nn_61((((rt_int)14LL)), F->line_1003);
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1009 = 1;
while (F->more_1009) {
f_append_65(&F->head_1007, &F->tail_1008, f_constructor_item_115());
F->more_1009 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P792)rt_nil_check(F->x_1004)).a = F->head_1007;
F->result_ = F->x_1004;
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

static P792 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1010 = f_cur_line_68();
F->it_1011 = NULL;
F->it_1011 = f_nn_61((((rt_int)15LL)), F->line_1010);
F->first_1012 = NULL;
F->first_1012 = f_expr_103();
F->keys_1013 = NULL;
F->ktail_1014 = NULL;
F->lab_1015 = NULL;
F->lab_1015 = f_nn_61((((rt_int)61LL)), F->line_1010);
(*(P792)rt_nil_check(F->lab_1015)).a = F->first_1012;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P792)rt_nil_check(F->lab_1015)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1013, &F->ktail_1014, F->lab_1015);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1016 = g_tpos_825;
F->more_1017 = NULL;
F->tail2_1018 = NULL;
F->ok_1019 = 0;
F->go_1020 = 1;
while ((F->go_1020 && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1021 = NULL;
F->l2_1021 = f_nn_61((((rt_int)61LL)), F->line_1010);
(*(P792)rt_nil_check(F->l2_1021)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P792)rt_nil_check(F->l2_1021)).b = f_expr_103();
}
f_append_65(&F->more_1017, &F->tail2_1018, F->l2_1021);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1019 = 1;
F->go_1020 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1020 = 0;
}
}
if (F->ok_1019) {
f_append_65(&F->keys_1013, &F->ktail_1014, F->lab_1015);
f_append_65(&F->keys_1013, &F->ktail_1014, F->more_1017);
} else {
g_tpos_825 = F->save_1016;
}
}
if (((F->keys_1013 == NULL) && ((*(P792)rt_nil_check(F->lab_1015)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1013 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P792)rt_nil_check(F->it_1011)).a = F->keys_1013;
(*(P792)rt_nil_check(F->it_1011)).b = f_expr_103();
} else {
(*(P792)rt_nil_check(F->it_1011)).b = F->first_1012;
}
F->result_ = F->it_1011;
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

static P792 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1022 = NULL;
F->tail_1023 = NULL;
F->stmts_1024 = 0;
F->after_1025 = NULL;
while ((!f_at_body_end_116())) {
F->x_1026 = NULL;
F->x_1026 = f_body_element_118();
if (((F->x_1026 != NULL) && (((((*(P792)rt_nil_check(F->x_1026)).kind == (((rt_int)40LL))) || ((*(P792)rt_nil_check(F->x_1026)).kind == (((rt_int)41LL)))) || ((*(P792)rt_nil_check(F->x_1026)).kind == (((rt_int)49LL)))) || ((*(P792)rt_nil_check(F->x_1026)).kind == (((rt_int)48LL)))))) {
if (F->stmts_1024) {
f_fail_23((*(P792)rt_nil_check(F->x_1026)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1026 != NULL) && ((*(P792)rt_nil_check(F->x_1026)).kind >= (((rt_int)42LL)))) && ((*(P792)rt_nil_check(F->x_1026)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_1024 && (F->after_1025 == NULL))) {
F->after_1025 = F->x_1026;
}
} else if (((F->x_1026 != NULL) && ((*(P792)rt_nil_check(F->x_1026)).kind != (((rt_int)33LL))))) {
if ((F->after_1025 != NULL)) {
f_fail_23((*(P792)rt_nil_check(F->after_1025)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1024 = 1;
}
f_append_65(&F->head_1022, &F->tail_1023, F->x_1026);
}
F->result_ = F->head_1022;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1027 = NULL;
F->pr_1028 = NULL;
F->pr_1028 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1027 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1027)).a = f_expr_103();
} else {
F->x_1027 = f_statement_140();
}
if ((F->pr_1028 != NULL)) {
F->p_1029 = NULL;
F->p_1029 = F->x_1027;
while ((F->p_1029 != NULL)) {
if (((*(P792)rt_nil_check(F->p_1029)).prags == NULL)) {
(*(P792)rt_nil_check(F->p_1029)).prags = F->pr_1028;
} else {
(*(P792)rt_nil_check(F->p_1029)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->pr_1028))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1029)).prags))->all)); b_; }));
}
F->p_1029 = (*(P792)rt_nil_check(F->p_1029)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1027;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1030 = f_cur_line_68();
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
F->head_1031 = NULL;
F->tail_1032 = NULL;
F->names_1033 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->names_1033 = f_id_list_91();
while ((F->names_1033 != NULL)) {
F->x_1034 = NULL;
F->x_1034 = f_nn_61((((rt_int)49LL)), F->line_1030);
(*(P792)rt_nil_check(F->x_1034)).name = (*(P792)rt_nil_check(F->names_1033)).name;
f_append_65(&F->head_1031, &F->tail_1032, F->x_1034);
F->names_1033 = (*(P792)rt_nil_check(F->names_1033)).next;
}
F->result_ = F->head_1031;
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

static P792 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1035 = f_cur_line_68();
F->is_var_1036 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1037 = NULL;
F->st_1038 = NULL;
F->init_1039 = NULL;
F->loc_1040 = NULL;
F->loc_kind_1041 = ((rt_int)0LL);
F->head_1042 = NULL;
F->tail_1043 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->names_1037 = f_id_list_91();
if (F->is_var_1036) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1038 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->loc_kind_1041 = ((rt_int)1LL);
} else {
F->loc_kind_1041 = ((rt_int)2LL);
}
F->loc_1040 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1039 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1038 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1039 = f_expr_103();
}
while ((F->names_1037 != NULL)) {
F->x_1044 = NULL;
if (F->is_var_1036) {
F->x_1044 = f_nn_61((((rt_int)40LL)), F->line_1035);
} else {
F->x_1044 = f_nn_61((((rt_int)41LL)), F->line_1035);
}
(*(P792)rt_nil_check(F->x_1044)).name = (*(P792)rt_nil_check(F->names_1037)).name;
(*(P792)rt_nil_check(F->x_1044)).a = F->st_1038;
(*(P792)rt_nil_check(F->x_1044)).b = F->init_1039;
(*(P792)rt_nil_check(F->x_1044)).c = F->loc_1040;
(*(P792)rt_nil_check(F->x_1044)).ival = F->loc_kind_1041;
f_append_65(&F->head_1042, &F->tail_1043, F->x_1044);
F->names_1037 = (*(P792)rt_nil_check(F->names_1037)).next;
}
F->result_ = F->head_1042;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1045 = NULL;
F->x_1045 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1045)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1045)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P792)rt_nil_check(F->x_1045)).a = f_p_subtype_92();
F->result_ = F->x_1045;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1046 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_1046 == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1046 = rt_add(F->depth_1046, ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1046 = rt_sub(F->depth_1046, ((rt_int)1LL));
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P792 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1047 = f_cur_line_68();
F->name_1048 = NULL;
F->params_1049 = NULL;
F->x_1050 = NULL;
F->tts_1051 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->name_1048 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1051 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1049 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->x_1050 = f_nn_61((((rt_int)44LL)), F->line_1047);
(*(P792)rt_nil_check(F->x_1050)).d = F->params_1049;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1050)).b = f_formal_params_126();
}
} else {
F->x_1050 = f_nn_61((((rt_int)43LL)), F->line_1047);
(*(P792)rt_nil_check(F->x_1050)).b = F->params_1049;
}
(*(P792)rt_nil_check(F->x_1050)).name = F->name_1048;
(*(P792)rt_nil_check(F->x_1050)).e = F->tts_1051;
(*(P792)rt_nil_check(F->x_1050)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1050;
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

static P792 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1052 = NULL;
F->tail_1053 = NULL;
F->more_1054 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1054) {
F->mode_1055 = (((rt_int)1LL));
F->names_1056 = NULL;
F->ntail_1057 = NULL;
F->st_1058 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1055 = f_mode_of_125(&(((P785)rt_nil_check((*(P787)rt_nil_check((((P789)rt_nil_check(g_toks_823))->all).p[(rt_index(g_tpos_825, (((P789)rt_nil_check(g_toks_823))->all).lo, (((P789)rt_nil_check(g_toks_823))->all).hi) - (((P789)rt_nil_check(g_toks_823))->all).lo)])).s))->all));
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
}
f_append_65(&F->names_1056, &F->ntail_1057, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P785)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P785)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
f_append_65(&F->names_1056, &F->ntail_1057, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1058 = f_p_subtype_92();
while ((F->names_1056 != NULL)) {
F->p_1059 = NULL;
F->p_1059 = f_nn_61((((rt_int)52LL)), (*(P792)rt_nil_check(F->names_1056)).line);
(*(P792)rt_nil_check(F->p_1059)).name = (*(P792)rt_nil_check(F->names_1056)).name;
(*(P792)rt_nil_check(F->p_1059)).ival = F->mode_1055;
(*(P792)rt_nil_check(F->p_1059)).a = F->st_1058;
f_append_65(&F->head_1052, &F->tail_1053, F->p_1059);
F->names_1056 = (*(P792)rt_nil_check(F->names_1056)).next;
}
F->more_1054 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1052;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P792 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1060 = NULL;
F->tail_1061 = NULL;
F->more_1062 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P792)rt_nil_check(F->owner_127)).flag = rt_add((*(P792)rt_nil_check(F->owner_127)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_1062) {
F->ro_1063 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1064 = NULL;
F->x_1064 = f_name_node_90();
if (F->ro_1063) {
(*(P792)rt_nil_check(F->x_1064)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1060, &F->tail_1061, F->x_1064);
F->more_1062 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->owner_127)).d = F->head_1060;
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

static P785 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P785)rt_nil_check((*(P787)rt_nil_check((((P789)rt_nil_check(g_toks_823))->all).p[(rt_index(g_tpos_825, (((P789)rt_nil_check(g_toks_823))->all).lo, (((P789)rt_nil_check(g_toks_823))->all).hi) - (((P789)rt_nil_check(g_toks_823))->all).lo)])).s))->all))))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(rt_sub(g_tpos_825, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P792 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1065 = f_cur_line_68();
F->x_1066 = NULL;
F->is_abn_1067 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1068 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_1068) {
F->x_1066 = f_nn_61((((rt_int)46LL)), F->line_1065);
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1066 = f_nn_61((((rt_int)45LL)), F->line_1065);
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if (F->is_abn_1067) {
(*(P792)rt_nil_check(F->x_1066)).flag = ((rt_int)1LL);
}
(*(P792)rt_nil_check(F->x_1066)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1066)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1066)).a = f_formal_params_126();
}
if (F->is_func_1068) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P792)rt_nil_check(F->x_1066)).b = f_p_subtype_92();
}
F->dummy_1069 = f_imports_list_128(F->x_1066);
if (((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P792)rt_nil_check(F->x_1066)).prags == NULL)) {
(*(P792)rt_nil_check(F->x_1066)).prags = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P792)rt_nil_check(F->x_1066)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1066)).prags))->all), (((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P792)rt_nil_check(F->x_1066)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_1068) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P785)rt_nil_check(f_definable_name_131()))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1066)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1066)).name))->all)); b_; }));
}
F->result_ = F->x_1066;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1070 = NULL;
F->x_1070 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1070)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1070)).b = f_formal_params_126();
}
F->dummy_1071 = f_imports_list_128(F->x_1070);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P792)rt_nil_check(F->x_1070)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P792)rt_nil_check(F->x_1070)).ival = ((rt_int)0LL);
} else {
F->head_1072 = NULL;
F->tail_1073 = NULL;
F->more_1074 = 1;
while (F->more_1074) {
F->n_1075 = NULL;
F->n_1075 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P792)rt_nil_check(F->n_1075)).ival = ((rt_int)1LL);
}
(*(P792)rt_nil_check(F->n_1075)).name = f_definable_name_131();
f_append_65(&F->head_1072, &F->tail_1073, F->n_1075);
F->more_1074 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->x_1070)).a = F->head_1072;
(*(P792)rt_nil_check(F->x_1070)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P792)rt_nil_check(F->x_1070)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P785)rt_nil_check(f_expect_id_89()))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1070)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1070;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1076 = NULL;
F->tail_1077 = NULL;
F->more_1078 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1078) {
f_append_65(&F->head_1076, &F->tail_1077, f_name_node_90());
F->more_1078 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1076;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1079 = NULL;
F->x_1079 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1080 = NULL;
F->tail_1081 = NULL;
F->more_1082 = 1;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
while (F->more_1082) {
F->names_1083 = NULL;
F->names_1083 = f_id_list_91();
F->kind_1084 = ((rt_int)6LL);
F->st_1085 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1084 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1084 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1084 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1084 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1084 = ((rt_int)5LL);
} else {
F->st_1085 = f_p_subtype_92();
}
if (((F->kind_1084 <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P792)rt_nil_check(F->x_1079)).e = f_actual_params_94();
} else if (((F->kind_1084 >= ((rt_int)3LL)) && (F->kind_1084 <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1085 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
}
if (((F->kind_1084 == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1085 = f_p_subtype_92();
}
}
while ((F->names_1083 != NULL)) {
F->p_1086 = NULL;
F->p_1086 = f_nn_61((((rt_int)52LL)), (*(P792)rt_nil_check(F->names_1083)).line);
(*(P792)rt_nil_check(F->p_1086)).name = (*(P792)rt_nil_check(F->names_1083)).name;
(*(P792)rt_nil_check(F->p_1086)).ival = F->kind_1084;
(*(P792)rt_nil_check(F->p_1086)).a = F->st_1085;
f_append_65(&F->head_1080, &F->tail_1081, F->p_1086);
F->names_1083 = (*(P792)rt_nil_check(F->names_1083)).next;
}
F->more_1082 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1082 = 1;
while (F->more_1082) {
F->nm_1087 = NULL;
F->nm_1087 = f_definable_name_131();
F->st_1088 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1088 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1088 = f_p_subtype_92();
}
F->more_1082 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P792)rt_nil_check(F->x_1079)).a = F->head_1080;
(*(P792)rt_nil_check(F->x_1079)).b = f_declaration_119();
(*(P792)rt_nil_check(F->x_1079)).name = (*(P792)rt_nil_check((*(P792)rt_nil_check(F->x_1079)).b)).name;
F->result_ = F->x_1079;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1089 = NULL;
F->x_1089 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1089)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1089)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1089)).a = f_formal_params_126();
}
F->dummy_1090 = f_imports_list_128(F->x_1089);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P792)rt_nil_check(F->x_1089)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P785)rt_nil_check(f_expect_id_89()))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1089)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1089)).name))->all)); b_; }));
}
F->result_ = F->x_1089;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1091 = NULL;
F->x_1091 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P792)rt_nil_check(F->x_1091)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1092 = NULL;
F->tail_1093 = NULL;
F->more_1094 = 1;
while (F->more_1094) {
F->n_1095 = NULL;
F->n_1095 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P792)rt_nil_check(F->n_1095)).ival = ((rt_int)1LL);
}
(*(P792)rt_nil_check(F->n_1095)).name = f_definable_name_131();
f_append_65(&F->head_1092, &F->tail_1093, F->n_1095);
F->more_1094 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->x_1091)).a = F->head_1092;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P792)rt_nil_check(F->x_1091)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P792)rt_nil_check(F->x_1091)).flag = rt_add((*(P792)rt_nil_check(F->x_1091)).flag, ((rt_int)2LL));
}
(*(P792)rt_nil_check(F->x_1091)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1091)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1096 = NULL;
F->tail_1097 = NULL;
F->more_1098 = 1;
while (F->more_1098) {
F->n_1099 = NULL;
F->n_1099 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1100 = NULL;
F->tgt_1100 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P792)rt_nil_check(F->n_1099)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P792)rt_nil_check(F->tgt_1100)).name = f_definable_name_131();
(*(P792)rt_nil_check(F->n_1099)).a = F->tgt_1100;
f_append_65(&F->head_1096, &F->tail_1097, F->n_1099);
F->more_1098 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P792)rt_nil_check(F->x_1091)).c = F->head_1096;
}
F->result_ = F->x_1091;
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

static P792 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1101 = NULL;
F->ltail_1102 = NULL;
F->match_1103 = NULL;
F->s_1104 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P785)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1101, &F->ltail_1102, f_name_node_90());
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P785)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1103 = f_expect_id_89();
}
F->s_1104 = f_unlabeled_statement_141();
if ((F->match_1103 != NULL)) {
if (((((((((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)22LL))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)23LL)))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)24LL)))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)25LL)))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)26LL)))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)35LL)))) && ((*(P792)rt_nil_check(F->s_1104)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P792)rt_nil_check(F->s_1104)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P785)rt_nil_check(f_expect_id_89()))->all), (((P785)rt_nil_check(F->match_1103))->all)))) {
f_fail_23((*(P792)rt_nil_check(F->s_1104)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P785)rt_nil_check(F->match_1103))->all)); b_; }));
}
(*(P792)rt_nil_check(F->s_1104)).tag = F->match_1103;
}
(*(P792)rt_nil_check(F->s_1104)).labels = F->labels_1101;
F->result_ = F->s_1104;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1105 = f_cur_line_68();
F->x_1106 = NULL;
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
F->x_1106 = f_nn_61((((rt_int)25LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)27LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).name = f_expect_id_89();
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)28LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P792)rt_nil_check(F->x_1106)).a = f_expr_103();
}
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)29LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).name = f_expect_id_89();
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)30LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).name = f_expect_id_89();
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), F->line_1105);
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)34LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1106)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1106)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P792)rt_nil_check(F->x_1106)).a = f_postfix_113();
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1107 = NULL;
F->tail_1108 = NULL;
F->x_1106 = f_nn_61((((rt_int)35LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1109 = NULL;
F->itail_1110 = NULL;
F->more_1111 = 1;
while (F->more_1111) {
f_append_65(&F->invs_1109, &F->itail_1110, f_postfix_113());
F->more_1111 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1107, &F->tail_1108, f_arm_145(F->invs_1109, f_body_117(), F->line_1105));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P792)rt_nil_check(F->x_1106)).a = F->head_1107;
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)36LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P792)rt_nil_check(F->x_1106)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1106;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)32LL)), F->line_1105);
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1106)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P785)rt_nil_check((*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P792)rt_nil_check(F->x_1106)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P792)rt_nil_check(F->x_1106)).c = f_expr_103();
}
F->result_ = F->x_1106;
goto ret_;
}
{
F->target_1112 = NULL;
F->target_1112 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1106 = f_nn_61((((rt_int)20LL)), F->line_1105);
(*(P792)rt_nil_check(F->x_1106)).a = F->target_1112;
(*(P792)rt_nil_check(F->x_1106)).b = f_expr_103();
} else {
F->x_1106 = f_nn_61((((rt_int)21LL)), F->line_1105);
(*(P792)rt_nil_check(F->x_1106)).a = F->target_1112;
}
}
F->result_ = F->x_1106;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_arm_145(P792 cond_142, P792 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1113 = NULL;
F->x_1113 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P792)rt_nil_check(F->x_1113)).a = F->cond_142;
(*(P792)rt_nil_check(F->x_1113)).b = F->b_143;
F->result_ = F->x_1113;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1114 = NULL;
F->x_1114 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1115 = NULL;
F->tail_1116 = NULL;
F->cond_1117 = NULL;
F->go_1118 = 1;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
F->cond_1117 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1115, &F->tail_1116, f_arm_145(F->cond_1117, f_body_117(), (*(P792)rt_nil_check(F->x_1114)).line));
while (F->go_1118) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1117 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1115, &F->tail_1116, f_arm_145(F->cond_1117, f_body_117(), (*(P792)rt_nil_check(F->x_1114)).line));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P792)rt_nil_check(F->x_1114)).flag = ((rt_int)1LL);
(*(P792)rt_nil_check(F->x_1114)).b = f_body_117();
} else {
F->go_1118 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P792)rt_nil_check(F->x_1114)).a = F->head_1115;
F->result_ = F->x_1114;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1119 = NULL;
F->x_1119 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1120 = NULL;
F->tail_1121 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1119)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1122 = NULL;
F->ltail_1123 = NULL;
F->more_1124 = 1;
while (F->more_1124) {
F->l_1125 = NULL;
F->l_1125 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P792)rt_nil_check(F->l_1125)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P792)rt_nil_check(F->l_1125)).b = f_expr_103();
}
f_append_65(&F->labs_1122, &F->ltail_1123, F->l_1125);
F->more_1124 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1120, &F->tail_1121, f_arm_145(F->labs_1122, f_body_117(), (*(P792)rt_nil_check(F->x_1119)).line));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P792)rt_nil_check(F->x_1119)).flag = ((rt_int)1LL);
(*(P792)rt_nil_check(F->x_1119)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P792)rt_nil_check(F->x_1119)).b = F->head_1120;
F->result_ = F->x_1119;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1126 = NULL;
F->x_1126 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P792)rt_nil_check(F->x_1126)).flag = ((rt_int)1LL);
(*(P792)rt_nil_check(F->x_1126)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P792)rt_nil_check(F->x_1126)).ival = ((rt_int)1LL);
}
(*(P792)rt_nil_check(F->x_1126)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P792)rt_nil_check(F->x_1126)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P792)rt_nil_check(F->x_1126)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1126;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1127 = NULL;
F->x_1127 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1128 = NULL;
F->tail_1129 = NULL;
g_tpos_825 = rt_add(g_tpos_825, ((rt_int)1LL));
(*(P792)rt_nil_check(F->x_1127)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1130 = NULL;
F->h_1130 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P792)rt_nil_check(F->h_1130)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P792)rt_nil_check(F->h_1130)).b = f_body_117();
f_append_65(&F->head_1128, &F->tail_1129, F->h_1130);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P792)rt_nil_check(F->x_1127)).flag = ((rt_int)1LL);
(*(P792)rt_nil_check(F->x_1127)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P792)rt_nil_check(F->x_1127)).b = F->head_1128;
F->result_ = F->x_1127;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1131 = NULL;
F->tail_1132 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1133 = NULL;
F->pr_1133 = (*(P787)rt_nil_check(({ A791 b_ = (((P789)rt_nil_check(g_toks_823))->all); b_.p[(rt_index(g_tpos_825, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1134 = NULL;
F->u_1134 = f_capsule_decl_133();
(*(P792)rt_nil_check(F->u_1134)).prags = F->pr_1133;
f_append_65(&F->head_1131, &F->tail_1132, F->u_1134);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1131;
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
F->h_1135 = ((rt_int)0LL);
{ rt_int lo1137 = ((rt_int)1LL), hi1138 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1139 = lo1137; it1139 <= hi1138; it1139++) {
F->i_1136 = it1139;
F->h_1135 = rt_mod(rt_add(rt_mul(F->h_1135, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_151), F->i_1136)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1135;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1140 = NULL;
F->y_1140 = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_829 != NULL)) {
while ((F->y_1140 != NULL)) {
if ((((*(P802)rt_nil_check(F->y_1140)).depth >= g_gdepth_861) && rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1140)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1140;
goto ret_;
}
F->y_1140 = (*(P802)rt_nil_check(F->y_1140)).chain;
}
F->y_1140 = ({ A808 b_ = (((P806)rt_nil_check(g_genv_829))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1140 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1140)).name))->all), (*F->name_153))) {
F->result_ = F->y_1140;
goto ret_;
}
F->y_1140 = (*(P802)rt_nil_check(F->y_1140)).chain;
}
F->y_1140 = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1140 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1140)).name))->all), (*F->name_153))) {
F->result_ = F->y_1140;
goto ret_;
}
F->y_1140 = (*(P802)rt_nil_check(F->y_1140)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_lookup_decl_156(P792 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1141 = NULL;
F->y_1141 = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(f_hash_152(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1141 != NULL)) {
if (((*(P802)rt_nil_check(F->y_1141)).decl == F->d_155)) {
F->result_ = F->y_1141;
goto ret_;
}
F->y_1141 = (*(P802)rt_nil_check(F->y_1141)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P802 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1142 = f_hash_152(&(((P785)rt_nil_check((*(P802)rt_nil_check(F->y_157)).name))->all));
F->z_1143 = NULL;
F->z_1143 = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(F->h_1142, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1143 != NULL)) {
if (((((*(P802)rt_nil_check(F->z_1143)).depth == g_depth_831) && rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->z_1143)).name))->all), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1143)) && ((*(P802)rt_nil_check(F->z_1143)).kind == (*(P802)rt_nil_check(F->y_157)).kind)) && (!(f_same_signature_167((*(P802)rt_nil_check(F->y_157)).params, (*(P802)rt_nil_check(F->z_1143)).params) && f_same_tt_164((*(P802)rt_nil_check(F->y_157)).decl, (*(P802)rt_nil_check(F->z_1143)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1143 = (*(P802)rt_nil_check(F->z_1143)).chain;
}
(*(P802)rt_nil_check(F->y_157)).depth = g_depth_831;
(*(P802)rt_nil_check(F->y_157)).chain = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(F->h_1142, b_.lo, b_.hi) - b_.lo)]; });
(((P806)rt_nil_check(g_table_828))->all).p[(rt_index(F->h_1142, (((P806)rt_nil_check(g_table_828))->all).lo, (((P806)rt_nil_check(g_table_828))->all).hi) - (((P806)rt_nil_check(g_table_828))->all).lo)] = F->y_157;
(*(P802)rt_nil_check(F->y_157)).stack = g_scope_stack_832;
g_scope_stack_832 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P802 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = ((((*(P802)rt_nil_check(F->y_160)).kind == (((rt_int)3LL))) || ((*(P802)rt_nil_check(F->y_160)).kind == (((rt_int)4LL)))) || ((*(P802)rt_nil_check(F->y_160)).kind == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P792 a_162, P792 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1144 = NULL;
F->y_1145 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1144 = (*(P792)rt_nil_check(F->a_162)).e;
F->y_1145 = (*(P792)rt_nil_check(F->b_163)).e;
while (((F->x_1144 != NULL) && (F->y_1145 != NULL))) {
if ((!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1144)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->y_1145)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1144 = (*(P792)rt_nil_check(F->x_1144)).next;
F->y_1145 = (*(P792)rt_nil_check(F->y_1145)).next;
}
F->result_ = ((F->x_1144 == NULL) && (F->y_1145 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P804 a_165, P804 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1146 = NULL;
F->x_1146 = F->a_165;
F->y_1147 = NULL;
F->y_1147 = F->b_166;
while (((F->x_1146 != NULL) && (F->y_1147 != NULL))) {
if ((!f_same_210((*(P804)rt_nil_check(F->x_1146)).t, (*(P804)rt_nil_check(F->y_1147)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1146 = (*(P804)rt_nil_check(F->x_1146)).next;
F->y_1147 = (*(P804)rt_nil_check(F->y_1147)).next;
}
F->result_ = ((F->x_1146 == NULL) && (F->y_1147 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_831 = rt_add(g_depth_831, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_832 != NULL) && ((*(P802)rt_nil_check(g_scope_stack_832)).depth == g_depth_831))) {
(((P806)rt_nil_check(g_table_828))->all).p[(rt_index(f_hash_152(&(((P785)rt_nil_check((*(P802)rt_nil_check(g_scope_stack_832)).name))->all)), (((P806)rt_nil_check(g_table_828))->all).lo, (((P806)rt_nil_check(g_table_828))->all).hi) - (((P806)rt_nil_check(g_table_828))->all).lo)] = (*(P802)rt_nil_check(g_scope_stack_832)).chain;
g_scope_stack_832 = (*(P802)rt_nil_check(g_scope_stack_832)).stack;
}
g_depth_831 = rt_sub(g_depth_831, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P802 f_new_sym_172(rt_int kind_170, P785 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1148 = NULL;
{ R803 *cell1149 = rt_alloc(sizeof(R803));
(*cell1149).name = NULL;
(*cell1149).t = NULL;
(*cell1149).c = NULL;
(*cell1149).access = NULL;
(*cell1149).cname = NULL;
(*cell1149).st = NULL;
(*cell1149).decl = NULL;
(*cell1149).params = NULL;
(*cell1149).result = NULL;
(*cell1149).members = NULL;
(*cell1149).mnext = NULL;
(*cell1149).binds = NULL;
(*cell1149).insts = NULL;
(*cell1149).env = NULL;
(*cell1149).chain = NULL;
(*cell1149).stack = NULL;
(*cell1149).owner = NULL;
(*cell1149).gctx = NULL;
(*cell1149).mv = NULL;
(*cell1149).reqs = NULL;
(*cell1149).home = NULL;
F->y_1148 = cell1149;
}
(*(P802)rt_nil_check(F->y_1148)).kind = F->kind_170;
(*(P802)rt_nil_check(F->y_1148)).name = F->name_171;
F->result_ = F->y_1148;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1150 = NULL;
{ R799 *cell1151 = rt_alloc(sizeof(R799));
(*cell1151).name = NULL;
(*cell1151).lits = NULL;
(*cell1151).elem = NULL;
(*cell1151).idx = NULL;
(*cell1151).idx2 = NULL;
(*cell1151).elemcons = NULL;
(*cell1151).elemst = NULL;
(*cell1151).under = NULL;
(*cell1151).tparams = NULL;
(*cell1151).ocap = NULL;
(*cell1151).fields = NULL;
(*cell1151).target = NULL;
(*cell1151).decl = NULL;
(*cell1151).cname = NULL;
(*cell1151).initp = NULL;
(*cell1151).finalp = NULL;
(*cell1151).tpsyms = NULL;
(*cell1151).gen = NULL;
(*cell1151).gbinds = NULL;
(*cell1151).next = NULL;
(*cell1151).idxs = NULL;
F->t_1150 = cell1151;
}
(*(P798)rt_nil_check(F->t_1150)).kind = F->kind_173;
F->result_ = F->t_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P794 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1152 = NULL;
{ R795 *cell1153 = rt_alloc(sizeof(R795));
(*cell1153).lo = NULL;
(*cell1153).hi = NULL;
(*cell1153).lo2 = NULL;
(*cell1153).hi2 = NULL;
(*cell1153).slen = NULL;
(*cell1153).args = NULL;
(*cell1153).prec = NULL;
(*cell1153).bnds = NULL;
F->c_1152 = cell1153;
}
F->result_ = F->c_1152;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P798 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && ((((*(P798)rt_nil_check(F->t_176)).kind == (((rt_int)1LL))) || ((*(P798)rt_nil_check(F->t_176)).kind == (((rt_int)3LL)))) || ((*(P798)rt_nil_check(F->t_176)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P798 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if (((*(P798)rt_nil_check(F->t_178)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P794 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1154 = NULL;
F->p_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P794)rt_nil_check(F->c_180)).dyn) || ((*(P794)rt_nil_check(F->c_180)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1156 = ((rt_int)1LL), hi1157 = rt_sub(g_cur_level_845, (*(P794)rt_nil_check(F->c_180)).lvl);
for (rt_int it1158 = lo1156; it1158 <= hi1157; it1158++) {
F->i_1155 = it1158;
F->p_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->p_1154))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->p_1154))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P794 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P794 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P798 t_187, P794 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P794)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_187)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_187)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P798 t_190, P794 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P794)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_190)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_190)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
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
if ((!g_in_func_844)) {
F->g_1159 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1159), rt_str(";", 1)); b_; }));
g_st_field_850 = f_mk_3(&F->g_1159);
F->result_ = F->g_1159;
goto ret_;
}
{
F->f_1160 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1160), rt_str(";", 1)); b_; }));
g_st_field_850 = f_mk_3(&F->f_1160);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1160);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P794 f_copy_cons_197(P794 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1161 = NULL;
{ R795 *cell1162 = rt_alloc(sizeof(R795));
(*cell1162).lo = NULL;
(*cell1162).hi = NULL;
(*cell1162).lo2 = NULL;
(*cell1162).hi2 = NULL;
(*cell1162).slen = NULL;
(*cell1162).args = NULL;
(*cell1162).prec = NULL;
(*cell1162).bnds = NULL;
F->r_1161 = cell1162;
}
(*(P794)rt_nil_check(F->r_1161)).lo = (*(P794)rt_nil_check(F->c_196)).lo;
(*(P794)rt_nil_check(F->r_1161)).hi = (*(P794)rt_nil_check(F->c_196)).hi;
(*(P794)rt_nil_check(F->r_1161)).lo2 = (*(P794)rt_nil_check(F->c_196)).lo2;
(*(P794)rt_nil_check(F->r_1161)).hi2 = (*(P794)rt_nil_check(F->c_196)).hi2;
(*(P794)rt_nil_check(F->r_1161)).slen = (*(P794)rt_nil_check(F->c_196)).slen;
(*(P794)rt_nil_check(F->r_1161)).mlo = (*(P794)rt_nil_check(F->c_196)).mlo;
(*(P794)rt_nil_check(F->r_1161)).mhi = (*(P794)rt_nil_check(F->c_196)).mhi;
(*(P794)rt_nil_check(F->r_1161)).hasm = (*(P794)rt_nil_check(F->c_196)).hasm;
(*(P794)rt_nil_check(F->r_1161)).args = (*(P794)rt_nil_check(F->c_196)).args;
(*(P794)rt_nil_check(F->r_1161)).dyn = (*(P794)rt_nil_check(F->c_196)).dyn;
(*(P794)rt_nil_check(F->r_1161)).lvl = (*(P794)rt_nil_check(F->c_196)).lvl;
(*(P794)rt_nil_check(F->r_1161)).prec = (*(P794)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1161;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P794 f_freeze_200(P794 c_198, P798 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1163 = NULL;
F->saved_field_1164 = NULL;
F->saved_field_1164 = g_st_field_850;
if ((((((F->c_198 == NULL) || ((*(P794)rt_nil_check(F->c_198)).lo == NULL)) || (*(P794)rt_nil_check(F->c_198)).hasm) || (*(P794)rt_nil_check(F->c_198)).dyn) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1163 = f_copy_cons_197(F->c_198);
{
F->ct_1165 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1166 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1165));
F->lf_1167 = rt_str_copy((((P785)rt_nil_check(g_st_field_850))->all));
F->ha_1168 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1165));
F->hf_1169 = rt_str_copy((((P785)rt_nil_check(g_st_field_850))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1166, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1168), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (g_in_func_844) {
(*(P794)rt_nil_check(F->r_1163)).lo = f_mk_3(&F->lf_1167);
(*(P794)rt_nil_check(F->r_1163)).hi = f_mk_3(&F->hf_1169);
(*(P794)rt_nil_check(F->r_1163)).dyn = 1;
(*(P794)rt_nil_check(F->r_1163)).lvl = g_cur_level_845;
} else {
(*(P794)rt_nil_check(F->r_1163)).lo = f_mk_3(&F->la_1166);
(*(P794)rt_nil_check(F->r_1163)).hi = f_mk_3(&F->ha_1168);
(*(P794)rt_nil_check(F->r_1163)).dyn = 0;
}
}
g_st_field_850 = F->saved_field_1164;
F->result_ = F->r_1163;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P798 t_201, P794 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_431(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_201)).kind != (((rt_int)3LL))) && (*(P794)rt_nil_check(F->c_202)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7((*(P794)rt_nil_check(F->c_202)).mlo)), rt_str(", ", 2)), f_itos_7((*(P794)rt_nil_check(F->c_202)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P794)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_201)).kind == (((rt_int)3LL)))) {
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

static int f_same_lits_207(P792 a_205, P792 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1170 = NULL;
F->x_1170 = F->a_205;
F->y_1171 = NULL;
F->y_1171 = F->b_206;
while (((F->x_1170 != NULL) && (F->y_1171 != NULL))) {
if ((!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->x_1170)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->y_1171)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1170 = (*(P792)rt_nil_check(F->x_1170)).next;
F->y_1171 = (*(P792)rt_nil_check(F->y_1171)).next;
}
F->result_ = ((F->x_1170 == NULL) && (F->y_1171 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_210(P798 a_208, P798 b_209) {
  struct f_same_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_208 = a_208;
F->b_209 = b_209;
if ((F->a_208 == F->b_209)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_208 == NULL) || (F->b_209 == NULL)) || ((*(P798)rt_nil_check(F->a_208)).kind != (*(P798)rt_nil_check(F->b_209)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)1LL))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)2LL)))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)3LL)))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)5LL)))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)9LL)))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P798)rt_nil_check(F->a_208)).lits, (*(P798)rt_nil_check(F->b_209)).lits);
goto ret_;
}
if (((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)6LL)))) {
F->x_1172 = NULL;
F->x_1172 = (*(P798)rt_nil_check(F->a_208)).idxs;
F->y_1173 = NULL;
F->y_1173 = (*(P798)rt_nil_check(F->b_209)).idxs;
while (((F->x_1172 != NULL) && (F->y_1173 != NULL))) {
if ((!f_same_210((*(P813)rt_nil_check(F->x_1172)).t, (*(P813)rt_nil_check(F->y_1173)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1172 = (*(P813)rt_nil_check(F->x_1172)).next;
F->y_1173 = (*(P813)rt_nil_check(F->y_1173)).next;
}
F->result_ = (((F->x_1172 == NULL) && (F->y_1173 == NULL)) && f_same_210((*(P798)rt_nil_check(F->a_208)).elem, (*(P798)rt_nil_check(F->b_209)).elem));
goto ret_;
}
if ((((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)16LL))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_210((*(P798)rt_nil_check(F->a_208)).elem, (*(P798)rt_nil_check(F->b_209)).elem);
goto ret_;
}
if ((((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->a_208)).kind == (((rt_int)17LL))))) {
F->f_1174 = NULL;
F->f_1174 = (*(P798)rt_nil_check(F->a_208)).fields;
F->g_1175 = NULL;
F->g_1175 = (*(P798)rt_nil_check(F->b_209)).fields;
while (((F->f_1174 != NULL) && (F->g_1175 != NULL))) {
if (((!rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1174)).name))->all), (((P785)rt_nil_check((*(P800)rt_nil_check(F->g_1175)).name))->all))) || (!f_same_210((*(P800)rt_nil_check(F->f_1174)).t, (*(P800)rt_nil_check(F->g_1175)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1174 = (*(P800)rt_nil_check(F->f_1174)).next;
F->g_1175 = (*(P800)rt_nil_check(F->g_1175)).next;
}
F->result_ = ((F->f_1174 == NULL) && (F->g_1175 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_base_of_212(P798 t_211) {
  struct f_base_of_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_211 = t_211;
if ((((F->t_211 != NULL) && ((*(P798)rt_nil_check(F->t_211)).kind == (((rt_int)15LL)))) && ((*(P798)rt_nil_check(F->t_211)).tparams == NULL))) {
F->result_ = f_base_of_212((*(P798)rt_nil_check(F->t_211)).under);
goto ret_;
}
F->result_ = F->t_211;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P794 f_base_cons_215(P798 t_213, P794 c_214) {
  struct f_base_cons_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
F->c_214 = c_214;
if (((((F->t_213 != NULL) && ((*(P798)rt_nil_check(F->t_213)).kind == (((rt_int)15LL)))) && ((*(P798)rt_nil_check(F->t_213)).tparams == NULL)) && ((*(P798)rt_nil_check(F->t_213)).elemcons != NULL))) {
F->result_ = f_base_cons_215((*(P798)rt_nil_check(F->t_213)).under, (*(P798)rt_nil_check(F->t_213)).elemcons);
goto ret_;
}
F->result_ = F->c_214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_217(P798 t_216) {
  struct f_kind_name_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_216 = t_216;
{ rt_int sel1176 = (*(P798)rt_nil_check(F->t_216)).kind;
if (0 || (sel1176 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1176 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_216)).name))->all));
goto ret_;
} else if (0 || (sel1176 == (((rt_int)11LL)))) {
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

static void f_check_type_221(P798 got_218, P798 want_219, rt_int line_220) {
  struct f_check_type_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_218 = got_218;
F->want_219 = want_219;
F->line_220 = line_220;
if ((F->want_219 == NULL)) {
goto ret_;
}
if ((((*(P798)rt_nil_check(F->got_218)).kind == (((rt_int)11LL))) && ((*(P798)rt_nil_check(F->want_219)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_210(F->got_218, F->want_219))) {
f_fail_23(F->line_220, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_217(F->got_218)), rt_str(" where ", 7)), f_kind_name_217(F->want_219)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_223(P798 t_222) {
  struct f_ctype_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
{ rt_int sel1177 = (*(P798)rt_nil_check(F->t_222)).kind;
if (0 || (sel1177 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)2LL))) || (sel1177 == (((rt_int)4LL))) || (sel1177 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1177 == (((rt_int)16LL)))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P798)rt_nil_check(F->t_222)).cname == NULL)) {
f_declare_ctype_229(F->t_222);
} else if ((((((*(P798)rt_nil_check(F->t_222)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->t_222)).kind == (((rt_int)17LL)))) && (*(P798)rt_nil_check(F->t_222)).forward) && (!(*(P798)rt_nil_check(F->t_222)).defined))) {
(*(P798)rt_nil_check(F->t_222)).defined = 1;
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_222)).cname))->all)), rt_str(" ", 1)), f_struct_body_225(F->t_222)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_222)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_225(P798 t_224) {
  struct f_struct_body_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
if (((*(P798)rt_nil_check(F->t_224)).kind == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_227(F->t_224)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_227(F->t_224)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_227(P798 t_226) {
  struct f_field_decls_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
F->f_1178 = NULL;
F->f_1178 = (*(P798)rt_nil_check(F->t_226)).fields;
F->s_1179 = NULL;
F->s_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1178 != NULL)) {
F->s_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->s_1179))->all), f_ctype_223((*(P800)rt_nil_check(F->f_1178)).t)), rt_str(" ", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1178)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1178 = (*(P800)rt_nil_check(F->f_1178)).next;
}
F->result_ = (((P785)rt_nil_check(F->s_1179))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_229(P798 t_228) {
  struct f_declare_ctype_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->u_1180 = NULL;
F->u_1180 = g_all_types_833;
if ((((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)8LL))) && ((*(P798)rt_nil_check(F->t_228)).target == NULL))) {
f_finish_ptr_400(F->t_228);
if (((*(P798)rt_nil_check(F->t_228)).cname != NULL)) {
goto ret_;
}
}
if (((*(P798)rt_nil_check(F->t_228)).kind != (((rt_int)8LL)))) {
while ((F->u_1180 != NULL)) {
if ((((*(P798)rt_nil_check(F->u_1180)).kind == (*(P798)rt_nil_check(F->t_228)).kind) && f_same_210(F->u_1180, F->t_228))) {
(*(P798)rt_nil_check(F->t_228)).cname = (*(P798)rt_nil_check(F->u_1180)).cname;
goto ret_;
}
F->u_1180 = (*(P798)rt_nil_check(F->u_1180)).next;
}
}
if ((((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_228)).tparams == NULL))) {
(*(P798)rt_nil_check(F->t_228)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_223((*(P798)rt_nil_check(F->t_228)).under); b_; }));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)6LL)))) {
(*(P798)rt_nil_check(F->t_228)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)15LL)))) {
(*(P798)rt_nil_check(F->t_228)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)17LL))))) {
(*(P798)rt_nil_check(F->t_228)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P798)rt_nil_check(F->t_228)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P798)rt_nil_check(F->t_228)).next = g_all_types_833;
g_all_types_833 = F->t_228;
if (((((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)8LL))) && ((*(P798)rt_nil_check(F->t_228)).decl != NULL)) && ((*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_228)).decl)).b != NULL))) {
F->p_1181 = NULL;
F->p_1181 = (*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_228)).decl)).b;
F->fs_1182 = NULL;
F->fs_1182 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1181 != NULL)) {
F->pc_1184 = NULL;
F->fs_1182 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->fs_1182))->all), rt_str(" ", 1)), f_ctype_223(f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1181)).a, &F->pc_1184))), rt_str(" p_", 3)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1181)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1181 = (*(P792)rt_nil_check(F->p_1181)).next;
}
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1183), rt_str(" *", 2)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_836, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1183), rt_str(" {", 2)), (((P785)rt_nil_check(F->fs_1182))->all)), rt_str(" ", 1)), f_ctype_223((*(P798)rt_nil_check(F->t_228)).target)), rt_str(" all; };", 8)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)8LL)))) {
F->target_1185 = NULL;
F->target_1185 = (*(P798)rt_nil_check(F->t_228)).target;
if ((((*(P798)rt_nil_check(F->target_1185)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->target_1185)).kind == (((rt_int)17LL))))) {
if (((*(P798)rt_nil_check(F->target_1185)).cname == NULL)) {
(*(P798)rt_nil_check(F->target_1185)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P798)rt_nil_check(F->target_1185)).next = g_all_types_833;
g_all_types_833 = F->target_1185;
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P785)rt_nil_check((*(P798)rt_nil_check(F->target_1185)).cname))->all)), rt_str(" ", 1)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->target_1185)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P798)rt_nil_check(F->target_1185)).forward = 1;
}
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P785)rt_nil_check((*(P798)rt_nil_check(F->target_1185)).cname))->all)), rt_str(" *", 2)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_223(F->target_1185)), rt_str(" *", 2)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if (((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" ", 1)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_223((*(P798)rt_nil_check(F->t_228)).elem)), rt_str(" *p;", 4)), f_more_dims_235(F->t_228)), rt_str(" };", 3)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_228)).kind == (((rt_int)15LL)))) {
F->p_1186 = NULL;
F->p_1186 = (*(P798)rt_nil_check(F->t_228)).tparams;
F->fs_1187 = NULL;
F->fs_1187 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1186 != NULL)) {
F->fs_1187 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->fs_1187))->all), f_ctype_223(f_tparam_type_317(F->t_228, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1186)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1186)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1186 = (*(P792)rt_nil_check(F->p_1186)).next;
}
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" ", 1)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" {", 2)), (((P785)rt_nil_check(F->fs_1187))->all)), f_ctype_223((*(P798)rt_nil_check(F->t_228)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" ", 1)), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P798)rt_nil_check(F->t_228)).defined = 1;
f_put_27(g_out_types_835, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_228)).cname))->all)), rt_str(" ", 1)), f_struct_body_225(F->t_228)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_231(rt_int k_230) {
  struct f_dim_lo_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_230 = k_230;
if ((F->k_230 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_230));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_233(rt_int k_232) {
  struct f_dim_hi_233fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_232 = k_232;
if ((F->k_232 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_232));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_235(P798 t_234) {
  struct f_more_dims_235fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_234 = t_234;
F->r_1188 = NULL;
F->r_1188 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1190 = ((rt_int)3LL), hi1191 = (*(P798)rt_nil_check(F->t_234)).ndim;
for (rt_int it1192 = lo1190; it1192 <= hi1191; it1192++) {
F->k_1189 = it1192;
F->r_1188 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1188))->all), rt_str(" rt_int ", 8)), f_dim_lo_231(F->k_1189)), rt_str(", ", 2)), f_dim_hi_233(F->k_1189)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P785)rt_nil_check(F->r_1188))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_238(P798 t_236, rstr *base_237) {
  struct f_acnt_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->base_237 = base_237;
F->r_1193 = NULL;
F->r_1193 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_237)), rt_str(")", 1)); b_; }));
{ rt_int lo1195 = ((rt_int)3LL), hi1196 = (*(P798)rt_nil_check(F->t_236)).ndim;
for (rt_int it1197 = lo1195; it1197 <= hi1196; it1197++) {
F->k_1194 = it1197;
F->r_1193 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1193))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_237)), rt_str(".", 1)), f_dim_lo_231(F->k_1194)), rt_str(", ", 2)), (*F->base_237)), rt_str(".", 1)), f_dim_hi_233(F->k_1194)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->r_1193))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P785 f_cons_lo_241(P794 c_239, rt_int k_240) {
  struct f_cons_lo_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_239 = c_239;
F->k_240 = k_240;
F->l_1198 = NULL;
if ((F->k_240 == ((rt_int)1LL))) {
F->result_ = (*(P794)rt_nil_check(F->c_239)).lo;
goto ret_;
} else if ((F->k_240 == ((rt_int)2LL))) {
F->result_ = (*(P794)rt_nil_check(F->c_239)).lo2;
goto ret_;
}
F->l_1198 = (*(P794)rt_nil_check(F->c_239)).bnds;
{ rt_int lo1200 = ((rt_int)1LL), hi1201 = rt_sub(rt_add(F->k_240, F->k_240), ((rt_int)6LL));
for (rt_int it1202 = lo1200; it1202 <= hi1201; it1202++) {
F->i_1199 = it1202;
if ((F->l_1198 != NULL)) {
F->l_1198 = (*(P796)rt_nil_check(F->l_1198)).next;
}
}
}
if ((F->l_1198 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P796)rt_nil_check(F->l_1198)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P785 f_cons_hi_244(P794 c_242, rt_int k_243) {
  struct f_cons_hi_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_242 = c_242;
F->k_243 = k_243;
F->l_1203 = NULL;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = (*(P794)rt_nil_check(F->c_242)).hi;
goto ret_;
} else if ((F->k_243 == ((rt_int)2LL))) {
F->result_ = (*(P794)rt_nil_check(F->c_242)).hi2;
goto ret_;
}
F->l_1203 = (*(P794)rt_nil_check(F->c_242)).bnds;
{ rt_int lo1205 = ((rt_int)1LL), hi1206 = rt_sub(rt_add(F->k_243, F->k_243), ((rt_int)5LL));
for (rt_int it1207 = lo1205; it1207 <= hi1206; it1207++) {
F->i_1204 = it1207;
if ((F->l_1203 != NULL)) {
F->l_1203 = (*(P796)rt_nil_check(F->l_1203)).next;
}
}
}
if ((F->l_1203 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P796)rt_nil_check(F->l_1203)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_idx_type_247(P798 t_245, rt_int k_246) {
  struct f_idx_type_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->k_246 = k_246;
F->l_1208 = NULL;
F->l_1208 = (*(P798)rt_nil_check(F->t_245)).idxs;
{ rt_int lo1210 = ((rt_int)2LL), hi1211 = F->k_246;
for (rt_int it1212 = lo1210; it1212 <= hi1211; it1212++) {
F->i_1209 = it1212;
F->l_1208 = (*(P813)rt_nil_check(F->l_1208)).next;
}
}
F->result_ = (*(P813)rt_nil_check(F->l_1208)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_248(void) {
  struct f_init_ascii_248fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1213 = NULL;
F->tail_1214 = NULL;
F->start_1215 = ((rt_int)1LL);
{ rt_int lo1217 = ((rt_int)1LL), hi1218 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1219 = lo1217; it1219 <= hi1218; it1219++) {
F->i_1216 = it1219;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1216) == 32)) {
F->lit_1220 = NULL;
F->lit_1220 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P792)rt_nil_check(F->lit_1220)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1215, rt_sub(F->i_1216, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1213, &F->tail_1214, F->lit_1220);
F->start_1215 = rt_add(F->i_1216, ((rt_int)1LL));
}
}
}
g_ty_ascii_874 = f_new_typ_174((((rt_int)4LL)));
(*(P798)rt_nil_check(g_ty_ascii_874)).lits = F->head_1213;
(*(P798)rt_nil_check(g_ty_ascii_874)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1221 = NULL;
F->t2_1222 = NULL;
F->l1_1223 = NULL;
F->l1_1223 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1224 = NULL;
F->l2_1224 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1225 = NULL;
F->l3_1225 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P792)rt_nil_check(F->l1_1223)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P792)rt_nil_check(F->l2_1224)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P792)rt_nil_check(F->l3_1225)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1221, &F->t2_1222, F->l1_1223);
f_append_65(&F->h2_1221, &F->t2_1222, F->l2_1224);
f_append_65(&F->h2_1221, &F->t2_1222, F->l3_1225);
g_file_mode_type_882 = f_new_typ_174((((rt_int)4LL)));
(*(P798)rt_nil_check(g_file_mode_type_882)).lits = F->h2_1221;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_251(P792 lits_249, rstr *name_250) {
  struct f_lit_index_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_249 = lits_249;
F->name_250 = name_250;
F->i_1226 = ((rt_int)0LL);
F->l_1227 = NULL;
F->l_1227 = F->lits_249;
while ((F->l_1227 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->l_1227)).name))->all), (*F->name_250))) {
F->result_ = F->i_1226;
goto ret_;
}
F->i_1226 = rt_add(F->i_1226, ((rt_int)1LL));
F->l_1227 = (*(P792)rt_nil_check(F->l_1227)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_resolve_subtype_254(P792 st_252, P794 *c_253) {
  struct f_resolve_subtype_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_252 = st_252;
F->c_253 = c_253;
F->c_253v = *F->c_253;
F->t_1228 = NULL;
F->dummy_1230 = NULL;
F->c_253v = f_new_cons_175();
{ rt_int sel1231 = (*(P792)rt_nil_check(F->st_252)).kind;
if (0 || (sel1231 == (((rt_int)70LL)))) {
if (((*(P792)rt_nil_check(F->st_252)).a != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).a, g_ty_int_871, &F->dummy_1230); b_; }));
(*(P794)rt_nil_check(F->c_253v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).b, g_ty_int_871, &F->dummy_1230); b_; }));
(*(P794)rt_nil_check(F->c_253v)).mlo = f_manifest_324((*(P792)rt_nil_check(F->st_252)).a, &F->ok_1229);
(*(P794)rt_nil_check(F->c_253v)).hasm = F->ok_1229;
(*(P794)rt_nil_check(F->c_253v)).mhi = f_manifest_324((*(P792)rt_nil_check(F->st_252)).b, &F->ok_1229);
(*(P794)rt_nil_check(F->c_253v)).hasm = ((*(P794)rt_nil_check(F->c_253v)).hasm && F->ok_1229);
}
F->result_ = g_ty_int_871;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)71LL)))) {
if (((*(P792)rt_nil_check(F->st_252)).a != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).a, g_ty_int_871, &F->dummy_1230); b_; }));
}
if (((*(P792)rt_nil_check(F->st_252)).b != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).b, g_ty_float_873, &F->dummy_1230); b_; }));
(*(P794)rt_nil_check(F->c_253v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).c, g_ty_float_873, &F->dummy_1230); b_; }));
(*(P794)rt_nil_check(F->c_253v)).hasm = (f_float_lit_256((*(P792)rt_nil_check(F->st_252)).b) && f_float_lit_256((*(P792)rt_nil_check(F->st_252)).c));
}
F->result_ = g_ty_float_873;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)72LL)))) {
F->t_1228 = f_new_typ_174((((rt_int)4LL)));
(*(P798)rt_nil_check(F->t_1228)).lits = (*(P792)rt_nil_check(F->st_252)).a;
if (((*(P792)rt_nil_check(F->st_252)).b != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).b, F->t_1228, &F->dummy_1230); b_; }));
(*(P794)rt_nil_check(F->c_253v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).c, F->t_1228, &F->dummy_1230); b_; }));
if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_252)).b)).kind == (((rt_int)4LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_252)).c)).kind == (((rt_int)4LL))))) {
(*(P794)rt_nil_check(F->c_253v)).mlo = f_lit_index_251((*(P798)rt_nil_check(F->t_1228)).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_252)).b)).name))->all));
(*(P794)rt_nil_check(F->c_253v)).mhi = f_lit_index_251((*(P798)rt_nil_check(F->t_1228)).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_252)).c)).name))->all));
(*(P794)rt_nil_check(F->c_253v)).hasm = 1;
}
}
F->result_ = F->t_1228;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)73LL)))) {
F->t_1228 = f_resolve_subtype_254((*(P792)rt_nil_check(F->st_252)).a, &F->c_253v);
if ((!f_same_210(F->t_1228, g_ty_ascii_874))) {
f_fail_23((*(P792)rt_nil_check(F->st_252)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_253v = f_new_cons_175();
if (((*(P792)rt_nil_check(F->st_252)).b != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).b, g_ty_int_871, &F->dummy_1230); b_; }));
}
F->result_ = g_ty_string_875;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)74LL)))) {
{
F->ec_1232 = NULL;
F->et_1233 = NULL;
F->et_1233 = f_resolve_subtype_254((*(P792)rt_nil_check(F->st_252)).b, &F->ec_1232);
F->ix_1234 = NULL;
F->ix_1234 = (*(P792)rt_nil_check(F->st_252)).a;
F->k_1235 = ((rt_int)0LL);
F->tail_1236 = NULL;
F->btail_1237 = NULL;
F->t_1228 = f_new_typ_174((((rt_int)6LL)));
(*(P798)rt_nil_check(F->t_1228)).elem = F->et_1233;
(*(P798)rt_nil_check(F->t_1228)).elemcons = F->ec_1232;
(*(P798)rt_nil_check(F->t_1228)).elemst = (*(P792)rt_nil_check(F->st_252)).b;
(*(P794)rt_nil_check(F->c_253v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P794)rt_nil_check(F->c_253v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1234 != NULL)) {
F->ic_1238 = NULL;
F->it_1239 = NULL;
F->it_1239 = f_resolve_subtype_254(F->ix_1234, &F->ic_1238);
F->lo_1240 = NULL;
F->hi_1241 = NULL;
F->tl_1242 = NULL;
if ((((*(P798)rt_nil_check(f_base_of_212(F->it_1239))).kind != (((rt_int)1LL))) && ((*(P798)rt_nil_check(f_base_of_212(F->it_1239))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P792)rt_nil_check(F->st_252)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1238 = f_base_cons_215(F->it_1239, F->ic_1238);
F->k_1235 = rt_add(F->k_1235, ((rt_int)1LL));
{ R814 *cell1243 = rt_alloc(sizeof(R814));
(*cell1243).t = NULL;
(*cell1243).next = NULL;
F->tl_1242 = cell1243;
}
(*(P813)rt_nil_check(F->tl_1242)).t = F->it_1239;
if ((F->tail_1236 == NULL)) {
(*(P798)rt_nil_check(F->t_1228)).idxs = F->tl_1242;
} else {
(*(P813)rt_nil_check(F->tail_1236)).next = F->tl_1242;
}
F->tail_1236 = F->tl_1242;
if (((F->ic_1238 != NULL) && ((*(P794)rt_nil_check(F->ic_1238)).lo != NULL))) {
F->lo_1240 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1238); b_; }));
F->hi_1241 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1238); b_; }));
} else if (((*(P798)rt_nil_check(f_base_of_212(F->it_1239))).kind == (((rt_int)4LL)))) {
F->lo_1240 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1241 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check(f_base_of_212(F->it_1239))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1235 == ((rt_int)1LL))) {
(*(P798)rt_nil_check(F->t_1228)).idx = F->it_1239;
(*(P794)rt_nil_check(F->c_253v)).lo = F->lo_1240;
(*(P794)rt_nil_check(F->c_253v)).hi = F->hi_1241;
} else if ((F->k_1235 == ((rt_int)2LL))) {
(*(P798)rt_nil_check(F->t_1228)).idx2 = F->it_1239;
(*(P794)rt_nil_check(F->c_253v)).lo2 = F->lo_1240;
(*(P794)rt_nil_check(F->c_253v)).hi2 = F->hi_1241;
} else if ((F->lo_1240 != NULL)) {
F->l1_1244 = NULL;
F->l2_1245 = NULL;
{ R797 *cell1246 = rt_alloc(sizeof(R797));
(*cell1246).s = NULL;
(*cell1246).next = NULL;
F->l1_1244 = cell1246;
}
{ R797 *cell1247 = rt_alloc(sizeof(R797));
(*cell1247).s = NULL;
(*cell1247).next = NULL;
F->l2_1245 = cell1247;
}
(*(P796)rt_nil_check(F->l1_1244)).s = F->lo_1240;
(*(P796)rt_nil_check(F->l2_1245)).s = F->hi_1241;
(*(P796)rt_nil_check(F->l1_1244)).next = F->l2_1245;
if ((F->btail_1237 == NULL)) {
(*(P794)rt_nil_check(F->c_253v)).bnds = F->l1_1244;
} else {
(*(P796)rt_nil_check(F->btail_1237)).next = F->l1_1244;
}
F->btail_1237 = F->l2_1245;
}
F->ix_1234 = (*(P792)rt_nil_check(F->ix_1234)).next;
}
(*(P798)rt_nil_check(F->t_1228)).ndim = F->k_1235;
}
F->result_ = F->t_1228;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)77LL)))) {
F->t_1228 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1248 = NULL;
(*(P798)rt_nil_check(F->t_1228)).elem = f_resolve_subtype_254((*(P792)rt_nil_check(F->st_252)).a, &F->ec_1248);
(*(P798)rt_nil_check(F->t_1228)).elemcons = F->ec_1248;
}
F->result_ = F->t_1228;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)75LL))) || (sel1231 == (((rt_int)76LL)))) {
if (((*(P792)rt_nil_check(F->st_252)).kind == (((rt_int)76LL)))) {
F->t_1228 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1228 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1249 = NULL;
F->comp_1249 = (*(P792)rt_nil_check(F->st_252)).a;
F->tail_1250 = NULL;
while ((F->comp_1249 != NULL)) {
F->cc_1251 = NULL;
F->f_1252 = NULL;
{ R801 *cell1253 = rt_alloc(sizeof(R801));
(*cell1253).name = NULL;
(*cell1253).t = NULL;
(*cell1253).c = NULL;
(*cell1253).st = NULL;
(*cell1253).next = NULL;
F->f_1252 = cell1253;
}
(*(P800)rt_nil_check(F->f_1252)).name = (*(P792)rt_nil_check(F->comp_1249)).name;
(*(P800)rt_nil_check(F->f_1252)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->comp_1249)).a, &F->cc_1251);
(*(P800)rt_nil_check(F->f_1252)).c = F->cc_1251;
(*(P800)rt_nil_check(F->f_1252)).st = (*(P792)rt_nil_check(F->comp_1249)).a;
if ((F->tail_1250 == NULL)) {
(*(P798)rt_nil_check(F->t_1228)).fields = F->f_1252;
} else {
(*(P800)rt_nil_check(F->tail_1250)).next = F->f_1252;
}
F->tail_1250 = F->f_1252;
F->comp_1249 = (*(P792)rt_nil_check(F->comp_1249)).next;
}
}
if (((*(P798)rt_nil_check(F->t_1228)).kind == (((rt_int)17LL)))) {
F->lits_1254 = NULL;
F->ltail_1255 = NULL;
F->f_1256 = NULL;
F->f_1256 = (*(P798)rt_nil_check(F->t_1228)).fields;
while ((F->f_1256 != NULL)) {
F->l_1257 = NULL;
F->l_1257 = f_nn_61((((rt_int)4LL)), (*(P792)rt_nil_check(F->st_252)).line);
if (rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1256)).name))->all), rt_str("TAG", 3))) {
f_fail_23((*(P792)rt_nil_check(F->st_252)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P792)rt_nil_check(F->l_1257)).name = (*(P800)rt_nil_check(F->f_1256)).name;
f_append_65(&F->lits_1254, &F->ltail_1255, F->l_1257);
F->f_1256 = (*(P800)rt_nil_check(F->f_1256)).next;
}
(*(P798)rt_nil_check(F->t_1228)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_1228)).elem)).lits = F->lits_1254;
if (((*(P792)rt_nil_check(F->st_252)).b != NULL)) {
f_tag_constraint_260(F->t_1228, (*(P792)rt_nil_check(F->st_252)).b, F->c_253v);
}
}
F->result_ = F->t_1228;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_877;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P802)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1258 = NULL;
F->gt_1258 = f_copy_node_647((*(P792)rt_nil_check(F->st_252)).a);
(*(P792)rt_nil_check(F->gt_1258)).next = NULL;
F->result_ = f_instantiate_type_577(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1258, (*(P792)rt_nil_check(F->st_252)).b, &F->c_253v, (*(P792)rt_nil_check(F->st_252)).line);
goto ret_;
}
{
F->ec_1259 = NULL;
F->t_1228 = f_new_typ_174((((rt_int)12LL)));
(*(P798)rt_nil_check(F->t_1228)).elem = f_resolve_subtype_254((*(P792)rt_nil_check(F->st_252)).a, &F->ec_1259);
(*(P798)rt_nil_check(F->t_1228)).elemcons = F->ec_1259;
if (((*(P792)rt_nil_check(F->st_252)).b != NULL)) {
(*(P794)rt_nil_check(F->c_253v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->st_252)).b, g_ty_int_871, &F->dummy_1230); b_; }));
}
}
F->result_ = F->t_1228;
goto ret_;
} else if (0 || (sel1231 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_263(F->st_252, &F->c_253v);
goto ret_;
} else if (0 || (sel1231 == (((rt_int)81LL)))) {
{
F->base_1260 = NULL;
F->result_ = f_value_subtype_276((*(P792)rt_nil_check(F->st_252)).a, &F->c_253v, &F->base_1260);
goto ret_;
}
} else {
f_fail_23((*(P792)rt_nil_check(F->st_252)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_253) = F->c_253v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_256(P792 e_255) {
  struct f_float_lit_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_255 = e_255;
if ((((*(P792)rt_nil_check(F->e_255)).kind == (((rt_int)8LL))) && (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_255)).name))->all), rt_str("-", 1)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_255)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_256((*(P792)rt_nil_check(F->e_255)).a);
goto ret_;
}
F->result_ = (((*(P792)rt_nil_check(F->e_255)).kind == (((rt_int)2LL))) || ((*(P792)rt_nil_check(F->e_255)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_260(P798 t_257, P792 e_258, P794 c_259) {
  struct f_tag_constraint_260fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_257 = t_257;
F->e_258 = e_258;
F->c_259 = c_259;
F->dummy_1261 = NULL;
(*(P794)rt_nil_check(F->c_259)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->e_258, (*(P798)rt_nil_check(F->t_257)).elem, &F->dummy_1261); b_; }));
f_check_type_221(F->dummy_1261, (*(P798)rt_nil_check(F->t_257)).elem, (*(P792)rt_nil_check(F->e_258)).line);
(*(P794)rt_nil_check(F->c_259)).hi = (*(P794)rt_nil_check(F->c_259)).lo;
if (((*(P792)rt_nil_check(F->e_258)).kind == (((rt_int)4LL)))) {
(*(P794)rt_nil_check(F->c_259)).mlo = f_lit_index_251((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_257)).elem)).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_258)).name))->all));
(*(P794)rt_nil_check(F->c_259)).mhi = (*(P794)rt_nil_check(F->c_259)).mlo;
(*(P794)rt_nil_check(F->c_259)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P798 f_named_subtype_263(P792 st_261, P794 *c_262) {
  struct f_named_subtype_263fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_261 = st_261;
F->c_262 = c_262;
F->c_262v = *F->c_262;
F->t_1262 = NULL;
F->y_1263 = NULL;
F->y_1263 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->st_261)).name))->all));
F->name_1264 = rt_str_copy((((P785)rt_nil_check((*(P792)rt_nil_check(F->st_261)).name))->all));
F->c_262v = f_new_cons_175();
if (((F->y_1263 == NULL) && ((rt_str_eq(F->name_1264, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1264, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1264, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_281(F->st_261, &F->c_262v);
goto ret_;
}
if ((F->y_1263 == NULL)) {
if (rt_str_eq(F->name_1264, rt_str("BOOL", 4))) {
F->t_1262 = g_ty_bool_872;
} else if (rt_str_eq(F->name_1264, rt_str("ASCII", 5))) {
F->t_1262 = g_ty_ascii_874;
} else if (rt_str_eq(F->name_1264, rt_str("DATA_LOCK", 9))) {
F->t_1262 = g_ty_lock_879;
} else if (rt_str_eq(F->name_1264, rt_str("LATCH", 5))) {
F->t_1262 = g_ty_latch_880;
} else if (rt_str_eq(F->name_1264, rt_str("ACT", 3))) {
F->t_1262 = g_ty_act_881;
} else if (rt_str_eq(F->name_1264, rt_str("INT", 3))) {
F->t_1262 = g_ty_int_871;
} else if (rt_str_eq(F->name_1264, rt_str("FLOAT", 5))) {
F->t_1262 = g_ty_float_873;
} else {
f_fail_23((*(P792)rt_nil_check(F->st_261)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1264); b_; }));
}
if (((*(P792)rt_nil_check(F->st_261)).b != NULL)) {
f_apply_constraint_272(F->t_1262, (*(P792)rt_nil_check(F->st_261)).b, F->c_262v, (*(P792)rt_nil_check(F->st_261)).line);
}
F->result_ = F->t_1262;
goto ret_;
}
if ((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)10LL))) && (((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_577(F->y_1263, (*(P792)rt_nil_check(F->st_261)).a, (*(P792)rt_nil_check(F->st_261)).b, &F->c_262v, (*(P792)rt_nil_check(F->st_261)).line);
goto ret_;
}
if (((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)5LL))) && ((*(P802)rt_nil_check(F->y_1263)).t != NULL)) && ((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_302(F->y_1263, F->st_261, &F->c_262v);
goto ret_;
}
if (((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)5LL))) && ((*(P802)rt_nil_check(F->y_1263)).t != NULL)) && ((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).t)).kind == (((rt_int)8LL))))) {
(*(P794)rt_nil_check(F->c_262v)).args = (*(P792)rt_nil_check(F->st_261)).b;
F->result_ = (*(P802)rt_nil_check(F->y_1263)).t;
goto ret_;
}
if (((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)6LL))) && ((*(P802)rt_nil_check(F->y_1263)).decl != NULL)) && ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_267(F->y_1263, F->st_261, &F->c_262v);
goto ret_;
}
if (((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)6LL))) || ((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)5LL)))) && ((*(P802)rt_nil_check(F->y_1263)).t != NULL))) {
if (((*(P802)rt_nil_check(F->y_1263)).c != NULL)) {
F->c_262v = (*(P802)rt_nil_check(F->y_1263)).c;
}
F->t_1262 = (*(P802)rt_nil_check(F->y_1263)).t;
} else if (((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)5LL))) && ((*(P802)rt_nil_check(F->y_1263)).decl != NULL)) && ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1263)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_302(F->y_1263, F->st_261, &F->c_262v);
goto ret_;
} else if ((((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)6LL))) || ((*(P802)rt_nil_check(F->y_1263)).kind == (((rt_int)5LL))))) {
F->t_1262 = f_resolve_subtype_254((*(P802)rt_nil_check(F->y_1263)).st, &F->c_262v);
} else {
f_fail_23((*(P792)rt_nil_check(F->st_261)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1264, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P792)rt_nil_check(F->st_261)).b != NULL)) {
F->c_262v = f_copy_cons_197(F->c_262v);
f_apply_constraint_272(F->t_1262, (*(P792)rt_nil_check(F->st_261)).b, F->c_262v, (*(P792)rt_nil_check(F->st_261)).line);
}
F->result_ = F->t_1262;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_262) = F->c_262v;
  RT_FPOP();
  return F->result_;
}

static P798 f_invoke_abbrev_267(P802 y_264, P792 st_265, P794 *c_266) {
  struct f_invoke_abbrev_267fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_264 = y_264;
F->st_265 = st_265;
F->c_266 = c_266;
F->c_266v = *F->c_266;
F->p_1265 = NULL;
F->p_1265 = (*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_264)).decl)).b;
F->a_1266 = NULL;
F->a_1266 = (*(P792)rt_nil_check(F->st_265)).b;
F->t_1267 = NULL;
if ((f_list_len_67(F->p_1265) != f_list_len_67(F->a_1266))) {
f_fail_23((*(P792)rt_nil_check(F->st_265)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_264)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1265))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1265 != NULL)) {
F->z_1268 = NULL;
F->z_1268 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_1265)).name);
F->pc_1269 = NULL;
F->at_1270 = NULL;
if (((*(P792)rt_nil_check(F->p_1265)).ival != (((rt_int)1LL)))) {
f_fail_23((*(P792)rt_nil_check(F->st_265)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P802)rt_nil_check(F->z_1268)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1265)).a, &F->pc_1269);
(*(P802)rt_nil_check(F->z_1268)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_637(F->a_1266, (*(P802)rt_nil_check(F->z_1268)).t, &F->at_1270)), rt_str(")", 1)); b_; }));
f_check_type_221(F->at_1270, (*(P802)rt_nil_check(F->z_1268)).t, (*(P792)rt_nil_check(F->st_265)).line);
(*(P802)rt_nil_check(F->z_1268)).mvalue = f_manifest_324(F->a_1266, &F->ok_1271);
(*(P802)rt_nil_check(F->z_1268)).hasmv = F->ok_1271;
(*(P802)rt_nil_check(F->z_1268)).mv = f_meval_333(F->a_1266, &F->ok_1271);
if ((!F->ok_1271)) {
(*(P802)rt_nil_check(F->z_1268)).mv = NULL;
}
(*(P802)rt_nil_check(F->z_1268)).ro_flag = 1;
f_define_159(F->z_1268, (*(P792)rt_nil_check(F->st_265)).line);
F->p_1265 = (*(P792)rt_nil_check(F->p_1265)).next;
F->a_1266 = (*(P792)rt_nil_check(F->a_1266)).next;
}
F->t_1267 = f_resolve_subtype_254((*(P802)rt_nil_check(F->y_264)).st, &F->c_266v);
f_close_scope_169();
F->result_ = F->t_1267;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_266) = F->c_266v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_272(P798 t_268, P792 args_269, P794 c_270, rt_int line_271) {
  struct f_apply_constraint_272fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_268 = t_268;
F->args_269 = args_269;
F->c_270 = c_270;
F->line_271 = line_271;
F->dummy_1272 = NULL;
if ((((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)1LL))) || ((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)4LL))))) {
if ((((*(P792)rt_nil_check(F->args_269)).kind != (((rt_int)16LL))) || ((*(P792)rt_nil_check(F->args_269)).next != NULL))) {
f_fail_23(F->line_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P794)rt_nil_check(F->c_270)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->args_269)).a, F->t_268, &F->dummy_1272); b_; }));
f_check_type_221(F->dummy_1272, F->t_268, F->line_271);
(*(P794)rt_nil_check(F->c_270)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check(F->args_269)).b, F->t_268, &F->dummy_1272); b_; }));
f_check_type_221(F->dummy_1272, F->t_268, F->line_271);
(*(P794)rt_nil_check(F->c_270)).hasm = 0;
if (((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)1LL)))) {
(*(P794)rt_nil_check(F->c_270)).mlo = f_manifest_324((*(P792)rt_nil_check(F->args_269)).a, &F->ok_1273);
(*(P794)rt_nil_check(F->c_270)).hasm = F->ok_1273;
(*(P794)rt_nil_check(F->c_270)).mhi = f_manifest_324((*(P792)rt_nil_check(F->args_269)).b, &F->ok_1273);
(*(P794)rt_nil_check(F->c_270)).hasm = ((*(P794)rt_nil_check(F->c_270)).hasm && F->ok_1273);
} else if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).a)).kind == (((rt_int)4LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).b)).kind == (((rt_int)4LL))))) {
(*(P794)rt_nil_check(F->c_270)).mlo = f_lit_index_251((*(P798)rt_nil_check(f_base_of_212(F->t_268))).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).a)).name))->all));
(*(P794)rt_nil_check(F->c_270)).mhi = f_lit_index_251((*(P798)rt_nil_check(f_base_of_212(F->t_268))).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).b)).name))->all));
(*(P794)rt_nil_check(F->c_270)).hasm = 1;
}
} else if (((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)3LL)))) {
(*(P794)rt_nil_check(F->c_270)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->args_269, g_ty_int_871, &F->dummy_1272); b_; }));
if (((*(P792)rt_nil_check(F->args_269)).next != NULL)) {
if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).next)).kind != (((rt_int)16LL)))) {
f_fail_23(F->line_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P794)rt_nil_check(F->c_270)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).next)).a, g_ty_float_873, &F->dummy_1272); b_; }));
(*(P794)rt_nil_check(F->c_270)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).next)).b, g_ty_float_873, &F->dummy_1272); b_; }));
(*(P794)rt_nil_check(F->c_270)).hasm = (f_float_lit_256((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).next)).a) && f_float_lit_256((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_269)).next)).b));
}
} else if (((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)5LL)))) {
(*(P794)rt_nil_check(F->c_270)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->args_269, g_ty_int_871, &F->dummy_1272); b_; }));
} else if (((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)12LL)))) {
(*(P794)rt_nil_check(F->c_270)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->args_269, g_ty_int_871, &F->dummy_1272); b_; }));
} else if (((*(P798)rt_nil_check(F->t_268)).kind == (((rt_int)17LL)))) {
f_tag_constraint_260(F->t_268, F->args_269, F->c_270);
} else {
f_fail_23(F->line_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P798 f_value_subtype_276(P792 e_273, P794 *c_274, P785 *base_275) {
  struct f_value_subtype_276fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_273 = e_273;
F->c_274 = c_274;
F->c_274v = *F->c_274;
F->base_275 = base_275;
F->base_275v = *F->base_275;
F->t_1274 = NULL;
F->c0_1275 = NULL;
if (f_is_lvalue_600(F->e_273)) {
f_lvalue_606(F->e_273, &F->base_275v, &F->t_1274, &F->c0_1275, &F->ro_1276);
} else {
F->base_275v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->e_273, NULL, &F->t_1274); b_; }));
}
if ((F->c0_1275 == NULL)) {
F->c_274v = f_new_cons_175();
} else {
F->c_274v = f_copy_cons_197(F->c0_1275);
}
if (((*(P798)rt_nil_check(F->t_1274)).kind == (((rt_int)5LL)))) {
(*(P794)rt_nil_check(F->c_274v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->base_275v))->all)), rt_str(").len", 5)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_1274)).kind == (((rt_int)6LL)))) {
(*(P794)rt_nil_check(F->c_274v)).bnds = NULL;
{ rt_int lo1278 = ((rt_int)1LL), hi1279 = (*(P798)rt_nil_check(F->t_1274)).ndim;
for (rt_int it1280 = lo1278; it1280 <= hi1279; it1280++) {
F->k_1277 = it1280;
F->lo_1281 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->base_275v))->all)), rt_str(").", 2)), f_dim_lo_231(F->k_1277)));
F->hi_1282 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->base_275v))->all)), rt_str(").", 2)), f_dim_hi_233(F->k_1277)));
if ((F->k_1277 == ((rt_int)1LL))) {
(*(P794)rt_nil_check(F->c_274v)).lo = f_mk_3(&F->lo_1281);
(*(P794)rt_nil_check(F->c_274v)).hi = f_mk_3(&F->hi_1282);
} else if ((F->k_1277 == ((rt_int)2LL))) {
(*(P794)rt_nil_check(F->c_274v)).lo2 = f_mk_3(&F->lo_1281);
(*(P794)rt_nil_check(F->c_274v)).hi2 = f_mk_3(&F->hi_1282);
} else {
F->l1_1283 = NULL;
F->l2_1284 = NULL;
{ R797 *cell1285 = rt_alloc(sizeof(R797));
(*cell1285).s = NULL;
(*cell1285).next = NULL;
F->l1_1283 = cell1285;
}
{ R797 *cell1286 = rt_alloc(sizeof(R797));
(*cell1286).s = NULL;
(*cell1286).next = NULL;
F->l2_1284 = cell1286;
}
(*(P796)rt_nil_check(F->l1_1283)).s = f_mk_3(&F->lo_1281);
(*(P796)rt_nil_check(F->l2_1284)).s = f_mk_3(&F->hi_1282);
(*(P796)rt_nil_check(F->l1_1283)).next = F->l2_1284;
(*(P796)rt_nil_check(F->l2_1284)).next = (*(P794)rt_nil_check(F->c_274v)).bnds;
(*(P794)rt_nil_check(F->c_274v)).bnds = F->l1_1283;
}
}
}
(*(P794)rt_nil_check(F->c_274v)).bnds = f_reverse_pairs_278((*(P794)rt_nil_check(F->c_274v)).bnds);
} else if (((*(P798)rt_nil_check(F->t_1274)).kind == (((rt_int)12LL)))) {
(*(P794)rt_nil_check(F->c_274v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->base_275v))->all)), rt_str(")->cap", 6)); b_; }));
} else if ((((*(P798)rt_nil_check(F->t_1274)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_1274)).tparams != NULL))) {
F->p_1287 = NULL;
F->p_1287 = (*(P798)rt_nil_check(F->t_1274)).tparams;
F->head_1288 = NULL;
F->tail_1289 = NULL;
while ((F->p_1287 != NULL)) {
F->sel_1290 = NULL;
F->sel_1290 = f_nn_61((((rt_int)11LL)), (*(P792)rt_nil_check(F->e_273)).line);
(*(P792)rt_nil_check(F->sel_1290)).a = F->e_273;
(*(P792)rt_nil_check(F->sel_1290)).name = (*(P792)rt_nil_check(F->p_1287)).name;
f_append_65(&F->head_1288, &F->tail_1289, F->sel_1290);
F->p_1287 = (*(P792)rt_nil_check(F->p_1287)).next;
}
(*(P794)rt_nil_check(F->c_274v)).args = F->head_1288;
}
F->result_ = F->t_1274;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_274) = F->c_274v;  (*F->base_275) = F->base_275v;
  RT_FPOP();
  return F->result_;
}

static P796 f_reverse_pairs_278(P796 l_277) {
  struct f_reverse_pairs_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_277 = l_277;
F->r_1291 = NULL;
F->p_1292 = NULL;
F->p_1292 = F->l_277;
while ((F->p_1292 != NULL)) {
F->a_1293 = NULL;
F->a_1293 = F->p_1292;
F->b_1294 = NULL;
F->b_1294 = (*(P796)rt_nil_check(F->p_1292)).next;
F->p_1292 = (*(P796)rt_nil_check(F->b_1294)).next;
(*(P796)rt_nil_check(F->b_1294)).next = F->r_1291;
F->r_1291 = F->a_1293;
}
F->result_ = F->r_1291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_inquiry_281(P792 st_279, P794 *c_280) {
  struct f_inquiry_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->base_1295 = NULL;
F->t_1296 = NULL;
F->name_1297 = rt_str_copy((((P785)rt_nil_check((*(P792)rt_nil_check(F->st_279)).name))->all));
if (((*(P792)rt_nil_check(F->st_279)).b == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1297, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1297, rt_str("TYPEOF", 6))) {
F->sub_1298 = NULL;
F->sub_1298 = f_as_subtype_283((*(P792)rt_nil_check(F->st_279)).b);
F->c2_1299 = NULL;
if ((F->sub_1298 != NULL)) {
F->t_1296 = f_resolve_subtype_254(F->sub_1298, &F->c2_1299);
} else {
F->t_1296 = f_value_subtype_276((*(P792)rt_nil_check(F->st_279)).b, &F->c2_1299, &F->base_1295);
}
F->c_280v = f_new_cons_175();
F->result_ = F->t_1296;
goto ret_;
}
F->t_1296 = f_value_subtype_276((*(P792)rt_nil_check(F->st_279)).b, &F->c_280v, &F->base_1295);
if (rt_str_eq(F->name_1297, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1296;
goto ret_;
}
{
F->k_1300 = ((rt_int)1LL);
F->ok_1301 = 1;
F->ac_1302 = NULL;
F->ac_1302 = F->c_280v;
if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_279)).b)).next != NULL)) {
F->k_1300 = f_manifest_324((*(P792)rt_nil_check((*(P792)rt_nil_check(F->st_279)).b)).next, &F->ok_1301);
}
while ((((*(P798)rt_nil_check(F->t_1296)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_1296)).tparams == NULL))) {
F->t_1296 = (*(P798)rt_nil_check(F->t_1296)).under;
}
if ((((((*(P798)rt_nil_check(F->t_1296)).kind != (((rt_int)6LL))) || (!F->ok_1301)) || (F->k_1300 < ((rt_int)1LL))) || (F->k_1300 > (*(P798)rt_nil_check(F->t_1296)).ndim))) {
f_fail_23((*(P792)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_280v = f_new_cons_175();
(*(P794)rt_nil_check(F->c_280v)).lo = f_cons_lo_241(F->ac_1302, F->k_1300);
(*(P794)rt_nil_check(F->c_280v)).hi = f_cons_hi_244(F->ac_1302, F->k_1300);
F->result_ = f_idx_type_247(F->t_1296, F->k_1300);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static P792 f_as_subtype_283(P792 e_282) {
  struct f_as_subtype_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_282 = e_282;
F->st_1303 = NULL;
if ((F->e_282 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_282)).kind == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_283((*(P792)rt_nil_check(F->e_282)).a);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_282)).kind == (((rt_int)7LL)))) {
if ((!f_type_name_290(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_282)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1303 = f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->e_282)).line);
(*(P792)rt_nil_check(F->st_1303)).name = (*(P792)rt_nil_check(F->e_282)).name;
F->result_ = F->st_1303;
goto ret_;
} else if ((((*(P792)rt_nil_check(F->e_282)).kind == (((rt_int)12LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_288((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).name, (*(P792)rt_nil_check(F->e_282)).b, NULL, (*(P792)rt_nil_check(F->e_282)).line);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_282)).kind != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).kind == (((rt_int)12LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_288((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).a)).name, (*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).b, (*(P792)rt_nil_check(F->e_282)).b, (*(P792)rt_nil_check(F->e_282)).line);
goto ret_;
} else if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).kind != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1304 = rt_str_copy((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).name))->all));
F->y_1305 = NULL;
F->y_1305 = f_lookup_154(&F->name_1304);
if ((rt_str_eq(F->name_1304, rt_str("INT", 3)) && (F->y_1305 == NULL))) {
if (((((*(P792)rt_nil_check(F->e_282)).b == NULL) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).kind != (((rt_int)16LL)))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1303 = f_nn_61((((rt_int)70LL)), (*(P792)rt_nil_check(F->e_282)).line);
(*(P792)rt_nil_check(F->st_1303)).a = (*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).a;
(*(P792)rt_nil_check(F->st_1303)).b = (*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).b;
F->result_ = F->st_1303;
goto ret_;
} else if ((rt_str_eq(F->name_1304, rt_str("FLOAT", 5)) && (F->y_1305 == NULL))) {
F->st_1303 = f_nn_61((((rt_int)71LL)), (*(P792)rt_nil_check(F->e_282)).line);
(*(P792)rt_nil_check(F->st_1303)).a = (*(P792)rt_nil_check(F->e_282)).b;
if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).next != NULL) && ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).next)).kind == (((rt_int)16LL))))) {
(*(P792)rt_nil_check(F->st_1303)).b = (*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).next)).a;
(*(P792)rt_nil_check(F->st_1303)).c = (*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).b)).next)).b;
}
F->result_ = F->st_1303;
goto ret_;
} else if (((!f_type_name_290(&F->name_1304)) && (!((F->y_1305 == NULL) && ((rt_str_eq(F->name_1304, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1304, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1304, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1303 = f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->e_282)).line);
(*(P792)rt_nil_check(F->st_1303)).name = (*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_282)).a)).name;
(*(P792)rt_nil_check(F->st_1303)).b = (*(P792)rt_nil_check(F->e_282)).b;
(*(P792)rt_nil_check(F->st_1303)).flag = ((rt_int)1LL);
F->result_ = F->st_1303;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_tt_subtype_288(P785 name_284, P792 tt_285, P792 args_286, rt_int line_287) {
  struct f_tt_subtype_288fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_284 = name_284;
F->tt_285 = tt_285;
F->args_286 = args_286;
F->line_287 = line_287;
F->st_1306 = NULL;
if (rt_str_eq((((P785)rt_nil_check(F->name_284))->all), rt_str("STRING", 6))) {
F->st_1306 = f_nn_61((((rt_int)73LL)), F->line_287);
} else if (rt_str_eq((((P785)rt_nil_check(F->name_284))->all), rt_str("SET", 3))) {
F->st_1306 = f_nn_61((((rt_int)77LL)), F->line_287);
} else if ((rt_str_eq((((P785)rt_nil_check(F->name_284))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P802)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1306 = f_nn_61((((rt_int)78LL)), F->line_287);
} else if (rt_str_eq((((P785)rt_nil_check(F->name_284))->all), rt_str("FILE", 4))) {
F->st_1306 = f_nn_61((((rt_int)79LL)), F->line_287);
} else if (f_type_name_290(&(((P785)rt_nil_check(F->name_284))->all))) {
F->st_1306 = f_nn_61((((rt_int)80LL)), F->line_287);
(*(P792)rt_nil_check(F->st_1306)).name = F->name_284;
(*(P792)rt_nil_check(F->st_1306)).a = F->tt_285;
(*(P792)rt_nil_check(F->st_1306)).b = F->args_286;
F->result_ = F->st_1306;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P792)rt_nil_check(F->st_1306)).a = F->tt_285;
(*(P792)rt_nil_check(F->st_1306)).b = F->args_286;
F->result_ = F->st_1306;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_290(rstr *name_289) {
  struct f_type_name_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_289 = name_289;
F->y_1307 = NULL;
F->y_1307 = f_lookup_154(&(*F->name_289));
if ((F->y_1307 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_289), rt_str("INT", 3)) || rt_str_eq((*F->name_289), rt_str("BOOL", 4))) || rt_str_eq((*F->name_289), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_289), rt_str("ASCII", 5))) || rt_str_eq((*F->name_289), rt_str("ACT", 3))) || rt_str_eq((*F->name_289), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_289), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = ((((*(P802)rt_nil_check(F->y_1307)).kind == (((rt_int)5LL))) || ((*(P802)rt_nil_check(F->y_1307)).kind == (((rt_int)6LL)))) || (((*(P802)rt_nil_check(F->y_1307)).kind == (((rt_int)10LL))) && (((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1307)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1307)).decl)).b)).kind == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_292(P798 t_291) {
  struct f_opened_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_291 = t_291;
F->c_1308 = NULL;
F->c_1308 = g_caps_847;
if (((((*(P798)rt_nil_check(F->t_291)).kind != (((rt_int)15LL))) || ((*(P798)rt_nil_check(F->t_291)).ocap == NULL)) || ((*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_291)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1308 != NULL)) {
if (((*(P819)rt_nil_check(F->c_1308)).d == (*(P798)rt_nil_check(F->t_291)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1308 = (*(P819)rt_nil_check(F->c_1308)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_296(rstr *s_293, rstr *pat_294, rstr *r_295) {
  struct f_replace_all_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_293 = s_293;
F->pat_294 = pat_294;
F->r_295 = r_295;
F->i_1309 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_294)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_293)).len)) < ((rt_int)(((*F->pat_294)).len))))) {
F->result_ = (*F->s_293);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1309, ((rt_int)(((*F->pat_294)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_293)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_293), F->i_1309, rt_sub(rt_add(F->i_1309, ((rt_int)(((*F->pat_294)).len))), ((rt_int)1LL))), (*F->pat_294))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_293), ((rt_int)1LL), rt_sub(F->i_1309, ((rt_int)1LL))), (*F->r_295)), f_replace_all_296(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_293), rt_add(F->i_1309, ((rt_int)(((*F->pat_294)).len))), ((rt_int)(((*F->s_293)).len))); b_; }), &(*F->pat_294), &(*F->r_295)));
goto ret_;
}
F->i_1309 = rt_add(F->i_1309, ((rt_int)1LL));
}
F->result_ = (*F->s_293);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_298(rstr *s_297) {
  struct f_subst_298fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_297 = s_297;
F->l_1310 = NULL;
F->l_1310 = g_psub_849;
F->r_1311 = NULL;
F->r_1311 = f_mk_3(&(*F->s_297));
while ((F->l_1310 != NULL)) {
F->r_1311 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_296(&(((P785)rt_nil_check(F->r_1311))->all), &(((P785)rt_nil_check((*(P796)rt_nil_check(F->l_1310)).s))->all), &(((P785)rt_nil_check((*(P796)rt_nil_check((*(P796)rt_nil_check(F->l_1310)).next)).s))->all)); b_; }));
F->l_1310 = (*(P796)rt_nil_check((*(P796)rt_nil_check(F->l_1310)).next)).next;
}
F->result_ = (((P785)rt_nil_check(F->r_1311))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_new_type_302(P802 y_299, P792 st_300, P794 *c_301) {
  struct f_new_type_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_299 = y_299;
F->st_300 = st_300;
F->c_301 = c_301;
F->c_301v = *F->c_301;
F->d_1312 = NULL;
F->d_1312 = (*(P802)rt_nil_check(F->y_299)).decl;
F->p_1313 = NULL;
F->uc_1314 = NULL;
F->c_301v = f_new_cons_175();
if (((*(P802)rt_nil_check(F->y_299)).t == NULL)) {
(*(P802)rt_nil_check(F->y_299)).t = f_new_typ_174((((rt_int)15LL)));
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).name = (*(P802)rt_nil_check(F->y_299)).name;
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).decl = F->d_1312;
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).tparams = (*(P792)rt_nil_check(F->d_1312)).b;
if ((g_caps_847 != NULL)) {
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).ocap = (*(P819)rt_nil_check(g_caps_847)).d;
}
f_open_scope_168();
F->p_1313 = (*(P792)rt_nil_check(F->d_1312)).b;
while ((F->p_1313 != NULL)) {
F->z_1315 = NULL;
F->z_1315 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_1313)).name);
F->zc_1316 = NULL;
(*(P802)rt_nil_check(F->z_1315)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1313)).a, &F->zc_1316);
(*(P802)rt_nil_check(F->z_1315)).mnext = (*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).tpsyms;
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).tpsyms = F->z_1315;
(*(P802)rt_nil_check(F->z_1315)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1313)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1315, (*(P792)rt_nil_check(F->d_1312)).line);
F->p_1313 = (*(P792)rt_nil_check(F->p_1313)).next;
}
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).under = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_1312)).a, &F->uc_1314);
(*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_299)).t)).elemcons = F->uc_1314;
f_close_scope_169();
}
(*(P794)rt_nil_check(F->c_301v)).args = (*(P792)rt_nil_check(F->st_300)).b;
F->result_ = (*(P802)rt_nil_check(F->y_299)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_301) = F->c_301v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_306(rstr *lval_303, P798 t_304, P794 c_305) {
  struct f_init_storage_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_303 = lval_303;
F->t_304 = t_304;
F->c_305 = c_305;
f_make_storage_321(&(*F->lval_303), F->t_304, F->c_305);
if (((*(P798)rt_nil_check(F->t_304)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_309((*(P798)rt_nil_check(F->t_304)).initp, &(*F->lval_303)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_309(P802 y_307, rstr *lval_308) {
  struct f_init_call_309fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_307 = y_307;
F->lval_308 = lval_308;
F->link_1317 = NULL;
F->link_1317 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P802)rt_nil_check(F->y_307)).level > ((rt_int)0LL))) {
F->link_1317 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1319 = ((rt_int)1LL), hi1320 = rt_sub(g_cur_level_845, (*(P802)rt_nil_check(F->y_307)).level);
for (rt_int it1321 = lo1319; it1321 <= hi1320; it1321++) {
F->i_1318 = it1321;
F->link_1317 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->link_1317))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1317 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->link_1317))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_307)).cname))->all), rt_str("(", 1)), (((P785)rt_nil_check(F->link_1317))->all)), rt_str("&", 1)), (*F->lval_308)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_311(P798 t_310) {
  struct f_needs_fin_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_310 = t_310;
if ((F->t_310 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_310)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_310)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_311((*(P798)rt_nil_check(F->t_310)).under);
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_310)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_311((*(P798)rt_nil_check(F->t_310)).elem);
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_310)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->t_310)).kind == (((rt_int)17LL))))) {
F->f_1322 = NULL;
F->f_1322 = (*(P798)rt_nil_check(F->t_310)).fields;
while ((F->f_1322 != NULL)) {
if (f_needs_fin_311((*(P800)rt_nil_check(F->f_1322)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1322 = (*(P800)rt_nil_check(F->f_1322)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_314(rstr *lval_312, P798 t_313) {
  struct f_fin_code_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_312 = lval_312;
F->t_313 = t_313;
F->r_1323 = NULL;
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P798)rt_nil_check(F->t_313)).finalp != NULL)) {
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_309((*(P798)rt_nil_check(F->t_313)).finalp, &(*F->lval_312)), rt_str(" ", 1)); b_; }));
}
if ((((*(P798)rt_nil_check(F->t_313)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_313)).tparams == NULL))) {
F->result_ = rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), f_fin_code_314(&(*F->lval_312), (*(P798)rt_nil_check(F->t_313)).under));
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_313)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_312), rt_str(".all", 4)); b_; }), (*(P798)rt_nil_check(F->t_313)).under));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_313)).kind == (((rt_int)6LL))) && f_needs_fin_311((*(P798)rt_nil_check(F->t_313)).elem))) {
F->i_1324 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), rt_str("for (rt_int ", 12)), F->i_1324), rt_str(" = 0; ", 6)), F->i_1324), rt_str(" < ", 3)), f_acnt_238(F->t_313, &(*F->lval_312))), rt_str("; ", 2)), F->i_1324), rt_str("++) { ", 6)), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_312), rt_str(".p[", 3)), F->i_1324), rt_str("]", 1)); b_; }), (*(P798)rt_nil_check(F->t_313)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_313)).kind == (((rt_int)7LL)))) {
F->f_1325 = NULL;
F->f_1325 = (*(P798)rt_nil_check(F->t_313)).fields;
while ((F->f_1325 != NULL)) {
if (f_needs_fin_311((*(P800)rt_nil_check(F->f_1325)).t)) {
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_312), rt_str(".", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1325)).name))->all))); b_; }), (*(P800)rt_nil_check(F->f_1325)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1325 = (*(P800)rt_nil_check(F->f_1325)).next;
}
} else if (((*(P798)rt_nil_check(F->t_313)).kind == (((rt_int)17LL)))) {
F->f_1326 = NULL;
F->f_1326 = (*(P798)rt_nil_check(F->t_313)).fields;
F->i_1327 = ((rt_int)0LL);
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), rt_str("switch (", 8)), (*F->lval_312)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1326 != NULL)) {
if (f_needs_fin_311((*(P800)rt_nil_check(F->f_1326)).t)) {
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), rt_str(" case ", 6)), f_itos_7(F->i_1327)), rt_str(": ", 2)), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_312), rt_str(".u.", 3)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1326)).name))->all))); b_; }), (*(P800)rt_nil_check(F->f_1326)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1327 = rt_add(F->i_1327, ((rt_int)1LL));
F->f_1326 = (*(P800)rt_nil_check(F->f_1326)).next;
}
F->r_1323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_1323))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P785)rt_nil_check(F->r_1323))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_tparam_type_317(P798 t_315, rstr *name_316) {
  struct f_tparam_type_317fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
F->name_316 = name_316;
F->z_1328 = NULL;
F->z_1328 = (*(P798)rt_nil_check(F->t_315)).tpsyms;
while ((F->z_1328 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->z_1328)).name))->all), (*F->name_316))) {
F->result_ = (*(P802)rt_nil_check(F->z_1328)).t;
goto ret_;
}
F->z_1328 = (*(P802)rt_nil_check(F->z_1328)).mnext;
}
F->result_ = g_ty_int_871;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_321(rstr *lval_318, P798 t_319, P794 c_320) {
  struct f_make_storage_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_318 = lval_318;
F->t_319 = t_319;
F->c_320 = c_320;
if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)15LL)))) {
F->p_1329 = NULL;
F->p_1329 = (*(P798)rt_nil_check(F->t_319)).tparams;
F->a_1330 = NULL;
F->a_1330 = (*(P794)rt_nil_check(F->c_320)).args;
F->uc_1331 = NULL;
F->ut_1332 = NULL;
F->at_1333 = NULL;
if ((f_list_len_67(F->a_1330) != f_list_len_67(F->p_1329))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_319)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1329))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1329 != NULL)) {
F->pt_1334 = f_tparam_type_317(F->t_319, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1329)).name))->all));
F->v_1335 = rt_str_copy(f_gexpr_637(F->a_1330, F->pt_1334, &F->at_1333));
f_check_type_221(F->at_1333, F->pt_1334, (*(P792)rt_nil_check(F->a_1330)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".p_", 3)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1329)).name))->all))), rt_str(" = ", 3)), F->v_1335), rt_str(";", 1)); b_; }));
F->p_1329 = (*(P792)rt_nil_check(F->p_1329)).next;
F->a_1330 = (*(P792)rt_nil_check(F->a_1330)).next;
}
{
F->saved_1336 = NULL;
F->saved_1336 = g_psub_849;
F->p_1329 = (*(P798)rt_nil_check(F->t_319)).tparams;
while ((F->p_1329 != NULL)) {
F->l1_1337 = NULL;
F->l2_1338 = NULL;
{ R797 *cell1339 = rt_alloc(sizeof(R797));
(*cell1339).s = NULL;
(*cell1339).next = NULL;
F->l1_1337 = cell1339;
}
{ R797 *cell1340 = rt_alloc(sizeof(R797));
(*cell1340).s = NULL;
(*cell1340).next = NULL;
F->l2_1338 = cell1340;
}
(*(P796)rt_nil_check(F->l1_1337)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1329)).name))->all))), rt_str("@", 1)); b_; }));
(*(P796)rt_nil_check(F->l2_1338)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".p_", 3)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1329)).name))->all))); b_; }));
(*(P796)rt_nil_check(F->l1_1337)).next = F->l2_1338;
(*(P796)rt_nil_check(F->l2_1338)).next = g_psub_849;
g_psub_849 = F->l1_1337;
F->p_1329 = (*(P792)rt_nil_check(F->p_1329)).next;
}
if (((*(P798)rt_nil_check(F->t_319)).tparams == NULL)) {
f_init_storage_306(&(*F->lval_318), (*(P798)rt_nil_check(F->t_319)).under, (*(P798)rt_nil_check(F->t_319)).elemcons);
} else {
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_318), rt_str(".all", 4)); b_; }), (*(P798)rt_nil_check(F->t_319)).under, (*(P798)rt_nil_check(F->t_319)).elemcons);
}
g_psub_849 = F->saved_1336;
}
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)12LL)))) {
if (((*(P794)rt_nil_check(F->c_320)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_318), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_318)), rt_str(", ", 2)), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_320)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_223((*(P798)rt_nil_check(F->t_319)).elem)), rt_str("), ", 3)), f_mcopy_345((*(P798)rt_nil_check(F->t_319)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_318)), rt_str(");", 2)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_318), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_318), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)5LL)))) {
if (((*(P794)rt_nil_check(F->c_320)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(" = rt_str_new(", 14)), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_320)).slen))->all))), rt_str(");", 2)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)6LL)))) {
if (((*(P794)rt_nil_check(F->c_320)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1342 = ((rt_int)1LL), hi1343 = (*(P798)rt_nil_check(F->t_319)).ndim;
for (rt_int it1344 = lo1342; it1344 <= hi1343; it1344++) {
F->k_1341 = it1344;
if ((f_cons_lo_241(F->c_320, F->k_1341) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".", 1)), f_dim_lo_231(F->k_1341)), rt_str(" = ", 3)), f_subst_298(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P785)rt_nil_check(f_cons_lo_241(F->c_320, F->k_1341)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_318)), rt_str(".", 1)), f_dim_hi_233(F->k_1341)), rt_str(" = ", 3)), f_subst_298(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P785)rt_nil_check(f_cons_hi_244(F->c_320, F->k_1341)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P798)rt_nil_check(F->t_319)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".lo2 = ", 7)), (*F->lval_318)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_223((*(P798)rt_nil_check(F->t_319)).elem)), rt_str(") * (size_t)", 12)), f_acnt_238(F->t_319, &(*F->lval_318))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)5LL))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)6LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)7LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)15LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)8LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)12LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)13LL)))) || ((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_319)).elem)).kind == (((rt_int)14LL))))) {
F->i_1345 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1345), rt_str(" = 0; ", 6)), F->i_1345), rt_str(" < ", 3)), f_acnt_238(F->t_319, &(*F->lval_318))), rt_str("; ", 2)), F->i_1345), rt_str("++) {", 5)); b_; }));
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".p[", 3)), F->i_1345), rt_str("]", 1)); b_; }), (*(P798)rt_nil_check(F->t_319)).elem, (*(P798)rt_nil_check(F->t_319)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)7LL)))) {
F->f_1346 = NULL;
F->f_1346 = (*(P798)rt_nil_check(F->t_319)).fields;
while ((F->f_1346 != NULL)) {
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1346)).name))->all))); b_; }), (*(P800)rt_nil_check(F->f_1346)).t, (*(P800)rt_nil_check(F->f_1346)).c);
F->f_1346 = (*(P800)rt_nil_check(F->f_1346)).next;
}
} else if (((*(P798)rt_nil_check(F->t_319)).kind == (((rt_int)17LL)))) {
if (((F->c_320 != NULL) && (*(P794)rt_nil_check(F->c_320)).hasm)) {
F->f_1347 = NULL;
F->f_1347 = (*(P798)rt_nil_check(F->t_319)).fields;
{ rt_int lo1349 = ((rt_int)1LL), hi1350 = (*(P794)rt_nil_check(F->c_320)).mlo;
for (rt_int it1351 = lo1349; it1351 <= hi1350; it1351++) {
F->i_1348 = it1351;
F->f_1347 = (*(P800)rt_nil_check(F->f_1347)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".tag = ", 7)), f_itos_7((*(P794)rt_nil_check(F->c_320)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_318), rt_str(".u.", 3)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1347)).name))->all))); b_; }), (*(P800)rt_nil_check(F->f_1347)).t, (*(P800)rt_nil_check(F->f_1347)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_318), rt_str(".tag = -1;", 10)); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_324(P792 e_322, int *ok_323) {
  struct f_manifest_324fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_322 = e_322;
F->ok_323 = ok_323;
F->ok_323v = *F->ok_323;
F->v_1352 = NULL;
F->v_1352 = f_meval_333(F->e_322, &F->ok_323v);
if ((F->ok_323v && ((*(P811)rt_nil_check(F->v_1352)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P811)rt_nil_check(F->v_1352)).i;
goto ret_;
}
F->ok_323v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_323) = F->ok_323v;
  RT_FPOP();
  return F->result_;
}

static P811 f_mk_mval_327(rt_int kind_325, rt_int i_326) {
  struct f_mk_mval_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_325 = kind_325;
F->i_326 = i_326;
F->v_1353 = NULL;
{ R812 *cell1354 = rt_alloc(sizeof(R812));
(*cell1354).s = NULL;
(*cell1354).t = NULL;
F->v_1353 = cell1354;
}
(*(P811)rt_nil_check(F->v_1353)).kind = F->kind_325;
(*(P811)rt_nil_check(F->v_1353)).i = F->i_326;
F->result_ = F->v_1353;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_330(rt_int a_328, rt_int b_329) {
  struct f_ipow_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_328 = a_328;
F->b_329 = b_329;
F->r_1355 = ((rt_int)1LL);
{ rt_int lo1357 = ((rt_int)1LL), hi1358 = F->b_329;
for (rt_int it1359 = lo1357; it1359 <= hi1358; it1359++) {
F->i_1356 = it1359;
F->r_1355 = rt_mul(F->r_1355, F->a_328);
}
}
F->result_ = F->r_1355;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P811 f_meval_333(P792 e_331, int *ok_332) {
  struct f_meval_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_331 = e_331;
F->ok_332 = ok_332;
F->ok_332v = *F->ok_332;
F->a_1360 = NULL;
F->b_1361 = NULL;
F->op_1363 = NULL;
F->ok_332v = 0;
if ((F->e_331 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)1LL)))) {
F->ok_332v = 1;
F->result_ = f_mk_mval_327((((rt_int)1LL)), (*(P792)rt_nil_check(F->e_331)).ival);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)5LL)))) {
F->ok_332v = 1;
F->result_ = f_mk_mval_327((((rt_int)2LL)), (*(P792)rt_nil_check(F->e_331)).ival);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)2LL)))) {
F->ok_332v = 1;
F->result_ = f_mk_mval_327((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)3LL)))) {
F->ok_332v = 1;
F->a_1360 = f_mk_mval_327((((rt_int)5LL)), ((rt_int)0LL));
(*(P811)rt_nil_check(F->a_1360)).s = (*(P792)rt_nil_check(F->e_331)).name;
F->result_ = F->a_1360;
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_251((*(P798)rt_nil_check(g_ty_ascii_874)).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all)) >= ((rt_int)0LL))) {
F->ok_332v = 1;
F->a_1360 = f_mk_mval_327((((rt_int)4LL)), f_lit_index_251((*(P798)rt_nil_check(g_ty_ascii_874)).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all)));
(*(P811)rt_nil_check(F->a_1360)).t = g_ty_ascii_874;
(*(P811)rt_nil_check(F->a_1360)).s = (*(P792)rt_nil_check(F->e_331)).name;
F->result_ = F->a_1360;
goto ret_;
}
F->a_1360 = f_mk_mval_327((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P811)rt_nil_check(F->a_1360)).s = (*(P792)rt_nil_check(F->e_331)).name;
F->ok_332v = 1;
F->result_ = F->a_1360;
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_333((*(P792)rt_nil_check(F->e_331)).a, &F->ok_332v);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)7LL)))) {
F->y_1364 = NULL;
F->y_1364 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all));
if ((((F->y_1364 != NULL) && ((*(P802)rt_nil_check(F->y_1364)).kind == (((rt_int)2LL)))) && ((*(P802)rt_nil_check(F->y_1364)).mv != NULL))) {
F->ok_332v = 1;
F->result_ = (*(P802)rt_nil_check(F->y_1364)).mv;
goto ret_;
} else if ((((F->y_1364 != NULL) && ((*(P802)rt_nil_check(F->y_1364)).kind == (((rt_int)2LL)))) && (*(P802)rt_nil_check(F->y_1364)).hasmv)) {
F->ok_332v = 1;
F->result_ = f_mk_mval_327((((rt_int)1LL)), (*(P802)rt_nil_check(F->y_1364)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_331)).kind == (((rt_int)8LL)))) {
F->a_1360 = f_meval_333((*(P792)rt_nil_check(F->e_331)).a, &F->ok_332v);
if ((!F->ok_332v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all), rt_str("NOT", 3)) && ((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P811)rt_nil_check(F->a_1360)).i));
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all), rt_str("-", 1)) && ((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_neg((*(P811)rt_nil_check(F->a_1360)).i));
goto ret_;
} else if (((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all), rt_str("+", 1)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all), rt_str("-", 1))) && (((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)1LL))) || ((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1360;
goto ret_;
}
F->ok_332v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P792)rt_nil_check(F->e_331)).kind != (((rt_int)9LL))) || f_user_defined_343(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_331)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1363 = (*(P792)rt_nil_check(F->e_331)).name;
F->a_1360 = f_meval_333((*(P792)rt_nil_check(F->e_331)).a, &F->ok_332v);
F->b_1361 = f_meval_333((*(P792)rt_nil_check(F->e_331)).b, &F->ok2_1362);
F->ok_332v = (F->ok_332v && F->ok2_1362);
if ((!F->ok_332v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_332v = 0;
if ((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)1LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)1LL))))) {
F->ok_332v = 1;
if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_add((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_sub((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_mul((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("DIV", 3)) && ((*(P811)rt_nil_check(F->b_1361)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_div((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("MOD", 3)) && ((*(P811)rt_nil_check(F->b_1361)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), rt_mod((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("**", 2)) && ((*(P811)rt_nil_check(F->b_1361)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_327((((rt_int)1LL)), f_ipow_330((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i == (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i != (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i < (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i <= (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i > (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i >= (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
}
} else if (((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)3LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)3LL)))) && (((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("+", 1)) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("-", 1))) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("*", 1))) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("/", 1))))) {
F->ok_332v = 1;
F->result_ = F->a_1360;
goto ret_;
} else if (((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)3LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)1LL)))) && rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("**", 2)))) {
F->ok_332v = 1;
F->result_ = F->a_1360;
goto ret_;
} else if ((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)2LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)2LL))))) {
F->ok_332v = 1;
if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), rt_mul((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337((rt_add((*(P811)rt_nil_check(F->a_1360)).i, (*(P811)rt_nil_check(F->b_1361)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("XOR", 3)) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i != (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(((*(P811)rt_nil_check(F->a_1360)).i == (*(P811)rt_nil_check(F->b_1361)).i)));
goto ret_;
}
} else if (((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)4LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)4LL)))) && (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1)) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("/=", 2))))) {
F->ok_332v = 1;
if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(rt_str_eq((((P785)rt_nil_check((*(P811)rt_nil_check(F->a_1360)).s))->all), (((P785)rt_nil_check((*(P811)rt_nil_check(F->b_1361)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337((!rt_str_eq((((P785)rt_nil_check((*(P811)rt_nil_check(F->a_1360)).s))->all), (((P785)rt_nil_check((*(P811)rt_nil_check(F->b_1361)).s))->all)))));
goto ret_;
} else if (((((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)5LL))) && ((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)5LL)))) && (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1)) || rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("/=", 2))))) {
F->ok_332v = 1;
if (rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337(rt_str_eq((((P785)rt_nil_check((*(P811)rt_nil_check(F->a_1360)).s))->all), (((P785)rt_nil_check((*(P811)rt_nil_check(F->b_1361)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_327((((rt_int)2LL)), f_bool_i_337((!rt_str_eq((((P785)rt_nil_check((*(P811)rt_nil_check(F->a_1360)).s))->all), (((P785)rt_nil_check((*(P811)rt_nil_check(F->b_1361)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P785)rt_nil_check(F->op_1363))->all), rt_str("&", 1)) && (((*(P811)rt_nil_check(F->a_1360)).kind == (((rt_int)5LL))) || ((*(P811)rt_nil_check(F->a_1360)).t == g_ty_ascii_874))) && (((*(P811)rt_nil_check(F->b_1361)).kind == (((rt_int)5LL))) || ((*(P811)rt_nil_check(F->b_1361)).t == g_ty_ascii_874)))) {
F->r_1365 = NULL;
F->r_1365 = f_mk_mval_327((((rt_int)5LL)), ((rt_int)0LL));
F->ok_332v = 1;
(*(P811)rt_nil_check(F->r_1365)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_339(F->a_1360), f_mstr_339(F->b_1361)); b_; }));
F->result_ = F->r_1365;
goto ret_;
}
F->ok_332v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_332) = F->ok_332v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_335(int b_334) {
  struct f_bool_text_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_334 = b_334;
if (F->b_334) {
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

static rt_int f_bool_i_337(int b_336) {
  struct f_bool_i_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_336 = b_336;
if (F->b_336) {
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

static rstr f_mstr_339(P811 v_338) {
  struct f_mstr_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_338 = v_338;
if (((*(P811)rt_nil_check(F->v_338)).kind == (((rt_int)5LL)))) {
F->result_ = (((P785)rt_nil_check((*(P811)rt_nil_check(F->v_338)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_341((*(P811)rt_nil_check(F->v_338)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_341(rt_int i_340) {
  struct f_ascii_char_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_340 = i_340;
F->printable_1366 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_340 >= ((rt_int)32LL)) && (F->i_340 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1366, rt_sub(F->i_340, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_343(rstr *op_342) {
  struct f_user_defined_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_342 = op_342;
F->y_1367 = NULL;
F->y_1367 = f_lookup_154(&(*F->op_342));
F->result_ = ((F->y_1367 != NULL) && (((*(P802)rt_nil_check(F->y_1367)).kind == (((rt_int)3LL))) || ((*(P802)rt_nil_check(F->y_1367)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_345(P798 t_344) {
  struct f_mcopy_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_344 = t_344;
F->ct_1368 = rt_str_copy(f_ctype_223(F->t_344));
F->name_1369 = rt_str_new(rt_add(((rt_int)((F->ct_1368).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1369, rt_str_cat(rt_str("mc_", 3), F->ct_1368));
F->l_1370 = NULL;
if ((!f_seen_name_366(g_mcopies_870, &F->name_1369))) {
{ R797 *cell1371 = rt_alloc(sizeof(R797));
(*cell1371).s = NULL;
(*cell1371).next = NULL;
F->l_1370 = cell1371;
}
(*(P796)rt_nil_check(F->l_1370)).s = f_mk_3(&F->name_1369);
(*(P796)rt_nil_check(F->l_1370)).next = g_mcopies_870;
g_mcopies_870 = F->l_1370;
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1369), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1369), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1368), rt_str(" *)d = ", 7)), f_copy_code_355(F->t_344, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1368), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1369;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_347(P798 t_346) {
  struct f_composite_347fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_346 = t_346;
F->result_ = (((((*(P798)rt_nil_check(F->t_346)).kind == (((rt_int)6LL))) || ((*(P798)rt_nil_check(F->t_346)).kind == (((rt_int)7LL)))) || ((*(P798)rt_nil_check(F->t_346)).kind == (((rt_int)17LL)))) || (((*(P798)rt_nil_check(F->t_346)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_346)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_352(rstr *lval_348, P798 t_349, rstr *v_350, P794 c_351) {
  struct f_assign_code_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_348 = lval_348;
F->t_349 = t_349;
F->v_350 = v_350;
F->c_351 = c_351;
if ((((*(P798)rt_nil_check(F->t_349)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_349)).tparams == NULL))) {
F->result_ = f_assign_code_352(&(*F->lval_348), (*(P798)rt_nil_check(F->t_349)).under, &(*F->v_350), F->c_351);
goto ret_;
}
if (((((*(P798)rt_nil_check(F->t_349)).kind == (((rt_int)17LL))) && (F->c_351 != NULL)) && ((*(P794)rt_nil_check(F->c_351)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_223(F->t_349)), rt_str(" u_ = ", 6)), (*F->v_350)), rt_str("; if (u_.tag != (", 17)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_351)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_223(F->t_349)), rt_str("(&", 2)), (*F->lval_348)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_347(F->t_349)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_223(F->t_349)), rt_str("(&", 2)), (*F->lval_348)), rt_str(", ", 2)), (*F->v_350)), rt_str(");", 2));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_349)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_348)), rt_str(", ", 2)), (*F->v_350)), rt_str(");", 2));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_349)).kind == (((rt_int)6LL))) || ((*(P798)rt_nil_check(F->t_349)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_223(F->t_349)), rt_str("(&", 2)), (*F->lval_348)), rt_str(", ", 2)), (*F->v_350)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_348), rt_str(" = ", 3)), f_checked_204(F->t_349, F->c_351, &(*F->v_350))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_355(P798 t_353, rstr *v_354) {
  struct f_copy_code_355fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
F->v_354 = v_354;
if ((((*(P798)rt_nil_check(F->t_353)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_353)).tparams == NULL))) {
F->result_ = f_copy_code_355((*(P798)rt_nil_check(F->t_353)).under, &(*F->v_354));
goto ret_;
}
if (f_composite_347(F->t_353)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_223(F->t_353)), rt_str("(", 1)), (*F->v_354)), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_353)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_354)), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_353)).kind == (((rt_int)6LL))) || ((*(P798)rt_nil_check(F->t_353)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_223(F->t_353)), rt_str("(", 1)), (*F->v_354)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_354);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_359(P798 t_356, rstr *a_357, rstr *b_358) {
  struct f_eq_code_359fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_356 = t_356;
F->a_357 = a_357;
F->b_358 = b_358;
if ((((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_356)).tparams == NULL))) {
F->result_ = f_eq_code_359((*(P798)rt_nil_check(F->t_356)).under, &(*F->a_357), &(*F->b_358));
goto ret_;
}
if (f_composite_347(F->t_356)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_223(F->t_356)), rt_str("(", 1)), (*F->a_357)), rt_str(", ", 2)), (*F->b_358)), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_357)), rt_str(", ", 2)), (*F->b_358)), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_357)), rt_str(" == ", 4)), (*F->b_358)), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_357)), rt_str(" == ", 4)), (*F->b_358)), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_357)), rt_str(", ", 2)), (*F->b_358)), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)6LL))) || ((*(P798)rt_nil_check(F->t_356)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_223(F->t_356)), rt_str("(", 1)), (*F->a_357)), rt_str(", ", 2)), (*F->b_358)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_357)), rt_str(" == ", 4)), (*F->b_358)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_363(rstr *lval_360, P798 t_361, rstr *v_362) {
  struct f_elem_assign_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_360 = lval_360;
F->t_361 = t_361;
F->v_362 = v_362;
F->result_ = f_assign_code_352(&(*F->lval_360), F->t_361, &(*F->v_362), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_366(P796 l_364, rstr *s_365) {
  struct f_seen_name_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_364 = l_364;
F->s_365 = s_365;
F->p_1372 = NULL;
F->p_1372 = F->l_364;
while ((F->p_1372 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P796)rt_nil_check(F->p_1372)).s))->all), (*F->s_365))) {
F->result_ = 1;
goto ret_;
}
F->p_1372 = (*(P796)rt_nil_check(F->p_1372)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_367(void) {
  struct f_emit_helpers_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1373 = NULL;
F->t_1374 = NULL;
F->t_1374 = g_all_types_833;
F->done_1375 = NULL;
while ((F->t_1374 != NULL)) {
if ((f_composite_347(F->t_1374) && (!f_seen_name_366(F->done_1375, &(((P785)rt_nil_check((*(P798)rt_nil_check(F->t_1374)).cname))->all))))) {
F->l_1376 = NULL;
F->c_1377 = rt_str_new(((rt_int)(((((P785)rt_nil_check((*(P798)rt_nil_check(F->t_1374)).cname))->all)).len)));
rt_str_assign(&F->c_1377, (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_1374)).cname))->all));
{ R797 *cell1378 = rt_alloc(sizeof(R797));
(*cell1378).s = NULL;
(*cell1378).next = NULL;
F->l_1376 = cell1378;
}
(*(P796)rt_nil_check(F->l_1376)).s = (*(P798)rt_nil_check(F->t_1374)).cname;
(*(P796)rt_nil_check(F->l_1376)).next = F->done_1375;
F->done_1375 = F->l_1376;
f_put_27(g_out_helpers_836, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1377), rt_str("(", 1)), F->c_1377), rt_str(" *d, ", 5)), F->c_1377), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_836, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1377), rt_str(" cp_", 4)), F->c_1377), rt_str("(", 1)), F->c_1377), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_836, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1377), rt_str("(", 1)), F->c_1377), rt_str(" a, ", 4)), F->c_1377), rt_str(" b);", 4)); b_; }));
f_helper_bodies_369(F->t_1374);
}
F->t_1374 = (*(P798)rt_nil_check(F->t_1374)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_369(P798 t_368) {
  struct f_helper_bodies_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_368 = t_368;
F->c_1379 = rt_str_new(((rt_int)(((((P785)rt_nil_check((*(P798)rt_nil_check(F->t_368)).cname))->all)).len)));
rt_str_assign(&F->c_1379, (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_368)).cname))->all));
F->b_1380 = NULL;
F->b_1380 = g_out_funcs_839;
if (((*(P798)rt_nil_check(F->t_368)).kind == (((rt_int)6LL)))) {
F->e_1381 = NULL;
F->e_1381 = (*(P798)rt_nil_check(F->t_368)).elem;
F->sizes_1382 = NULL;
F->sizes_1382 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1383 = NULL;
F->bounds_1383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1385 = ((rt_int)1LL), hi1386 = (*(P798)rt_nil_check(F->t_368)).ndim;
for (rt_int it1387 = lo1385; it1387 <= hi1386; it1387++) {
F->k_1384 = it1387;
F->l_1388 = rt_str_copy(f_dim_lo_231(F->k_1384));
F->h_1389 = rt_str_copy(f_dim_hi_233(F->k_1384));
F->sizes_1382 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->sizes_1382))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1388), rt_str(", d->", 5)), F->h_1389), rt_str(") != RT_R_EXT(s.", 16)), F->l_1388), rt_str(", s.", 4)), F->h_1389), rt_str(")", 1)); b_; }));
F->bounds_1383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->bounds_1383))->all), rt_str(" || a.", 6)), F->l_1388), rt_str(" != b.", 6)), F->l_1388), rt_str(" || a.", 6)), F->h_1389), rt_str(" != b.", 6)), F->h_1389); b_; }));
}
}
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" *d, ", 5)), F->c_1379), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P785)rt_nil_check(F->sizes_1382))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_238(F->t_368, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_363(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1381, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_363(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1381, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1379), rt_str(" cp_", 4)), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1379), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_223(F->e_1381)), rt_str(") * (size_t)", 12)), f_acnt_238(F->t_368, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_238(F->t_368, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_355(F->e_1381, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" a, ", 4)), F->c_1379), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P785)rt_nil_check(F->bounds_1383))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_238(F->t_368, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_359(F->e_1381, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P798)rt_nil_check(F->t_368)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" *d, ", 5)), F->c_1379), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P798)rt_nil_check(F->t_368)).under) && ((*(P798)rt_nil_check(F->t_368)).elemcons != NULL)) && ((*(P794)rt_nil_check((*(P798)rt_nil_check(F->t_368)).elemcons)).lo != NULL))) {
F->saved_1390 = NULL;
F->saved_1390 = g_psub_849;
F->p_1391 = NULL;
F->p_1391 = (*(P798)rt_nil_check(F->t_368)).tparams;
while ((F->p_1391 != NULL)) {
F->l1_1392 = NULL;
F->l2_1393 = NULL;
{ R797 *cell1394 = rt_alloc(sizeof(R797));
(*cell1394).s = NULL;
(*cell1394).next = NULL;
F->l1_1392 = cell1394;
}
{ R797 *cell1395 = rt_alloc(sizeof(R797));
(*cell1395).s = NULL;
(*cell1395).next = NULL;
F->l2_1393 = cell1395;
}
(*(P796)rt_nil_check(F->l1_1392)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1391)).name))->all))), rt_str("@", 1)); b_; }));
(*(P796)rt_nil_check(F->l2_1393)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1391)).name))->all))); b_; }));
(*(P796)rt_nil_check(F->l1_1392)).next = F->l2_1393;
(*(P796)rt_nil_check(F->l2_1393)).next = g_psub_849;
g_psub_849 = F->l1_1392;
F->p_1391 = (*(P792)rt_nil_check(F->p_1391)).next;
}
if (((*(P798)rt_nil_check((*(P798)rt_nil_check(F->t_368)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check((*(P798)rt_nil_check(F->t_368)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check((*(P798)rt_nil_check(F->t_368)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check((*(P798)rt_nil_check(F->t_368)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_298(&(((P785)rt_nil_check((*(P794)rt_nil_check((*(P798)rt_nil_check(F->t_368)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_849 = F->saved_1390;
} else {
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_363(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P798)rt_nil_check(F->t_368)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1379), rt_str(" cp_", 4)), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" s) { s.all = ", 14)), f_copy_code_355((*(P798)rt_nil_check(F->t_368)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" a, ", 4)), F->c_1379), rt_str(" b) { return ", 13)), f_eq_code_359((*(P798)rt_nil_check(F->t_368)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P798)rt_nil_check(F->t_368)).kind == (((rt_int)17LL)))) {
F->f_1396 = NULL;
F->f_1396 = (*(P798)rt_nil_check(F->t_368)).fields;
F->i_1397 = ((rt_int)0LL);
F->cases_as_1398 = NULL;
F->cases_as_1398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1399 = NULL;
F->cases_cp_1399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1400 = NULL;
F->cases_eq_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1396 != NULL)) {
F->fn_1401 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1396)).name))->all))));
F->cases_as_1398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->cases_as_1398))->all), rt_str(" case ", 6)), f_itos_7(F->i_1397)), rt_str(": d->", 5)), F->fn_1401), rt_str(" = ", 3)), f_copy_code_355((*(P800)rt_nil_check(F->f_1396)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1401); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->cases_cp_1399))->all), rt_str(" case ", 6)), f_itos_7(F->i_1397)), rt_str(": d.", 4)), F->fn_1401), rt_str(" = ", 3)), f_copy_code_355((*(P800)rt_nil_check(F->f_1396)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1401); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->cases_eq_1400))->all), rt_str(" case ", 6)), f_itos_7(F->i_1397)), rt_str(": return ", 9)), f_eq_code_359((*(P800)rt_nil_check(F->f_1396)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1401); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1401); b_; }))), rt_str(";", 1)); b_; }));
F->i_1397 = rt_add(F->i_1397, ((rt_int)1LL));
F->f_1396 = (*(P800)rt_nil_check(F->f_1396)).next;
}
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" *d, ", 5)), F->c_1379), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P785)rt_nil_check(F->cases_as_1398))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1379), rt_str(" cp_", 4)), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1379), rt_str(" d = s; switch (s.tag) {", 24)), (((P785)rt_nil_check(F->cases_cp_1399))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" a, ", 4)), F->c_1379), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P785)rt_nil_check(F->cases_eq_1400))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1402 = NULL;
F->f_1402 = (*(P798)rt_nil_check(F->t_368)).fields;
F->conds_1403 = NULL;
F->conds_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" *d, ", 5)), F->c_1379), rt_str(" s) {", 5)); b_; }));
while ((F->f_1402 != NULL)) {
F->fn_1404 = rt_str_copy(f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1402)).name))->all)));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_363(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1404); b_; }), (*(P800)rt_nil_check(F->f_1402)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1404); b_; }))); b_; }));
F->f_1402 = (*(P800)rt_nil_check(F->f_1402)).next;
}
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1379), rt_str(" cp_", 4)), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1379), rt_str(" d = s;", 7)); b_; }));
F->f_1402 = (*(P798)rt_nil_check(F->t_368)).fields;
while ((F->f_1402 != NULL)) {
F->fn_1405 = rt_str_copy(f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1402)).name))->all)));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1405), rt_str(" = ", 3)), f_copy_code_355((*(P800)rt_nil_check(F->f_1402)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1405); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->conds_1403))->all), rt_str(" && ", 4)), f_eq_code_359((*(P800)rt_nil_check(F->f_1402)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1405); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1405); b_; }))); b_; }));
F->f_1402 = (*(P800)rt_nil_check(F->f_1402)).next;
}
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1379), rt_str("(", 1)), F->c_1379), rt_str(" a, ", 4)), F->c_1379), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P785)rt_nil_check(F->conds_1403))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1380, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_371(P792 elems_370) {
  struct f_declare_body_371fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_370 = elems_370;
F->e_1406 = NULL;
F->e_1406 = F->elems_370;
while ((F->e_1406 != NULL)) {
if ((((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)41LL))) && ((*(P792)rt_nil_check(F->e_1406)).flag == ((rt_int)0LL)))) {
f_manifest_const_373(F->e_1406);
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)47LL)))) {
f_gen_capsule_381(F->e_1406);
} else if (((((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)48LL))) && ((*(P792)rt_nil_check(F->e_1406)).flag != ((rt_int)1LL))) && ((*(P792)rt_nil_check(F->e_1406)).flag != ((rt_int)3LL)))) {
f_gen_expose_398(F->e_1406);
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)49LL)))) {
F->y_1407 = NULL;
F->y_1407 = f_new_sym_172((((rt_int)7LL)), (*(P792)rt_nil_check(F->e_1406)).name);
(*(P802)rt_nil_check(F->y_1407)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1407, (*(P792)rt_nil_check(F->e_1406)).line);
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1407)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_841, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1407)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)42LL)))) {
F->y_1408 = NULL;
F->y_1408 = f_new_sym_172((((rt_int)6LL)), (*(P792)rt_nil_check(F->e_1406)).name);
(*(P802)rt_nil_check(F->y_1408)).st = (*(P792)rt_nil_check(F->e_1406)).a;
(*(P802)rt_nil_check(F->y_1408)).decl = F->e_1406;
f_define_159(F->y_1408, (*(P792)rt_nil_check(F->e_1406)).line);
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)44LL)))) {
F->y_1409 = NULL;
F->y_1409 = f_new_sym_172((((rt_int)5LL)), (*(P792)rt_nil_check(F->e_1406)).name);
F->t_1410 = NULL;
F->t_1410 = f_new_typ_174((((rt_int)8LL)));
(*(P798)rt_nil_check(F->t_1410)).name = (*(P792)rt_nil_check(F->e_1406)).name;
(*(P798)rt_nil_check(F->t_1410)).decl = F->e_1406;
(*(P802)rt_nil_check(F->y_1409)).t = F->t_1410;
f_define_159(F->y_1409, (*(P792)rt_nil_check(F->e_1406)).line);
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)43LL)))) {
F->y_1411 = NULL;
F->y_1411 = f_new_sym_172((((rt_int)5LL)), (*(P792)rt_nil_check(F->e_1406)).name);
(*(P802)rt_nil_check(F->y_1411)).st = (*(P792)rt_nil_check(F->e_1406)).a;
(*(P802)rt_nil_check(F->y_1411)).decl = F->e_1406;
f_define_159(F->y_1411, (*(P792)rt_nil_check(F->e_1406)).line);
}
F->e_1406 = (*(P792)rt_nil_check(F->e_1406)).next;
}
F->e_1406 = F->elems_370;
while ((F->e_1406 != NULL)) {
if (((((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)45LL))) || ((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)46LL)))) || ((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)50LL))))) {
F->y_1412 = NULL;
f_declare_subprogram_422(F->e_1406);
F->y_1412 = f_lookup_decl_156(F->e_1406);
(*(P802)rt_nil_check(F->y_1412)).home = F->elems_370;
} else if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)51LL)))) {
F->g_1413 = NULL;
F->g_1413 = f_new_sym_172((((rt_int)10LL)), (*(P792)rt_nil_check(F->e_1406)).name);
(*(P802)rt_nil_check(F->g_1413)).decl = F->e_1406;
(*(P802)rt_nil_check(F->g_1413)).level = g_cur_level_845;
(*(P802)rt_nil_check(F->g_1413)).owner = g_func_sym_856;
(*(P802)rt_nil_check(F->g_1413)).gctx = g_fctx_846;
f_define_159(F->g_1413, (*(P792)rt_nil_check(F->e_1406)).line);
}
F->e_1406 = (*(P792)rt_nil_check(F->e_1406)).next;
}
F->e_1406 = F->elems_370;
{
F->snap_1414 = NULL;
while ((F->e_1406 != NULL)) {
if (((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)51LL)))) {
if ((F->snap_1414 == NULL)) {
{ P806 cell1415 = rt_alloc(sizeof *cell1415);
rt_int pv1416 = (((rt_int)4093LL));
cell1415->p_n = pv1416;
cell1415->all.lo = ((rt_int)0LL); cell1415->all.hi = pv1416;
cell1415->all.lo2 = cell1415->all.hi2 = 1;
cell1415->all.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(cell1415->all)) + 1);
for (rt_int i1417 = 0; i1417 < (RT_CNT(cell1415->all)); i1417++) {
cell1415->all.p[i1417] = NULL;
}
F->snap_1414 = cell1415;
}
{ rt_int lo1419 = ((rt_int)0LL), hi1420 = (((rt_int)4093LL));
for (rt_int it1421 = lo1419; it1421 <= hi1420; it1421++) {
F->i_1418 = it1421;
(((P806)rt_nil_check(F->snap_1414))->all).p[(rt_index(F->i_1418, (((P806)rt_nil_check(F->snap_1414))->all).lo, (((P806)rt_nil_check(F->snap_1414))->all).hi) - (((P806)rt_nil_check(F->snap_1414))->all).lo)] = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(F->i_1418, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1422 = NULL;
F->g_1422 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all));
(*(P802)rt_nil_check(F->g_1422)).env = F->snap_1414;
}
}
F->e_1406 = (*(P792)rt_nil_check(F->e_1406)).next;
}
}
F->e_1406 = F->elems_370;
while ((F->e_1406 != NULL)) {
if ((((*(P792)rt_nil_check(F->e_1406)).kind == (((rt_int)45LL))) && (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1423 = NULL;
F->y_1423 = f_lookup_decl_156(F->e_1406);
if (((((F->y_1423 != NULL) && ((*(P802)rt_nil_check(F->y_1423)).params != NULL)) && ((*(P804)rt_nil_check((*(P802)rt_nil_check(F->y_1423)).params)).next == NULL)) && (((*(P798)rt_nil_check((*(P804)rt_nil_check((*(P802)rt_nil_check(F->y_1423)).params)).t)).kind == (((rt_int)15LL))) || ((*(P798)rt_nil_check((*(P804)rt_nil_check((*(P802)rt_nil_check(F->y_1423)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1406)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P798)rt_nil_check((*(P804)rt_nil_check((*(P802)rt_nil_check(F->y_1423)).params)).t)).initp = F->y_1423;
} else {
(*(P798)rt_nil_check((*(P804)rt_nil_check((*(P802)rt_nil_check(F->y_1423)).params)).t)).finalp = F->y_1423;
}
}
}
F->e_1406 = (*(P792)rt_nil_check(F->e_1406)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_373(P792 d_372) {
  struct f_manifest_const_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_372 = d_372;
F->v_1425 = NULL;
F->y_1426 = NULL;
F->t_1427 = NULL;
F->ctext_1428 = NULL;
if (((*(P792)rt_nil_check(F->d_372)).a != NULL)) {
if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->d_372)).a)).kind != (((rt_int)70LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->d_372)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1425 = f_meval_333((*(P792)rt_nil_check(F->d_372)).b, &F->ok_1424);
if ((!F->ok_1424)) {
goto ret_;
}
{
F->saved_1429 = NULL;
F->saved_1429 = g_code_842;
g_code_842 = f_new_buffer_24();
g_trial_869 = rt_add(g_trial_869, ((rt_int)1LL));
{ rt_frame xf1430;
if (RT_TRY(xf1430)) {
F->ctext_1428 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_637((*(P792)rt_nil_check(F->d_372)).b, NULL, &F->t_1427)), rt_str(")", 1)); b_; }));
RT_POP(xf1430);
} else {
RT_POP(xf1430);
int x1431 = rt_xcur;
if (0 || x1431 == ex_compile_error_1) {
F->ok_1424 = 0;
} else {
rt_raise(x1431);
}
}
}
g_trial_869 = rt_sub(g_trial_869, ((rt_int)1LL));
F->ok_1424 = (F->ok_1424 && ((*(P815)rt_nil_check(g_code_842)).head == NULL));
g_code_842 = F->saved_1429;
}
if (((!F->ok_1424) || (((*(P792)rt_nil_check(F->d_372)).a != NULL) && ((*(P798)rt_nil_check(F->t_1427)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P811)rt_nil_check(F->v_1425)).kind == (((rt_int)4LL)))) {
(*(P811)rt_nil_check(F->v_1425)).t = F->t_1427;
(*(P811)rt_nil_check(F->v_1425)).i = f_lit_index_251((*(P798)rt_nil_check(f_base_of_212(F->t_1427))).lits, &(((P785)rt_nil_check((*(P811)rt_nil_check(F->v_1425)).s))->all));
}
(*(P792)rt_nil_check(F->d_372)).flag = ((rt_int)1LL);
F->y_1426 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->d_372)).name);
(*(P802)rt_nil_check(F->y_1426)).t = F->t_1427;
(*(P802)rt_nil_check(F->y_1426)).c = f_new_cons_175();
(*(P802)rt_nil_check(F->y_1426)).mv = F->v_1425;
if (((*(P811)rt_nil_check(F->v_1425)).kind == (((rt_int)1LL)))) {
(*(P802)rt_nil_check(F->y_1426)).mvalue = (*(P811)rt_nil_check(F->v_1425)).i;
(*(P802)rt_nil_check(F->y_1426)).hasmv = 1;
}
(*(P802)rt_nil_check(F->y_1426)).ro_flag = 1;
(*(P802)rt_nil_check(F->y_1426)).access = F->ctext_1428;
f_define_159(F->y_1426, (*(P792)rt_nil_check(F->d_372)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_377(P792 d_374, rstr *name_375, int *ro_376) {
  struct f_exported_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_374 = d_374;
F->name_375 = name_375;
F->ro_376 = ro_376;
F->ro_376v = *F->ro_376;
F->p_1432 = NULL;
F->p_1432 = (*(P792)rt_nil_check(F->d_374)).a;
F->ro_376v = 0;
if (((*(P792)rt_nil_check(F->d_374)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1432 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1432)).name))->all), (*F->name_375))) {
F->ro_376v = ((*(P792)rt_nil_check(F->p_1432)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1432 = (*(P792)rt_nil_check(F->p_1432)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_376) = F->ro_376v;
  RT_FPOP();
  return F->result_;
}

static P802 f_copy_sym_379(P802 y_378) {
  struct f_copy_sym_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_378 = y_378;
F->z_1433 = NULL;
{ R803 *cell1434 = rt_alloc(sizeof(R803));
(*cell1434).name = NULL;
(*cell1434).t = NULL;
(*cell1434).c = NULL;
(*cell1434).access = NULL;
(*cell1434).cname = NULL;
(*cell1434).st = NULL;
(*cell1434).decl = NULL;
(*cell1434).params = NULL;
(*cell1434).result = NULL;
(*cell1434).members = NULL;
(*cell1434).mnext = NULL;
(*cell1434).binds = NULL;
(*cell1434).insts = NULL;
(*cell1434).env = NULL;
(*cell1434).chain = NULL;
(*cell1434).stack = NULL;
(*cell1434).owner = NULL;
(*cell1434).gctx = NULL;
(*cell1434).mv = NULL;
(*cell1434).reqs = NULL;
(*cell1434).home = NULL;
F->z_1433 = cell1434;
}
(*(P802)rt_nil_check(F->z_1433)).kind = (*(P802)rt_nil_check(F->y_378)).kind;
(*(P802)rt_nil_check(F->z_1433)).name = (*(P802)rt_nil_check(F->y_378)).name;
(*(P802)rt_nil_check(F->z_1433)).t = (*(P802)rt_nil_check(F->y_378)).t;
(*(P802)rt_nil_check(F->z_1433)).c = (*(P802)rt_nil_check(F->y_378)).c;
(*(P802)rt_nil_check(F->z_1433)).access = (*(P802)rt_nil_check(F->y_378)).access;
(*(P802)rt_nil_check(F->z_1433)).cname = (*(P802)rt_nil_check(F->y_378)).cname;
(*(P802)rt_nil_check(F->z_1433)).ro_flag = (*(P802)rt_nil_check(F->y_378)).ro_flag;
(*(P802)rt_nil_check(F->z_1433)).mvalue = (*(P802)rt_nil_check(F->y_378)).mvalue;
(*(P802)rt_nil_check(F->z_1433)).hasmv = (*(P802)rt_nil_check(F->y_378)).hasmv;
(*(P802)rt_nil_check(F->z_1433)).st = (*(P802)rt_nil_check(F->y_378)).st;
(*(P802)rt_nil_check(F->z_1433)).decl = (*(P802)rt_nil_check(F->y_378)).decl;
(*(P802)rt_nil_check(F->z_1433)).params = (*(P802)rt_nil_check(F->y_378)).params;
(*(P802)rt_nil_check(F->z_1433)).result = (*(P802)rt_nil_check(F->y_378)).result;
(*(P802)rt_nil_check(F->z_1433)).level = (*(P802)rt_nil_check(F->y_378)).level;
(*(P802)rt_nil_check(F->z_1433)).byref = (*(P802)rt_nil_check(F->y_378)).byref;
(*(P802)rt_nil_check(F->z_1433)).members = (*(P802)rt_nil_check(F->y_378)).members;
(*(P802)rt_nil_check(F->z_1433)).env = (*(P802)rt_nil_check(F->y_378)).env;
F->result_ = F->z_1433;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_381(P792 d_380) {
  struct f_gen_capsule_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_380 = d_380;
F->y_1435 = NULL;
F->y_1435 = f_new_sym_172((((rt_int)8LL)), (*(P792)rt_nil_check(F->d_380)).name);
F->saved_1436 = NULL;
F->saved_1436 = g_suppress_862;
(*(P802)rt_nil_check(F->y_1435)).decl = F->d_380;
if (((*(P792)rt_nil_check(F->d_380)).b == NULL)) {
g_suppress_862 = f_suppressing_429((*(P792)rt_nil_check(F->d_380)).prags);
f_elaborate_capsule_390(F->d_380, F->y_1435, NULL, F->d_380);
g_suppress_862 = F->saved_1436;
}
f_define_159(F->y_1435, (*(P792)rt_nil_check(F->d_380)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_385(P792 d_382, P792 args_383, rt_int line_384) {
  struct f_capsule_params_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_382 = d_382;
F->args_383 = args_383;
F->line_384 = line_384;
F->p_1437 = NULL;
F->p_1437 = (*(P792)rt_nil_check(F->d_382)).b;
F->a_1438 = NULL;
F->a_1438 = F->args_383;
F->t_1439 = NULL;
F->vt_1440 = NULL;
F->c_1441 = NULL;
while (((F->p_1437 != NULL) && (F->a_1438 != NULL))) {
F->t_1439 = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1437)).a, &F->c_1441);
if (((*(P792)rt_nil_check(F->p_1437)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_384, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P792)rt_nil_check(F->p_1437)).ival == (((rt_int)2LL))) || ((*(P792)rt_nil_check(F->p_1437)).ival == (((rt_int)4LL))))) {
F->lv_1442 = NULL;
F->lc_1443 = NULL;
F->y_1445 = NULL;
F->y_1445 = f_new_sym_172((((rt_int)1LL)), (*(P792)rt_nil_check(F->p_1437)).name);
f_lvalue_606(F->a_1438, &F->lv_1442, &F->vt_1440, &F->lc_1443, &F->ro_1444);
f_check_type_221(F->vt_1440, F->t_1439, F->line_384);
if ((F->ro_1444 && ((*(P792)rt_nil_check(F->p_1437)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_384, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1437)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_844) {
F->f_1446 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1437)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_223(F->t_1439)), rt_str(" *", 2)), F->f_1446), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1446), rt_str(" = &", 4)), (((P785)rt_nil_check(F->lv_1442))->all)), rt_str(";", 1)); b_; }));
(*(P802)rt_nil_check(F->y_1445)).level = g_cur_level_845;
(*(P802)rt_nil_check(F->y_1445)).access = f_mk_3(&F->f_1446);
(*(P802)rt_nil_check(F->y_1445)).byref = 1;
} else {
F->g_1447 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1437)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_223(F->t_1439)), rt_str(" *", 2)), F->g_1447), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1447), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1447, rt_str(" = &", 4)), (((P785)rt_nil_check(F->lv_1442))->all)), rt_str(";", 1)); b_; }));
(*(P802)rt_nil_check(F->y_1445)).level = ((rt_int)0LL);
(*(P802)rt_nil_check(F->y_1445)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1447), rt_str(")", 1)); b_; }));
}
(*(P802)rt_nil_check(F->y_1445)).t = F->t_1439;
(*(P802)rt_nil_check(F->y_1445)).c = F->lc_1443;
(*(P802)rt_nil_check(F->y_1445)).ro_flag = ((*(P792)rt_nil_check(F->p_1437)).ival == (((rt_int)4LL)));
f_define_159(F->y_1445, F->line_384);
} else {
F->y_1448 = NULL;
F->y_1448 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_1437)).name);
F->v_1449 = rt_str_copy(f_gexpr_637(F->a_1438, F->t_1439, &F->vt_1440));
f_check_type_221(F->vt_1440, F->t_1439, F->line_384);
{
F->access_1450 = rt_str_copy(f_storage_438(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1437)).name))->all), F->t_1439));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1450, rt_str(" = ", 3)), f_copy_code_355(F->t_1439, &F->v_1449)), rt_str(";", 1)); b_; }));
f_bind_441(F->y_1448, &F->access_1450);
}
(*(P802)rt_nil_check(F->y_1448)).t = F->t_1439;
(*(P802)rt_nil_check(F->y_1448)).c = F->c_1441;
(*(P802)rt_nil_check(F->y_1448)).ro_flag = 1;
f_define_159(F->y_1448, F->line_384);
}
F->p_1437 = (*(P792)rt_nil_check(F->p_1437)).next;
F->a_1438 = (*(P792)rt_nil_check(F->a_1438)).next;
}
if (((F->p_1437 != NULL) || (F->a_1438 != NULL))) {
f_fail_23(F->line_384, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_382)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_390(P792 d_386, P802 y_387, P792 args_388, P792 owner_389) {
  struct f_elaborate_capsule_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_386 = d_386;
F->y_387 = y_387;
F->args_388 = args_388;
F->owner_389 = owner_389;
F->cr_1451 = NULL;
F->ctx_1452 = NULL;
F->saved_gotos_1453 = NULL;
F->m_1454 = NULL;
F->p_1455 = NULL;
F->p_1455 = (*(P792)rt_nil_check(F->d_386)).a;
{ R820 *cell1457 = rt_alloc(sizeof(R820));
(*cell1457).d = NULL;
(*cell1457).next = NULL;
F->cr_1451 = cell1457;
}
(*(P819)rt_nil_check(F->cr_1451)).d = F->d_386;
(*(P819)rt_nil_check(F->cr_1451)).next = g_caps_847;
g_caps_847 = F->cr_1451;
f_open_scope_168();
if (((*(P792)rt_nil_check(F->d_386)).b != NULL)) {
f_capsule_params_385(F->d_386, F->args_388, (*(P792)rt_nil_check(F->owner_389)).line);
}
{ R810 *cell1458 = rt_alloc(sizeof(R810));
(*cell1458).imps = NULL;
(*cell1458).next = NULL;
F->ctx_1452 = cell1458;
}
(*(P809)rt_nil_check(F->ctx_1452)).depth = g_depth_831;
(*(P809)rt_nil_check(F->ctx_1452)).imps = (*(P792)rt_nil_check(F->d_386)).d;
(*(P809)rt_nil_check(F->ctx_1452)).all_imp = ((*(P792)rt_nil_check(F->d_386)).flag >= ((rt_int)2LL));
(*(P809)rt_nil_check(F->ctx_1452)).next = g_fctx_846;
g_fctx_846 = F->ctx_1452;
F->saved_gotos_1453 = g_gotos_865;
g_gotos_865 = NULL;
f_declare_labels_464((*(P792)rt_nil_check(F->d_386)).c);
f_declare_body_371((*(P792)rt_nil_check(F->d_386)).c);
f_capsule_body_471((*(P792)rt_nil_check(F->d_386)).c);
{
F->w_1459 = NULL;
{ R822 *cell1460 = rt_alloc(sizeof(R822));
(*cell1460).d = NULL;
(*cell1460).w = NULL;
(*cell1460).next = NULL;
F->w_1459 = cell1460;
}
(*(P821)rt_nil_check(F->w_1459)).d = F->owner_389;
(*(P821)rt_nil_check(F->w_1459)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_458((*(P792)rt_nil_check(F->d_386)).c); b_; }));
(*(P821)rt_nil_check(F->w_1459)).next = g_cap_waits_848;
g_cap_waits_848 = F->w_1459;
}
g_fctx_846 = (*(P809)rt_nil_check(g_fctx_846)).next;
F->m_1454 = g_scope_stack_832;
while (((F->m_1454 != NULL) && ((*(P802)rt_nil_check(F->m_1454)).depth == g_depth_831))) {
if ((((((*(P802)rt_nil_check(F->m_1454)).kind == (((rt_int)5LL))) && ((*(P802)rt_nil_check(F->m_1454)).t == NULL)) && ((*(P802)rt_nil_check(F->m_1454)).decl != NULL)) && ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->m_1454)).decl)).kind == (((rt_int)43LL))))) {
(*(P802)rt_nil_check(F->m_1454)).t = f_new_type_302(F->m_1454, f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->d_386)).line), &(*(P802)rt_nil_check(F->m_1454)).c);
} else if (((((*(P802)rt_nil_check(F->m_1454)).kind == (((rt_int)5LL))) || ((*(P802)rt_nil_check(F->m_1454)).kind == (((rt_int)6LL)))) && ((*(P802)rt_nil_check(F->m_1454)).t == NULL))) {
(*(P802)rt_nil_check(F->m_1454)).t = f_resolve_subtype_254((*(P802)rt_nil_check(F->m_1454)).st, &(*(P802)rt_nil_check(F->m_1454)).c);
} else if ((((*(P802)rt_nil_check(F->m_1454)).kind == (((rt_int)5LL))) && ((*(P798)rt_nil_check((*(P802)rt_nil_check(F->m_1454)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_400((*(P802)rt_nil_check(F->m_1454)).t);
}
F->m_1454 = (*(P802)rt_nil_check(F->m_1454)).stack;
}
F->m_1454 = g_scope_stack_832;
while (((F->m_1454 != NULL) && ((*(P802)rt_nil_check(F->m_1454)).depth == g_depth_831))) {
if (f_exported_377(F->d_386, &(((P785)rt_nil_check((*(P802)rt_nil_check(F->m_1454)).name))->all), &F->ro_1456)) {
F->z_1461 = NULL;
F->z_1461 = f_copy_sym_379(F->m_1454);
if (F->ro_1456) {
(*(P802)rt_nil_check(F->z_1461)).ro_flag = 1;
}
(*(P802)rt_nil_check(F->z_1461)).mnext = (*(P802)rt_nil_check(F->y_387)).members;
(*(P802)rt_nil_check(F->y_387)).members = F->z_1461;
}
F->m_1454 = (*(P802)rt_nil_check(F->m_1454)).stack;
}
while ((F->p_1455 != NULL)) {
if ((((!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1455)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1455)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1455)).name))->all)) == NULL) || ((*(P802)rt_nil_check(f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1455)).name))->all)))).depth != g_depth_831)))) {
f_fail_23((*(P792)rt_nil_check(F->d_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1455)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_386)).name))->all)); b_; }));
}
F->p_1455 = (*(P792)rt_nil_check(F->p_1455)).next;
}
f_close_scope_169();
g_caps_847 = (*(P819)rt_nil_check(g_caps_847)).next;
g_gotos_865 = F->saved_gotos_1453;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_393(P792 d_391, rstr *op_392) {
  struct f_exports_op_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->op_392 = op_392;
F->p_1462 = NULL;
if ((F->d_391 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1462 = (*(P792)rt_nil_check(F->d_391)).a;
while ((F->p_1462 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1462)).name))->all), (*F->op_392))) {
F->result_ = 1;
goto ret_;
}
F->p_1462 = (*(P792)rt_nil_check(F->p_1462)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P785 f_renamed_396(P792 d_394, P802 z_395) {
  struct f_renamed_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_394 = d_394;
F->z_395 = z_395;
F->r_1463 = NULL;
F->r_1463 = (*(P792)rt_nil_check(F->d_394)).c;
while ((F->r_1463 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->r_1463)).name))->all), (((P785)rt_nil_check((*(P802)rt_nil_check(F->z_395)).name))->all))) {
F->result_ = (*(P792)rt_nil_check((*(P792)rt_nil_check(F->r_1463)).a)).name;
goto ret_;
}
F->r_1463 = (*(P792)rt_nil_check(F->r_1463)).next;
}
F->result_ = (*(P802)rt_nil_check(F->z_395)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_398(P792 d_397) {
  struct f_gen_expose_398fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_397 = d_397;
F->y_1464 = NULL;
F->y_1464 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->d_397)).name))->all));
F->m_1465 = NULL;
F->p_1466 = NULL;
F->p_1466 = (*(P792)rt_nil_check(F->d_397)).a;
F->r_1467 = NULL;
F->r_1467 = (*(P792)rt_nil_check(F->d_397)).c;
if (((F->y_1464 == NULL) || ((*(P802)rt_nil_check(F->y_1464)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P792)rt_nil_check(F->d_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->d_397)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P792)rt_nil_check(F->d_397)).flag == ((rt_int)1LL)) || ((*(P792)rt_nil_check(F->d_397)).flag == ((rt_int)3LL)))) {
F->inst_1468 = NULL;
F->inst_1468 = f_new_sym_172((((rt_int)8LL)), (*(P802)rt_nil_check(F->y_1464)).name);
(*(P802)rt_nil_check(F->inst_1468)).decl = (*(P802)rt_nil_check(F->y_1464)).decl;
f_elaborate_capsule_390((*(P802)rt_nil_check(F->y_1464)).decl, F->inst_1468, (*(P792)rt_nil_check(F->d_397)).b, F->d_397);
F->y_1464 = F->inst_1468;
} else if ((((*(P802)rt_nil_check(F->y_1464)).decl != NULL) && ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1464)).decl)).b != NULL))) {
f_fail_23((*(P792)rt_nil_check(F->d_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_397)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P792)rt_nil_check(F->d_397)).b != NULL)) {
f_fail_23((*(P792)rt_nil_check(F->d_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1467 != NULL)) {
F->found_1469 = 0;
F->m_1465 = (*(P802)rt_nil_check(F->y_1464)).members;
while ((F->m_1465 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->m_1465)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->r_1467)).name))->all))) {
F->found_1469 = 1;
}
F->m_1465 = (*(P802)rt_nil_check(F->m_1465)).mnext;
}
if ((!F->found_1469)) {
f_fail_23((*(P792)rt_nil_check(F->d_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->r_1467)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_397)).name))->all)); b_; }));
}
F->r_1467 = (*(P792)rt_nil_check(F->r_1467)).next;
}
if (((*(P792)rt_nil_check(F->d_397)).ival == ((rt_int)1LL))) {
F->m_1465 = (*(P802)rt_nil_check(F->y_1464)).members;
while ((F->m_1465 != NULL)) {
F->z_1470 = NULL;
F->z_1470 = f_copy_sym_379(F->m_1465);
(*(P802)rt_nil_check(F->z_1470)).name = f_renamed_396(F->d_397, F->m_1465);
f_define_159(F->z_1470, (*(P792)rt_nil_check(F->d_397)).line);
F->m_1465 = (*(P802)rt_nil_check(F->m_1465)).mnext;
}
goto ret_;
}
while ((F->p_1466 != NULL)) {
F->found_1471 = 0;
F->m_1465 = (*(P802)rt_nil_check(F->y_1464)).members;
while ((F->m_1465 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->m_1465)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1466)).name))->all))) {
F->z_1472 = NULL;
F->z_1472 = f_copy_sym_379(F->m_1465);
if (((*(P792)rt_nil_check(F->p_1466)).ival == ((rt_int)1LL))) {
(*(P802)rt_nil_check(F->z_1472)).ro_flag = 1;
}
(*(P802)rt_nil_check(F->z_1472)).name = f_renamed_396(F->d_397, F->m_1465);
f_define_159(F->z_1472, (*(P792)rt_nil_check(F->d_397)).line);
F->found_1471 = 1;
}
F->m_1465 = (*(P802)rt_nil_check(F->m_1465)).mnext;
}
if ((!F->found_1471)) {
f_fail_23((*(P792)rt_nil_check(F->d_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1466)).name))->all), rt_str(" is not exported by ", 20)), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_397)).name))->all)); b_; }));
}
F->p_1466 = (*(P792)rt_nil_check(F->p_1466)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_400(P798 t_399) {
  struct f_finish_ptr_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_399 = t_399;
F->d_1473 = NULL;
F->d_1473 = (*(P798)rt_nil_check(F->t_399)).decl;
F->p_1474 = NULL;
F->c_1475 = NULL;
F->dummy_1476 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1476, rt_str(" ", 1));
if (((*(P798)rt_nil_check(F->t_399)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1478 = ((rt_int)1LL), hi1479 = ((rt_int)2LL);
for (rt_int it1480 = lo1478; it1480 <= hi1479; it1480++) {
F->pass_1477 = it1480;
if ((F->pass_1477 == ((rt_int)1LL))) {
F->p_1474 = (*(P792)rt_nil_check(F->d_1473)).d;
} else {
F->p_1474 = (*(P792)rt_nil_check(F->d_1473)).b;
}
while ((F->p_1474 != NULL)) {
F->y_1481 = NULL;
F->y_1481 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_1474)).name);
F->pc_1482 = NULL;
(*(P802)rt_nil_check(F->y_1481)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1474)).a, &F->pc_1482);
(*(P802)rt_nil_check(F->y_1481)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1481, (*(P792)rt_nil_check(F->d_1473)).line);
F->p_1474 = (*(P792)rt_nil_check(F->p_1474)).next;
}
}
}
(*(P798)rt_nil_check(F->t_399)).target = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_1473)).a, &F->c_1475);
f_close_scope_169();
(*rt_str_at(&F->dummy_1476, ((rt_int)1LL))) = rt_str_get(f_ctype_223(F->t_399), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1476, ((rt_int)1LL))) = rt_str_get(f_ctype_223((*(P798)rt_nil_check(F->t_399)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P792 f_ptr_args_402(P794 c_401) {
  struct f_ptr_args_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_401 = c_401;
if ((F->c_401 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P794)rt_nil_check(F->c_401)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_407(P792 formals_403, P792 actuals_404, rstr *cell_405, rt_int line_406) {
  struct f_bind_ptr_params_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_403 = formals_403;
F->actuals_404 = actuals_404;
F->cell_405 = cell_405;
F->line_406 = line_406;
F->p_1483 = NULL;
F->p_1483 = F->formals_403;
F->a_1484 = NULL;
F->a_1484 = F->actuals_404;
F->vt_1485 = NULL;
if ((f_list_len_67(F->formals_403) != f_list_len_67(F->actuals_404))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_403))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1483 != NULL)) {
F->pc_1486 = NULL;
F->y_1487 = NULL;
F->y_1487 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_1483)).name);
(*(P802)rt_nil_check(F->y_1487)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1483)).a, &F->pc_1486);
{
F->v_1488 = rt_str_copy(f_gexpr_637(F->a_1484, (*(P802)rt_nil_check(F->y_1487)).t, &F->vt_1485));
F->pv_1489 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_221(F->vt_1485, (*(P802)rt_nil_check(F->y_1487)).t, F->line_406);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_223((*(P802)rt_nil_check(F->y_1487)).t), rt_str(" ", 1)), F->pv_1489), rt_str(" = ", 3)), f_checked_204((*(P802)rt_nil_check(F->y_1487)).t, F->pc_1486, &F->v_1488)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_405), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_405), rt_str("->p_", 4)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1483)).name))->all))), rt_str(" = ", 3)), F->pv_1489), rt_str(";", 1)); b_; }));
}
(*(P802)rt_nil_check(F->y_1487)).access = f_mk_3(&F->pv_1489);
}
f_define_159(F->y_1487, F->line_406);
F->p_1483 = (*(P792)rt_nil_check(F->p_1483)).next;
F->a_1484 = (*(P792)rt_nil_check(F->a_1484)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_412(P792 s_408, rstr *lv_409, P798 t_410, P794 c_411) {
  struct f_alloc_cell_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_408 = s_408;
F->lv_409 = lv_409;
F->t_410 = t_410;
F->c_411 = c_411;
F->d_1490 = NULL;
F->d_1490 = (*(P798)rt_nil_check(F->t_410)).decl;
F->tc_1491 = NULL;
F->vt_1492 = NULL;
F->pt_1493 = rt_str_copy(f_ctype_223(F->t_410));
F->cell_1494 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_311((*(P798)rt_nil_check(F->t_410)).target)) {
F->fn_1495 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_853 = 1;
g_uses_findyn_855 = 1;
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1495), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1495), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_844) {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P785)rt_nil_check((*(P802)rt_nil_check(g_func_sym_856)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1493), rt_str(")cell_)->all)", 13)); b_; }), (*(P798)rt_nil_check(F->t_410)).target)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_844) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1493), rt_str(" ", 1)), F->cell_1494), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1494), rt_str(", ", 2)), F->fn_1495), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1493), rt_str(" ", 1)), F->cell_1494), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1494), rt_str(", ", 2)), F->fn_1495), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1493), rt_str(" ", 1)), F->cell_1494), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1494), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_407((*(P792)rt_nil_check(F->d_1490)).d, f_ptr_args_402(F->c_411), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P792)rt_nil_check(F->s_408)).line);
f_bind_ptr_params_407((*(P792)rt_nil_check(F->d_1490)).b, (*(P792)rt_nil_check(F->s_408)).b, &F->cell_1494, (*(P792)rt_nil_check(F->s_408)).line);
F->vt_1492 = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_1490)).a, &F->tc_1491);
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1494, rt_str("->all", 5)); b_; }), (*(P798)rt_nil_check(F->t_410)).target, F->tc_1491);
f_close_scope_169();
if (((*(P792)rt_nil_check(F->s_408)).c != NULL)) {
F->v_1496 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->s_408)).c, (*(P798)rt_nil_check(F->t_410)).target, F->tc_1491, &F->vt_1492));
f_check_type_221(F->vt_1492, (*(P798)rt_nil_check(F->t_410)).target, (*(P792)rt_nil_check(F->s_408)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_352(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1494, rt_str("->all", 5)); b_; }), (*(P798)rt_nil_check(F->t_410)).target, &F->v_1496, F->tc_1491); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_409), rt_str(" = ", 3)), F->cell_1494), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P794 f_freeze_args_416(P794 c_413, P798 t_414, rt_int line_415) {
  struct f_freeze_args_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_413 = c_413;
F->t_414 = t_414;
F->line_415 = line_415;
F->r_1497 = NULL;
F->r_1497 = f_copy_cons_197(F->c_413);
F->p_1498 = NULL;
F->p_1498 = (*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_414)).decl)).d;
F->a_1499 = NULL;
F->a_1499 = (*(P794)rt_nil_check(F->c_413)).args;
F->head_1500 = NULL;
F->tail_1501 = NULL;
F->saved_1502 = NULL;
F->saved_1502 = g_st_field_850;
if ((f_list_len_67(F->p_1498) != f_list_len_67(F->a_1499))) {
f_fail_23(F->line_415, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P798)rt_nil_check(F->t_414)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1498))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1499 != NULL)) {
F->pc_1503 = NULL;
F->vt_1504 = NULL;
F->pt_1505 = NULL;
F->pt_1505 = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1498)).a, &F->pc_1503);
F->nm_1506 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1507 = NULL;
F->y_1507 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1506));
F->n_1508 = NULL;
F->n_1508 = f_nn_61((((rt_int)7LL)), F->line_415);
F->v_1509 = rt_str_copy(f_gexpr_637(F->a_1499, F->pt_1505, &F->vt_1504));
F->access_1510 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_223(F->pt_1505); b_; })));
f_check_type_221(F->vt_1504, F->pt_1505, F->line_415);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1510, rt_str(" = ", 3)), f_checked_204(F->pt_1505, F->pc_1503, &F->v_1509)), rt_str(";", 1)); b_; }));
(*(P802)rt_nil_check(F->y_1507)).t = F->pt_1505;
(*(P802)rt_nil_check(F->y_1507)).ro_flag = 1;
f_bind_441(F->y_1507, &F->access_1510);
f_define_159(F->y_1507, F->line_415);
(*(P792)rt_nil_check(F->n_1508)).name = f_mk_3(&F->nm_1506);
f_append_65(&F->head_1500, &F->tail_1501, F->n_1508);
F->a_1499 = (*(P792)rt_nil_check(F->a_1499)).next;
F->p_1498 = (*(P792)rt_nil_check(F->p_1498)).next;
}
(*(P794)rt_nil_check(F->r_1497)).args = F->head_1500;
g_st_field_850 = F->saved_1502;
F->result_ = F->r_1497;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_420(P798 t_417, P794 c_418, P792 src_419) {
  struct f_ptr_subtype_check_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_417 = t_417;
F->c_418 = c_418;
F->src_419 = src_419;
F->lv_1511 = NULL;
F->st_1512 = NULL;
F->sc_1513 = NULL;
F->cond_1515 = NULL;
F->cond_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1516 = NULL;
F->b_1517 = NULL;
F->at_1518 = NULL;
F->bt_1519 = NULL;
if (((((((*(P798)rt_nil_check(F->t_417)).kind != (((rt_int)8LL))) || (F->c_418 == NULL)) || ((*(P794)rt_nil_check(F->c_418)).args == NULL)) || (F->src_419 == NULL)) || (!f_is_lvalue_600(F->src_419)))) {
goto ret_;
}
f_lvalue_606(F->src_419, &F->lv_1511, &F->st_1512, &F->sc_1513, &F->ro_1514);
if (((F->sc_1513 == NULL) || ((*(P794)rt_nil_check(F->sc_1513)).args == NULL))) {
goto ret_;
}
F->a_1516 = (*(P794)rt_nil_check(F->c_418)).args;
F->b_1517 = (*(P794)rt_nil_check(F->sc_1513)).args;
while (((F->a_1516 != NULL) && (F->b_1517 != NULL))) {
F->x_1520 = rt_str_copy(f_gexpr_637(F->a_1516, NULL, &F->at_1518));
F->y_1521 = rt_str_copy(f_gexpr_637(F->b_1517, F->at_1518, &F->bt_1519));
F->cond_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->cond_1515))->all), rt_str(" || !", 5)), f_eq_code_359(F->at_1518, &F->x_1520, &F->y_1521)); b_; }));
F->a_1516 = (*(P792)rt_nil_check(F->a_1516)).next;
F->b_1517 = (*(P792)rt_nil_check(F->b_1517)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P785)rt_nil_check(F->cond_1515))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_422(P792 d_421) {
  struct f_declare_subprogram_422fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_421 = d_421;
f_define_159(f_build_subprogram_424(F->d_421), (*(P792)rt_nil_check(F->d_421)).line);
ret_:
  RT_FPOP();
  return;
}

static P802 f_build_subprogram_424(P792 d_423) {
  struct f_build_subprogram_424fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_423 = d_423;
F->y_1522 = NULL;
F->p_1523 = NULL;
F->p_1523 = (*(P792)rt_nil_check(F->d_423)).a;
F->tail_1524 = NULL;
if (((*(P792)rt_nil_check(F->d_423)).kind == (((rt_int)46LL)))) {
F->y_1522 = f_new_sym_172((((rt_int)3LL)), (*(P792)rt_nil_check(F->d_423)).name);
} else if (((*(P792)rt_nil_check(F->d_423)).kind == (((rt_int)50LL)))) {
F->y_1522 = f_new_sym_172((((rt_int)9LL)), (*(P792)rt_nil_check(F->d_423)).name);
} else {
F->y_1522 = f_new_sym_172((((rt_int)4LL)), (*(P792)rt_nil_check(F->d_423)).name);
}
while ((F->p_1523 != NULL)) {
F->pm_1525 = NULL;
{ R805 *cell1526 = rt_alloc(sizeof(R805));
(*cell1526).name = NULL;
(*cell1526).t = NULL;
(*cell1526).c = NULL;
(*cell1526).cfield = NULL;
(*cell1526).next = NULL;
F->pm_1525 = cell1526;
}
(*(P804)rt_nil_check(F->pm_1525)).name = (*(P792)rt_nil_check(F->p_1523)).name;
(*(P804)rt_nil_check(F->pm_1525)).mode = (*(P792)rt_nil_check(F->p_1523)).ival;
(*(P804)rt_nil_check(F->pm_1525)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1523)).a, &(*(P804)rt_nil_check(F->pm_1525)).c);
(*(P804)rt_nil_check(F->pm_1525)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1523)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1524 == NULL)) {
(*(P802)rt_nil_check(F->y_1522)).params = F->pm_1525;
} else {
(*(P804)rt_nil_check(F->tail_1524)).next = F->pm_1525;
}
F->tail_1524 = F->pm_1525;
F->p_1523 = (*(P792)rt_nil_check(F->p_1523)).next;
}
(*(P802)rt_nil_check(F->y_1522)).result = g_ty_void_876;
if (((*(P792)rt_nil_check(F->d_423)).b != NULL)) {
F->rc_1527 = NULL;
F->pm_1528 = NULL;
F->pm_1528 = (*(P802)rt_nil_check(F->y_1522)).params;
F->saved_1529 = NULL;
F->saved_1529 = g_code_842;
g_code_842 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1528 != NULL)) {
F->z_1530 = NULL;
F->z_1530 = f_new_sym_172((((rt_int)2LL)), (*(P804)rt_nil_check(F->pm_1528)).name);
(*(P802)rt_nil_check(F->z_1530)).t = (*(P804)rt_nil_check(F->pm_1528)).t;
(*(P802)rt_nil_check(F->z_1530)).c = (*(P804)rt_nil_check(F->pm_1528)).c;
(*(P802)rt_nil_check(F->z_1530)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1530, (*(P792)rt_nil_check(F->d_423)).line);
F->pm_1528 = (*(P804)rt_nil_check(F->pm_1528)).next;
}
(*(P802)rt_nil_check(F->y_1522)).result = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_423)).b, &F->rc_1527);
f_close_scope_169();
g_code_842 = F->saved_1529;
}
(*(P802)rt_nil_check(F->y_1522)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_592(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->d_423)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P802)rt_nil_check(F->y_1522)).decl = F->d_423;
(*(P802)rt_nil_check(F->y_1522)).level = g_cur_level_845;
if (((*(P792)rt_nil_check(F->d_423)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1522)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1522;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_427(P785 pr_425, rstr *p_426) {
  struct f_has_pragmat_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_425 = pr_425;
F->p_426 = p_426;
if ((F->pr_425 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1532 = ((rt_int)1LL), hi1533 = rt_sub(((rt_int)(((((P785)rt_nil_check(F->pr_425))->all)).len)), ((rt_int)(((*F->p_426)).len)));
for (rt_int it1534 = lo1532; it1534 <= hi1533; it1534++) {
F->i_1531 = it1534;
if (((rt_str_eq(rt_str_slice((((P785)rt_nil_check(F->pr_425))->all), F->i_1531, rt_sub(rt_add(F->i_1531, ((rt_int)(((*F->p_426)).len))), ((rt_int)1LL))), (*F->p_426)) && (rt_str_get((((P785)rt_nil_check(F->pr_425))->all), rt_add(F->i_1531, ((rt_int)(((*F->p_426)).len)))) == 59)) && ((F->i_1531 == ((rt_int)1LL)) || (rt_str_get((((P785)rt_nil_check(F->pr_425))->all), rt_sub(F->i_1531, ((rt_int)1LL))) == 59)))) {
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

static P785 f_suppressing_429(P785 pr_428) {
  struct f_suppressing_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_428 = pr_428;
F->r_1535 = NULL;
F->r_1535 = g_suppress_862;
F->i_1536 = ((rt_int)1LL);
if ((F->pr_428 == NULL)) {
F->result_ = F->r_1535;
goto ret_;
}
if ((F->r_1535 == NULL)) {
F->r_1535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1536, ((rt_int)9LL)) <= ((rt_int)(((((P785)rt_nil_check(F->pr_428))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P785)rt_nil_check(F->pr_428))->all), F->i_1536, rt_add(F->i_1536, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1537 = rt_add(F->i_1536, ((rt_int)9LL));
F->k_1538 = F->j_1537;
while ((rt_str_get((((P785)rt_nil_check(F->pr_428))->all), F->k_1538) != 41)) {
if ((rt_str_get((((P785)rt_nil_check(F->pr_428))->all), F->k_1538) == 44)) {
F->r_1535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1535))->all), rt_str_slice((((P785)rt_nil_check(F->pr_428))->all), F->j_1537, rt_sub(F->k_1538, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1537 = rt_add(F->k_1538, ((rt_int)1LL));
}
F->k_1538 = rt_add(F->k_1538, ((rt_int)1LL));
}
F->r_1535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1535))->all), rt_str_slice((((P785)rt_nil_check(F->pr_428))->all), F->j_1537, rt_sub(F->k_1538, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1536 = F->k_1538;
}
F->i_1536 = rt_add(F->i_1536, ((rt_int)1LL));
}
F->result_ = F->r_1535;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_431(rstr *x_430) {
  struct f_suppressed_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_430 = x_430;
F->w_1539 = rt_str_new(rt_add(((rt_int)(((*F->x_430)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1539, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_430)), rt_str(" ", 1)));
if ((g_suppress_862 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1541 = ((rt_int)1LL), hi1542 = rt_add(rt_sub(((rt_int)(((((P785)rt_nil_check(g_suppress_862))->all)).len)), ((rt_int)((F->w_1539).len))), ((rt_int)1LL));
for (rt_int it1543 = lo1541; it1543 <= hi1542; it1543++) {
F->i_1540 = it1543;
if (rt_str_eq(rt_str_slice((((P785)rt_nil_check(g_suppress_862))->all), F->i_1540, rt_sub(rt_add(F->i_1540, ((rt_int)((F->w_1539).len))), ((rt_int)1LL))), F->w_1539)) {
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

static void f_element_433(P792 e_432) {
  struct f_element_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_432 = e_432;
F->saved_1544 = NULL;
F->saved_1544 = g_suppress_862;
g_suppress_862 = f_suppressing_429((*(P792)rt_nil_check(F->e_432)).prags);
f_element1_435(F->e_432);
g_suppress_862 = F->saved_1544;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_435(P792 e_434) {
  struct f_element1_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_434 = e_434;
F->k_1545 = (*(P792)rt_nil_check(F->e_434)).kind;
if (((F->k_1545 == (((rt_int)48LL))) && (((*(P792)rt_nil_check(F->e_434)).flag == ((rt_int)1LL)) || ((*(P792)rt_nil_check(F->e_434)).flag == ((rt_int)3LL))))) {
f_gen_expose_398(F->e_434);
} else if ((((F->k_1545 == (((rt_int)45LL))) || (F->k_1545 == (((rt_int)46LL)))) || (F->k_1545 == (((rt_int)50LL))))) {
f_subprogram_451(F->e_434);
} else if ((F->k_1545 == (((rt_int)51LL)))) {
F->g_1546 = NULL;
F->g_1546 = f_lookup_decl_156(F->e_434);
if ((F->g_1546 != NULL)) {
{ P806 cell1547 = rt_alloc(sizeof *cell1547);
rt_int pv1548 = (((rt_int)4093LL));
cell1547->p_n = pv1548;
cell1547->all.lo = ((rt_int)0LL); cell1547->all.hi = pv1548;
cell1547->all.lo2 = cell1547->all.hi2 = 1;
cell1547->all.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(cell1547->all)) + 1);
for (rt_int i1549 = 0; i1549 < (RT_CNT(cell1547->all)); i1549++) {
cell1547->all.p[i1549] = NULL;
}
(*(P802)rt_nil_check(F->g_1546)).env = cell1547;
}
{ rt_int lo1551 = ((rt_int)0LL), hi1552 = (((rt_int)4093LL));
for (rt_int it1553 = lo1551; it1553 <= hi1552; it1553++) {
F->i_1550 = it1553;
(((P806)rt_nil_check((*(P802)rt_nil_check(F->g_1546)).env))->all).p[(rt_index(F->i_1550, (((P806)rt_nil_check((*(P802)rt_nil_check(F->g_1546)).env))->all).lo, (((P806)rt_nil_check((*(P802)rt_nil_check(F->g_1546)).env))->all).hi) - (((P806)rt_nil_check((*(P802)rt_nil_check(F->g_1546)).env))->all).lo)] = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(F->i_1550, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((F->k_1545 == (((rt_int)49LL))) || (F->k_1545 == (((rt_int)42LL)))) || (F->k_1545 == (((rt_int)43LL)))) || (F->k_1545 == (((rt_int)47LL)))) || (F->k_1545 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1545 == (((rt_int)44LL)))) {
f_finish_ptr_400((*(P802)rt_nil_check(f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_434)).name))->all)))).t);
} else if ((F->k_1545 == (((rt_int)40LL)))) {
f_var_decl_443(F->e_434);
} else if (((F->k_1545 == (((rt_int)41LL))) && ((*(P792)rt_nil_check(F->e_434)).flag == ((rt_int)0LL)))) {
f_const_decl_449(F->e_434);
} else if ((F->k_1545 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1545 == (((rt_int)33LL)))) {
F->t_1554 = NULL;
F->c_1555 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_434)).a, g_ty_bool_872, &F->t_1554));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1555), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_482(F->e_434);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_438(rstr *name_436, P798 t_437) {
  struct f_storage_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_436 = name_436;
F->t_437 = t_437;
if ((!g_in_func_844)) {
F->g_1556 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_436))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_223(F->t_437)), rt_str(" ", 1)), F->g_1556), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_852, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1556), rt_str(");", 2)); b_; }));
g_st_field_850 = f_mk_3(&F->g_1556);
F->result_ = F->g_1556;
goto ret_;
}
{
F->f_1557 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_436)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_223(F->t_437)), rt_str(" ", 1)), F->f_1557), rt_str(";", 1)); b_; }));
g_st_field_850 = f_mk_3(&F->f_1557);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1557);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_441(P802 y_439, rstr *access_440) {
  struct f_bind_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_439 = y_439;
F->access_440 = access_440;
if (g_in_func_844) {
(*(P802)rt_nil_check(F->y_439)).level = g_cur_level_845;
(*(P802)rt_nil_check(F->y_439)).access = g_st_field_850;
} else {
(*(P802)rt_nil_check(F->y_439)).level = ((rt_int)0LL);
(*(P802)rt_nil_check(F->y_439)).access = f_mk_3(&(*F->access_440));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_443(P792 d_442) {
  struct f_var_decl_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_442 = d_442;
F->c_1558 = NULL;
F->t_1559 = NULL;
F->t_1559 = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_442)).a, &F->c_1558);
F->y_1560 = NULL;
F->y_1560 = f_new_sym_172((((rt_int)1LL)), (*(P792)rt_nil_check(F->d_442)).name);
F->access_1561 = rt_str_copy(f_storage_438(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->d_442)).name))->all), F->t_1559));
F->c_1558 = f_freeze_200(F->c_1558, F->t_1559);
if (((((*(P798)rt_nil_check(F->t_1559)).kind == (((rt_int)8LL))) && (F->c_1558 != NULL)) && ((*(P794)rt_nil_check(F->c_1558)).args != NULL))) {
F->c_1558 = f_freeze_args_416(F->c_1558, F->t_1559, (*(P792)rt_nil_check(F->d_442)).line);
}
f_init_storage_306(&F->access_1561, F->t_1559, F->c_1558);
if (((*(P792)rt_nil_check(F->d_442)).ival == ((rt_int)1LL))) {
F->it_1562 = NULL;
F->n_1563 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->d_442)).c, g_ty_int_871, &F->it_1562));
if (((*(P798)rt_nil_check(F->t_1559)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P792)rt_nil_check(F->d_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_210((*(P798)rt_nil_check(F->t_1559)).elem, g_ty_ascii_874)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1561), rt_str(", ", 2)), F->n_1563), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1561), rt_str(", ", 2)), F->n_1563), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P792)rt_nil_check(F->d_442)).ival == ((rt_int)2LL))) {
f_fail_23((*(P792)rt_nil_check(F->d_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P792)rt_nil_check(F->d_442)).b != NULL)) {
F->vt_1564 = NULL;
F->v_1565 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->d_442)).b, F->t_1559, F->c_1558, &F->vt_1564));
f_check_type_221(F->vt_1564, F->t_1559, (*(P792)rt_nil_check(F->d_442)).line);
f_ptr_subtype_check_420(F->t_1559, F->c_1558, (*(P792)rt_nil_check(F->d_442)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_352(&F->access_1561, F->t_1559, &F->v_1565, F->c_1558); b_; }));
}
(*(P802)rt_nil_check(F->y_1560)).t = F->t_1559;
(*(P802)rt_nil_check(F->y_1560)).c = F->c_1558;
f_bind_441(F->y_1560, &F->access_1561);
f_define_159(F->y_1560, (*(P792)rt_nil_check(F->d_442)).line);
if (f_needs_fin_311(F->t_1559)) {
f_open_fin_445(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_314(&F->access_1561, F->t_1559); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_445(rstr *fc_444) {
  struct f_open_fin_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_444 = fc_444;
F->f_1566 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1567 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1566), rt_str("; if (RT_TRY(", 13)), F->f_1566), rt_str(")) {", 4)); b_; }));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1566), rt_str("); ", 3)), (*F->fc_444)); b_; }));
{ R797 *cell1568 = rt_alloc(sizeof(R797));
(*cell1568).s = NULL;
(*cell1568).next = NULL;
F->l_1567 = cell1568;
}
(*(P796)rt_nil_check(F->l_1567)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1566), rt_str("); ", 3)), (*F->fc_444)), rt_str(" } else { RT_POP(", 17)), F->f_1566), rt_str("); ", 3)), (*F->fc_444)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P796)rt_nil_check(F->l_1567)).next = g_fins_854;
g_fins_854 = F->l_1567;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_447(P796 saved_446) {
  struct f_close_fins_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_446 = saved_446;
while (((g_fins_854 != F->saved_446) && (g_fins_854 != NULL))) {
f_emit_29(&(((P785)rt_nil_check((*(P796)rt_nil_check(g_fins_854)).s))->all));
f_pop_cleanup_480();
g_fins_854 = (*(P796)rt_nil_check(g_fins_854)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_449(P792 d_448) {
  struct f_const_decl_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_448 = d_448;
F->c_1569 = NULL;
F->c_1569 = f_new_cons_175();
F->t_1570 = NULL;
F->vt_1571 = NULL;
F->y_1572 = NULL;
F->y_1572 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->d_448)).name);
if (((*(P792)rt_nil_check(F->d_448)).a != NULL)) {
F->t_1570 = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_448)).a, &F->c_1569);
}
{
F->v_1574 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->d_448)).b, F->t_1570, F->c_1569, &F->vt_1571));
if ((F->t_1570 != NULL)) {
f_check_type_221(F->vt_1571, F->t_1570, (*(P792)rt_nil_check(F->d_448)).line);
} else {
F->t_1570 = F->vt_1571;
}
if (((*(P798)rt_nil_check(F->t_1570)).kind == (((rt_int)1LL)))) {
(*(P802)rt_nil_check(F->y_1572)).mvalue = f_manifest_324((*(P792)rt_nil_check(F->d_448)).b, &F->ok_1573);
(*(P802)rt_nil_check(F->y_1572)).hasmv = F->ok_1573;
}
{
F->access_1575 = rt_str_copy(f_storage_438(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->d_448)).name))->all), F->t_1570));
if (((*(P798)rt_nil_check(F->t_1570)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_309((*(P798)rt_nil_check(F->t_1570)).initp, &F->access_1575); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1575, rt_str(" = ", 3)), f_checked_204(F->t_1570, F->c_1569, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_355(F->t_1570, &F->v_1574); b_; }))), rt_str(";", 1)); b_; }));
f_bind_441(F->y_1572, &F->access_1575);
if (f_needs_fin_311(F->t_1570)) {
f_open_fin_445(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_314(&F->access_1575, F->t_1570); b_; }));
}
}
}
(*(P802)rt_nil_check(F->y_1572)).t = F->t_1570;
(*(P802)rt_nil_check(F->y_1572)).c = F->c_1569;
(*(P802)rt_nil_check(F->y_1572)).ro_flag = 1;
f_define_159(F->y_1572, (*(P792)rt_nil_check(F->d_448)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_451(P792 d_450) {
  struct f_subprogram_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_450 = d_450;
f_gen_subprogram_454(F->d_450, f_lookup_decl_156(F->d_450));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_454(P792 d_452, P802 y_453) {
  struct f_gen_subprogram_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_452 = d_452;
F->y_453 = y_453;
F->saved_code_1576 = NULL;
F->saved_code_1576 = g_code_842;
F->saved_fields_1577 = NULL;
F->saved_fields_1577 = g_fields_buf_843;
F->saved_in_1578 = g_in_func_844;
F->saved_sym_1579 = NULL;
F->saved_sym_1579 = g_func_sym_856;
F->saved_exits_1580 = NULL;
F->saved_exits_1580 = g_exits_864;
F->saved_gotos_1581 = NULL;
F->saved_gotos_1581 = g_gotos_865;
F->saved_frames_1582 = g_frames_866;
F->args_1583 = NULL;
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1584 = NULL;
F->pm_1584 = (*(P802)rt_nil_check(F->y_453)).params;
F->saved_handlers_1585 = NULL;
F->saved_handlers_1585 = g_handlers_867;
F->saved_cleanups_1586 = NULL;
F->saved_cleanups_1586 = g_cleanups_868;
F->ctx_1587 = NULL;
F->head_1588 = NULL;
F->frame_1589 = NULL;
F->frame_1589 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_453)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1590 = NULL;
F->copy_back_1591 = NULL;
F->copy_back_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1592 = NULL;
F->pfin_1592 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1593 = NULL;
F->saved_fins_1593 = g_fins_854;
F->saved_rc_1594 = NULL;
F->saved_rc_1594 = g_func_rc_857;
F->saved_ret_1595 = NULL;
F->saved_ret_1595 = g_cap_ret_858;
F->saved_rflag_1596 = NULL;
F->saved_rflag_1596 = g_cap_rflag_859;
F->pn_1597 = NULL;
F->pn_1597 = (*(P792)rt_nil_check(F->d_452)).a;
F->nonrec_end_1598 = NULL;
if (g_in_func_844) {
F->parent_1590 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(g_func_sym_856)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_854 = NULL;
g_func_rc_857 = NULL;
g_cap_ret_858 = NULL;
g_cap_rflag_859 = NULL;
g_code_842 = f_new_buffer_24();
g_fields_buf_843 = f_new_buffer_24();
g_in_func_844 = 1;
g_func_sym_856 = F->y_453;
g_exits_864 = NULL;
g_gotos_865 = NULL;
g_frames_866 = ((rt_int)0LL);
g_handlers_867 = NULL;
g_cleanups_868 = NULL;
g_cur_level_845 = rt_add(g_cur_level_845, ((rt_int)1LL));
f_open_scope_168();
{ R810 *cell1600 = rt_alloc(sizeof(R810));
(*cell1600).imps = NULL;
(*cell1600).next = NULL;
F->ctx_1587 = cell1600;
}
(*(P809)rt_nil_check(F->ctx_1587)).depth = g_depth_831;
(*(P809)rt_nil_check(F->ctx_1587)).imps = (*(P792)rt_nil_check(F->d_452)).d;
(*(P809)rt_nil_check(F->ctx_1587)).all_imp = ((*(P792)rt_nil_check(F->d_452)).flag >= ((rt_int)2LL));
(*(P809)rt_nil_check(F->ctx_1587)).next = g_fctx_846;
g_fctx_846 = F->ctx_1587;
if ((F->parent_1590 != NULL)) {
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P785)rt_nil_check(F->parent_1590))->all)), rt_str(" *up;", 5)); b_; }));
if (((*(P802)rt_nil_check(F->y_453)).kind != (((rt_int)9LL)))) {
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check(F->parent_1590))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1584 != NULL)) {
F->ct_1601 = rt_str_copy(f_ctype_223((*(P804)rt_nil_check(F->pm_1584)).t));
F->f_1602 = rt_str_copy((((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_1584)).cfield))->all));
F->p_1603 = NULL;
F->pc_1604 = NULL;
F->pc_1604 = (*(P804)rt_nil_check(F->pm_1584)).c;
F->ac_1605 = NULL;
if ((((rt_int)(((((P785)rt_nil_check(F->args_1583))->all)).len)) > ((rt_int)0LL))) {
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->args_1583))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P804)rt_nil_check(F->pm_1584)).t)) {
F->fc_1606 = NULL;
F->ft_1607 = NULL;
F->ft_1607 = f_resolve_subtype_254((*(P792)rt_nil_check(F->pn_1597)).a, &F->fc_1606);
F->pc_1604 = f_freeze_200(F->fc_1606, (*(P804)rt_nil_check(F->pm_1584)).t);
}
if (((*(P804)rt_nil_check(F->pm_1584)).mode == (((rt_int)1LL)))) {
F->p_1603 = f_new_sym_172((((rt_int)2LL)), (*(P804)rt_nil_check(F->pm_1584)).name);
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1601), rt_str(" ", 1)), F->f_1602), rt_str(";", 1)); b_; }));
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_1583))->all), F->ct_1601), rt_str(" ", 1)), F->f_1602); b_; }));
(*(P802)rt_nil_check(F->p_1603)).access = f_mk_3(&F->f_1602);
if (((*(P802)rt_nil_check(F->y_453)).kind != (((rt_int)9LL)))) {
if (((*(P798)rt_nil_check((*(P804)rt_nil_check(F->pm_1584)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_309((*(P798)rt_nil_check((*(P804)rt_nil_check(F->pm_1584)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1602); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str(" = ", 3)), f_checked_204((*(P804)rt_nil_check(F->pm_1584)).t, F->pc_1604, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_355((*(P804)rt_nil_check(F->pm_1584)).t, &F->f_1602); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_311((*(P804)rt_nil_check(F->pm_1584)).t)) {
F->pfin_1592 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->pfin_1592))->all), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1602); b_; }), (*(P804)rt_nil_check(F->pm_1584)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1603 = f_new_sym_172((((rt_int)1LL)), (*(P804)rt_nil_check(F->pm_1584)).name);
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1601), rt_str(" *", 2)), F->f_1602), rt_str(";", 1)); b_; }));
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_1583))->all), F->ct_1601), rt_str(" *", 2)), F->f_1602); b_; }));
(*(P802)rt_nil_check(F->p_1603)).access = f_mk_3(&F->f_1602);
(*(P802)rt_nil_check(F->p_1603)).byref = 1;
if (((*(P802)rt_nil_check(F->y_453)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str(" = ", 3)), F->f_1602), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P804)rt_nil_check(F->pm_1584)).t)) {
F->bt_1608 = rt_str_copy(f_bound_ctype_179((*(P804)rt_nil_check(F->pm_1584)).t));
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1608), rt_str(" ", 1)), F->f_1602), rt_str("lo, ", 4)), F->f_1602), rt_str("hi;", 3)); b_; }));
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_1583))->all), rt_str(", ", 2)), F->bt_1608), rt_str(" ", 1)), F->f_1602), rt_str("lo, ", 4)), F->bt_1608), rt_str(" ", 1)), F->f_1602), rt_str("hi", 2)); b_; }));
if (((*(P802)rt_nil_check(F->y_453)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str("lo = ", 5)), F->f_1602), rt_str("lo; F->", 7)), F->f_1602), rt_str("hi = ", 5)), F->f_1602), rt_str("hi;", 3)); b_; }));
}
F->ac_1605 = f_new_cons_175();
(*(P794)rt_nil_check(F->ac_1605)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1602, rt_str("lo", 2)); b_; }));
(*(P794)rt_nil_check(F->ac_1605)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1602, rt_str("hi", 2)); b_; }));
(*(P794)rt_nil_check(F->ac_1605)).dyn = 1;
(*(P794)rt_nil_check(F->ac_1605)).lvl = g_cur_level_845;
if (((F->pc_1604 == NULL) || ((*(P794)rt_nil_check(F->pc_1604)).lo == NULL))) {
F->pc_1604 = F->ac_1605;
} else if (((*(P804)rt_nil_check(F->pm_1584)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1602), rt_str("lo <= F->", 9)), F->f_1602), rt_str("hi && (F->", 10)), F->f_1602), rt_str("lo != ", 6)), f_sub_lo_189((*(P804)rt_nil_check(F->pm_1584)).t, F->pc_1604)), rt_str(" || F->", 7)), F->f_1602), rt_str("hi != ", 6)), f_sub_hi_192((*(P804)rt_nil_check(F->pm_1584)).t, F->pc_1604)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P804)rt_nil_check(F->pm_1584)).mode == (((rt_int)3LL))) && ((*(P802)rt_nil_check(F->y_453)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1601), rt_str(" ", 1)), F->f_1602), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str("v = ", 4)), f_copy_code_355((*(P804)rt_nil_check(F->pm_1584)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1602); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P798)rt_nil_check((*(P804)rt_nil_check(F->pm_1584)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_309((*(P798)rt_nil_check((*(P804)rt_nil_check(F->pm_1584)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1605 == NULL)) {
F->ac_1605 = (*(P804)rt_nil_check(F->pm_1584)).c;
}
F->copy_back_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->copy_back_1591))->all), rt_str("  ", 2)), f_assign_code_352(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1602), rt_str(")", 1)); b_; }), (*(P804)rt_nil_check(F->pm_1584)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str("v", 1)); b_; }), F->ac_1605)); b_; }));
if (f_needs_fin_311((*(P804)rt_nil_check(F->pm_1584)).t)) {
F->pfin_1592 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->pfin_1592))->all), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1602), rt_str("v", 1)); b_; }), (*(P804)rt_nil_check(F->pm_1584)).t)), rt_str(" ", 1)); b_; }));
}
(*(P802)rt_nil_check(F->p_1603)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1602, rt_str("v", 1)); b_; }));
(*(P802)rt_nil_check(F->p_1603)).byref = 0;
}
}
(*(P802)rt_nil_check(F->p_1603)).t = (*(P804)rt_nil_check(F->pm_1584)).t;
(*(P802)rt_nil_check(F->p_1603)).c = F->pc_1604;
(*(P802)rt_nil_check(F->p_1603)).level = g_cur_level_845;
(*(P802)rt_nil_check(F->p_1603)).ro_flag = (((*(P804)rt_nil_check(F->pm_1584)).mode == (((rt_int)1LL))) || ((*(P804)rt_nil_check(F->pm_1584)).mode == (((rt_int)4LL))));
f_define_159(F->p_1603, (*(P792)rt_nil_check(F->d_452)).line);
F->pm_1584 = (*(P804)rt_nil_check(F->pm_1584)).next;
F->pn_1597 = (*(P792)rt_nil_check(F->pn_1597)).next;
}
if (((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_453)).result)).kind != (((rt_int)9LL)))) {
if (((*(P792)rt_nil_check(F->d_452)).b != NULL)) {
F->rc_1609 = NULL;
F->rt_1610 = NULL;
F->rt_1610 = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_452)).b, &F->rc_1609);
g_func_rc_857 = f_freeze_200(F->rc_1609, (*(P802)rt_nil_check(F->y_453)).result);
}
f_put_27(g_fields_buf_843, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_223((*(P802)rt_nil_check(F->y_453)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_453)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_309((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_453)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1599 = (((rt_int)(((((P785)rt_nil_check(F->pfin_1592))->all)).len)) > ((rt_int)0LL));
if (F->has_pfin_1599) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_427((*(P792)rt_nil_check(F->d_452)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_427((*(P792)rt_nil_check(F->d_452)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1611 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1612 = NULL;
F->leave_1612 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1611), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_838, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1611), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1611), rt_str(", ", 2)), f_bool_text_335(f_has_pragmat_427((*(P792)rt_nil_check(F->d_452)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_335(f_has_pragmat_427((*(P792)rt_nil_check(F->d_452)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P785)rt_nil_check((*(P792)rt_nil_check(F->d_452)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->copy_back_1591))->all), rt_str("  ", 2)), (((P785)rt_nil_check(F->leave_1612))->all)); b_; }));
F->nonrec_end_1598 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P785)rt_nil_check(F->leave_1612))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_464((*(P792)rt_nil_check(F->d_452)).c);
f_declare_body_371((*(P792)rt_nil_check(F->d_452)).c);
f_body_elements_473((*(P792)rt_nil_check(F->d_452)).c);
f_close_fins_447(NULL);
if ((F->nonrec_end_1598 != NULL)) {
f_emit_29(&(((P785)rt_nil_check(F->nonrec_end_1598))->all));
f_pop_cleanup_480();
}
if (F->has_pfin_1599) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P785)rt_nil_check(F->pfin_1592))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_480();
F->copy_back_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->copy_back_1591))->all), rt_str("  ", 2)), (((P785)rt_nil_check(F->pfin_1592))->all)); b_; }));
}
f_close_scope_169();
g_fctx_846 = (*(P809)rt_nil_check(g_fctx_846)).next;
g_cur_level_845 = rt_sub(g_cur_level_845, ((rt_int)1LL));
if (((((rt_int)(((((P785)rt_nil_check(F->args_1583))->all)).len)) == ((rt_int)0LL)) || ((*(P802)rt_nil_check(F->y_453)).kind == (((rt_int)9LL))))) {
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P802)rt_nil_check(F->y_453)).kind == (((rt_int)9LL)))) {
F->args_1583 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_223((*(P802)rt_nil_check(F->y_453)).result)), rt_str(" ", 1)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_453)).cname))->all)), rt_str("(", 1)), (((P785)rt_nil_check(F->args_1583))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->head_1588))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->head_1588))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P785)rt_nil_check(F->frame_1589))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_851, g_fields_buf_843);
f_put_27(g_out_frames_851, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P802)rt_nil_check(F->y_453)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P785)rt_nil_check(F->frame_1589))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P785)rt_nil_check(F->frame_1589))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_839, g_code_842);
if (((*(P798)rt_nil_check((*(P802)rt_nil_check(F->y_453)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P785)rt_nil_check(F->copy_back_1591))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_839, &(((P785)rt_nil_check(F->copy_back_1591))->all));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P785)rt_nil_check(F->copy_back_1591))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_839, &(((P785)rt_nil_check(F->copy_back_1591))->all));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_842 = F->saved_code_1576;
g_fields_buf_843 = F->saved_fields_1577;
g_in_func_844 = F->saved_in_1578;
g_func_sym_856 = F->saved_sym_1579;
g_exits_864 = F->saved_exits_1580;
g_gotos_865 = F->saved_gotos_1581;
g_frames_866 = F->saved_frames_1582;
g_handlers_867 = F->saved_handlers_1585;
g_cleanups_868 = F->saved_cleanups_1586;
g_fins_854 = F->saved_fins_1593;
g_func_rc_857 = F->saved_rc_1594;
g_cap_ret_858 = F->saved_ret_1595;
g_cap_rflag_859 = F->saved_rflag_1596;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_456(P792 d_455) {
  struct f_waits_of_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_455 = d_455;
F->w_1613 = NULL;
F->w_1613 = g_cap_waits_848;
while ((F->w_1613 != NULL)) {
if (((*(P821)rt_nil_check(F->w_1613)).d == F->d_455)) {
F->result_ = (((P785)rt_nil_check((*(P821)rt_nil_check(F->w_1613)).w))->all);
goto ret_;
}
F->w_1613 = (*(P821)rt_nil_check(F->w_1613)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_458(P792 elems_457) {
  struct f_task_waits_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_457 = elems_457;
F->e_1614 = NULL;
F->e_1614 = F->elems_457;
F->r_1615 = NULL;
F->r_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1614 != NULL)) {
if (((*(P792)rt_nil_check(F->e_1614)).kind == (((rt_int)50LL)))) {
F->r_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1615))->all), rt_str(" rt_await_decl(&", 16)), (((P785)rt_nil_check((*(P802)rt_nil_check(f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_1614)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if ((((*(P792)rt_nil_check(F->e_1614)).kind == (((rt_int)47LL))) || (((*(P792)rt_nil_check(F->e_1614)).kind == (((rt_int)48LL))) && (((*(P792)rt_nil_check(F->e_1614)).flag == ((rt_int)1LL)) || ((*(P792)rt_nil_check(F->e_1614)).flag == ((rt_int)3LL)))))) {
F->r_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->r_1615))->all), f_waits_of_456(F->e_1614)); b_; }));
}
F->e_1614 = (*(P792)rt_nil_check(F->e_1614)).next;
}
F->result_ = (((P785)rt_nil_check(F->r_1615))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_460(P792 elems_459) {
  struct f_await_tasks_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_459 = elems_459;
F->w_1616 = rt_str_copy(f_task_waits_458(F->elems_459));
if ((((rt_int)((F->w_1616).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1616);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_462(P792 elems_461) {
  struct f_capsule_elements_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_461 = elems_461;
F->e_1617 = NULL;
F->e_1617 = F->elems_461;
while ((F->e_1617 != NULL)) {
if ((((*(P792)rt_nil_check(F->e_1617)).kind >= (((rt_int)20LL))) && ((*(P792)rt_nil_check(F->e_1617)).kind <= (((rt_int)36LL))))) {
f_start_labels_465();
}
f_element_433(F->e_1617);
F->e_1617 = (*(P792)rt_nil_check(F->e_1617)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_464(P792 elems_463) {
  struct f_declare_labels_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_463 = elems_463;
F->e_1618 = NULL;
F->e_1618 = F->elems_463;
while ((F->e_1618 != NULL)) {
F->l_1619 = NULL;
F->l_1619 = (*(P792)rt_nil_check(F->e_1618)).labels;
while ((F->l_1619 != NULL)) {
F->x_1620 = NULL;
F->x_1620 = g_gotos_865;
while (((F->x_1620 != NULL) && ((*(P817)rt_nil_check(F->x_1620)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P785)rt_nil_check((*(P817)rt_nil_check(F->x_1620)).match))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->l_1619)).name))->all))) {
f_fail_23((*(P792)rt_nil_check(F->l_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P785)rt_nil_check((*(P792)rt_nil_check(F->l_1619)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1620 = (*(P817)rt_nil_check(F->x_1620)).next;
}
{ R818 *cell1621 = rt_alloc(sizeof(R818));
(*cell1621).match = NULL;
(*cell1621).label = NULL;
(*cell1621).next = NULL;
F->x_1620 = cell1621;
}
(*(P817)rt_nil_check(F->x_1620)).match = (*(P792)rt_nil_check(F->l_1619)).name;
(*(P817)rt_nil_check(F->x_1620)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P817)rt_nil_check(F->x_1620)).depth = rt_neg(((rt_int)1LL));
(*(P817)rt_nil_check(F->x_1620)).next = g_gotos_865;
g_gotos_865 = F->x_1620;
F->l_1619 = (*(P792)rt_nil_check(F->l_1619)).next;
}
F->e_1618 = (*(P792)rt_nil_check(F->e_1618)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_465(void) {
  struct f_start_labels_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1622 = NULL;
F->x_1622 = g_gotos_865;
while (((F->x_1622 != NULL) && ((*(P817)rt_nil_check(F->x_1622)).depth == rt_neg(((rt_int)1LL))))) {
(*(P817)rt_nil_check(F->x_1622)).depth = g_frames_866;
F->x_1622 = (*(P817)rt_nil_check(F->x_1622)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P817 f_goto_label_467(rstr *name_466) {
  struct f_goto_label_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_466 = name_466;
F->x_1623 = NULL;
F->x_1623 = g_gotos_865;
while ((F->x_1623 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P817)rt_nil_check(F->x_1623)).match))->all), (*F->name_466))) {
F->result_ = F->x_1623;
goto ret_;
}
F->x_1623 = (*(P817)rt_nil_check(F->x_1623)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_469(P792 e_468) {
  struct f_has_return_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_468 = e_468;
F->x_1624 = NULL;
F->x_1624 = F->e_468;
while ((F->x_1624 != NULL)) {
if (((*(P792)rt_nil_check(F->x_1624)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P792)rt_nil_check(F->x_1624)).kind != (((rt_int)45LL))) && ((*(P792)rt_nil_check(F->x_1624)).kind != (((rt_int)46LL)))) && ((*(P792)rt_nil_check(F->x_1624)).kind != (((rt_int)50LL)))) && ((*(P792)rt_nil_check(F->x_1624)).kind != (((rt_int)47LL)))) && ((*(P792)rt_nil_check(F->x_1624)).kind != (((rt_int)51LL))))) {
if ((((((*(P792)rt_nil_check(F->x_1624)).a != NULL) && f_has_return_469((*(P792)rt_nil_check(F->x_1624)).a)) || (((*(P792)rt_nil_check(F->x_1624)).b != NULL) && f_has_return_469((*(P792)rt_nil_check(F->x_1624)).b))) || (((*(P792)rt_nil_check(F->x_1624)).c != NULL) && f_has_return_469((*(P792)rt_nil_check(F->x_1624)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1624 = (*(P792)rt_nil_check(F->x_1624)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_471(P792 elems_470) {
  struct f_capsule_body_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_470 = elems_470;
F->saved_ret_1625 = NULL;
F->saved_ret_1625 = g_cap_ret_858;
F->saved_flag_1626 = NULL;
F->saved_flag_1626 = g_cap_rflag_859;
F->saved_frames_1627 = g_ret_frames_860;
F->e_1628 = NULL;
F->e_1628 = F->elems_470;
if ((!f_has_return_469(F->elems_470))) {
g_cap_ret_858 = NULL;
g_cap_rflag_859 = NULL;
f_capsule_elements_462(F->elems_470);
} else {
g_cap_rflag_859 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(g_cap_rflag_859))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1628 != NULL)) {
F->stmt_1629 = (((*(P792)rt_nil_check(F->e_1628)).kind >= (((rt_int)20LL))) && ((*(P792)rt_nil_check(F->e_1628)).kind <= (((rt_int)36LL))));
g_cap_ret_858 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_860 = g_frames_866;
if (F->stmt_1629) {
f_start_labels_465();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P785)rt_nil_check(g_cap_rflag_859))->all)), rt_str(") {", 3)); b_; }));
}
f_element_433(F->e_1628);
if (F->stmt_1629) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(g_cap_ret_858))->all), rt_str(": ;", 3)); b_; }));
F->e_1628 = (*(P792)rt_nil_check(F->e_1628)).next;
}
}
g_cap_ret_858 = F->saved_ret_1625;
g_cap_rflag_859 = F->saved_flag_1626;
g_ret_frames_860 = F->saved_frames_1627;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_473(P792 elems_472) {
  struct f_body_elements_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_472 = elems_472;
f_capsule_elements_462(F->elems_472);
f_await_tasks_460(F->elems_472);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_475(P792 elems_474) {
  struct f_gen_body_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_474 = elems_474;
F->saved_1630 = NULL;
F->saved_1630 = g_fins_854;
F->saved_gotos_1631 = NULL;
F->saved_gotos_1631 = g_gotos_865;
f_open_scope_168();
f_declare_labels_464(F->elems_474);
f_declare_body_371(F->elems_474);
f_body_elements_473(F->elems_474);
f_close_fins_447(F->saved_1630);
f_close_scope_169();
g_gotos_865 = F->saved_gotos_1631;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_477(rt_int upto_476) {
  struct f_pop_frames_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_476 = upto_476;
F->i_1632 = g_frames_866;
F->c_1633 = NULL;
F->c_1633 = g_cleanups_868;
while ((F->i_1632 > F->upto_476)) {
f_emit_29(&(((P785)rt_nil_check((*(P796)rt_nil_check(F->c_1633)).s))->all));
F->c_1633 = (*(P796)rt_nil_check(F->c_1633)).next;
F->i_1632 = rt_sub(F->i_1632, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_479(rstr *s_478) {
  struct f_push_cleanup_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_478 = s_478;
F->c_1634 = NULL;
{ R797 *cell1635 = rt_alloc(sizeof(R797));
(*cell1635).s = NULL;
(*cell1635).next = NULL;
F->c_1634 = cell1635;
}
(*(P796)rt_nil_check(F->c_1634)).s = f_mk_3(&(*F->s_478));
(*(P796)rt_nil_check(F->c_1634)).next = g_cleanups_868;
g_cleanups_868 = F->c_1634;
g_frames_866 = rt_add(g_frames_866, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_480(void) {
  struct f_pop_cleanup_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_868 = (*(P796)rt_nil_check(g_cleanups_868)).next;
g_frames_866 = rt_sub(g_frames_866, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_482(P792 s_481) {
  struct f_gen_statement_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_481 = s_481;
F->label_1636 = NULL;
F->gl_1637 = NULL;
F->gl_1637 = (*(P792)rt_nil_check(F->s_481)).labels;
while ((F->gl_1637 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P817)rt_nil_check(f_goto_label_467(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->gl_1637)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1637 = (*(P792)rt_nil_check(F->gl_1637)).next;
}
if (((*(P792)rt_nil_check(F->s_481)).tag != NULL)) {
F->x_1638 = NULL;
{ R818 *cell1639 = rt_alloc(sizeof(R818));
(*cell1639).match = NULL;
(*cell1639).label = NULL;
(*cell1639).next = NULL;
F->x_1638 = cell1639;
}
F->label_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P817)rt_nil_check(F->x_1638)).match = (*(P792)rt_nil_check(F->s_481)).tag;
(*(P817)rt_nil_check(F->x_1638)).label = F->label_1636;
(*(P817)rt_nil_check(F->x_1638)).depth = g_frames_866;
(*(P817)rt_nil_check(F->x_1638)).next = g_exits_864;
g_exits_864 = F->x_1638;
}
{ rt_int sel1640 = (*(P792)rt_nil_check(F->s_481)).kind;
if (0 || (sel1640 == (((rt_int)20LL)))) {
f_st_assign_484(F->s_481);
} else if (0 || (sel1640 == (((rt_int)21LL)))) {
f_st_call_486(F->s_481);
} else if (0 || (sel1640 == (((rt_int)22LL)))) {
f_st_if_488(F->s_481);
} else if (0 || (sel1640 == (((rt_int)23LL)))) {
f_st_case_490(F->s_481);
} else if (0 || (sel1640 == (((rt_int)24LL)))) {
f_st_repeat_492(F->s_481);
} else if (0 || (sel1640 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_475((*(P792)rt_nil_check(F->s_481)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1640 == (((rt_int)27LL)))) {
f_st_exit_494(F->s_481);
} else if (0 || (sel1640 == (((rt_int)29LL)))) {
{
F->x_1641 = NULL;
F->x_1641 = f_goto_label_467(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->s_481)).name))->all));
if ((F->x_1641 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_481)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->s_481)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_477((*(P817)rt_nil_check(F->x_1641)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P785)rt_nil_check((*(P817)rt_nil_check(F->x_1641)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1640 == (((rt_int)28LL)))) {
f_st_return_496(F->s_481);
} else if (0 || (sel1640 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_503(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->s_481)).name))->all), (*(P792)rt_nil_check(F->s_481)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1640 == (((rt_int)31LL)))) {
if ((g_handlers_867 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_481)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P785)rt_nil_check((*(P796)rt_nil_check(g_handlers_867)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1640 == (((rt_int)26LL)))) {
f_st_guard_505(F->s_481);
} else if (0 || (sel1640 == (((rt_int)32LL)))) {
f_st_alloc_507(F->s_481);
} else if (0 || (sel1640 == (((rt_int)34LL)))) {
f_st_create_511(F->s_481);
} else if (0 || (sel1640 == (((rt_int)35LL)))) {
f_st_wait_540(F->s_481);
} else if (0 || (sel1640 == (((rt_int)36LL)))) {
f_st_region_548(F->s_481);
} else {
f_fail_23((*(P792)rt_nil_check(F->s_481)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P792)rt_nil_check(F->s_481)).tag != NULL)) {
g_exits_864 = (*(P817)rt_nil_check(g_exits_864)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->label_1636))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_484(P792 s_483) {
  struct f_st_assign_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_483 = s_483;
F->lv_1642 = NULL;
F->t_1643 = NULL;
F->vt_1644 = NULL;
F->c_1645 = NULL;
if (((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).kind == (((rt_int)10LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b != NULL)) && ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_606((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).a, &F->lv_1642, &F->t_1643, &F->c_1645, &F->ro_1646);
while (((*(P798)rt_nil_check(F->t_1643)).kind == (((rt_int)8LL)))) {
f_finish_ptr_400(F->t_1643);
F->lv_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_598(&(((P785)rt_nil_check(F->lv_1642))->all), F->t_1643); b_; }));
F->t_1643 = (*(P798)rt_nil_check(F->t_1643)).target;
}
if ((((*(P798)rt_nil_check(F->t_1643)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->t_1643)).tparams == NULL))) {
F->t_1643 = (*(P798)rt_nil_check(F->t_1643)).under;
} else if (((*(P798)rt_nil_check(F->t_1643)).kind == (((rt_int)15LL)))) {
F->lv_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->lv_1642))->all), rt_str(".all", 4)); b_; }));
F->t_1643 = (*(P798)rt_nil_check(F->t_1643)).under;
}
if ((((!F->ro_1646) && ((*(P798)rt_nil_check(F->t_1643)).kind == (((rt_int)6LL)))) && ((*(P798)rt_nil_check(F->t_1643)).ndim == ((rt_int)1LL)))) {
F->lo_1647 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b)).a, (*(P798)rt_nil_check(F->t_1643)).idx, &F->vt_1644));
F->hi_1648 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b)).b, (*(P798)rt_nil_check(F->t_1643)).idx, &F->vt_1644));
F->v_1649 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->s_483)).b, F->t_1643, &F->vt_1644));
f_need_slice_618(F->t_1643);
f_check_type_221(F->vt_1644, F->t_1643, (*(P792)rt_nil_check(F->s_483)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_223(F->t_1643)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_223(F->t_1643)), rt_str("(", 1)), (((P785)rt_nil_check(F->lv_1642))->all)), rt_str(", ", 2)), F->lo_1647), rt_str(", ", 2)), F->hi_1648), rt_str("); as_", 6)), f_ctype_223(F->t_1643)), rt_str("(&sl_, ", 7)), F->v_1649), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_1646 || ((*(P798)rt_nil_check(F->t_1643)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P792)rt_nil_check(F->s_483)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1650 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b)).a, g_ty_int_871, &F->vt_1644));
F->hi_1651 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->s_483)).a)).b)).b, g_ty_int_871, &F->vt_1644));
F->v_1652 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->s_483)).b, g_ty_string_875, &F->vt_1644));
f_check_type_221(F->vt_1644, g_ty_string_875, (*(P792)rt_nil_check(F->s_483)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P785)rt_nil_check(F->lv_1642))->all)), rt_str(", ", 2)), F->lo_1650), rt_str(", ", 2)), F->hi_1651), rt_str(", ", 2)), F->v_1652), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_606((*(P792)rt_nil_check(F->s_483)).a, &F->lv_1642, &F->t_1643, &F->c_1645, &F->ro_1646);
if (F->ro_1646) {
f_fail_23((*(P792)rt_nil_check(F->s_483)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_292(F->t_1643)) && (!f_exports_op_393((*(P798)rt_nil_check(F->t_1643)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P792)rt_nil_check(F->s_483)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_1643)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1653 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->s_483)).b, F->t_1643, F->c_1645, &F->vt_1644));
f_check_type_221(F->vt_1644, F->t_1643, (*(P792)rt_nil_check(F->s_483)).line);
f_ptr_subtype_check_420(F->t_1643, F->c_1645, (*(P792)rt_nil_check(F->s_483)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_352(&(((P785)rt_nil_check(F->lv_1642))->all), F->t_1643, &F->v_1653, F->c_1645); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_486(P792 s_485) {
  struct f_st_call_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_485 = s_485;
F->c_1654 = NULL;
F->c_1654 = (*(P792)rt_nil_check(F->s_485)).a;
F->t_1655 = NULL;
if ((((*(P792)rt_nil_check(F->c_1654)).kind == (((rt_int)7LL))) || ((*(P792)rt_nil_check(F->c_1654)).kind == (((rt_int)12LL))))) {
F->x_1656 = NULL;
F->x_1656 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->c_1654)).line);
(*(P792)rt_nil_check(F->x_1656)).a = F->c_1654;
F->c_1654 = F->x_1656;
}
if (((*(P792)rt_nil_check(F->c_1654)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P792)rt_nil_check(F->s_485)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_756(F->c_1654, 1, &F->t_1655), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_488(P792 s_487) {
  struct f_st_if_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_487 = s_487;
F->a_1657 = NULL;
F->a_1657 = (*(P792)rt_nil_check(F->s_487)).a;
F->first_1658 = 1;
F->t_1659 = NULL;
F->taken_1660 = 0;
F->mv_1662 = NULL;
while (((F->a_1657 != NULL) && (!F->taken_1660))) {
F->mv_1662 = f_meval_333((*(P792)rt_nil_check(F->a_1657)).a, &F->ok_1661);
if (((F->ok_1661 && ((*(P811)rt_nil_check(F->mv_1662)).kind == (((rt_int)2LL)))) && ((*(P811)rt_nil_check(F->mv_1662)).i == ((rt_int)0LL)))) {
F->a_1657 = (*(P792)rt_nil_check(F->a_1657)).next;
} else {
if ((F->ok_1661 && ((*(P811)rt_nil_check(F->mv_1662)).kind == (((rt_int)2LL))))) {
F->taken_1660 = 1;
if (F->first_1658) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1663 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->a_1657)).a, g_ty_bool_872, &F->t_1659));
f_check_type_221(F->t_1659, g_ty_bool_872, (*(P792)rt_nil_check(F->s_487)).line);
if (F->first_1658) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1663), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1663), rt_str(") {", 3)); b_; }));
}
}
F->first_1658 = 0;
f_gen_body_475((*(P792)rt_nil_check(F->a_1657)).b);
F->a_1657 = (*(P792)rt_nil_check(F->a_1657)).next;
}
}
if ((((*(P792)rt_nil_check(F->s_487)).flag == ((rt_int)1LL)) && (!F->taken_1660))) {
if (F->first_1658) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1658 = 0;
f_gen_body_475((*(P792)rt_nil_check(F->s_487)).b);
}
if ((!F->first_1658)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_490(P792 s_489) {
  struct f_st_case_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_489 = s_489;
F->st_1664 = NULL;
F->vt_1665 = NULL;
F->first_1666 = 1;
F->a_1667 = NULL;
F->a_1667 = (*(P792)rt_nil_check(F->s_489)).b;
F->sel_1668 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->s_489)).a, NULL, &F->st_1664));
F->tmp_1669 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_223(F->st_1664)), rt_str(" ", 1)), F->tmp_1669), rt_str(" = ", 3)), F->sel_1668), rt_str(";", 1)); b_; }));
while ((F->a_1667 != NULL)) {
F->lab_1670 = NULL;
F->lab_1670 = (*(P792)rt_nil_check(F->a_1667)).a;
F->conds_1671 = NULL;
F->conds_1671 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1670 != NULL)) {
if (((*(P792)rt_nil_check(F->lab_1670)).b == NULL)) {
F->v_1672 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->lab_1670)).a, F->st_1664, &F->vt_1665));
f_check_type_221(F->vt_1665, F->st_1664, (*(P792)rt_nil_check(F->s_489)).line);
F->conds_1671 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->conds_1671))->all), rt_str(" || ", 4)), f_eq_code_359(F->st_1664, &F->tmp_1669, &F->v_1672)); b_; }));
} else {
F->lo_1673 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->lab_1670)).a, F->st_1664, &F->vt_1665));
F->hi_1674 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->lab_1670)).b, F->st_1664, &F->vt_1665));
F->conds_1671 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->conds_1671))->all), rt_str(" || (", 5)), F->tmp_1669), rt_str(" >= ", 4)), F->lo_1673), rt_str(" && ", 4)), F->tmp_1669), rt_str(" <= ", 4)), F->hi_1674), rt_str(")", 1)); b_; }));
}
F->lab_1670 = (*(P792)rt_nil_check(F->lab_1670)).next;
}
if (F->first_1666) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P785)rt_nil_check(F->conds_1671))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P785)rt_nil_check(F->conds_1671))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1666 = 0;
f_gen_body_475((*(P792)rt_nil_check(F->a_1667)).b);
F->a_1667 = (*(P792)rt_nil_check(F->a_1667)).next;
}
if (F->first_1666) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P792)rt_nil_check(F->s_489)).flag == ((rt_int)1LL))) {
f_gen_body_475((*(P792)rt_nil_check(F->s_489)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_492(P792 s_491) {
  struct f_st_repeat_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_491 = s_491;
F->t_1675 = NULL;
F->c_1676 = NULL;
if (((*(P792)rt_nil_check(F->s_491)).flag == ((rt_int)0LL))) {
F->cond_1677 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->s_491)).a, g_ty_bool_872, &F->t_1675));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1677), rt_str(") {", 3)); b_; }));
f_gen_body_475((*(P792)rt_nil_check(F->s_491)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1675 = f_resolve_subtype_254((*(P792)rt_nil_check(F->s_491)).a, &F->c_1676);
F->c_1676 = f_base_cons_215(F->t_1675, F->c_1676);
if ((((*(P798)rt_nil_check(f_base_of_212(F->t_1675))).kind == (((rt_int)4LL))) && ((*(P794)rt_nil_check(F->c_1676)).lo == NULL))) {
F->c_1676 = f_new_cons_175();
(*(P794)rt_nil_check(F->c_1676)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P794)rt_nil_check(F->c_1676)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check(f_base_of_212(F->t_1675))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P794)rt_nil_check(F->c_1676)).lo == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_491)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1678 = rt_str_copy(f_storage_438(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->s_491)).name))->all), F->t_1675));
F->lov_1679 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1680 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1681 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1682 = NULL;
F->y_1682 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->s_491)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1679), rt_str(" = ", 3)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_1676)).lo))->all)), rt_str(", ", 2)), F->hiv_1680), rt_str(" = ", 3)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_1676)).hi))->all)), rt_str(";", 1)); b_; }));
if (((*(P792)rt_nil_check(F->s_491)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1681), rt_str(" = ", 3)), F->hiv_1680), rt_str("; ", 2)), F->it_1681), rt_str(" >= ", 4)), F->lov_1679), rt_str("; ", 2)), F->it_1681), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1681), rt_str(" = ", 3)), F->lov_1679), rt_str("; ", 2)), F->it_1681), rt_str(" <= ", 4)), F->hiv_1680), rt_str("; ", 2)), F->it_1681), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1678, rt_str(" = ", 3)), F->it_1681), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P802)rt_nil_check(F->y_1682)).t = F->t_1675;
(*(P802)rt_nil_check(F->y_1682)).c = F->c_1676;
f_bind_441(F->y_1682, &F->access_1678);
(*(P802)rt_nil_check(F->y_1682)).ro_flag = 1;
f_define_159(F->y_1682, (*(P792)rt_nil_check(F->s_491)).line);
f_gen_body_475((*(P792)rt_nil_check(F->s_491)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_494(P792 s_493) {
  struct f_st_exit_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_493 = s_493;
F->x_1683 = NULL;
F->x_1683 = g_exits_864;
while ((F->x_1683 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P817)rt_nil_check(F->x_1683)).match))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->s_493)).name))->all))) {
f_pop_frames_477((*(P817)rt_nil_check(F->x_1683)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P785)rt_nil_check((*(P817)rt_nil_check(F->x_1683)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1683 = (*(P817)rt_nil_check(F->x_1683)).next;
}
f_fail_23((*(P792)rt_nil_check(F->s_493)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P785)rt_nil_check((*(P792)rt_nil_check(F->s_493)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_496(P792 s_495) {
  struct f_st_return_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_495 = s_495;
F->vt_1684 = NULL;
if ((g_cap_ret_858 != NULL)) {
if (((*(P792)rt_nil_check(F->s_495)).a != NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_495)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_477(g_ret_frames_860);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(g_cap_rflag_859))->all), rt_str(" = 1; goto ", 11)), (((P785)rt_nil_check(g_cap_ret_858))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_844)) {
f_pop_frames_477(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P798)rt_nil_check((*(P802)rt_nil_check(g_func_sym_856)).result)).kind == (((rt_int)9LL)))) {
if (((*(P792)rt_nil_check(F->s_495)).a != NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_495)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_477(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P792)rt_nil_check(F->s_495)).a == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->s_495)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1685 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->s_495)).a, (*(P802)rt_nil_check(g_func_sym_856)).result, g_func_rc_857, &F->vt_1684));
f_check_type_221(F->vt_1684, (*(P802)rt_nil_check(g_func_sym_856)).result, (*(P792)rt_nil_check(F->s_495)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_500((*(P802)rt_nil_check(g_func_sym_856)).result, g_func_rc_857, &F->v_1685)), rt_str(";", 1)); b_; }));
f_pop_frames_477(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_500(P798 t_497, P794 c_498, rstr *v_499) {
  struct f_result_checked_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_497 = t_497;
F->c_498 = c_498;
F->v_499 = v_499;
if ((F->c_498 == NULL)) {
F->result_ = (*F->v_499);
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_497)).kind == (((rt_int)5LL))) && ((*(P794)rt_nil_check(F->c_498)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_499)), rt_str(", ", 2)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_498)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->t_497)).kind == (((rt_int)6LL))) && ((*(P794)rt_nil_check(F->c_498)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223(F->t_497)), rt_str(" r_ = ", 6)), (*F->v_499)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_498)).lo))->all)), rt_str(", ", 2)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_498)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_497, F->c_498, &(*F->v_499));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_503(rstr *name_501, rt_int line_502) {
  struct f_exc_id_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_501 = name_501;
F->line_502 = line_502;
F->y_1686 = NULL;
F->y_1686 = f_lookup_154(&(*F->name_501));
if (((F->y_1686 != NULL) && ((*(P802)rt_nil_check(F->y_1686)).kind == (((rt_int)7LL))))) {
F->result_ = (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1686)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_501)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_501), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_501)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_501), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_505(P792 s_504) {
  struct f_st_guard_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_504 = s_504;
F->h_1687 = NULL;
F->h_1687 = (*(P792)rt_nil_check(F->s_504)).b;
F->first_1688 = 1;
F->hv_1689 = NULL;
{
F->f_1690 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1691 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1690), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1690), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1690), rt_str(")) {", 4)); b_; }));
f_gen_body_475((*(P792)rt_nil_check(F->s_504)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1690), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_480();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1690), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1691), rt_str(" = rt_xcur;", 11)); b_; }));
{ R797 *cell1692 = rt_alloc(sizeof(R797));
(*cell1692).s = NULL;
(*cell1692).next = NULL;
F->hv_1689 = cell1692;
}
(*(P796)rt_nil_check(F->hv_1689)).s = f_mk_3(&F->x_1691);
(*(P796)rt_nil_check(F->hv_1689)).next = g_handlers_867;
g_handlers_867 = F->hv_1689;
while ((F->h_1687 != NULL)) {
F->n_1693 = NULL;
F->n_1693 = (*(P792)rt_nil_check(F->h_1687)).a;
F->conds_1694 = NULL;
F->conds_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1693 != NULL)) {
F->conds_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->conds_1694))->all), rt_str(" || ", 4)), F->x_1691), rt_str(" == ", 4)), f_exc_id_503(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->n_1693)).name))->all), (*(P792)rt_nil_check(F->s_504)).line)); b_; }));
F->n_1693 = (*(P792)rt_nil_check(F->n_1693)).next;
}
if (F->first_1688) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P785)rt_nil_check(F->conds_1694))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P785)rt_nil_check(F->conds_1694))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1688 = 0;
f_gen_body_475((*(P792)rt_nil_check(F->h_1687)).b);
F->h_1687 = (*(P792)rt_nil_check(F->h_1687)).next;
}
if (F->first_1688) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P792)rt_nil_check(F->s_504)).flag == ((rt_int)1LL))) {
f_gen_body_475((*(P792)rt_nil_check(F->s_504)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1691), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_867 = (*(P796)rt_nil_check(g_handlers_867)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_507(P792 s_506) {
  struct f_st_alloc_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_506 = s_506;
F->lv_1695 = NULL;
F->t_1696 = NULL;
F->target_1697 = NULL;
F->vt_1698 = NULL;
F->c_1699 = NULL;
F->tc_1700 = NULL;
F->d_1702 = NULL;
F->p_1703 = NULL;
F->a_1704 = NULL;
f_lvalue_606((*(P792)rt_nil_check(F->s_506)).a, &F->lv_1695, &F->t_1696, &F->c_1699, &F->ro_1701);
if (((*(P798)rt_nil_check(F->t_1696)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P792)rt_nil_check(F->s_506)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_400(F->t_1696);
F->d_1702 = (*(P798)rt_nil_check(F->t_1696)).decl;
F->target_1697 = (*(P798)rt_nil_check(F->t_1696)).target;
if ((f_list_len_67((*(P792)rt_nil_check(F->s_506)).b) != f_list_len_67((*(P792)rt_nil_check(F->d_1702)).b))) {
f_fail_23((*(P792)rt_nil_check(F->s_506)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P792)rt_nil_check(F->d_1702)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P792)rt_nil_check(F->d_1702)).b != NULL)) {
f_alloc_cell_412(F->s_506, &(((P785)rt_nil_check(F->lv_1695))->all), F->t_1696, F->c_1699);
goto ret_;
}
{
F->tcn_1705 = rt_str_copy(f_ctype_223(F->target_1697));
F->cell_1706 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_311(F->target_1697)) {
F->fn_1707 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_853 = 1;
g_uses_findyn_855 = 1;
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1707), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1707), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_844) {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P785)rt_nil_check((*(P802)rt_nil_check(g_func_sym_856)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1705), rt_str(" *)cell_)", 9)); b_; }), F->target_1697)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_844) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1705), rt_str(" *", 2)), F->cell_1706), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1705), rt_str("), ", 3)), F->fn_1707), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1705), rt_str(" *", 2)), F->cell_1706), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1705), rt_str("), ", 3)), F->fn_1707), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1705), rt_str(" *", 2)), F->cell_1706), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1705), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_407((*(P792)rt_nil_check(F->d_1702)).d, f_ptr_args_402(F->c_1699), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P792)rt_nil_check(F->s_506)).line);
F->vt_1698 = f_resolve_subtype_254((*(P792)rt_nil_check(F->d_1702)).a, &F->tc_1700);
f_init_storage_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1706), rt_str(")", 1)); b_; }), F->target_1697, F->tc_1700);
f_close_scope_169();
if (((*(P792)rt_nil_check(F->s_506)).c != NULL)) {
F->v_1708 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->s_506)).c, F->target_1697, F->tc_1700, &F->vt_1698));
f_check_type_221(F->vt_1698, F->target_1697, (*(P792)rt_nil_check(F->s_506)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_352(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1706), rt_str(")", 1)); b_; }), F->target_1697, &F->v_1708, F->tc_1700); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->lv_1695))->all), rt_str(" = ", 3)), F->cell_1706), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_509(P792 e_508) {
  struct f_act_ref_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_508 = e_508;
F->lv_1709 = NULL;
F->t_1710 = NULL;
F->c_1711 = NULL;
if (((((*(P792)rt_nil_check(F->e_508)).kind == (((rt_int)7LL))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_508)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_600(F->e_508))) {
F->v_1713 = rt_str_copy(f_gexpr_637(F->e_508, g_ty_act_881, &F->t_1710));
if (((*(P798)rt_nil_check(F->t_1710)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P792)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1713;
goto ret_;
}
f_lvalue_606(F->e_508, &F->lv_1709, &F->t_1710, &F->c_1711, &F->ro_1712);
if (((*(P798)rt_nil_check(F->t_1710)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P792)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P785)rt_nil_check(F->lv_1709))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_511(P792 s_510) {
  struct f_st_create_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_510 = s_510;
F->y_1714 = NULL;
F->y_1714 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->s_510)).name))->all));
F->pm_1715 = NULL;
F->a_1716 = NULL;
F->a_1716 = (*(P792)rt_nil_check(F->s_510)).b;
F->lv_1717 = NULL;
F->lt_1718 = NULL;
F->vt_1719 = NULL;
F->lc_1720 = NULL;
if (((F->y_1714 != NULL) && ((*(P802)rt_nil_check(F->y_1714)).kind == (((rt_int)10LL))))) {
F->y_1714 = f_instantiate_582(F->y_1714, (*(P792)rt_nil_check(F->s_510)).e, (*(P792)rt_nil_check(F->s_510)).b, (*(P792)rt_nil_check(F->s_510)).line);
}
if (((F->y_1714 == NULL) || ((*(P802)rt_nil_check(F->y_1714)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P792)rt_nil_check(F->s_510)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->s_510)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1715 = (*(P802)rt_nil_check(F->y_1714)).params;
{
F->at_1722 = NULL;
F->ac_1723 = NULL;
F->act_1725 = NULL;
F->nf_1726 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_606((*(P792)rt_nil_check(F->s_510)).a, &F->lv_1717, &F->at_1722, &F->ac_1723, &F->aro_1724);
if (((*(P798)rt_nil_check(F->at_1722)).kind == (((rt_int)14LL)))) {
F->act_1725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_509((*(P792)rt_nil_check(F->s_510)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1714)).cname))->all)), rt_str("fr *", 4)), F->nf_1726), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1726), rt_str(");", 2)); b_; }));
if (((*(P802)rt_nil_check(F->y_1714)).level > ((rt_int)0LL))) {
F->link_1727 = NULL;
F->link_1727 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1729 = ((rt_int)1LL), hi1730 = rt_sub(g_cur_level_845, (*(P802)rt_nil_check(F->y_1714)).level);
for (rt_int it1731 = lo1729; it1731 <= hi1730; it1731++) {
F->i_1728 = it1731;
F->link_1727 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->link_1727))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1726, rt_str("->up = ", 7)), (((P785)rt_nil_check(F->link_1727))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1716 != NULL) && (F->pm_1715 != NULL))) {
if (((*(P804)rt_nil_check(F->pm_1715)).mode == (((rt_int)1LL)))) {
F->v_1732 = rt_str_copy(f_gexpr_in_645(F->a_1716, (*(P804)rt_nil_check(F->pm_1715)).t, (*(P804)rt_nil_check(F->pm_1715)).c, &F->vt_1719));
f_check_type_221(F->vt_1719, (*(P804)rt_nil_check(F->pm_1715)).t, (*(P792)rt_nil_check(F->s_510)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1726, rt_str("->", 2)), (((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_1715)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_355((*(P804)rt_nil_check(F->pm_1715)).t, &F->v_1732)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_606(F->a_1716, &F->lv_1717, &F->lt_1718, &F->lc_1720, &F->ro_1721);
f_check_type_221(F->lt_1718, (*(P804)rt_nil_check(F->pm_1715)).t, (*(P792)rt_nil_check(F->s_510)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1726, rt_str("->", 2)), (((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_1715)).cfield))->all)), rt_str(" = &", 4)), (((P785)rt_nil_check(F->lv_1717))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P804)rt_nil_check(F->pm_1715)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1726, rt_str("->", 2)), (((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_1715)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1718, F->lc_1720)), rt_str("; ", 2)), F->nf_1726), rt_str("->", 2)), (((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_1715)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1718, F->lc_1720)), rt_str(";", 1)); b_; }));
}
}
F->a_1716 = (*(P792)rt_nil_check(F->a_1716)).next;
F->pm_1715 = (*(P804)rt_nil_check(F->pm_1715)).next;
}
if (((F->a_1716 != NULL) || (F->pm_1715 != NULL))) {
f_fail_23((*(P792)rt_nil_check(F->s_510)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P785)rt_nil_check((*(P792)rt_nil_check(F->s_510)).name))->all)); b_; }));
}
if ((F->act_1725 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P785)rt_nil_check(F->act_1725))->all)), rt_str(", &", 3)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1714)).cname))->all)), rt_str("decl, ", 6)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1714)).cname))->all)), rt_str(", ", 2)), F->nf_1726), rt_str("); }", 4)); b_; }));
} else {
f_user_create_521(F->s_510, F->y_1714, &(((P785)rt_nil_check(F->lv_1717))->all), F->at_1722, &F->nf_1726);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_515(rstr *name_512, P798 t_513, rstr *place_514) {
  struct f_hidden_var_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_512 = name_512;
F->t_513 = t_513;
F->place_514 = place_514;
F->y_1733 = NULL;
F->y_1733 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_512)));
(*(P802)rt_nil_check(F->y_1733)).t = F->t_513;
(*(P802)rt_nil_check(F->y_1733)).level = ((rt_int)0LL);
(*(P802)rt_nil_check(F->y_1733)).access = f_mk_3(&(*F->place_514));
f_define_159(F->y_1733, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_521(P792 s_516, P802 y_517, rstr *uv_518, P798 ut_519, rstr *nf_520) {
  struct f_user_create_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_516 = s_516;
F->y_517 = y_517;
F->uv_518 = uv_518;
F->ut_519 = ut_519;
F->nf_520 = nf_520;
F->t_1734 = NULL;
F->saved_1735 = NULL;
F->saved_1735 = g_code_842;
F->hook_1736 = NULL;
F->hook_1736 = f_new_buffer_24();
F->un_1737 = NULL;
F->un_1737 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->s_516)).line);
F->hn_1738 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1739 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1740 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1741 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_515(&F->uname_1740, F->ut_519, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_223(F->ut_519)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P792)rt_nil_check(F->un_1737)).name = f_mk_3(&F->uname_1740);
g_code_842 = F->hook_1736;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1737, (*(P792)rt_nil_check(F->s_516)).line), 1, &F->t_1734)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1737, (*(P792)rt_nil_check(F->s_516)).line), 1, &F->t_1734)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1737, (*(P792)rt_nil_check(F->s_516)).line), 1, &F->t_1734)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1737, (*(P792)rt_nil_check(F->s_516)).line), 1, &F->t_1734)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_842 = F->saved_1735;
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1738), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1738), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_844) {
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P785)rt_nil_check((*(P802)rt_nil_check(g_func_sym_856)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_839, F->hook_1736);
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1739), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1739, rt_str("->hook = ", 9)), F->hn_1738), rt_str("; ", 2)), F->aa_1739), rt_str("->ua = &", 8)), (*F->uv_518)), rt_str("; ", 2)), F->aa_1739), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_746(F->ut_519)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_844) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1739, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1739), rt_str(", &", 3)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_517)).cname))->all)), rt_str("decl, ", 6)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_517)).cname))->all)), rt_str(", ", 2)), (*F->nf_520)), rt_str(");", 2)); b_; }));
f_hidden_var_515(&F->aname_1741, g_ty_act_881, &F->aa_1739);
{
F->start_1742 = NULL;
F->start_1742 = f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P792)rt_nil_check(F->s_516)).a, (*(P792)rt_nil_check(F->s_516)).line);
F->an_1743 = NULL;
F->an_1743 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->s_516)).line);
(*(P792)rt_nil_check(F->an_1743)).name = f_mk_3(&F->aname_1741);
(*(P792)rt_nil_check((*(P792)rt_nil_check(F->start_1742)).b)).next = F->an_1743;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_756(F->start_1742, 1, &F->t_1734), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_526(P792 inv_522, rstr *arr_523, rt_int i_524, int mixed_525) {
  struct f_wait_alt_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_522 = inv_522;
F->arr_523 = arr_523;
F->i_524 = i_524;
F->mixed_525 = mixed_525;
F->lv_1744 = NULL;
F->t_1745 = NULL;
F->vt_1746 = NULL;
F->c_1747 = NULL;
F->fn_1749 = NULL;
F->args_1750 = NULL;
F->slot_1751 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_523), rt_str("[", 1)), f_itos_7(F->i_524)), rt_str("]", 1)));
if ((((*(P792)rt_nil_check(F->inv_522)).kind != (((rt_int)10LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_522)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P792)rt_nil_check(F->inv_522)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1749 = (*(P792)rt_nil_check(F->inv_522)).a;
F->args_1750 = (*(P792)rt_nil_check(F->inv_522)).b;
if ((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_606(F->args_1750, &F->lv_1744, &F->t_1745, &F->c_1747, &F->ro_1748);
if (((*(P798)rt_nil_check(F->t_1745)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P792)rt_nil_check(F->inv_522)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1752 = NULL;
F->dt_1753 = NULL;
f_lvalue_606((*(P792)rt_nil_check(F->args_1750)).next, &F->dv_1752, &F->dt_1753, &F->c_1747, &F->ro_1748);
f_check_type_221(F->dt_1753, (*(P798)rt_nil_check(F->t_1745)).elem, (*(P792)rt_nil_check(F->inv_522)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P785)rt_nil_check(F->lv_1744))->all)), rt_str(", &", 3)), (((P785)rt_nil_check(F->dv_1752))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1754 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1755 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_1750)).next, (*(P798)rt_nil_check(F->t_1745)).elem, &F->vt_1746));
f_check_type_221(F->vt_1746, (*(P798)rt_nil_check(F->t_1745)).elem, (*(P792)rt_nil_check(F->inv_522)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_223((*(P798)rt_nil_check(F->t_1745)).elem), rt_str(" ", 1)), F->tmp_1754), rt_str(" = ", 3)), F->v_1755), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P785)rt_nil_check(F->lv_1744))->all)), rt_str(", &", 3)), F->tmp_1754), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1756 = rt_str_copy(f_gexpr_637(F->args_1750, g_ty_int_871, &F->vt_1746));
if ((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("DELAY", 5)) && F->mixed_525)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1756), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1756), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1756), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1751, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_509(F->args_1750)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->inv_522)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_1749)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_528(P792 inv_527) {
  struct f_builtin_wait_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_527 = inv_527;
F->lv_1757 = NULL;
F->t_1758 = NULL;
F->c_1759 = NULL;
F->saved_1761 = NULL;
F->saved_1761 = g_code_842;
F->ok_1762 = 0;
if ((((*(P792)rt_nil_check(F->inv_527)).kind != (((rt_int)10LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_527)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_869 = rt_add(g_trial_869, ((rt_int)1LL));
g_code_842 = f_new_buffer_24();
{ rt_frame xf1763;
if (RT_TRY(xf1763)) {
f_lvalue_606((*(P792)rt_nil_check(F->inv_527)).b, &F->lv_1757, &F->t_1758, &F->c_1759, &F->ro_1760);
F->ok_1762 = ((*(P798)rt_nil_check(F->t_1758)).kind == (((rt_int)12LL)));
RT_POP(xf1763);
} else {
RT_POP(xf1763);
int x1764 = rt_xcur;
if (0 || x1764 == ex_compile_error_1) {
F->ok_1762 = 0;
} else {
rt_raise(x1764);
}
}
}
g_trial_869 = rt_sub(g_trial_869, ((rt_int)1LL));
g_code_842 = F->saved_1761;
F->result_ = F->ok_1762;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_533(P792 inv_529, rstr *op_530, rstr *q_531, int is_stmt_532) {
  struct f_wait_op_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_529 = inv_529;
F->op_530 = op_530;
F->q_531 = q_531;
F->is_stmt_532 = is_stmt_532;
F->x_1765 = NULL;
F->x_1765 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->inv_529)).line);
F->f_1766 = NULL;
F->f_1766 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->inv_529)).line);
F->qn_1767 = NULL;
F->qn_1767 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->inv_529)).line);
F->t_1768 = NULL;
(*(P792)rt_nil_check(F->f_1766)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_529)).a)).name))->all), rt_str("_", 1)), (*F->op_530)); b_; }));
(*(P792)rt_nil_check(F->qn_1767)).name = f_mk_3(&(*F->q_531));
(*(P792)rt_nil_check(F->qn_1767)).next = (*(P792)rt_nil_check(F->inv_529)).b;
(*(P792)rt_nil_check(F->x_1765)).a = F->f_1766;
(*(P792)rt_nil_check(F->x_1765)).b = F->qn_1767;
{
F->r_1769 = rt_str_copy(f_gcall_756(F->x_1765, F->is_stmt_532, &F->t_1768));
if ((!F->is_stmt_532)) {
f_check_type_221(F->t_1768, g_ty_bool_872, (*(P792)rt_nil_check(F->inv_529)).line);
}
F->result_ = F->r_1769;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_538(P792 s_534, rstr *arr_535, rstr *w_536, rt_int n_537) {
  struct f_user_wait_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_534 = s_534;
F->arr_535 = arr_535;
F->w_536 = w_536;
F->n_537 = n_537;
F->a_1770 = NULL;
F->a_1770 = (*(P792)rt_nil_check(F->s_534)).a;
F->i_1771 = ((rt_int)0LL);
F->tests_1772 = NULL;
F->tests_1772 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1773 = NULL;
F->revokes_1773 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1770 != NULL)) {
F->inv_1774 = NULL;
F->inv_1774 = (*(P792)rt_nil_check(F->a_1770)).a;
while ((F->inv_1774 != NULL)) {
if (f_builtin_wait_528(F->inv_1774)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_526(F->inv_1774, &(*F->arr_535), F->i_1771, 1); b_; }));
} else {
F->st_1775 = NULL;
F->st_1775 = f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->inv_1774)).line);
F->c_1776 = NULL;
F->qt_1777 = NULL;
F->qname_1778 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1779 = NULL;
F->y_1779 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1778));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_535), rt_str("[", 1)), f_itos_7(F->i_1771)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P792)rt_nil_check(F->st_1775)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->inv_1774)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1777 = f_resolve_subtype_254(F->st_1775, &F->c_1776);
{
F->access_1780 = rt_str_copy(f_storage_438(&F->qname_1778, F->qt_1777));
f_init_storage_306(&F->access_1780, F->qt_1777, F->c_1776);
(*(P802)rt_nil_check(F->y_1779)).t = F->qt_1777;
(*(P802)rt_nil_check(F->y_1779)).c = F->c_1776;
f_bind_441(F->y_1779, &F->access_1780);
f_define_159(F->y_1779, (*(P792)rt_nil_check(F->inv_1774)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_533(F->inv_1774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1778, 1), rt_str(";", 1)); b_; }));
F->tests_1772 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->tests_1772))->all), rt_str("if (", 4)), f_wait_op_533(F->inv_1774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1778, 0)), rt_str(") { ", 4)), f_wait_op_533(F->inv_1774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1778, 1)), rt_str("; ", 2)), (*F->w_536)), rt_str(" = ", 3)), f_itos_7(F->i_1771)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1773 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->revokes_1773))->all), f_wait_op_533(F->inv_1774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1778, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1771 = rt_add(F->i_1771, ((rt_int)1LL));
F->inv_1774 = (*(P792)rt_nil_check(F->inv_1774)).next;
}
F->a_1770 = (*(P792)rt_nil_check(F->a_1770)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_536)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P785)rt_nil_check(F->tests_1772))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_536), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_537)), rt_str(", ", 2)), (*F->arr_535)), rt_str("); if (", 7)), (*F->w_536)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_537)), rt_str(", ", 2)), (*F->arr_535)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_536)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_536)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P785)rt_nil_check(F->revokes_1773))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_540(P792 s_539) {
  struct f_st_wait_540fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_539 = s_539;
F->a_1781 = NULL;
F->a_1781 = (*(P792)rt_nil_check(F->s_539)).a;
F->n_1782 = ((rt_int)0LL);
F->first_1783 = 1;
F->inits_1784 = NULL;
F->inits_1784 = f_new_buffer_24();
F->user_1785 = 0;
F->arr_1786 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1787 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1781 != NULL)) {
F->inv_1788 = NULL;
F->inv_1788 = (*(P792)rt_nil_check(F->a_1781)).a;
F->n_1782 = rt_add(F->n_1782, f_list_len_67((*(P792)rt_nil_check(F->a_1781)).a));
while ((F->inv_1788 != NULL)) {
if ((!f_builtin_wait_528(F->inv_1788))) {
F->user_1785 = 1;
}
F->inv_1788 = (*(P792)rt_nil_check(F->inv_1788)).next;
}
F->a_1781 = (*(P792)rt_nil_check(F->a_1781)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1786), rt_str("[", 1)), f_itos_7(F->n_1782)), rt_str("];", 2)); b_; }));
if (F->user_1785) {
f_user_wait_538(F->s_539, &F->arr_1786, &F->w_1787, F->n_1782);
} else {
F->a_1781 = (*(P792)rt_nil_check(F->s_539)).a;
F->n_1782 = ((rt_int)0LL);
while ((F->a_1781 != NULL)) {
F->inv_1789 = NULL;
F->inv_1789 = (*(P792)rt_nil_check(F->a_1781)).a;
while ((F->inv_1789 != NULL)) {
f_put_27(F->inits_1784, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_526(F->inv_1789, &F->arr_1786, F->n_1782, 0); b_; }));
F->n_1782 = rt_add(F->n_1782, ((rt_int)1LL));
F->inv_1789 = (*(P792)rt_nil_check(F->inv_1789)).next;
}
F->a_1781 = (*(P792)rt_nil_check(F->a_1781)).next;
}
f_splice_34(g_code_842, F->inits_1784);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1787), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1782)), rt_str(", ", 2)), F->arr_1786), rt_str(");", 2)); b_; }));
}
F->a_1781 = (*(P792)rt_nil_check(F->s_539)).a;
F->n_1782 = ((rt_int)0LL);
while ((F->a_1781 != NULL)) {
F->conds_1790 = NULL;
F->conds_1790 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1792 = ((rt_int)1LL), hi1793 = f_list_len_67((*(P792)rt_nil_check(F->a_1781)).a);
for (rt_int it1794 = lo1792; it1794 <= hi1793; it1794++) {
F->i_1791 = it1794;
F->conds_1790 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->conds_1790))->all), rt_str(" || ", 4)), F->w_1787), rt_str(" == ", 4)), f_itos_7(F->n_1782)); b_; }));
F->n_1782 = rt_add(F->n_1782, ((rt_int)1LL));
}
}
if (F->first_1783) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P785)rt_nil_check(F->conds_1790))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P785)rt_nil_check(F->conds_1790))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1783 = 0;
f_gen_body_475((*(P792)rt_nil_check(F->a_1781)).b);
F->a_1781 = (*(P792)rt_nil_check(F->a_1781)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P792 f_call_node_544(rstr *name_541, P792 arg_542, rt_int line_543) {
  struct f_call_node_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_541 = name_541;
F->arg_542 = arg_542;
F->line_543 = line_543;
F->x_1795 = NULL;
F->x_1795 = f_nn_61((((rt_int)10LL)), F->line_543);
F->f_1796 = NULL;
F->f_1796 = f_nn_61((((rt_int)7LL)), F->line_543);
(*(P792)rt_nil_check(F->f_1796)).name = f_mk_3(&(*F->name_541));
(*(P792)rt_nil_check(F->x_1795)).a = F->f_1796;
(*(P792)rt_nil_check(F->x_1795)).b = f_copy_node_647(F->arg_542);
(*(P792)rt_nil_check((*(P792)rt_nil_check(F->x_1795)).b)).next = NULL;
F->result_ = F->x_1795;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_546(P792 s_545) {
  struct f_user_region_546fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_545 = s_545;
F->t_1797 = NULL;
F->f_1798 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1799 = rt_str_copy(f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P792)rt_nil_check(F->s_545)).a, (*(P792)rt_nil_check(F->s_545)).line), 1, &F->t_1797));
F->unlock_1800 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_756(f_call_node_544(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P792)rt_nil_check(F->s_545)).a, (*(P792)rt_nil_check(F->s_545)).line), 1, &F->t_1797)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1799), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1798), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1798), rt_str(")) {", 4)); b_; }));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1798), rt_str("); ", 3)), F->unlock_1800); b_; }));
f_gen_body_475((*(P792)rt_nil_check(F->s_545)).b);
f_pop_cleanup_480();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1798), rt_str("); ", 3)), F->unlock_1800); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1798), rt_str("); ", 3)), F->unlock_1800), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_548(P792 s_547) {
  struct f_st_region_548fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_547 = s_547;
F->lv_1801 = NULL;
F->t_1802 = NULL;
F->c_1803 = NULL;
F->lk_1805 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1806 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_606((*(P792)rt_nil_check(F->s_547)).a, &F->lv_1801, &F->t_1802, &F->c_1803, &F->ro_1804);
if (((*(P798)rt_nil_check(F->t_1802)).kind != (((rt_int)13LL)))) {
f_user_region_546(F->s_547);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1805), rt_str(" = &", 4)), (((P785)rt_nil_check(F->lv_1801))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1805), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1806), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1806), rt_str(")) {", 4)); b_; }));
f_push_cleanup_479(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1806), rt_str("); rt_region_leave(", 19)), F->lk_1805), rt_str(");", 2)); b_; }));
f_gen_body_475((*(P792)rt_nil_check(F->s_547)).b);
f_pop_cleanup_480();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1806), rt_str("); rt_region_leave(", 19)), F->lk_1805), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1806), rt_str("); rt_region_leave(", 19)), F->lk_1805), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P792 f_gparam_551(P792 g_549, rstr *name_550) {
  struct f_gparam_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_549 = g_549;
F->name_550 = name_550;
F->p_1807 = NULL;
F->p_1807 = (*(P792)rt_nil_check(F->g_549)).a;
while ((F->p_1807 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1807)).name))->all), (*F->name_550))) {
F->result_ = F->p_1807;
goto ret_;
}
F->p_1807 = (*(P792)rt_nil_check(F->p_1807)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_bind_sym_553(P792 p_552) {
  struct f_bind_sym_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_552 = p_552;
F->y_1808 = NULL;
if (((*(P792)rt_nil_check(F->p_552)).ival <= ((rt_int)2LL))) {
F->y_1808 = f_new_sym_172((((rt_int)5LL)), (*(P792)rt_nil_check(F->p_552)).name);
} else {
F->y_1808 = f_new_sym_172((((rt_int)2LL)), (*(P792)rt_nil_check(F->p_552)).name);
}
F->result_ = F->y_1808;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_556(P802 a_554, P802 b_555) {
  struct f_same_binds_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_554 = a_554;
F->b_555 = b_555;
F->x_1809 = NULL;
F->x_1809 = F->a_554;
F->y_1810 = NULL;
F->y_1810 = F->b_555;
while (((F->x_1809 != NULL) && (F->y_1810 != NULL))) {
if (((!rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->x_1809)).name))->all), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_1810)).name))->all))) || (!f_same_binding_559(F->x_1809, F->y_1810)))) {
F->result_ = 0;
goto ret_;
}
F->x_1809 = (*(P802)rt_nil_check(F->x_1809)).mnext;
F->y_1810 = (*(P802)rt_nil_check(F->y_1810)).mnext;
}
F->result_ = ((F->x_1809 == NULL) && (F->y_1810 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_559(P802 a_557, P802 b_558) {
  struct f_same_binding_559fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_557 = a_557;
F->b_558 = b_558;
if (((*(P802)rt_nil_check(F->a_557)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P802)rt_nil_check(F->b_558)).kind == (((rt_int)5LL))) && f_same_210((*(P802)rt_nil_check(F->a_557)).t, (*(P802)rt_nil_check(F->b_558)).t));
goto ret_;
}
if ((((*(P802)rt_nil_check(F->a_557)).kind == (((rt_int)2LL))) && (*(P802)rt_nil_check(F->a_557)).hasmv)) {
F->result_ = ((*(P802)rt_nil_check(F->b_558)).hasmv && ((*(P802)rt_nil_check(F->a_557)).mvalue == (*(P802)rt_nil_check(F->b_558)).mvalue));
goto ret_;
}
F->result_ = ((((*(P802)rt_nil_check(F->a_557)).cname != NULL) && ((*(P802)rt_nil_check(F->b_558)).cname != NULL)) && rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->a_557)).cname))->all), (((P785)rt_nil_check((*(P802)rt_nil_check(F->b_558)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_tt_binds_564(P792 gd_560, P792 formals_561, P792 actuals_562, rt_int line_563) {
  struct f_tt_binds_564fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_560 = gd_560;
F->formals_561 = formals_561;
F->actuals_562 = actuals_562;
F->line_563 = line_563;
F->f_1811 = NULL;
F->f_1811 = F->formals_561;
F->a_1812 = NULL;
F->a_1812 = F->actuals_562;
F->binds_1813 = NULL;
F->c_1814 = NULL;
F->at_1815 = NULL;
while (((F->f_1811 != NULL) && (F->a_1812 != NULL))) {
F->p_1816 = NULL;
F->p_1816 = f_gparam_551(F->gd_560, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->f_1811)).name))->all));
F->b_1817 = NULL;
if ((F->p_1816 == NULL)) {
f_fail_23(F->line_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->f_1811)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1817 = f_bind_sym_553(F->p_1816);
if (((*(P792)rt_nil_check(F->p_1816)).ival <= ((rt_int)2LL))) {
if (((*(P792)rt_nil_check(F->a_1812)).kind >= (((rt_int)70LL)))) {
(*(P802)rt_nil_check(F->b_1817)).t = f_resolve_subtype_254(F->a_1812, &F->c_1814);
} else {
F->st_1818 = NULL;
F->st_1818 = f_nn_61((((rt_int)80LL)), F->line_563);
(*(P792)rt_nil_check(F->st_1818)).name = (*(P792)rt_nil_check(F->a_1812)).name;
(*(P802)rt_nil_check(F->b_1817)).t = f_resolve_subtype_254(F->st_1818, &F->c_1814);
}
(*(P802)rt_nil_check(F->b_1817)).c = F->c_1814;
} else if (((*(P792)rt_nil_check(F->p_1816)).ival <= ((rt_int)5LL))) {
if ((((*(P792)rt_nil_check(F->a_1812)).kind != (((rt_int)7LL))) || (f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->a_1812)).name))->all)) == NULL))) {
f_fail_23(F->line_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1816)).name))->all)); b_; }));
}
F->b_1817 = f_copy_sym_379(f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->a_1812)).name))->all)));
(*(P802)rt_nil_check(F->b_1817)).name = (*(P792)rt_nil_check(F->p_1816)).name;
} else {
(*(P802)rt_nil_check(F->b_1817)).t = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1816)).a, &F->c_1814);
(*(P802)rt_nil_check(F->b_1817)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_637(F->a_1812, (*(P802)rt_nil_check(F->b_1817)).t, &F->at_1815); b_; }));
(*(P802)rt_nil_check(F->b_1817)).mvalue = f_manifest_324(F->a_1812, &F->ok_1819);
(*(P802)rt_nil_check(F->b_1817)).hasmv = F->ok_1819;
}
(*(P802)rt_nil_check(F->b_1817)).mnext = F->binds_1813;
F->binds_1813 = F->b_1817;
F->f_1811 = (*(P792)rt_nil_check(F->f_1811)).next;
F->a_1812 = (*(P792)rt_nil_check(F->a_1812)).next;
}
F->result_ = F->binds_1813;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_566(P792 st_565) {
  struct f_generic_use_566fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_565 = st_565;
if (((*(P792)rt_nil_check(F->st_565)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P802)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P792)rt_nil_check(F->st_565)).kind == (((rt_int)80LL))) && ((*(P792)rt_nil_check(F->st_565)).a != NULL)) && (f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->st_565)).name))->all)) != NULL)) && ((*(P802)rt_nil_check(f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->st_565)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_infer_from_571(P792 gd_567, P792 pat_568, P798 t_569, P802 known_570) {
  struct f_infer_from_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_567 = gd_567;
F->pat_568 = pat_568;
F->t_569 = t_569;
F->known_570 = known_570;
F->binds_1820 = NULL;
F->binds_1820 = F->known_570;
F->e_1821 = NULL;
F->e_1821 = (*(P792)rt_nil_check(F->pat_568)).a;
F->tp_1822 = NULL;
if (((F->t_569 == NULL) || ((*(P798)rt_nil_check(F->t_569)).gen == NULL))) {
F->result_ = F->binds_1820;
goto ret_;
}
F->tp_1822 = (*(P792)rt_nil_check((*(P802)rt_nil_check((*(P798)rt_nil_check(F->t_569)).gen)).decl)).a;
if (((*(P792)rt_nil_check(F->pat_568)).kind == (((rt_int)78LL)))) {
F->e_1821 = f_copy_node_647((*(P792)rt_nil_check(F->pat_568)).a);
(*(P792)rt_nil_check(F->e_1821)).next = NULL;
}
while (((F->e_1821 != NULL) && (F->tp_1822 != NULL))) {
F->nm_1823 = NULL;
if ((((*(P792)rt_nil_check(F->e_1821)).kind == (((rt_int)7LL))) || ((*(P792)rt_nil_check(F->e_1821)).kind == (((rt_int)80LL))))) {
F->nm_1823 = (*(P792)rt_nil_check(F->e_1821)).name;
}
if ((((F->nm_1823 != NULL) && (f_gparam_551(F->gd_567, &(((P785)rt_nil_check(F->nm_1823))->all)) != NULL)) && ((*(P792)rt_nil_check(f_gparam_551(F->gd_567, &(((P785)rt_nil_check(F->nm_1823))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1824 = NULL;
F->q_1824 = F->binds_1820;
F->have_1825 = 0;
while ((F->q_1824 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->q_1824)).name))->all), (((P785)rt_nil_check(F->nm_1823))->all))) {
F->have_1825 = 1;
}
F->q_1824 = (*(P802)rt_nil_check(F->q_1824)).mnext;
}
if ((!F->have_1825)) {
F->g_1826 = NULL;
F->g_1826 = (*(P798)rt_nil_check(F->t_569)).gbinds;
while ((F->g_1826 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->g_1826)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->tp_1822)).name))->all))) {
F->b_1827 = NULL;
F->b_1827 = f_bind_sym_553(f_gparam_551(F->gd_567, &(((P785)rt_nil_check(F->nm_1823))->all)));
(*(P802)rt_nil_check(F->b_1827)).t = (*(P802)rt_nil_check(F->g_1826)).t;
(*(P802)rt_nil_check(F->b_1827)).c = (*(P802)rt_nil_check(F->g_1826)).c;
(*(P802)rt_nil_check(F->b_1827)).mnext = F->binds_1820;
F->binds_1820 = F->b_1827;
}
F->g_1826 = (*(P802)rt_nil_check(F->g_1826)).mnext;
}
}
}
F->e_1821 = (*(P792)rt_nil_check(F->e_1821)).next;
F->tp_1822 = (*(P792)rt_nil_check(F->tp_1822)).next;
}
F->result_ = F->binds_1820;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_instantiate_type_577(P802 g_572, P792 tt_573, P792 args_574, P794 *c_575, rt_int line_576) {
  struct f_instantiate_type_577fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_572 = g_572;
F->tt_573 = tt_573;
F->args_574 = args_574;
F->c_575 = c_575;
F->c_575v = *F->c_575;
F->line_576 = line_576;
F->gd_1828 = NULL;
F->gd_1828 = (*(P802)rt_nil_check(F->g_572)).decl;
F->pat_1829 = NULL;
F->pat_1829 = (*(P792)rt_nil_check(F->gd_1828)).b;
F->binds_1830 = NULL;
F->binds_1830 = f_tt_binds_564(F->gd_1828, (*(P792)rt_nil_check(F->pat_1829)).e, F->tt_573, F->line_576);
F->inst_1831 = NULL;
F->inst_1831 = g_all_insts_830;
F->t_1832 = NULL;
F->saved_caps_1833 = NULL;
F->saved_caps_1833 = g_caps_847;
F->saved_env_1834 = NULL;
F->saved_env_1834 = g_genv_829;
F->saved_gdepth_1835 = g_gdepth_861;
F->c_575v = f_new_cons_175();
(*(P794)rt_nil_check(F->c_575v)).args = F->args_574;
while ((F->inst_1831 != NULL)) {
if ((((*(P802)rt_nil_check(F->inst_1831)).decl == F->pat_1829) && f_same_binds_556((*(P802)rt_nil_check(F->inst_1831)).members, F->binds_1830))) {
F->result_ = (*(P802)rt_nil_check(F->inst_1831)).t;
goto ret_;
}
F->inst_1831 = (*(P802)rt_nil_check(F->inst_1831)).insts;
}
f_open_scope_168();
{
F->b_1836 = NULL;
F->b_1836 = F->binds_1830;
while ((F->b_1836 != NULL)) {
f_define_159(F->b_1836, F->line_576);
F->b_1836 = (*(P802)rt_nil_check(F->b_1836)).mnext;
}
}
g_caps_847 = NULL;
g_genv_829 = (*(P802)rt_nil_check(F->g_572)).env;
g_gdepth_861 = g_depth_831;
{
F->y_1837 = NULL;
F->y_1837 = f_new_sym_172((((rt_int)5LL)), (*(P792)rt_nil_check(F->pat_1829)).name);
F->yc_1838 = NULL;
(*(P802)rt_nil_check(F->y_1837)).decl = F->pat_1829;
if (((*(P792)rt_nil_check(F->pat_1829)).kind == (((rt_int)44LL)))) {
F->t_1832 = f_new_typ_174((((rt_int)8LL)));
(*(P798)rt_nil_check(F->t_1832)).name = (*(P792)rt_nil_check(F->pat_1829)).name;
(*(P798)rt_nil_check(F->t_1832)).decl = F->pat_1829;
(*(P802)rt_nil_check(F->y_1837)).t = F->t_1832;
f_define_159(F->y_1837, F->line_576);
f_finish_ptr_400(F->t_1832);
} else {
f_define_159(F->y_1837, F->line_576);
F->t_1832 = f_new_type_302(F->y_1837, f_nn_61((((rt_int)80LL)), F->line_576), &F->yc_1838);
}
}
g_caps_847 = F->saved_caps_1833;
g_genv_829 = F->saved_env_1834;
g_gdepth_861 = F->saved_gdepth_1835;
(*(P798)rt_nil_check(F->t_1832)).gen = F->g_572;
(*(P798)rt_nil_check(F->t_1832)).gbinds = F->binds_1830;
f_close_scope_169();
{ R803 *cell1839 = rt_alloc(sizeof(R803));
(*cell1839).name = NULL;
(*cell1839).t = NULL;
(*cell1839).c = NULL;
(*cell1839).access = NULL;
(*cell1839).cname = NULL;
(*cell1839).st = NULL;
(*cell1839).decl = NULL;
(*cell1839).params = NULL;
(*cell1839).result = NULL;
(*cell1839).members = NULL;
(*cell1839).mnext = NULL;
(*cell1839).binds = NULL;
(*cell1839).insts = NULL;
(*cell1839).env = NULL;
(*cell1839).chain = NULL;
(*cell1839).stack = NULL;
(*cell1839).owner = NULL;
(*cell1839).gctx = NULL;
(*cell1839).mv = NULL;
(*cell1839).reqs = NULL;
(*cell1839).home = NULL;
F->inst_1831 = cell1839;
}
(*(P802)rt_nil_check(F->inst_1831)).kind = (((rt_int)5LL));
(*(P802)rt_nil_check(F->inst_1831)).name = (*(P802)rt_nil_check(F->g_572)).name;
(*(P802)rt_nil_check(F->inst_1831)).decl = F->pat_1829;
(*(P802)rt_nil_check(F->inst_1831)).t = F->t_1832;
(*(P802)rt_nil_check(F->inst_1831)).members = F->binds_1830;
(*(P802)rt_nil_check(F->inst_1831)).insts = g_all_insts_830;
g_all_insts_830 = F->inst_1831;
F->result_ = F->t_1832;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_575) = F->c_575v;
  RT_FPOP();
  return F->result_;
}

static P802 f_instantiate_582(P802 g_578, P792 tt_579, P792 args_580, rt_int line_581) {
  struct f_instantiate_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_578 = g_578;
F->tt_579 = tt_579;
F->args_580 = args_580;
F->line_581 = line_581;
F->gd_1840 = NULL;
F->gd_1840 = (*(P802)rt_nil_check(F->g_578)).decl;
F->pat_1841 = NULL;
F->pat_1841 = (*(P792)rt_nil_check(F->gd_1840)).b;
F->binds_1842 = NULL;
F->f_1843 = NULL;
F->f_1843 = (*(P792)rt_nil_check(F->pat_1841)).e;
F->a_1844 = NULL;
F->a_1844 = F->tt_579;
F->fp_1845 = NULL;
F->fp_1845 = (*(P792)rt_nil_check(F->pat_1841)).a;
F->inst_1846 = NULL;
F->at_1847 = NULL;
F->c_1848 = NULL;
F->saved_fctx_1849 = NULL;
F->saved_fctx_1849 = g_fctx_846;
F->saved_in_1850 = g_in_func_844;
F->saved_level_1851 = g_cur_level_845;
F->saved_sym_1852 = NULL;
F->saved_sym_1852 = g_func_sym_856;
F->saved_code_1853 = NULL;
F->saved_code_1853 = g_code_842;
F->saved_env_1854 = NULL;
F->saved_env_1854 = g_genv_829;
F->saved_gdepth_1855 = g_gdepth_861;
F->binds_1842 = f_tt_binds_564(F->gd_1840, F->f_1843, F->a_1844, F->line_581);
F->a_1844 = F->args_580;
while (((F->fp_1845 != NULL) && (F->a_1844 != NULL))) {
if (f_generic_use_566((*(P792)rt_nil_check(F->fp_1845)).a)) {
F->v_1856 = rt_str_copy(f_gexpr_637(F->a_1844, NULL, &F->at_1847));
F->binds_1842 = f_infer_from_571(F->gd_1840, (*(P792)rt_nil_check(F->fp_1845)).a, F->at_1847, F->binds_1842);
} else if (((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->fp_1845)).a)).kind == (((rt_int)80LL))) && (f_gparam_551(F->gd_1840, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->fp_1845)).a)).name))->all)) != NULL)) && ((*(P792)rt_nil_check(f_gparam_551(F->gd_1840, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->fp_1845)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1857 = 0;
F->q_1858 = NULL;
F->q_1858 = F->binds_1842;
while ((F->q_1858 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->q_1858)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->fp_1845)).a)).name))->all))) {
F->known_1857 = 1;
}
F->q_1858 = (*(P802)rt_nil_check(F->q_1858)).mnext;
}
if ((!F->known_1857)) {
F->b_1859 = NULL;
F->b_1859 = f_bind_sym_553(f_gparam_551(F->gd_1840, &(((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->fp_1845)).a)).name))->all)));
F->v_1860 = rt_str_copy(f_gexpr_637(F->a_1844, NULL, &F->at_1847));
(*(P802)rt_nil_check(F->b_1859)).t = F->at_1847;
(*(P802)rt_nil_check(F->b_1859)).c = g_no_cons_883;
(*(P802)rt_nil_check(F->b_1859)).mnext = F->binds_1842;
F->binds_1842 = F->b_1859;
}
}
F->fp_1845 = (*(P792)rt_nil_check(F->fp_1845)).next;
F->a_1844 = (*(P792)rt_nil_check(F->a_1844)).next;
}
F->inst_1846 = g_all_insts_830;
while ((F->inst_1846 != NULL)) {
if ((((*(P802)rt_nil_check(F->inst_1846)).decl == F->pat_1841) && f_same_binds_556((*(P802)rt_nil_check(F->inst_1846)).members, F->binds_1842))) {
F->result_ = F->inst_1846;
goto ret_;
}
F->inst_1846 = (*(P802)rt_nil_check(F->inst_1846)).insts;
}
g_fctx_846 = (*(P802)rt_nil_check(F->g_578)).gctx;
g_in_func_844 = ((*(P802)rt_nil_check(F->g_578)).level > ((rt_int)0LL));
g_cur_level_845 = (*(P802)rt_nil_check(F->g_578)).level;
g_func_sym_856 = (*(P802)rt_nil_check(F->g_578)).owner;
g_code_842 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_861 = g_depth_831;
{
F->b_1861 = NULL;
F->b_1861 = F->binds_1842;
while ((F->b_1861 != NULL)) {
f_define_159(F->b_1861, F->line_581);
F->b_1861 = (*(P802)rt_nil_check(F->b_1861)).mnext;
}
}
g_genv_829 = (*(P802)rt_nil_check(F->g_578)).env;
F->inst_1846 = f_build_subprogram_424(F->pat_1841);
(*(P802)rt_nil_check(F->inst_1846)).members = F->binds_1842;
(*(P802)rt_nil_check(F->inst_1846)).insts = g_all_insts_830;
g_all_insts_830 = F->inst_1846;
f_define_159(F->inst_1846, F->line_581);
f_gen_subprogram_454(F->pat_1841, F->inst_1846);
f_close_scope_169();
g_fctx_846 = F->saved_fctx_1849;
g_in_func_844 = F->saved_in_1850;
g_cur_level_845 = F->saved_level_1851;
g_func_sym_856 = F->saved_sym_1852;
g_code_842 = F->saved_code_1853;
g_genv_829 = F->saved_env_1854;
g_gdepth_861 = F->saved_gdepth_1855;
F->result_ = F->inst_1846;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_584(P802 y_583) {
  struct f_access_of_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_583 = y_583;
F->p_1862 = NULL;
F->p_1862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P802)rt_nil_check(F->y_583)).level <= ((rt_int)0LL))) {
F->result_ = (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_583)).access))->all);
goto ret_;
}
{ rt_int lo1864 = ((rt_int)1LL), hi1865 = rt_sub(g_cur_level_845, (*(P802)rt_nil_check(F->y_583)).level);
for (rt_int it1866 = lo1864; it1866 <= hi1865; it1866++) {
F->i_1863 = it1866;
F->p_1862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->p_1862))->all), rt_str("->up", 4)); b_; }));
}
}
if ((*(P802)rt_nil_check(F->y_583)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P785)rt_nil_check(F->p_1862))->all)), rt_str("->", 2)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_583)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->p_1862))->all), rt_str("->", 2)), (((P785)rt_nil_check((*(P802)rt_nil_check(F->y_583)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_import_of_587(P792 l_585, rstr *name_586) {
  struct f_import_of_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_585 = l_585;
F->name_586 = name_586;
F->p_1867 = NULL;
F->p_1867 = F->l_585;
while ((F->p_1867 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1867)).name))->all), (*F->name_586))) {
F->result_ = F->p_1867;
goto ret_;
}
F->p_1867 = (*(P792)rt_nil_check(F->p_1867)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_590(P802 y_588, rt_int line_589) {
  struct f_check_import_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_588 = y_588;
F->line_589 = line_589;
F->c_1868 = NULL;
F->c_1868 = g_fctx_846;
F->ro_1869 = 0;
while (((F->c_1868 != NULL) && ((*(P802)rt_nil_check(F->y_588)).depth < (*(P809)rt_nil_check(F->c_1868)).depth))) {
if ((!(*(P809)rt_nil_check(F->c_1868)).all_imp)) {
F->imp_1870 = NULL;
F->imp_1870 = f_import_of_587((*(P809)rt_nil_check(F->c_1868)).imps, &(((P785)rt_nil_check((*(P802)rt_nil_check(F->y_588)).name))->all));
if ((F->imp_1870 == NULL)) {
f_fail_23(F->line_589, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_588)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P792)rt_nil_check(F->imp_1870)).ival == ((rt_int)1LL))) {
F->ro_1869 = 1;
}
}
F->c_1868 = (*(P809)rt_nil_check(F->c_1868)).next;
}
F->result_ = F->ro_1869;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_592(rstr *s_591) {
  struct f_c_ident_592fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_591 = s_591;
if (rt_str_eq((*F->s_591), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_591), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_591));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_595(P798 t_593, rstr *p_594) {
  struct f_cell_deref_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_593 = t_593;
F->p_594 = p_594;
if ((((*(P798)rt_nil_check(F->t_593)).decl != NULL) && ((*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_593)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_594)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_594)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_598(rstr *base_596, P798 t_597) {
  struct f_deref_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_596 = base_596;
F->t_597 = t_597;
if ((((*(P798)rt_nil_check(F->t_597)).decl != NULL) && ((*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_597)).decl)).b != NULL))) {
if (f_suppressed_431(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_596)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_223(F->t_597)), rt_str(")rt_nil_check(", 14)), (*F->base_596)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_431(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_223(F->t_597)), rt_str(")(", 2)), (*F->base_596)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_223(F->t_597)), rt_str(")rt_nil_check(", 14)), (*F->base_596)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_600(P792 e_599) {
  struct f_is_lvalue_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_599 = e_599;
if (((*(P792)rt_nil_check(F->e_599)).kind == (((rt_int)7LL)))) {
F->y_1871 = NULL;
F->y_1871 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_599)).name))->all));
F->result_ = ((F->y_1871 != NULL) && (((*(P802)rt_nil_check(F->y_1871)).kind == (((rt_int)1LL))) || ((((*(P802)rt_nil_check(F->y_1871)).kind == (((rt_int)2LL))) && ((*(P802)rt_nil_check(F->y_1871)).mv == NULL)) && (!(*(P802)rt_nil_check(F->y_1871)).hasmv))));
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_599)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_600((*(P792)rt_nil_check(F->e_599)).a);
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_599)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_599)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_600((*(P792)rt_nil_check(F->e_599)).a));
goto ret_;
} else if (((*(P792)rt_nil_check(F->e_599)).kind == (((rt_int)10LL)))) {
if ((((*(P792)rt_nil_check(F->e_599)).b != NULL) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_599)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_600((*(P792)rt_nil_check(F->e_599)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_606(P792 e_601, P785 *code_602, P798 *t_603, P794 *c_604, int *ro_605) {
  struct f_lvalue_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_601 = e_601;
F->code_602 = code_602;
F->code_602v = *F->code_602;
F->t_603 = t_603;
F->t_603v = *F->t_603;
F->c_604 = c_604;
F->c_604v = *F->c_604;
F->ro_605 = ro_605;
F->ro_605v = *F->ro_605;
F->base_1872 = NULL;
F->bt_1873 = NULL;
F->bc_1874 = NULL;
if (((*(P792)rt_nil_check(F->e_601)).kind == (((rt_int)7LL)))) {
F->y_1875 = NULL;
F->y_1875 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_601)).name))->all));
if ((F->y_1875 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->e_601)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_601)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P802)rt_nil_check(F->y_1875)).kind != (((rt_int)1LL))) && ((*(P802)rt_nil_check(F->y_1875)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_601)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_601)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_602v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_584(F->y_1875); b_; }));
F->t_603v = (*(P802)rt_nil_check(F->y_1875)).t;
F->c_604v = (*(P802)rt_nil_check(F->y_1875)).c;
F->ro_605v = (*(P802)rt_nil_check(F->y_1875)).ro_flag;
if ((((*(P802)rt_nil_check(F->y_1875)).kind == (((rt_int)1LL))) && f_check_import_590(F->y_1875, (*(P792)rt_nil_check(F->e_601)).line))) {
F->ro_605v = 1;
}
} else if (((*(P792)rt_nil_check(F->e_601)).kind == (((rt_int)17LL)))) {
f_lvalue_606((*(P792)rt_nil_check(F->e_601)).a, &F->code_602v, &F->t_603v, &F->c_604v, &F->ro_605v);
} else if ((((((*(P792)rt_nil_check(F->e_601)).kind == (((rt_int)12LL))) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_601)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_601)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_602v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_744((*(P792)rt_nil_check(F->e_601)).b, (*(P792)rt_nil_check(F->e_601)).line, &F->t_603v); b_; }));
F->c_604v = g_no_cons_883;
F->ro_605v = 0;
} else if (((*(P792)rt_nil_check(F->e_601)).kind == (((rt_int)11LL)))) {
f_lvalue_606((*(P792)rt_nil_check(F->e_601)).a, &F->base_1872, &F->bt_1873, &F->bc_1874, &F->ro_605v);
f_select_on_614(&(((P785)rt_nil_check(F->base_1872))->all), F->bt_1873, F->e_601, &F->ro_605v, &F->code_602v, &F->t_603v, &F->c_604v);
} else if (((*(P792)rt_nil_check(F->e_601)).kind == (((rt_int)10LL)))) {
f_lvalue_606((*(P792)rt_nil_check(F->e_601)).a, &F->base_1872, &F->bt_1873, &F->bc_1874, &F->ro_605v);
f_index_on_631(&(((P785)rt_nil_check(F->base_1872))->all), F->bt_1873, F->e_601, &F->ro_605v, 1, &F->code_602v, &F->t_603v, &F->c_604v);
} else {
f_fail_23((*(P792)rt_nil_check(F->e_601)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_602) = F->code_602v;  (*F->t_603) = F->t_603v;  (*F->c_604) = F->c_604v;  (*F->ro_605) = F->ro_605v;
  RT_FPOP();
  return;
}

static void f_select_on_614(rstr *base_607, P798 bt_608, P792 e_609, int *ro_610, P785 *code_611, P798 *t_612, P794 *c_613) {
  struct f_select_on_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_607 = base_607;
F->bt_608 = bt_608;
F->e_609 = e_609;
F->ro_610 = ro_610;
F->code_611 = code_611;
F->code_611v = *F->code_611;
F->t_612 = t_612;
F->t_612v = *F->t_612;
F->c_613 = c_613;
F->c_613v = *F->c_613;
F->c_613v = g_no_cons_883;
if (((*(P798)rt_nil_check(F->bt_608)).kind == (((rt_int)8LL)))) {
f_finish_ptr_400(F->bt_608);
(*F->ro_610) = 0;
if (((*(P798)rt_nil_check(F->bt_608)).decl != NULL)) {
F->p_1876 = NULL;
F->p_1876 = (*(P792)rt_nil_check((*(P798)rt_nil_check(F->bt_608)).decl)).b;
while ((F->p_1876 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1876)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))) {
F->pc_1877 = NULL;
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_223(F->bt_608)), rt_str(")rt_nil_check(", 14)), (*F->base_607)), rt_str("))->p_", 6)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1876)).name))->all))), rt_str(")", 1)); b_; }));
F->t_612v = f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1876)).a, &F->pc_1877);
(*F->ro_610) = 1;
goto ret_;
}
F->p_1876 = (*(P792)rt_nil_check(F->p_1876)).next;
}
}
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all), rt_str("ALL", 3))) {
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_598(&(*F->base_607), F->bt_608); b_; }));
F->t_612v = (*(P798)rt_nil_check(F->bt_608)).target;
goto ret_;
}
f_select_on_614(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_598(&(*F->base_607), F->bt_608); b_; }), (*(P798)rt_nil_check(F->bt_608)).target, F->e_609, &(*F->ro_610), &F->code_611v, &F->t_612v, &F->c_613v);
goto ret_;
}
if (((*(P798)rt_nil_check(F->bt_608)).kind == (((rt_int)15LL)))) {
F->p_1878 = NULL;
F->p_1878 = (*(P798)rt_nil_check(F->bt_608)).tparams;
if ((!f_opened_292(F->bt_608))) {
f_fail_23((*(P792)rt_nil_check(F->e_609)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P785)rt_nil_check((*(P798)rt_nil_check(F->bt_608)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P798)rt_nil_check(F->bt_608)).tparams == NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all), rt_str("ALL", 3))) {
F->code_611v = f_mk_3(&(*F->base_607));
F->t_612v = (*(P798)rt_nil_check(F->bt_608)).under;
goto ret_;
}
f_select_on_614(&(*F->base_607), (*(P798)rt_nil_check(F->bt_608)).under, F->e_609, &(*F->ro_610), &F->code_611v, &F->t_612v, &F->c_613v);
goto ret_;
}
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all), rt_str("ALL", 3))) {
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_607), rt_str(".all", 4)); b_; }));
F->t_612v = (*(P798)rt_nil_check(F->bt_608)).under;
goto ret_;
}
while ((F->p_1878 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1878)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))) {
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_607), rt_str(".p_", 3)), f_lower_s_15(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1878)).name))->all))); b_; }));
F->t_612v = f_tparam_type_317(F->bt_608, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1878)).name))->all));
(*F->ro_610) = 1;
goto ret_;
}
F->p_1878 = (*(P792)rt_nil_check(F->p_1878)).next;
}
f_select_on_614(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_607), rt_str(".all", 4)); b_; }), (*(P798)rt_nil_check(F->bt_608)).under, F->e_609, &(*F->ro_610), &F->code_611v, &F->t_612v, &F->c_613v);
goto ret_;
}
if (((*(P798)rt_nil_check(F->bt_608)).kind == (((rt_int)17LL)))) {
F->f_1879 = NULL;
F->f_1879 = (*(P798)rt_nil_check(F->bt_608)).fields;
F->i_1880 = ((rt_int)0LL);
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all), rt_str("TAG", 3))) {
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_607)), rt_str(").tag)", 6)); b_; }));
F->t_612v = (*(P798)rt_nil_check(F->bt_608)).elem;
(*F->ro_610) = 1;
goto ret_;
}
while ((F->f_1879 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1879)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))) {
F->fn_1881 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_607)), rt_str(").u.", 4)), f_field_c_17(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))));
F->c_613v = (*(P800)rt_nil_check(F->f_1879)).c;
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_607)), rt_str(").tag == ", 9)), f_itos_7(F->i_1880)), rt_str(" \? &", 4)), F->fn_1881), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1881), rt_str(")))", 3)); b_; }));
F->t_612v = (*(P800)rt_nil_check(F->f_1879)).t;
goto ret_;
}
F->i_1880 = rt_add(F->i_1880, ((rt_int)1LL));
F->f_1879 = (*(P800)rt_nil_check(F->f_1879)).next;
}
f_fail_23((*(P792)rt_nil_check(F->e_609)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all)); b_; }));
}
if (((*(P798)rt_nil_check(F->bt_608)).kind == (((rt_int)7LL)))) {
F->f_1882 = NULL;
F->f_1882 = (*(P798)rt_nil_check(F->bt_608)).fields;
while ((F->f_1882 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1882)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))) {
F->c_613v = (*(P800)rt_nil_check(F->f_1882)).c;
F->code_611v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_607), rt_str(".", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all))); b_; }));
F->t_612v = (*(P800)rt_nil_check(F->f_1882)).t;
goto ret_;
}
F->f_1882 = (*(P800)rt_nil_check(F->f_1882)).next;
}
f_fail_23((*(P792)rt_nil_check(F->e_609)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all)); b_; }));
}
f_fail_23((*(P792)rt_nil_check(F->e_609)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_609)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_611) = F->code_611v;  (*F->t_612) = F->t_612v;  (*F->c_613) = F->c_613v;
  RT_FPOP();
  return;
}

static int f_has_call_616(rstr *s_615) {
  struct f_has_call_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_615 = s_615;
{ rt_int lo1884 = ((rt_int)1LL), hi1885 = ((rt_int)(((*F->s_615)).len));
for (rt_int it1886 = lo1884; it1886 <= hi1885; it1886++) {
F->i_1883 = it1886;
if ((rt_str_get((*F->s_615), F->i_1883) == 40)) {
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

static void f_need_slice_618(P798 t_617) {
  struct f_need_slice_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_617 = t_617;
F->c_1887 = rt_str_copy(f_ctype_223(F->t_617));
F->n_1888 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1887));
F->l_1889 = NULL;
if (f_seen_name_366(g_mcopies_870, &F->n_1888)) {
goto ret_;
}
{ R797 *cell1890 = rt_alloc(sizeof(R797));
(*cell1890).s = NULL;
(*cell1890).next = NULL;
F->l_1889 = cell1890;
}
(*(P796)rt_nil_check(F->l_1889)).s = f_mk_3(&F->n_1888);
(*(P796)rt_nil_check(F->l_1889)).next = g_mcopies_870;
g_mcopies_870 = F->l_1889;
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1887), rt_str(" ", 1)), F->n_1888), rt_str("(", 1)), F->c_1887), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1887), rt_str(" ", 1)), F->n_1888), rt_str("(", 1)), F->c_1887), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1887), rt_str(" rt_r_acat_", 11)), F->c_1887), rt_str("(", 1)), F->c_1887), rt_str(" a, ", 4)), F->c_1887), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1887), rt_str(" rt_r_acat_", 11)), F->c_1887), rt_str("(", 1)), F->c_1887), rt_str(" a, ", 4)), F->c_1887), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1887), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_355((*(P798)rt_nil_check(F->t_617)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_355((*(P798)rt_nil_check(F->t_617)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_622(rstr *i_619, rstr *lo_620, rstr *hi_621) {
  struct f_ix_622fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_619 = i_619;
F->lo_620 = lo_620;
F->hi_621 = hi_621;
if (f_suppressed_431(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_619)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_619)), rt_str(", ", 2)), (*F->lo_620)), rt_str(", ", 2)), (*F->hi_621)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_631(rstr *base_623, P798 bt_624, P792 e_625, int *ro_626, int lv_627, P785 *code_628, P798 *t_629, P794 *c_630) {
  struct f_index_on_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_623 = base_623;
F->bt_624 = bt_624;
F->e_625 = e_625;
F->ro_626 = ro_626;
F->lv_627 = lv_627;
F->code_628 = code_628;
F->code_628v = *F->code_628;
F->t_629 = t_629;
F->t_629v = *F->t_629;
F->c_630 = c_630;
F->c_630v = *F->c_630;
F->a_1891 = NULL;
F->a_1891 = (*(P792)rt_nil_check(F->e_625)).b;
F->it_1892 = NULL;
F->c_630v = g_no_cons_883;
if (((*(P798)rt_nil_check(F->bt_624)).kind == (((rt_int)8LL)))) {
f_finish_ptr_400(F->bt_624);
(*F->ro_626) = 0;
f_index_on_631(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_598(&(*F->base_623), F->bt_624); b_; }), (*(P798)rt_nil_check(F->bt_624)).target, F->e_625, &(*F->ro_626), F->lv_627, &F->code_628v, &F->t_629v, &F->c_630v);
goto ret_;
}
if (((*(P798)rt_nil_check(F->bt_624)).kind == (((rt_int)15LL)))) {
if ((!f_opened_292(F->bt_624))) {
f_fail_23((*(P792)rt_nil_check(F->e_625)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P785)rt_nil_check((*(P798)rt_nil_check(F->bt_624)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P798)rt_nil_check(F->bt_624)).tparams == NULL)) {
f_index_on_631(&(*F->base_623), (*(P798)rt_nil_check(F->bt_624)).under, F->e_625, &(*F->ro_626), F->lv_627, &F->code_628v, &F->t_629v, &F->c_630v);
} else {
f_index_on_631(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_623), rt_str(".all", 4)); b_; }), (*(P798)rt_nil_check(F->bt_624)).under, F->e_625, &(*F->ro_626), F->lv_627, &F->code_628v, &F->t_629v, &F->c_630v);
}
goto ret_;
}
if (((((*(P798)rt_nil_check(F->bt_624)).kind == (((rt_int)6LL))) && (F->a_1891 != NULL)) && ((*(P792)rt_nil_check(F->a_1891)).kind == (((rt_int)16LL))))) {
if ((((*(P798)rt_nil_check(F->bt_624)).ndim != ((rt_int)1LL)) || ((*(P792)rt_nil_check(F->a_1891)).next != NULL))) {
f_fail_23((*(P792)rt_nil_check(F->e_625)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1893 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->a_1891)).a, (*(P798)rt_nil_check(F->bt_624)).idx, &F->it_1892));
F->hi_1894 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->a_1891)).b, (*(P798)rt_nil_check(F->bt_624)).idx, &F->it_1892));
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_223(F->bt_624)), rt_str("(", 1)), (*F->base_623)), rt_str(", ", 2)), F->lo_1893), rt_str(", ", 2)), F->hi_1894), rt_str(")", 1)); b_; }));
f_need_slice_618(F->bt_624);
F->t_629v = F->bt_624;
(*F->ro_626) = 1;
}
goto ret_;
}
if (((*(P798)rt_nil_check(F->bt_624)).kind == (((rt_int)6LL)))) {
F->off_1895 = NULL;
F->k_1896 = ((rt_int)0LL);
F->b_1897 = NULL;
F->b_1897 = f_mk_3(&(*F->base_623));
F->pre_1898 = NULL;
F->pre_1898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1891) != (*(P798)rt_nil_check(F->bt_624)).ndim)) {
f_fail_23((*(P792)rt_nil_check(F->e_625)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P798)rt_nil_check(F->bt_624)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_627) && f_has_call_616(&(*F->base_623)))) {
F->pre_1898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223(F->bt_624)), rt_str(" b_ = ", 6)), (*F->base_623)), rt_str("; ", 2)); b_; }));
F->b_1897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1891 != NULL)) {
F->k_1896 = rt_add(F->k_1896, ((rt_int)1LL));
{
F->i_1899 = rt_str_copy(f_gexpr_637(F->a_1891, f_idx_type_247(F->bt_624, F->k_1896), &F->it_1892));
F->l_1900 = rt_str_copy(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->b_1897))->all), rt_str(".", 1)), f_dim_lo_231(F->k_1896)));
F->h_1901 = rt_str_copy(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->b_1897))->all), rt_str(".", 1)), f_dim_hi_233(F->k_1896)));
f_check_type_221(F->it_1892, f_idx_type_247(F->bt_624, F->k_1896), (*(P792)rt_nil_check(F->e_625)).line);
if ((F->off_1895 == NULL)) {
F->off_1895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_622(&F->i_1899, &F->l_1900, &F->h_1901)), rt_str(" - ", 3)), F->l_1900), rt_str(")", 1)); b_; }));
} else {
F->off_1895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->off_1895))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1900), rt_str(", ", 2)), F->h_1901), rt_str(") + ", 4)), f_ix_622(&F->i_1899, &F->l_1900, &F->h_1901)), rt_str(" - ", 3)), F->l_1900), rt_str(")", 1)); b_; }));
}
}
F->a_1891 = (*(P792)rt_nil_check(F->a_1891)).next;
}
if ((((rt_int)(((((P785)rt_nil_check(F->pre_1898))->all)).len)) > ((rt_int)0LL))) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->pre_1898))->all), (((P785)rt_nil_check(F->b_1897))->all)), rt_str(".p[", 3)), (((P785)rt_nil_check(F->off_1895))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->b_1897))->all), rt_str(".p[", 3)), (((P785)rt_nil_check(F->off_1895))->all)), rt_str("]", 1)); b_; }));
}
F->t_629v = (*(P798)rt_nil_check(F->bt_624)).elem;
F->c_630v = (*(P798)rt_nil_check(F->bt_624)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1891) != ((rt_int)1LL))) {
f_fail_23((*(P792)rt_nil_check(F->e_625)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P798)rt_nil_check(F->bt_624)).kind == (((rt_int)5LL)))) {
if (((*(P792)rt_nil_check(F->a_1891)).kind == (((rt_int)16LL)))) {
F->lo_1902 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->a_1891)).a, g_ty_int_871, &F->it_1892));
F->hi_1903 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->a_1891)).b, g_ty_int_871, &F->it_1892));
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_623)), rt_str(", ", 2)), F->lo_1902), rt_str(", ", 2)), F->hi_1903), rt_str(")", 1)); b_; }));
F->t_629v = g_ty_string_875;
(*F->ro_626) = 1;
goto ret_;
}
{
F->i_1904 = rt_str_copy(f_gexpr_637(F->a_1891, g_ty_int_871, &F->it_1892));
F->t_629v = g_ty_ascii_874;
if (F->lv_627) {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_623)), rt_str(", ", 2)), F->i_1904), rt_str("))", 2)); b_; }));
} else {
F->code_628v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_623)), rt_str(", ", 2)), F->i_1904), rt_str(")", 1)); b_; }));
(*F->ro_626) = 1;
}
}
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_625)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_628) = F->code_628v;  (*F->t_629) = F->t_629v;  (*F->c_630) = F->c_630v;
  RT_FPOP();
  return;
}

static int f_own_attribute_633(P792 e_632) {
  struct f_own_attribute_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_632 = e_632;
F->saved_1905 = NULL;
F->saved_1905 = g_code_842;
F->bt_1906 = NULL;
F->ok_1907 = 0;
g_trial_869 = rt_add(g_trial_869, ((rt_int)1LL));
g_code_842 = f_new_buffer_24();
{ rt_frame xf1908;
if (RT_TRY(xf1908)) {
F->base_1910 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_632)).a, NULL, &F->bt_1906));
while (((F->bt_1906 != NULL) && ((*(P798)rt_nil_check(F->bt_1906)).kind == (((rt_int)8LL))))) {
f_finish_ptr_400(F->bt_1906);
F->bt_1906 = (*(P798)rt_nil_check(F->bt_1906)).target;
}
while ((((F->bt_1906 != NULL) && ((*(P798)rt_nil_check(F->bt_1906)).kind == (((rt_int)15LL)))) && ((*(P798)rt_nil_check(F->bt_1906)).tparams == NULL))) {
F->bt_1906 = (*(P798)rt_nil_check(F->bt_1906)).under;
}
if (((F->bt_1906 != NULL) && ((*(P798)rt_nil_check(F->bt_1906)).kind == (((rt_int)15LL))))) {
F->p_1911 = NULL;
F->p_1911 = (*(P798)rt_nil_check(F->bt_1906)).tparams;
while ((F->p_1911 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1911)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_632)).name))->all))) {
F->ok_1907 = 1;
}
F->p_1911 = (*(P792)rt_nil_check(F->p_1911)).next;
}
F->bt_1906 = (*(P798)rt_nil_check(F->bt_1906)).under;
}
if (((F->bt_1906 != NULL) && (((*(P798)rt_nil_check(F->bt_1906)).kind == (((rt_int)7LL))) || ((*(P798)rt_nil_check(F->bt_1906)).kind == (((rt_int)17LL)))))) {
F->f_1912 = NULL;
F->f_1912 = (*(P798)rt_nil_check(F->bt_1906)).fields;
while ((F->f_1912 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_1912)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_632)).name))->all))) {
F->ok_1907 = 1;
}
F->f_1912 = (*(P800)rt_nil_check(F->f_1912)).next;
}
}
RT_POP(xf1908);
} else {
RT_POP(xf1908);
int x1909 = rt_xcur;
if (0 || x1909 == ex_compile_error_1) {
F->ok_1907 = 0;
} else {
rt_raise(x1909);
}
}
}
g_trial_869 = rt_sub(g_trial_869, ((rt_int)1LL));
g_code_842 = F->saved_1905;
F->result_ = F->ok_1907;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_637(P792 e_634, P798 want_635, P798 *t_636) {
  struct f_gexpr_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_634 = e_634;
F->want_635 = want_635;
F->t_636 = t_636;
F->t_636v = *F->t_636;
F->k_1913 = (*(P792)rt_nil_check(F->e_634)).kind;
F->code_1914 = NULL;
F->c_1915 = NULL;
F->bt_1917 = NULL;
F->ctx_1918 = NULL;
F->ctx_1918 = g_cons_ctx_863;
g_cons_ctx_863 = NULL;
F->t_636v = g_ty_int_871;
if ((F->k_1913 == (((rt_int)1LL)))) {
if (((F->want_635 != NULL) && ((*(P798)rt_nil_check(F->want_635)).kind == (((rt_int)3LL))))) {
F->t_636v = g_ty_float_873;
F->result_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1913 == (((rt_int)2LL)))) {
F->t_636v = g_ty_float_873;
F->result_ = (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all);
goto ret_;
} else if ((F->k_1913 == (((rt_int)5LL)))) {
F->t_636v = g_ty_bool_872;
F->result_ = f_itos_7((*(P792)rt_nil_check(F->e_634)).ival);
goto ret_;
} else if ((F->k_1913 == (((rt_int)3LL)))) {
F->t_636v = g_ty_string_875;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_651(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1913 == (((rt_int)6LL)))) {
F->t_636v = g_ty_nil_878;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1913 == (((rt_int)4LL)))) {
if (((F->want_635 != NULL) && ((*(P798)rt_nil_check(f_base_of_212(F->want_635))).kind == (((rt_int)4LL))))) {
F->t_636v = F->want_635;
} else {
F->t_636v = f_enum_type_of_654(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), (*(P792)rt_nil_check(F->e_634)).line);
}
{
F->i_1919 = f_lit_index_251((*(P798)rt_nil_check(f_base_of_212(F->t_636v))).lits, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all));
if ((F->i_1919 < ((rt_int)0LL))) {
f_fail_23((*(P792)rt_nil_check(F->e_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1919);
goto ret_;
}
} else if ((F->k_1913 == (((rt_int)17LL)))) {
g_cons_ctx_863 = F->ctx_1918;
F->result_ = f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, F->want_635, &F->t_636v);
goto ret_;
} else if ((F->k_1913 == (((rt_int)7LL)))) {
F->y_1920 = NULL;
F->y_1920 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all));
if ((F->y_1920 == NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("ME", 2))) {
F->t_636v = g_ty_act_881;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_636v = g_ty_act_881;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_756(f_wrap_apply_649(F->e_634), 0, &F->t_636v);
goto ret_;
}
if (((((((((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_756(f_wrap_apply_649(F->e_634), 0, &F->t_636v);
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P802)rt_nil_check(F->y_1920)).kind == (((rt_int)1LL))) || ((*(P802)rt_nil_check(F->y_1920)).kind == (((rt_int)2LL))))) {
F->t_636v = (*(P802)rt_nil_check(F->y_1920)).t;
if (((*(P802)rt_nil_check(F->y_1920)).kind == (((rt_int)1LL)))) {
F->ro_1921 = f_check_import_590(F->y_1920, (*(P792)rt_nil_check(F->e_634)).line);
}
F->result_ = f_access_of_584(F->y_1920);
goto ret_;
}
if (((*(P802)rt_nil_check(F->y_1920)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_756(f_wrap_apply_649(F->e_634), 0, &F->t_636v);
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1913 == (((rt_int)8LL))) && (f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all)) != NULL)) && (f_user_op_752(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), f_copy_node_647((*(P792)rt_nil_check(F->e_634)).a)) != NULL))) {
F->call_1922 = NULL;
F->call_1922 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->e_634)).line);
F->fname_1923 = NULL;
F->fname_1923 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->e_634)).line);
(*(P792)rt_nil_check(F->fname_1923)).name = (*(P792)rt_nil_check(F->e_634)).name;
(*(P792)rt_nil_check(F->call_1922)).a = F->fname_1923;
(*(P792)rt_nil_check(F->call_1922)).b = f_copy_node_647((*(P792)rt_nil_check(F->e_634)).a);
F->result_ = f_gcall_756(F->call_1922, 0, &F->t_636v);
goto ret_;
} else if (((((F->k_1913 == (((rt_int)8LL))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("NOT", 3))) && (F->want_635 != NULL)) && ((*(P798)rt_nil_check(F->want_635)).kind == (((rt_int)16LL))))) {
F->a_1924 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, F->want_635, &F->t_636v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1924), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check((*(P798)rt_nil_check(F->want_635)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1913 == (((rt_int)8LL)))) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("NOT", 3))) {
F->a_1925 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, g_ty_bool_872, &F->t_636v));
f_check_type_221(F->t_636v, g_ty_bool_872, (*(P792)rt_nil_check(F->e_634)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1925), rt_str(")", 1));
goto ret_;
}
{
F->a_1926 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, F->want_635, &F->t_636v));
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1926;
goto ret_;
} else if (((*(P798)rt_nil_check(F->t_636v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1926), rt_str(")", 1));
goto ret_;
}
f_check_type_221(F->t_636v, g_ty_int_871, (*(P792)rt_nil_check(F->e_634)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1926), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1913 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_676(F->e_634, F->want_635, &F->t_636v);
goto ret_;
} else if ((F->k_1913 == (((rt_int)10LL)))) {
if ((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_634)).a)).kind == (((rt_int)7LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_634)).a)).kind == (((rt_int)12LL))))) {
F->nm_1927 = NULL;
F->nm_1927 = (*(P792)rt_nil_check(F->e_634)).a;
F->y_1928 = NULL;
if (((*(P792)rt_nil_check(F->nm_1927)).kind == (((rt_int)12LL)))) {
F->nm_1927 = (*(P792)rt_nil_check(F->nm_1927)).a;
}
F->y_1928 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->nm_1927)).name))->all));
if (((((F->y_1928 == NULL) || ((*(P802)rt_nil_check(F->y_1928)).kind == (((rt_int)3LL)))) || ((*(P802)rt_nil_check(F->y_1928)).kind == (((rt_int)4LL)))) || ((*(P802)rt_nil_check(F->y_1928)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_756(F->e_634, 0, &F->t_636v);
goto ret_;
}
}
{
F->base_1929 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, NULL, &F->bt_1917));
F->ro_1916 = 1;
f_index_on_631(&F->base_1929, F->bt_1917, F->e_634, &F->ro_1916, 0, &F->code_1914, &F->t_636v, &F->c_1915);
F->result_ = (((P785)rt_nil_check(F->code_1914))->all);
goto ret_;
}
} else if ((F->k_1913 == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_634)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_633(F->e_634)))) {
F->result_ = f_attribute_659(F->e_634, &F->t_636v);
goto ret_;
} else if (((f_as_subtype_283((*(P792)rt_nil_check(F->e_634)).a) != NULL) || f_ptr_attribute_656(F->e_634))) {
F->result_ = f_attribute_659(F->e_634, &F->t_636v);
goto ret_;
}
{
F->base_1930 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_634)).a, NULL, &F->bt_1917));
F->ro_1916 = 1;
f_select_on_614(&F->base_1930, F->bt_1917, F->e_634, &F->ro_1916, &F->code_1914, &F->t_636v, &F->c_1915);
F->result_ = (((P785)rt_nil_check(F->code_1914))->all);
goto ret_;
}
} else if ((F->k_1913 == (((rt_int)12LL)))) {
F->result_ = f_gcall_756(f_wrap_apply_649(F->e_634), 0, &F->t_636v);
goto ret_;
} else if ((F->k_1913 == (((rt_int)14LL)))) {
F->result_ = f_constructor_681(F->e_634, F->want_635, F->ctx_1918, &F->t_636v);
goto ret_;
} else if ((F->k_1913 == (((rt_int)13LL)))) {
F->result_ = f_resolved_640(F->e_634, &F->t_636v);
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_636) = F->t_636v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_640(P792 e_638, P798 *t_639) {
  struct f_resolved_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_638 = e_638;
F->t_639 = t_639;
F->t_639v = *F->t_639;
F->c_1931 = NULL;
F->vt_1932 = NULL;
F->y_1933 = NULL;
F->y_1933 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1934 = NULL;
F->tt_1934 = f_copy_node_647((*(P792)rt_nil_check(F->e_638)).b);
(*(P792)rt_nil_check(F->tt_1934)).next = NULL;
if (((F->y_1933 != NULL) && (((*(P802)rt_nil_check(F->y_1933)).kind == (((rt_int)10LL))) || (f_resolve_overload_730(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1934, f_copy_node_647((*(P792)rt_nil_check(F->e_638)).a), 0, (*(P792)rt_nil_check(F->e_638)).line) != NULL)))) {
F->call_1935 = NULL;
F->call_1935 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->e_638)).line);
F->f_1936 = NULL;
F->f_1936 = f_nn_61((((rt_int)12LL)), (*(P792)rt_nil_check(F->e_638)).line);
F->fname_1937 = NULL;
F->fname_1937 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->e_638)).line);
(*(P792)rt_nil_check(F->fname_1937)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P792)rt_nil_check(F->f_1936)).a = F->fname_1937;
(*(P792)rt_nil_check(F->f_1936)).b = F->tt_1934;
(*(P792)rt_nil_check(F->call_1935)).a = F->f_1936;
(*(P792)rt_nil_check(F->call_1935)).b = f_copy_node_647((*(P792)rt_nil_check(F->e_638)).a);
(*(P792)rt_nil_check((*(P792)rt_nil_check(F->call_1935)).b)).next = NULL;
F->result_ = f_gcall_756(F->call_1935, 0, &F->t_639v);
goto ret_;
}
F->t_639v = f_resolve_subtype_254((*(P792)rt_nil_check(F->e_638)).b, &F->c_1931);
{
F->v_1938 = rt_str_copy(f_gexpr_in_645((*(P792)rt_nil_check(F->e_638)).a, F->t_639v, F->c_1931, &F->vt_1932));
f_check_type_221(F->vt_1932, F->t_639v, (*(P792)rt_nil_check(F->e_638)).line);
F->result_ = f_checked_204(F->t_639v, F->c_1931, &F->v_1938);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_639) = F->t_639v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_645(P792 e_641, P798 want_642, P794 c_643, P798 *t_644) {
  struct f_gexpr_in_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_641 = e_641;
F->want_642 = want_642;
F->c_643 = c_643;
F->t_644 = t_644;
F->t_644v = *F->t_644;
g_cons_ctx_863 = F->c_643;
F->result_ = f_gexpr_637(F->e_641, F->want_642, &F->t_644v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_644) = F->t_644v;
  RT_FPOP();
  return F->result_;
}

static P792 f_copy_node_647(P792 e_646) {
  struct f_copy_node_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_646 = e_646;
F->x_1939 = NULL;
{ R793 *cell1940 = rt_alloc(sizeof(R793));
(*cell1940).name = NULL;
(*cell1940).tag = NULL;
(*cell1940).prags = NULL;
(*cell1940).labels = NULL;
(*cell1940).a = NULL;
(*cell1940).b = NULL;
(*cell1940).c = NULL;
(*cell1940).d = NULL;
(*cell1940).e = NULL;
(*cell1940).next = NULL;
F->x_1939 = cell1940;
}
(*(P792)rt_nil_check(F->x_1939)).kind = (*(P792)rt_nil_check(F->e_646)).kind;
(*(P792)rt_nil_check(F->x_1939)).line = (*(P792)rt_nil_check(F->e_646)).line;
(*(P792)rt_nil_check(F->x_1939)).ival = (*(P792)rt_nil_check(F->e_646)).ival;
(*(P792)rt_nil_check(F->x_1939)).flag = (*(P792)rt_nil_check(F->e_646)).flag;
(*(P792)rt_nil_check(F->x_1939)).name = (*(P792)rt_nil_check(F->e_646)).name;
(*(P792)rt_nil_check(F->x_1939)).tag = (*(P792)rt_nil_check(F->e_646)).tag;
(*(P792)rt_nil_check(F->x_1939)).a = (*(P792)rt_nil_check(F->e_646)).a;
(*(P792)rt_nil_check(F->x_1939)).b = (*(P792)rt_nil_check(F->e_646)).b;
(*(P792)rt_nil_check(F->x_1939)).c = (*(P792)rt_nil_check(F->e_646)).c;
(*(P792)rt_nil_check(F->x_1939)).d = (*(P792)rt_nil_check(F->e_646)).d;
F->result_ = F->x_1939;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P792 f_wrap_apply_649(P792 e_648) {
  struct f_wrap_apply_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_648 = e_648;
F->x_1941 = NULL;
F->x_1941 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->e_648)).line);
(*(P792)rt_nil_check(F->x_1941)).a = F->e_648;
F->result_ = F->x_1941;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_651(rstr *s_650) {
  struct f_c_string_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_650 = s_650;
F->n_1942 = ((rt_int)0LL);
{ rt_int lo1944 = ((rt_int)1LL), hi1945 = ((rt_int)(((*F->s_650)).len));
for (rt_int it1946 = lo1944; it1946 <= hi1945; it1946++) {
F->i_1943 = it1946;
if (((rt_str_get((*F->s_650), F->i_1943) == 92) || (rt_str_get((*F->s_650), F->i_1943) == 63))) {
F->n_1942 = rt_add(F->n_1942, ((rt_int)1LL));
}
}
}
{
F->r_1947 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_650)).len)), F->n_1942), ((rt_int)2LL)));
F->j_1948 = ((rt_int)1LL);
(*rt_str_at(&F->r_1947, ((rt_int)1LL))) = 34;
{ rt_int lo1950 = ((rt_int)1LL), hi1951 = ((rt_int)(((*F->s_650)).len));
for (rt_int it1952 = lo1950; it1952 <= hi1951; it1952++) {
F->i_1949 = it1952;
F->j_1948 = rt_add(F->j_1948, ((rt_int)1LL));
if (((rt_str_get((*F->s_650), F->i_1949) == 92) || (rt_str_get((*F->s_650), F->i_1949) == 63))) {
(*rt_str_at(&F->r_1947, F->j_1948)) = 92;
F->j_1948 = rt_add(F->j_1948, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1947, F->j_1948)) = rt_str_get((*F->s_650), F->i_1949);
}
}
(*rt_str_at(&F->r_1947, rt_add(F->j_1948, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1947;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P798 f_enum_type_of_654(rstr *lit_652, rt_int line_653) {
  struct f_enum_type_of_654fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_652 = lit_652;
F->line_653 = line_653;
F->y_1953 = NULL;
F->y_1953 = g_scope_stack_832;
F->c_1954 = NULL;
if ((f_lit_index_251((*(P798)rt_nil_check(g_ty_ascii_874)).lits, &(*F->lit_652)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_874;
goto ret_;
}
while ((F->y_1953 != NULL)) {
if ((((((*(P802)rt_nil_check(F->y_1953)).kind == (((rt_int)6LL))) || ((*(P802)rt_nil_check(F->y_1953)).kind == (((rt_int)5LL)))) && ((*(P802)rt_nil_check(F->y_1953)).st != NULL)) && ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1953)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_251((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_1953)).st)).a, &(*F->lit_652)) >= ((rt_int)0LL))) {
if (((*(P802)rt_nil_check(F->y_1953)).kind == (((rt_int)5LL)))) {
F->st_1955 = NULL;
F->st_1955 = f_nn_61((((rt_int)80LL)), F->line_653);
(*(P792)rt_nil_check(F->st_1955)).name = (*(P802)rt_nil_check(F->y_1953)).name;
F->result_ = f_resolve_subtype_254(F->st_1955, &F->c_1954);
goto ret_;
}
F->result_ = f_resolve_subtype_254((*(P802)rt_nil_check(F->y_1953)).st, &F->c_1954);
goto ret_;
}
}
F->y_1953 = (*(P802)rt_nil_check(F->y_1953)).stack;
}
f_fail_23(F->line_653, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_652)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_656(P792 e_655) {
  struct f_ptr_attribute_656fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_655 = e_655;
F->lv_1956 = NULL;
F->t_1957 = NULL;
F->c_1958 = NULL;
F->p_1960 = NULL;
F->saved_1961 = NULL;
F->saved_1961 = g_code_842;
if ((!f_is_lvalue_600((*(P792)rt_nil_check(F->e_655)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_842 = f_new_buffer_24();
f_lvalue_606((*(P792)rt_nil_check(F->e_655)).a, &F->lv_1956, &F->t_1957, &F->c_1958, &F->ro_1959);
g_code_842 = F->saved_1961;
if ((((*(P798)rt_nil_check(F->t_1957)).kind != (((rt_int)8LL))) || ((*(P798)rt_nil_check(F->t_1957)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_1960 = (*(P792)rt_nil_check((*(P798)rt_nil_check(F->t_1957)).decl)).d;
while ((F->p_1960 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1960)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_655)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_1960 = (*(P792)rt_nil_check(F->p_1960)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_659(P792 e_657, P798 *t_658) {
  struct f_attribute_659fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_657 = e_657;
F->t_658 = t_658;
F->t_658v = *F->t_658;
F->bt_1962 = NULL;
F->c_1963 = NULL;
F->base_1964 = NULL;
F->sub_1965 = NULL;
F->sub_1965 = f_as_subtype_283((*(P792)rt_nil_check(F->e_657)).a);
F->name_1966 = rt_str_copy((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_657)).name))->all));
if ((F->sub_1965 != NULL)) {
F->bt_1962 = f_resolve_subtype_254(F->sub_1965, &F->c_1963);
} else {
F->bt_1962 = f_value_subtype_276((*(P792)rt_nil_check(F->e_657)).a, &F->c_1963, &F->base_1964);
}
if ((((((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)8LL))) && (F->c_1963 != NULL)) && ((*(P794)rt_nil_check(F->c_1963)).args != NULL)) && ((*(P798)rt_nil_check(F->bt_1962)).decl != NULL))) {
F->p_1967 = NULL;
F->p_1967 = (*(P792)rt_nil_check((*(P798)rt_nil_check(F->bt_1962)).decl)).d;
F->a_1968 = NULL;
F->a_1968 = (*(P794)rt_nil_check(F->c_1963)).args;
while (((F->p_1967 != NULL) && (F->a_1968 != NULL))) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1967)).name))->all), F->name_1966)) {
F->pc_1969 = NULL;
F->v_1970 = rt_str_copy(f_gexpr_637(F->a_1968, f_resolve_subtype_254((*(P792)rt_nil_check(F->p_1967)).a, &F->pc_1969), &F->t_658v));
F->result_ = F->v_1970;
goto ret_;
}
F->p_1967 = (*(P792)rt_nil_check(F->p_1967)).next;
F->a_1968 = (*(P792)rt_nil_check(F->a_1968)).next;
}
}
while ((((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)8LL))) && (F->base_1964 != NULL))) {
f_finish_ptr_400(F->bt_1962);
F->base_1964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_598(&(((P785)rt_nil_check(F->base_1964))->all), F->bt_1962); b_; }));
F->bt_1962 = (*(P798)rt_nil_check(F->bt_1962)).target;
F->c_1963 = NULL;
if (((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)5LL)))) {
F->c_1963 = f_new_cons_175();
(*(P794)rt_nil_check(F->c_1963)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->base_1964))->all)), rt_str(").len", 5)); b_; }));
}
}
if ((((((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->bt_1962)).tparams != NULL)) && (F->c_1963 != NULL)) && ((*(P794)rt_nil_check(F->c_1963)).args != NULL))) {
F->p_1971 = NULL;
F->p_1971 = (*(P798)rt_nil_check(F->bt_1962)).tparams;
F->a_1972 = NULL;
F->a_1972 = (*(P794)rt_nil_check(F->c_1963)).args;
while (((F->p_1971 != NULL) && (F->a_1972 != NULL))) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->p_1971)).name))->all), F->name_1966)) {
F->pt_1973 = f_tparam_type_317(F->bt_1962, &F->name_1966);
F->v_1974 = rt_str_copy(f_gexpr_637(F->a_1972, F->pt_1973, &F->t_658v));
F->result_ = F->v_1974;
goto ret_;
}
F->p_1971 = (*(P792)rt_nil_check(F->p_1971)).next;
F->a_1972 = (*(P792)rt_nil_check(F->a_1972)).next;
}
}
if ((((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->bt_1962)).tparams == NULL))) {
F->c_1963 = f_base_cons_215(F->bt_1962, F->c_1963);
F->bt_1962 = f_base_of_212(F->bt_1962);
}
F->t_658v = g_ty_int_871;
if ((rt_str_eq(F->name_1966, rt_str("LEN", 3)) && ((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)5LL))))) {
if (((F->c_1963 != NULL) && ((*(P794)rt_nil_check(F->c_1963)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_1963)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_657)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_1966, rt_str("LEN", 3)) && ((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)12LL))))) {
if (((F->c_1963 != NULL) && ((*(P794)rt_nil_check(F->c_1963)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_1963)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_657)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_1966, rt_str("MIN", 3)) || rt_str_eq(F->name_1966, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_1962))) {
F->t_658v = F->bt_1962;
if (rt_str_eq(F->name_1966, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_1962, F->c_1963);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_1962, F->c_1963);
goto ret_;
} else if ((rt_str_eq(F->name_1966, rt_str("PREC", 4)) && ((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)3LL))))) {
if (((F->c_1963 != NULL) && ((*(P794)rt_nil_check(F->c_1963)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_1963)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_1966, rt_str("ACCESS", 6)) || rt_str_eq(F->name_1966, rt_str("USE", 3))) && ((*(P798)rt_nil_check(F->bt_1962)).kind == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_672(F->e_657, F->bt_1962, F->c_1963, F->base_1964, &F->t_658v);
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_657)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1966, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_658) = F->t_658v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_664(P792 sa_660, P792 sb_661, rstr *op_662, rt_int line_663) {
  struct f_subtype_compare_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_660 = sa_660;
F->sb_661 = sb_661;
F->op_662 = op_662;
F->line_663 = line_663;
F->ca_1975 = NULL;
F->cb_1976 = NULL;
F->ta_1977 = NULL;
F->ta_1977 = f_resolve_subtype_254(F->sa_660, &F->ca_1975);
F->tb_1978 = NULL;
F->tb_1978 = f_resolve_subtype_254(F->sb_661, &F->cb_1976);
F->r_1979 = NULL;
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_1980 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_1980, rt_str("1", 1));
F->no_1981 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_1981, rt_str("0", 1));
if (rt_str_eq((*F->op_662), rt_str("/=", 2))) {
rt_str_assign(&F->yes_1980, rt_str("0", 1));
rt_str_assign(&F->no_1981, rt_str("1", 1));
}
if ((!f_same_210(F->ta_1977, F->tb_1978))) {
F->result_ = F->no_1981;
goto ret_;
} else if (((((*(P792)rt_nil_check(F->sa_660)).kind == (((rt_int)80LL))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->sa_660)).name))->all), rt_str("TYPEOF", 6))) || (((*(P792)rt_nil_check(F->sb_661)).kind == (((rt_int)80LL))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->sb_661)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_1980;
goto ret_;
}
if (f_scalar_kind_177(F->ta_1977)) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_1977, F->ca_1975)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_1978, F->cb_1976)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_1977, F->ca_1975)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_1978, F->cb_1976)), rt_str(")", 1)); b_; }));
if (((*(P798)rt_nil_check(F->ta_1977)).kind == (((rt_int)3LL)))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1979))->all), rt_str(" && ", 4)), f_float_prec_666(F->ca_1975)), rt_str(" == ", 4)), f_float_prec_666(F->cb_1976)); b_; }));
}
} else if (((*(P798)rt_nil_check(F->ta_1977)).kind == (((rt_int)5LL)))) {
if (((((F->ca_1975 != NULL) && (F->cb_1976 != NULL)) && ((*(P794)rt_nil_check(F->ca_1975)).slen != NULL)) && ((*(P794)rt_nil_check(F->cb_1976)).slen != NULL))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check((*(P794)rt_nil_check(F->ca_1975)).slen))->all)), rt_str(") == (", 6)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->cb_1976)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_1975 == NULL) || ((*(P794)rt_nil_check(F->ca_1975)).slen == NULL)) && ((F->cb_1976 == NULL) || ((*(P794)rt_nil_check(F->cb_1976)).slen == NULL))))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if (((*(P798)rt_nil_check(F->ta_1977)).kind == (((rt_int)6LL)))) {
{ rt_int lo1983 = ((rt_int)1LL), hi1984 = (*(P798)rt_nil_check(F->ta_1977)).ndim;
for (rt_int it1985 = lo1983; it1985 <= hi1984; it1985++) {
F->k_1982 = it1985;
if (((((F->ca_1975 != NULL) && (F->cb_1976 != NULL)) && (f_cons_lo_241(F->ca_1975, F->k_1982) != NULL)) && (f_cons_lo_241(F->cb_1976, F->k_1982) != NULL))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1979))->all), rt_str(" && (", 5)), (((P785)rt_nil_check(f_cons_lo_241(F->ca_1975, F->k_1982)))->all)), rt_str(") == (", 6)), (((P785)rt_nil_check(f_cons_lo_241(F->cb_1976, F->k_1982)))->all)), rt_str(") && (", 6)), (((P785)rt_nil_check(f_cons_hi_244(F->ca_1975, F->k_1982)))->all)), rt_str(") == (", 6)), (((P785)rt_nil_check(f_cons_hi_244(F->cb_1976, F->k_1982)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if ((((((*(P798)rt_nil_check(F->ta_1977)).kind == (((rt_int)15LL))) && ((*(P798)rt_nil_check(F->ta_1977)).tparams != NULL)) && (F->ca_1975 != NULL)) && (F->cb_1976 != NULL))) {
F->a_1986 = NULL;
F->a_1986 = (*(P794)rt_nil_check(F->ca_1975)).args;
F->b_1987 = NULL;
F->b_1987 = (*(P794)rt_nil_check(F->cb_1976)).args;
F->at_1988 = NULL;
F->bt2_1989 = NULL;
while (((F->a_1986 != NULL) && (F->b_1987 != NULL))) {
F->x_1990 = rt_str_copy(f_gexpr_637(F->a_1986, NULL, &F->at_1988));
F->y_1991 = rt_str_copy(f_gexpr_637(F->b_1987, F->at_1988, &F->bt2_1989));
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_1979))->all), rt_str(" && ", 4)), f_eq_code_359(F->at_1988, &F->x_1990, &F->y_1991)); b_; }));
F->a_1986 = (*(P792)rt_nil_check(F->a_1986)).next;
F->b_1987 = (*(P792)rt_nil_check(F->b_1987)).next;
}
} else if (((((*(P798)rt_nil_check(F->ta_1977)).kind == (((rt_int)17LL))) && (F->ca_1975 != NULL)) && (F->cb_1976 != NULL))) {
if ((((*(P794)rt_nil_check(F->ca_1975)).lo != NULL) && ((*(P794)rt_nil_check(F->cb_1976)).lo != NULL))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check((*(P794)rt_nil_check(F->ca_1975)).lo))->all)), rt_str(") == (", 6)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->cb_1976)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P794)rt_nil_check(F->ca_1975)).lo != NULL) || ((*(P794)rt_nil_check(F->cb_1976)).lo != NULL))) {
F->r_1979 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_662), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P785)rt_nil_check(F->r_1979))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->r_1979))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_666(P794 c_665) {
  struct f_float_prec_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_665 = c_665;
if (((F->c_665 != NULL) && ((*(P794)rt_nil_check(F->c_665)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_665)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_672(P792 e_667, P798 bt_668, P794 c_669, P785 base_670, P798 *t_671) {
  struct f_file_attribute_672fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_667 = e_667;
F->bt_668 = bt_668;
F->c_669 = c_669;
F->base_670 = base_670;
F->t_671 = t_671;
F->t_671v = *F->t_671;
F->t_671v = g_file_mode_type_882;
if ((F->base_670 != NULL)) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_667)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P785)rt_nil_check(F->base_670))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P785)rt_nil_check(F->base_670))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_669 != NULL) && ((*(P794)rt_nil_check(F->c_669)).args != NULL))) {
if (rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_667)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_637((*(P794)rt_nil_check(F->c_669)).args, F->t_671v, &F->t_671v);
goto ret_;
} else if (((*(P792)rt_nil_check((*(P794)rt_nil_check(F->c_669)).args)).next != NULL)) {
F->result_ = f_gexpr_637((*(P792)rt_nil_check((*(P794)rt_nil_check(F->c_669)).args)).next, F->t_671v, &F->t_671v);
goto ret_;
}
}
f_fail_23((*(P792)rt_nil_check(F->e_667)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P785)rt_nil_check((*(P792)rt_nil_check(F->e_667)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_671) = F->t_671v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_676(P792 e_673, P798 want_674, P798 *t_675) {
  struct f_gbinop_676fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_673 = e_673;
F->want_674 = want_674;
F->t_675 = t_675;
F->t_675v = *F->t_675;
F->op_1992 = NULL;
F->op_1992 = (*(P792)rt_nil_check(F->e_673)).name;
F->ta_1993 = NULL;
F->tb_1994 = NULL;
F->hint_1995 = NULL;
F->uy_1996 = NULL;
F->t_675v = g_ty_bool_872;
if ((f_lookup_154(&(((P785)rt_nil_check(F->op_1992))->all)) != NULL)) {
F->l_1997 = NULL;
F->r_1998 = NULL;
F->l_1997 = f_copy_node_647((*(P792)rt_nil_check(F->e_673)).a);
F->r_1998 = f_copy_node_647((*(P792)rt_nil_check(F->e_673)).b);
(*(P792)rt_nil_check(F->l_1997)).next = F->r_1998;
F->uy_1996 = f_user_op_752(&(((P785)rt_nil_check(F->op_1992))->all), F->l_1997);
if ((F->uy_1996 != NULL)) {
F->call_1999 = NULL;
F->call_1999 = f_nn_61((((rt_int)10LL)), (*(P792)rt_nil_check(F->e_673)).line);
F->fname_2000 = NULL;
F->fname_2000 = f_nn_61((((rt_int)7LL)), (*(P792)rt_nil_check(F->e_673)).line);
(*(P792)rt_nil_check(F->fname_2000)).name = F->op_1992;
(*(P792)rt_nil_check(F->call_1999)).a = F->fname_2000;
(*(P792)rt_nil_check(F->call_1999)).b = F->l_1997;
F->result_ = f_gcall_756(F->call_1999, 0, &F->t_675v);
goto ret_;
}
}
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("IN", 2))) {
F->s_2001 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, NULL, &F->tb_1994));
if (((*(P798)rt_nil_check(F->tb_1994)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2002 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, (*(P798)rt_nil_check(F->tb_1994)).elem, &F->ta_1993));
f_check_type_221(F->ta_1993, (*(P798)rt_nil_check(F->tb_1994)).elem, (*(P792)rt_nil_check(F->e_673)).line);
F->t_675v = g_ty_bool_872;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_2002), rt_str(", ", 2)), F->s_2001), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("AND", 3)) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("OR", 2))) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("XOR", 3))) && (F->want_674 != NULL)) && ((*(P798)rt_nil_check(F->want_674)).kind == (((rt_int)16LL))))) {
F->a_2003 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, F->want_674, &F->ta_1993));
F->b_2004 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, F->want_674, &F->tb_1994));
f_check_type_221(F->tb_1994, F->ta_1993, (*(P792)rt_nil_check(F->e_673)).line);
F->t_675v = F->ta_1993;
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_2003), rt_str(", ", 2)), F->b_2004), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_2003), rt_str(", ", 2)), F->b_2004), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_2003), rt_str(", ", 2)), F->b_2004), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("AND", 3)) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("OR", 2))) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("XOR", 3)))) {
F->a_2005 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, g_ty_bool_872, &F->ta_1993));
F->b_2006 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, g_ty_bool_872, &F->tb_1994));
f_check_type_221(F->ta_1993, g_ty_bool_872, (*(P792)rt_nil_check(F->e_673)).line);
f_check_type_221(F->tb_1994, g_ty_bool_872, (*(P792)rt_nil_check(F->e_673)).line);
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2005), rt_str(" && ", 4)), F->b_2006), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2005), rt_str(" || ", 4)), F->b_2006), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2005), rt_str(" != ", 4)), F->b_2006), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("&", 1)) && (F->want_674 != NULL)) && ((*(P798)rt_nil_check(f_base_of_212(F->want_674))).kind == (((rt_int)6LL))))) {
F->at_2007 = NULL;
F->at_2007 = f_base_of_212(F->want_674);
F->a_2008 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, F->at_2007, &F->ta_1993));
F->b_2009 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, F->at_2007, &F->tb_1994));
f_check_type_221(F->ta_1993, F->at_2007, (*(P792)rt_nil_check(F->e_673)).line);
f_check_type_221(F->tb_1994, F->at_2007, (*(P792)rt_nil_check(F->e_673)).line);
if ((((*(P798)rt_nil_check(F->at_2007)).ndim != ((rt_int)1LL)) || ((*(P798)rt_nil_check(f_base_of_212((*(P798)rt_nil_check(F->at_2007)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_618(F->at_2007);
F->t_675v = F->at_2007;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_223(F->at_2007)), rt_str("(", 1)), F->a_2008), rt_str(", ", 2)), F->b_2009), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("&", 1))) {
F->wa_2010 = NULL;
F->wb_2011 = NULL;
if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_673)).a)).kind == (((rt_int)4LL)))) {
F->wa_2010 = g_ty_ascii_874;
}
if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_673)).b)).kind == (((rt_int)4LL)))) {
F->wb_2011 = g_ty_ascii_874;
}
{
F->a_2012 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, F->wa_2010, &F->ta_1993));
F->b_2013 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, F->wb_2011, &F->tb_1994));
F->t_675v = g_ty_string_875;
if ((((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)5LL))) && ((*(P798)rt_nil_check(F->tb_1994)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2012), rt_str(", ", 2)), F->b_2013), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)5LL))) && ((*(P798)rt_nil_check(F->tb_1994)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2012), rt_str(", ", 2)), F->b_2013), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)4LL))) && ((*(P798)rt_nil_check(F->tb_1994)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2012), rt_str(", ", 2)), F->b_2013), rt_str(")", 1));
goto ret_;
} else if ((((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)4LL))) && ((*(P798)rt_nil_check(F->tb_1994)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2012), rt_str(", ", 2)), F->b_2013), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("=", 1)) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/=", 2))) && (f_as_subtype_283((*(P792)rt_nil_check(F->e_673)).a) != NULL)) && (f_as_subtype_283((*(P792)rt_nil_check(F->e_673)).b) != NULL))) {
F->t_675v = g_ty_bool_872;
F->result_ = f_subtype_compare_664(f_as_subtype_283((*(P792)rt_nil_check(F->e_673)).a), f_as_subtype_283((*(P792)rt_nil_check(F->e_673)).b), &(((P785)rt_nil_check(F->op_1992))->all), (*(P792)rt_nil_check(F->e_673)).line);
goto ret_;
}
if ((f_is_rel_107(&(((P785)rt_nil_check(F->op_1992))->all)) && (!rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("IN", 2))))) {
if (((((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_673)).a)).kind == (((rt_int)4LL))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_673)).a)).kind == (((rt_int)6LL)))) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->e_673)).a)).kind == (((rt_int)1LL))))) {
F->dummy_2014 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, NULL, &F->hint_1995));
}
{
F->a_2015 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, F->hint_1995, &F->ta_1993));
F->b_2016 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, F->ta_1993, &F->tb_1994));
F->ct_2017 = NULL;
F->ct_2017 = f_base_of_212(F->ta_1993);
F->t_675v = g_ty_bool_872;
if ((((*(P798)rt_nil_check(F->ta_1993)).kind != (((rt_int)11LL))) && ((*(P798)rt_nil_check(F->tb_1994)).kind != (((rt_int)11LL))))) {
f_check_type_221(F->tb_1994, F->ta_1993, (*(P792)rt_nil_check(F->e_673)).line);
}
if (((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)11LL)))) {
F->ct_2017 = f_base_of_212(F->tb_1994);
}
if (((*(P798)rt_nil_check(F->ct_2017)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2016), rt_str(", ", 2)), F->a_2015), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2016), rt_str(", ", 2)), F->a_2015), rt_str(")", 1));
goto ret_;
}
if (((*(P798)rt_nil_check(F->ct_2017)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_2015), rt_str(", ", 2)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_2016), rt_str(", ", 2)), F->a_2015), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_347(F->ct_2017)) {
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_359(F->ct_2017, &F->a_2015, &F->b_2016);
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_359(F->ct_2017, &F->a_2015, &F->b_2016)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2015), rt_str(" == ", 4)), F->b_2016), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2015), rt_str(" != ", 4)), F->b_2016), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2015), rt_str(" ", 1)), (((P785)rt_nil_check(F->op_1992))->all)), rt_str(" ", 1)), F->b_2016), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2018 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).a, F->want_674, &F->ta_1993));
F->b_2019 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->e_673)).b, F->ta_1993, &F->tb_1994));
if ((((*(P798)rt_nil_check(F->ta_1993)).kind == (((rt_int)3LL))) || ((*(P798)rt_nil_check(F->tb_1994)).kind == (((rt_int)3LL))))) {
F->t_675v = g_ty_float_873;
if (((rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("+", 1)) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("-", 1))) || rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2018), rt_str(" ", 1)), (((P785)rt_nil_check(F->op_1992))->all)), rt_str(" ", 1)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
}
}
f_check_type_221(F->ta_1993, g_ty_int_871, (*(P792)rt_nil_check(F->e_673)).line);
f_check_type_221(F->tb_1994, g_ty_int_871, (*(P792)rt_nil_check(F->e_673)).line);
F->t_675v = g_ty_int_871;
if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P785)rt_nil_check(F->op_1992))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2018), rt_str(", ", 2)), F->b_2019), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P792)rt_nil_check(F->e_673)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P785)rt_nil_check(F->op_1992))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_675) = F->t_675v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_681(P792 e_677, P798 want_678, P794 ctx_679, P798 *t_680) {
  struct f_constructor_681fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_677 = e_677;
F->want_678 = want_678;
F->ctx_679 = ctx_679;
F->t_680 = t_680;
F->t_680v = *F->t_680;
F->it_2020 = NULL;
F->it_2020 = (*(P792)rt_nil_check(F->e_677)).a;
F->f_2021 = NULL;
F->vt_2022 = NULL;
if (((F->want_678 != NULL) && ((*(P798)rt_nil_check(F->want_678)).kind == (((rt_int)16LL))))) {
F->s_2023 = NULL;
F->s_2023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_680v = F->want_678;
while ((F->it_2020 != NULL)) {
F->v_2024 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->it_2020)).b, (*(P798)rt_nil_check(F->want_678)).elem, &F->vt_2022));
f_check_type_221(F->vt_2022, (*(P798)rt_nil_check(F->want_678)).elem, (*(P792)rt_nil_check(F->e_677)).line);
F->s_2023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (((P785)rt_nil_check(F->s_2023))->all)), rt_str(", ", 2)), f_set_elem_690(F->want_678, &F->v_2024)), rt_str(")", 1)); b_; }));
F->it_2020 = (*(P792)rt_nil_check(F->it_2020)).next;
}
F->result_ = (((P785)rt_nil_check(F->s_2023))->all);
goto ret_;
}
if (((F->want_678 != NULL) && ((*(P798)rt_nil_check(F->want_678)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P785)rt_nil_check((*(P798)rt_nil_check(F->want_678)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_678 != NULL) && ((*(P798)rt_nil_check(F->want_678)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_695(F->e_677, F->want_678, F->ctx_679, &F->t_680v);
goto ret_;
}
if (((F->want_678 != NULL) && ((*(P798)rt_nil_check(F->want_678)).kind == (((rt_int)17LL))))) {
if ((((((F->it_2020 == NULL) || ((*(P792)rt_nil_check(F->it_2020)).next != NULL)) || ((*(P792)rt_nil_check(F->it_2020)).a == NULL)) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2020)).a)).next != NULL)) || ((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2020)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2021 = (*(P798)rt_nil_check(F->want_678)).fields;
{
F->i_2025 = ((rt_int)0LL);
F->tmp_2026 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2021 != NULL) && (!rt_str_eq((((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all), (((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2020)).a)).a)).name))->all))))) {
F->i_2025 = rt_add(F->i_2025, ((rt_int)1LL));
F->f_2021 = (*(P800)rt_nil_check(F->f_2021)).next;
}
if ((F->f_2021 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2020)).a)).a)).name))->all)); b_; }));
}
F->t_680v = F->want_678;
g_cons_ctx_863 = (*(P800)rt_nil_check(F->f_2021)).c;
{
F->v_2027 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->it_2020)).b, (*(P800)rt_nil_check(F->f_2021)).t, &F->vt_2022));
f_check_type_221(F->vt_2022, (*(P800)rt_nil_check(F->f_2021)).t, (*(P792)rt_nil_check(F->e_677)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223(F->want_678)), rt_str(" ", 1)), F->tmp_2026), rt_str("; ", 2)), F->tmp_2026), rt_str(".tag = ", 7)), f_itos_7(F->i_2025)), rt_str("; ", 2)), F->tmp_2026), rt_str(".u.", 3)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all))), rt_str(" = ", 3)), f_comp_value_685((*(P800)rt_nil_check(F->f_2021)).t, (*(P800)rt_nil_check(F->f_2021)).c, &F->v_2027)), rt_str("; ", 2)), F->tmp_2026), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_678 == NULL) || ((*(P798)rt_nil_check(F->want_678)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_680v = F->want_678;
F->f_2021 = (*(P798)rt_nil_check(F->want_678)).fields;
{
F->tmp_2028 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2029 = NULL;
F->parts_2029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223(F->want_678)), rt_str(" ", 1)), F->tmp_2028), rt_str(";", 1)); b_; }));
while ((F->it_2020 != NULL)) {
F->k_2030 = NULL;
F->k_2030 = (*(P792)rt_nil_check(F->it_2020)).a;
F->shared_2031 = NULL;
if ((F->k_2030 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2030 != NULL)) {
if (((((F->f_2021 == NULL) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->k_2030)).a)).kind != (((rt_int)7LL)))) || ((*(P792)rt_nil_check(F->k_2030)).b != NULL)) || (!rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check((*(P792)rt_nil_check(F->k_2030)).a)).name))->all), (((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all))))) {
if ((F->f_2021 == NULL)) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2020)).a)).next == NULL)) {
g_cons_ctx_863 = (*(P800)rt_nil_check(F->f_2021)).c;
{
F->v_2032 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->it_2020)).b, (*(P800)rt_nil_check(F->f_2021)).t, &F->vt_2022));
f_check_type_221(F->vt_2022, (*(P800)rt_nil_check(F->f_2021)).t, (*(P792)rt_nil_check(F->e_677)).line);
F->parts_2029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2029))->all), rt_str(" ", 1)), F->tmp_2028), rt_str(".", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all))), rt_str(" = ", 3)), f_comp_value_685((*(P800)rt_nil_check(F->f_2021)).t, (*(P800)rt_nil_check(F->f_2021)).c, &F->v_2032)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2031 == NULL)) {
F->v_2033 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->it_2020)).b, (*(P800)rt_nil_check(F->f_2021)).t, &F->vt_2022));
F->shared_2031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_221(F->vt_2022, (*(P800)rt_nil_check(F->f_2021)).t, (*(P792)rt_nil_check(F->e_677)).line);
F->parts_2029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2029))->all), rt_str(" ", 1)), f_ctype_223((*(P800)rt_nil_check(F->f_2021)).t)), rt_str(" ", 1)), (((P785)rt_nil_check(F->shared_2031))->all)), rt_str(" = ", 3)), F->v_2033), rt_str(";", 1)); b_; }));
}
f_check_type_221(F->vt_2022, (*(P800)rt_nil_check(F->f_2021)).t, (*(P792)rt_nil_check(F->e_677)).line);
F->parts_2029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2029))->all), rt_str(" ", 1)), F->tmp_2028), rt_str(".", 1)), f_field_c_17(&(((P785)rt_nil_check((*(P800)rt_nil_check(F->f_2021)).name))->all))), rt_str(" = ", 3)), f_comp_value_685((*(P800)rt_nil_check(F->f_2021)).t, (*(P800)rt_nil_check(F->f_2021)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_355((*(P800)rt_nil_check(F->f_2021)).t, &(((P785)rt_nil_check(F->shared_2031))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2021 = (*(P800)rt_nil_check(F->f_2021)).next;
F->k_2030 = (*(P792)rt_nil_check(F->k_2030)).next;
}
F->it_2020 = (*(P792)rt_nil_check(F->it_2020)).next;
}
if ((F->f_2021 != NULL)) {
f_fail_23((*(P792)rt_nil_check(F->e_677)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2029))->all), rt_str(" ", 1)), F->tmp_2028), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_680) = F->t_680v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_685(P798 t_682, P794 c_683, rstr *v_684) {
  struct f_comp_value_685fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_682 = t_682;
F->c_683 = c_683;
F->v_684 = v_684;
if (((F->c_683 == NULL) || (((*(P794)rt_nil_check(F->c_683)).lo != NULL) && f_has_at_687(&(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_683)).lo))->all))))) {
F->result_ = f_copy_code_355(F->t_682, &(*F->v_684));
goto ret_;
} else if (((((*(P798)rt_nil_check(F->t_682)).kind == (((rt_int)5LL))) && ((*(P794)rt_nil_check(F->c_683)).slen != NULL)) && (!f_has_at_687(&(((P785)rt_nil_check((*(P794)rt_nil_check(F->c_683)).slen))->all))))) {
F->result_ = f_copy_code_355(F->t_682, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_684)), rt_str(", ", 2)), (((P785)rt_nil_check((*(P794)rt_nil_check(F->c_683)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_682, F->c_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_355(F->t_682, &(*F->v_684)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_687(rstr *s_686) {
  struct f_has_at_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_686 = s_686;
{ rt_int lo2035 = ((rt_int)1LL), hi2036 = ((rt_int)(((*F->s_686)).len));
for (rt_int it2037 = lo2035; it2037 <= hi2036; it2037++) {
F->i_2034 = it2037;
if ((rt_str_get((*F->s_686), F->i_2034) == 64)) {
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

static rstr f_set_elem_690(P798 st_688, rstr *v_689) {
  struct f_set_elem_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_688 = st_688;
F->v_689 = v_689;
F->result_ = (*F->v_689);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_695(P792 e_691, P798 at_692, P794 ctx_693, P798 *t_694) {
  struct f_array_cons_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_691 = e_691;
F->at_692 = at_692;
F->ctx_693 = ctx_693;
F->t_694 = t_694;
F->t_694v = *F->t_694;
F->tmp_2038 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2039 = NULL;
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223(F->at_692)), rt_str(" ", 1)), F->tmp_2038), rt_str(";", 1)); b_; }));
F->it_2040 = NULL;
F->it_2040 = (*(P792)rt_nil_check(F->e_691)).a;
F->positional_2041 = 1;
F->t_694v = F->at_692;
while ((F->it_2040 != NULL)) {
if (((*(P792)rt_nil_check(F->it_2040)).a != NULL)) {
F->positional_2041 = 0;
}
F->it_2040 = (*(P792)rt_nil_check(F->it_2040)).next;
}
{ rt_int lo2043 = ((rt_int)1LL), hi2044 = (*(P798)rt_nil_check(F->at_692)).ndim;
for (rt_int it2045 = lo2043; it2045 <= hi2044; it2045++) {
F->k_2042 = it2045;
F->lo_2046 = NULL;
F->hi_2047 = NULL;
if ((((F->ctx_693 != NULL) && (f_cons_lo_241(F->ctx_693, F->k_2042) != NULL)) && (!f_has_at_687(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P785)rt_nil_check(f_cons_lo_241(F->ctx_693, F->k_2042)))->all); b_; }))))) {
F->lo_2046 = f_cons_lo_241(F->ctx_693, F->k_2042);
F->hi_2047 = f_cons_hi_244(F->ctx_693, F->k_2042);
} else if ((((*(P798)rt_nil_check(F->at_692)).ndim == ((rt_int)1LL)) && F->positional_2041)) {
if (((*(P798)rt_nil_check(f_base_of_212((*(P798)rt_nil_check(F->at_692)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2046 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2046 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->lo_2046))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P792)rt_nil_check(F->e_691)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P792)rt_nil_check(F->e_691)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2039))->all), rt_str(" ", 1)), F->tmp_2038), rt_str(".", 1)), f_dim_lo_231(F->k_2042)), rt_str(" = ", 3)), (((P785)rt_nil_check(F->lo_2046))->all)), rt_str("; ", 2)), F->tmp_2038), rt_str(".", 1)), f_dim_hi_233(F->k_2042)), rt_str(" = ", 3)), (((P785)rt_nil_check(F->hi_2047))->all)), rt_str(";", 1)); b_; }));
}
}
if (((*(P798)rt_nil_check(F->at_692)).ndim == ((rt_int)1LL))) {
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2039))->all), rt_str(" ", 1)), F->tmp_2038), rt_str(".lo2 = ", 7)), F->tmp_2038), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2039))->all), rt_str(" rt_int n_", 10)), F->tmp_2038), rt_str(" = ", 3)), f_acnt_238(F->at_692, &F->tmp_2038)), rt_str("; ", 2)), F->tmp_2038), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_223((*(P798)rt_nil_check(F->at_692)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2038), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2038), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2038), rt_str(" + 1);", 6)); b_; }));
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->parts_2039))->all), f_fill_items_701((*(P792)rt_nil_check(F->e_691)).a, F->at_692, &F->tmp_2038, NULL, ((rt_int)1LL))); b_; }));
F->parts_2039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->parts_2039))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2038), rt_str("; i_++) if (seen_", 17)), F->tmp_2038), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2038), rt_str("; })", 4)); b_; }));
F->result_ = (((P785)rt_nil_check(F->parts_2039))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_694) = F->t_694v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_701(P792 items_696, P798 at_697, rstr *tmp_698, P796 prefix_699, rt_int dim_700) {
  struct f_fill_items_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_696 = items_696;
F->at_697 = at_697;
F->tmp_698 = tmp_698;
F->prefix_699 = prefix_699;
F->dim_700 = dim_700;
F->it_2048 = NULL;
F->it_2048 = F->items_696;
F->pos_2049 = ((rt_int)0LL);
F->r_2050 = NULL;
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2051 = NULL;
while ((F->it_2048 != NULL)) {
if (((*(P792)rt_nil_check(F->it_2048)).a == NULL)) {
if (((F->dim_700 < (*(P798)rt_nil_check(F->at_697)).ndim) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2048)).b)).kind == (((rt_int)14LL))))) {
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_700)), rt_str(" = ", 3)), (*F->tmp_698)), rt_str(".", 1)), f_dim_lo_231(F->dim_700)), rt_str(" + ", 3)), f_itos_7(F->pos_2049)), rt_str("; ", 2)), f_fill_items_701((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2048)).b)).a, F->at_697, &(*F->tmp_698), f_add_line_706(F->prefix_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_700)); b_; })), rt_add(F->dim_700, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2052 = rt_str_copy(f_item_value_711((*(P792)rt_nil_check(F->it_2048)).b, F->at_697, f_e_line_703(F->it_2048), &F->vt_2051));
if (((F->dim_700 == ((rt_int)1LL)) && ((*(P798)rt_nil_check(F->at_697)).ndim > ((rt_int)1LL)))) {
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" { ", 3)), F->v_2052), rt_str(" if (", 5)), f_itos_7(F->pos_2049)), rt_str(" >= n_", 6)), (*F->tmp_698)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_698)), rt_str(".p[", 3)), f_itos_7(F->pos_2049)), rt_str("] = ", 4)), f_copy_code_355((*(P798)rt_nil_check(F->at_697)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_698)), rt_str("[", 1)), f_itos_7(F->pos_2049)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" { ", 3)), F->v_2052), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_700)), rt_str(" = ", 3)), (*F->tmp_698)), rt_str(".", 1)), f_dim_lo_231(F->dim_700)), rt_str(" + ", 3)), f_itos_7(F->pos_2049)), rt_str("; ", 2)), f_store_at_721(F->at_697, &(*F->tmp_698), f_add_line_706(F->prefix_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_700)); b_; })), F->dim_700)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2049 = rt_add(F->pos_2049, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_700, f_list_len_67((*(P792)rt_nil_check(F->it_2048)).a)), ((rt_int)1LL)) == (*(P798)rt_nil_check(F->at_697)).ndim)) {
F->k_2053 = NULL;
F->k_2053 = (*(P792)rt_nil_check(F->it_2048)).a;
F->d_2054 = F->dim_700;
F->pre_2055 = NULL;
F->pre_2055 = F->prefix_699;
F->loops_2056 = NULL;
F->loops_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2057 = NULL;
F->ends_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2058 = rt_str_copy(f_item_value_711((*(P792)rt_nil_check(F->it_2048)).b, F->at_697, (*(P792)rt_nil_check(F->it_2048)).line, &F->vt_2051));
while ((F->k_2053 != NULL)) {
F->xv_2059 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_2054)));
F->loops_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->loops_2056))->all), f_key_loop_716(F->k_2053, F->at_697, F->d_2054, &F->xv_2059)); b_; }));
F->ends_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->ends_2057))->all), rt_str(" }", 2)); b_; }));
F->pre_2055 = f_add_line_706(F->pre_2055, &F->xv_2059);
F->d_2054 = rt_add(F->d_2054, ((rt_int)1LL));
F->k_2053 = (*(P792)rt_nil_check(F->k_2053)).next;
}
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" { ", 3)), F->v_2058), (((P785)rt_nil_check(F->loops_2056))->all)), rt_str(" ", 1)), f_store_at_721(F->at_697, &(*F->tmp_698), F->pre_2055, (*(P798)rt_nil_check(F->at_697)).ndim)), (((P785)rt_nil_check(F->ends_2057))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_700 == (*(P798)rt_nil_check(F->at_697)).ndim) || ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2048)).b)).kind == (((rt_int)14LL))))) {
F->k_2060 = NULL;
F->k_2060 = (*(P792)rt_nil_check(F->it_2048)).a;
while ((F->k_2060 != NULL)) {
F->xv_2061 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_700)));
if ((F->dim_700 < (*(P798)rt_nil_check(F->at_697)).ndim)) {
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" {", 2)), f_key_loop_716(F->k_2060, F->at_697, F->dim_700, &F->xv_2061)), rt_str(" ", 1)), f_fill_items_701((*(P792)rt_nil_check((*(P792)rt_nil_check(F->it_2048)).b)).a, F->at_697, &(*F->tmp_698), f_add_line_706(F->prefix_699, &F->xv_2061), rt_add(F->dim_700, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2062 = rt_str_copy(f_item_value_711((*(P792)rt_nil_check(F->it_2048)).b, F->at_697, (*(P792)rt_nil_check(F->it_2048)).line, &F->vt_2051));
F->r_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->r_2050))->all), rt_str(" { ", 3)), F->v_2062), f_key_loop_716(F->k_2060, F->at_697, F->dim_700, &F->xv_2061)), rt_str(" ", 1)), f_store_at_721(F->at_697, &(*F->tmp_698), f_add_line_706(F->prefix_699, &F->xv_2061), F->dim_700)), rt_str(" } }", 4)); b_; }));
}
F->k_2060 = (*(P792)rt_nil_check(F->k_2060)).next;
}
} else {
f_fail_23((*(P792)rt_nil_check(F->it_2048)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P798)rt_nil_check(F->at_697)).ndim, F->dim_700), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2048 = (*(P792)rt_nil_check(F->it_2048)).next;
}
F->result_ = (((P785)rt_nil_check(F->r_2050))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_703(P792 e_702) {
  struct f_e_line_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_702 = e_702;
F->result_ = (*(P792)rt_nil_check(F->e_702)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P796 f_add_line_706(P796 l_704, rstr *s_705) {
  struct f_add_line_706fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_704 = l_704;
F->s_705 = s_705;
F->r_2063 = NULL;
F->tail_2064 = NULL;
F->x_2065 = NULL;
F->p_2066 = NULL;
F->p_2066 = F->l_704;
while ((F->p_2066 != NULL)) {
{ R797 *cell2067 = rt_alloc(sizeof(R797));
(*cell2067).s = NULL;
(*cell2067).next = NULL;
F->x_2065 = cell2067;
}
(*(P796)rt_nil_check(F->x_2065)).s = (*(P796)rt_nil_check(F->p_2066)).s;
if ((F->tail_2064 == NULL)) {
F->r_2063 = F->x_2065;
} else {
(*(P796)rt_nil_check(F->tail_2064)).next = F->x_2065;
}
F->tail_2064 = F->x_2065;
F->p_2066 = (*(P796)rt_nil_check(F->p_2066)).next;
}
{ R797 *cell2068 = rt_alloc(sizeof(R797));
(*cell2068).s = NULL;
(*cell2068).next = NULL;
F->x_2065 = cell2068;
}
(*(P796)rt_nil_check(F->x_2065)).s = f_mk_3(&(*F->s_705));
if ((F->tail_2064 == NULL)) {
F->r_2063 = F->x_2065;
} else {
(*(P796)rt_nil_check(F->tail_2064)).next = F->x_2065;
}
F->result_ = F->r_2063;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_711(P792 e_707, P798 at_708, rt_int line_709, P798 *vt_710) {
  struct f_item_value_711fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_707 = e_707;
F->at_708 = at_708;
F->line_709 = line_709;
F->vt_710 = vt_710;
F->vt_710v = *F->vt_710;
g_cons_ctx_863 = (*(P798)rt_nil_check(F->at_708)).elemcons;
{
F->v_2069 = rt_str_copy(f_gexpr_637(F->e_707, (*(P798)rt_nil_check(F->at_708)).elem, &F->vt_710v));
f_check_type_221(F->vt_710v, (*(P798)rt_nil_check(F->at_708)).elem, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_223((*(P798)rt_nil_check(F->at_708)).elem), rt_str(" v_ = ", 6)), f_comp_value_685((*(P798)rt_nil_check(F->at_708)).elem, (*(P798)rt_nil_check(F->at_708)).elemcons, &F->v_2069)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_710) = F->vt_710v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_716(P792 k_712, P798 at_713, rt_int d_714, rstr *xv_715) {
  struct f_key_loop_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_712 = k_712;
F->at_713 = at_713;
F->d_714 = d_714;
F->xv_715 = xv_715;
F->it_2070 = NULL;
F->lo_2071 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->k_712)).a, f_idx_type_247(F->at_713, F->d_714), &F->it_2070));
f_check_type_221(F->it_2070, f_idx_type_247(F->at_713, F->d_714), (*(P792)rt_nil_check(F->k_712)).line);
if (((*(P792)rt_nil_check(F->k_712)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_715)), rt_str(" = ", 3)), F->lo_2071), rt_str(";", 1));
goto ret_;
}
{
F->hi_2072 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->k_712)).b, f_idx_type_247(F->at_713, F->d_714), &F->it_2070));
f_check_type_221(F->it_2070, f_idx_type_247(F->at_713, F->d_714), (*(P792)rt_nil_check(F->k_712)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_715)), rt_str(" = ", 3)), F->lo_2071), rt_str(", h", 3)), (*F->xv_715)), rt_str(" = ", 3)), F->hi_2072), rt_str("; ", 2)), (*F->xv_715)), rt_str(" <= h", 5)), (*F->xv_715)), rt_str("; ", 2)), (*F->xv_715)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_721(P798 at_717, rstr *tmp_718, P796 xs_719, rt_int n_720) {
  struct f_store_at_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_717 = at_717;
F->tmp_718 = tmp_718;
F->xs_719 = xs_719;
F->n_720 = n_720;
F->off_2073 = NULL;
F->x_2074 = NULL;
F->x_2074 = F->xs_719;
F->k_2075 = ((rt_int)0LL);
while ((F->x_2074 != NULL)) {
F->k_2075 = rt_add(F->k_2075, ((rt_int)1LL));
{
F->l_2076 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_718), rt_str(".", 1)), f_dim_lo_231(F->k_2075)));
F->h_2077 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_718), rt_str(".", 1)), f_dim_hi_233(F->k_2075)));
if ((F->off_2073 == NULL)) {
F->off_2073 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P785)rt_nil_check((*(P796)rt_nil_check(F->x_2074)).s))->all)), rt_str(", ", 2)), F->l_2076), rt_str(", ", 2)), F->h_2077), rt_str(") - ", 4)), F->l_2076), rt_str(")", 1)); b_; }));
} else {
F->off_2073 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P785)rt_nil_check(F->off_2073))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2076), rt_str(", ", 2)), F->h_2077), rt_str(") + rt_index(", 13)), (((P785)rt_nil_check((*(P796)rt_nil_check(F->x_2074)).s))->all)), rt_str(", ", 2)), F->l_2076), rt_str(", ", 2)), F->h_2077), rt_str(") - ", 4)), F->l_2076), rt_str(")", 1)); b_; }));
}
}
F->x_2074 = (*(P796)rt_nil_check(F->x_2074)).next;
}
if ((F->k_2075 != (*(P798)rt_nil_check(F->at_717)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P798)rt_nil_check(F->at_717)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P785)rt_nil_check(F->off_2073))->all)), rt_str("; ", 2)), (*F->tmp_718)), rt_str(".p[o_] = ", 9)), f_copy_code_355((*(P798)rt_nil_check(F->at_717)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_718)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_724(P802 y_722, P792 args_723) {
  struct f_fits_724fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_722 = y_722;
F->args_723 = args_723;
F->a_2078 = NULL;
F->a_2078 = F->args_723;
F->pm_2079 = NULL;
F->pm_2079 = (*(P802)rt_nil_check(F->y_722)).params;
F->t_2080 = NULL;
F->saved_2081 = NULL;
F->saved_2081 = g_code_842;
F->ok_2082 = 1;
F->lv_2083 = NULL;
F->lc_2084 = NULL;
g_trial_869 = rt_add(g_trial_869, ((rt_int)1LL));
g_code_842 = f_new_buffer_24();
{ rt_frame xf2086;
if (RT_TRY(xf2086)) {
while (((F->ok_2082 && (F->a_2078 != NULL)) && (F->pm_2079 != NULL))) {
if ((((*(P804)rt_nil_check(F->pm_2079)).mode == (((rt_int)2LL))) || ((*(P804)rt_nil_check(F->pm_2079)).mode == (((rt_int)3LL))))) {
f_lvalue_606(F->a_2078, &F->lv_2083, &F->t_2080, &F->lc_2084, &F->ro_2085);
} else {
F->v_2088 = rt_str_copy(f_gexpr_637(F->a_2078, (*(P804)rt_nil_check(F->pm_2079)).t, &F->t_2080));
}
if ((!(f_same_210(F->t_2080, (*(P804)rt_nil_check(F->pm_2079)).t) || (((*(P798)rt_nil_check(F->t_2080)).kind == (((rt_int)11LL))) && ((*(P798)rt_nil_check((*(P804)rt_nil_check(F->pm_2079)).t)).kind == (((rt_int)8LL))))))) {
F->ok_2082 = 0;
}
F->a_2078 = (*(P792)rt_nil_check(F->a_2078)).next;
F->pm_2079 = (*(P804)rt_nil_check(F->pm_2079)).next;
}
if (((F->a_2078 != NULL) || (F->pm_2079 != NULL))) {
F->ok_2082 = 0;
}
RT_POP(xf2086);
} else {
RT_POP(xf2086);
int x2087 = rt_xcur;
if (0 || x2087 == ex_compile_error_1) {
F->ok_2082 = 0;
} else {
rt_raise(x2087);
}
}
}
g_trial_869 = rt_sub(g_trial_869, ((rt_int)1LL));
g_code_842 = F->saved_2081;
F->result_ = F->ok_2082;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_resolve_overload_730(rstr *name_725, P792 tt_726, P792 args_727, int is_stmt_728, rt_int line_729) {
  struct f_resolve_overload_730fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_725 = name_725;
F->tt_726 = tt_726;
F->args_727 = args_727;
F->is_stmt_728 = is_stmt_728;
F->line_729 = line_729;
F->y_2089 = NULL;
F->first_2090 = NULL;
F->n_2091 = ((rt_int)0LL);
{ rt_int lo2093 = ((rt_int)1LL), hi2094 = ((rt_int)3LL);
for (rt_int it2095 = lo2093; it2095 <= hi2094; it2095++) {
F->pass_2092 = it2095;
F->y_2089 = f_overload_chain_736(&(*F->name_725), F->pass_2092);
while ((F->y_2089 != NULL)) {
if (((rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_2089)).name))->all), (*F->name_725)) && (((*(P802)rt_nil_check(F->y_2089)).kind == (((rt_int)3LL))) || ((*(P802)rt_nil_check(F->y_2089)).kind == (((rt_int)4LL))))) && ((F->pass_2092 != ((rt_int)1LL)) || ((*(P802)rt_nil_check(F->y_2089)).depth >= g_gdepth_861)))) {
F->n_2091 = rt_add(F->n_2091, ((rt_int)1LL));
if ((F->first_2090 == NULL)) {
F->first_2090 = F->y_2089;
}
if ((((((*(P802)rt_nil_check(F->y_2089)).kind == (((rt_int)4LL))) == F->is_stmt_728) && f_tt_fits_733(F->y_2089, F->tt_726)) && f_fits_724(F->y_2089, F->args_727))) {
F->result_ = F->y_2089;
goto ret_;
}
}
F->y_2089 = (*(P802)rt_nil_check(F->y_2089)).chain;
}
}
}
if (f_is_builtin_738(&(*F->name_725))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_2091 > ((rt_int)1LL))) {
f_fail_23(F->line_729, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_725)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2090;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_733(P802 y_731, P792 tt_732) {
  struct f_tt_fits_733fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_731 = y_731;
F->tt_732 = tt_732;
F->f_2096 = NULL;
F->a_2097 = NULL;
F->saved_2098 = NULL;
F->saved_2098 = g_code_842;
F->ok_2099 = 1;
if ((((*(P802)rt_nil_check(F->y_731)).decl == NULL) || ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_731)).decl)).e == NULL))) {
F->result_ = (F->tt_732 == NULL);
goto ret_;
} else if ((F->tt_732 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2096 = (*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_731)).decl)).e;
F->a_2097 = F->tt_732;
g_trial_869 = rt_add(g_trial_869, ((rt_int)1LL));
g_code_842 = f_new_buffer_24();
{ rt_frame xf2100;
if (RT_TRY(xf2100)) {
while (((F->ok_2099 && (F->f_2096 != NULL)) && (F->a_2097 != NULL))) {
F->fc_2102 = NULL;
F->ac_2103 = NULL;
F->fst_2104 = NULL;
F->fst_2104 = f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->f_2096)).line);
F->ft_2105 = NULL;
F->at_2106 = NULL;
(*(P792)rt_nil_check(F->fst_2104)).name = (*(P792)rt_nil_check(F->f_2096)).name;
F->ft_2105 = f_resolve_subtype_254(F->fst_2104, &F->fc_2102);
if (((*(P792)rt_nil_check(F->a_2097)).kind >= (((rt_int)70LL)))) {
F->at_2106 = f_resolve_subtype_254(F->a_2097, &F->ac_2103);
} else {
F->ast_2107 = NULL;
F->ast_2107 = f_nn_61((((rt_int)80LL)), (*(P792)rt_nil_check(F->a_2097)).line);
(*(P792)rt_nil_check(F->ast_2107)).name = (*(P792)rt_nil_check(F->a_2097)).name;
F->at_2106 = f_resolve_subtype_254(F->ast_2107, &F->ac_2103);
}
F->ok_2099 = f_same_210(F->ft_2105, F->at_2106);
F->f_2096 = (*(P792)rt_nil_check(F->f_2096)).next;
F->a_2097 = (*(P792)rt_nil_check(F->a_2097)).next;
}
F->ok_2099 = ((F->ok_2099 && (F->f_2096 == NULL)) && (F->a_2097 == NULL));
RT_POP(xf2100);
} else {
RT_POP(xf2100);
int x2101 = rt_xcur;
if (0 || x2101 == ex_compile_error_1) {
F->ok_2099 = 0;
} else {
rt_raise(x2101);
}
}
}
g_trial_869 = rt_sub(g_trial_869, ((rt_int)1LL));
g_code_842 = F->saved_2098;
F->result_ = F->ok_2099;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_overload_chain_736(rstr *name_734, rt_int pass_735) {
  struct f_overload_chain_736fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_734 = name_734;
F->pass_735 = pass_735;
if (((g_genv_829 == NULL) && (F->pass_735 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_735 == ((rt_int)2LL))) {
F->result_ = ({ A808 b_ = (((P806)rt_nil_check(g_genv_829))->all); b_.p[(rt_index(f_hash_152(&(*F->name_734)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A808 b_ = (((P806)rt_nil_check(g_table_828))->all); b_.p[(rt_index(f_hash_152(&(*F->name_734)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_738(rstr *n_737) {
  struct f_is_builtin_738fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_737 = n_737;
F->result_ = (((((((((((((((rt_str_eq((*F->n_737), rt_str("ABS", 3)) || rt_str_eq((*F->n_737), rt_str("POS", 3))) || rt_str_eq((*F->n_737), rt_str("SUCC", 4))) || rt_str_eq((*F->n_737), rt_str("PRED", 4))) || rt_str_eq((*F->n_737), rt_str("SQRT", 4))) || rt_str_eq((*F->n_737), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_737), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_737), rt_str("WRITE", 5))) || rt_str_eq((*F->n_737), rt_str("READLN", 6))) || rt_str_eq((*F->n_737), rt_str("SEND", 4))) || rt_str_eq((*F->n_737), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_737), rt_str("DELAY", 5))) || rt_str_eq((*F->n_737), rt_str("TIME", 4))) || rt_str_eq((*F->n_737), rt_str("CNVT", 4))) || rt_str_eq((*F->n_737), rt_str("FORMAT", 6))) || f_is_low_level_740(&(*F->n_737)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_740(rstr *n_739) {
  struct f_is_low_level_740fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_739 = n_739;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_739), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_739), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_739), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_739), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_739), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_739), rt_str("LOCK", 4))) || rt_str_eq((*F->n_739), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_739), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_739), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_739), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_739), rt_str("WAITING", 7))) || rt_str_eq((*F->n_739), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_739), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_739), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_739), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_739), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_739), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_739), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_739), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_744(P792 tt_741, rt_int line_742, P798 *t_743) {
  struct f_me_high_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_741 = tt_741;
F->line_742 = line_742;
F->t_743 = t_743;
F->t_743v = *F->t_743;
F->c_2108 = NULL;
if ((F->tt_741 == NULL)) {
f_fail_23(F->line_742, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_743v = f_resolve_subtype_254(F->tt_741, &F->c_2108);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_223(F->t_743v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_746(F->t_743v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_743) = F->t_743v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_746(P798 t_745) {
  struct f_type_tag_746fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_745 = t_745;
if (((*(P798)rt_nil_check(F->t_745)).name != NULL)) {
F->result_ = (((P785)rt_nil_check((*(P798)rt_nil_check(F->t_745)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_749(P792 e_747, rstr *name_748) {
  struct f_lock_ref_749fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_747 = e_747;
F->name_748 = name_748;
F->lv_2109 = NULL;
F->t_2110 = NULL;
F->c_2111 = NULL;
f_lvalue_606(F->e_747, &F->lv_2109, &F->t_2110, &F->c_2111, &F->ro_2112);
if (((*(P798)rt_nil_check(F->t_2110)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P792)rt_nil_check(F->e_747)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_748), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P785)rt_nil_check(F->lv_2109))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P802 f_user_op_752(rstr *op_750, P792 args_751) {
  struct f_user_op_752fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_750 = op_750;
F->args_751 = args_751;
F->y_2113 = NULL;
{ rt_int lo2115 = ((rt_int)1LL), hi2116 = ((rt_int)3LL);
for (rt_int it2117 = lo2115; it2117 <= hi2116; it2117++) {
F->pass_2114 = it2117;
F->y_2113 = f_overload_chain_736(&(*F->op_750), F->pass_2114);
while ((F->y_2113 != NULL)) {
if ((((rt_str_eq((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_2113)).name))->all), (*F->op_750)) && ((*(P802)rt_nil_check(F->y_2113)).kind == (((rt_int)3LL)))) && ((F->pass_2114 != ((rt_int)1LL)) || ((*(P802)rt_nil_check(F->y_2113)).depth >= g_gdepth_861))) && f_fits_724(F->y_2113, F->args_751))) {
F->result_ = F->y_2113;
goto ret_;
}
F->y_2113 = (*(P802)rt_nil_check(F->y_2113)).chain;
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

static rstr f_gcall_756(P792 e_753, int is_stmt_754, P798 *t_755) {
  struct f_gcall_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_753 = e_753;
F->is_stmt_754 = is_stmt_754;
F->t_755 = t_755;
F->t_755v = *F->t_755;
F->fn_2118 = NULL;
F->fn_2118 = (*(P792)rt_nil_check(F->e_753)).a;
F->tt_2119 = NULL;
F->y_2120 = NULL;
F->args_2121 = NULL;
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2122 = NULL;
F->a_2122 = (*(P792)rt_nil_check(F->e_753)).b;
F->pm_2123 = NULL;
F->lt_2124 = NULL;
F->vt_2125 = NULL;
F->lv_2126 = NULL;
F->lc_2127 = NULL;
if (((*(P792)rt_nil_check(F->fn_2118)).kind == (((rt_int)12LL)))) {
F->tt_2119 = (*(P792)rt_nil_check(F->fn_2118)).b;
F->fn_2118 = (*(P792)rt_nil_check(F->fn_2118)).a;
}
F->y_2120 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all));
if ((F->y_2120 == NULL)) {
F->result_ = f_builtin_781(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, (*(P792)rt_nil_check(F->e_753)).line, F->is_stmt_754, &F->t_755v);
goto ret_;
}
if (((((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)3LL))) && ((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)4LL)))) && ((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)10LL))))) {
F->alt_2129 = NULL;
F->alt_2129 = f_resolve_overload_730(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, F->is_stmt_754, (*(P792)rt_nil_check(F->e_753)).line);
if ((F->alt_2129 != NULL)) {
F->y_2120 = F->alt_2129;
} else if (f_is_builtin_738(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all))) {
F->result_ = f_builtin_781(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, (*(P792)rt_nil_check(F->e_753)).line, F->is_stmt_754, &F->t_755v);
goto ret_;
}
}
if (((*(P802)rt_nil_check(F->y_2120)).kind == (((rt_int)10LL)))) {
F->y_2120 = f_instantiate_582(F->y_2120, F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, (*(P792)rt_nil_check(F->e_753)).line);
} else if ((((*(P802)rt_nil_check(F->y_2120)).kind == (((rt_int)3LL))) || ((*(P802)rt_nil_check(F->y_2120)).kind == (((rt_int)4LL))))) {
F->y_2120 = f_resolve_overload_730(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, F->is_stmt_754, (*(P792)rt_nil_check(F->e_753)).line);
if ((F->y_2120 == NULL)) {
F->result_ = f_builtin_781(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), F->tt_2119, (*(P792)rt_nil_check(F->e_753)).b, (*(P792)rt_nil_check(F->e_753)).line, F->is_stmt_754, &F->t_755v);
goto ret_;
}
}
if ((((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)3LL))) && ((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_753)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_770(F->y_2120, (*(P792)rt_nil_check(F->e_753)).line);
if ((F->is_stmt_754 && ((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_753)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_754) && ((*(P802)rt_nil_check(F->y_2120)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P792)rt_nil_check(F->e_753)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2123 = (*(P802)rt_nil_check(F->y_2120)).params;
if (((*(P802)rt_nil_check(F->y_2120)).level > ((rt_int)0LL))) {
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2131 = ((rt_int)1LL), hi2132 = rt_sub(g_cur_level_845, (*(P802)rt_nil_check(F->y_2120)).level);
for (rt_int it2133 = lo2131; it2133 <= hi2132; it2133++) {
F->i_2130 = it2133;
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2122 != NULL) && (F->pm_2123 != NULL))) {
if ((((rt_int)(((((P785)rt_nil_check(F->args_2121))->all)).len)) > ((rt_int)0LL))) {
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str(", ", 2)); b_; }));
}
if ((((*(P804)rt_nil_check(F->pm_2123)).mode == (((rt_int)2LL))) || ((*(P804)rt_nil_check(F->pm_2123)).mode == (((rt_int)3LL))))) {
f_lvalue_606(F->a_2122, &F->lv_2126, &F->lt_2124, &F->lc_2127, &F->ro_2128);
if (F->ro_2128) {
f_fail_23((*(P792)rt_nil_check(F->e_753)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check((*(P804)rt_nil_check(F->pm_2123)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_221(F->lt_2124, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P792)rt_nil_check(F->e_753)).line);
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str("&", 1)), (((P785)rt_nil_check(F->lv_2126))->all)), f_actual_bounds_774((*(P804)rt_nil_check(F->pm_2123)).t, F->lt_2124, F->lc_2127)); b_; }));
} else if ((((*(P804)rt_nil_check(F->pm_2123)).mode == (((rt_int)4LL))) && f_is_lvalue_600(F->a_2122))) {
f_lvalue_606(F->a_2122, &F->lv_2126, &F->lt_2124, &F->lc_2127, &F->ro_2128);
f_check_type_221(F->lt_2124, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P792)rt_nil_check(F->e_753)).line);
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str("&", 1)), (((P785)rt_nil_check(F->lv_2126))->all)), f_actual_bounds_774((*(P804)rt_nil_check(F->pm_2123)).t, F->lt_2124, F->lc_2127)); b_; }));
} else if (((*(P804)rt_nil_check(F->pm_2123)).mode == (((rt_int)4LL)))) {
F->v_2134 = rt_str_copy(f_gexpr_in_645(F->a_2122, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P804)rt_nil_check(F->pm_2123)).c, &F->vt_2125));
F->ct_2135 = rt_str_copy(f_ctype_223((*(P804)rt_nil_check(F->pm_2123)).t));
f_check_type_221(F->vt_2125, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P792)rt_nil_check(F->e_753)).line);
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str("({ ", 3)), F->ct_2135), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2135), rt_str(")); *b_ = ", 10)), F->v_2134), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P804)rt_nil_check(F->pm_2123)).t)) {
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2136 = rt_str_copy(f_gexpr_in_645(F->a_2122, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P804)rt_nil_check(F->pm_2123)).c, &F->vt_2125));
f_check_type_221(F->vt_2125, (*(P804)rt_nil_check(F->pm_2123)).t, (*(P792)rt_nil_check(F->e_753)).line);
F->args_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P785)rt_nil_check(F->args_2121))->all), F->v_2136); b_; }));
}
F->a_2122 = (*(P792)rt_nil_check(F->a_2122)).next;
F->pm_2123 = (*(P804)rt_nil_check(F->pm_2123)).next;
}
if (((F->a_2122 != NULL) || (F->pm_2123 != NULL))) {
f_fail_23((*(P792)rt_nil_check(F->e_753)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P792)rt_nil_check(F->fn_2118)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P792)rt_nil_check(F->e_753)).b), f_list_len_67(F->a_2122)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_755v = (*(P802)rt_nil_check(F->y_2120)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_2120)).cname))->all), rt_str("(", 1)), (((P785)rt_nil_check(F->args_2121))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_755) = F->t_755v;
  RT_FPOP();
  return F->result_;
}

static P796 f_requires_758(P802 y_757) {
  struct f_requires_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_757 = y_757;
if ((*(P802)rt_nil_check(F->y_757)).reqdone) {
F->result_ = (*(P802)rt_nil_check(F->y_757)).reqs;
goto ret_;
}
(*(P802)rt_nil_check(F->y_757)).reqdone = 1;
if ((((*(P802)rt_nil_check(F->y_757)).decl != NULL) && ((((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_757)).decl)).kind == (((rt_int)45LL))) || ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_757)).decl)).kind == (((rt_int)46LL)))) || ((*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_757)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_2137 = NULL;
F->imp_2137 = (*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_757)).decl)).d;
while ((F->imp_2137 != NULL)) {
f_add_req_761(F->y_757, &(((P785)rt_nil_check((*(P792)rt_nil_check(F->imp_2137)).name))->all));
F->imp_2137 = (*(P792)rt_nil_check(F->imp_2137)).next;
}
f_require_calls_764(F->y_757, (*(P792)rt_nil_check((*(P802)rt_nil_check(F->y_757)).decl)).c);
}
F->result_ = (*(P802)rt_nil_check(F->y_757)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_761(P802 y_759, rstr *name_760) {
  struct f_add_req_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_759 = y_759;
F->name_760 = name_760;
F->l_2138 = NULL;
if ((!f_seen_name_366((*(P802)rt_nil_check(F->y_759)).reqs, &(*F->name_760)))) {
{ R797 *cell2139 = rt_alloc(sizeof(R797));
(*cell2139).s = NULL;
(*cell2139).next = NULL;
F->l_2138 = cell2139;
}
(*(P796)rt_nil_check(F->l_2138)).s = f_mk_3(&(*F->name_760));
(*(P796)rt_nil_check(F->l_2138)).next = (*(P802)rt_nil_check(F->y_759)).reqs;
(*(P802)rt_nil_check(F->y_759)).reqs = F->l_2138;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_764(P802 y_762, P792 e_763) {
  struct f_require_calls_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_762 = y_762;
F->e_763 = e_763;
F->x_2140 = NULL;
F->x_2140 = F->e_763;
while ((F->x_2140 != NULL)) {
if (((((((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)45LL))) || ((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)46LL)))) || ((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)50LL)))) || ((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)47LL)))) || ((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)51LL))))) {
F->x_2140 = (*(P792)rt_nil_check(F->x_2140)).next;
} else {
F->callee_2141 = NULL;
if ((((((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)10LL))) || ((*(P792)rt_nil_check(F->x_2140)).kind == (((rt_int)21LL)))) && ((*(P792)rt_nil_check(F->x_2140)).a != NULL)) && ((*(P792)rt_nil_check((*(P792)rt_nil_check(F->x_2140)).a)).kind == (((rt_int)7LL))))) {
F->callee_2141 = (*(P792)rt_nil_check(F->x_2140)).a;
}
if ((F->callee_2141 != NULL)) {
F->z_2142 = NULL;
F->z_2142 = f_lookup_154(&(((P785)rt_nil_check((*(P792)rt_nil_check(F->callee_2141)).name))->all));
if ((((F->z_2142 != NULL) && (F->z_2142 != F->y_762)) && (((*(P802)rt_nil_check(F->z_2142)).kind == (((rt_int)4LL))) || ((*(P802)rt_nil_check(F->z_2142)).kind == (((rt_int)3LL)))))) {
F->l_2143 = NULL;
F->l_2143 = f_requires_758(F->z_2142);
while ((F->l_2143 != NULL)) {
f_add_req_761(F->y_762, &(((P785)rt_nil_check((*(P796)rt_nil_check(F->l_2143)).s))->all));
F->l_2143 = (*(P796)rt_nil_check(F->l_2143)).next;
}
}
}
if (((*(P792)rt_nil_check(F->x_2140)).a != NULL)) {
f_require_calls_764(F->y_762, (*(P792)rt_nil_check(F->x_2140)).a);
}
if (((*(P792)rt_nil_check(F->x_2140)).b != NULL)) {
f_require_calls_764(F->y_762, (*(P792)rt_nil_check(F->x_2140)).b);
}
if (((*(P792)rt_nil_check(F->x_2140)).c != NULL)) {
f_require_calls_764(F->y_762, (*(P792)rt_nil_check(F->x_2140)).c);
}
F->x_2140 = (*(P792)rt_nil_check(F->x_2140)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_767(P792 elems_765, rstr *name_766) {
  struct f_declared_in_767fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_765 = elems_765;
F->name_766 = name_766;
F->e_2144 = NULL;
F->e_2144 = F->elems_765;
while ((F->e_2144 != NULL)) {
if (((((*(P792)rt_nil_check(F->e_2144)).kind == (((rt_int)40LL))) || ((*(P792)rt_nil_check(F->e_2144)).kind == (((rt_int)41LL)))) && rt_str_eq((((P785)rt_nil_check((*(P792)rt_nil_check(F->e_2144)).name))->all), (*F->name_766)))) {
F->result_ = 1;
goto ret_;
}
F->e_2144 = (*(P792)rt_nil_check(F->e_2144)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_770(P802 y_768, rt_int line_769) {
  struct f_check_requires_770fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_768 = y_768;
F->line_769 = line_769;
F->l_2145 = NULL;
F->l_2145 = f_requires_758(F->y_768);
if ((((*(P802)rt_nil_check(F->y_768)).home == NULL) || ((*(P802)rt_nil_check(F->y_768)).level != g_cur_level_845))) {
goto ret_;
}
while ((F->l_2145 != NULL)) {
F->z_2146 = NULL;
F->z_2146 = f_lookup_154(&(((P785)rt_nil_check((*(P796)rt_nil_check(F->l_2145)).s))->all));
if ((f_declared_in_767((*(P802)rt_nil_check(F->y_768)).home, &(((P785)rt_nil_check((*(P796)rt_nil_check(F->l_2145)).s))->all)) && ((F->z_2146 == NULL) || ((*(P802)rt_nil_check(F->z_2146)).depth < (*(P802)rt_nil_check(F->y_768)).depth)))) {
f_fail_23(F->line_769, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check((*(P802)rt_nil_check(F->y_768)).name))->all), rt_str(" requires ", 10)), (((P785)rt_nil_check((*(P796)rt_nil_check(F->l_2145)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2145 = (*(P796)rt_nil_check(F->l_2145)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_774(P798 ft_771, P798 t_772, P794 c_773) {
  struct f_actual_bounds_774fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_771 = ft_771;
F->t_772 = t_772;
F->c_773 = c_773;
if ((!f_scalar_kind_177(F->ft_771))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_772, F->c_773)), rt_str(", ", 2)), f_sub_hi_192(F->t_772, F->c_773));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_781(rstr *name_775, P792 tt_776, P792 args_777, rt_int line_778, int is_stmt_779, P798 *t_780) {
  struct f_builtin_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_775 = name_775;
F->tt_776 = tt_776;
F->args_777 = args_777;
F->line_778 = line_778;
F->is_stmt_779 = is_stmt_779;
F->t_780 = t_780;
F->t_780v = *F->t_780;
F->at_2147 = NULL;
F->n_2148 = f_list_len_67(F->args_777);
F->t_780v = g_ty_void_876;
if (((rt_str_eq((*F->name_775), rt_str("POS", 3)) || rt_str_eq((*F->name_775), rt_str("SUCC", 4))) || rt_str_eq((*F->name_775), rt_str("PRED", 4)))) {
F->a_2149 = rt_str_copy(f_gexpr_637(F->args_777, NULL, &F->at_2147));
if (rt_str_eq((*F->name_775), rt_str("POS", 3))) {
if (((*(P798)rt_nil_check(f_base_of_212(F->at_2147))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2149), rt_str(") + 1)", 6));
goto ret_;
}
F->t_780v = F->at_2147;
if (((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_775), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2149), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2149), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_775), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2149), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check(f_base_of_212(F->at_2147))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2149), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P798)rt_nil_check(f_base_of_212(F->at_2147))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_775), rt_str("SQRT", 4)) || rt_str_eq((*F->name_775), rt_str("SIN", 3))) || rt_str_eq((*F->name_775), rt_str("COS", 3))) || rt_str_eq((*F->name_775), rt_str("EXP", 3))) || rt_str_eq((*F->name_775), rt_str("LN", 2))) || rt_str_eq((*F->name_775), rt_str("FLOOR", 5)))) {
F->a_2150 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_float_873, &F->at_2147));
F->t_780v = g_ty_float_873;
if (rt_str_eq((*F->name_775), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2150), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_775)), rt_str("(", 1)), F->a_2150), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("IFLOAT", 6))) {
F->a_2151 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, g_ty_int_871, &F->at_2147));
F->t_780v = g_ty_float_873;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2151), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("IFIX", 4))) {
F->a_2152 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_float_873, &F->at_2147));
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2152), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("FORMAT", 6))) {
F->a_2153 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_float_873, &F->at_2147));
F->n1_2154 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, g_ty_int_871, &F->at_2147));
F->m1_2155 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_777)).next)).next, g_ty_int_871, &F->at_2147));
F->t_780v = g_ty_string_875;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2153), rt_str(", ", 2)), F->n1_2154), rt_str(", ", 2)), F->m1_2155), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("ABS", 3))) {
F->a_2156 = rt_str_copy(f_gexpr_637(F->args_777, NULL, &F->at_2147));
F->t_780v = F->at_2147;
if (((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2156), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2156), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("CNVT", 4))) {
if ((F->tt_776 == NULL)) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2157 = rt_str_copy(f_gexpr_637(F->args_777, NULL, &F->at_2147));
if ((((*(P792)rt_nil_check(F->tt_776)).kind == (((rt_int)73LL))) && ((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)1LL))))) {
F->t_780v = g_ty_string_875;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2157), rt_str(")", 1));
goto ret_;
} else if ((((*(P792)rt_nil_check(F->tt_776)).kind == (((rt_int)73LL))) && ((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)3LL))))) {
F->t_780v = g_ty_string_875;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2157), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P792)rt_nil_check(F->tt_776)).kind == (((rt_int)73LL))) && ((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)2LL))))) {
F->t_780v = g_ty_string_875;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2157), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P792)rt_nil_check(F->tt_776)).kind == (((rt_int)70LL))) && ((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)5LL))))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2157), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_775), rt_str("WRITELN", 7))) {
if ((F->n_2148 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2158 = NULL;
F->last_2158 = F->args_777;
while (((*(P792)rt_nil_check(F->last_2158)).next != NULL)) {
F->last_2158 = (*(P792)rt_nil_check(F->last_2158)).next;
}
{
F->a_2159 = rt_str_copy(f_gexpr_637(F->last_2158, g_ty_string_875, &F->at_2147));
f_check_type_221(F->at_2147, g_ty_string_875, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2159), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_775), rt_str("WRITE", 5))) {
F->a_2160 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, NULL, &F->at_2147));
if (((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2160), rt_str(")", 1));
goto ret_;
} else if (((*(P798)rt_nil_check(F->at_2147)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2160), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_775), rt_str("READLN", 6))) {
F->lv_2161 = NULL;
F->lc_2162 = NULL;
F->last_2164 = NULL;
F->last_2164 = F->args_777;
while (((*(P792)rt_nil_check(F->last_2164)).next != NULL)) {
F->last_2164 = (*(P792)rt_nil_check(F->last_2164)).next;
}
f_lvalue_606(F->last_2164, &F->lv_2161, &F->at_2147, &F->lc_2162, &F->ro_2163);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P785)rt_nil_check(F->lv_2161))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("SIZELN", 6))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("EOF", 3))) {
F->t_780v = g_ty_bool_872;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_775), rt_str("SYS_OUT", 7)))) {
F->t_780v = g_ty_file_877;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("OPEN", 4)) || rt_str_eq((*F->name_775), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("SEND", 4)) || rt_str_eq((*F->name_775), rt_str("RECEIVE", 7)))) {
F->lv_2165 = NULL;
F->dv_2166 = NULL;
F->lc_2167 = NULL;
F->mt_2169 = NULL;
F->dt_2170 = NULL;
f_lvalue_606(F->args_777, &F->lv_2165, &F->mt_2169, &F->lc_2167, &F->ro_2168);
if (((*(P798)rt_nil_check(F->mt_2169)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_775), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_775), rt_str("RECEIVE", 7))) {
f_lvalue_606((*(P792)rt_nil_check(F->args_777)).next, &F->dv_2166, &F->dt_2170, &F->lc_2167, &F->ro_2168);
f_check_type_221(F->dt_2170, (*(P798)rt_nil_check(F->mt_2169)).elem, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P785)rt_nil_check(F->lv_2165))->all)), rt_str(", &", 3)), (((P785)rt_nil_check(F->dv_2166))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2171 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, (*(P798)rt_nil_check(F->mt_2169)).elem, &F->at_2147));
f_check_type_221(F->at_2147, (*(P798)rt_nil_check(F->mt_2169)).elem, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223((*(P798)rt_nil_check(F->mt_2169)).elem)), rt_str(" m_ = ", 6)), F->v_2171), rt_str("; rt_send(", 10)), (((P785)rt_nil_check(F->lv_2165))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_775), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_775), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2172 = NULL;
F->lc_2173 = NULL;
F->mt_2175 = NULL;
f_lvalue_606(F->args_777, &F->lv_2172, &F->mt_2175, &F->lc_2173, &F->ro_2174);
if (((*(P798)rt_nil_check(F->mt_2175)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_775), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_775))), rt_str("(", 1)), (((P785)rt_nil_check(F->lv_2172))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_775), rt_str("COND_RECEIVE", 12)))) {
F->lv_2176 = NULL;
F->dv_2177 = NULL;
F->bv_2178 = NULL;
F->lc_2179 = NULL;
F->mt_2181 = NULL;
F->dt_2182 = NULL;
F->bt_2183 = NULL;
f_lvalue_606(F->args_777, &F->lv_2176, &F->mt_2181, &F->lc_2179, &F->ro_2180);
if (((*(P798)rt_nil_check(F->mt_2181)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_775), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_606((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_777)).next)).next, &F->bv_2178, &F->bt_2183, &F->lc_2179, &F->ro_2180);
f_check_type_221(F->bt_2183, g_ty_bool_872, F->line_778);
if (rt_str_eq((*F->name_775), rt_str("COND_RECEIVE", 12))) {
f_lvalue_606((*(P792)rt_nil_check(F->args_777)).next, &F->dv_2177, &F->dt_2182, &F->lc_2179, &F->ro_2180);
f_check_type_221(F->dt_2182, (*(P798)rt_nil_check(F->mt_2181)).elem, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->bv_2178))->all), rt_str(" = rt_cond_receive(", 19)), (((P785)rt_nil_check(F->lv_2176))->all)), rt_str(", &", 3)), (((P785)rt_nil_check(F->dv_2177))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2184 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, (*(P798)rt_nil_check(F->mt_2181)).elem, &F->at_2147));
f_check_type_221(F->at_2147, (*(P798)rt_nil_check(F->mt_2181)).elem, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_223((*(P798)rt_nil_check(F->mt_2181)).elem)), rt_str(" m_ = ", 6)), F->v_2184), rt_str("; ", 2)), (((P785)rt_nil_check(F->bv_2178))->all)), rt_str(" = rt_cond_send(", 16)), (((P785)rt_nil_check(F->lv_2176))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_775), rt_str("PRIORITY", 8))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("SET_PRIORITY", 12))) {
F->v_2185 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, g_ty_int_871, &F->at_2147));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_509(F->args_777)), rt_str(", ", 2)), F->v_2185), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("ACTIVE", 6))) {
F->t_780v = g_ty_bool_872;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("DELAY", 5))) {
F->v_2186 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_int_871, &F->at_2147));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2186), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("DELAY_UNTIL", 11))) {
F->v_2187 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_int_871, &F->at_2147));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2187), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("TIME", 4))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_775), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_775), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_775), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_775), rt_str("HOURS", 5)))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_775));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("HALT", 4))) {
F->a_2188 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_int_871, &F->at_2147));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2188), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("ME", 2)) && (F->tt_776 != NULL))) {
F->result_ = f_me_high_744(F->tt_776, F->line_778, &F->t_780v);
goto ret_;
} else if ((rt_str_eq((*F->name_775), rt_str("WAITING", 7)) || rt_str_eq((*F->name_775), rt_str("SUSPENDED", 9)))) {
F->t_780v = g_ty_bool_872;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_775))), rt_str("(", 1)), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_775), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_775), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_775), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_775), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_775), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_775), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_775))), rt_str("(", 1)), f_act_ref_509(F->args_777)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("TASK_START", 10))) {
if ((F->n_2148 != ((rt_int)2LL))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_509(F->args_777)), rt_str(", ", 2)), f_act_ref_509((*(P792)rt_nil_check(F->args_777)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_775), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_775), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_775), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_775), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_775), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_775), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_2148 != ((rt_int)0LL))) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_775), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_775))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_749(F->args_777, &(*F->name_775))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_749(F->args_777, &(*F->name_775))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("COND_LOCK", 9))) {
F->bv_2189 = NULL;
F->bc_2190 = NULL;
F->bt_2192 = NULL;
F->l_2193 = rt_str_copy(f_lock_ref_749(F->args_777, &(*F->name_775)));
f_lvalue_606((*(P792)rt_nil_check(F->args_777)).next, &F->bv_2189, &F->bt_2192, &F->bc_2190, &F->ro_2191);
f_check_type_221(F->bt_2192, g_ty_bool_872, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P785)rt_nil_check(F->bv_2189))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2193), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("EXCESS_LOCKS", 12))) {
F->t_780v = g_ty_int_871;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_749(F->args_777, &(*F->name_775))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("OWNER", 5))) {
F->t_780v = g_ty_act_881;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_749(F->args_777, &(*F->name_775))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("FREE", 4))) {
F->pv_2194 = NULL;
F->pc_2195 = NULL;
F->pt_2197 = NULL;
f_lvalue_606(F->args_777, &F->pv_2194, &F->pt_2197, &F->pc_2195, &F->ro_2196);
if ((((*(P798)rt_nil_check(F->pt_2197)).kind != (((rt_int)8LL))) || F->ro_2196)) {
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_853 = 1;
f_finish_ptr_400(F->pt_2197);
if (f_suppressed_431(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_311((*(P798)rt_nil_check(F->pt_2197)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str(") { ", 4)), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_595(F->pt_2197, &(((P785)rt_nil_check(F->pv_2194))->all)); b_; }), (*(P798)rt_nil_check(F->pt_2197)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_311((*(P798)rt_nil_check(F->pt_2197)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str("); if (", 7)), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str(") { ", 4)), f_fin_code_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_595(F->pt_2197, &(((P785)rt_nil_check(F->pv_2194))->all)); b_; }), (*(P798)rt_nil_check(F->pt_2197)).target)), rt_str(" } rt_free((void **)&", 21)), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P785)rt_nil_check(F->pv_2194))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_775), rt_str("LOW_IO", 6))) {
F->dev_2198 = rt_str_copy(f_gexpr_637(F->args_777, g_ty_int_871, &F->at_2147));
F->cmd_2199 = rt_str_copy(f_gexpr_637((*(P792)rt_nil_check(F->args_777)).next, g_ty_int_871, &F->at_2147));
if ((F->n_2148 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2198), rt_str(", ", 2)), F->cmd_2199), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2200 = NULL;
F->dc_2201 = NULL;
F->dt_2203 = NULL;
f_lvalue_606((*(P792)rt_nil_check((*(P792)rt_nil_check(F->args_777)).next)).next, &F->dv_2200, &F->dt_2203, &F->dc_2201, &F->ro_2202);
f_check_type_221(F->dt_2203, g_ty_int_871, F->line_778);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2198), rt_str(", ", 2)), F->cmd_2199), rt_str(", &", 3)), (((P785)rt_nil_check(F->dv_2200))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_778, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_775), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_780) = F->t_780v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_783(P792 units_782) {
  struct f_translate_783fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_782 = units_782;
F->u_2204 = NULL;
F->u_2204 = F->units_782;
while ((F->u_2204 != NULL)) {
if (((*(P792)rt_nil_check(F->u_2204)).next == NULL)) {
{ R820 *cell2205 = rt_alloc(sizeof(R820));
(*cell2205).d = NULL;
(*cell2205).next = NULL;
g_caps_847 = cell2205;
}
(*(P819)rt_nil_check(g_caps_847)).d = F->u_2204;
f_declare_labels_464((*(P792)rt_nil_check(F->u_2204)).c);
f_declare_body_371((*(P792)rt_nil_check(F->u_2204)).c);
f_capsule_body_471((*(P792)rt_nil_check(F->u_2204)).c);
f_await_tasks_460((*(P792)rt_nil_check(F->u_2204)).c);
{
F->l_2206 = NULL;
F->l_2206 = F->units_782;
while ((F->l_2206 != F->u_2204)) {
{
F->w_2207 = rt_str_copy(f_waits_of_456(F->l_2206));
if ((((rt_int)((F->w_2207).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2207);
}
}
F->l_2206 = (*(P792)rt_nil_check(F->l_2206)).next;
}
}
f_close_fins_447(NULL);
if (g_uses_findyn_855) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_381(F->u_2204);
}
F->u_2204 = (*(P792)rt_nil_check(F->u_2204)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_784(void) {
  struct f_print_program_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_367();
if (g_uses_free_853) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_835);
f_print_buffer_31(g_out_frames_851);
f_print_buffer_31(g_out_helpers_836);
f_print_buffer_31(g_out_protos_837);
f_print_buffer_31(g_out_globals_838);
f_print_buffer_31(g_out_funcs_839);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_852);
f_print_buffer_31(g_out_excs_841);
f_print_buffer_31(g_out_init_840);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R822(R822 *d, R822 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R822 cp_R822(R822 s) {
  R822 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R822(R822 a, R822 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R820(R820 *d, R820 s) {
  d->d = s.d;
  d->next = s.next;
}
static R820 cp_R820(R820 s) {
  R820 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R820(R820 a, R820 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R818(R818 *d, R818 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R818 cp_R818(R818 s) {
  R818 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R818(R818 a, R818 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R816(R816 *d, R816 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R816 cp_R816(R816 s) {
  R816 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R816(R816 a, R816 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R814(R814 *d, R814 s) {
  d->t = s.t;
  d->next = s.next;
}
static R814 cp_R814(R814 s) {
  R814 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R814(R814 a, R814 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R812(R812 *d, R812 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R812 cp_R812(R812 s) {
  R812 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R812(R812 a, R812 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R810(R810 *d, R810 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R810 cp_R810(R810 s) {
  R810 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R810(R810 a, R810 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A808(A808 *d, A808 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A808 cp_A808(A808 s) {
  A808 d = s; d.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A808(A808 a, A808 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R805(R805 *d, R805 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R805 cp_R805(R805 s) {
  R805 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R805(R805 a, R805 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R803(R803 *d, R803 s) {
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
static R803 cp_R803(R803 s) {
  R803 d = s;
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
static int eq_R803(R803 a, R803 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home);
}
static void as_R801(R801 *d, R801 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R801 cp_R801(R801 s) {
  R801 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R801(R801 a, R801 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R799(R799 *d, R799 s) {
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
static R799 cp_R799(R799 s) {
  R799 d = s;
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
static int eq_R799(R799 a, R799 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R797(R797 *d, R797 s) {
  d->s = s.s;
  d->next = s.next;
}
static R797 cp_R797(R797 s) {
  R797 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R797(R797 a, R797 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R795(R795 *d, R795 s) {
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
static R795 cp_R795(R795 s) {
  R795 d = s;
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
static int eq_R795(R795 a, R795 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R793(R793 *d, R793 s) {
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
static R793 cp_R793(R793 s) {
  R793 d = s;
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
static int eq_R793(R793 a, R793 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A791(A791 *d, A791 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A791 cp_A791(A791 s) {
  A791 d = s; d.p = rt_alloc(sizeof(P787) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A791(A791 a, A791 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R788(R788 *d, R788 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R788 cp_R788(R788 s) {
  R788 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R788(R788 a, R788 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_823);
  RT_ROOT(g_ntoks_824);
  RT_ROOT(g_tpos_825);
  RT_ROOT(g_src_line_826);
  RT_ROOT(g_pending_prag_827);
  RT_ROOT(g_table_828);
  RT_ROOT(g_genv_829);
  RT_ROOT(g_all_insts_830);
  RT_ROOT(g_depth_831);
  RT_ROOT(g_scope_stack_832);
  RT_ROOT(g_all_types_833);
  RT_ROOT(g_serial_834);
  RT_ROOT(g_out_types_835);
  RT_ROOT(g_out_helpers_836);
  RT_ROOT(g_out_protos_837);
  RT_ROOT(g_out_globals_838);
  RT_ROOT(g_out_funcs_839);
  RT_ROOT(g_out_init_840);
  RT_ROOT(g_out_excs_841);
  RT_ROOT(g_code_842);
  RT_ROOT(g_fields_buf_843);
  RT_ROOT(g_in_func_844);
  RT_ROOT(g_cur_level_845);
  RT_ROOT(g_fctx_846);
  RT_ROOT(g_caps_847);
  RT_ROOT(g_cap_waits_848);
  RT_ROOT(g_psub_849);
  RT_ROOT(g_st_field_850);
  RT_ROOT(g_out_frames_851);
  RT_ROOT(g_out_roots_852);
  RT_ROOT(g_uses_free_853);
  RT_ROOT(g_fins_854);
  RT_ROOT(g_uses_findyn_855);
  RT_ROOT(g_func_sym_856);
  RT_ROOT(g_func_rc_857);
  RT_ROOT(g_cap_ret_858);
  RT_ROOT(g_cap_rflag_859);
  RT_ROOT(g_ret_frames_860);
  RT_ROOT(g_gdepth_861);
  RT_ROOT(g_suppress_862);
  RT_ROOT(g_cons_ctx_863);
  RT_ROOT(g_exits_864);
  RT_ROOT(g_gotos_865);
  RT_ROOT(g_frames_866);
  RT_ROOT(g_handlers_867);
  RT_ROOT(g_cleanups_868);
  RT_ROOT(g_trial_869);
  RT_ROOT(g_mcopies_870);
  RT_ROOT(g_ty_int_871);
  RT_ROOT(g_ty_bool_872);
  RT_ROOT(g_ty_float_873);
  RT_ROOT(g_ty_ascii_874);
  RT_ROOT(g_ty_string_875);
  RT_ROOT(g_ty_void_876);
  RT_ROOT(g_ty_file_877);
  RT_ROOT(g_ty_nil_878);
  RT_ROOT(g_ty_lock_879);
  RT_ROOT(g_ty_latch_880);
  RT_ROOT(g_ty_act_881);
  RT_ROOT(g_file_mode_type_882);
  RT_ROOT(g_no_cons_883);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_823 = NULL;
g_ntoks_824 = ((rt_int)0LL);
g_tpos_825 = ((rt_int)1LL);
g_src_line_826 = ((rt_int)0LL);
g_pending_prag_827 = NULL;
g_table_828 = NULL;
g_genv_829 = NULL;
g_all_insts_830 = NULL;
g_depth_831 = ((rt_int)0LL);
g_scope_stack_832 = NULL;
g_all_types_833 = NULL;
g_serial_834 = ((rt_int)0LL);
g_out_types_835 = NULL;
g_out_helpers_836 = NULL;
g_out_protos_837 = NULL;
g_out_globals_838 = NULL;
g_out_funcs_839 = NULL;
g_out_init_840 = NULL;
g_out_excs_841 = NULL;
g_code_842 = NULL;
g_fields_buf_843 = NULL;
g_in_func_844 = 0;
g_cur_level_845 = ((rt_int)0LL);
g_fctx_846 = NULL;
g_caps_847 = NULL;
g_cap_waits_848 = NULL;
g_psub_849 = NULL;
g_st_field_850 = NULL;
g_out_frames_851 = NULL;
g_out_roots_852 = NULL;
g_uses_free_853 = 0;
g_fins_854 = NULL;
g_uses_findyn_855 = 0;
g_func_sym_856 = NULL;
g_func_rc_857 = NULL;
g_cap_ret_858 = NULL;
g_cap_rflag_859 = NULL;
g_ret_frames_860 = ((rt_int)0LL);
g_gdepth_861 = ((rt_int)0LL);
g_suppress_862 = NULL;
g_cons_ctx_863 = NULL;
g_exits_864 = NULL;
g_gotos_865 = NULL;
g_frames_866 = ((rt_int)0LL);
g_handlers_867 = NULL;
g_cleanups_868 = NULL;
g_trial_869 = ((rt_int)0LL);
g_mcopies_870 = NULL;
g_ty_int_871 = NULL;
g_ty_bool_872 = NULL;
g_ty_float_873 = NULL;
g_ty_ascii_874 = NULL;
g_ty_string_875 = NULL;
g_ty_void_876 = NULL;
g_ty_file_877 = NULL;
g_ty_nil_878 = NULL;
g_ty_lock_879 = NULL;
g_ty_latch_880 = NULL;
g_ty_act_881 = NULL;
g_file_mode_type_882 = NULL;
g_no_cons_883 = NULL;
{ P789 cell2208 = rt_alloc(sizeof *cell2208);
rt_int pv2209 = ((rt_int)1000000LL);
cell2208->p_n = pv2209;
cell2208->all.lo = ((rt_int)1LL); cell2208->all.hi = pv2209;
cell2208->all.lo2 = cell2208->all.hi2 = 1;
cell2208->all.p = rt_alloc(sizeof(P787) * (size_t)(RT_CNT(cell2208->all)) + 1);
for (rt_int i2210 = 0; i2210 < (RT_CNT(cell2208->all)); i2210++) {
cell2208->all.p[i2210] = NULL;
}
g_toks_823 = cell2208;
}
{ P806 cell2211 = rt_alloc(sizeof *cell2211);
rt_int pv2212 = (((rt_int)4093LL));
cell2211->p_n = pv2212;
cell2211->all.lo = ((rt_int)0LL); cell2211->all.hi = pv2212;
cell2211->all.lo2 = cell2211->all.hi2 = 1;
cell2211->all.p = rt_alloc(sizeof(P802) * (size_t)(RT_CNT(cell2211->all)) + 1);
for (rt_int i2213 = 0; i2213 < (RT_CNT(cell2211->all)); i2213++) {
cell2211->all.p[i2213] = NULL;
}
g_table_828 = cell2211;
}
g_out_types_835 = f_new_buffer_24();
g_out_helpers_836 = f_new_buffer_24();
g_out_protos_837 = f_new_buffer_24();
g_out_globals_838 = f_new_buffer_24();
g_out_funcs_839 = f_new_buffer_24();
g_out_init_840 = f_new_buffer_24();
g_out_excs_841 = f_new_buffer_24();
g_out_frames_851 = f_new_buffer_24();
g_out_roots_852 = f_new_buffer_24();
g_code_842 = g_out_init_840;
g_no_cons_883 = f_new_cons_175();
g_ty_int_871 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_872 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_873 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_875 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_876 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_877 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_878 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_879 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_880 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_881 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2214;
if (RT_TRY(xf2214)) {
f_init_ascii_248();
f_read_source_58();
f_translate_783(f_program_150());
f_print_program_784();
RT_POP(xf2214);
} else {
RT_POP(xf2214);
int x2215 = rt_xcur;
if (0 || x2215 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2215);
}
}
}
  rt_main_done();
  return 0;
}
