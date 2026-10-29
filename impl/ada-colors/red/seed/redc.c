#include "paleo.h"
#include <math.h>
typedef rstr *P585;
typedef struct R587 R587;
typedef struct R587 *P586;
struct R587 {  rt_int kind; rt_int line; rt_int ival; P585 s;  };
typedef struct A589 A589;
struct A589 { rt_int lo, hi, lo2, hi2; P586 *p; };
typedef A589 *P588;
typedef struct R591 R591;
typedef struct R591 *P590;
struct R591 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P585 name; P585 tag; P590 a; P590 b; P590 c; P590 d; P590 e; P590 next;  };
typedef struct R593 R593;
typedef struct R593 *P592;
struct R593 {  P585 lo; P585 hi; P585 lo2; P585 hi2; P585 slen; rt_int mlo; rt_int mhi; int hasm; P590 args; int dyn; rt_int lvl; P585 prec;  };
typedef struct R595 R595;
typedef struct R595 *P594;
typedef struct R597 R597;
typedef struct R597 *P596;
struct R597 {  P585 name; P594 t; P592 c; P590 st; P596 next;  };
typedef struct R599 R599;
typedef struct R599 *P598;
typedef struct R601 R601;
typedef struct R601 *P600;
struct R601 {  P585 name; rt_int mode; P594 t; P592 c; P585 cfield; P600 next;  };
typedef struct A603 A603;
struct A603 { rt_int lo, hi, lo2, hi2; P598 *p; };
typedef A603 *P602;
typedef struct R605 R605;
typedef struct R605 *P604;
struct R605 {  rt_int depth; P590 imps; int all_imp; P604 next;  };
typedef struct R607 R607;
typedef struct R607 *P606;
struct R607 {  rt_int kind; rt_int i; P585 s; P594 t;  };
struct R599 {  rt_int kind; P585 name; P594 t; P592 c; P585 access; P585 cname; int ro_flag; rt_int mvalue; int hasmv; P590 st; P590 decl; P600 params; P594 result; rt_int depth; rt_int level; int byref; P598 members; P598 mnext; P590 binds; P598 insts; P602 env; P598 chain; P598 stack; P598 owner; P604 gctx; P606 mv;  };
struct R595 {  rt_int kind; P585 name; P590 lits; P594 elem; P594 idx; P594 idx2; P592 elemcons; P590 elemst; P594 under; P590 tparams; P590 ocap; P596 fields; P594 target; P590 decl; P585 cname; int forward; int defined; int helpers; P598 initp; P598 finalp; P598 tpsyms; P598 gen; P598 gbinds; P594 next;  };
typedef struct R609 R609;
typedef struct R609 *P608;
struct R609 {  P585 s; P608 next;  };
typedef struct R611 R611;
typedef struct R611 *P610;
struct R611 {  P608 head; P608 tail;  };
typedef struct R613 R613;
typedef struct R613 *P612;
struct R613 {  P585 match; P585 label; rt_int depth; P612 next;  };
typedef struct R615 R615;
typedef struct R615 *P614;
struct R615 {  P590 d; P614 next;  };
typedef struct R617 R617;
typedef struct R617 *P616;
struct R617 {  P590 d; P585 w; P616 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P585 result_;
 P585 t_674;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_677;
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
 rstr r_678;
 rt_int i_679;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_683;
 rstr w_684;
 rt_int i_685;
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
 P610 result_;
 P610 b_689;
};
struct f_put_27fr { int dummy;
 P610 b_25;
 rstr *s_26;
 P608 l_691;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P610 b_30;
 P608 l_693;
};
struct f_splice_34fr { int dummy;
 P610 a_32;
 P610 b_33;
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
 P586 t_695;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_697;
 rt_int j_698;
 rt_int n_699;
 int c_700;
 rstr w_701;
 rt_int k_702;
 rstr w_706;
 rt_int k_707;
 rstr two_711;
};
struct f_read_source_45fr { int dummy;
 rstr line_712;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P590 result_;
 P590 x_713;
};
struct f_append_52fr { int dummy;
 P590 *head_49;
 P590 *tail_50;
 P590 x_51;
};
struct f_list_len_54fr { int dummy;
 P590 l_53;
 rt_int result_;
 rt_int n_715;
 P590 p_716;
};
struct f_cur_line_55fr { int dummy;
 rt_int result_;
};
struct f_at_kw_57fr { int dummy;
 rstr *w_56;
 int result_;
};
struct f_at_op_59fr { int dummy;
 rstr *w_58;
 int result_;
};
struct f_at_kind_61fr { int dummy;
 rt_int k_60;
 int result_;
};
struct f_kind_at_63fr { int dummy;
 rt_int k_62;
 rt_int result_;
};
struct f_text_at_65fr { int dummy;
 rt_int k_64;
 P585 result_;
};
struct f_perror_67fr { int dummy;
 rstr *msg_66;
};
struct f_accept_kw_69fr { int dummy;
 rstr *w_68;
 int result_;
};
struct f_accept_op_71fr { int dummy;
 rstr *w_70;
 int result_;
};
struct f_expect_kw_73fr { int dummy;
 rstr *w_72;
};
struct f_expect_op_75fr { int dummy;
 rstr *w_74;
};
struct f_expect_id_76fr { int dummy;
 P585 result_;
};
struct f_name_node_77fr { int dummy;
 P590 result_;
 P590 x_717;
};
struct f_id_list_78fr { int dummy;
 P590 result_;
 P590 head_718;
 P590 tail_719;
};
struct f_p_subtype_79fr { int dummy;
 P590 result_;
 rt_int line_720;
 P590 x_721;
 rstr w_722;
 P590 head_723;
 P590 tail_724;
 P590 head_725;
 P590 tail_726;
 int more_727;
 P590 names_728;
 P590 st_729;
 P590 cmp_730;
 P590 head_731;
 P590 tail_732;
 int more_733;
 P590 lit_734;
};
struct f_actual_params_80fr { int dummy;
 P590 result_;
 P590 head_735;
 P590 tail_736;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P590 result_;
 P590 head_737;
 P590 tail_738;
 int more_739;
};
struct f_binop_88fr { int dummy;
 P585 op_84;
 P590 l_85;
 P590 r_86;
 rt_int line_87;
 P590 result_;
 P590 x_740;
};
struct f_expr_89fr { int dummy;
 P590 result_;
 P590 l_741;
 P585 op_742;
 rt_int line_743;
};
struct f_expr_and_90fr { int dummy;
 P590 result_;
 P590 l_744;
 rt_int line_745;
};
struct f_expr_not_91fr { int dummy;
 P590 result_;
 P590 x_746;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P590 result_;
 P590 l_747;
 P585 op_748;
 rt_int line_749;
};
struct f_expr_add_95fr { int dummy;
 P590 result_;
 P590 l_750;
 P585 op_751;
 rt_int line_752;
};
struct f_expr_mul_96fr { int dummy;
 P590 result_;
 P590 l_753;
 P585 op_754;
 rt_int line_755;
};
struct f_expr_pow_97fr { int dummy;
 P590 result_;
 P590 l_756;
 rt_int line_757;
};
struct f_expr_prefix_98fr { int dummy;
 P590 result_;
 P590 x_758;
};
struct f_postfix_99fr { int dummy;
 P590 result_;
 P590 p_759;
 rt_int line_760;
 P590 x_761;
 P590 head_762;
 P590 tail_763;
 int more_764;
 P590 lo_765;
 P590 r_766;
 P590 x_767;
 P590 x_768;
 P590 x_769;
};
struct f_primary_100fr { int dummy;
 P590 result_;
 rt_int line_770;
 P590 x_771;
 rt_int k_772;
 rstr w_773;
 P590 head_774;
 P590 tail_775;
 int more_776;
};
struct f_constructor_item_101fr { int dummy;
 P590 result_;
 rt_int line_777;
 P590 it_778;
 P590 first_779;
 P590 keys_780;
 P590 ktail_781;
 P590 lab_782;
 rt_int save_783;
 P590 more_784;
 P590 tail2_785;
 int ok_786;
 int go_787;
 P590 l2_788;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P590 result_;
 P590 head_789;
 P590 tail_790;
};
struct f_body_element_104fr { int dummy;
 P590 result_;
 P590 x_791;
};
struct f_declaration_105fr { int dummy;
 P590 result_;
 rt_int line_792;
 P590 head_793;
 P590 tail_794;
 P590 names_795;
 P590 x_796;
};
struct f_object_decl_106fr { int dummy;
 P590 result_;
 rt_int line_797;
 int is_var_798;
 P590 names_799;
 P590 st_800;
 P590 init_801;
 P590 loc_802;
 rt_int loc_kind_803;
 P590 head_804;
 P590 tail_805;
 P590 x_806;
};
struct f_abbrev_decl_107fr { int dummy;
 P590 result_;
 P590 x_807;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_808;
};
struct f_type_decl_109fr { int dummy;
 P590 result_;
 rt_int line_809;
 P585 name_810;
 P590 params_811;
 P590 x_812;
 P590 tts_813;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P590 result_;
 P590 head_814;
 P590 tail_815;
 int more_816;
 rt_int mode_817;
 P590 names_818;
 P590 ntail_819;
 P590 st_820;
 P590 p_821;
};
struct f_imports_list_114fr { int dummy;
 P590 owner_113;
 int result_;
 P590 head_822;
 P590 tail_823;
 int more_824;
 int ro_825;
 P590 x_826;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P585 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P590 result_;
 rt_int line_827;
 P590 x_828;
 int is_abn_829;
 int is_func_830;
 int dummy_831;
};
struct f_capsule_decl_119fr { int dummy;
 P590 result_;
 P590 x_832;
 int dummy_833;
 P590 head_834;
 P590 tail_835;
 int more_836;
 P590 n_837;
};
struct f_formal_tt_120fr { int dummy;
 P590 result_;
 P590 head_838;
 P590 tail_839;
 int more_840;
};
struct f_generic_decl_121fr { int dummy;
 P590 result_;
 P590 x_841;
 P590 head_842;
 P590 tail_843;
 int more_844;
 P590 names_845;
 rt_int kind_846;
 P590 st_847;
 P590 p_848;
 P585 nm_849;
 P590 st_850;
};
struct f_task_decl_122fr { int dummy;
 P590 result_;
 P590 x_851;
 int dummy_852;
};
struct f_expose_decl_123fr { int dummy;
 P590 result_;
 P590 x_853;
 P590 head_854;
 P590 tail_855;
 int more_856;
 P590 n_857;
 P590 head_858;
 P590 tail_859;
 int more_860;
 P590 n_861;
 P590 tgt_862;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P590 result_;
 P590 labels_863;
 P590 ltail_864;
 P585 match_865;
 P590 s_866;
};
struct f_unlabeled_statement_127fr { int dummy;
 P590 result_;
 rt_int line_867;
 P590 x_868;
 P590 head_869;
 P590 tail_870;
 P590 invs_871;
 P590 itail_872;
 int more_873;
 P590 target_874;
};
struct f_arm_131fr { int dummy;
 P590 cond_128;
 P590 b_129;
 rt_int line_130;
 P590 result_;
 P590 x_875;
};
struct f_if_stmt_132fr { int dummy;
 P590 result_;
 P590 x_876;
 P590 head_877;
 P590 tail_878;
 P590 cond_879;
 int go_880;
};
struct f_case_stmt_133fr { int dummy;
 P590 result_;
 P590 x_881;
 P590 head_882;
 P590 tail_883;
 P590 labs_884;
 P590 ltail_885;
 int more_886;
 P590 l_887;
};
struct f_repeat_stmt_134fr { int dummy;
 P590 result_;
 P590 x_888;
};
struct f_guard_stmt_135fr { int dummy;
 P590 result_;
 P590 x_889;
 P590 head_890;
 P590 tail_891;
 P590 h_892;
};
struct f_program_136fr { int dummy;
 P590 result_;
 P590 head_893;
 P590 tail_894;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_895;
 rt_int i_896;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P598 result_;
 P598 y_900;
};
struct f_lookup_decl_142fr { int dummy;
 P590 d_141;
 P598 result_;
 P598 y_901;
};
struct f_define_145fr { int dummy;
 P598 y_143;
 rt_int line_144;
 rt_int h_902;
 P598 z_903;
};
struct f_overloadable_147fr { int dummy;
 P598 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P600 a_148;
 P600 b_149;
 int result_;
 P600 x_904;
 P600 y_905;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P585 name_154;
 P598 result_;
 P598 y_906;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P594 result_;
 P594 t_908;
};
struct f_new_cons_158fr { int dummy;
 P592 result_;
 P592 c_910;
};
struct f_scalar_kind_160fr { int dummy;
 P594 t_159;
 int result_;
};
struct f_bound_ctype_162fr { int dummy;
 P594 t_161;
 rstr result_;
};
struct f_cbound_165fr { int dummy;
 P592 c_163;
 rstr *b_164;
 rstr result_;
 P585 p_912;
 rt_int i_913;
};
struct f_clo_167fr { int dummy;
 P592 c_166;
 rstr result_;
};
struct f_chi_169fr { int dummy;
 P592 c_168;
 rstr result_;
};
struct f_sub_lo_172fr { int dummy;
 P594 t_170;
 P592 c_171;
 rstr result_;
};
struct f_sub_hi_175fr { int dummy;
 P594 t_173;
 P592 c_174;
 rstr result_;
};
struct f_raw_storage_178fr { int dummy;
 rstr *name_176;
 rstr *ct_177;
 rstr result_;
 rstr g_917;
 rstr f_918;
};
struct f_copy_cons_180fr { int dummy;
 P592 c_179;
 P592 result_;
 P592 r_919;
};
struct f_freeze_183fr { int dummy;
 P592 c_181;
 P594 t_182;
 P592 result_;
 P592 r_921;
 P585 saved_field_922;
 rstr ct_923;
 rstr la_924;
 rstr lf_925;
 rstr ha_926;
 rstr hf_927;
};
struct f_checked_187fr { int dummy;
 P594 t_184;
 P592 c_185;
 rstr *v_186;
 rstr result_;
};
struct f_same_lits_190fr { int dummy;
 P590 a_188;
 P590 b_189;
 int result_;
 P590 x_928;
 P590 y_929;
};
struct f_same_193fr { int dummy;
 P594 a_191;
 P594 b_192;
 int result_;
 P596 f_930;
 P596 g_931;
};
struct f_base_of_195fr { int dummy;
 P594 t_194;
 P594 result_;
};
struct f_base_cons_198fr { int dummy;
 P594 t_196;
 P592 c_197;
 P592 result_;
};
struct f_kind_name_200fr { int dummy;
 P594 t_199;
 rstr result_;
};
struct f_check_type_204fr { int dummy;
 P594 got_201;
 P594 want_202;
 rt_int line_203;
};
struct f_ctype_206fr { int dummy;
 P594 t_205;
 rstr result_;
};
struct f_field_decls_208fr { int dummy;
 P594 t_207;
 rstr result_;
 P596 f_934;
 P585 s_935;
};
struct f_declare_ctype_210fr { int dummy;
 P594 t_209;
 P594 u_936;
 P594 target_937;
 P590 p_938;
 P585 fs_939;
};
struct f_init_ascii_211fr { int dummy;
 P590 head_940;
 P590 tail_941;
 rt_int start_942;
 rt_int i_943;
 P590 lit_947;
};
struct f_lit_index_214fr { int dummy;
 P590 lits_212;
 rstr *name_213;
 rt_int result_;
 rt_int i_948;
 P590 l_949;
};
struct f_resolve_subtype_217fr { int dummy;
 P590 st_215;
 P592 *c_216;
 P592 c_216v;
 P594 result_;
 P594 t_950;
 int ok_951;
 P594 dummy_952;
 P592 ic_954;
 P592 ic2_955;
 P592 ec_956;
 P594 it_957;
 P594 et_958;
 P592 ec_959;
 P590 comp_960;
 P596 tail_961;
 P592 cc_962;
 P596 f_963;
 P590 gt_965;
 P592 ec_966;
 P598 y_967;
};
struct f_float_lit_219fr { int dummy;
 P590 e_218;
 int result_;
};
struct f_opened_221fr { int dummy;
 P594 t_220;
 int result_;
 P614 c_968;
};
struct f_replace_all_225fr { int dummy;
 rstr *s_222;
 rstr *pat_223;
 rstr *r_224;
 rstr result_;
 rt_int i_969;
};
struct f_subst_227fr { int dummy;
 rstr *s_226;
 rstr result_;
 P608 l_970;
 P585 r_971;
};
struct f_new_type_231fr { int dummy;
 P598 y_228;
 P590 st_229;
 P592 *c_230;
 P592 c_230v;
 P594 result_;
 P590 d_972;
 P590 p_973;
 P592 uc_974;
 P598 z_975;
 P592 zc_976;
};
struct f_init_storage_235fr { int dummy;
 rstr *lval_232;
 P594 t_233;
 P592 c_234;
};
struct f_init_call_238fr { int dummy;
 P598 y_236;
 rstr *lval_237;
 rstr result_;
 P585 link_977;
 rt_int i_978;
};
struct f_needs_fin_240fr { int dummy;
 P594 t_239;
 int result_;
 P596 f_982;
};
struct f_fin_code_243fr { int dummy;
 rstr *lval_241;
 P594 t_242;
 rstr result_;
 P585 r_983;
 rstr i_984;
 P596 f_985;
};
struct f_tparam_type_246fr { int dummy;
 P594 t_244;
 rstr *name_245;
 P594 result_;
 P598 z_986;
};
struct f_make_storage_250fr { int dummy;
 rstr *lval_247;
 P594 t_248;
 P592 c_249;
 P590 p_987;
 P590 a_988;
 P592 uc_989;
 P594 ut_990;
 P594 at_991;
 P594 pt_992;
 rstr v_993;
 P608 saved_994;
 P608 l1_995;
 P608 l2_996;
 rstr i_999;
 P596 f_1000;
};
struct f_manifest_253fr { int dummy;
 P590 e_251;
 int *ok_252;
 int ok_252v;
 rt_int result_;
 P606 v_1001;
};
struct f_mk_mval_256fr { int dummy;
 rt_int kind_254;
 rt_int i_255;
 P606 result_;
 P606 v_1002;
};
struct f_ipow_259fr { int dummy;
 rt_int a_257;
 rt_int b_258;
 rt_int result_;
 rt_int r_1004;
 rt_int i_1005;
};
struct f_meval_262fr { int dummy;
 P590 e_260;
 int *ok_261;
 int ok_261v;
 P606 result_;
 P606 a_1009;
 P606 b_1010;
 int ok2_1011;
 P585 op_1012;
 P598 y_1013;
 P606 r_1014;
};
struct f_bool_i_264fr { int dummy;
 int b_263;
 rt_int result_;
};
struct f_mstr_266fr { int dummy;
 P606 v_265;
 rstr result_;
};
struct f_ascii_char_268fr { int dummy;
 rt_int i_267;
 int result_;
 rstr printable_1015;
};
struct f_user_defined_270fr { int dummy;
 rstr *op_269;
 int result_;
 P598 y_1016;
};
struct f_mcopy_272fr { int dummy;
 P594 t_271;
 rstr result_;
 rstr ct_1017;
 rstr name_1018;
 P608 l_1019;
};
struct f_composite_274fr { int dummy;
 P594 t_273;
 int result_;
};
struct f_assign_code_279fr { int dummy;
 rstr *lval_275;
 P594 t_276;
 rstr *v_277;
 P592 c_278;
 rstr result_;
};
struct f_copy_code_282fr { int dummy;
 P594 t_280;
 rstr *v_281;
 rstr result_;
};
struct f_eq_code_286fr { int dummy;
 P594 t_283;
 rstr *a_284;
 rstr *b_285;
 rstr result_;
};
struct f_elem_assign_290fr { int dummy;
 rstr *lval_287;
 P594 t_288;
 rstr *v_289;
 rstr result_;
};
struct f_seen_name_293fr { int dummy;
 P608 l_291;
 rstr *s_292;
 int result_;
 P608 p_1021;
};
struct f_emit_helpers_294fr { int dummy;
 P594 order_1022;
 P594 t_1023;
 P608 done_1024;
 P608 l_1025;
 rstr c_1026;
};
struct f_helper_bodies_296fr { int dummy;
 P594 t_295;
 rstr c_1028;
 P610 b_1029;
 P594 e_1030;
 P590 p_1031;
 P585 pc_1032;
 P596 f_1033;
 P585 conds_1034;
 rstr fn_1035;
 rstr fn_1036;
};
struct f_declare_body_298fr { int dummy;
 P590 elems_297;
 P590 e_1037;
 P598 y_1038;
 P598 y_1039;
 P598 y_1040;
 P594 t_1041;
 P598 y_1042;
 P598 g_1043;
 P602 snap_1044;
 rt_int i_1048;
 P598 g_1052;
 P598 y_1053;
};
struct f_manifest_const_300fr { int dummy;
 P590 d_299;
 int ok_1054;
 P606 v_1055;
 P598 y_1056;
 P594 t_1057;
 P585 ctext_1058;
 P610 saved_1059;
};
struct f_exported_304fr { int dummy;
 P590 d_301;
 rstr *name_302;
 int *ro_303;
 int ro_303v;
 int result_;
 P590 p_1062;
};
struct f_copy_sym_306fr { int dummy;
 P598 y_305;
 P598 result_;
 P598 z_1063;
};
struct f_gen_capsule_308fr { int dummy;
 P590 d_307;
 P598 y_1065;
};
struct f_capsule_params_312fr { int dummy;
 P590 d_309;
 P590 args_310;
 rt_int line_311;
 P590 p_1066;
 P590 a_1067;
 P594 t_1068;
 P594 vt_1069;
 P592 c_1070;
 P585 lv_1071;
 P592 lc_1072;
 int ro_1073;
 P598 y_1074;
 rstr f_1075;
 rstr g_1076;
 P598 y_1077;
 rstr v_1078;
 rstr access_1079;
};
struct f_elaborate_capsule_317fr { int dummy;
 P590 d_313;
 P598 y_314;
 P590 args_315;
 P590 owner_316;
 P614 cr_1080;
 P604 ctx_1081;
 P598 m_1082;
 P590 p_1083;
 int ro_1084;
 P616 w_1087;
 P598 z_1089;
};
struct f_exports_op_320fr { int dummy;
 P590 d_318;
 rstr *op_319;
 int result_;
 P590 p_1090;
};
struct f_renamed_323fr { int dummy;
 P590 d_321;
 P598 z_322;
 P585 result_;
 P590 r_1091;
};
struct f_gen_expose_325fr { int dummy;
 P590 d_324;
 P598 y_1092;
 P598 m_1093;
 P590 p_1094;
 P590 r_1095;
 P598 inst_1096;
 int found_1097;
 P598 z_1098;
 int found_1099;
 P598 z_1100;
};
struct f_finish_ptr_327fr { int dummy;
 P594 t_326;
 P590 d_1101;
 P590 p_1102;
 P592 c_1103;
 rstr dummy_1104;
 P598 y_1105;
};
struct f_declare_subprogram_329fr { int dummy;
 P590 d_328;
};
struct f_build_subprogram_331fr { int dummy;
 P590 d_330;
 P598 result_;
 P598 y_1106;
 P590 p_1107;
 P600 tail_1108;
 P600 pm_1109;
 P592 rc_1111;
 P600 pm_1112;
 P610 saved_1113;
 P598 z_1114;
};
struct f_element_333fr { int dummy;
 P590 e_332;
 rt_int k_1115;
 P598 g_1116;
 rt_int i_1120;
 P594 t_1124;
 rstr c_1125;
};
struct f_storage_336fr { int dummy;
 rstr *name_334;
 P594 t_335;
 rstr result_;
 rstr g_1126;
 rstr f_1127;
};
struct f_bind_339fr { int dummy;
 P598 y_337;
 rstr *access_338;
};
struct f_var_decl_341fr { int dummy;
 P590 d_340;
 P592 c_1128;
 P594 t_1129;
 P598 y_1130;
 rstr access_1131;
 P594 it_1132;
 rstr n_1133;
 P594 vt_1134;
 rstr v_1135;
};
struct f_open_fin_343fr { int dummy;
 rstr *fc_342;
 rstr f_1136;
 P608 l_1137;
};
struct f_close_fins_345fr { int dummy;
 P608 saved_344;
};
struct f_const_decl_347fr { int dummy;
 P590 d_346;
 P592 c_1139;
 P594 t_1140;
 P594 vt_1141;
 P598 y_1142;
 int ok_1143;
 rstr v_1144;
 rstr access_1145;
};
struct f_subprogram_349fr { int dummy;
 P590 d_348;
};
struct f_gen_subprogram_352fr { int dummy;
 P590 d_350;
 P598 y_351;
 P610 saved_code_1146;
 P610 saved_fields_1147;
 int saved_in_1148;
 P598 saved_sym_1149;
 P612 saved_exits_1150;
 rt_int saved_frames_1151;
 P585 args_1152;
 P600 pm_1153;
 P608 saved_handlers_1154;
 P608 saved_cleanups_1155;
 P604 ctx_1156;
 P585 head_1157;
 P585 frame_1158;
 P585 parent_1159;
 P585 copy_back_1160;
 P585 pfin_1161;
 P608 saved_fins_1162;
 P592 saved_rc_1163;
 P585 saved_ret_1164;
 P585 saved_rflag_1165;
 P590 pn_1166;
 rstr ct_1168;
 rstr f_1169;
 P598 p_1170;
 P592 pc_1171;
 P592 ac_1172;
 P592 fc_1173;
 P594 ft_1174;
 rstr bt_1175;
 P592 rc_1176;
 P594 rt_1177;
};
struct f_waits_of_354fr { int dummy;
 P590 d_353;
 rstr result_;
 P616 w_1178;
};
struct f_task_waits_356fr { int dummy;
 P590 elems_355;
 rstr result_;
 P590 e_1179;
 P585 r_1180;
};
struct f_await_tasks_358fr { int dummy;
 P590 elems_357;
 rstr w_1181;
};
struct f_capsule_elements_360fr { int dummy;
 P590 elems_359;
 P590 e_1182;
};
struct f_has_return_362fr { int dummy;
 P590 e_361;
 int result_;
 P590 x_1183;
};
struct f_capsule_body_364fr { int dummy;
 P590 elems_363;
 P585 saved_ret_1184;
 P585 saved_flag_1185;
 rt_int saved_frames_1186;
 P590 e_1187;
 int stmt_1188;
};
struct f_body_elements_366fr { int dummy;
 P590 elems_365;
};
struct f_gen_body_368fr { int dummy;
 P590 elems_367;
 P608 saved_1189;
};
struct f_pop_frames_370fr { int dummy;
 rt_int upto_369;
 rt_int i_1190;
 P608 c_1191;
};
struct f_push_cleanup_372fr { int dummy;
 rstr *s_371;
 P608 c_1192;
};
struct f_pop_cleanup_373fr { int dummy;
};
struct f_gen_statement_375fr { int dummy;
 P590 s_374;
 P585 label_1194;
 P612 x_1195;
};
struct f_st_assign_377fr { int dummy;
 P590 s_376;
 P585 lv_1198;
 P594 t_1199;
 P594 vt_1200;
 P592 c_1201;
 int ro_1202;
 rstr lo_1203;
 rstr hi_1204;
 rstr v_1205;
 rstr v_1206;
};
struct f_st_call_379fr { int dummy;
 P590 s_378;
 P590 c_1207;
 P594 t_1208;
 P590 x_1209;
};
struct f_st_if_381fr { int dummy;
 P590 s_380;
 P590 a_1210;
 int first_1211;
 P594 t_1212;
 int taken_1213;
 int ok_1214;
 P606 mv_1215;
 rstr c_1216;
};
struct f_st_case_383fr { int dummy;
 P590 s_382;
 P594 st_1217;
 P594 vt_1218;
 int first_1219;
 P590 a_1220;
 rstr sel_1221;
 rstr tmp_1222;
 P590 lab_1223;
 P585 conds_1224;
 rstr v_1225;
 rstr lo_1226;
 rstr hi_1227;
};
struct f_st_repeat_385fr { int dummy;
 P590 s_384;
 P594 t_1228;
 P592 c_1229;
 rstr cond_1230;
 rstr access_1231;
 rstr lov_1232;
 rstr hiv_1233;
 rstr it_1234;
 P598 y_1235;
};
struct f_st_exit_387fr { int dummy;
 P590 s_386;
 P612 x_1236;
};
struct f_st_return_389fr { int dummy;
 P590 s_388;
 P594 vt_1237;
 rstr v_1238;
};
struct f_result_checked_393fr { int dummy;
 P594 t_390;
 P592 c_391;
 rstr *v_392;
 rstr result_;
};
struct f_exc_id_396fr { int dummy;
 rstr *name_394;
 rt_int line_395;
 rstr result_;
 P598 y_1239;
};
struct f_st_guard_398fr { int dummy;
 P590 s_397;
 P590 h_1240;
 int first_1241;
 P608 hv_1242;
 rstr f_1243;
 rstr x_1244;
 P590 n_1246;
 P585 conds_1247;
};
struct f_st_alloc_400fr { int dummy;
 P590 s_399;
 P585 lv_1248;
 P594 t_1249;
 P594 target_1250;
 P594 vt_1251;
 P592 c_1252;
 P592 tc_1253;
 int ro_1254;
 P590 d_1255;
 P590 p_1256;
 P590 a_1257;
 rstr tcn_1258;
 rstr cell_1259;
 rstr fn_1260;
 rstr v_1261;
 rstr pv_1262;
 P598 y_1263;
 rstr v_1264;
};
struct f_act_ref_402fr { int dummy;
 P590 e_401;
 rstr result_;
 P585 lv_1265;
 P594 t_1266;
 P592 c_1267;
 int ro_1268;
 rstr v_1269;
};
struct f_st_create_404fr { int dummy;
 P590 s_403;
 P598 y_1270;
 P600 pm_1271;
 P590 a_1272;
 P585 lv_1273;
 P594 lt_1274;
 P594 vt_1275;
 P592 lc_1276;
 int ro_1277;
 P594 at_1278;
 P592 ac_1279;
 int aro_1280;
 P585 act_1281;
 rstr nf_1282;
 P585 link_1283;
 rt_int i_1284;
 rstr v_1288;
};
struct f_hidden_var_408fr { int dummy;
 rstr *name_405;
 P594 t_406;
 rstr *place_407;
 P598 y_1289;
};
struct f_user_create_414fr { int dummy;
 P590 s_409;
 P598 y_410;
 rstr *uv_411;
 P594 ut_412;
 rstr *nf_413;
 P594 t_1290;
 P610 saved_1291;
 P610 hook_1292;
 P590 un_1293;
 rstr hn_1294;
 rstr aa_1295;
 rstr uname_1296;
 rstr aname_1297;
 P590 start_1298;
 P590 an_1299;
};
struct f_wait_alt_419fr { int dummy;
 P590 inv_415;
 rstr *arr_416;
 rt_int i_417;
 int mixed_418;
 rstr result_;
 P585 lv_1300;
 P594 t_1301;
 P594 vt_1302;
 P592 c_1303;
 int ro_1304;
 P590 fn_1305;
 P590 args_1306;
 rstr slot_1307;
 P585 dv_1308;
 P594 dt_1309;
 rstr tmp_1310;
 rstr v_1311;
 rstr v_1312;
};
struct f_builtin_wait_421fr { int dummy;
 P590 inv_420;
 int result_;
 P585 lv_1313;
 P594 t_1314;
 P592 c_1315;
 int ro_1316;
 P610 saved_1317;
 int ok_1318;
};
struct f_wait_op_426fr { int dummy;
 P590 inv_422;
 rstr *op_423;
 rstr *q_424;
 int is_stmt_425;
 rstr result_;
 P590 x_1321;
 P590 f_1322;
 P590 qn_1323;
 P594 t_1324;
 rstr r_1325;
};
struct f_user_wait_431fr { int dummy;
 P590 s_427;
 rstr *arr_428;
 rstr *w_429;
 rt_int n_430;
 P590 a_1326;
 rt_int i_1327;
 P585 tests_1328;
 P585 revokes_1329;
 P590 inv_1330;
 P590 st_1331;
 P592 c_1332;
 P594 qt_1333;
 rstr qname_1334;
 P598 y_1335;
 rstr access_1336;
};
struct f_st_wait_433fr { int dummy;
 P590 s_432;
 P590 a_1337;
 rt_int n_1338;
 int first_1339;
 P610 inits_1340;
 int user_1341;
 rstr arr_1342;
 rstr w_1343;
 P590 inv_1344;
 P590 inv_1345;
 P585 conds_1346;
 rt_int i_1347;
};
struct f_call_node_437fr { int dummy;
 rstr *name_434;
 P590 arg_435;
 rt_int line_436;
 P590 result_;
 P590 x_1351;
 P590 f_1352;
};
struct f_user_region_439fr { int dummy;
 P590 s_438;
 P594 t_1353;
 rstr f_1354;
 rstr lock_1355;
 rstr unlock_1356;
};
struct f_st_region_441fr { int dummy;
 P590 s_440;
 P585 lv_1357;
 P594 t_1358;
 P592 c_1359;
 int ro_1360;
 rstr lk_1361;
 rstr f_1362;
};
struct f_gparam_444fr { int dummy;
 P590 g_442;
 rstr *name_443;
 P590 result_;
 P590 p_1363;
};
struct f_bind_sym_446fr { int dummy;
 P590 p_445;
 P598 result_;
 P598 y_1364;
};
struct f_same_binds_449fr { int dummy;
 P598 a_447;
 P598 b_448;
 int result_;
 P598 x_1365;
 P598 y_1366;
};
struct f_same_binding_452fr { int dummy;
 P598 a_450;
 P598 b_451;
 int result_;
};
struct f_tt_binds_457fr { int dummy;
 P590 gd_453;
 P590 formals_454;
 P590 actuals_455;
 rt_int line_456;
 P598 result_;
 P590 f_1367;
 P590 a_1368;
 P598 binds_1369;
 P592 c_1370;
 P594 at_1371;
 P590 p_1372;
 P598 b_1373;
 P590 st_1374;
 int ok_1375;
};
struct f_generic_use_459fr { int dummy;
 P590 st_458;
 int result_;
};
struct f_infer_from_464fr { int dummy;
 P590 gd_460;
 P590 pat_461;
 P594 t_462;
 P598 known_463;
 P598 result_;
 P598 binds_1376;
 P590 e_1377;
 P590 tp_1378;
 P585 nm_1379;
 P598 q_1380;
 int have_1381;
 P598 g_1382;
 P598 b_1383;
};
struct f_instantiate_type_470fr { int dummy;
 P598 g_465;
 P590 tt_466;
 P590 args_467;
 P592 *c_468;
 P592 c_468v;
 rt_int line_469;
 P594 result_;
 P590 gd_1384;
 P590 pat_1385;
 P598 binds_1386;
 P598 inst_1387;
 P594 t_1388;
 P614 saved_caps_1389;
 P602 saved_env_1390;
 rt_int saved_gdepth_1391;
 P598 b_1392;
 P598 y_1393;
 P592 yc_1394;
};
struct f_instantiate_475fr { int dummy;
 P598 g_471;
 P590 tt_472;
 P590 args_473;
 rt_int line_474;
 P598 result_;
 P590 gd_1396;
 P590 pat_1397;
 P598 binds_1398;
 P590 f_1399;
 P590 a_1400;
 P590 fp_1401;
 P598 inst_1402;
 P594 at_1403;
 P592 c_1404;
 P604 saved_fctx_1405;
 int saved_in_1406;
 rt_int saved_level_1407;
 P598 saved_sym_1408;
 P610 saved_code_1409;
 P602 saved_env_1410;
 rt_int saved_gdepth_1411;
 rstr v_1412;
 int known_1413;
 P598 q_1414;
 P598 b_1415;
 rstr v_1416;
 P598 b_1417;
};
struct f_access_of_477fr { int dummy;
 P598 y_476;
 rstr result_;
 P585 p_1418;
 rt_int i_1419;
};
struct f_import_of_480fr { int dummy;
 P590 l_478;
 rstr *name_479;
 P590 result_;
 P590 p_1423;
};
struct f_check_import_483fr { int dummy;
 P598 y_481;
 rt_int line_482;
 int result_;
 P604 c_1424;
 int ro_1425;
 P590 imp_1426;
};
struct f_c_ident_485fr { int dummy;
 rstr *s_484;
 rstr result_;
};
struct f_deref_488fr { int dummy;
 rstr *base_486;
 P594 t_487;
 rstr result_;
};
struct f_is_lvalue_490fr { int dummy;
 P590 e_489;
 int result_;
 P598 y_1427;
};
struct f_lvalue_496fr { int dummy;
 P590 e_491;
 P585 *code_492;
 P585 code_492v;
 P594 *t_493;
 P594 t_493v;
 P592 *c_494;
 P592 c_494v;
 int *ro_495;
 int ro_495v;
 P585 base_1428;
 P594 bt_1429;
 P592 bc_1430;
 P598 y_1431;
};
struct f_select_on_504fr { int dummy;
 rstr *base_497;
 P594 bt_498;
 P590 e_499;
 int *ro_500;
 P585 *code_501;
 P585 code_501v;
 P594 *t_502;
 P594 t_502v;
 P592 *c_503;
 P592 c_503v;
 P590 p_1432;
 P596 f_1433;
};
struct f_index_on_513fr { int dummy;
 rstr *base_505;
 P594 bt_506;
 P590 e_507;
 int *ro_508;
 int lv_509;
 P585 *code_510;
 P585 code_510v;
 P594 *t_511;
 P594 t_511v;
 P592 *c_512;
 P592 c_512v;
 P590 a_1434;
 P594 it_1435;
 rstr i_1436;
 rstr j_1437;
 rstr lo_1438;
 rstr hi_1439;
 rstr i_1440;
 rstr i_1441;
};
struct f_own_attribute_515fr { int dummy;
 P590 e_514;
 int result_;
 P610 saved_1442;
 P594 bt_1443;
 int ok_1444;
 rstr base_1447;
 P590 p_1448;
};
struct f_gexpr_519fr { int dummy;
 P590 e_516;
 P594 want_517;
 P594 *t_518;
 P594 t_518v;
 rstr result_;
 rt_int k_1449;
 P585 code_1450;
 P592 c_1451;
 int ro_1452;
 P594 bt_1453;
 rt_int i_1454;
 P598 y_1455;
 int ro_1456;
 P590 call_1457;
 P590 fname_1458;
 rstr a_1459;
 rstr a_1460;
 rstr a_1461;
 P590 nm_1462;
 P598 y_1463;
 rstr base_1464;
 rstr base_1465;
};
struct f_copy_node_521fr { int dummy;
 P590 e_520;
 P590 result_;
 P590 x_1466;
};
struct f_wrap_apply_523fr { int dummy;
 P590 e_522;
 P590 result_;
 P590 x_1468;
};
struct f_c_string_525fr { int dummy;
 rstr *s_524;
 rstr result_;
 rt_int n_1469;
 rt_int i_1470;
 rstr r_1474;
 rt_int j_1475;
 rt_int i_1476;
};
struct f_enum_type_of_528fr { int dummy;
 rstr *lit_526;
 rt_int line_527;
 P594 result_;
 P598 y_1480;
 P592 c_1481;
 P590 st_1482;
};
struct f_attribute_531fr { int dummy;
 P590 e_529;
 P594 *t_530;
 P594 t_530v;
 rstr result_;
 P594 bt_1483;
 P592 c_1484;
 P585 base_1485;
 P598 y_1486;
 P590 st_1487;
};
struct f_gbinop_535fr { int dummy;
 P590 e_532;
 P594 want_533;
 P594 *t_534;
 P594 t_534v;
 rstr result_;
 P585 op_1488;
 P594 ta_1489;
 P594 tb_1490;
 P594 hint_1491;
 P598 uy_1492;
 P590 l_1493;
 P590 r_1494;
 P590 call_1495;
 P590 fname_1496;
 rstr s_1497;
 rstr a_1498;
 rstr a_1499;
 rstr b_1500;
 rstr a_1501;
 rstr b_1502;
 P594 wa_1503;
 P594 wb_1504;
 rstr a_1505;
 rstr b_1506;
 rstr dummy_1507;
 rstr a_1508;
 rstr b_1509;
 P594 ct_1510;
 rstr a_1511;
 rstr b_1512;
};
struct f_constructor_539fr { int dummy;
 P590 e_536;
 P594 want_537;
 P594 *t_538;
 P594 t_538v;
 rstr result_;
 P590 it_1513;
 P596 f_1514;
 P594 vt_1515;
 P585 s_1516;
 rstr v_1517;
 rstr tmp_1518;
 rstr ct_1519;
 rstr et_1520;
 P585 parts_1521;
 rstr lo_1522;
 rstr hi_1523;
 rstr v_1524;
 rt_int i_1525;
 rstr v_1529;
 rstr tmp_1530;
 P585 parts_1531;
 rstr v_1532;
};
struct f_fits_542fr { int dummy;
 P598 y_540;
 P590 args_541;
 int result_;
 P590 a_1533;
 P600 pm_1534;
 P594 t_1535;
 P610 saved_1536;
 int ok_1537;
 P585 lv_1538;
 P592 lc_1539;
 int ro_1540;
 rstr v_1543;
};
struct f_resolve_overload_547fr { int dummy;
 rstr *name_543;
 P590 args_544;
 int is_stmt_545;
 rt_int line_546;
 P598 result_;
 P598 y_1544;
 P598 first_1545;
 rt_int n_1546;
 rt_int pass_1547;
};
struct f_overload_chain_550fr { int dummy;
 rstr *name_548;
 rt_int pass_549;
 P598 result_;
};
struct f_is_builtin_552fr { int dummy;
 rstr *n_551;
 int result_;
};
struct f_is_low_level_554fr { int dummy;
 rstr *n_553;
 int result_;
};
struct f_me_high_558fr { int dummy;
 P590 tt_555;
 rt_int line_556;
 P594 *t_557;
 P594 t_557v;
 rstr result_;
 P592 c_1551;
};
struct f_type_tag_560fr { int dummy;
 P594 t_559;
 rstr result_;
};
struct f_lock_ref_563fr { int dummy;
 P590 e_561;
 rstr *name_562;
 rstr result_;
 P585 lv_1552;
 P594 t_1553;
 P592 c_1554;
 int ro_1555;
};
struct f_user_op_566fr { int dummy;
 rstr *op_564;
 P590 args_565;
 P598 result_;
 P598 y_1556;
 rt_int pass_1557;
};
struct f_gcall_570fr { int dummy;
 P590 e_567;
 int is_stmt_568;
 P594 *t_569;
 P594 t_569v;
 rstr result_;
 P590 fn_1561;
 P590 tt_1562;
 P598 y_1563;
 P585 args_1564;
 P590 a_1565;
 P600 pm_1566;
 P594 lt_1567;
 P594 vt_1568;
 P585 lv_1569;
 P592 lc_1570;
 int ro_1571;
 P598 alt_1572;
 rt_int i_1573;
 rstr v_1577;
 rstr ct_1578;
 rstr v_1579;
};
struct f_actual_bounds_574fr { int dummy;
 P594 ft_571;
 P594 t_572;
 P592 c_573;
 rstr result_;
};
struct f_builtin_581fr { int dummy;
 rstr *name_575;
 P590 tt_576;
 P590 args_577;
 rt_int line_578;
 int is_stmt_579;
 P594 *t_580;
 P594 t_580v;
 rstr result_;
 P594 at_1580;
 rt_int n_1581;
 rstr a_1582;
 rstr a_1583;
 rstr a_1584;
 rstr a_1585;
 rstr a_1586;
 rstr n1_1587;
 rstr m1_1588;
 rstr a_1589;
 rstr a_1590;
 P590 last_1591;
 rstr a_1592;
 rstr a_1593;
 P585 lv_1594;
 P592 lc_1595;
 int ro_1596;
 P590 last_1597;
 P585 lv_1598;
 P585 dv_1599;
 P592 lc_1600;
 int ro_1601;
 P594 mt_1602;
 P594 dt_1603;
 rstr v_1604;
 P585 lv_1605;
 P592 lc_1606;
 int ro_1607;
 P594 mt_1608;
 P585 lv_1609;
 P585 dv_1610;
 P585 bv_1611;
 P592 lc_1612;
 int ro_1613;
 P594 mt_1614;
 P594 dt_1615;
 P594 bt_1616;
 rstr v_1617;
 rstr v_1618;
 rstr v_1619;
 rstr v_1620;
 rstr a_1621;
 P585 bv_1622;
 P592 bc_1623;
 int ro_1624;
 P594 bt_1625;
 rstr l_1626;
 P585 pv_1627;
 P592 pc_1628;
 int ro_1629;
 P594 pt_1630;
 rstr dev_1631;
 rstr cmd_1632;
 P585 dv_1633;
 P592 dc_1634;
 int ro_1635;
 P594 dt_1636;
};
struct f_translate_583fr { int dummy;
 P590 units_582;
 P590 u_1637;
 P590 l_1639;
 rstr w_1640;
};
struct f_print_program_584fr { int dummy;
};
static void as_R617(R617 *d, R617 s);
static R617 cp_R617(R617 s);
static int eq_R617(R617 a, R617 b);
static void as_R615(R615 *d, R615 s);
static R615 cp_R615(R615 s);
static int eq_R615(R615 a, R615 b);
static void as_R613(R613 *d, R613 s);
static R613 cp_R613(R613 s);
static int eq_R613(R613 a, R613 b);
static void as_R611(R611 *d, R611 s);
static R611 cp_R611(R611 s);
static int eq_R611(R611 a, R611 b);
static void as_R609(R609 *d, R609 s);
static R609 cp_R609(R609 s);
static int eq_R609(R609 a, R609 b);
static void as_R607(R607 *d, R607 s);
static R607 cp_R607(R607 s);
static int eq_R607(R607 a, R607 b);
static void as_R605(R605 *d, R605 s);
static R605 cp_R605(R605 s);
static int eq_R605(R605 a, R605 b);
static void as_A603(A603 *d, A603 s);
static A603 cp_A603(A603 s);
static int eq_A603(A603 a, A603 b);
static void as_R601(R601 *d, R601 s);
static R601 cp_R601(R601 s);
static int eq_R601(R601 a, R601 b);
static void as_R599(R599 *d, R599 s);
static R599 cp_R599(R599 s);
static int eq_R599(R599 a, R599 b);
static void as_R597(R597 *d, R597 s);
static R597 cp_R597(R597 s);
static int eq_R597(R597 a, R597 b);
static void as_R595(R595 *d, R595 s);
static R595 cp_R595(R595 s);
static int eq_R595(R595 a, R595 b);
static void as_R593(R593 *d, R593 s);
static R593 cp_R593(R593 s);
static int eq_R593(R593 a, R593 b);
static void as_R591(R591 *d, R591 s);
static R591 cp_R591(R591 s);
static int eq_R591(R591 a, R591 b);
static void as_A589(A589 *d, A589 s);
static A589 cp_A589(A589 s);
static int eq_A589(A589 a, A589 b);
static void as_R587(R587 *d, R587 s);
static R587 cp_R587(R587 s);
static int eq_R587(R587 a, R587 b);
static P585 f_mk_3(rstr *s_2);
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
static P610 f_new_buffer_24(void);
static void f_put_27(P610 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P610 b_30);
static void f_splice_34(P610 a_32, P610 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P590 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P590 *head_49, P590 *tail_50, P590 x_51);
static rt_int f_list_len_54(P590 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P585 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P585 f_expect_id_76(void);
static P590 f_name_node_77(void);
static P590 f_id_list_78(void);
static P590 f_p_subtype_79(void);
static P590 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P590 f_actual_tt_83(void);
static P590 f_binop_88(P585 op_84, P590 l_85, P590 r_86, rt_int line_87);
static P590 f_expr_89(void);
static P590 f_expr_and_90(void);
static P590 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P590 f_expr_rel_94(void);
static P590 f_expr_add_95(void);
static P590 f_expr_mul_96(void);
static P590 f_expr_pow_97(void);
static P590 f_expr_prefix_98(void);
static P590 f_postfix_99(void);
static P590 f_primary_100(void);
static P590 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P590 f_body_103(void);
static P590 f_body_element_104(void);
static P590 f_declaration_105(void);
static P590 f_object_decl_106(void);
static P590 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P590 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P590 f_formal_params_112(void);
static int f_imports_list_114(P590 owner_113);
static int f_is_definable_116(rstr *w_115);
static P585 f_definable_name_117(void);
static P590 f_subprogram_decl_118(void);
static P590 f_capsule_decl_119(void);
static P590 f_formal_tt_120(void);
static P590 f_generic_decl_121(void);
static P590 f_task_decl_122(void);
static P590 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P590 f_statement_126(void);
static P590 f_unlabeled_statement_127(void);
static P590 f_arm_131(P590 cond_128, P590 b_129, rt_int line_130);
static P590 f_if_stmt_132(void);
static P590 f_case_stmt_133(void);
static P590 f_repeat_stmt_134(void);
static P590 f_guard_stmt_135(void);
static P590 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P598 f_lookup_140(rstr *name_139);
static P598 f_lookup_decl_142(P590 d_141);
static void f_define_145(P598 y_143, rt_int line_144);
static int f_overloadable_147(P598 y_146);
static int f_same_signature_150(P600 a_148, P600 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P598 f_new_sym_155(rt_int kind_153, P585 name_154);
static P594 f_new_typ_157(rt_int kind_156);
static P592 f_new_cons_158(void);
static int f_scalar_kind_160(P594 t_159);
static rstr f_bound_ctype_162(P594 t_161);
static rstr f_cbound_165(P592 c_163, rstr *b_164);
static rstr f_clo_167(P592 c_166);
static rstr f_chi_169(P592 c_168);
static rstr f_sub_lo_172(P594 t_170, P592 c_171);
static rstr f_sub_hi_175(P594 t_173, P592 c_174);
static rstr f_raw_storage_178(rstr *name_176, rstr *ct_177);
static P592 f_copy_cons_180(P592 c_179);
static P592 f_freeze_183(P592 c_181, P594 t_182);
static rstr f_checked_187(P594 t_184, P592 c_185, rstr *v_186);
static int f_same_lits_190(P590 a_188, P590 b_189);
static int f_same_193(P594 a_191, P594 b_192);
static P594 f_base_of_195(P594 t_194);
static P592 f_base_cons_198(P594 t_196, P592 c_197);
static rstr f_kind_name_200(P594 t_199);
static void f_check_type_204(P594 got_201, P594 want_202, rt_int line_203);
static rstr f_ctype_206(P594 t_205);
static rstr f_field_decls_208(P594 t_207);
static void f_declare_ctype_210(P594 t_209);
static void f_init_ascii_211(void);
static rt_int f_lit_index_214(P590 lits_212, rstr *name_213);
static P594 f_resolve_subtype_217(P590 st_215, P592 *c_216);
static int f_float_lit_219(P590 e_218);
static int f_opened_221(P594 t_220);
static rstr f_replace_all_225(rstr *s_222, rstr *pat_223, rstr *r_224);
static rstr f_subst_227(rstr *s_226);
static P594 f_new_type_231(P598 y_228, P590 st_229, P592 *c_230);
static void f_init_storage_235(rstr *lval_232, P594 t_233, P592 c_234);
static rstr f_init_call_238(P598 y_236, rstr *lval_237);
static int f_needs_fin_240(P594 t_239);
static rstr f_fin_code_243(rstr *lval_241, P594 t_242);
static P594 f_tparam_type_246(P594 t_244, rstr *name_245);
static void f_make_storage_250(rstr *lval_247, P594 t_248, P592 c_249);
static rt_int f_manifest_253(P590 e_251, int *ok_252);
static P606 f_mk_mval_256(rt_int kind_254, rt_int i_255);
static rt_int f_ipow_259(rt_int a_257, rt_int b_258);
static P606 f_meval_262(P590 e_260, int *ok_261);
static rt_int f_bool_i_264(int b_263);
static rstr f_mstr_266(P606 v_265);
static int f_ascii_char_268(rt_int i_267);
static int f_user_defined_270(rstr *op_269);
static rstr f_mcopy_272(P594 t_271);
static int f_composite_274(P594 t_273);
static rstr f_assign_code_279(rstr *lval_275, P594 t_276, rstr *v_277, P592 c_278);
static rstr f_copy_code_282(P594 t_280, rstr *v_281);
static rstr f_eq_code_286(P594 t_283, rstr *a_284, rstr *b_285);
static rstr f_elem_assign_290(rstr *lval_287, P594 t_288, rstr *v_289);
static int f_seen_name_293(P608 l_291, rstr *s_292);
static void f_emit_helpers_294(void);
static void f_helper_bodies_296(P594 t_295);
static void f_declare_body_298(P590 elems_297);
static void f_manifest_const_300(P590 d_299);
static int f_exported_304(P590 d_301, rstr *name_302, int *ro_303);
static P598 f_copy_sym_306(P598 y_305);
static void f_gen_capsule_308(P590 d_307);
static void f_capsule_params_312(P590 d_309, P590 args_310, rt_int line_311);
static void f_elaborate_capsule_317(P590 d_313, P598 y_314, P590 args_315, P590 owner_316);
static int f_exports_op_320(P590 d_318, rstr *op_319);
static P585 f_renamed_323(P590 d_321, P598 z_322);
static void f_gen_expose_325(P590 d_324);
static void f_finish_ptr_327(P594 t_326);
static void f_declare_subprogram_329(P590 d_328);
static P598 f_build_subprogram_331(P590 d_330);
static void f_element_333(P590 e_332);
static rstr f_storage_336(rstr *name_334, P594 t_335);
static void f_bind_339(P598 y_337, rstr *access_338);
static void f_var_decl_341(P590 d_340);
static void f_open_fin_343(rstr *fc_342);
static void f_close_fins_345(P608 saved_344);
static void f_const_decl_347(P590 d_346);
static void f_subprogram_349(P590 d_348);
static void f_gen_subprogram_352(P590 d_350, P598 y_351);
static rstr f_waits_of_354(P590 d_353);
static rstr f_task_waits_356(P590 elems_355);
static void f_await_tasks_358(P590 elems_357);
static void f_capsule_elements_360(P590 elems_359);
static int f_has_return_362(P590 e_361);
static void f_capsule_body_364(P590 elems_363);
static void f_body_elements_366(P590 elems_365);
static void f_gen_body_368(P590 elems_367);
static void f_pop_frames_370(rt_int upto_369);
static void f_push_cleanup_372(rstr *s_371);
static void f_pop_cleanup_373(void);
static void f_gen_statement_375(P590 s_374);
static void f_st_assign_377(P590 s_376);
static void f_st_call_379(P590 s_378);
static void f_st_if_381(P590 s_380);
static void f_st_case_383(P590 s_382);
static void f_st_repeat_385(P590 s_384);
static void f_st_exit_387(P590 s_386);
static void f_st_return_389(P590 s_388);
static rstr f_result_checked_393(P594 t_390, P592 c_391, rstr *v_392);
static rstr f_exc_id_396(rstr *name_394, rt_int line_395);
static void f_st_guard_398(P590 s_397);
static void f_st_alloc_400(P590 s_399);
static rstr f_act_ref_402(P590 e_401);
static void f_st_create_404(P590 s_403);
static void f_hidden_var_408(rstr *name_405, P594 t_406, rstr *place_407);
static void f_user_create_414(P590 s_409, P598 y_410, rstr *uv_411, P594 ut_412, rstr *nf_413);
static rstr f_wait_alt_419(P590 inv_415, rstr *arr_416, rt_int i_417, int mixed_418);
static int f_builtin_wait_421(P590 inv_420);
static rstr f_wait_op_426(P590 inv_422, rstr *op_423, rstr *q_424, int is_stmt_425);
static void f_user_wait_431(P590 s_427, rstr *arr_428, rstr *w_429, rt_int n_430);
static void f_st_wait_433(P590 s_432);
static P590 f_call_node_437(rstr *name_434, P590 arg_435, rt_int line_436);
static void f_user_region_439(P590 s_438);
static void f_st_region_441(P590 s_440);
static P590 f_gparam_444(P590 g_442, rstr *name_443);
static P598 f_bind_sym_446(P590 p_445);
static int f_same_binds_449(P598 a_447, P598 b_448);
static int f_same_binding_452(P598 a_450, P598 b_451);
static P598 f_tt_binds_457(P590 gd_453, P590 formals_454, P590 actuals_455, rt_int line_456);
static int f_generic_use_459(P590 st_458);
static P598 f_infer_from_464(P590 gd_460, P590 pat_461, P594 t_462, P598 known_463);
static P594 f_instantiate_type_470(P598 g_465, P590 tt_466, P590 args_467, P592 *c_468, rt_int line_469);
static P598 f_instantiate_475(P598 g_471, P590 tt_472, P590 args_473, rt_int line_474);
static rstr f_access_of_477(P598 y_476);
static P590 f_import_of_480(P590 l_478, rstr *name_479);
static int f_check_import_483(P598 y_481, rt_int line_482);
static rstr f_c_ident_485(rstr *s_484);
static rstr f_deref_488(rstr *base_486, P594 t_487);
static int f_is_lvalue_490(P590 e_489);
static void f_lvalue_496(P590 e_491, P585 *code_492, P594 *t_493, P592 *c_494, int *ro_495);
static void f_select_on_504(rstr *base_497, P594 bt_498, P590 e_499, int *ro_500, P585 *code_501, P594 *t_502, P592 *c_503);
static void f_index_on_513(rstr *base_505, P594 bt_506, P590 e_507, int *ro_508, int lv_509, P585 *code_510, P594 *t_511, P592 *c_512);
static int f_own_attribute_515(P590 e_514);
static rstr f_gexpr_519(P590 e_516, P594 want_517, P594 *t_518);
static P590 f_copy_node_521(P590 e_520);
static P590 f_wrap_apply_523(P590 e_522);
static rstr f_c_string_525(rstr *s_524);
static P594 f_enum_type_of_528(rstr *lit_526, rt_int line_527);
static rstr f_attribute_531(P590 e_529, P594 *t_530);
static rstr f_gbinop_535(P590 e_532, P594 want_533, P594 *t_534);
static rstr f_constructor_539(P590 e_536, P594 want_537, P594 *t_538);
static int f_fits_542(P598 y_540, P590 args_541);
static P598 f_resolve_overload_547(rstr *name_543, P590 args_544, int is_stmt_545, rt_int line_546);
static P598 f_overload_chain_550(rstr *name_548, rt_int pass_549);
static int f_is_builtin_552(rstr *n_551);
static int f_is_low_level_554(rstr *n_553);
static rstr f_me_high_558(P590 tt_555, rt_int line_556, P594 *t_557);
static rstr f_type_tag_560(P594 t_559);
static rstr f_lock_ref_563(P590 e_561, rstr *name_562);
static P598 f_user_op_566(rstr *op_564, P590 args_565);
static rstr f_gcall_570(P590 e_567, int is_stmt_568, P594 *t_569);
static rstr f_actual_bounds_574(P594 ft_571, P594 t_572, P592 c_573);
static rstr f_builtin_581(rstr *name_575, P590 tt_576, P590 args_577, rt_int line_578, int is_stmt_579, P594 *t_580);
static void f_translate_583(P590 units_582);
static void f_print_program_584(void);
static int ex_compile_error_1;
static P588 g_toks_618;
static rt_int g_ntoks_619;
static rt_int g_tpos_620;
static rt_int g_src_line_621;
static P602 g_table_622;
static P602 g_genv_623;
static P598 g_all_insts_624;
static rt_int g_depth_625;
static P598 g_scope_stack_626;
static P594 g_all_types_627;
static rt_int g_serial_628;
static P610 g_out_types_629;
static P610 g_out_helpers_630;
static P610 g_out_protos_631;
static P610 g_out_globals_632;
static P610 g_out_funcs_633;
static P610 g_out_init_634;
static P610 g_out_excs_635;
static P610 g_code_636;
static P610 g_fields_buf_637;
static int g_in_func_638;
static rt_int g_cur_level_639;
static P604 g_fctx_640;
static P614 g_caps_641;
static P616 g_cap_waits_642;
static P608 g_psub_643;
static P585 g_st_field_644;
static P610 g_out_frames_645;
static P610 g_out_roots_646;
static int g_uses_free_647;
static P608 g_fins_648;
static int g_uses_findyn_649;
static P598 g_func_sym_650;
static P592 g_func_rc_651;
static P585 g_cap_ret_652;
static P585 g_cap_rflag_653;
static rt_int g_ret_frames_654;
static rt_int g_gdepth_655;
static P612 g_exits_656;
static rt_int g_frames_657;
static P608 g_handlers_658;
static P608 g_cleanups_659;
static rt_int g_trial_660;
static P608 g_mcopies_661;
static P594 g_ty_int_662;
static P594 g_ty_bool_663;
static P594 g_ty_float_664;
static P594 g_ty_ascii_665;
static P594 g_ty_string_666;
static P594 g_ty_void_667;
static P594 g_ty_file_668;
static P594 g_ty_nil_669;
static P594 g_ty_lock_670;
static P594 g_ty_latch_671;
static P594 g_ty_act_672;
static P592 g_no_cons_673;
static P585 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_674 = NULL;
{ rstr *cell675 = rt_alloc(sizeof(rstr));
rt_int pv676 = ((*F->s_2)).len;
(*cell675) = rt_str_new(pv676);
rt_str_assign(&(*cell675), (*F->s_2));
F->t_674 = cell675;
}
F->result_ = F->t_674;
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
F->r_677 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_677, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_677;
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
F->r_678 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_678, (*F->s_14));
{ rt_int lo680 = ((rt_int)1LL), hi681 = ((*F->s_14)).len;
for (rt_int it682 = lo680; it682 <= hi681; it682++) {
F->i_679 = it682;
if (((65 <= rt_str_get(F->r_678, F->i_679)) && (rt_str_get(F->r_678, F->i_679) <= 90))) {
(*rt_str_at(&F->r_678, F->i_679)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_678, F->i_679)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_678;
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
F->l_683 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_684 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_683), rt_str(" ", 1)));
{ rt_int lo686 = ((rt_int)1LL), hi687 = rt_add(rt_sub(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len, (F->w_684).len), ((rt_int)1LL));
for (rt_int it688 = lo686; it688 <= hi687; it688++) {
F->i_685 = it688;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_685, rt_sub(rt_add(F->i_685, (F->w_684).len), ((rt_int)1LL))), F->w_684)) {
F->result_ = rt_str_cat(F->l_683, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_683;
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
g_serial_628 = rt_add(g_serial_628, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_628));
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
if ((g_trial_660 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P610 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_689 = NULL;
{ R611 *cell690 = rt_alloc(sizeof(R611));
(*cell690).head = NULL;
(*cell690).tail = NULL;
F->b_689 = cell690;
}
F->result_ = F->b_689;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P610 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_691 = NULL;
{ R609 *cell692 = rt_alloc(sizeof(R609));
(*cell692).s = NULL;
(*cell692).next = NULL;
F->l_691 = cell692;
}
(*(P608)rt_nil_check(F->l_691)).s = f_mk_3(&(*F->s_26));
if (((*(P610)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P610)rt_nil_check(F->b_25)).head = F->l_691;
} else {
(*(P608)rt_nil_check((*(P610)rt_nil_check(F->b_25)).tail)).next = F->l_691;
}
(*(P610)rt_nil_check(F->b_25)).tail = F->l_691;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_636, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P610 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_693 = NULL;
F->l_693 = (*(P610)rt_nil_check(F->b_30)).head;
while ((F->l_693 != NULL)) {
rt_putln((*(P585)rt_nil_check((*(P608)rt_nil_check(F->l_693)).s)));
F->l_693 = (*(P608)rt_nil_check(F->l_693)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P610 a_32, P610 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P610)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P610)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P610)rt_nil_check(F->a_32)).head = (*(P610)rt_nil_check(F->b_33)).head;
} else {
(*(P608)rt_nil_check((*(P610)rt_nil_check(F->a_32)).tail)).next = (*(P610)rt_nil_check(F->b_33)).head;
}
(*(P610)rt_nil_check(F->a_32)).tail = (*(P610)rt_nil_check(F->b_33)).tail;
(*(P610)rt_nil_check(F->b_33)).head = NULL;
(*(P610)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel694 = (*F->w_35);
if (0 || rt_str_eq(sel694, rt_str("ABBREV", 6)) || rt_str_eq(sel694, rt_str("ABNORMAL", 8)) || rt_str_eq(sel694, rt_str("ALL", 3)) || rt_str_eq(sel694, rt_str("ALLOC", 5)) || rt_str_eq(sel694, rt_str("ASSERT", 6)) || rt_str_eq(sel694, rt_str("BEGIN", 5)) || rt_str_eq(sel694, rt_str("BY", 2)) || rt_str_eq(sel694, rt_str("CAPSULE", 7)) || rt_str_eq(sel694, rt_str("CASE", 4)) || rt_str_eq(sel694, rt_str("CONST", 5)) || rt_str_eq(sel694, rt_str("CREATE", 6)) || rt_str_eq(sel694, rt_str("DO", 2)) || rt_str_eq(sel694, rt_str("ELSE", 4)) || rt_str_eq(sel694, rt_str("ELSEIF", 6)) || rt_str_eq(sel694, rt_str("END", 3)) || rt_str_eq(sel694, rt_str("EXCEPTION", 9)) || rt_str_eq(sel694, rt_str("EXIT", 4)) || rt_str_eq(sel694, rt_str("EXPORTS", 7)) || rt_str_eq(sel694, rt_str("EXPOSE", 6)) || rt_str_eq(sel694, rt_str("EXTERNAL", 8)) || rt_str_eq(sel694, rt_str("FOR", 3)) || rt_str_eq(sel694, rt_str("FROM", 4)) || rt_str_eq(sel694, rt_str("FUNC", 4)) || rt_str_eq(sel694, rt_str("GENERIC", 7)) || rt_str_eq(sel694, rt_str("GOTO", 4)) || rt_str_eq(sel694, rt_str("GUARD", 5)) || rt_str_eq(sel694, rt_str("IF", 2)) || rt_str_eq(sel694, rt_str("IMPORTS", 7)) || rt_str_eq(sel694, rt_str("LOCATION", 8)) || rt_str_eq(sel694, rt_str("NAMED", 5)) || rt_str_eq(sel694, rt_str("NEEDS", 5)) || rt_str_eq(sel694, rt_str("NEW", 3)) || rt_str_eq(sel694, rt_str("NONE", 4)) || rt_str_eq(sel694, rt_str("OUT", 3)) || rt_str_eq(sel694, rt_str("OF", 2)) || rt_str_eq(sel694, rt_str("PRAG", 4)) || rt_str_eq(sel694, rt_str("PROC", 4)) || rt_str_eq(sel694, rt_str("RAISE", 5)) || rt_str_eq(sel694, rt_str("READONLY", 8)) || rt_str_eq(sel694, rt_str("REVERSE", 7)) || rt_str_eq(sel694, rt_str("REGION", 6)) || rt_str_eq(sel694, rt_str("RENAMING", 8)) || rt_str_eq(sel694, rt_str("REP", 3)) || rt_str_eq(sel694, rt_str("REPEAT", 6)) || rt_str_eq(sel694, rt_str("RERAISE", 7)) || rt_str_eq(sel694, rt_str("RETURN", 6)) || rt_str_eq(sel694, rt_str("SUBTYPE", 7)) || rt_str_eq(sel694, rt_str("TASK", 4)) || rt_str_eq(sel694, rt_str("THEN", 4)) || rt_str_eq(sel694, rt_str("TO", 2)) || rt_str_eq(sel694, rt_str("TYPE", 4)) || rt_str_eq(sel694, rt_str("VAR", 3)) || rt_str_eq(sel694, rt_str("WAIT", 4)) || rt_str_eq(sel694, rt_str("WHEN", 4)) || rt_str_eq(sel694, rt_str("WHILE", 5))) {
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
F->t_695 = NULL;
{ R587 *cell696 = rt_alloc(sizeof(R587));
(*cell696).s = NULL;
F->t_695 = cell696;
}
(*(P586)rt_nil_check(F->t_695)).kind = F->kind_39;
(*(P586)rt_nil_check(F->t_695)).line = g_src_line_621;
(*(P586)rt_nil_check(F->t_695)).ival = F->ival_41;
(*(P586)rt_nil_check(F->t_695)).s = f_mk_3(&(*F->s_40));
g_ntoks_619 = rt_add(g_ntoks_619, ((rt_int)1LL));
(*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_ntoks_619, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo] = F->t_695;
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_697 = ((rt_int)1LL);
F->j_698 = ((rt_int)0LL);
F->n_699 = ((*F->line_43)).len;
while ((F->i_697 <= F->n_699)) {
F->c_700 = rt_str_get((*F->line_43), F->i_697);
if (((((F->c_700 == 32) || (F->c_700 == 9)) || (F->c_700 == 13)) || (F->c_700 == 12))) {
F->i_697 = rt_add(F->i_697, ((rt_int)1LL));
} else if ((F->c_700 == 37)) {
F->i_697 = rt_add(F->n_699, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_700)) {
F->j_698 = F->i_697;
while (((F->j_698 <= F->n_699) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_698)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_698))) || (rt_str_get((*F->line_43), F->j_698) == 95)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
{
F->w_701 = rt_str_new(rt_sub(F->j_698, F->i_697));
rt_str_assign(&F->w_701, rt_str_slice((*F->line_43), F->i_697, rt_sub(F->j_698, ((rt_int)1LL))));
{ rt_int lo703 = ((rt_int)1LL), hi704 = (F->w_701).len;
for (rt_int it705 = lo703; it705 <= hi704; it705++) {
F->k_702 = it705;
(*rt_str_at(&F->w_701, F->k_702)) = f_upper_13(rt_str_get(F->w_701, F->k_702));
}
}
if (rt_str_eq(F->w_701, rt_str("PRAGMAT", 7))) {
while (((F->j_698 <= F->n_699) && (rt_str_get((*F->line_43), F->j_698) != 59))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_701)) {
f_add_token_42((((rt_int)2LL)), &F->w_701, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_701)) {
f_add_token_42((((rt_int)3LL)), &F->w_701, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_701, ((rt_int)0LL));
}
}
F->i_697 = F->j_698;
} else if (f_is_digit_11(F->c_700)) {
F->j_698 = F->i_697;
while (((F->j_698 <= F->n_699) && f_is_digit_11(rt_str_get((*F->line_43), F->j_698)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
if ((((F->j_698 < F->n_699) && (rt_str_get((*F->line_43), F->j_698) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_698, ((rt_int)1LL)))))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
while (((F->j_698 <= F->n_699) && f_is_digit_11(rt_str_get((*F->line_43), F->j_698)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
if (((F->j_698 <= F->n_699) && ((rt_str_get((*F->line_43), F->j_698) == 69) || (rt_str_get((*F->line_43), F->j_698) == 101)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
if (((F->j_698 <= F->n_699) && ((rt_str_get((*F->line_43), F->j_698) == 43) || (rt_str_get((*F->line_43), F->j_698) == 45)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
while (((F->j_698 <= F->n_699) && f_is_digit_11(rt_str_get((*F->line_43), F->j_698)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_697, rt_sub(F->j_698, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_697, rt_sub(F->j_698, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_697, rt_sub(F->j_698, ((rt_int)1LL)))));
}
F->i_697 = F->j_698;
} else if ((F->c_700 == 39)) {
F->j_698 = rt_add(F->i_697, ((rt_int)1LL));
if (((F->j_698 > F->n_699) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_698))))) {
f_fail_23(g_src_line_621, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_698 <= F->n_699) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_698)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_698))) || (rt_str_get((*F->line_43), F->j_698) == 95)))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
{
F->w_706 = rt_str_new(rt_sub(rt_sub(F->j_698, F->i_697), ((rt_int)1LL)));
rt_str_assign(&F->w_706, rt_str_slice((*F->line_43), rt_add(F->i_697, ((rt_int)1LL)), rt_sub(F->j_698, ((rt_int)1LL))));
{ rt_int lo708 = ((rt_int)1LL), hi709 = (F->w_706).len;
for (rt_int it710 = lo708; it710 <= hi709; it710++) {
F->k_707 = it710;
(*rt_str_at(&F->w_706, F->k_707)) = f_upper_13(rt_str_get(F->w_706, F->k_707));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_706, ((rt_int)0LL));
}
F->i_697 = F->j_698;
} else if ((F->c_700 == 34)) {
F->j_698 = rt_add(F->i_697, ((rt_int)1LL));
while (((F->j_698 <= F->n_699) && (rt_str_get((*F->line_43), F->j_698) != 34))) {
F->j_698 = rt_add(F->j_698, ((rt_int)1LL));
}
if ((F->j_698 > F->n_699)) {
f_fail_23(g_src_line_621, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_697, ((rt_int)1LL)), rt_sub(F->j_698, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_697 = rt_add(F->j_698, ((rt_int)1LL));
} else {
{
F->two_711 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_711, rt_str("  ", 2));
(*rt_str_at(&F->two_711, ((rt_int)1LL))) = F->c_700;
if ((F->i_697 < F->n_699)) {
(*rt_str_at(&F->two_711, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_697, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_711, rt_str(":=", 2)) || rt_str_eq(F->two_711, rt_str("=>", 2))) || rt_str_eq(F->two_711, rt_str("..", 2))) || rt_str_eq(F->two_711, rt_str("**", 2))) || rt_str_eq(F->two_711, rt_str("/=", 2))) || rt_str_eq(F->two_711, rt_str("<=", 2))) || rt_str_eq(F->two_711, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_711, ((rt_int)0LL));
F->i_697 = rt_add(F->i_697, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_700 == 40) || (F->c_700 == 41)) || (F->c_700 == 91)) || (F->c_700 == 93)) || (F->c_700 == 44)) || (F->c_700 == 58)) || (F->c_700 == 59)) || (F->c_700 == 46)) || (F->c_700 == 35)) || (F->c_700 == 43)) || (F->c_700 == 45)) || (F->c_700 == 42)) || (F->c_700 == 47)) || (F->c_700 == 38)) || (F->c_700 == 61)) || (F->c_700 == 60)) || (F->c_700 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_700); b_; }), ((rt_int)0LL));
F->i_697 = rt_add(F->i_697, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_621, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_read_source_45(void) {
  struct f_read_source_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while ((!rt_eof())) {
F->line_712 = rt_str_new(rt_sizeln());
rt_readln(&F->line_712);
g_src_line_621 = rt_add(g_src_line_621, ((rt_int)1LL));
f_lex_line_44(&F->line_712);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P590 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_713 = NULL;
{ R591 *cell714 = rt_alloc(sizeof(R591));
(*cell714).name = NULL;
(*cell714).tag = NULL;
(*cell714).a = NULL;
(*cell714).b = NULL;
(*cell714).c = NULL;
(*cell714).d = NULL;
(*cell714).e = NULL;
(*cell714).next = NULL;
F->x_713 = cell714;
}
(*(P590)rt_nil_check(F->x_713)).kind = F->kind_46;
(*(P590)rt_nil_check(F->x_713)).line = F->line_47;
F->result_ = F->x_713;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_52(P590 *head_49, P590 *tail_50, P590 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P590)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P590)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P590)rt_nil_check((*F->tail_50))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_54(P590 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_53 = l_53;
F->n_715 = ((rt_int)0LL);
F->p_716 = NULL;
F->p_716 = F->l_53;
while ((F->p_716 != NULL)) {
F->n_715 = rt_add(F->n_715, ((rt_int)1LL));
F->p_716 = (*(P590)rt_nil_check(F->p_716)).next;
}
F->result_ = F->n_715;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_56 = w_56;
F->result_ = (((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).kind == (((rt_int)2LL))) && rt_str_eq((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_58 = w_58;
F->result_ = (((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).kind == (((rt_int)3LL))) && rt_str_eq((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_60 = k_60;
F->result_ = ((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_62 = k_62;
if ((rt_add(g_tpos_620, F->k_62) > g_ntoks_619)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(rt_add(g_tpos_620, F->k_62), (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P585 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_64 = k_64;
if ((rt_add(g_tpos_620, F->k_64) > g_ntoks_619)) {
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_ntoks_619, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
goto ret_;
}
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(rt_add(g_tpos_620, F->k_64), (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->msg_66 = msg_66;
f_fail_23((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
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

static int f_accept_op_71(rstr *w_70) {
  struct f_accept_op_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_70 = w_70;
if (f_at_op_59(&(*F->w_70))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
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

static void f_expect_kw_73(rstr *w_72) {
  struct f_expect_kw_73fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_72 = w_72;
if ((!f_at_kw_57(&(*F->w_72)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P585 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_61((((rt_int)1LL))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(rt_sub(g_tpos_620, ((rt_int)1LL)), (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_717 = NULL;
F->x_717 = f_nn_48((((rt_int)7LL)), f_cur_line_55());
(*(P590)rt_nil_check(F->x_717)).name = f_expect_id_76();
F->result_ = F->x_717;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_718 = NULL;
F->tail_719 = NULL;
f_append_52(&F->head_718, &F->tail_719, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_718, &F->tail_719, f_name_node_77());
}
F->result_ = F->head_718;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_720 = f_cur_line_55();
F->x_721 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->x_721 = f_nn_48((((rt_int)81LL)), F->line_720);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P590)rt_nil_check(F->x_721)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_721;
goto ret_;
}
if ((!f_at_kind_61((((rt_int)1LL))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_722 = rt_str_copy((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)));
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if (rt_str_eq(F->w_722, rt_str("ARRAY", 5))) {
F->x_721 = f_nn_48((((rt_int)74LL)), F->line_720);
{
F->head_723 = NULL;
F->tail_724 = NULL;
f_append_52(&F->head_723, &F->tail_724, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_723, &F->tail_724, f_p_subtype_79());
}
(*(P590)rt_nil_check(F->x_721)).a = F->head_723;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P590)rt_nil_check(F->x_721)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_722, rt_str("RECORD", 6)) || rt_str_eq(F->w_722, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_722, rt_str("RECORD", 6))) {
F->x_721 = f_nn_48((((rt_int)75LL)), F->line_720);
} else {
F->x_721 = f_nn_48((((rt_int)76LL)), F->line_720);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_725 = NULL;
F->tail_726 = NULL;
F->more_727 = 1;
while (F->more_727) {
F->names_728 = NULL;
F->names_728 = f_id_list_78();
F->st_729 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_729 = f_p_subtype_79();
while ((F->names_728 != NULL)) {
F->cmp_730 = NULL;
F->cmp_730 = f_nn_48((((rt_int)63LL)), (*(P590)rt_nil_check(F->names_728)).line);
(*(P590)rt_nil_check(F->cmp_730)).name = (*(P590)rt_nil_check(F->names_728)).name;
(*(P590)rt_nil_check(F->cmp_730)).a = F->st_729;
f_append_52(&F->head_725, &F->tail_726, F->cmp_730);
F->names_728 = (*(P590)rt_nil_check(F->names_728)).next;
}
F->more_727 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->x_721)).a = F->head_725;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_722, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_721)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_722, rt_str("ENUM", 4))) {
F->x_721 = f_nn_48((((rt_int)72LL)), F->line_720);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_731 = NULL;
F->tail_732 = NULL;
F->more_733 = 1;
while (F->more_733) {
F->lit_734 = NULL;
F->lit_734 = f_nn_48((((rt_int)4LL)), F->line_720);
if ((!f_at_kind_61((((rt_int)6LL))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P590)rt_nil_check(F->lit_734)).name = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
f_append_52(&F->head_731, &F->tail_732, F->lit_734);
F->more_733 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->x_721)).a = F->head_731;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_721)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P590)rt_nil_check(F->x_721)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_722, rt_str("STRING", 6)) || rt_str_eq(F->w_722, rt_str("SET", 3))) || rt_str_eq(F->w_722, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_722, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_722, rt_str("STRING", 6))) {
F->x_721 = f_nn_48((((rt_int)73LL)), F->line_720);
} else if (rt_str_eq(F->w_722, rt_str("SET", 3))) {
F->x_721 = f_nn_48((((rt_int)77LL)), F->line_720);
} else if (rt_str_eq(F->w_722, rt_str("MAILBOX", 7))) {
F->x_721 = f_nn_48((((rt_int)78LL)), F->line_720);
} else {
F->x_721 = f_nn_48((((rt_int)79LL)), F->line_720);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P590)rt_nil_check(F->x_721)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_721)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_722, rt_str("INT", 3))) {
F->x_721 = f_nn_48((((rt_int)70LL)), F->line_720);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_721)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P590)rt_nil_check(F->x_721)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_722, rt_str("FLOAT", 5))) {
F->x_721 = f_nn_48((((rt_int)71LL)), F->line_720);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_721)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_721)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P590)rt_nil_check(F->x_721)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_721 = f_nn_48((((rt_int)80LL)), F->line_720);
(*(P590)rt_nil_check(F->x_721)).name = f_mk_3(&F->w_722);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_721)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_721)).b = f_actual_params_80();
(*(P590)rt_nil_check(F->x_721)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_721;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_735 = NULL;
F->tail_736 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_735, &F->tail_736, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_735, &F->tail_736, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_735;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_type_word_82(rstr *w_81) {
  struct f_is_type_word_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
F->result_ = ((((((((((((((rt_str_eq((*F->w_81), rt_str("INT", 3)) || rt_str_eq((*F->w_81), rt_str("BOOL", 4))) || rt_str_eq((*F->w_81), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_81), rt_str("ENUM", 4))) || rt_str_eq((*F->w_81), rt_str("RECORD", 6))) || rt_str_eq((*F->w_81), rt_str("UNION", 5))) || rt_str_eq((*F->w_81), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_81), rt_str("STRING", 6))) || rt_str_eq((*F->w_81), rt_str("SET", 3))) || rt_str_eq((*F->w_81), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_81), rt_str("FILE", 4))) || rt_str_eq((*F->w_81), rt_str("ASCII", 5))) || rt_str_eq((*F->w_81), rt_str("ACT", 3))) || rt_str_eq((*F->w_81), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_81), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_737 = NULL;
F->tail_738 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_739 = 1;
while (F->more_739) {
if ((f_at_kind_61((((rt_int)1LL))) && f_is_type_word_82(&(*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s))))) {
f_append_52(&F->head_737, &F->tail_738, f_p_subtype_79());
} else {
f_append_52(&F->head_737, &F->tail_738, f_expr_89());
}
F->more_739 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_737;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_binop_88(P585 op_84, P590 l_85, P590 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_740 = NULL;
F->x_740 = f_nn_48((((rt_int)9LL)), F->line_87);
(*(P590)rt_nil_check(F->x_740)).name = F->op_84;
(*(P590)rt_nil_check(F->x_740)).a = F->l_85;
(*(P590)rt_nil_check(F->x_740)).b = F->r_86;
F->result_ = F->x_740;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_741 = NULL;
F->l_741 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_742 = NULL;
F->op_742 = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
F->line_743 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_741 = f_binop_88(F->op_742, F->l_741, f_expr_and_90(), F->line_743);
}
F->result_ = F->l_741;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_744 = NULL;
F->l_744 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_745 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_744 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_744, f_expr_not_91(), F->line_745);
}
F->result_ = F->l_744;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_746 = NULL;
F->x_746 = f_nn_48((((rt_int)8LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_746)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P590)rt_nil_check(F->x_746)).a = f_expr_not_91();
F->result_ = F->x_746;
goto ret_;
}
F->result_ = f_expr_rel_94();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_rel_93(rstr *s_92) {
  struct f_is_rel_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_92 = s_92;
F->result_ = ((((((rt_str_eq((*F->s_92), rt_str("=", 1)) || rt_str_eq((*F->s_92), rt_str("/=", 2))) || rt_str_eq((*F->s_92), rt_str("<", 1))) || rt_str_eq((*F->s_92), rt_str("<=", 2))) || rt_str_eq((*F->s_92), rt_str(">", 1))) || rt_str_eq((*F->s_92), rt_str(">=", 2))) || rt_str_eq((*F->s_92), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_747 = NULL;
F->l_747 = f_expr_add_95();
if ((f_at_kind_61((((rt_int)3LL))) && f_is_rel_93(&(*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s))))) {
F->op_748 = NULL;
F->op_748 = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
F->line_749 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_747 = f_binop_88(F->op_748, F->l_747, f_expr_add_95(), F->line_749);
}
F->result_ = F->l_747;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_750 = NULL;
F->l_750 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_751 = NULL;
F->op_751 = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
F->line_752 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_750 = f_binop_88(F->op_751, F->l_750, f_expr_mul_96(), F->line_752);
}
F->result_ = F->l_750;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_753 = NULL;
F->l_753 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_754 = NULL;
F->op_754 = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
F->line_755 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_753 = f_binop_88(F->op_754, F->l_753, f_expr_pow_97(), F->line_755);
}
F->result_ = F->l_753;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_756 = NULL;
F->l_756 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_757 = f_cur_line_55();
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->l_756 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_756, f_expr_prefix_98(), F->line_757);
}
F->result_ = F->l_756;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_758 = NULL;
F->x_758 = f_nn_48((((rt_int)8LL)), f_cur_line_55());
(*(P590)rt_nil_check(F->x_758)).name = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_758)).a = f_expr_prefix_98();
F->result_ = F->x_758;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_759 = NULL;
F->p_759 = f_primary_100();
while (1) {
F->line_760 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_761 = NULL;
F->x_761 = f_nn_48((((rt_int)10LL)), F->line_760);
F->head_762 = NULL;
F->tail_763 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_764 = 1;
while (F->more_764) {
F->lo_765 = NULL;
F->lo_765 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_766 = NULL;
F->r_766 = f_nn_48((((rt_int)16LL)), F->line_760);
(*(P590)rt_nil_check(F->r_766)).a = F->lo_765;
(*(P590)rt_nil_check(F->r_766)).b = f_expr_89();
f_append_52(&F->head_762, &F->tail_763, F->r_766);
} else {
f_append_52(&F->head_762, &F->tail_763, F->lo_765);
}
F->more_764 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P590)rt_nil_check(F->x_761)).a = F->p_759;
(*(P590)rt_nil_check(F->x_761)).b = F->head_762;
F->p_759 = F->x_761;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_63(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_767 = NULL;
F->x_767 = f_nn_48((((rt_int)11LL)), F->line_760);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_767)).a = F->p_759;
(*(P590)rt_nil_check(F->x_767)).name = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->p_759 = F->x_767;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P590)rt_nil_check(F->p_759)).kind == (((rt_int)7LL))))) {
F->x_768 = NULL;
F->x_768 = f_nn_48((((rt_int)12LL)), F->line_760);
(*(P590)rt_nil_check(F->x_768)).a = F->p_759;
(*(P590)rt_nil_check(F->x_768)).b = f_actual_tt_83();
F->p_759 = F->x_768;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_769 = NULL;
F->x_769 = f_nn_48((((rt_int)13LL)), F->line_760);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_769)).a = F->p_759;
(*(P590)rt_nil_check(F->x_769)).b = f_p_subtype_79();
F->p_759 = F->x_769;
} else {
F->result_ = F->p_759;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_770 = f_cur_line_55();
F->x_771 = NULL;
F->k_772 = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).kind;
if ((F->k_772 == (((rt_int)4LL)))) {
F->x_771 = f_nn_48((((rt_int)1LL)), F->line_770);
(*(P590)rt_nil_check(F->x_771)).ival = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).ival;
(*(P590)rt_nil_check(F->x_771)).name = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = F->x_771;
goto ret_;
}
if ((((F->k_772 == (((rt_int)5LL))) || (F->k_772 == (((rt_int)7LL)))) || (F->k_772 == (((rt_int)6LL))))) {
if ((F->k_772 == (((rt_int)5LL)))) {
F->x_771 = f_nn_48((((rt_int)2LL)), F->line_770);
} else if ((F->k_772 == (((rt_int)7LL)))) {
F->x_771 = f_nn_48((((rt_int)3LL)), F->line_770);
} else {
F->x_771 = f_nn_48((((rt_int)4LL)), F->line_770);
}
(*(P590)rt_nil_check(F->x_771)).name = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = F->x_771;
goto ret_;
}
if ((F->k_772 == (((rt_int)1LL)))) {
F->w_773 = rt_str_copy((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)));
if ((rt_str_eq(F->w_773, rt_str("TRUE", 4)) || rt_str_eq(F->w_773, rt_str("FALSE", 5)))) {
F->x_771 = f_nn_48((((rt_int)5LL)), F->line_770);
if (rt_str_eq(F->w_773, rt_str("TRUE", 4))) {
(*(P590)rt_nil_check(F->x_771)).ival = ((rt_int)1LL);
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = F->x_771;
goto ret_;
}
if (rt_str_eq(F->w_773, rt_str("NIL", 3))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = f_nn_48((((rt_int)6LL)), F->line_770);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_771 = f_nn_48((((rt_int)17LL)), F->line_770);
(*(P590)rt_nil_check(F->x_771)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_771;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_774 = NULL;
F->tail_775 = NULL;
F->x_771 = f_nn_48((((rt_int)14LL)), F->line_770);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_776 = 1;
while (F->more_776) {
f_append_52(&F->head_774, &F->tail_775, f_constructor_item_101());
F->more_776 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P590)rt_nil_check(F->x_771)).a = F->head_774;
F->result_ = F->x_771;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_777 = f_cur_line_55();
F->it_778 = NULL;
F->it_778 = f_nn_48((((rt_int)15LL)), F->line_777);
F->first_779 = NULL;
F->first_779 = f_expr_89();
F->keys_780 = NULL;
F->ktail_781 = NULL;
F->lab_782 = NULL;
F->lab_782 = f_nn_48((((rt_int)61LL)), F->line_777);
(*(P590)rt_nil_check(F->lab_782)).a = F->first_779;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P590)rt_nil_check(F->lab_782)).b = f_expr_89();
f_append_52(&F->keys_780, &F->ktail_781, F->lab_782);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_780, &F->ktail_781, F->lab_782);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_783 = g_tpos_620;
F->more_784 = NULL;
F->tail2_785 = NULL;
F->ok_786 = 0;
F->go_787 = 1;
while ((F->go_787 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_788 = NULL;
F->l2_788 = f_nn_48((((rt_int)61LL)), F->line_777);
(*(P590)rt_nil_check(F->l2_788)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P590)rt_nil_check(F->l2_788)).b = f_expr_89();
}
f_append_52(&F->more_784, &F->tail2_785, F->l2_788);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_786 = 1;
F->go_787 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_787 = 0;
}
}
if (F->ok_786) {
f_append_52(&F->keys_780, &F->ktail_781, F->lab_782);
f_append_52(&F->keys_780, &F->ktail_781, F->more_784);
} else {
g_tpos_620 = F->save_783;
}
}
if ((F->keys_780 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P590)rt_nil_check(F->it_778)).a = F->keys_780;
(*(P590)rt_nil_check(F->it_778)).b = f_expr_89();
} else {
(*(P590)rt_nil_check(F->it_778)).b = F->first_779;
}
F->result_ = F->it_778;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_body_end_102(void) {
  struct f_at_body_end_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_61((((rt_int)0LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_789 = NULL;
F->tail_790 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_789, &F->tail_790, f_body_element_104());
}
F->result_ = F->head_789;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_791 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_791 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_791 = f_nn_48((((rt_int)33LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_791)).a = f_expr_89();
} else {
F->x_791 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_791;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_792 = f_cur_line_55();
if ((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_106();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_107();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_109();
goto ret_;
} else if (((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_118();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_119();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_123();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_122();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_121();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_793 = NULL;
F->tail_794 = NULL;
F->names_795 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->names_795 = f_id_list_78();
while ((F->names_795 != NULL)) {
F->x_796 = NULL;
F->x_796 = f_nn_48((((rt_int)49LL)), F->line_792);
(*(P590)rt_nil_check(F->x_796)).name = (*(P590)rt_nil_check(F->names_795)).name;
f_append_52(&F->head_793, &F->tail_794, F->x_796);
F->names_795 = (*(P590)rt_nil_check(F->names_795)).next;
}
F->result_ = F->head_793;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_797 = f_cur_line_55();
F->is_var_798 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_799 = NULL;
F->st_800 = NULL;
F->init_801 = NULL;
F->loc_802 = NULL;
F->loc_kind_803 = ((rt_int)0LL);
F->head_804 = NULL;
F->tail_805 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->names_799 = f_id_list_78();
if (F->is_var_798) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_800 = f_p_subtype_79();
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_61((((rt_int)1LL))) && rt_str_eq((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->loc_kind_803 = ((rt_int)1LL);
} else {
F->loc_kind_803 = ((rt_int)2LL);
}
F->loc_802 = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_801 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_800 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_801 = f_expr_89();
}
while ((F->names_799 != NULL)) {
F->x_806 = NULL;
if (F->is_var_798) {
F->x_806 = f_nn_48((((rt_int)40LL)), F->line_797);
} else {
F->x_806 = f_nn_48((((rt_int)41LL)), F->line_797);
}
(*(P590)rt_nil_check(F->x_806)).name = (*(P590)rt_nil_check(F->names_799)).name;
(*(P590)rt_nil_check(F->x_806)).a = F->st_800;
(*(P590)rt_nil_check(F->x_806)).b = F->init_801;
(*(P590)rt_nil_check(F->x_806)).c = F->loc_802;
(*(P590)rt_nil_check(F->x_806)).ival = F->loc_kind_803;
f_append_52(&F->head_804, &F->tail_805, F->x_806);
F->names_799 = (*(P590)rt_nil_check(F->names_799)).next;
}
F->result_ = F->head_804;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_807 = NULL;
F->x_807 = f_nn_48((((rt_int)42LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_807)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_807)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P590)rt_nil_check(F->x_807)).a = f_p_subtype_79();
F->result_ = F->x_807;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_808 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_808 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61((((rt_int)0LL)))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_808 = rt_add(F->depth_808, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_808 = rt_sub(F->depth_808, ((rt_int)1LL));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P590 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_809 = f_cur_line_55();
F->name_810 = NULL;
F->params_811 = NULL;
F->x_812 = NULL;
F->tts_813 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->name_810 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_813 = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_811 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61((((rt_int)1LL))) && rt_str_eq((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->x_812 = f_nn_48((((rt_int)44LL)), F->line_809);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_812)).b = f_formal_params_112();
}
} else {
F->x_812 = f_nn_48((((rt_int)43LL)), F->line_809);
(*(P590)rt_nil_check(F->x_812)).b = F->params_811;
}
(*(P590)rt_nil_check(F->x_812)).name = F->name_810;
(*(P590)rt_nil_check(F->x_812)).e = F->tts_813;
(*(P590)rt_nil_check(F->x_812)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_812;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_mode_of_111(rstr *w_110) {
  struct f_mode_of_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_110 = w_110;
if (rt_str_eq((*F->w_110), rt_str("VAR", 3))) {
F->result_ = (((rt_int)2LL));
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("OUT", 3))) {
F->result_ = (((rt_int)3LL));
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("READONLY", 8))) {
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

static P590 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_814 = NULL;
F->tail_815 = NULL;
F->more_816 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_816) {
F->mode_817 = (((rt_int)1LL));
F->names_818 = NULL;
F->ntail_819 = NULL;
F->st_820 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_817 = f_mode_of_111(&(*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)));
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
}
f_append_52(&F->names_818, &F->ntail_819, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_63(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((*(P585)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P585)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
f_append_52(&F->names_818, &F->ntail_819, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_820 = f_p_subtype_79();
while ((F->names_818 != NULL)) {
F->p_821 = NULL;
F->p_821 = f_nn_48((((rt_int)52LL)), (*(P590)rt_nil_check(F->names_818)).line);
(*(P590)rt_nil_check(F->p_821)).name = (*(P590)rt_nil_check(F->names_818)).name;
(*(P590)rt_nil_check(F->p_821)).ival = F->mode_817;
(*(P590)rt_nil_check(F->p_821)).a = F->st_820;
f_append_52(&F->head_814, &F->tail_815, F->p_821);
F->names_818 = (*(P590)rt_nil_check(F->names_818)).next;
}
F->more_816 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_814;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_114(P590 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_113 = owner_113;
F->head_822 = NULL;
F->tail_823 = NULL;
F->more_824 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P590)rt_nil_check(F->owner_113)).flag = rt_add((*(P590)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_824) {
F->ro_825 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_826 = NULL;
F->x_826 = f_name_node_77();
if (F->ro_825) {
(*(P590)rt_nil_check(F->x_826)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_822, &F->tail_823, F->x_826);
F->more_824 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->owner_113)).d = F->head_822;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_definable_116(rstr *w_115) {
  struct f_is_definable_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_115 = w_115;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_115), rt_str("+", 1)) || rt_str_eq((*F->w_115), rt_str("-", 1))) || rt_str_eq((*F->w_115), rt_str("*", 1))) || rt_str_eq((*F->w_115), rt_str("/", 1))) || rt_str_eq((*F->w_115), rt_str("**", 2))) || rt_str_eq((*F->w_115), rt_str("&", 1))) || rt_str_eq((*F->w_115), rt_str("=", 1))) || rt_str_eq((*F->w_115), rt_str("<", 1))) || rt_str_eq((*F->w_115), rt_str("<=", 2))) || rt_str_eq((*F->w_115), rt_str(">", 1))) || rt_str_eq((*F->w_115), rt_str(">=", 2))) || rt_str_eq((*F->w_115), rt_str("/=", 2))) || rt_str_eq((*F->w_115), rt_str("DIV", 3))) || rt_str_eq((*F->w_115), rt_str("MOD", 3))) || rt_str_eq((*F->w_115), rt_str("AND", 3))) || rt_str_eq((*F->w_115), rt_str("OR", 2))) || rt_str_eq((*F->w_115), rt_str("XOR", 3))) || rt_str_eq((*F->w_115), rt_str("NOT", 3))) || rt_str_eq((*F->w_115), rt_str("IN", 2))) || rt_str_eq((*F->w_115), rt_str(":=", 2))) || rt_str_eq((*F->w_115), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P585 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_61((((rt_int)1LL))) || (f_at_kind_61((((rt_int)3LL))) && f_is_definable_116(&(*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)))))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = (*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(rt_sub(g_tpos_620, ((rt_int)1LL)), (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_827 = f_cur_line_55();
F->x_828 = NULL;
F->is_abn_829 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_830 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_830) {
F->x_828 = f_nn_48((((rt_int)46LL)), F->line_827);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_828 = f_nn_48((((rt_int)45LL)), F->line_827);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if (F->is_abn_829) {
(*(P590)rt_nil_check(F->x_828)).flag = ((rt_int)1LL);
}
(*(P590)rt_nil_check(F->x_828)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_828)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_828)).a = f_formal_params_112();
}
if (F->is_func_830) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P590)rt_nil_check(F->x_828)).b = f_p_subtype_79();
}
F->dummy_831 = f_imports_list_114(F->x_828);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P590)rt_nil_check(F->x_828)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_830) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P585)rt_nil_check(f_definable_name_117())), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_828)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_828)).name))); b_; }));
}
F->result_ = F->x_828;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_832 = NULL;
F->x_832 = f_nn_48((((rt_int)47LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_832)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_832)).b = f_formal_params_112();
}
F->dummy_833 = f_imports_list_114(F->x_832);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P590)rt_nil_check(F->x_832)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P590)rt_nil_check(F->x_832)).ival = ((rt_int)0LL);
} else {
F->head_834 = NULL;
F->tail_835 = NULL;
F->more_836 = 1;
while (F->more_836) {
F->n_837 = NULL;
F->n_837 = f_nn_48((((rt_int)7LL)), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P590)rt_nil_check(F->n_837)).ival = ((rt_int)1LL);
}
(*(P590)rt_nil_check(F->n_837)).name = f_definable_name_117();
f_append_52(&F->head_834, &F->tail_835, F->n_837);
F->more_836 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->x_832)).a = F->head_834;
(*(P590)rt_nil_check(F->x_832)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P590)rt_nil_check(F->x_832)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P585)rt_nil_check(f_expect_id_76())), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_832)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_832;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_838 = NULL;
F->tail_839 = NULL;
F->more_840 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_840) {
f_append_52(&F->head_838, &F->tail_839, f_name_node_77());
F->more_840 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_838;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_841 = NULL;
F->x_841 = f_nn_48((((rt_int)51LL)), f_cur_line_55());
F->head_842 = NULL;
F->tail_843 = NULL;
F->more_844 = 1;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
while (F->more_844) {
F->names_845 = NULL;
F->names_845 = f_id_list_78();
F->kind_846 = ((rt_int)6LL);
F->st_847 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_846 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_846 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_846 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_846 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_846 = ((rt_int)5LL);
} else {
F->st_847 = f_p_subtype_79();
}
if (((F->kind_846 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P590)rt_nil_check(F->x_841)).e = f_actual_params_80();
} else if (((F->kind_846 >= ((rt_int)3LL)) && (F->kind_846 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_847 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
}
if (((F->kind_846 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_847 = f_p_subtype_79();
}
}
while ((F->names_845 != NULL)) {
F->p_848 = NULL;
F->p_848 = f_nn_48((((rt_int)52LL)), (*(P590)rt_nil_check(F->names_845)).line);
(*(P590)rt_nil_check(F->p_848)).name = (*(P590)rt_nil_check(F->names_845)).name;
(*(P590)rt_nil_check(F->p_848)).ival = F->kind_846;
(*(P590)rt_nil_check(F->p_848)).a = F->st_847;
f_append_52(&F->head_842, &F->tail_843, F->p_848);
F->names_845 = (*(P590)rt_nil_check(F->names_845)).next;
}
F->more_844 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_844 = 1;
while (F->more_844) {
F->nm_849 = NULL;
F->nm_849 = f_definable_name_117();
F->st_850 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_850 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_850 = f_p_subtype_79();
}
F->more_844 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P590)rt_nil_check(F->x_841)).a = F->head_842;
(*(P590)rt_nil_check(F->x_841)).b = f_declaration_105();
(*(P590)rt_nil_check(F->x_841)).name = (*(P590)rt_nil_check((*(P590)rt_nil_check(F->x_841)).b)).name;
F->result_ = F->x_841;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_851 = NULL;
F->x_851 = f_nn_48((((rt_int)50LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_851)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_851)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_851)).a = f_formal_params_112();
}
F->dummy_852 = f_imports_list_114(F->x_851);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P590)rt_nil_check(F->x_851)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P585)rt_nil_check(f_expect_id_76())), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_851)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_851)).name))); b_; }));
}
F->result_ = F->x_851;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_853 = NULL;
F->x_853 = f_nn_48((((rt_int)48LL)), f_cur_line_55());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P590)rt_nil_check(F->x_853)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_854 = NULL;
F->tail_855 = NULL;
F->more_856 = 1;
while (F->more_856) {
F->n_857 = NULL;
F->n_857 = f_nn_48((((rt_int)7LL)), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P590)rt_nil_check(F->n_857)).ival = ((rt_int)1LL);
}
(*(P590)rt_nil_check(F->n_857)).name = f_definable_name_117();
f_append_52(&F->head_854, &F->tail_855, F->n_857);
F->more_856 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->x_853)).a = F->head_854;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P590)rt_nil_check(F->x_853)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P590)rt_nil_check(F->x_853)).flag = rt_add((*(P590)rt_nil_check(F->x_853)).flag, ((rt_int)2LL));
}
(*(P590)rt_nil_check(F->x_853)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_853)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_858 = NULL;
F->tail_859 = NULL;
F->more_860 = 1;
while (F->more_860) {
F->n_861 = NULL;
F->n_861 = f_nn_48((((rt_int)7LL)), f_cur_line_55());
F->tgt_862 = NULL;
F->tgt_862 = f_nn_48((((rt_int)7LL)), f_cur_line_55());
(*(P590)rt_nil_check(F->n_861)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P590)rt_nil_check(F->tgt_862)).name = f_definable_name_117();
(*(P590)rt_nil_check(F->n_861)).a = F->tgt_862;
f_append_52(&F->head_858, &F->tail_859, F->n_861);
F->more_860 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P590)rt_nil_check(F->x_853)).c = F->head_858;
}
F->result_ = F->x_853;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_125(rstr *w_124) {
  struct f_is_compound_kw_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_124 = w_124;
F->result_ = (((((((rt_str_eq((*F->w_124), rt_str("IF", 2)) || rt_str_eq((*F->w_124), rt_str("CASE", 4))) || rt_str_eq((*F->w_124), rt_str("FOR", 3))) || rt_str_eq((*F->w_124), rt_str("WHILE", 5))) || rt_str_eq((*F->w_124), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_124), rt_str("GUARD", 5))) || rt_str_eq((*F->w_124), rt_str("WAIT", 4))) || rt_str_eq((*F->w_124), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_863 = NULL;
F->ltail_864 = NULL;
F->match_865 = NULL;
F->s_866 = NULL;
while (((f_at_kind_61((((rt_int)1LL))) && (f_kind_at_63(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((*(P585)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_863, &F->ltail_864, f_name_node_77());
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
}
if (((f_at_kind_61((((rt_int)1LL))) && (f_kind_at_63(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P585)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_865 = f_expect_id_76();
}
F->s_866 = f_unlabeled_statement_127();
if ((F->match_865 != NULL)) {
if (((((((((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)22LL))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)23LL)))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)24LL)))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)25LL)))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)26LL)))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)35LL)))) && ((*(P590)rt_nil_check(F->s_866)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P590)rt_nil_check(F->s_866)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P585)rt_nil_check(f_expect_id_76())), (*(P585)rt_nil_check(F->match_865))))) {
f_fail_23((*(P590)rt_nil_check(F->s_866)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P585)rt_nil_check(F->match_865))); b_; }));
}
(*(P590)rt_nil_check(F->s_866)).tag = F->match_865;
}
if ((F->labels_863 != NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_866)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_866;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_867 = f_cur_line_55();
F->x_868 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_132();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_133();
goto ret_;
} else if ((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_134();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_868 = f_nn_48((((rt_int)25LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_868 = f_nn_48((((rt_int)27LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).name = f_expect_id_76();
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_868 = f_nn_48((((rt_int)28LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P590)rt_nil_check(F->x_868)).a = f_expr_89();
}
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_868 = f_nn_48((((rt_int)30LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).name = f_expect_id_76();
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->result_ = f_nn_48((((rt_int)31LL)), F->line_867);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_868 = f_nn_48((((rt_int)34LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_868)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_868)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P590)rt_nil_check(F->x_868)).a = f_postfix_99();
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_869 = NULL;
F->tail_870 = NULL;
F->x_868 = f_nn_48((((rt_int)35LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_871 = NULL;
F->itail_872 = NULL;
F->more_873 = 1;
while (F->more_873) {
f_append_52(&F->invs_871, &F->itail_872, f_postfix_99());
F->more_873 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_869, &F->tail_870, f_arm_131(F->invs_871, f_body_103(), F->line_867));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P590)rt_nil_check(F->x_868)).a = F->head_869;
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_868 = f_nn_48((((rt_int)36LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P590)rt_nil_check(F->x_868)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_868;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_868 = f_nn_48((((rt_int)32LL)), F->line_867);
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_868)).a = f_postfix_99();
if ((!(f_at_kind_61((((rt_int)1LL))) && rt_str_eq((*(P585)rt_nil_check((*(P586)rt_nil_check((*(P588)rt_nil_check(g_toks_618)).p[rt_index(g_tpos_620, (*(P588)rt_nil_check(g_toks_618)).lo, (*(P588)rt_nil_check(g_toks_618)).hi) - (*(P588)rt_nil_check(g_toks_618)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P590)rt_nil_check(F->x_868)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P590)rt_nil_check(F->x_868)).c = f_expr_89();
}
F->result_ = F->x_868;
goto ret_;
}
{
F->target_874 = NULL;
F->target_874 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_868 = f_nn_48((((rt_int)20LL)), F->line_867);
(*(P590)rt_nil_check(F->x_868)).a = F->target_874;
(*(P590)rt_nil_check(F->x_868)).b = f_expr_89();
} else {
F->x_868 = f_nn_48((((rt_int)21LL)), F->line_867);
(*(P590)rt_nil_check(F->x_868)).a = F->target_874;
}
}
F->result_ = F->x_868;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_arm_131(P590 cond_128, P590 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_875 = NULL;
F->x_875 = f_nn_48((((rt_int)60LL)), F->line_130);
(*(P590)rt_nil_check(F->x_875)).a = F->cond_128;
(*(P590)rt_nil_check(F->x_875)).b = F->b_129;
F->result_ = F->x_875;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_876 = NULL;
F->x_876 = f_nn_48((((rt_int)22LL)), f_cur_line_55());
F->head_877 = NULL;
F->tail_878 = NULL;
F->cond_879 = NULL;
F->go_880 = 1;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
F->cond_879 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_877, &F->tail_878, f_arm_131(F->cond_879, f_body_103(), (*(P590)rt_nil_check(F->x_876)).line));
while (F->go_880) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_879 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_877, &F->tail_878, f_arm_131(F->cond_879, f_body_103(), (*(P590)rt_nil_check(F->x_876)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P590)rt_nil_check(F->x_876)).flag = ((rt_int)1LL);
(*(P590)rt_nil_check(F->x_876)).b = f_body_103();
} else {
F->go_880 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P590)rt_nil_check(F->x_876)).a = F->head_877;
F->result_ = F->x_876;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_881 = NULL;
F->x_881 = f_nn_48((((rt_int)23LL)), f_cur_line_55());
F->head_882 = NULL;
F->tail_883 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_881)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_884 = NULL;
F->ltail_885 = NULL;
F->more_886 = 1;
while (F->more_886) {
F->l_887 = NULL;
F->l_887 = f_nn_48((((rt_int)61LL)), f_cur_line_55());
(*(P590)rt_nil_check(F->l_887)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P590)rt_nil_check(F->l_887)).b = f_expr_89();
}
f_append_52(&F->labs_884, &F->ltail_885, F->l_887);
F->more_886 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_882, &F->tail_883, f_arm_131(F->labs_884, f_body_103(), (*(P590)rt_nil_check(F->x_881)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P590)rt_nil_check(F->x_881)).flag = ((rt_int)1LL);
(*(P590)rt_nil_check(F->x_881)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P590)rt_nil_check(F->x_881)).b = F->head_882;
F->result_ = F->x_881;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_888 = NULL;
F->x_888 = f_nn_48((((rt_int)24LL)), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P590)rt_nil_check(F->x_888)).flag = ((rt_int)1LL);
(*(P590)rt_nil_check(F->x_888)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P590)rt_nil_check(F->x_888)).ival = ((rt_int)1LL);
}
(*(P590)rt_nil_check(F->x_888)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P590)rt_nil_check(F->x_888)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P590)rt_nil_check(F->x_888)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_888;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_889 = NULL;
F->x_889 = f_nn_48((((rt_int)26LL)), f_cur_line_55());
F->head_890 = NULL;
F->tail_891 = NULL;
g_tpos_620 = rt_add(g_tpos_620, ((rt_int)1LL));
(*(P590)rt_nil_check(F->x_889)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_892 = NULL;
F->h_892 = f_nn_48((((rt_int)62LL)), f_cur_line_55());
(*(P590)rt_nil_check(F->h_892)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P590)rt_nil_check(F->h_892)).b = f_body_103();
f_append_52(&F->head_890, &F->tail_891, F->h_892);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P590)rt_nil_check(F->x_889)).flag = ((rt_int)1LL);
(*(P590)rt_nil_check(F->x_889)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P590)rt_nil_check(F->x_889)).b = F->head_890;
F->result_ = F->x_889;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_893 = NULL;
F->tail_894 = NULL;
while ((!f_at_kind_61((((rt_int)0LL))))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_893, &F->tail_894, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_893;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_137 = s_137;
F->h_895 = ((rt_int)0LL);
{ rt_int lo897 = ((rt_int)1LL), hi898 = ((*F->s_137)).len;
for (rt_int it899 = lo897; it899 <= hi898; it899++) {
F->i_896 = it899;
F->h_895 = rt_mod(rt_add(rt_mul(F->h_895, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_896)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_895;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_139 = name_139;
F->y_900 = NULL;
F->y_900 = (*(P602)rt_nil_check(g_table_622)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
if ((g_genv_623 != NULL)) {
while ((F->y_900 != NULL)) {
if ((((*(P598)rt_nil_check(F->y_900)).depth >= g_gdepth_655) && rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_900)).name)), (*F->name_139)))) {
F->result_ = F->y_900;
goto ret_;
}
F->y_900 = (*(P598)rt_nil_check(F->y_900)).chain;
}
F->y_900 = (*(P602)rt_nil_check(g_genv_623)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P602)rt_nil_check(g_genv_623)).lo, (*(P602)rt_nil_check(g_genv_623)).hi) - (*(P602)rt_nil_check(g_genv_623)).lo];
while ((F->y_900 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_900)).name)), (*F->name_139))) {
F->result_ = F->y_900;
goto ret_;
}
F->y_900 = (*(P598)rt_nil_check(F->y_900)).chain;
}
F->y_900 = (*(P602)rt_nil_check(g_table_622)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
}
while ((F->y_900 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_900)).name)), (*F->name_139))) {
F->result_ = F->y_900;
goto ret_;
}
F->y_900 = (*(P598)rt_nil_check(F->y_900)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_lookup_decl_142(P590 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_141 = d_141;
F->y_901 = NULL;
F->y_901 = (*(P602)rt_nil_check(g_table_622)).p[rt_index(f_hash_138(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_141)).name))), (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
while ((F->y_901 != NULL)) {
if (((*(P598)rt_nil_check(F->y_901)).decl == F->d_141)) {
F->result_ = F->y_901;
goto ret_;
}
F->y_901 = (*(P598)rt_nil_check(F->y_901)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_145(P598 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_902 = f_hash_138(&(*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_143)).name)));
F->z_903 = NULL;
F->z_903 = (*(P602)rt_nil_check(g_table_622)).p[rt_index(F->h_902, (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
while ((F->z_903 != NULL)) {
if (((((*(P598)rt_nil_check(F->z_903)).depth == g_depth_625) && rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->z_903)).name)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_903)) && ((*(P598)rt_nil_check(F->z_903)).kind == (*(P598)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P598)rt_nil_check(F->y_143)).params, (*(P598)rt_nil_check(F->z_903)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_903 = (*(P598)rt_nil_check(F->z_903)).chain;
}
(*(P598)rt_nil_check(F->y_143)).depth = g_depth_625;
(*(P598)rt_nil_check(F->y_143)).chain = (*(P602)rt_nil_check(g_table_622)).p[rt_index(F->h_902, (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
(*(P602)rt_nil_check(g_table_622)).p[rt_index(F->h_902, (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo] = F->y_143;
(*(P598)rt_nil_check(F->y_143)).stack = g_scope_stack_626;
g_scope_stack_626 = F->y_143;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_147(P598 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_146 = y_146;
F->result_ = ((((*(P598)rt_nil_check(F->y_146)).kind == (((rt_int)3LL))) || ((*(P598)rt_nil_check(F->y_146)).kind == (((rt_int)4LL)))) || ((*(P598)rt_nil_check(F->y_146)).kind == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_150(P600 a_148, P600 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_904 = NULL;
F->x_904 = F->a_148;
F->y_905 = NULL;
F->y_905 = F->b_149;
while (((F->x_904 != NULL) && (F->y_905 != NULL))) {
if ((!f_same_193((*(P600)rt_nil_check(F->x_904)).t, (*(P600)rt_nil_check(F->y_905)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_904 = (*(P600)rt_nil_check(F->x_904)).next;
F->y_905 = (*(P600)rt_nil_check(F->y_905)).next;
}
F->result_ = ((F->x_904 == NULL) && (F->y_905 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_625 = rt_add(g_depth_625, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_626 != NULL) && ((*(P598)rt_nil_check(g_scope_stack_626)).depth == g_depth_625))) {
(*(P602)rt_nil_check(g_table_622)).p[rt_index(f_hash_138(&(*(P585)rt_nil_check((*(P598)rt_nil_check(g_scope_stack_626)).name))), (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo] = (*(P598)rt_nil_check(g_scope_stack_626)).chain;
g_scope_stack_626 = (*(P598)rt_nil_check(g_scope_stack_626)).stack;
}
g_depth_625 = rt_sub(g_depth_625, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P598 f_new_sym_155(rt_int kind_153, P585 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_906 = NULL;
{ R599 *cell907 = rt_alloc(sizeof(R599));
(*cell907).name = NULL;
(*cell907).t = NULL;
(*cell907).c = NULL;
(*cell907).access = NULL;
(*cell907).cname = NULL;
(*cell907).st = NULL;
(*cell907).decl = NULL;
(*cell907).params = NULL;
(*cell907).result = NULL;
(*cell907).members = NULL;
(*cell907).mnext = NULL;
(*cell907).binds = NULL;
(*cell907).insts = NULL;
(*cell907).env = NULL;
(*cell907).chain = NULL;
(*cell907).stack = NULL;
(*cell907).owner = NULL;
(*cell907).gctx = NULL;
(*cell907).mv = NULL;
F->y_906 = cell907;
}
(*(P598)rt_nil_check(F->y_906)).kind = F->kind_153;
(*(P598)rt_nil_check(F->y_906)).name = F->name_154;
F->result_ = F->y_906;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_156 = kind_156;
F->t_908 = NULL;
{ R595 *cell909 = rt_alloc(sizeof(R595));
(*cell909).name = NULL;
(*cell909).lits = NULL;
(*cell909).elem = NULL;
(*cell909).idx = NULL;
(*cell909).idx2 = NULL;
(*cell909).elemcons = NULL;
(*cell909).elemst = NULL;
(*cell909).under = NULL;
(*cell909).tparams = NULL;
(*cell909).ocap = NULL;
(*cell909).fields = NULL;
(*cell909).target = NULL;
(*cell909).decl = NULL;
(*cell909).cname = NULL;
(*cell909).initp = NULL;
(*cell909).finalp = NULL;
(*cell909).tpsyms = NULL;
(*cell909).gen = NULL;
(*cell909).gbinds = NULL;
(*cell909).next = NULL;
F->t_908 = cell909;
}
(*(P594)rt_nil_check(F->t_908)).kind = F->kind_156;
F->result_ = F->t_908;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P592 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_910 = NULL;
{ R593 *cell911 = rt_alloc(sizeof(R593));
(*cell911).lo = NULL;
(*cell911).hi = NULL;
(*cell911).lo2 = NULL;
(*cell911).hi2 = NULL;
(*cell911).slen = NULL;
(*cell911).args = NULL;
(*cell911).prec = NULL;
F->c_910 = cell911;
}
F->result_ = F->c_910;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_160(P594 t_159) {
  struct f_scalar_kind_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_159 = t_159;
F->result_ = ((F->t_159 != NULL) && ((((*(P594)rt_nil_check(F->t_159)).kind == (((rt_int)1LL))) || ((*(P594)rt_nil_check(F->t_159)).kind == (((rt_int)3LL)))) || ((*(P594)rt_nil_check(F->t_159)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_162(P594 t_161) {
  struct f_bound_ctype_162fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_161 = t_161;
if (((*(P594)rt_nil_check(F->t_161)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_165(P592 c_163, rstr *b_164) {
  struct f_cbound_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_163 = c_163;
F->b_164 = b_164;
F->p_912 = NULL;
F->p_912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P592)rt_nil_check(F->c_163)).dyn) || ((*(P592)rt_nil_check(F->c_163)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_164);
goto ret_;
}
{ rt_int lo914 = ((rt_int)1LL), hi915 = rt_sub(g_cur_level_639, (*(P592)rt_nil_check(F->c_163)).lvl);
for (rt_int it916 = lo914; it916 <= hi915; it916++) {
F->i_913 = it916;
F->p_912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->p_912)), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->p_912)), rt_str("->", 2)), (*F->b_164));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_167(P592 c_166) {
  struct f_clo_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_166 = c_166;
F->result_ = f_cbound_165(F->c_166, &(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_166)).lo)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_169(P592 c_168) {
  struct f_chi_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_168 = c_168;
F->result_ = f_cbound_165(F->c_168, &(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_168)).hi)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_172(P594 t_170, P592 c_171) {
  struct f_sub_lo_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_170 = t_170;
F->c_171 = c_171;
if (((F->c_171 != NULL) && ((*(P592)rt_nil_check(F->c_171)).lo != NULL))) {
F->result_ = f_clo_167(F->c_171);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_170)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_170)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_175(P594 t_173, P592 c_174) {
  struct f_sub_hi_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_173 = t_173;
F->c_174 = c_174;
if (((F->c_174 != NULL) && ((*(P592)rt_nil_check(F->c_174)).lo != NULL))) {
F->result_ = f_chi_169(F->c_174);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_173)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_173)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(F->t_173)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_178(rstr *name_176, rstr *ct_177) {
  struct f_raw_storage_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_176 = name_176;
F->ct_177 = ct_177;
if ((!g_in_func_638)) {
F->g_917 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_176)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_177)), rt_str(" ", 1)), F->g_917), rt_str(";", 1)); b_; }));
g_st_field_644 = f_mk_3(&F->g_917);
F->result_ = F->g_917;
goto ret_;
}
{
F->f_918 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_176), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_177)), rt_str(" ", 1)), F->f_918), rt_str(";", 1)); b_; }));
g_st_field_644 = f_mk_3(&F->f_918);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_918);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P592 f_copy_cons_180(P592 c_179) {
  struct f_copy_cons_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_179 = c_179;
F->r_919 = NULL;
{ R593 *cell920 = rt_alloc(sizeof(R593));
(*cell920).lo = NULL;
(*cell920).hi = NULL;
(*cell920).lo2 = NULL;
(*cell920).hi2 = NULL;
(*cell920).slen = NULL;
(*cell920).args = NULL;
(*cell920).prec = NULL;
F->r_919 = cell920;
}
(*(P592)rt_nil_check(F->r_919)).lo = (*(P592)rt_nil_check(F->c_179)).lo;
(*(P592)rt_nil_check(F->r_919)).hi = (*(P592)rt_nil_check(F->c_179)).hi;
(*(P592)rt_nil_check(F->r_919)).lo2 = (*(P592)rt_nil_check(F->c_179)).lo2;
(*(P592)rt_nil_check(F->r_919)).hi2 = (*(P592)rt_nil_check(F->c_179)).hi2;
(*(P592)rt_nil_check(F->r_919)).slen = (*(P592)rt_nil_check(F->c_179)).slen;
(*(P592)rt_nil_check(F->r_919)).mlo = (*(P592)rt_nil_check(F->c_179)).mlo;
(*(P592)rt_nil_check(F->r_919)).mhi = (*(P592)rt_nil_check(F->c_179)).mhi;
(*(P592)rt_nil_check(F->r_919)).hasm = (*(P592)rt_nil_check(F->c_179)).hasm;
(*(P592)rt_nil_check(F->r_919)).args = (*(P592)rt_nil_check(F->c_179)).args;
(*(P592)rt_nil_check(F->r_919)).dyn = (*(P592)rt_nil_check(F->c_179)).dyn;
(*(P592)rt_nil_check(F->r_919)).lvl = (*(P592)rt_nil_check(F->c_179)).lvl;
(*(P592)rt_nil_check(F->r_919)).prec = (*(P592)rt_nil_check(F->c_179)).prec;
F->result_ = F->r_919;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P592 f_freeze_183(P592 c_181, P594 t_182) {
  struct f_freeze_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_181 = c_181;
F->t_182 = t_182;
F->r_921 = NULL;
F->saved_field_922 = NULL;
F->saved_field_922 = g_st_field_644;
if ((((((F->c_181 == NULL) || ((*(P592)rt_nil_check(F->c_181)).lo == NULL)) || (*(P592)rt_nil_check(F->c_181)).hasm) || (*(P592)rt_nil_check(F->c_181)).dyn) || (!f_scalar_kind_160(F->t_182)))) {
F->result_ = F->c_181;
goto ret_;
}
F->r_921 = f_copy_cons_180(F->c_181);
{
F->ct_923 = rt_str_copy(f_bound_ctype_162(F->t_182));
F->la_924 = rt_str_copy(f_raw_storage_178(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_923));
F->lf_925 = rt_str_copy((*(P585)rt_nil_check(g_st_field_644)));
F->ha_926 = rt_str_copy(f_raw_storage_178(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_923));
F->hf_927 = rt_str_copy((*(P585)rt_nil_check(g_st_field_644)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_924, rt_str(" = ", 3)), f_clo_167(F->c_181)), rt_str("; ", 2)), F->ha_926), rt_str(" = ", 3)), f_chi_169(F->c_181)), rt_str(";", 1)); b_; }));
if (g_in_func_638) {
(*(P592)rt_nil_check(F->r_921)).lo = f_mk_3(&F->lf_925);
(*(P592)rt_nil_check(F->r_921)).hi = f_mk_3(&F->hf_927);
(*(P592)rt_nil_check(F->r_921)).dyn = 1;
(*(P592)rt_nil_check(F->r_921)).lvl = g_cur_level_639;
} else {
(*(P592)rt_nil_check(F->r_921)).lo = f_mk_3(&F->la_924);
(*(P592)rt_nil_check(F->r_921)).hi = f_mk_3(&F->ha_926);
(*(P592)rt_nil_check(F->r_921)).dyn = 0;
}
}
g_st_field_644 = F->saved_field_922;
F->result_ = F->r_921;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_187(P594 t_184, P592 c_185, rstr *v_186) {
  struct f_checked_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_184 = t_184;
F->c_185 = c_185;
F->v_186 = v_186;
if (((F->c_185 == NULL) || (!f_scalar_kind_160(F->t_184)))) {
F->result_ = (*F->v_186);
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_184)).kind != (((rt_int)3LL))) && (*(P592)rt_nil_check(F->c_185)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_186)), rt_str(", ", 2)), f_itos_7((*(P592)rt_nil_check(F->c_185)).mlo)), rt_str(", ", 2)), f_itos_7((*(P592)rt_nil_check(F->c_185)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P592)rt_nil_check(F->c_185)).lo == NULL)) {
F->result_ = (*F->v_186);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_184)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_186)), rt_str(", ", 2)), f_clo_167(F->c_185)), rt_str(", ", 2)), f_chi_169(F->c_185)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_186)), rt_str(", ", 2)), f_clo_167(F->c_185)), rt_str(", ", 2)), f_chi_169(F->c_185)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_190(P590 a_188, P590 b_189) {
  struct f_same_lits_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_188 = a_188;
F->b_189 = b_189;
F->x_928 = NULL;
F->x_928 = F->a_188;
F->y_929 = NULL;
F->y_929 = F->b_189;
while (((F->x_928 != NULL) && (F->y_929 != NULL))) {
if ((!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->x_928)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->y_929)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_928 = (*(P590)rt_nil_check(F->x_928)).next;
F->y_929 = (*(P590)rt_nil_check(F->y_929)).next;
}
F->result_ = ((F->x_928 == NULL) && (F->y_929 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_193(P594 a_191, P594 b_192) {
  struct f_same_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_191 = a_191;
F->b_192 = b_192;
if ((F->a_191 == F->b_192)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_191 == NULL) || (F->b_192 == NULL)) || ((*(P594)rt_nil_check(F->a_191)).kind != (*(P594)rt_nil_check(F->b_192)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)1LL))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)2LL)))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)3LL)))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)5LL)))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)9LL)))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_190((*(P594)rt_nil_check(F->a_191)).lits, (*(P594)rt_nil_check(F->b_192)).lits);
goto ret_;
}
if (((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)6LL)))) {
if ((((*(P594)rt_nil_check(F->a_191)).idx2 == NULL) != ((*(P594)rt_nil_check(F->b_192)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_193((*(P594)rt_nil_check(F->a_191)).elem, (*(P594)rt_nil_check(F->b_192)).elem) && f_same_193((*(P594)rt_nil_check(F->a_191)).idx, (*(P594)rt_nil_check(F->b_192)).idx));
goto ret_;
}
if ((((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)16LL))) || ((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_193((*(P594)rt_nil_check(F->a_191)).elem, (*(P594)rt_nil_check(F->b_192)).elem);
goto ret_;
}
if (((*(P594)rt_nil_check(F->a_191)).kind == (((rt_int)7LL)))) {
F->f_930 = NULL;
F->f_930 = (*(P594)rt_nil_check(F->a_191)).fields;
F->g_931 = NULL;
F->g_931 = (*(P594)rt_nil_check(F->b_192)).fields;
while (((F->f_930 != NULL) && (F->g_931 != NULL))) {
if (((!rt_str_eq((*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_930)).name)), (*(P585)rt_nil_check((*(P596)rt_nil_check(F->g_931)).name)))) || (!f_same_193((*(P596)rt_nil_check(F->f_930)).t, (*(P596)rt_nil_check(F->g_931)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_930 = (*(P596)rt_nil_check(F->f_930)).next;
F->g_931 = (*(P596)rt_nil_check(F->g_931)).next;
}
F->result_ = ((F->f_930 == NULL) && (F->g_931 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_base_of_195(P594 t_194) {
  struct f_base_of_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_194 = t_194;
if ((((F->t_194 != NULL) && ((*(P594)rt_nil_check(F->t_194)).kind == (((rt_int)15LL)))) && ((*(P594)rt_nil_check(F->t_194)).tparams == NULL))) {
F->result_ = f_base_of_195((*(P594)rt_nil_check(F->t_194)).under);
goto ret_;
}
F->result_ = F->t_194;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P592 f_base_cons_198(P594 t_196, P592 c_197) {
  struct f_base_cons_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((((F->t_196 != NULL) && ((*(P594)rt_nil_check(F->t_196)).kind == (((rt_int)15LL)))) && ((*(P594)rt_nil_check(F->t_196)).tparams == NULL)) && ((*(P594)rt_nil_check(F->t_196)).elemcons != NULL))) {
F->result_ = f_base_cons_198((*(P594)rt_nil_check(F->t_196)).under, (*(P594)rt_nil_check(F->t_196)).elemcons);
goto ret_;
}
F->result_ = F->c_197;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_200(P594 t_199) {
  struct f_kind_name_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
{ rt_int sel932 = (*(P594)rt_nil_check(F->t_199)).kind;
if (0 || (sel932 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel932 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel932 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel932 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel932 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel932 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel932 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel932 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_199)).name)));
goto ret_;
} else if (0 || (sel932 == (((rt_int)11LL)))) {
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

static void f_check_type_204(P594 got_201, P594 want_202, rt_int line_203) {
  struct f_check_type_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_201 = got_201;
F->want_202 = want_202;
F->line_203 = line_203;
if ((F->want_202 == NULL)) {
goto ret_;
}
if ((((*(P594)rt_nil_check(F->got_201)).kind == (((rt_int)11LL))) && ((*(P594)rt_nil_check(F->want_202)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_193(F->got_201, F->want_202))) {
f_fail_23(F->line_203, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_200(F->got_201)), rt_str(" where ", 7)), f_kind_name_200(F->want_202)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_206(P594 t_205) {
  struct f_ctype_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_205 = t_205;
{ rt_int sel933 = (*(P594)rt_nil_check(F->t_205)).kind;
if (0 || (sel933 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel933 == (((rt_int)2LL))) || (sel933 == (((rt_int)4LL))) || (sel933 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel933 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel933 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel933 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel933 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel933 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel933 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel933 == (((rt_int)16LL)))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P594)rt_nil_check(F->t_205)).cname == NULL)) {
f_declare_ctype_210(F->t_205);
} else if (((((*(P594)rt_nil_check(F->t_205)).kind == (((rt_int)7LL))) && (*(P594)rt_nil_check(F->t_205)).forward) && (!(*(P594)rt_nil_check(F->t_205)).defined))) {
(*(P594)rt_nil_check(F->t_205)).defined = 1;
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_205)).cname))), rt_str(" { ", 3)), f_field_decls_208(F->t_205)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_205)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_208(P594 t_207) {
  struct f_field_decls_208fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_207 = t_207;
F->f_934 = NULL;
F->f_934 = (*(P594)rt_nil_check(F->t_207)).fields;
F->s_935 = NULL;
F->s_935 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_934 != NULL)) {
F->s_935 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->s_935)), f_ctype_206((*(P596)rt_nil_check(F->f_934)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_934)).name)))), rt_str("; ", 2)); b_; }));
F->f_934 = (*(P596)rt_nil_check(F->f_934)).next;
}
F->result_ = (*(P585)rt_nil_check(F->s_935));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_210(P594 t_209) {
  struct f_declare_ctype_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_209 = t_209;
F->u_936 = NULL;
F->u_936 = g_all_types_627;
if ((((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)8LL))) && ((*(P594)rt_nil_check(F->t_209)).target == NULL))) {
f_finish_ptr_327(F->t_209);
if (((*(P594)rt_nil_check(F->t_209)).cname != NULL)) {
goto ret_;
}
}
if (((*(P594)rt_nil_check(F->t_209)).kind != (((rt_int)8LL)))) {
while ((F->u_936 != NULL)) {
if ((((*(P594)rt_nil_check(F->u_936)).kind == (*(P594)rt_nil_check(F->t_209)).kind) && f_same_193(F->u_936, F->t_209))) {
(*(P594)rt_nil_check(F->t_209)).cname = (*(P594)rt_nil_check(F->u_936)).cname;
goto ret_;
}
F->u_936 = (*(P594)rt_nil_check(F->u_936)).next;
}
}
if ((((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_209)).tparams == NULL))) {
(*(P594)rt_nil_check(F->t_209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_206((*(P594)rt_nil_check(F->t_209)).under); b_; }));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)6LL)))) {
(*(P594)rt_nil_check(F->t_209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)15LL)))) {
(*(P594)rt_nil_check(F->t_209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)7LL)))) {
(*(P594)rt_nil_check(F->t_209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P594)rt_nil_check(F->t_209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P594)rt_nil_check(F->t_209)).next = g_all_types_627;
g_all_types_627 = F->t_209;
if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)8LL)))) {
F->target_937 = NULL;
F->target_937 = (*(P594)rt_nil_check(F->t_209)).target;
if (((*(P594)rt_nil_check(F->target_937)).kind == (((rt_int)7LL)))) {
if (((*(P594)rt_nil_check(F->target_937)).cname == NULL)) {
(*(P594)rt_nil_check(F->target_937)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P594)rt_nil_check(F->target_937)).next = g_all_types_627;
g_all_types_627 = F->target_937;
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->target_937)).cname))), rt_str(" ", 1)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->target_937)).cname))), rt_str(";", 1)); b_; }));
(*(P594)rt_nil_check(F->target_937)).forward = 1;
}
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->target_937)).cname))), rt_str(" *", 2)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_206(F->target_937)), rt_str(" *", 2)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" ", 1)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_206((*(P594)rt_nil_check(F->t_209)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_209)).kind == (((rt_int)15LL)))) {
F->p_938 = NULL;
F->p_938 = (*(P594)rt_nil_check(F->t_209)).tparams;
F->fs_939 = NULL;
F->fs_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_938 != NULL)) {
F->fs_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->fs_939)), f_ctype_206(f_tparam_type_246(F->t_209, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_938)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_938)).name)))), rt_str("; ", 2)); b_; }));
F->p_938 = (*(P590)rt_nil_check(F->p_938)).next;
}
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" ", 1)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" {", 2)), (*(P585)rt_nil_check(F->fs_939))), f_ctype_206((*(P594)rt_nil_check(F->t_209)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" ", 1)), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(";", 1)); b_; }));
(*(P594)rt_nil_check(F->t_209)).defined = 1;
f_put_27(g_out_types_629, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_209)).cname))), rt_str(" { ", 3)), f_field_decls_208(F->t_209)), rt_str(" };", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_init_ascii_211(void) {
  struct f_init_ascii_211fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_940 = NULL;
F->tail_941 = NULL;
F->start_942 = ((rt_int)1LL);
{ rt_int lo944 = ((rt_int)1LL), hi945 = ((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len;
for (rt_int it946 = lo944; it946 <= hi945; it946++) {
F->i_943 = it946;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_943) == 32)) {
F->lit_947 = NULL;
F->lit_947 = f_nn_48((((rt_int)4LL)), ((rt_int)0LL));
(*(P590)rt_nil_check(F->lit_947)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_942, rt_sub(F->i_943, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_940, &F->tail_941, F->lit_947);
F->start_942 = rt_add(F->i_943, ((rt_int)1LL));
}
}
}
g_ty_ascii_665 = f_new_typ_157((((rt_int)4LL)));
(*(P594)rt_nil_check(g_ty_ascii_665)).lits = F->head_940;
(*(P594)rt_nil_check(g_ty_ascii_665)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_214(P590 lits_212, rstr *name_213) {
  struct f_lit_index_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_212 = lits_212;
F->name_213 = name_213;
F->i_948 = ((rt_int)0LL);
F->l_949 = NULL;
F->l_949 = F->lits_212;
while ((F->l_949 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->l_949)).name)), (*F->name_213))) {
F->result_ = F->i_948;
goto ret_;
}
F->i_948 = rt_add(F->i_948, ((rt_int)1LL));
F->l_949 = (*(P590)rt_nil_check(F->l_949)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_resolve_subtype_217(P590 st_215, P592 *c_216) {
  struct f_resolve_subtype_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_215 = st_215;
F->c_216 = c_216;
F->c_216v = *F->c_216;
F->t_950 = NULL;
F->dummy_952 = NULL;
F->c_216v = f_new_cons_158();
{ rt_int sel953 = (*(P590)rt_nil_check(F->st_215)).kind;
if (0 || (sel953 == (((rt_int)70LL)))) {
if (((*(P590)rt_nil_check(F->st_215)).a != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).a, g_ty_int_662, &F->dummy_952); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).b, g_ty_int_662, &F->dummy_952); b_; }));
(*(P592)rt_nil_check(F->c_216v)).mlo = f_manifest_253((*(P590)rt_nil_check(F->st_215)).a, &F->ok_951);
(*(P592)rt_nil_check(F->c_216v)).hasm = F->ok_951;
(*(P592)rt_nil_check(F->c_216v)).mhi = f_manifest_253((*(P590)rt_nil_check(F->st_215)).b, &F->ok_951);
(*(P592)rt_nil_check(F->c_216v)).hasm = ((*(P592)rt_nil_check(F->c_216v)).hasm && F->ok_951);
}
F->result_ = g_ty_int_662;
goto ret_;
} else if (0 || (sel953 == (((rt_int)71LL)))) {
if (((*(P590)rt_nil_check(F->st_215)).a != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).a, g_ty_int_662, &F->dummy_952); b_; }));
}
if (((*(P590)rt_nil_check(F->st_215)).b != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).b, g_ty_float_664, &F->dummy_952); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).c, g_ty_float_664, &F->dummy_952); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hasm = (f_float_lit_219((*(P590)rt_nil_check(F->st_215)).b) && f_float_lit_219((*(P590)rt_nil_check(F->st_215)).c));
}
F->result_ = g_ty_float_664;
goto ret_;
} else if (0 || (sel953 == (((rt_int)72LL)))) {
F->t_950 = f_new_typ_157((((rt_int)4LL)));
(*(P594)rt_nil_check(F->t_950)).lits = (*(P590)rt_nil_check(F->st_215)).a;
if (((*(P590)rt_nil_check(F->st_215)).b != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).b, F->t_950, &F->dummy_952); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).c, F->t_950, &F->dummy_952); b_; }));
if ((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).b)).kind == (((rt_int)4LL))) && ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).c)).kind == (((rt_int)4LL))))) {
(*(P592)rt_nil_check(F->c_216v)).mlo = f_lit_index_214((*(P594)rt_nil_check(F->t_950)).lits, &(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).b)).name)));
(*(P592)rt_nil_check(F->c_216v)).mhi = f_lit_index_214((*(P594)rt_nil_check(F->t_950)).lits, &(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).c)).name)));
(*(P592)rt_nil_check(F->c_216v)).hasm = 1;
}
}
F->result_ = F->t_950;
goto ret_;
} else if (0 || (sel953 == (((rt_int)73LL)))) {
F->t_950 = f_resolve_subtype_217((*(P590)rt_nil_check(F->st_215)).a, &F->c_216v);
if ((!f_same_193(F->t_950, g_ty_ascii_665))) {
f_fail_23((*(P590)rt_nil_check(F->st_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_216v = f_new_cons_158();
if (((*(P590)rt_nil_check(F->st_215)).b != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).b, g_ty_int_662, &F->dummy_952); b_; }));
}
F->result_ = g_ty_string_666;
goto ret_;
} else if (0 || (sel953 == (((rt_int)74LL)))) {
if ((f_list_len_54((*(P590)rt_nil_check(F->st_215)).a) > ((rt_int)2LL))) {
f_fail_23((*(P590)rt_nil_check(F->st_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_954 = NULL;
F->ic2_955 = NULL;
F->ec_956 = NULL;
F->it_957 = NULL;
F->it_957 = f_resolve_subtype_217((*(P590)rt_nil_check(F->st_215)).a, &F->ic_954);
F->et_958 = NULL;
F->et_958 = f_resolve_subtype_217((*(P590)rt_nil_check(F->st_215)).b, &F->ec_956);
F->ic_954 = f_base_cons_198(F->it_957, F->ic_954);
F->t_950 = f_new_typ_157((((rt_int)6LL)));
(*(P594)rt_nil_check(F->t_950)).idx = F->it_957;
(*(P594)rt_nil_check(F->t_950)).elem = F->et_958;
(*(P594)rt_nil_check(F->t_950)).elemcons = F->ec_956;
(*(P594)rt_nil_check(F->t_950)).elemst = (*(P590)rt_nil_check(F->st_215)).b;
if (((*(P592)rt_nil_check(F->ic_954)).lo != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo = (*(P592)rt_nil_check(F->ic_954)).lo;
(*(P592)rt_nil_check(F->c_216v)).hi = (*(P592)rt_nil_check(F->ic_954)).hi;
} else if (((*(P594)rt_nil_check(f_base_of_195(F->it_957))).kind == (((rt_int)4LL)))) {
(*(P592)rt_nil_check(F->c_216v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(f_base_of_195(F->it_957))).lits), ((rt_int)1LL))); b_; }));
}
(*(P592)rt_nil_check(F->c_216v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).a)).next != NULL)) {
(*(P594)rt_nil_check(F->t_950)).idx2 = f_resolve_subtype_217((*(P590)rt_nil_check((*(P590)rt_nil_check(F->st_215)).a)).next, &F->ic2_955);
if (((*(P592)rt_nil_check(F->ic2_955)).lo != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo2 = (*(P592)rt_nil_check(F->ic2_955)).lo;
(*(P592)rt_nil_check(F->c_216v)).hi2 = (*(P592)rt_nil_check(F->ic2_955)).hi;
} else if (((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_950)).idx2)).kind == (((rt_int)4LL)))) {
(*(P592)rt_nil_check(F->c_216v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P592)rt_nil_check(F->c_216v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_950)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_950;
goto ret_;
} else if (0 || (sel953 == (((rt_int)77LL)))) {
F->t_950 = f_new_typ_157((((rt_int)16LL)));
{
F->ec_959 = NULL;
(*(P594)rt_nil_check(F->t_950)).elem = f_resolve_subtype_217((*(P590)rt_nil_check(F->st_215)).a, &F->ec_959);
(*(P594)rt_nil_check(F->t_950)).elemcons = F->ec_959;
}
F->result_ = F->t_950;
goto ret_;
} else if (0 || (sel953 == (((rt_int)75LL)))) {
F->t_950 = f_new_typ_157((((rt_int)7LL)));
{
F->comp_960 = NULL;
F->comp_960 = (*(P590)rt_nil_check(F->st_215)).a;
F->tail_961 = NULL;
while ((F->comp_960 != NULL)) {
F->cc_962 = NULL;
F->f_963 = NULL;
{ R597 *cell964 = rt_alloc(sizeof(R597));
(*cell964).name = NULL;
(*cell964).t = NULL;
(*cell964).c = NULL;
(*cell964).st = NULL;
(*cell964).next = NULL;
F->f_963 = cell964;
}
(*(P596)rt_nil_check(F->f_963)).name = (*(P590)rt_nil_check(F->comp_960)).name;
(*(P596)rt_nil_check(F->f_963)).t = f_resolve_subtype_217((*(P590)rt_nil_check(F->comp_960)).a, &F->cc_962);
(*(P596)rt_nil_check(F->f_963)).c = F->cc_962;
(*(P596)rt_nil_check(F->f_963)).st = (*(P590)rt_nil_check(F->comp_960)).a;
if ((F->tail_961 == NULL)) {
(*(P594)rt_nil_check(F->t_950)).fields = F->f_963;
} else {
(*(P596)rt_nil_check(F->tail_961)).next = F->f_963;
}
F->tail_961 = F->f_963;
F->comp_960 = (*(P590)rt_nil_check(F->comp_960)).next;
}
}
F->result_ = F->t_950;
goto ret_;
} else if (0 || (sel953 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_668;
goto ret_;
} else if (0 || (sel953 == (((rt_int)78LL)))) {
if (((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P598)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_965 = NULL;
F->gt_965 = f_copy_node_521((*(P590)rt_nil_check(F->st_215)).a);
(*(P590)rt_nil_check(F->gt_965)).next = NULL;
F->result_ = f_instantiate_type_470(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_965, (*(P590)rt_nil_check(F->st_215)).b, &F->c_216v, (*(P590)rt_nil_check(F->st_215)).line);
goto ret_;
}
{
F->ec_966 = NULL;
F->t_950 = f_new_typ_157((((rt_int)12LL)));
(*(P594)rt_nil_check(F->t_950)).elem = f_resolve_subtype_217((*(P590)rt_nil_check(F->st_215)).a, &F->ec_966);
(*(P594)rt_nil_check(F->t_950)).elemcons = F->ec_966;
if (((*(P590)rt_nil_check(F->st_215)).b != NULL)) {
(*(P592)rt_nil_check(F->c_216v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->st_215)).b, g_ty_int_662, &F->dummy_952); b_; }));
}
}
F->result_ = F->t_950;
goto ret_;
} else if (0 || (sel953 == (((rt_int)80LL)))) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_663;
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_665;
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_670;
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_671;
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_672;
goto ret_;
}
{
F->y_967 = NULL;
F->y_967 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)));
if ((F->y_967 == NULL)) {
f_fail_23((*(P590)rt_nil_check(F->st_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name))); b_; }));
}
if ((((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)10LL))) && (((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_967)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_967)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_470(F->y_967, (*(P590)rt_nil_check(F->st_215)).a, (*(P590)rt_nil_check(F->st_215)).b, &F->c_216v, (*(P590)rt_nil_check(F->st_215)).line);
goto ret_;
}
if (((((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)5LL))) && ((*(P598)rt_nil_check(F->y_967)).t != NULL)) && ((*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_967)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_231(F->y_967, F->st_215, &F->c_216v);
goto ret_;
}
if (((((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)6LL))) || ((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)5LL)))) && ((*(P598)rt_nil_check(F->y_967)).t != NULL))) {
if (((*(P598)rt_nil_check(F->y_967)).c != NULL)) {
F->c_216v = (*(P598)rt_nil_check(F->y_967)).c;
}
F->result_ = (*(P598)rt_nil_check(F->y_967)).t;
goto ret_;
}
if (((((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)5LL))) && ((*(P598)rt_nil_check(F->y_967)).decl != NULL)) && ((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_967)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_231(F->y_967, F->st_215, &F->c_216v);
goto ret_;
}
if ((((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)6LL))) || ((*(P598)rt_nil_check(F->y_967)).kind == (((rt_int)5LL))))) {
F->result_ = f_resolve_subtype_217((*(P598)rt_nil_check(F->y_967)).st, &F->c_216v);
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->st_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_215)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P590)rt_nil_check(F->st_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_216) = F->c_216v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_219(P590 e_218) {
  struct f_float_lit_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_218 = e_218;
if ((((*(P590)rt_nil_check(F->e_218)).kind == (((rt_int)8LL))) && (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_218)).name)), rt_str("-", 1)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_218)).name)), rt_str("+", 1))))) {
F->result_ = f_float_lit_219((*(P590)rt_nil_check(F->e_218)).a);
goto ret_;
}
F->result_ = (((*(P590)rt_nil_check(F->e_218)).kind == (((rt_int)2LL))) || ((*(P590)rt_nil_check(F->e_218)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_221(P594 t_220) {
  struct f_opened_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_220 = t_220;
F->c_968 = NULL;
F->c_968 = g_caps_641;
if (((((*(P594)rt_nil_check(F->t_220)).kind != (((rt_int)15LL))) || ((*(P594)rt_nil_check(F->t_220)).ocap == NULL)) || ((*(P590)rt_nil_check((*(P594)rt_nil_check(F->t_220)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_968 != NULL)) {
if (((*(P614)rt_nil_check(F->c_968)).d == (*(P594)rt_nil_check(F->t_220)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_968 = (*(P614)rt_nil_check(F->c_968)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_225(rstr *s_222, rstr *pat_223, rstr *r_224) {
  struct f_replace_all_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_222 = s_222;
F->pat_223 = pat_223;
F->r_224 = r_224;
F->i_969 = ((rt_int)1LL);
if (((((*F->pat_223)).len == ((rt_int)0LL)) || (((*F->s_222)).len < ((*F->pat_223)).len))) {
F->result_ = (*F->s_222);
goto ret_;
}
while ((rt_sub(rt_add(F->i_969, ((*F->pat_223)).len), ((rt_int)1LL)) <= ((*F->s_222)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_222), F->i_969, rt_sub(rt_add(F->i_969, ((*F->pat_223)).len), ((rt_int)1LL))), (*F->pat_223))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_222), ((rt_int)1LL), rt_sub(F->i_969, ((rt_int)1LL))), (*F->r_224)), f_replace_all_225(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_222), rt_add(F->i_969, ((*F->pat_223)).len), ((*F->s_222)).len); b_; }), &(*F->pat_223), &(*F->r_224)));
goto ret_;
}
F->i_969 = rt_add(F->i_969, ((rt_int)1LL));
}
F->result_ = (*F->s_222);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_227(rstr *s_226) {
  struct f_subst_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_226 = s_226;
F->l_970 = NULL;
F->l_970 = g_psub_643;
F->r_971 = NULL;
F->r_971 = f_mk_3(&(*F->s_226));
while ((F->l_970 != NULL)) {
F->r_971 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_225(&(*(P585)rt_nil_check(F->r_971)), &(*(P585)rt_nil_check((*(P608)rt_nil_check(F->l_970)).s)), &(*(P585)rt_nil_check((*(P608)rt_nil_check((*(P608)rt_nil_check(F->l_970)).next)).s))); b_; }));
F->l_970 = (*(P608)rt_nil_check((*(P608)rt_nil_check(F->l_970)).next)).next;
}
F->result_ = (*(P585)rt_nil_check(F->r_971));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_new_type_231(P598 y_228, P590 st_229, P592 *c_230) {
  struct f_new_type_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_228 = y_228;
F->st_229 = st_229;
F->c_230 = c_230;
F->c_230v = *F->c_230;
F->d_972 = NULL;
F->d_972 = (*(P598)rt_nil_check(F->y_228)).decl;
F->p_973 = NULL;
F->uc_974 = NULL;
F->c_230v = f_new_cons_158();
if (((*(P598)rt_nil_check(F->y_228)).t == NULL)) {
(*(P598)rt_nil_check(F->y_228)).t = f_new_typ_157((((rt_int)15LL)));
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).name = (*(P598)rt_nil_check(F->y_228)).name;
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).decl = F->d_972;
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).tparams = (*(P590)rt_nil_check(F->d_972)).b;
if ((g_caps_641 != NULL)) {
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).ocap = (*(P614)rt_nil_check(g_caps_641)).d;
}
f_open_scope_151();
F->p_973 = (*(P590)rt_nil_check(F->d_972)).b;
while ((F->p_973 != NULL)) {
F->z_975 = NULL;
F->z_975 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->p_973)).name);
F->zc_976 = NULL;
(*(P598)rt_nil_check(F->z_975)).t = f_resolve_subtype_217((*(P590)rt_nil_check(F->p_973)).a, &F->zc_976);
(*(P598)rt_nil_check(F->z_975)).mnext = (*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).tpsyms;
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).tpsyms = F->z_975;
(*(P598)rt_nil_check(F->z_975)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_973)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_975, (*(P590)rt_nil_check(F->d_972)).line);
F->p_973 = (*(P590)rt_nil_check(F->p_973)).next;
}
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).under = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_972)).a, &F->uc_974);
(*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_228)).t)).elemcons = F->uc_974;
f_close_scope_152();
}
(*(P592)rt_nil_check(F->c_230v)).args = (*(P590)rt_nil_check(F->st_229)).b;
F->result_ = (*(P598)rt_nil_check(F->y_228)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_230) = F->c_230v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_235(rstr *lval_232, P594 t_233, P592 c_234) {
  struct f_init_storage_235fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_232 = lval_232;
F->t_233 = t_233;
F->c_234 = c_234;
f_make_storage_250(&(*F->lval_232), F->t_233, F->c_234);
if (((*(P594)rt_nil_check(F->t_233)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_238((*(P594)rt_nil_check(F->t_233)).initp, &(*F->lval_232)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_238(P598 y_236, rstr *lval_237) {
  struct f_init_call_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_236 = y_236;
F->lval_237 = lval_237;
F->link_977 = NULL;
F->link_977 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P598)rt_nil_check(F->y_236)).level > ((rt_int)0LL))) {
F->link_977 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo979 = ((rt_int)1LL), hi980 = rt_sub(g_cur_level_639, (*(P598)rt_nil_check(F->y_236)).level);
for (rt_int it981 = lo979; it981 <= hi980; it981++) {
F->i_978 = it981;
F->link_977 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->link_977)), rt_str("->up", 4)); b_; }));
}
}
F->link_977 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->link_977)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_236)).cname)), rt_str("(", 1)), (*(P585)rt_nil_check(F->link_977))), rt_str("&", 1)), (*F->lval_237)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_240(P594 t_239) {
  struct f_needs_fin_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
if ((F->t_239 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_239)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_240((*(P594)rt_nil_check(F->t_239)).under);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_240((*(P594)rt_nil_check(F->t_239)).elem);
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_239)).kind == (((rt_int)7LL)))) {
F->f_982 = NULL;
F->f_982 = (*(P594)rt_nil_check(F->t_239)).fields;
while ((F->f_982 != NULL)) {
if (f_needs_fin_240((*(P596)rt_nil_check(F->f_982)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_982 = (*(P596)rt_nil_check(F->f_982)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_243(rstr *lval_241, P594 t_242) {
  struct f_fin_code_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_241 = lval_241;
F->t_242 = t_242;
F->r_983 = NULL;
F->r_983 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P594)rt_nil_check(F->t_242)).finalp != NULL)) {
F->r_983 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_238((*(P594)rt_nil_check(F->t_242)).finalp, &(*F->lval_241)), rt_str(" ", 1)); b_; }));
}
if ((((*(P594)rt_nil_check(F->t_242)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_242)).tparams == NULL))) {
F->result_ = rt_str_cat((*(P585)rt_nil_check(F->r_983)), f_fin_code_243(&(*F->lval_241), (*(P594)rt_nil_check(F->t_242)).under));
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_242)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((*(P585)rt_nil_check(F->r_983)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_241), rt_str(".all", 4)); b_; }), (*(P594)rt_nil_check(F->t_242)).under));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_242)).kind == (((rt_int)6LL))) && f_needs_fin_240((*(P594)rt_nil_check(F->t_242)).elem))) {
F->i_984 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->r_983)), rt_str("for (rt_int ", 12)), F->i_984), rt_str(" = 0; ", 6)), F->i_984), rt_str(" < RT_CNT(", 10)), (*F->lval_241)), rt_str("); ", 3)), F->i_984), rt_str("++) { ", 6)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_241), rt_str(".p[", 3)), F->i_984), rt_str("]", 1)); b_; }), (*(P594)rt_nil_check(F->t_242)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_242)).kind == (((rt_int)7LL)))) {
F->f_985 = NULL;
F->f_985 = (*(P594)rt_nil_check(F->t_242)).fields;
while ((F->f_985 != NULL)) {
if (f_needs_fin_240((*(P596)rt_nil_check(F->f_985)).t)) {
F->r_983 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->r_983)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_241), rt_str(".", 1)), f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_985)).name)))); b_; }), (*(P596)rt_nil_check(F->f_985)).t)), rt_str(" ", 1)); b_; }));
}
F->f_985 = (*(P596)rt_nil_check(F->f_985)).next;
}
}
F->result_ = (*(P585)rt_nil_check(F->r_983));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_tparam_type_246(P594 t_244, rstr *name_245) {
  struct f_tparam_type_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_244 = t_244;
F->name_245 = name_245;
F->z_986 = NULL;
F->z_986 = (*(P594)rt_nil_check(F->t_244)).tpsyms;
while ((F->z_986 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->z_986)).name)), (*F->name_245))) {
F->result_ = (*(P598)rt_nil_check(F->z_986)).t;
goto ret_;
}
F->z_986 = (*(P598)rt_nil_check(F->z_986)).mnext;
}
F->result_ = g_ty_int_662;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_250(rstr *lval_247, P594 t_248, P592 c_249) {
  struct f_make_storage_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_247 = lval_247;
F->t_248 = t_248;
F->c_249 = c_249;
if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)15LL)))) {
F->p_987 = NULL;
F->p_987 = (*(P594)rt_nil_check(F->t_248)).tparams;
F->a_988 = NULL;
F->a_988 = (*(P592)rt_nil_check(F->c_249)).args;
F->uc_989 = NULL;
F->ut_990 = NULL;
F->at_991 = NULL;
if ((f_list_len_54(F->a_988) != f_list_len_54(F->p_987))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_248)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_987))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_987 != NULL)) {
F->pt_992 = f_tparam_type_246(F->t_248, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_987)).name)));
F->v_993 = rt_str_copy(f_gexpr_519(F->a_988, F->pt_992, &F->at_991));
f_check_type_204(F->at_991, F->pt_992, (*(P590)rt_nil_check(F->a_988)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".p_", 3)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_987)).name)))), rt_str(" = ", 3)), F->v_993), rt_str(";", 1)); b_; }));
F->p_987 = (*(P590)rt_nil_check(F->p_987)).next;
F->a_988 = (*(P590)rt_nil_check(F->a_988)).next;
}
{
F->saved_994 = NULL;
F->saved_994 = g_psub_643;
F->p_987 = (*(P594)rt_nil_check(F->t_248)).tparams;
while ((F->p_987 != NULL)) {
F->l1_995 = NULL;
F->l2_996 = NULL;
{ R609 *cell997 = rt_alloc(sizeof(R609));
(*cell997).s = NULL;
(*cell997).next = NULL;
F->l1_995 = cell997;
}
{ R609 *cell998 = rt_alloc(sizeof(R609));
(*cell998).s = NULL;
(*cell998).next = NULL;
F->l2_996 = cell998;
}
(*(P608)rt_nil_check(F->l1_995)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_987)).name)))), rt_str("@", 1)); b_; }));
(*(P608)rt_nil_check(F->l2_996)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".p_", 3)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_987)).name)))); b_; }));
(*(P608)rt_nil_check(F->l1_995)).next = F->l2_996;
(*(P608)rt_nil_check(F->l2_996)).next = g_psub_643;
g_psub_643 = F->l1_995;
F->p_987 = (*(P590)rt_nil_check(F->p_987)).next;
}
if (((*(P594)rt_nil_check(F->t_248)).tparams == NULL)) {
f_init_storage_235(&(*F->lval_247), (*(P594)rt_nil_check(F->t_248)).under, (*(P594)rt_nil_check(F->t_248)).elemcons);
} else {
f_init_storage_235(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_247), rt_str(".all", 4)); b_; }), (*(P594)rt_nil_check(F->t_248)).under, (*(P594)rt_nil_check(F->t_248)).elemcons);
}
g_psub_643 = F->saved_994;
}
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)12LL)))) {
if (((*(P592)rt_nil_check(F->c_249)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_247), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_247)), rt_str(", ", 2)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).lo)))), rt_str(", sizeof(", 9)), f_ctype_206((*(P594)rt_nil_check(F->t_248)).elem)), rt_str("), ", 3)), f_mcopy_272((*(P594)rt_nil_check(F->t_248)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_247)), rt_str(");", 2)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_247), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_247), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)5LL)))) {
if (((*(P592)rt_nil_check(F->c_249)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_247), rt_str(" = rt_str_new(", 14)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)6LL)))) {
if (((*(P592)rt_nil_check(F->c_249)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".lo = ", 6)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).lo)))), rt_str("; ", 2)), (*F->lval_247)), rt_str(".hi = ", 6)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).hi)))), rt_str("; ", 2)), (*F->lval_247)), rt_str(".lo2 = ", 7)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).lo2)))), rt_str("; ", 2)), (*F->lval_247)), rt_str(".hi2 = ", 7)), f_subst_227(&(*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_249)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_206((*(P594)rt_nil_check(F->t_248)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_247)), rt_str("));", 3)); b_; }));
if ((((((((((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)5LL))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)6LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)7LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)15LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)8LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)12LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)13LL)))) || ((*(P594)rt_nil_check((*(P594)rt_nil_check(F->t_248)).elem)).kind == (((rt_int)14LL))))) {
F->i_999 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_999), rt_str(" = 0; ", 6)), F->i_999), rt_str(" < RT_CNT(", 10)), (*F->lval_247)), rt_str("); ", 3)), F->i_999), rt_str("++) {", 5)); b_; }));
f_init_storage_235(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".p[", 3)), F->i_999), rt_str("]", 1)); b_; }), (*(P594)rt_nil_check(F->t_248)).elem, (*(P594)rt_nil_check(F->t_248)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P594)rt_nil_check(F->t_248)).kind == (((rt_int)7LL)))) {
F->f_1000 = NULL;
F->f_1000 = (*(P594)rt_nil_check(F->t_248)).fields;
while ((F->f_1000 != NULL)) {
f_init_storage_235(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_247), rt_str(".", 1)), f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1000)).name)))); b_; }), (*(P596)rt_nil_check(F->f_1000)).t, (*(P596)rt_nil_check(F->f_1000)).c);
F->f_1000 = (*(P596)rt_nil_check(F->f_1000)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_253(P590 e_251, int *ok_252) {
  struct f_manifest_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_251 = e_251;
F->ok_252 = ok_252;
F->ok_252v = *F->ok_252;
F->v_1001 = NULL;
F->v_1001 = f_meval_262(F->e_251, &F->ok_252v);
if ((F->ok_252v && ((*(P606)rt_nil_check(F->v_1001)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P606)rt_nil_check(F->v_1001)).i;
goto ret_;
}
F->ok_252v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_252) = F->ok_252v;
  RT_FPOP();
  return F->result_;
}

static P606 f_mk_mval_256(rt_int kind_254, rt_int i_255) {
  struct f_mk_mval_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_254 = kind_254;
F->i_255 = i_255;
F->v_1002 = NULL;
{ R607 *cell1003 = rt_alloc(sizeof(R607));
(*cell1003).s = NULL;
(*cell1003).t = NULL;
F->v_1002 = cell1003;
}
(*(P606)rt_nil_check(F->v_1002)).kind = F->kind_254;
(*(P606)rt_nil_check(F->v_1002)).i = F->i_255;
F->result_ = F->v_1002;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_259(rt_int a_257, rt_int b_258) {
  struct f_ipow_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_257 = a_257;
F->b_258 = b_258;
F->r_1004 = ((rt_int)1LL);
{ rt_int lo1006 = ((rt_int)1LL), hi1007 = F->b_258;
for (rt_int it1008 = lo1006; it1008 <= hi1007; it1008++) {
F->i_1005 = it1008;
F->r_1004 = rt_mul(F->r_1004, F->a_257);
}
}
F->result_ = F->r_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P606 f_meval_262(P590 e_260, int *ok_261) {
  struct f_meval_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_260 = e_260;
F->ok_261 = ok_261;
F->ok_261v = *F->ok_261;
F->a_1009 = NULL;
F->b_1010 = NULL;
F->op_1012 = NULL;
F->ok_261v = 0;
if ((F->e_260 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)1LL)))) {
F->ok_261v = 1;
F->result_ = f_mk_mval_256((((rt_int)1LL)), (*(P590)rt_nil_check(F->e_260)).ival);
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)5LL)))) {
F->ok_261v = 1;
F->result_ = f_mk_mval_256((((rt_int)2LL)), (*(P590)rt_nil_check(F->e_260)).ival);
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)2LL)))) {
F->ok_261v = 1;
F->result_ = f_mk_mval_256((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)3LL)))) {
F->ok_261v = 1;
F->a_1009 = f_mk_mval_256((((rt_int)5LL)), ((rt_int)0LL));
(*(P606)rt_nil_check(F->a_1009)).s = (*(P590)rt_nil_check(F->e_260)).name;
F->result_ = F->a_1009;
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_214((*(P594)rt_nil_check(g_ty_ascii_665)).lits, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name))) >= ((rt_int)0LL))) {
F->ok_261v = 1;
F->a_1009 = f_mk_mval_256((((rt_int)4LL)), f_lit_index_214((*(P594)rt_nil_check(g_ty_ascii_665)).lits, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name))));
(*(P606)rt_nil_check(F->a_1009)).t = g_ty_ascii_665;
(*(P606)rt_nil_check(F->a_1009)).s = (*(P590)rt_nil_check(F->e_260)).name;
F->result_ = F->a_1009;
goto ret_;
}
F->a_1009 = f_mk_mval_256((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P606)rt_nil_check(F->a_1009)).s = (*(P590)rt_nil_check(F->e_260)).name;
F->ok_261v = 1;
F->result_ = F->a_1009;
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_262((*(P590)rt_nil_check(F->e_260)).a, &F->ok_261v);
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)7LL)))) {
F->y_1013 = NULL;
F->y_1013 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name)));
if ((((F->y_1013 != NULL) && ((*(P598)rt_nil_check(F->y_1013)).kind == (((rt_int)2LL)))) && ((*(P598)rt_nil_check(F->y_1013)).mv != NULL))) {
F->ok_261v = 1;
F->result_ = (*(P598)rt_nil_check(F->y_1013)).mv;
goto ret_;
} else if ((((F->y_1013 != NULL) && ((*(P598)rt_nil_check(F->y_1013)).kind == (((rt_int)2LL)))) && (*(P598)rt_nil_check(F->y_1013)).hasmv)) {
F->ok_261v = 1;
F->result_ = f_mk_mval_256((((rt_int)1LL)), (*(P598)rt_nil_check(F->y_1013)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_260)).kind == (((rt_int)8LL)))) {
F->a_1009 = f_meval_262((*(P590)rt_nil_check(F->e_260)).a, &F->ok_261v);
if ((!F->ok_261v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name)), rt_str("NOT", 3)) && ((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P606)rt_nil_check(F->a_1009)).i));
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name)), rt_str("-", 1)) && ((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_neg((*(P606)rt_nil_check(F->a_1009)).i));
goto ret_;
} else if (((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name)), rt_str("+", 1)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name)), rt_str("-", 1))) && (((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)1LL))) || ((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1009;
goto ret_;
}
F->ok_261v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P590)rt_nil_check(F->e_260)).kind != (((rt_int)9LL))) || f_user_defined_270(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_260)).name))))) {
F->result_ = NULL;
goto ret_;
}
F->op_1012 = (*(P590)rt_nil_check(F->e_260)).name;
F->a_1009 = f_meval_262((*(P590)rt_nil_check(F->e_260)).a, &F->ok_261v);
F->b_1010 = f_meval_262((*(P590)rt_nil_check(F->e_260)).b, &F->ok2_1011);
F->ok_261v = (F->ok_261v && F->ok2_1011);
if ((!F->ok_261v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_261v = 0;
if ((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)1LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)1LL))))) {
F->ok_261v = 1;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("+", 1))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_add((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("-", 1))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_sub((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("*", 1))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_mul((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("DIV", 3)) && ((*(P606)rt_nil_check(F->b_1010)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_div((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("MOD", 3)) && ((*(P606)rt_nil_check(F->b_1010)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), rt_mod((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("**", 2)) && ((*(P606)rt_nil_check(F->b_1010)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_256((((rt_int)1LL)), f_ipow_259((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i == (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("/=", 2))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i != (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("<", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i < (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("<=", 2))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i <= (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str(">", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i > (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str(">=", 2))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i >= (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
}
} else if (((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)3LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)3LL)))) && (((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("+", 1)) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("-", 1))) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("*", 1))) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("/", 1))))) {
F->ok_261v = 1;
F->result_ = F->a_1009;
goto ret_;
} else if (((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)3LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)1LL)))) && rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("**", 2)))) {
F->ok_261v = 1;
F->result_ = F->a_1009;
goto ret_;
} else if ((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)2LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)2LL))))) {
F->ok_261v = 1;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("AND", 3))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), rt_mul((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("OR", 2))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264((rt_add((*(P606)rt_nil_check(F->a_1009)).i, (*(P606)rt_nil_check(F->b_1010)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("XOR", 3)) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i != (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(((*(P606)rt_nil_check(F->a_1009)).i == (*(P606)rt_nil_check(F->b_1010)).i)));
goto ret_;
}
} else if (((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)4LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)4LL)))) && (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1)) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("/=", 2))))) {
F->ok_261v = 1;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(rt_str_eq((*(P585)rt_nil_check((*(P606)rt_nil_check(F->a_1009)).s)), (*(P585)rt_nil_check((*(P606)rt_nil_check(F->b_1010)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264((!rt_str_eq((*(P585)rt_nil_check((*(P606)rt_nil_check(F->a_1009)).s)), (*(P585)rt_nil_check((*(P606)rt_nil_check(F->b_1010)).s))))));
goto ret_;
} else if (((((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)5LL))) && ((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)5LL)))) && (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1)) || rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("/=", 2))))) {
F->ok_261v = 1;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("=", 1))) {
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264(rt_str_eq((*(P585)rt_nil_check((*(P606)rt_nil_check(F->a_1009)).s)), (*(P585)rt_nil_check((*(P606)rt_nil_check(F->b_1010)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_256((((rt_int)2LL)), f_bool_i_264((!rt_str_eq((*(P585)rt_nil_check((*(P606)rt_nil_check(F->a_1009)).s)), (*(P585)rt_nil_check((*(P606)rt_nil_check(F->b_1010)).s))))));
goto ret_;
} else if (((rt_str_eq((*(P585)rt_nil_check(F->op_1012)), rt_str("&", 1)) && (((*(P606)rt_nil_check(F->a_1009)).kind == (((rt_int)5LL))) || ((*(P606)rt_nil_check(F->a_1009)).t == g_ty_ascii_665))) && (((*(P606)rt_nil_check(F->b_1010)).kind == (((rt_int)5LL))) || ((*(P606)rt_nil_check(F->b_1010)).t == g_ty_ascii_665)))) {
F->r_1014 = NULL;
F->r_1014 = f_mk_mval_256((((rt_int)5LL)), ((rt_int)0LL));
F->ok_261v = 1;
(*(P606)rt_nil_check(F->r_1014)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_266(F->a_1009), f_mstr_266(F->b_1010)); b_; }));
F->result_ = F->r_1014;
goto ret_;
}
F->ok_261v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_261) = F->ok_261v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_bool_i_264(int b_263) {
  struct f_bool_i_264fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_263 = b_263;
if (F->b_263) {
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

static rstr f_mstr_266(P606 v_265) {
  struct f_mstr_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_265 = v_265;
if (((*(P606)rt_nil_check(F->v_265)).kind == (((rt_int)5LL)))) {
F->result_ = (*(P585)rt_nil_check((*(P606)rt_nil_check(F->v_265)).s));
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_268((*(P606)rt_nil_check(F->v_265)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_268(rt_int i_267) {
  struct f_ascii_char_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_267 = i_267;
F->printable_1015 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 92)));
if (((F->i_267 >= ((rt_int)32LL)) && (F->i_267 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1015, rt_sub(F->i_267, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_270(rstr *op_269) {
  struct f_user_defined_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_269 = op_269;
F->y_1016 = NULL;
F->y_1016 = f_lookup_140(&(*F->op_269));
F->result_ = ((F->y_1016 != NULL) && (((*(P598)rt_nil_check(F->y_1016)).kind == (((rt_int)3LL))) || ((*(P598)rt_nil_check(F->y_1016)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_272(P594 t_271) {
  struct f_mcopy_272fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->ct_1017 = rt_str_copy(f_ctype_206(F->t_271));
F->name_1018 = rt_str_new(rt_add((F->ct_1017).len, ((rt_int)3LL)));
rt_str_assign(&F->name_1018, rt_str_cat(rt_str("mc_", 3), F->ct_1017));
F->l_1019 = NULL;
if ((!f_seen_name_293(g_mcopies_661, &F->name_1018))) {
{ R609 *cell1020 = rt_alloc(sizeof(R609));
(*cell1020).s = NULL;
(*cell1020).next = NULL;
F->l_1019 = cell1020;
}
(*(P608)rt_nil_check(F->l_1019)).s = f_mk_3(&F->name_1018);
(*(P608)rt_nil_check(F->l_1019)).next = g_mcopies_661;
g_mcopies_661 = F->l_1019;
f_put_27(g_out_protos_631, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1018), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1018), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1017), rt_str(" *)d = ", 7)), f_copy_code_282(F->t_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1017), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1018;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_274(P594 t_273) {
  struct f_composite_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_273 = t_273;
F->result_ = ((((*(P594)rt_nil_check(F->t_273)).kind == (((rt_int)6LL))) || ((*(P594)rt_nil_check(F->t_273)).kind == (((rt_int)7LL)))) || (((*(P594)rt_nil_check(F->t_273)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_273)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_279(rstr *lval_275, P594 t_276, rstr *v_277, P592 c_278) {
  struct f_assign_code_279fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_275 = lval_275;
F->t_276 = t_276;
F->v_277 = v_277;
F->c_278 = c_278;
if ((((*(P594)rt_nil_check(F->t_276)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_276)).tparams == NULL))) {
F->result_ = f_assign_code_279(&(*F->lval_275), (*(P594)rt_nil_check(F->t_276)).under, &(*F->v_277), F->c_278);
goto ret_;
}
if (f_composite_274(F->t_276)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_206(F->t_276)), rt_str("(&", 2)), (*F->lval_275)), rt_str(", ", 2)), (*F->v_277)), rt_str(");", 2));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_276)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_275)), rt_str(", ", 2)), (*F->v_277)), rt_str(");", 2));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_276)).kind == (((rt_int)6LL))) || ((*(P594)rt_nil_check(F->t_276)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_206(F->t_276)), rt_str("(&", 2)), (*F->lval_275)), rt_str(", ", 2)), (*F->v_277)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_275), rt_str(" = ", 3)), f_checked_187(F->t_276, F->c_278, &(*F->v_277))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_282(P594 t_280, rstr *v_281) {
  struct f_copy_code_282fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_280 = t_280;
F->v_281 = v_281;
if ((((*(P594)rt_nil_check(F->t_280)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_280)).tparams == NULL))) {
F->result_ = f_copy_code_282((*(P594)rt_nil_check(F->t_280)).under, &(*F->v_281));
goto ret_;
}
if (f_composite_274(F->t_280)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_206(F->t_280)), rt_str("(", 1)), (*F->v_281)), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_280)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_281)), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_280)).kind == (((rt_int)6LL))) || ((*(P594)rt_nil_check(F->t_280)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_206(F->t_280)), rt_str("(", 1)), (*F->v_281)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_281);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_286(P594 t_283, rstr *a_284, rstr *b_285) {
  struct f_eq_code_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_283 = t_283;
F->a_284 = a_284;
F->b_285 = b_285;
if ((((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)15LL))) && ((*(P594)rt_nil_check(F->t_283)).tparams == NULL))) {
F->result_ = f_eq_code_286((*(P594)rt_nil_check(F->t_283)).under, &(*F->a_284), &(*F->b_285));
goto ret_;
}
if (f_composite_274(F->t_283)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_206(F->t_283)), rt_str("(", 1)), (*F->a_284)), rt_str(", ", 2)), (*F->b_285)), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_284)), rt_str(", ", 2)), (*F->b_285)), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_284)), rt_str(" == ", 4)), (*F->b_285)), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_284)), rt_str(" == ", 4)), (*F->b_285)), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_284)), rt_str(", ", 2)), (*F->b_285)), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)6LL))) || ((*(P594)rt_nil_check(F->t_283)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_206(F->t_283)), rt_str("(", 1)), (*F->a_284)), rt_str(", ", 2)), (*F->b_285)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_284)), rt_str(" == ", 4)), (*F->b_285)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_290(rstr *lval_287, P594 t_288, rstr *v_289) {
  struct f_elem_assign_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_287 = lval_287;
F->t_288 = t_288;
F->v_289 = v_289;
F->result_ = f_assign_code_279(&(*F->lval_287), F->t_288, &(*F->v_289), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_293(P608 l_291, rstr *s_292) {
  struct f_seen_name_293fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->s_292 = s_292;
F->p_1021 = NULL;
F->p_1021 = F->l_291;
while ((F->p_1021 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P608)rt_nil_check(F->p_1021)).s)), (*F->s_292))) {
F->result_ = 1;
goto ret_;
}
F->p_1021 = (*(P608)rt_nil_check(F->p_1021)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_294(void) {
  struct f_emit_helpers_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1022 = NULL;
F->t_1023 = NULL;
F->t_1023 = g_all_types_627;
F->done_1024 = NULL;
while ((F->t_1023 != NULL)) {
if ((f_composite_274(F->t_1023) && (!f_seen_name_293(F->done_1024, &(*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_1023)).cname)))))) {
F->l_1025 = NULL;
F->c_1026 = rt_str_new(((*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_1023)).cname))).len);
rt_str_assign(&F->c_1026, (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_1023)).cname)));
{ R609 *cell1027 = rt_alloc(sizeof(R609));
(*cell1027).s = NULL;
(*cell1027).next = NULL;
F->l_1025 = cell1027;
}
(*(P608)rt_nil_check(F->l_1025)).s = (*(P594)rt_nil_check(F->t_1023)).cname;
(*(P608)rt_nil_check(F->l_1025)).next = F->done_1024;
F->done_1024 = F->l_1025;
f_put_27(g_out_helpers_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1026), rt_str("(", 1)), F->c_1026), rt_str(" *d, ", 5)), F->c_1026), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1026), rt_str(" cp_", 4)), F->c_1026), rt_str("(", 1)), F->c_1026), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1026), rt_str("(", 1)), F->c_1026), rt_str(" a, ", 4)), F->c_1026), rt_str(" b);", 4)); b_; }));
f_helper_bodies_296(F->t_1023);
}
F->t_1023 = (*(P594)rt_nil_check(F->t_1023)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_296(P594 t_295) {
  struct f_helper_bodies_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1028 = rt_str_new(((*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_295)).cname))).len);
rt_str_assign(&F->c_1028, (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_295)).cname)));
F->b_1029 = NULL;
F->b_1029 = g_out_funcs_633;
if (((*(P594)rt_nil_check(F->t_295)).kind == (((rt_int)6LL)))) {
F->e_1030 = NULL;
F->e_1030 = (*(P594)rt_nil_check(F->t_295)).elem;
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" *d, ", 5)), F->c_1028), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_290(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1030, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1028), rt_str(" cp_", 4)), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1028), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_206(F->e_1030)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_282(F->e_1030, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" a, ", 4)), F->c_1028), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_286(F->e_1030, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P594)rt_nil_check(F->t_295)).kind == (((rt_int)15LL)))) {
F->p_1031 = NULL;
F->p_1031 = (*(P594)rt_nil_check(F->t_295)).tparams;
F->pc_1032 = NULL;
F->pc_1032 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_1031 != NULL)) {
F->pc_1032 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->pc_1032)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1031)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1031)).name)))); b_; }));
F->p_1031 = (*(P590)rt_nil_check(F->p_1031)).next;
}
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" *d, ", 5)), F->c_1028), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P585)rt_nil_check(F->pc_1032))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_290(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P594)rt_nil_check(F->t_295)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1028), rt_str(" cp_", 4)), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" s) { s.all = ", 14)), f_copy_code_282((*(P594)rt_nil_check(F->t_295)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" a, ", 4)), F->c_1028), rt_str(" b) { return ", 13)), f_eq_code_286((*(P594)rt_nil_check(F->t_295)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_1033 = NULL;
F->f_1033 = (*(P594)rt_nil_check(F->t_295)).fields;
F->conds_1034 = NULL;
F->conds_1034 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" *d, ", 5)), F->c_1028), rt_str(" s) {", 5)); b_; }));
while ((F->f_1033 != NULL)) {
F->fn_1035 = rt_str_copy(f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1033)).name))));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_290(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1035); b_; }), (*(P596)rt_nil_check(F->f_1033)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1035); b_; }))); b_; }));
F->f_1033 = (*(P596)rt_nil_check(F->f_1033)).next;
}
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1028), rt_str(" cp_", 4)), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1028), rt_str(" d = s;", 7)); b_; }));
F->f_1033 = (*(P594)rt_nil_check(F->t_295)).fields;
while ((F->f_1033 != NULL)) {
F->fn_1036 = rt_str_copy(f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1033)).name))));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1036), rt_str(" = ", 3)), f_copy_code_282((*(P596)rt_nil_check(F->f_1033)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1036); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1034 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->conds_1034)), rt_str(" && ", 4)), f_eq_code_286((*(P596)rt_nil_check(F->f_1033)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1036); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1036); b_; }))); b_; }));
F->f_1033 = (*(P596)rt_nil_check(F->f_1033)).next;
}
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1028), rt_str("(", 1)), F->c_1028), rt_str(" a, ", 4)), F->c_1028), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P585)rt_nil_check(F->conds_1034))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1029, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_298(P590 elems_297) {
  struct f_declare_body_298fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_297 = elems_297;
F->e_1037 = NULL;
F->e_1037 = F->elems_297;
while ((F->e_1037 != NULL)) {
if ((((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)41LL))) && ((*(P590)rt_nil_check(F->e_1037)).flag == ((rt_int)0LL)))) {
f_manifest_const_300(F->e_1037);
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)47LL)))) {
f_gen_capsule_308(F->e_1037);
} else if (((((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)48LL))) && ((*(P590)rt_nil_check(F->e_1037)).flag != ((rt_int)1LL))) && ((*(P590)rt_nil_check(F->e_1037)).flag != ((rt_int)3LL)))) {
f_gen_expose_325(F->e_1037);
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)49LL)))) {
F->y_1038 = NULL;
F->y_1038 = f_new_sym_155((((rt_int)7LL)), (*(P590)rt_nil_check(F->e_1037)).name);
(*(P598)rt_nil_check(F->y_1038)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_1038, (*(P590)rt_nil_check(F->e_1037)).line);
f_put_27(g_out_globals_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1038)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1038)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)42LL)))) {
F->y_1039 = NULL;
F->y_1039 = f_new_sym_155((((rt_int)6LL)), (*(P590)rt_nil_check(F->e_1037)).name);
(*(P598)rt_nil_check(F->y_1039)).st = (*(P590)rt_nil_check(F->e_1037)).a;
f_define_145(F->y_1039, (*(P590)rt_nil_check(F->e_1037)).line);
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)44LL)))) {
F->y_1040 = NULL;
F->y_1040 = f_new_sym_155((((rt_int)5LL)), (*(P590)rt_nil_check(F->e_1037)).name);
F->t_1041 = NULL;
F->t_1041 = f_new_typ_157((((rt_int)8LL)));
(*(P594)rt_nil_check(F->t_1041)).name = (*(P590)rt_nil_check(F->e_1037)).name;
(*(P594)rt_nil_check(F->t_1041)).decl = F->e_1037;
(*(P598)rt_nil_check(F->y_1040)).t = F->t_1041;
f_define_145(F->y_1040, (*(P590)rt_nil_check(F->e_1037)).line);
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)43LL)))) {
F->y_1042 = NULL;
F->y_1042 = f_new_sym_155((((rt_int)5LL)), (*(P590)rt_nil_check(F->e_1037)).name);
(*(P598)rt_nil_check(F->y_1042)).st = (*(P590)rt_nil_check(F->e_1037)).a;
(*(P598)rt_nil_check(F->y_1042)).decl = F->e_1037;
f_define_145(F->y_1042, (*(P590)rt_nil_check(F->e_1037)).line);
}
F->e_1037 = (*(P590)rt_nil_check(F->e_1037)).next;
}
F->e_1037 = F->elems_297;
while ((F->e_1037 != NULL)) {
if (((((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)45LL))) || ((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)46LL)))) || ((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)50LL))))) {
f_declare_subprogram_329(F->e_1037);
} else if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)51LL)))) {
F->g_1043 = NULL;
F->g_1043 = f_new_sym_155((((rt_int)10LL)), (*(P590)rt_nil_check(F->e_1037)).name);
(*(P598)rt_nil_check(F->g_1043)).decl = F->e_1037;
(*(P598)rt_nil_check(F->g_1043)).level = g_cur_level_639;
(*(P598)rt_nil_check(F->g_1043)).owner = g_func_sym_650;
(*(P598)rt_nil_check(F->g_1043)).gctx = g_fctx_640;
f_define_145(F->g_1043, (*(P590)rt_nil_check(F->e_1037)).line);
}
F->e_1037 = (*(P590)rt_nil_check(F->e_1037)).next;
}
F->e_1037 = F->elems_297;
{
F->snap_1044 = NULL;
while ((F->e_1037 != NULL)) {
if (((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)51LL)))) {
if ((F->snap_1044 == NULL)) {
{ A603 *cell1045 = rt_alloc(sizeof(A603));
rt_int pv1046 = (((rt_int)4093LL));
(*cell1045).lo = ((rt_int)0LL); (*cell1045).hi = pv1046; (*cell1045).lo2 = 1; (*cell1045).hi2 = 1;
(*cell1045).p = rt_alloc(sizeof(P598) * (size_t)RT_CNT((*cell1045)));
for (rt_int i1047 = 0; i1047 < RT_CNT((*cell1045)); i1047++) {
(*cell1045).p[i1047] = NULL;
}
F->snap_1044 = cell1045;
}
{ rt_int lo1049 = ((rt_int)0LL), hi1050 = (((rt_int)4093LL));
for (rt_int it1051 = lo1049; it1051 <= hi1050; it1051++) {
F->i_1048 = it1051;
(*(P602)rt_nil_check(F->snap_1044)).p[rt_index(F->i_1048, (*(P602)rt_nil_check(F->snap_1044)).lo, (*(P602)rt_nil_check(F->snap_1044)).hi) - (*(P602)rt_nil_check(F->snap_1044)).lo] = (*(P602)rt_nil_check(g_table_622)).p[rt_index(F->i_1048, (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
}
}
}
{
F->g_1052 = NULL;
F->g_1052 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name)));
(*(P598)rt_nil_check(F->g_1052)).env = F->snap_1044;
}
}
F->e_1037 = (*(P590)rt_nil_check(F->e_1037)).next;
}
}
F->e_1037 = F->elems_297;
while ((F->e_1037 != NULL)) {
if ((((*(P590)rt_nil_check(F->e_1037)).kind == (((rt_int)45LL))) && (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name)), rt_str("INITIALIZE", 10)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name)), rt_str("FINALIZE", 8))))) {
F->y_1053 = NULL;
F->y_1053 = f_lookup_decl_142(F->e_1037);
if (((((F->y_1053 != NULL) && ((*(P598)rt_nil_check(F->y_1053)).params != NULL)) && ((*(P600)rt_nil_check((*(P598)rt_nil_check(F->y_1053)).params)).next == NULL)) && (((*(P594)rt_nil_check((*(P600)rt_nil_check((*(P598)rt_nil_check(F->y_1053)).params)).t)).kind == (((rt_int)15LL))) || ((*(P594)rt_nil_check((*(P600)rt_nil_check((*(P598)rt_nil_check(F->y_1053)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1037)).name)), rt_str("INITIALIZE", 10))) {
(*(P594)rt_nil_check((*(P600)rt_nil_check((*(P598)rt_nil_check(F->y_1053)).params)).t)).initp = F->y_1053;
} else {
(*(P594)rt_nil_check((*(P600)rt_nil_check((*(P598)rt_nil_check(F->y_1053)).params)).t)).finalp = F->y_1053;
}
}
}
F->e_1037 = (*(P590)rt_nil_check(F->e_1037)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_300(P590 d_299) {
  struct f_manifest_const_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_299 = d_299;
F->v_1055 = NULL;
F->y_1056 = NULL;
F->t_1057 = NULL;
F->ctext_1058 = NULL;
if (((*(P590)rt_nil_check(F->d_299)).a != NULL)) {
if ((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->d_299)).a)).kind != (((rt_int)70LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->d_299)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1055 = f_meval_262((*(P590)rt_nil_check(F->d_299)).b, &F->ok_1054);
if ((!F->ok_1054)) {
goto ret_;
}
{
F->saved_1059 = NULL;
F->saved_1059 = g_code_636;
g_code_636 = f_new_buffer_24();
g_trial_660 = rt_add(g_trial_660, ((rt_int)1LL));
{ rt_frame xf1060;
if (RT_TRY(xf1060)) {
F->ctext_1058 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_519((*(P590)rt_nil_check(F->d_299)).b, NULL, &F->t_1057)), rt_str(")", 1)); b_; }));
RT_POP(xf1060);
} else {
RT_POP(xf1060);
int x1061 = rt_xcur;
if (0 || x1061 == ex_compile_error_1) {
F->ok_1054 = 0;
} else {
rt_raise(x1061);
}
}
}
g_trial_660 = rt_sub(g_trial_660, ((rt_int)1LL));
F->ok_1054 = (F->ok_1054 && ((*(P610)rt_nil_check(g_code_636)).head == NULL));
g_code_636 = F->saved_1059;
}
if (((!F->ok_1054) || (((*(P590)rt_nil_check(F->d_299)).a != NULL) && ((*(P594)rt_nil_check(F->t_1057)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P606)rt_nil_check(F->v_1055)).kind == (((rt_int)4LL)))) {
(*(P606)rt_nil_check(F->v_1055)).t = F->t_1057;
(*(P606)rt_nil_check(F->v_1055)).i = f_lit_index_214((*(P594)rt_nil_check(f_base_of_195(F->t_1057))).lits, &(*(P585)rt_nil_check((*(P606)rt_nil_check(F->v_1055)).s)));
}
(*(P590)rt_nil_check(F->d_299)).flag = ((rt_int)1LL);
F->y_1056 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->d_299)).name);
(*(P598)rt_nil_check(F->y_1056)).t = F->t_1057;
(*(P598)rt_nil_check(F->y_1056)).c = f_new_cons_158();
(*(P598)rt_nil_check(F->y_1056)).mv = F->v_1055;
if (((*(P606)rt_nil_check(F->v_1055)).kind == (((rt_int)1LL)))) {
(*(P598)rt_nil_check(F->y_1056)).mvalue = (*(P606)rt_nil_check(F->v_1055)).i;
(*(P598)rt_nil_check(F->y_1056)).hasmv = 1;
}
(*(P598)rt_nil_check(F->y_1056)).ro_flag = 1;
(*(P598)rt_nil_check(F->y_1056)).access = F->ctext_1058;
f_define_145(F->y_1056, (*(P590)rt_nil_check(F->d_299)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_304(P590 d_301, rstr *name_302, int *ro_303) {
  struct f_exported_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_301 = d_301;
F->name_302 = name_302;
F->ro_303 = ro_303;
F->ro_303v = *F->ro_303;
F->p_1062 = NULL;
F->p_1062 = (*(P590)rt_nil_check(F->d_301)).a;
F->ro_303v = 0;
if (((*(P590)rt_nil_check(F->d_301)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1062 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1062)).name)), (*F->name_302))) {
F->ro_303v = ((*(P590)rt_nil_check(F->p_1062)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1062 = (*(P590)rt_nil_check(F->p_1062)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_303) = F->ro_303v;
  RT_FPOP();
  return F->result_;
}

static P598 f_copy_sym_306(P598 y_305) {
  struct f_copy_sym_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_305 = y_305;
F->z_1063 = NULL;
{ R599 *cell1064 = rt_alloc(sizeof(R599));
(*cell1064).name = NULL;
(*cell1064).t = NULL;
(*cell1064).c = NULL;
(*cell1064).access = NULL;
(*cell1064).cname = NULL;
(*cell1064).st = NULL;
(*cell1064).decl = NULL;
(*cell1064).params = NULL;
(*cell1064).result = NULL;
(*cell1064).members = NULL;
(*cell1064).mnext = NULL;
(*cell1064).binds = NULL;
(*cell1064).insts = NULL;
(*cell1064).env = NULL;
(*cell1064).chain = NULL;
(*cell1064).stack = NULL;
(*cell1064).owner = NULL;
(*cell1064).gctx = NULL;
(*cell1064).mv = NULL;
F->z_1063 = cell1064;
}
(*(P598)rt_nil_check(F->z_1063)).kind = (*(P598)rt_nil_check(F->y_305)).kind;
(*(P598)rt_nil_check(F->z_1063)).name = (*(P598)rt_nil_check(F->y_305)).name;
(*(P598)rt_nil_check(F->z_1063)).t = (*(P598)rt_nil_check(F->y_305)).t;
(*(P598)rt_nil_check(F->z_1063)).c = (*(P598)rt_nil_check(F->y_305)).c;
(*(P598)rt_nil_check(F->z_1063)).access = (*(P598)rt_nil_check(F->y_305)).access;
(*(P598)rt_nil_check(F->z_1063)).cname = (*(P598)rt_nil_check(F->y_305)).cname;
(*(P598)rt_nil_check(F->z_1063)).ro_flag = (*(P598)rt_nil_check(F->y_305)).ro_flag;
(*(P598)rt_nil_check(F->z_1063)).mvalue = (*(P598)rt_nil_check(F->y_305)).mvalue;
(*(P598)rt_nil_check(F->z_1063)).hasmv = (*(P598)rt_nil_check(F->y_305)).hasmv;
(*(P598)rt_nil_check(F->z_1063)).st = (*(P598)rt_nil_check(F->y_305)).st;
(*(P598)rt_nil_check(F->z_1063)).decl = (*(P598)rt_nil_check(F->y_305)).decl;
(*(P598)rt_nil_check(F->z_1063)).params = (*(P598)rt_nil_check(F->y_305)).params;
(*(P598)rt_nil_check(F->z_1063)).result = (*(P598)rt_nil_check(F->y_305)).result;
(*(P598)rt_nil_check(F->z_1063)).level = (*(P598)rt_nil_check(F->y_305)).level;
(*(P598)rt_nil_check(F->z_1063)).byref = (*(P598)rt_nil_check(F->y_305)).byref;
(*(P598)rt_nil_check(F->z_1063)).members = (*(P598)rt_nil_check(F->y_305)).members;
(*(P598)rt_nil_check(F->z_1063)).env = (*(P598)rt_nil_check(F->y_305)).env;
F->result_ = F->z_1063;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_308(P590 d_307) {
  struct f_gen_capsule_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_307 = d_307;
F->y_1065 = NULL;
F->y_1065 = f_new_sym_155((((rt_int)8LL)), (*(P590)rt_nil_check(F->d_307)).name);
(*(P598)rt_nil_check(F->y_1065)).decl = F->d_307;
if (((*(P590)rt_nil_check(F->d_307)).b == NULL)) {
f_elaborate_capsule_317(F->d_307, F->y_1065, NULL, F->d_307);
}
f_define_145(F->y_1065, (*(P590)rt_nil_check(F->d_307)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_312(P590 d_309, P590 args_310, rt_int line_311) {
  struct f_capsule_params_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_309 = d_309;
F->args_310 = args_310;
F->line_311 = line_311;
F->p_1066 = NULL;
F->p_1066 = (*(P590)rt_nil_check(F->d_309)).b;
F->a_1067 = NULL;
F->a_1067 = F->args_310;
F->t_1068 = NULL;
F->vt_1069 = NULL;
F->c_1070 = NULL;
while (((F->p_1066 != NULL) && (F->a_1067 != NULL))) {
F->t_1068 = f_resolve_subtype_217((*(P590)rt_nil_check(F->p_1066)).a, &F->c_1070);
if (((*(P590)rt_nil_check(F->p_1066)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_311, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P590)rt_nil_check(F->p_1066)).ival == (((rt_int)2LL))) || ((*(P590)rt_nil_check(F->p_1066)).ival == (((rt_int)4LL))))) {
F->lv_1071 = NULL;
F->lc_1072 = NULL;
F->y_1074 = NULL;
F->y_1074 = f_new_sym_155((((rt_int)1LL)), (*(P590)rt_nil_check(F->p_1066)).name);
f_lvalue_496(F->a_1067, &F->lv_1071, &F->vt_1069, &F->lc_1072, &F->ro_1073);
f_check_type_204(F->vt_1069, F->t_1068, F->line_311);
if ((F->ro_1073 && ((*(P590)rt_nil_check(F->p_1066)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_311, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1066)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_638) {
F->f_1075 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1066)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_206(F->t_1068)), rt_str(" *", 2)), F->f_1075), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1075), rt_str(" = &", 4)), (*(P585)rt_nil_check(F->lv_1071))), rt_str(";", 1)); b_; }));
(*(P598)rt_nil_check(F->y_1074)).level = g_cur_level_639;
(*(P598)rt_nil_check(F->y_1074)).access = f_mk_3(&F->f_1075);
(*(P598)rt_nil_check(F->y_1074)).byref = 1;
} else {
F->g_1076 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1066)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_206(F->t_1068)), rt_str(" *", 2)), F->g_1076), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_646, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1076), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1076, rt_str(" = &", 4)), (*(P585)rt_nil_check(F->lv_1071))), rt_str(";", 1)); b_; }));
(*(P598)rt_nil_check(F->y_1074)).level = ((rt_int)0LL);
(*(P598)rt_nil_check(F->y_1074)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1076), rt_str(")", 1)); b_; }));
}
(*(P598)rt_nil_check(F->y_1074)).t = F->t_1068;
(*(P598)rt_nil_check(F->y_1074)).c = F->lc_1072;
(*(P598)rt_nil_check(F->y_1074)).ro_flag = ((*(P590)rt_nil_check(F->p_1066)).ival == (((rt_int)4LL)));
f_define_145(F->y_1074, F->line_311);
} else {
F->y_1077 = NULL;
F->y_1077 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->p_1066)).name);
F->v_1078 = rt_str_copy(f_gexpr_519(F->a_1067, F->t_1068, &F->vt_1069));
f_check_type_204(F->vt_1069, F->t_1068, F->line_311);
{
F->access_1079 = rt_str_copy(f_storage_336(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1066)).name)), F->t_1068));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1079, rt_str(" = ", 3)), f_copy_code_282(F->t_1068, &F->v_1078)), rt_str(";", 1)); b_; }));
f_bind_339(F->y_1077, &F->access_1079);
}
(*(P598)rt_nil_check(F->y_1077)).t = F->t_1068;
(*(P598)rt_nil_check(F->y_1077)).c = F->c_1070;
(*(P598)rt_nil_check(F->y_1077)).ro_flag = 1;
f_define_145(F->y_1077, F->line_311);
}
F->p_1066 = (*(P590)rt_nil_check(F->p_1066)).next;
F->a_1067 = (*(P590)rt_nil_check(F->a_1067)).next;
}
if (((F->p_1066 != NULL) || (F->a_1067 != NULL))) {
f_fail_23(F->line_311, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_309)).name))); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_317(P590 d_313, P598 y_314, P590 args_315, P590 owner_316) {
  struct f_elaborate_capsule_317fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_313 = d_313;
F->y_314 = y_314;
F->args_315 = args_315;
F->owner_316 = owner_316;
F->cr_1080 = NULL;
F->ctx_1081 = NULL;
F->m_1082 = NULL;
F->p_1083 = NULL;
F->p_1083 = (*(P590)rt_nil_check(F->d_313)).a;
{ R615 *cell1085 = rt_alloc(sizeof(R615));
(*cell1085).d = NULL;
(*cell1085).next = NULL;
F->cr_1080 = cell1085;
}
(*(P614)rt_nil_check(F->cr_1080)).d = F->d_313;
(*(P614)rt_nil_check(F->cr_1080)).next = g_caps_641;
g_caps_641 = F->cr_1080;
f_open_scope_151();
if (((*(P590)rt_nil_check(F->d_313)).b != NULL)) {
f_capsule_params_312(F->d_313, F->args_315, (*(P590)rt_nil_check(F->owner_316)).line);
}
{ R605 *cell1086 = rt_alloc(sizeof(R605));
(*cell1086).imps = NULL;
(*cell1086).next = NULL;
F->ctx_1081 = cell1086;
}
(*(P604)rt_nil_check(F->ctx_1081)).depth = g_depth_625;
(*(P604)rt_nil_check(F->ctx_1081)).imps = (*(P590)rt_nil_check(F->d_313)).d;
(*(P604)rt_nil_check(F->ctx_1081)).all_imp = ((*(P590)rt_nil_check(F->d_313)).flag >= ((rt_int)2LL));
(*(P604)rt_nil_check(F->ctx_1081)).next = g_fctx_640;
g_fctx_640 = F->ctx_1081;
f_declare_body_298((*(P590)rt_nil_check(F->d_313)).c);
f_capsule_body_364((*(P590)rt_nil_check(F->d_313)).c);
{
F->w_1087 = NULL;
{ R617 *cell1088 = rt_alloc(sizeof(R617));
(*cell1088).d = NULL;
(*cell1088).w = NULL;
(*cell1088).next = NULL;
F->w_1087 = cell1088;
}
(*(P616)rt_nil_check(F->w_1087)).d = F->owner_316;
(*(P616)rt_nil_check(F->w_1087)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_356((*(P590)rt_nil_check(F->d_313)).c); b_; }));
(*(P616)rt_nil_check(F->w_1087)).next = g_cap_waits_642;
g_cap_waits_642 = F->w_1087;
}
g_fctx_640 = (*(P604)rt_nil_check(g_fctx_640)).next;
F->m_1082 = g_scope_stack_626;
while (((F->m_1082 != NULL) && ((*(P598)rt_nil_check(F->m_1082)).depth == g_depth_625))) {
if ((((((*(P598)rt_nil_check(F->m_1082)).kind == (((rt_int)5LL))) && ((*(P598)rt_nil_check(F->m_1082)).t == NULL)) && ((*(P598)rt_nil_check(F->m_1082)).decl != NULL)) && ((*(P590)rt_nil_check((*(P598)rt_nil_check(F->m_1082)).decl)).kind == (((rt_int)43LL))))) {
(*(P598)rt_nil_check(F->m_1082)).t = f_new_type_231(F->m_1082, f_nn_48((((rt_int)80LL)), (*(P590)rt_nil_check(F->d_313)).line), &(*(P598)rt_nil_check(F->m_1082)).c);
} else if (((((*(P598)rt_nil_check(F->m_1082)).kind == (((rt_int)5LL))) || ((*(P598)rt_nil_check(F->m_1082)).kind == (((rt_int)6LL)))) && ((*(P598)rt_nil_check(F->m_1082)).t == NULL))) {
(*(P598)rt_nil_check(F->m_1082)).t = f_resolve_subtype_217((*(P598)rt_nil_check(F->m_1082)).st, &(*(P598)rt_nil_check(F->m_1082)).c);
} else if ((((*(P598)rt_nil_check(F->m_1082)).kind == (((rt_int)5LL))) && ((*(P594)rt_nil_check((*(P598)rt_nil_check(F->m_1082)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_327((*(P598)rt_nil_check(F->m_1082)).t);
}
F->m_1082 = (*(P598)rt_nil_check(F->m_1082)).stack;
}
F->m_1082 = g_scope_stack_626;
while (((F->m_1082 != NULL) && ((*(P598)rt_nil_check(F->m_1082)).depth == g_depth_625))) {
if (f_exported_304(F->d_313, &(*(P585)rt_nil_check((*(P598)rt_nil_check(F->m_1082)).name)), &F->ro_1084)) {
F->z_1089 = NULL;
F->z_1089 = f_copy_sym_306(F->m_1082);
if (F->ro_1084) {
(*(P598)rt_nil_check(F->z_1089)).ro_flag = 1;
}
(*(P598)rt_nil_check(F->z_1089)).mnext = (*(P598)rt_nil_check(F->y_314)).members;
(*(P598)rt_nil_check(F->y_314)).members = F->z_1089;
}
F->m_1082 = (*(P598)rt_nil_check(F->m_1082)).stack;
}
while ((F->p_1083 != NULL)) {
if ((((!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1083)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1083)).name)), rt_str("=", 1)))) && ((f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1083)).name))) == NULL) || ((*(P598)rt_nil_check(f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1083)).name))))).depth != g_depth_625)))) {
f_fail_23((*(P590)rt_nil_check(F->d_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1083)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_313)).name))); b_; }));
}
F->p_1083 = (*(P590)rt_nil_check(F->p_1083)).next;
}
f_close_scope_152();
g_caps_641 = (*(P614)rt_nil_check(g_caps_641)).next;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_320(P590 d_318, rstr *op_319) {
  struct f_exports_op_320fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_318 = d_318;
F->op_319 = op_319;
F->p_1090 = NULL;
if ((F->d_318 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1090 = (*(P590)rt_nil_check(F->d_318)).a;
while ((F->p_1090 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1090)).name)), (*F->op_319))) {
F->result_ = 1;
goto ret_;
}
F->p_1090 = (*(P590)rt_nil_check(F->p_1090)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P585 f_renamed_323(P590 d_321, P598 z_322) {
  struct f_renamed_323fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_321 = d_321;
F->z_322 = z_322;
F->r_1091 = NULL;
F->r_1091 = (*(P590)rt_nil_check(F->d_321)).c;
while ((F->r_1091 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->r_1091)).name)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->z_322)).name)))) {
F->result_ = (*(P590)rt_nil_check((*(P590)rt_nil_check(F->r_1091)).a)).name;
goto ret_;
}
F->r_1091 = (*(P590)rt_nil_check(F->r_1091)).next;
}
F->result_ = (*(P598)rt_nil_check(F->z_322)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_325(P590 d_324) {
  struct f_gen_expose_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_324 = d_324;
F->y_1092 = NULL;
F->y_1092 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_324)).name)));
F->m_1093 = NULL;
F->p_1094 = NULL;
F->p_1094 = (*(P590)rt_nil_check(F->d_324)).a;
F->r_1095 = NULL;
F->r_1095 = (*(P590)rt_nil_check(F->d_324)).c;
if (((F->y_1092 == NULL) || ((*(P598)rt_nil_check(F->y_1092)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P590)rt_nil_check(F->d_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_324)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P590)rt_nil_check(F->d_324)).flag == ((rt_int)1LL)) || ((*(P590)rt_nil_check(F->d_324)).flag == ((rt_int)3LL)))) {
F->inst_1096 = NULL;
F->inst_1096 = f_new_sym_155((((rt_int)8LL)), (*(P598)rt_nil_check(F->y_1092)).name);
(*(P598)rt_nil_check(F->inst_1096)).decl = (*(P598)rt_nil_check(F->y_1092)).decl;
f_elaborate_capsule_317((*(P598)rt_nil_check(F->y_1092)).decl, F->inst_1096, (*(P590)rt_nil_check(F->d_324)).b, F->d_324);
F->y_1092 = F->inst_1096;
} else if ((((*(P598)rt_nil_check(F->y_1092)).decl != NULL) && ((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_1092)).decl)).b != NULL))) {
f_fail_23((*(P590)rt_nil_check(F->d_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_324)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P590)rt_nil_check(F->d_324)).b != NULL)) {
f_fail_23((*(P590)rt_nil_check(F->d_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1095 != NULL)) {
F->found_1097 = 0;
F->m_1093 = (*(P598)rt_nil_check(F->y_1092)).members;
while ((F->m_1093 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->m_1093)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->r_1095)).name)))) {
F->found_1097 = 1;
}
F->m_1093 = (*(P598)rt_nil_check(F->m_1093)).mnext;
}
if ((!F->found_1097)) {
f_fail_23((*(P590)rt_nil_check(F->d_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->r_1095)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_324)).name))); b_; }));
}
F->r_1095 = (*(P590)rt_nil_check(F->r_1095)).next;
}
if (((*(P590)rt_nil_check(F->d_324)).ival == ((rt_int)1LL))) {
F->m_1093 = (*(P598)rt_nil_check(F->y_1092)).members;
while ((F->m_1093 != NULL)) {
F->z_1098 = NULL;
F->z_1098 = f_copy_sym_306(F->m_1093);
(*(P598)rt_nil_check(F->z_1098)).name = f_renamed_323(F->d_324, F->m_1093);
f_define_145(F->z_1098, (*(P590)rt_nil_check(F->d_324)).line);
F->m_1093 = (*(P598)rt_nil_check(F->m_1093)).mnext;
}
goto ret_;
}
while ((F->p_1094 != NULL)) {
F->found_1099 = 0;
F->m_1093 = (*(P598)rt_nil_check(F->y_1092)).members;
while ((F->m_1093 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->m_1093)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1094)).name)))) {
F->z_1100 = NULL;
F->z_1100 = f_copy_sym_306(F->m_1093);
if (((*(P590)rt_nil_check(F->p_1094)).ival == ((rt_int)1LL))) {
(*(P598)rt_nil_check(F->z_1100)).ro_flag = 1;
}
(*(P598)rt_nil_check(F->z_1100)).name = f_renamed_323(F->d_324, F->m_1093);
f_define_145(F->z_1100, (*(P590)rt_nil_check(F->d_324)).line);
F->found_1099 = 1;
}
F->m_1093 = (*(P598)rt_nil_check(F->m_1093)).mnext;
}
if ((!F->found_1099)) {
f_fail_23((*(P590)rt_nil_check(F->d_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1094)).name)), rt_str(" is not exported by ", 20)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_324)).name))); b_; }));
}
F->p_1094 = (*(P590)rt_nil_check(F->p_1094)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_327(P594 t_326) {
  struct f_finish_ptr_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_326 = t_326;
F->d_1101 = NULL;
F->d_1101 = (*(P594)rt_nil_check(F->t_326)).decl;
F->p_1102 = NULL;
F->c_1103 = NULL;
F->dummy_1104 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1104, rt_str(" ", 1));
if (((*(P594)rt_nil_check(F->t_326)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_1102 = (*(P590)rt_nil_check(F->d_1101)).b;
while ((F->p_1102 != NULL)) {
F->y_1105 = NULL;
F->y_1105 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->p_1102)).name);
(*(P598)rt_nil_check(F->y_1105)).t = g_ty_int_662;
(*(P598)rt_nil_check(F->y_1105)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_1105, (*(P590)rt_nil_check(F->d_1101)).line);
F->p_1102 = (*(P590)rt_nil_check(F->p_1102)).next;
}
(*(P594)rt_nil_check(F->t_326)).target = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_1101)).a, &F->c_1103);
f_close_scope_152();
(*rt_str_at(&F->dummy_1104, ((rt_int)1LL))) = rt_str_get(f_ctype_206(F->t_326), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1104, ((rt_int)1LL))) = rt_str_get(f_ctype_206((*(P594)rt_nil_check(F->t_326)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_329(P590 d_328) {
  struct f_declare_subprogram_329fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_328 = d_328;
f_define_145(f_build_subprogram_331(F->d_328), (*(P590)rt_nil_check(F->d_328)).line);
ret_:
  RT_FPOP();
  return;
}

static P598 f_build_subprogram_331(P590 d_330) {
  struct f_build_subprogram_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_330 = d_330;
F->y_1106 = NULL;
F->p_1107 = NULL;
F->p_1107 = (*(P590)rt_nil_check(F->d_330)).a;
F->tail_1108 = NULL;
if (((*(P590)rt_nil_check(F->d_330)).kind == (((rt_int)46LL)))) {
F->y_1106 = f_new_sym_155((((rt_int)3LL)), (*(P590)rt_nil_check(F->d_330)).name);
} else if (((*(P590)rt_nil_check(F->d_330)).kind == (((rt_int)50LL)))) {
F->y_1106 = f_new_sym_155((((rt_int)9LL)), (*(P590)rt_nil_check(F->d_330)).name);
} else {
F->y_1106 = f_new_sym_155((((rt_int)4LL)), (*(P590)rt_nil_check(F->d_330)).name);
}
while ((F->p_1107 != NULL)) {
F->pm_1109 = NULL;
{ R601 *cell1110 = rt_alloc(sizeof(R601));
(*cell1110).name = NULL;
(*cell1110).t = NULL;
(*cell1110).c = NULL;
(*cell1110).cfield = NULL;
(*cell1110).next = NULL;
F->pm_1109 = cell1110;
}
(*(P600)rt_nil_check(F->pm_1109)).name = (*(P590)rt_nil_check(F->p_1107)).name;
(*(P600)rt_nil_check(F->pm_1109)).mode = (*(P590)rt_nil_check(F->p_1107)).ival;
(*(P600)rt_nil_check(F->pm_1109)).t = f_resolve_subtype_217((*(P590)rt_nil_check(F->p_1107)).a, &(*(P600)rt_nil_check(F->pm_1109)).c);
(*(P600)rt_nil_check(F->pm_1109)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1107)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1108 == NULL)) {
(*(P598)rt_nil_check(F->y_1106)).params = F->pm_1109;
} else {
(*(P600)rt_nil_check(F->tail_1108)).next = F->pm_1109;
}
F->tail_1108 = F->pm_1109;
F->p_1107 = (*(P590)rt_nil_check(F->p_1107)).next;
}
(*(P598)rt_nil_check(F->y_1106)).result = g_ty_void_667;
if (((*(P590)rt_nil_check(F->d_330)).b != NULL)) {
F->rc_1111 = NULL;
F->pm_1112 = NULL;
F->pm_1112 = (*(P598)rt_nil_check(F->y_1106)).params;
F->saved_1113 = NULL;
F->saved_1113 = g_code_636;
g_code_636 = f_new_buffer_24();
f_open_scope_151();
while ((F->pm_1112 != NULL)) {
F->z_1114 = NULL;
F->z_1114 = f_new_sym_155((((rt_int)2LL)), (*(P600)rt_nil_check(F->pm_1112)).name);
(*(P598)rt_nil_check(F->z_1114)).t = (*(P600)rt_nil_check(F->pm_1112)).t;
(*(P598)rt_nil_check(F->z_1114)).c = (*(P600)rt_nil_check(F->pm_1112)).c;
(*(P598)rt_nil_check(F->z_1114)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->z_1114, (*(P590)rt_nil_check(F->d_330)).line);
F->pm_1112 = (*(P600)rt_nil_check(F->pm_1112)).next;
}
(*(P598)rt_nil_check(F->y_1106)).result = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_330)).b, &F->rc_1111);
f_close_scope_152();
g_code_636 = F->saved_1113;
}
(*(P598)rt_nil_check(F->y_1106)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_485(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_330)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P598)rt_nil_check(F->y_1106)).decl = F->d_330;
(*(P598)rt_nil_check(F->y_1106)).level = g_cur_level_639;
if (((*(P590)rt_nil_check(F->d_330)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1106)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1106;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_element_333(P590 e_332) {
  struct f_element_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_332 = e_332;
F->k_1115 = (*(P590)rt_nil_check(F->e_332)).kind;
if (((F->k_1115 == (((rt_int)48LL))) && (((*(P590)rt_nil_check(F->e_332)).flag == ((rt_int)1LL)) || ((*(P590)rt_nil_check(F->e_332)).flag == ((rt_int)3LL))))) {
f_gen_expose_325(F->e_332);
} else if ((((F->k_1115 == (((rt_int)45LL))) || (F->k_1115 == (((rt_int)46LL)))) || (F->k_1115 == (((rt_int)50LL))))) {
f_subprogram_349(F->e_332);
} else if ((F->k_1115 == (((rt_int)51LL)))) {
F->g_1116 = NULL;
F->g_1116 = f_lookup_decl_142(F->e_332);
if ((F->g_1116 != NULL)) {
{ A603 *cell1117 = rt_alloc(sizeof(A603));
rt_int pv1118 = (((rt_int)4093LL));
(*cell1117).lo = ((rt_int)0LL); (*cell1117).hi = pv1118; (*cell1117).lo2 = 1; (*cell1117).hi2 = 1;
(*cell1117).p = rt_alloc(sizeof(P598) * (size_t)RT_CNT((*cell1117)));
for (rt_int i1119 = 0; i1119 < RT_CNT((*cell1117)); i1119++) {
(*cell1117).p[i1119] = NULL;
}
(*(P598)rt_nil_check(F->g_1116)).env = cell1117;
}
{ rt_int lo1121 = ((rt_int)0LL), hi1122 = (((rt_int)4093LL));
for (rt_int it1123 = lo1121; it1123 <= hi1122; it1123++) {
F->i_1120 = it1123;
(*(P602)rt_nil_check((*(P598)rt_nil_check(F->g_1116)).env)).p[rt_index(F->i_1120, (*(P602)rt_nil_check((*(P598)rt_nil_check(F->g_1116)).env)).lo, (*(P602)rt_nil_check((*(P598)rt_nil_check(F->g_1116)).env)).hi) - (*(P602)rt_nil_check((*(P598)rt_nil_check(F->g_1116)).env)).lo] = (*(P602)rt_nil_check(g_table_622)).p[rt_index(F->i_1120, (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
}
}
}
} else if ((((((F->k_1115 == (((rt_int)49LL))) || (F->k_1115 == (((rt_int)42LL)))) || (F->k_1115 == (((rt_int)43LL)))) || (F->k_1115 == (((rt_int)47LL)))) || (F->k_1115 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1115 == (((rt_int)44LL)))) {
f_finish_ptr_327((*(P598)rt_nil_check(f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_332)).name))))).t);
} else if ((F->k_1115 == (((rt_int)40LL)))) {
f_var_decl_341(F->e_332);
} else if (((F->k_1115 == (((rt_int)41LL))) && ((*(P590)rt_nil_check(F->e_332)).flag == ((rt_int)0LL)))) {
f_const_decl_347(F->e_332);
} else if ((F->k_1115 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1115 == (((rt_int)33LL)))) {
F->t_1124 = NULL;
F->c_1125 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_332)).a, g_ty_bool_663, &F->t_1124));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1125), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_375(F->e_332);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_336(rstr *name_334, P594 t_335) {
  struct f_storage_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_334 = name_334;
F->t_335 = t_335;
if ((!g_in_func_638)) {
F->g_1126 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_334))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_206(F->t_335)), rt_str(" ", 1)), F->g_1126), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_646, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1126), rt_str(");", 2)); b_; }));
g_st_field_644 = f_mk_3(&F->g_1126);
F->result_ = F->g_1126;
goto ret_;
}
{
F->f_1127 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_334)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_206(F->t_335)), rt_str(" ", 1)), F->f_1127), rt_str(";", 1)); b_; }));
g_st_field_644 = f_mk_3(&F->f_1127);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1127);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_339(P598 y_337, rstr *access_338) {
  struct f_bind_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_337 = y_337;
F->access_338 = access_338;
if (g_in_func_638) {
(*(P598)rt_nil_check(F->y_337)).level = g_cur_level_639;
(*(P598)rt_nil_check(F->y_337)).access = g_st_field_644;
} else {
(*(P598)rt_nil_check(F->y_337)).level = ((rt_int)0LL);
(*(P598)rt_nil_check(F->y_337)).access = f_mk_3(&(*F->access_338));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_341(P590 d_340) {
  struct f_var_decl_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_340 = d_340;
F->c_1128 = NULL;
F->t_1129 = NULL;
F->t_1129 = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_340)).a, &F->c_1128);
F->y_1130 = NULL;
F->y_1130 = f_new_sym_155((((rt_int)1LL)), (*(P590)rt_nil_check(F->d_340)).name);
F->access_1131 = rt_str_copy(f_storage_336(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_340)).name)), F->t_1129));
F->c_1128 = f_freeze_183(F->c_1128, F->t_1129);
f_init_storage_235(&F->access_1131, F->t_1129, F->c_1128);
if (((*(P590)rt_nil_check(F->d_340)).ival == ((rt_int)1LL))) {
F->it_1132 = NULL;
F->n_1133 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->d_340)).c, g_ty_int_662, &F->it_1132));
if (((*(P594)rt_nil_check(F->t_1129)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P590)rt_nil_check(F->d_340)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_193((*(P594)rt_nil_check(F->t_1129)).elem, g_ty_ascii_665)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1131), rt_str(", ", 2)), F->n_1133), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1131), rt_str(", ", 2)), F->n_1133), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P590)rt_nil_check(F->d_340)).ival == ((rt_int)2LL))) {
f_fail_23((*(P590)rt_nil_check(F->d_340)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P590)rt_nil_check(F->d_340)).b != NULL)) {
F->vt_1134 = NULL;
F->v_1135 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->d_340)).b, F->t_1129, &F->vt_1134));
f_check_type_204(F->vt_1134, F->t_1129, (*(P590)rt_nil_check(F->d_340)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_279(&F->access_1131, F->t_1129, &F->v_1135, F->c_1128); b_; }));
}
(*(P598)rt_nil_check(F->y_1130)).t = F->t_1129;
(*(P598)rt_nil_check(F->y_1130)).c = F->c_1128;
f_bind_339(F->y_1130, &F->access_1131);
f_define_145(F->y_1130, (*(P590)rt_nil_check(F->d_340)).line);
if (f_needs_fin_240(F->t_1129)) {
f_open_fin_343(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_243(&F->access_1131, F->t_1129); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_343(rstr *fc_342) {
  struct f_open_fin_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_342 = fc_342;
F->f_1136 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1137 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1136), rt_str("; if (RT_TRY(", 13)), F->f_1136), rt_str(")) {", 4)); b_; }));
f_push_cleanup_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1136), rt_str("); ", 3)), (*F->fc_342)); b_; }));
{ R609 *cell1138 = rt_alloc(sizeof(R609));
(*cell1138).s = NULL;
(*cell1138).next = NULL;
F->l_1137 = cell1138;
}
(*(P608)rt_nil_check(F->l_1137)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1136), rt_str("); ", 3)), (*F->fc_342)), rt_str(" } else { RT_POP(", 17)), F->f_1136), rt_str("); ", 3)), (*F->fc_342)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P608)rt_nil_check(F->l_1137)).next = g_fins_648;
g_fins_648 = F->l_1137;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_345(P608 saved_344) {
  struct f_close_fins_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_344 = saved_344;
while (((g_fins_648 != F->saved_344) && (g_fins_648 != NULL))) {
f_emit_29(&(*(P585)rt_nil_check((*(P608)rt_nil_check(g_fins_648)).s)));
f_pop_cleanup_373();
g_fins_648 = (*(P608)rt_nil_check(g_fins_648)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_347(P590 d_346) {
  struct f_const_decl_347fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_346 = d_346;
F->c_1139 = NULL;
F->c_1139 = f_new_cons_158();
F->t_1140 = NULL;
F->vt_1141 = NULL;
F->y_1142 = NULL;
F->y_1142 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->d_346)).name);
if (((*(P590)rt_nil_check(F->d_346)).a != NULL)) {
F->t_1140 = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_346)).a, &F->c_1139);
}
{
F->v_1144 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->d_346)).b, F->t_1140, &F->vt_1141));
if ((F->t_1140 != NULL)) {
f_check_type_204(F->vt_1141, F->t_1140, (*(P590)rt_nil_check(F->d_346)).line);
} else {
F->t_1140 = F->vt_1141;
}
if (((*(P594)rt_nil_check(F->t_1140)).kind == (((rt_int)1LL)))) {
(*(P598)rt_nil_check(F->y_1142)).mvalue = f_manifest_253((*(P590)rt_nil_check(F->d_346)).b, &F->ok_1143);
(*(P598)rt_nil_check(F->y_1142)).hasmv = F->ok_1143;
}
{
F->access_1145 = rt_str_copy(f_storage_336(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->d_346)).name)), F->t_1140));
if (((*(P594)rt_nil_check(F->t_1140)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_238((*(P594)rt_nil_check(F->t_1140)).initp, &F->access_1145); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1145, rt_str(" = ", 3)), f_checked_187(F->t_1140, F->c_1139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_282(F->t_1140, &F->v_1144); b_; }))), rt_str(";", 1)); b_; }));
f_bind_339(F->y_1142, &F->access_1145);
if (f_needs_fin_240(F->t_1140)) {
f_open_fin_343(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_243(&F->access_1145, F->t_1140); b_; }));
}
}
}
(*(P598)rt_nil_check(F->y_1142)).t = F->t_1140;
(*(P598)rt_nil_check(F->y_1142)).c = F->c_1139;
(*(P598)rt_nil_check(F->y_1142)).ro_flag = 1;
f_define_145(F->y_1142, (*(P590)rt_nil_check(F->d_346)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_349(P590 d_348) {
  struct f_subprogram_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_348 = d_348;
f_gen_subprogram_352(F->d_348, f_lookup_decl_142(F->d_348));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_352(P590 d_350, P598 y_351) {
  struct f_gen_subprogram_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_350 = d_350;
F->y_351 = y_351;
F->saved_code_1146 = NULL;
F->saved_code_1146 = g_code_636;
F->saved_fields_1147 = NULL;
F->saved_fields_1147 = g_fields_buf_637;
F->saved_in_1148 = g_in_func_638;
F->saved_sym_1149 = NULL;
F->saved_sym_1149 = g_func_sym_650;
F->saved_exits_1150 = NULL;
F->saved_exits_1150 = g_exits_656;
F->saved_frames_1151 = g_frames_657;
F->args_1152 = NULL;
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1153 = NULL;
F->pm_1153 = (*(P598)rt_nil_check(F->y_351)).params;
F->saved_handlers_1154 = NULL;
F->saved_handlers_1154 = g_handlers_658;
F->saved_cleanups_1155 = NULL;
F->saved_cleanups_1155 = g_cleanups_659;
F->ctx_1156 = NULL;
F->head_1157 = NULL;
F->frame_1158 = NULL;
F->frame_1158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_351)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1159 = NULL;
F->copy_back_1160 = NULL;
F->copy_back_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1161 = NULL;
F->pfin_1161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1162 = NULL;
F->saved_fins_1162 = g_fins_648;
F->saved_rc_1163 = NULL;
F->saved_rc_1163 = g_func_rc_651;
F->saved_ret_1164 = NULL;
F->saved_ret_1164 = g_cap_ret_652;
F->saved_rflag_1165 = NULL;
F->saved_rflag_1165 = g_cap_rflag_653;
F->pn_1166 = NULL;
F->pn_1166 = (*(P590)rt_nil_check(F->d_350)).a;
if (g_in_func_638) {
F->parent_1159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(g_func_sym_650)).cname)), rt_str("fr", 2)); b_; }));
}
g_fins_648 = NULL;
g_func_rc_651 = NULL;
g_cap_ret_652 = NULL;
g_cap_rflag_653 = NULL;
g_code_636 = f_new_buffer_24();
g_fields_buf_637 = f_new_buffer_24();
g_in_func_638 = 1;
g_func_sym_650 = F->y_351;
g_exits_656 = NULL;
g_frames_657 = ((rt_int)0LL);
g_handlers_658 = NULL;
g_cleanups_659 = NULL;
g_cur_level_639 = rt_add(g_cur_level_639, ((rt_int)1LL));
f_open_scope_151();
{ R605 *cell1167 = rt_alloc(sizeof(R605));
(*cell1167).imps = NULL;
(*cell1167).next = NULL;
F->ctx_1156 = cell1167;
}
(*(P604)rt_nil_check(F->ctx_1156)).depth = g_depth_625;
(*(P604)rt_nil_check(F->ctx_1156)).imps = (*(P590)rt_nil_check(F->d_350)).d;
(*(P604)rt_nil_check(F->ctx_1156)).all_imp = ((*(P590)rt_nil_check(F->d_350)).flag >= ((rt_int)2LL));
(*(P604)rt_nil_check(F->ctx_1156)).next = g_fctx_640;
g_fctx_640 = F->ctx_1156;
if ((F->parent_1159 != NULL)) {
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P585)rt_nil_check(F->parent_1159))), rt_str(" *up;", 5)); b_; }));
if (((*(P598)rt_nil_check(F->y_351)).kind != (((rt_int)9LL)))) {
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check(F->parent_1159))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1153 != NULL)) {
F->ct_1168 = rt_str_copy(f_ctype_206((*(P600)rt_nil_check(F->pm_1153)).t));
F->f_1169 = rt_str_copy((*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1153)).cfield)));
F->p_1170 = NULL;
F->pc_1171 = NULL;
F->pc_1171 = (*(P600)rt_nil_check(F->pm_1153)).c;
F->ac_1172 = NULL;
if ((((*(P585)rt_nil_check(F->args_1152))).len > ((rt_int)0LL))) {
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->args_1152)), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_160((*(P600)rt_nil_check(F->pm_1153)).t)) {
F->fc_1173 = NULL;
F->ft_1174 = NULL;
F->ft_1174 = f_resolve_subtype_217((*(P590)rt_nil_check(F->pn_1166)).a, &F->fc_1173);
F->pc_1171 = f_freeze_183(F->fc_1173, (*(P600)rt_nil_check(F->pm_1153)).t);
}
if (((*(P600)rt_nil_check(F->pm_1153)).mode == (((rt_int)1LL)))) {
F->p_1170 = f_new_sym_155((((rt_int)2LL)), (*(P600)rt_nil_check(F->pm_1153)).name);
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1168), rt_str(" ", 1)), F->f_1169), rt_str(";", 1)); b_; }));
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1152)), F->ct_1168), rt_str(" ", 1)), F->f_1169); b_; }));
(*(P598)rt_nil_check(F->p_1170)).access = f_mk_3(&F->f_1169);
if (((*(P598)rt_nil_check(F->y_351)).kind != (((rt_int)9LL)))) {
if (((*(P594)rt_nil_check((*(P600)rt_nil_check(F->pm_1153)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_238((*(P594)rt_nil_check((*(P600)rt_nil_check(F->pm_1153)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1169); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str(" = ", 3)), f_checked_187((*(P600)rt_nil_check(F->pm_1153)).t, F->pc_1171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_282((*(P600)rt_nil_check(F->pm_1153)).t, &F->f_1169); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_240((*(P600)rt_nil_check(F->pm_1153)).t)) {
F->pfin_1161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->pfin_1161)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1169); b_; }), (*(P600)rt_nil_check(F->pm_1153)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1170 = f_new_sym_155((((rt_int)1LL)), (*(P600)rt_nil_check(F->pm_1153)).name);
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1168), rt_str(" *", 2)), F->f_1169), rt_str(";", 1)); b_; }));
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1152)), F->ct_1168), rt_str(" *", 2)), F->f_1169); b_; }));
(*(P598)rt_nil_check(F->p_1170)).access = f_mk_3(&F->f_1169);
(*(P598)rt_nil_check(F->p_1170)).byref = 1;
if (((*(P598)rt_nil_check(F->y_351)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str(" = ", 3)), F->f_1169), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_160((*(P600)rt_nil_check(F->pm_1153)).t)) {
F->bt_1175 = rt_str_copy(f_bound_ctype_162((*(P600)rt_nil_check(F->pm_1153)).t));
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1175), rt_str(" ", 1)), F->f_1169), rt_str("lo, ", 4)), F->f_1169), rt_str("hi;", 3)); b_; }));
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1152)), rt_str(", ", 2)), F->bt_1175), rt_str(" ", 1)), F->f_1169), rt_str("lo, ", 4)), F->bt_1175), rt_str(" ", 1)), F->f_1169), rt_str("hi", 2)); b_; }));
if (((*(P598)rt_nil_check(F->y_351)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str("lo = ", 5)), F->f_1169), rt_str("lo; F->", 7)), F->f_1169), rt_str("hi = ", 5)), F->f_1169), rt_str("hi;", 3)); b_; }));
}
F->ac_1172 = f_new_cons_158();
(*(P592)rt_nil_check(F->ac_1172)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1169, rt_str("lo", 2)); b_; }));
(*(P592)rt_nil_check(F->ac_1172)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1169, rt_str("hi", 2)); b_; }));
(*(P592)rt_nil_check(F->ac_1172)).dyn = 1;
(*(P592)rt_nil_check(F->ac_1172)).lvl = g_cur_level_639;
if (((F->pc_1171 == NULL) || ((*(P592)rt_nil_check(F->pc_1171)).lo == NULL))) {
F->pc_1171 = F->ac_1172;
} else if (((*(P600)rt_nil_check(F->pm_1153)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1169), rt_str("lo <= F->", 9)), F->f_1169), rt_str("hi && (F->", 10)), F->f_1169), rt_str("lo != ", 6)), f_sub_lo_172((*(P600)rt_nil_check(F->pm_1153)).t, F->pc_1171)), rt_str(" || F->", 7)), F->f_1169), rt_str("hi != ", 6)), f_sub_hi_175((*(P600)rt_nil_check(F->pm_1153)).t, F->pc_1171)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P600)rt_nil_check(F->pm_1153)).mode == (((rt_int)3LL))) && ((*(P598)rt_nil_check(F->y_351)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1168), rt_str(" ", 1)), F->f_1169), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str("v = ", 4)), f_copy_code_282((*(P600)rt_nil_check(F->pm_1153)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1169); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P594)rt_nil_check((*(P600)rt_nil_check(F->pm_1153)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_238((*(P594)rt_nil_check((*(P600)rt_nil_check(F->pm_1153)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1172 == NULL)) {
F->ac_1172 = (*(P600)rt_nil_check(F->pm_1153)).c;
}
F->copy_back_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->copy_back_1160)), rt_str("  ", 2)), f_assign_code_279(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1169), rt_str(")", 1)); b_; }), (*(P600)rt_nil_check(F->pm_1153)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str("v", 1)); b_; }), F->ac_1172)); b_; }));
if (f_needs_fin_240((*(P600)rt_nil_check(F->pm_1153)).t)) {
F->pfin_1161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->pfin_1161)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1169), rt_str("v", 1)); b_; }), (*(P600)rt_nil_check(F->pm_1153)).t)), rt_str(" ", 1)); b_; }));
}
(*(P598)rt_nil_check(F->p_1170)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1169, rt_str("v", 1)); b_; }));
(*(P598)rt_nil_check(F->p_1170)).byref = 0;
}
}
(*(P598)rt_nil_check(F->p_1170)).t = (*(P600)rt_nil_check(F->pm_1153)).t;
(*(P598)rt_nil_check(F->p_1170)).c = F->pc_1171;
(*(P598)rt_nil_check(F->p_1170)).level = g_cur_level_639;
(*(P598)rt_nil_check(F->p_1170)).ro_flag = (((*(P600)rt_nil_check(F->pm_1153)).mode == (((rt_int)1LL))) || ((*(P600)rt_nil_check(F->pm_1153)).mode == (((rt_int)4LL))));
f_define_145(F->p_1170, (*(P590)rt_nil_check(F->d_350)).line);
F->pm_1153 = (*(P600)rt_nil_check(F->pm_1153)).next;
F->pn_1166 = (*(P590)rt_nil_check(F->pn_1166)).next;
}
if (((*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_351)).result)).kind != (((rt_int)9LL)))) {
if (((*(P590)rt_nil_check(F->d_350)).b != NULL)) {
F->rc_1176 = NULL;
F->rt_1177 = NULL;
F->rt_1177 = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_350)).b, &F->rc_1176);
g_func_rc_651 = f_freeze_183(F->rc_1176, (*(P598)rt_nil_check(F->y_351)).result);
}
f_put_27(g_fields_buf_637, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_206((*(P598)rt_nil_check(F->y_351)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_351)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_238((*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_351)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
if ((((*(P585)rt_nil_check(F->pfin_1161))).len > ((rt_int)0LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
f_declare_body_298((*(P590)rt_nil_check(F->d_350)).c);
f_body_elements_366((*(P590)rt_nil_check(F->d_350)).c);
f_close_fins_345(NULL);
if ((((*(P585)rt_nil_check(F->pfin_1161))).len > ((rt_int)0LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (*(P585)rt_nil_check(F->pfin_1161))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_373();
F->copy_back_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->copy_back_1160)), rt_str("  ", 2)), (*(P585)rt_nil_check(F->pfin_1161))); b_; }));
}
f_close_scope_152();
g_fctx_640 = (*(P604)rt_nil_check(g_fctx_640)).next;
g_cur_level_639 = rt_sub(g_cur_level_639, ((rt_int)1LL));
if (((((*(P585)rt_nil_check(F->args_1152))).len == ((rt_int)0LL)) || ((*(P598)rt_nil_check(F->y_351)).kind == (((rt_int)9LL))))) {
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P598)rt_nil_check(F->y_351)).kind == (((rt_int)9LL)))) {
F->args_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1157 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_206((*(P598)rt_nil_check(F->y_351)).result)), rt_str(" ", 1)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_351)).cname))), rt_str("(", 1)), (*(P585)rt_nil_check(F->args_1152))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_631, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->head_1157)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->head_1157)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_645, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P585)rt_nil_check(F->frame_1158))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_645, g_fields_buf_637);
f_put_27(g_out_frames_645, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P598)rt_nil_check(F->y_351)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P585)rt_nil_check(F->frame_1158))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P585)rt_nil_check(F->frame_1158))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_633, g_code_636);
if (((*(P594)rt_nil_check((*(P598)rt_nil_check(F->y_351)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P585)rt_nil_check(F->copy_back_1160))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_633, &(*(P585)rt_nil_check(F->copy_back_1160)));
}
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P585)rt_nil_check(F->copy_back_1160))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_633, &(*(P585)rt_nil_check(F->copy_back_1160)));
}
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_636 = F->saved_code_1146;
g_fields_buf_637 = F->saved_fields_1147;
g_in_func_638 = F->saved_in_1148;
g_func_sym_650 = F->saved_sym_1149;
g_exits_656 = F->saved_exits_1150;
g_frames_657 = F->saved_frames_1151;
g_handlers_658 = F->saved_handlers_1154;
g_cleanups_659 = F->saved_cleanups_1155;
g_fins_648 = F->saved_fins_1162;
g_func_rc_651 = F->saved_rc_1163;
g_cap_ret_652 = F->saved_ret_1164;
g_cap_rflag_653 = F->saved_rflag_1165;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_354(P590 d_353) {
  struct f_waits_of_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_353 = d_353;
F->w_1178 = NULL;
F->w_1178 = g_cap_waits_642;
while ((F->w_1178 != NULL)) {
if (((*(P616)rt_nil_check(F->w_1178)).d == F->d_353)) {
F->result_ = (*(P585)rt_nil_check((*(P616)rt_nil_check(F->w_1178)).w));
goto ret_;
}
F->w_1178 = (*(P616)rt_nil_check(F->w_1178)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_356(P590 elems_355) {
  struct f_task_waits_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_355 = elems_355;
F->e_1179 = NULL;
F->e_1179 = F->elems_355;
F->r_1180 = NULL;
F->r_1180 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1179 != NULL)) {
if (((*(P590)rt_nil_check(F->e_1179)).kind == (((rt_int)50LL)))) {
F->r_1180 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->r_1180)), rt_str(" rt_await_decl(&", 16)), (*(P585)rt_nil_check((*(P598)rt_nil_check(f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_1179)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P590)rt_nil_check(F->e_1179)).kind == (((rt_int)47LL))) || (((*(P590)rt_nil_check(F->e_1179)).kind == (((rt_int)48LL))) && (((*(P590)rt_nil_check(F->e_1179)).flag == ((rt_int)1LL)) || ((*(P590)rt_nil_check(F->e_1179)).flag == ((rt_int)3LL)))))) {
F->r_1180 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->r_1180)), f_waits_of_354(F->e_1179)); b_; }));
}
F->e_1179 = (*(P590)rt_nil_check(F->e_1179)).next;
}
F->result_ = (*(P585)rt_nil_check(F->r_1180));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_358(P590 elems_357) {
  struct f_await_tasks_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_357 = elems_357;
F->w_1181 = rt_str_copy(f_task_waits_356(F->elems_357));
if (((F->w_1181).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1181);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_360(P590 elems_359) {
  struct f_capsule_elements_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_359 = elems_359;
F->e_1182 = NULL;
F->e_1182 = F->elems_359;
while ((F->e_1182 != NULL)) {
f_element_333(F->e_1182);
F->e_1182 = (*(P590)rt_nil_check(F->e_1182)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_has_return_362(P590 e_361) {
  struct f_has_return_362fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_361 = e_361;
F->x_1183 = NULL;
F->x_1183 = F->e_361;
while ((F->x_1183 != NULL)) {
if (((*(P590)rt_nil_check(F->x_1183)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P590)rt_nil_check(F->x_1183)).kind != (((rt_int)45LL))) && ((*(P590)rt_nil_check(F->x_1183)).kind != (((rt_int)46LL)))) && ((*(P590)rt_nil_check(F->x_1183)).kind != (((rt_int)50LL)))) && ((*(P590)rt_nil_check(F->x_1183)).kind != (((rt_int)47LL)))) && ((*(P590)rt_nil_check(F->x_1183)).kind != (((rt_int)51LL))))) {
if ((((((*(P590)rt_nil_check(F->x_1183)).a != NULL) && f_has_return_362((*(P590)rt_nil_check(F->x_1183)).a)) || (((*(P590)rt_nil_check(F->x_1183)).b != NULL) && f_has_return_362((*(P590)rt_nil_check(F->x_1183)).b))) || (((*(P590)rt_nil_check(F->x_1183)).c != NULL) && f_has_return_362((*(P590)rt_nil_check(F->x_1183)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1183 = (*(P590)rt_nil_check(F->x_1183)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_364(P590 elems_363) {
  struct f_capsule_body_364fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_363 = elems_363;
F->saved_ret_1184 = NULL;
F->saved_ret_1184 = g_cap_ret_652;
F->saved_flag_1185 = NULL;
F->saved_flag_1185 = g_cap_rflag_653;
F->saved_frames_1186 = g_ret_frames_654;
F->e_1187 = NULL;
F->e_1187 = F->elems_363;
if ((!f_has_return_362(F->elems_363))) {
g_cap_ret_652 = NULL;
g_cap_rflag_653 = NULL;
f_capsule_elements_360(F->elems_363);
} else {
g_cap_rflag_653 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_178(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(g_cap_rflag_653)), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1187 != NULL)) {
F->stmt_1188 = (((*(P590)rt_nil_check(F->e_1187)).kind >= (((rt_int)20LL))) && ((*(P590)rt_nil_check(F->e_1187)).kind <= (((rt_int)36LL))));
g_cap_ret_652 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_654 = g_frames_657;
if (F->stmt_1188) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (*(P585)rt_nil_check(g_cap_rflag_653))), rt_str(") {", 3)); b_; }));
}
f_element_333(F->e_1187);
if (F->stmt_1188) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(g_cap_ret_652)), rt_str(": ;", 3)); b_; }));
F->e_1187 = (*(P590)rt_nil_check(F->e_1187)).next;
}
}
g_cap_ret_652 = F->saved_ret_1184;
g_cap_rflag_653 = F->saved_flag_1185;
g_ret_frames_654 = F->saved_frames_1186;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_366(P590 elems_365) {
  struct f_body_elements_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_365 = elems_365;
f_capsule_elements_360(F->elems_365);
f_await_tasks_358(F->elems_365);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_368(P590 elems_367) {
  struct f_gen_body_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_367 = elems_367;
F->saved_1189 = NULL;
F->saved_1189 = g_fins_648;
f_open_scope_151();
f_declare_body_298(F->elems_367);
f_body_elements_366(F->elems_367);
f_close_fins_345(F->saved_1189);
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_370(rt_int upto_369) {
  struct f_pop_frames_370fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_369 = upto_369;
F->i_1190 = g_frames_657;
F->c_1191 = NULL;
F->c_1191 = g_cleanups_659;
while ((F->i_1190 > F->upto_369)) {
f_emit_29(&(*(P585)rt_nil_check((*(P608)rt_nil_check(F->c_1191)).s)));
F->c_1191 = (*(P608)rt_nil_check(F->c_1191)).next;
F->i_1190 = rt_sub(F->i_1190, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_372(rstr *s_371) {
  struct f_push_cleanup_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_371 = s_371;
F->c_1192 = NULL;
{ R609 *cell1193 = rt_alloc(sizeof(R609));
(*cell1193).s = NULL;
(*cell1193).next = NULL;
F->c_1192 = cell1193;
}
(*(P608)rt_nil_check(F->c_1192)).s = f_mk_3(&(*F->s_371));
(*(P608)rt_nil_check(F->c_1192)).next = g_cleanups_659;
g_cleanups_659 = F->c_1192;
g_frames_657 = rt_add(g_frames_657, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_373(void) {
  struct f_pop_cleanup_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_659 = (*(P608)rt_nil_check(g_cleanups_659)).next;
g_frames_657 = rt_sub(g_frames_657, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_375(P590 s_374) {
  struct f_gen_statement_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_374 = s_374;
F->label_1194 = NULL;
if (((*(P590)rt_nil_check(F->s_374)).tag != NULL)) {
F->x_1195 = NULL;
{ R613 *cell1196 = rt_alloc(sizeof(R613));
(*cell1196).match = NULL;
(*cell1196).label = NULL;
(*cell1196).next = NULL;
F->x_1195 = cell1196;
}
F->label_1194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P612)rt_nil_check(F->x_1195)).match = (*(P590)rt_nil_check(F->s_374)).tag;
(*(P612)rt_nil_check(F->x_1195)).label = F->label_1194;
(*(P612)rt_nil_check(F->x_1195)).depth = g_frames_657;
(*(P612)rt_nil_check(F->x_1195)).next = g_exits_656;
g_exits_656 = F->x_1195;
}
{ rt_int sel1197 = (*(P590)rt_nil_check(F->s_374)).kind;
if (0 || (sel1197 == (((rt_int)20LL)))) {
f_st_assign_377(F->s_374);
} else if (0 || (sel1197 == (((rt_int)21LL)))) {
f_st_call_379(F->s_374);
} else if (0 || (sel1197 == (((rt_int)22LL)))) {
f_st_if_381(F->s_374);
} else if (0 || (sel1197 == (((rt_int)23LL)))) {
f_st_case_383(F->s_374);
} else if (0 || (sel1197 == (((rt_int)24LL)))) {
f_st_repeat_385(F->s_374);
} else if (0 || (sel1197 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_368((*(P590)rt_nil_check(F->s_374)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1197 == (((rt_int)27LL)))) {
f_st_exit_387(F->s_374);
} else if (0 || (sel1197 == (((rt_int)28LL)))) {
f_st_return_389(F->s_374);
} else if (0 || (sel1197 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_396(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_374)).name)), (*(P590)rt_nil_check(F->s_374)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1197 == (((rt_int)31LL)))) {
if ((g_handlers_658 == NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_374)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P585)rt_nil_check((*(P608)rt_nil_check(g_handlers_658)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1197 == (((rt_int)26LL)))) {
f_st_guard_398(F->s_374);
} else if (0 || (sel1197 == (((rt_int)32LL)))) {
f_st_alloc_400(F->s_374);
} else if (0 || (sel1197 == (((rt_int)34LL)))) {
f_st_create_404(F->s_374);
} else if (0 || (sel1197 == (((rt_int)35LL)))) {
f_st_wait_433(F->s_374);
} else if (0 || (sel1197 == (((rt_int)36LL)))) {
f_st_region_441(F->s_374);
} else {
f_fail_23((*(P590)rt_nil_check(F->s_374)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P590)rt_nil_check(F->s_374)).tag != NULL)) {
g_exits_656 = (*(P612)rt_nil_check(g_exits_656)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->label_1194)), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_377(P590 s_376) {
  struct f_st_assign_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_376 = s_376;
F->lv_1198 = NULL;
F->t_1199 = NULL;
F->vt_1200 = NULL;
F->c_1201 = NULL;
if (((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).kind == (((rt_int)10LL))) && ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).b != NULL)) && ((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_496((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).a, &F->lv_1198, &F->t_1199, &F->c_1201, &F->ro_1202);
if ((F->ro_1202 || ((*(P594)rt_nil_check(F->t_1199)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P590)rt_nil_check(F->s_376)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1203 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).b)).a, g_ty_int_662, &F->vt_1200));
F->hi_1204 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->s_376)).a)).b)).b, g_ty_int_662, &F->vt_1200));
F->v_1205 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_376)).b, g_ty_string_666, &F->vt_1200));
f_check_type_204(F->vt_1200, g_ty_string_666, (*(P590)rt_nil_check(F->s_376)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P585)rt_nil_check(F->lv_1198))), rt_str(", ", 2)), F->lo_1203), rt_str(", ", 2)), F->hi_1204), rt_str(", ", 2)), F->v_1205), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_496((*(P590)rt_nil_check(F->s_376)).a, &F->lv_1198, &F->t_1199, &F->c_1201, &F->ro_1202);
if (F->ro_1202) {
f_fail_23((*(P590)rt_nil_check(F->s_376)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_221(F->t_1199)) && (!f_exports_op_320((*(P594)rt_nil_check(F->t_1199)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P590)rt_nil_check(F->s_376)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_1199)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1206 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_376)).b, F->t_1199, &F->vt_1200));
f_check_type_204(F->vt_1200, F->t_1199, (*(P590)rt_nil_check(F->s_376)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_279(&(*(P585)rt_nil_check(F->lv_1198)), F->t_1199, &F->v_1206, F->c_1201); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_379(P590 s_378) {
  struct f_st_call_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_378 = s_378;
F->c_1207 = NULL;
F->c_1207 = (*(P590)rt_nil_check(F->s_378)).a;
F->t_1208 = NULL;
if ((((*(P590)rt_nil_check(F->c_1207)).kind == (((rt_int)7LL))) || ((*(P590)rt_nil_check(F->c_1207)).kind == (((rt_int)12LL))))) {
F->x_1209 = NULL;
F->x_1209 = f_nn_48((((rt_int)10LL)), (*(P590)rt_nil_check(F->c_1207)).line);
(*(P590)rt_nil_check(F->x_1209)).a = F->c_1207;
F->c_1207 = F->x_1209;
}
if (((*(P590)rt_nil_check(F->c_1207)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P590)rt_nil_check(F->s_378)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_570(F->c_1207, 1, &F->t_1208), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_381(P590 s_380) {
  struct f_st_if_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_380 = s_380;
F->a_1210 = NULL;
F->a_1210 = (*(P590)rt_nil_check(F->s_380)).a;
F->first_1211 = 1;
F->t_1212 = NULL;
F->taken_1213 = 0;
F->mv_1215 = NULL;
while (((F->a_1210 != NULL) && (!F->taken_1213))) {
F->mv_1215 = f_meval_262((*(P590)rt_nil_check(F->a_1210)).a, &F->ok_1214);
if (((F->ok_1214 && ((*(P606)rt_nil_check(F->mv_1215)).kind == (((rt_int)2LL)))) && ((*(P606)rt_nil_check(F->mv_1215)).i == ((rt_int)0LL)))) {
F->a_1210 = (*(P590)rt_nil_check(F->a_1210)).next;
} else {
if ((F->ok_1214 && ((*(P606)rt_nil_check(F->mv_1215)).kind == (((rt_int)2LL))))) {
F->taken_1213 = 1;
if (F->first_1211) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1216 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->a_1210)).a, g_ty_bool_663, &F->t_1212));
f_check_type_204(F->t_1212, g_ty_bool_663, (*(P590)rt_nil_check(F->s_380)).line);
if (F->first_1211) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1216), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1216), rt_str(") {", 3)); b_; }));
}
}
F->first_1211 = 0;
f_gen_body_368((*(P590)rt_nil_check(F->a_1210)).b);
F->a_1210 = (*(P590)rt_nil_check(F->a_1210)).next;
}
}
if ((((*(P590)rt_nil_check(F->s_380)).flag == ((rt_int)1LL)) && (!F->taken_1213))) {
if (F->first_1211) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1211 = 0;
f_gen_body_368((*(P590)rt_nil_check(F->s_380)).b);
}
if ((!F->first_1211)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_383(P590 s_382) {
  struct f_st_case_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_382 = s_382;
F->st_1217 = NULL;
F->vt_1218 = NULL;
F->first_1219 = 1;
F->a_1220 = NULL;
F->a_1220 = (*(P590)rt_nil_check(F->s_382)).b;
F->sel_1221 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_382)).a, NULL, &F->st_1217));
F->tmp_1222 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_206(F->st_1217)), rt_str(" ", 1)), F->tmp_1222), rt_str(" = ", 3)), F->sel_1221), rt_str(";", 1)); b_; }));
while ((F->a_1220 != NULL)) {
F->lab_1223 = NULL;
F->lab_1223 = (*(P590)rt_nil_check(F->a_1220)).a;
F->conds_1224 = NULL;
F->conds_1224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1223 != NULL)) {
if (((*(P590)rt_nil_check(F->lab_1223)).b == NULL)) {
F->v_1225 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->lab_1223)).a, F->st_1217, &F->vt_1218));
f_check_type_204(F->vt_1218, F->st_1217, (*(P590)rt_nil_check(F->s_382)).line);
F->conds_1224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->conds_1224)), rt_str(" || ", 4)), f_eq_code_286(F->st_1217, &F->tmp_1222, &F->v_1225)); b_; }));
} else {
F->lo_1226 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->lab_1223)).a, F->st_1217, &F->vt_1218));
F->hi_1227 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->lab_1223)).b, F->st_1217, &F->vt_1218));
F->conds_1224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->conds_1224)), rt_str(" || (", 5)), F->tmp_1222), rt_str(" >= ", 4)), F->lo_1226), rt_str(" && ", 4)), F->tmp_1222), rt_str(" <= ", 4)), F->hi_1227), rt_str(")", 1)); b_; }));
}
F->lab_1223 = (*(P590)rt_nil_check(F->lab_1223)).next;
}
if (F->first_1219) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P585)rt_nil_check(F->conds_1224))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P585)rt_nil_check(F->conds_1224))), rt_str(") {", 3)); b_; }));
}
F->first_1219 = 0;
f_gen_body_368((*(P590)rt_nil_check(F->a_1220)).b);
F->a_1220 = (*(P590)rt_nil_check(F->a_1220)).next;
}
if (F->first_1219) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P590)rt_nil_check(F->s_382)).flag == ((rt_int)1LL))) {
f_gen_body_368((*(P590)rt_nil_check(F->s_382)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_385(P590 s_384) {
  struct f_st_repeat_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_384 = s_384;
F->t_1228 = NULL;
F->c_1229 = NULL;
if (((*(P590)rt_nil_check(F->s_384)).flag == ((rt_int)0LL))) {
F->cond_1230 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_384)).a, g_ty_bool_663, &F->t_1228));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1230), rt_str(") {", 3)); b_; }));
f_gen_body_368((*(P590)rt_nil_check(F->s_384)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1228 = f_resolve_subtype_217((*(P590)rt_nil_check(F->s_384)).a, &F->c_1229);
F->c_1229 = f_base_cons_198(F->t_1228, F->c_1229);
if ((((*(P594)rt_nil_check(f_base_of_195(F->t_1228))).kind == (((rt_int)4LL))) && ((*(P592)rt_nil_check(F->c_1229)).lo == NULL))) {
F->c_1229 = f_new_cons_158();
(*(P592)rt_nil_check(F->c_1229)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P592)rt_nil_check(F->c_1229)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(f_base_of_195(F->t_1228))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P592)rt_nil_check(F->c_1229)).lo == NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_384)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1231 = rt_str_copy(f_storage_336(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_384)).name)), F->t_1228));
F->lov_1232 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1233 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1234 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1235 = NULL;
F->y_1235 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->s_384)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1232), rt_str(" = ", 3)), (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_1229)).lo))), rt_str(", ", 2)), F->hiv_1233), rt_str(" = ", 3)), (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_1229)).hi))), rt_str(";", 1)); b_; }));
if (((*(P590)rt_nil_check(F->s_384)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1234), rt_str(" = ", 3)), F->hiv_1233), rt_str("; ", 2)), F->it_1234), rt_str(" >= ", 4)), F->lov_1232), rt_str("; ", 2)), F->it_1234), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1234), rt_str(" = ", 3)), F->lov_1232), rt_str("; ", 2)), F->it_1234), rt_str(" <= ", 4)), F->hiv_1233), rt_str("; ", 2)), F->it_1234), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1231, rt_str(" = ", 3)), F->it_1234), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P598)rt_nil_check(F->y_1235)).t = F->t_1228;
(*(P598)rt_nil_check(F->y_1235)).c = F->c_1229;
f_bind_339(F->y_1235, &F->access_1231);
(*(P598)rt_nil_check(F->y_1235)).ro_flag = 1;
f_define_145(F->y_1235, (*(P590)rt_nil_check(F->s_384)).line);
f_gen_body_368((*(P590)rt_nil_check(F->s_384)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_387(P590 s_386) {
  struct f_st_exit_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_386 = s_386;
F->x_1236 = NULL;
F->x_1236 = g_exits_656;
while ((F->x_1236 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P612)rt_nil_check(F->x_1236)).match)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_386)).name)))) {
f_pop_frames_370((*(P612)rt_nil_check(F->x_1236)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P585)rt_nil_check((*(P612)rt_nil_check(F->x_1236)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1236 = (*(P612)rt_nil_check(F->x_1236)).next;
}
f_fail_23((*(P590)rt_nil_check(F->s_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_386)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_389(P590 s_388) {
  struct f_st_return_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_388 = s_388;
F->vt_1237 = NULL;
if ((g_cap_ret_652 != NULL)) {
if (((*(P590)rt_nil_check(F->s_388)).a != NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_388)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_370(g_ret_frames_654);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(g_cap_rflag_653)), rt_str(" = 1; goto ", 11)), (*(P585)rt_nil_check(g_cap_ret_652))), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_638)) {
f_pop_frames_370(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P594)rt_nil_check((*(P598)rt_nil_check(g_func_sym_650)).result)).kind == (((rt_int)9LL)))) {
if (((*(P590)rt_nil_check(F->s_388)).a != NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_388)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_370(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P590)rt_nil_check(F->s_388)).a == NULL)) {
f_fail_23((*(P590)rt_nil_check(F->s_388)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1238 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_388)).a, (*(P598)rt_nil_check(g_func_sym_650)).result, &F->vt_1237));
f_check_type_204(F->vt_1237, (*(P598)rt_nil_check(g_func_sym_650)).result, (*(P590)rt_nil_check(F->s_388)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_393((*(P598)rt_nil_check(g_func_sym_650)).result, g_func_rc_651, &F->v_1238)), rt_str(";", 1)); b_; }));
f_pop_frames_370(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_393(P594 t_390, P592 c_391, rstr *v_392) {
  struct f_result_checked_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_390 = t_390;
F->c_391 = c_391;
F->v_392 = v_392;
if ((F->c_391 == NULL)) {
F->result_ = (*F->v_392);
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_390)).kind == (((rt_int)5LL))) && ((*(P592)rt_nil_check(F->c_391)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_392)), rt_str(", ", 2)), (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_391)).slen))), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->t_390)).kind == (((rt_int)6LL))) && ((*(P592)rt_nil_check(F->c_391)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_206(F->t_390)), rt_str(" r_ = ", 6)), (*F->v_392)), rt_str("; if (RT_CNT(r_) != (", 21)), (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_391)).hi))), rt_str(") - (", 5)), (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_391)).lo))), rt_str(") + 1) rt_raise_msg(RT_X_SUBTYPE, ", 34)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_187(F->t_390, F->c_391, &(*F->v_392));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_396(rstr *name_394, rt_int line_395) {
  struct f_exc_id_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_394 = name_394;
F->line_395 = line_395;
F->y_1239 = NULL;
F->y_1239 = f_lookup_140(&(*F->name_394));
if (((F->y_1239 != NULL) && ((*(P598)rt_nil_check(F->y_1239)).kind == (((rt_int)7LL))))) {
F->result_ = (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1239)).cname));
goto ret_;
}
if (((((*F->name_394)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_394), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_394)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_394), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_398(P590 s_397) {
  struct f_st_guard_398fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_397 = s_397;
F->h_1240 = NULL;
F->h_1240 = (*(P590)rt_nil_check(F->s_397)).b;
F->first_1241 = 1;
F->hv_1242 = NULL;
{
F->f_1243 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1244 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1243), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1243), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1243), rt_str(")) {", 4)); b_; }));
f_gen_body_368((*(P590)rt_nil_check(F->s_397)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1243), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_373();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1243), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1244), rt_str(" = rt_xcur;", 11)); b_; }));
{ R609 *cell1245 = rt_alloc(sizeof(R609));
(*cell1245).s = NULL;
(*cell1245).next = NULL;
F->hv_1242 = cell1245;
}
(*(P608)rt_nil_check(F->hv_1242)).s = f_mk_3(&F->x_1244);
(*(P608)rt_nil_check(F->hv_1242)).next = g_handlers_658;
g_handlers_658 = F->hv_1242;
while ((F->h_1240 != NULL)) {
F->n_1246 = NULL;
F->n_1246 = (*(P590)rt_nil_check(F->h_1240)).a;
F->conds_1247 = NULL;
F->conds_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1246 != NULL)) {
F->conds_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->conds_1247)), rt_str(" || ", 4)), F->x_1244), rt_str(" == ", 4)), f_exc_id_396(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->n_1246)).name)), (*(P590)rt_nil_check(F->s_397)).line)); b_; }));
F->n_1246 = (*(P590)rt_nil_check(F->n_1246)).next;
}
if (F->first_1241) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P585)rt_nil_check(F->conds_1247))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P585)rt_nil_check(F->conds_1247))), rt_str(") {", 3)); b_; }));
}
F->first_1241 = 0;
f_gen_body_368((*(P590)rt_nil_check(F->h_1240)).b);
F->h_1240 = (*(P590)rt_nil_check(F->h_1240)).next;
}
if (F->first_1241) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P590)rt_nil_check(F->s_397)).flag == ((rt_int)1LL))) {
f_gen_body_368((*(P590)rt_nil_check(F->s_397)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1244), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_658 = (*(P608)rt_nil_check(g_handlers_658)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_400(P590 s_399) {
  struct f_st_alloc_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_399 = s_399;
F->lv_1248 = NULL;
F->t_1249 = NULL;
F->target_1250 = NULL;
F->vt_1251 = NULL;
F->c_1252 = NULL;
F->tc_1253 = NULL;
F->d_1255 = NULL;
F->p_1256 = NULL;
F->a_1257 = NULL;
f_lvalue_496((*(P590)rt_nil_check(F->s_399)).a, &F->lv_1248, &F->t_1249, &F->c_1252, &F->ro_1254);
if (((*(P594)rt_nil_check(F->t_1249)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P590)rt_nil_check(F->s_399)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_327(F->t_1249);
F->d_1255 = (*(P594)rt_nil_check(F->t_1249)).decl;
F->target_1250 = (*(P594)rt_nil_check(F->t_1249)).target;
if ((f_list_len_54((*(P590)rt_nil_check(F->s_399)).b) != f_list_len_54((*(P590)rt_nil_check(F->d_1255)).b))) {
f_fail_23((*(P590)rt_nil_check(F->s_399)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P590)rt_nil_check(F->d_1255)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1258 = rt_str_copy(f_ctype_206(F->target_1250));
F->cell_1259 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_240(F->target_1250)) {
F->fn_1260 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_647 = 1;
g_uses_findyn_649 = 1;
f_put_27(g_out_protos_631, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1260), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1260), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_638) {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P585)rt_nil_check((*(P598)rt_nil_check(g_func_sym_650)).cname))), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1258), rt_str(" *)cell_)", 9)); b_; }), F->target_1250)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_638) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1258), rt_str(" *", 2)), F->cell_1259), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1258), rt_str("), ", 3)), F->fn_1260), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1258), rt_str(" *", 2)), F->cell_1259), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1258), rt_str("), ", 3)), F->fn_1260), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1258), rt_str(" *", 2)), F->cell_1259), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1258), rt_str("));", 3)); b_; }));
}
f_open_scope_151();
F->p_1256 = (*(P590)rt_nil_check(F->d_1255)).b;
F->a_1257 = (*(P590)rt_nil_check(F->s_399)).b;
while ((F->p_1256 != NULL)) {
F->v_1261 = rt_str_copy(f_gexpr_519(F->a_1257, g_ty_int_662, &F->vt_1251));
F->pv_1262 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1263 = NULL;
F->y_1263 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->p_1256)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1262), rt_str(" = ", 3)), F->v_1261), rt_str(";", 1)); b_; }));
(*(P598)rt_nil_check(F->y_1263)).t = g_ty_int_662;
(*(P598)rt_nil_check(F->y_1263)).access = f_mk_3(&F->pv_1262);
f_define_145(F->y_1263, (*(P590)rt_nil_check(F->s_399)).line);
F->p_1256 = (*(P590)rt_nil_check(F->p_1256)).next;
F->a_1257 = (*(P590)rt_nil_check(F->a_1257)).next;
}
F->vt_1251 = f_resolve_subtype_217((*(P590)rt_nil_check(F->d_1255)).a, &F->tc_1253);
f_init_storage_235(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1259), rt_str(")", 1)); b_; }), F->target_1250, F->tc_1253);
f_close_scope_152();
if (((*(P590)rt_nil_check(F->s_399)).c != NULL)) {
F->v_1264 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->s_399)).c, F->target_1250, &F->vt_1251));
f_check_type_204(F->vt_1251, F->target_1250, (*(P590)rt_nil_check(F->s_399)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_279(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1259), rt_str(")", 1)); b_; }), F->target_1250, &F->v_1264, F->tc_1253); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->lv_1248)), rt_str(" = ", 3)), F->cell_1259), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_402(P590 e_401) {
  struct f_act_ref_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_401 = e_401;
F->lv_1265 = NULL;
F->t_1266 = NULL;
F->c_1267 = NULL;
if (((((*(P590)rt_nil_check(F->e_401)).kind == (((rt_int)7LL))) && rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_401)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_490(F->e_401))) {
F->v_1269 = rt_str_copy(f_gexpr_519(F->e_401, g_ty_act_672, &F->t_1266));
if (((*(P594)rt_nil_check(F->t_1266)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P590)rt_nil_check(F->e_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1269;
goto ret_;
}
f_lvalue_496(F->e_401, &F->lv_1265, &F->t_1266, &F->c_1267, &F->ro_1268);
if (((*(P594)rt_nil_check(F->t_1266)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P590)rt_nil_check(F->e_401)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P585)rt_nil_check(F->lv_1265));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_404(P590 s_403) {
  struct f_st_create_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_403 = s_403;
F->y_1270 = NULL;
F->y_1270 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_403)).name)));
F->pm_1271 = NULL;
F->a_1272 = NULL;
F->a_1272 = (*(P590)rt_nil_check(F->s_403)).b;
F->lv_1273 = NULL;
F->lt_1274 = NULL;
F->vt_1275 = NULL;
F->lc_1276 = NULL;
if (((F->y_1270 != NULL) && ((*(P598)rt_nil_check(F->y_1270)).kind == (((rt_int)10LL))))) {
F->y_1270 = f_instantiate_475(F->y_1270, (*(P590)rt_nil_check(F->s_403)).e, (*(P590)rt_nil_check(F->s_403)).b, (*(P590)rt_nil_check(F->s_403)).line);
}
if (((F->y_1270 == NULL) || ((*(P598)rt_nil_check(F->y_1270)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P590)rt_nil_check(F->s_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_403)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1271 = (*(P598)rt_nil_check(F->y_1270)).params;
{
F->at_1278 = NULL;
F->ac_1279 = NULL;
F->act_1281 = NULL;
F->nf_1282 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_496((*(P590)rt_nil_check(F->s_403)).a, &F->lv_1273, &F->at_1278, &F->ac_1279, &F->aro_1280);
if (((*(P594)rt_nil_check(F->at_1278)).kind == (((rt_int)14LL)))) {
F->act_1281 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_402((*(P590)rt_nil_check(F->s_403)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1270)).cname))), rt_str("fr *", 4)), F->nf_1282), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1282), rt_str(");", 2)); b_; }));
if (((*(P598)rt_nil_check(F->y_1270)).level > ((rt_int)0LL))) {
F->link_1283 = NULL;
F->link_1283 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1285 = ((rt_int)1LL), hi1286 = rt_sub(g_cur_level_639, (*(P598)rt_nil_check(F->y_1270)).level);
for (rt_int it1287 = lo1285; it1287 <= hi1286; it1287++) {
F->i_1284 = it1287;
F->link_1283 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->link_1283)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1282, rt_str("->up = ", 7)), (*(P585)rt_nil_check(F->link_1283))), rt_str(";", 1)); b_; }));
}
while (((F->a_1272 != NULL) && (F->pm_1271 != NULL))) {
if (((*(P600)rt_nil_check(F->pm_1271)).mode == (((rt_int)1LL)))) {
F->v_1288 = rt_str_copy(f_gexpr_519(F->a_1272, (*(P600)rt_nil_check(F->pm_1271)).t, &F->vt_1275));
f_check_type_204(F->vt_1275, (*(P600)rt_nil_check(F->pm_1271)).t, (*(P590)rt_nil_check(F->s_403)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1282, rt_str("->", 2)), (*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1271)).cfield))), rt_str(" = ", 3)), f_copy_code_282((*(P600)rt_nil_check(F->pm_1271)).t, &F->v_1288)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_496(F->a_1272, &F->lv_1273, &F->lt_1274, &F->lc_1276, &F->ro_1277);
f_check_type_204(F->lt_1274, (*(P600)rt_nil_check(F->pm_1271)).t, (*(P590)rt_nil_check(F->s_403)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1282, rt_str("->", 2)), (*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1271)).cfield))), rt_str(" = &", 4)), (*(P585)rt_nil_check(F->lv_1273))), rt_str(";", 1)); b_; }));
if (f_scalar_kind_160((*(P600)rt_nil_check(F->pm_1271)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1282, rt_str("->", 2)), (*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1271)).cfield))), rt_str("lo = ", 5)), f_sub_lo_172(F->lt_1274, F->lc_1276)), rt_str("; ", 2)), F->nf_1282), rt_str("->", 2)), (*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1271)).cfield))), rt_str("hi = ", 5)), f_sub_hi_175(F->lt_1274, F->lc_1276)), rt_str(";", 1)); b_; }));
}
}
F->a_1272 = (*(P590)rt_nil_check(F->a_1272)).next;
F->pm_1271 = (*(P600)rt_nil_check(F->pm_1271)).next;
}
if (((F->a_1272 != NULL) || (F->pm_1271 != NULL))) {
f_fail_23((*(P590)rt_nil_check(F->s_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->s_403)).name))); b_; }));
}
if ((F->act_1281 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P585)rt_nil_check(F->act_1281))), rt_str(", &", 3)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1270)).cname))), rt_str("decl, ", 6)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1270)).cname))), rt_str(", ", 2)), F->nf_1282), rt_str("); }", 4)); b_; }));
} else {
f_user_create_414(F->s_403, F->y_1270, &(*(P585)rt_nil_check(F->lv_1273)), F->at_1278, &F->nf_1282);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_408(rstr *name_405, P594 t_406, rstr *place_407) {
  struct f_hidden_var_408fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_405 = name_405;
F->t_406 = t_406;
F->place_407 = place_407;
F->y_1289 = NULL;
F->y_1289 = f_new_sym_155((((rt_int)1LL)), f_mk_3(&(*F->name_405)));
(*(P598)rt_nil_check(F->y_1289)).t = F->t_406;
(*(P598)rt_nil_check(F->y_1289)).level = ((rt_int)0LL);
(*(P598)rt_nil_check(F->y_1289)).access = f_mk_3(&(*F->place_407));
f_define_145(F->y_1289, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_414(P590 s_409, P598 y_410, rstr *uv_411, P594 ut_412, rstr *nf_413) {
  struct f_user_create_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_409 = s_409;
F->y_410 = y_410;
F->uv_411 = uv_411;
F->ut_412 = ut_412;
F->nf_413 = nf_413;
F->t_1290 = NULL;
F->saved_1291 = NULL;
F->saved_1291 = g_code_636;
F->hook_1292 = NULL;
F->hook_1292 = f_new_buffer_24();
F->un_1293 = NULL;
F->un_1293 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->s_409)).line);
F->hn_1294 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1295 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1296 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1297 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_408(&F->uname_1296, F->ut_412, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_206(F->ut_412)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P590)rt_nil_check(F->un_1293)).name = f_mk_3(&F->uname_1296);
g_code_636 = F->hook_1292;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1293, (*(P590)rt_nil_check(F->s_409)).line), 1, &F->t_1290)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1293, (*(P590)rt_nil_check(F->s_409)).line), 1, &F->t_1290)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1293, (*(P590)rt_nil_check(F->s_409)).line), 1, &F->t_1290)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1293, (*(P590)rt_nil_check(F->s_409)).line), 1, &F->t_1290)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_636 = F->saved_1291;
f_put_27(g_out_protos_631, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1294), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1294), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_638) {
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P585)rt_nil_check((*(P598)rt_nil_check(g_func_sym_650)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_633, F->hook_1292);
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_633, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1295), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1295, rt_str("->hook = ", 9)), F->hn_1294), rt_str("; ", 2)), F->aa_1295), rt_str("->ua = &", 8)), (*F->uv_411)), rt_str("; ", 2)), F->aa_1295), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_560(F->ut_412)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_638) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1295, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1295), rt_str(", &", 3)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_410)).cname))), rt_str("decl, ", 6)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_410)).cname))), rt_str(", ", 2)), (*F->nf_413)), rt_str(");", 2)); b_; }));
f_hidden_var_408(&F->aname_1297, g_ty_act_672, &F->aa_1295);
{
F->start_1298 = NULL;
F->start_1298 = f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P590)rt_nil_check(F->s_409)).a, (*(P590)rt_nil_check(F->s_409)).line);
F->an_1299 = NULL;
F->an_1299 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->s_409)).line);
(*(P590)rt_nil_check(F->an_1299)).name = f_mk_3(&F->aname_1297);
(*(P590)rt_nil_check((*(P590)rt_nil_check(F->start_1298)).b)).next = F->an_1299;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_570(F->start_1298, 1, &F->t_1290), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_419(P590 inv_415, rstr *arr_416, rt_int i_417, int mixed_418) {
  struct f_wait_alt_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_415 = inv_415;
F->arr_416 = arr_416;
F->i_417 = i_417;
F->mixed_418 = mixed_418;
F->lv_1300 = NULL;
F->t_1301 = NULL;
F->vt_1302 = NULL;
F->c_1303 = NULL;
F->fn_1305 = NULL;
F->args_1306 = NULL;
F->slot_1307 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_416), rt_str("[", 1)), f_itos_7(F->i_417)), rt_str("]", 1)));
if ((((*(P590)rt_nil_check(F->inv_415)).kind != (((rt_int)10LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_415)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P590)rt_nil_check(F->inv_415)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1305 = (*(P590)rt_nil_check(F->inv_415)).a;
F->args_1306 = (*(P590)rt_nil_check(F->inv_415)).b;
if ((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_496(F->args_1306, &F->lv_1300, &F->t_1301, &F->c_1303, &F->ro_1304);
if (((*(P594)rt_nil_check(F->t_1301)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P590)rt_nil_check(F->inv_415)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("RECEIVE", 7))) {
F->dv_1308 = NULL;
F->dt_1309 = NULL;
f_lvalue_496((*(P590)rt_nil_check(F->args_1306)).next, &F->dv_1308, &F->dt_1309, &F->c_1303, &F->ro_1304);
f_check_type_204(F->dt_1309, (*(P594)rt_nil_check(F->t_1301)).elem, (*(P590)rt_nil_check(F->inv_415)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P585)rt_nil_check(F->lv_1300))), rt_str(", &", 3)), (*(P585)rt_nil_check(F->dv_1308))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1310 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1311 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_1306)).next, (*(P594)rt_nil_check(F->t_1301)).elem, &F->vt_1302));
f_check_type_204(F->vt_1302, (*(P594)rt_nil_check(F->t_1301)).elem, (*(P590)rt_nil_check(F->inv_415)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_206((*(P594)rt_nil_check(F->t_1301)).elem), rt_str(" ", 1)), F->tmp_1310), rt_str(" = ", 3)), F->v_1311), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P585)rt_nil_check(F->lv_1300))), rt_str(", &", 3)), F->tmp_1310), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1312 = rt_str_copy(f_gexpr_519(F->args_1306, g_ty_int_662, &F->vt_1302));
if ((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("DELAY", 5)) && F->mixed_418)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1312), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1312), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1312), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1307, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_402(F->args_1306)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->inv_415)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1305)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_421(P590 inv_420) {
  struct f_builtin_wait_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_420 = inv_420;
F->lv_1313 = NULL;
F->t_1314 = NULL;
F->c_1315 = NULL;
F->saved_1317 = NULL;
F->saved_1317 = g_code_636;
F->ok_1318 = 0;
if ((((*(P590)rt_nil_check(F->inv_420)).kind != (((rt_int)10LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_420)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_660 = rt_add(g_trial_660, ((rt_int)1LL));
g_code_636 = f_new_buffer_24();
{ rt_frame xf1319;
if (RT_TRY(xf1319)) {
f_lvalue_496((*(P590)rt_nil_check(F->inv_420)).b, &F->lv_1313, &F->t_1314, &F->c_1315, &F->ro_1316);
F->ok_1318 = ((*(P594)rt_nil_check(F->t_1314)).kind == (((rt_int)12LL)));
RT_POP(xf1319);
} else {
RT_POP(xf1319);
int x1320 = rt_xcur;
if (0 || x1320 == ex_compile_error_1) {
F->ok_1318 = 0;
} else {
rt_raise(x1320);
}
}
}
g_trial_660 = rt_sub(g_trial_660, ((rt_int)1LL));
g_code_636 = F->saved_1317;
F->result_ = F->ok_1318;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_426(P590 inv_422, rstr *op_423, rstr *q_424, int is_stmt_425) {
  struct f_wait_op_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_422 = inv_422;
F->op_423 = op_423;
F->q_424 = q_424;
F->is_stmt_425 = is_stmt_425;
F->x_1321 = NULL;
F->x_1321 = f_nn_48((((rt_int)10LL)), (*(P590)rt_nil_check(F->inv_422)).line);
F->f_1322 = NULL;
F->f_1322 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->inv_422)).line);
F->qn_1323 = NULL;
F->qn_1323 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->inv_422)).line);
F->t_1324 = NULL;
(*(P590)rt_nil_check(F->f_1322)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_422)).a)).name)), rt_str("_", 1)), (*F->op_423)); b_; }));
(*(P590)rt_nil_check(F->qn_1323)).name = f_mk_3(&(*F->q_424));
(*(P590)rt_nil_check(F->qn_1323)).next = (*(P590)rt_nil_check(F->inv_422)).b;
(*(P590)rt_nil_check(F->x_1321)).a = F->f_1322;
(*(P590)rt_nil_check(F->x_1321)).b = F->qn_1323;
{
F->r_1325 = rt_str_copy(f_gcall_570(F->x_1321, F->is_stmt_425, &F->t_1324));
if ((!F->is_stmt_425)) {
f_check_type_204(F->t_1324, g_ty_bool_663, (*(P590)rt_nil_check(F->inv_422)).line);
}
F->result_ = F->r_1325;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_431(P590 s_427, rstr *arr_428, rstr *w_429, rt_int n_430) {
  struct f_user_wait_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_427 = s_427;
F->arr_428 = arr_428;
F->w_429 = w_429;
F->n_430 = n_430;
F->a_1326 = NULL;
F->a_1326 = (*(P590)rt_nil_check(F->s_427)).a;
F->i_1327 = ((rt_int)0LL);
F->tests_1328 = NULL;
F->tests_1328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1329 = NULL;
F->revokes_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1326 != NULL)) {
F->inv_1330 = NULL;
F->inv_1330 = (*(P590)rt_nil_check(F->a_1326)).a;
while ((F->inv_1330 != NULL)) {
if (f_builtin_wait_421(F->inv_1330)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_419(F->inv_1330, &(*F->arr_428), F->i_1327, 1); b_; }));
} else {
F->st_1331 = NULL;
F->st_1331 = f_nn_48((((rt_int)80LL)), (*(P590)rt_nil_check(F->inv_1330)).line);
F->c_1332 = NULL;
F->qt_1333 = NULL;
F->qname_1334 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1335 = NULL;
F->y_1335 = f_new_sym_155((((rt_int)1LL)), f_mk_3(&F->qname_1334));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_428), rt_str("[", 1)), f_itos_7(F->i_1327)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P590)rt_nil_check(F->st_1331)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->inv_1330)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1333 = f_resolve_subtype_217(F->st_1331, &F->c_1332);
{
F->access_1336 = rt_str_copy(f_storage_336(&F->qname_1334, F->qt_1333));
f_init_storage_235(&F->access_1336, F->qt_1333, F->c_1332);
(*(P598)rt_nil_check(F->y_1335)).t = F->qt_1333;
(*(P598)rt_nil_check(F->y_1335)).c = F->c_1332;
f_bind_339(F->y_1335, &F->access_1336);
f_define_145(F->y_1335, (*(P590)rt_nil_check(F->inv_1330)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_426(F->inv_1330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1334, 1), rt_str(";", 1)); b_; }));
F->tests_1328 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->tests_1328)), rt_str("if (", 4)), f_wait_op_426(F->inv_1330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1334, 0)), rt_str(") { ", 4)), f_wait_op_426(F->inv_1330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1334, 1)), rt_str("; ", 2)), (*F->w_429)), rt_str(" = ", 3)), f_itos_7(F->i_1327)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->revokes_1329)), f_wait_op_426(F->inv_1330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1334, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1327 = rt_add(F->i_1327, ((rt_int)1LL));
F->inv_1330 = (*(P590)rt_nil_check(F->inv_1330)).next;
}
F->a_1326 = (*(P590)rt_nil_check(F->a_1326)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_429)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P585)rt_nil_check(F->tests_1328))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_429), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_430)), rt_str(", ", 2)), (*F->arr_428)), rt_str("); if (", 7)), (*F->w_429)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_430)), rt_str(", ", 2)), (*F->arr_428)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_429)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_429)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P585)rt_nil_check(F->revokes_1329)));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_433(P590 s_432) {
  struct f_st_wait_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_432 = s_432;
F->a_1337 = NULL;
F->a_1337 = (*(P590)rt_nil_check(F->s_432)).a;
F->n_1338 = ((rt_int)0LL);
F->first_1339 = 1;
F->inits_1340 = NULL;
F->inits_1340 = f_new_buffer_24();
F->user_1341 = 0;
F->arr_1342 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1343 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1337 != NULL)) {
F->inv_1344 = NULL;
F->inv_1344 = (*(P590)rt_nil_check(F->a_1337)).a;
F->n_1338 = rt_add(F->n_1338, f_list_len_54((*(P590)rt_nil_check(F->a_1337)).a));
while ((F->inv_1344 != NULL)) {
if ((!f_builtin_wait_421(F->inv_1344))) {
F->user_1341 = 1;
}
F->inv_1344 = (*(P590)rt_nil_check(F->inv_1344)).next;
}
F->a_1337 = (*(P590)rt_nil_check(F->a_1337)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1342), rt_str("[", 1)), f_itos_7(F->n_1338)), rt_str("];", 2)); b_; }));
if (F->user_1341) {
f_user_wait_431(F->s_432, &F->arr_1342, &F->w_1343, F->n_1338);
} else {
F->a_1337 = (*(P590)rt_nil_check(F->s_432)).a;
F->n_1338 = ((rt_int)0LL);
while ((F->a_1337 != NULL)) {
F->inv_1345 = NULL;
F->inv_1345 = (*(P590)rt_nil_check(F->a_1337)).a;
while ((F->inv_1345 != NULL)) {
f_put_27(F->inits_1340, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_419(F->inv_1345, &F->arr_1342, F->n_1338, 0); b_; }));
F->n_1338 = rt_add(F->n_1338, ((rt_int)1LL));
F->inv_1345 = (*(P590)rt_nil_check(F->inv_1345)).next;
}
F->a_1337 = (*(P590)rt_nil_check(F->a_1337)).next;
}
f_splice_34(g_code_636, F->inits_1340);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1343), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1338)), rt_str(", ", 2)), F->arr_1342), rt_str(");", 2)); b_; }));
}
F->a_1337 = (*(P590)rt_nil_check(F->s_432)).a;
F->n_1338 = ((rt_int)0LL);
while ((F->a_1337 != NULL)) {
F->conds_1346 = NULL;
F->conds_1346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1348 = ((rt_int)1LL), hi1349 = f_list_len_54((*(P590)rt_nil_check(F->a_1337)).a);
for (rt_int it1350 = lo1348; it1350 <= hi1349; it1350++) {
F->i_1347 = it1350;
F->conds_1346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->conds_1346)), rt_str(" || ", 4)), F->w_1343), rt_str(" == ", 4)), f_itos_7(F->n_1338)); b_; }));
F->n_1338 = rt_add(F->n_1338, ((rt_int)1LL));
}
}
if (F->first_1339) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P585)rt_nil_check(F->conds_1346))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P585)rt_nil_check(F->conds_1346))), rt_str(") {", 3)); b_; }));
}
F->first_1339 = 0;
f_gen_body_368((*(P590)rt_nil_check(F->a_1337)).b);
F->a_1337 = (*(P590)rt_nil_check(F->a_1337)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P590 f_call_node_437(rstr *name_434, P590 arg_435, rt_int line_436) {
  struct f_call_node_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_434 = name_434;
F->arg_435 = arg_435;
F->line_436 = line_436;
F->x_1351 = NULL;
F->x_1351 = f_nn_48((((rt_int)10LL)), F->line_436);
F->f_1352 = NULL;
F->f_1352 = f_nn_48((((rt_int)7LL)), F->line_436);
(*(P590)rt_nil_check(F->f_1352)).name = f_mk_3(&(*F->name_434));
(*(P590)rt_nil_check(F->x_1351)).a = F->f_1352;
(*(P590)rt_nil_check(F->x_1351)).b = f_copy_node_521(F->arg_435);
(*(P590)rt_nil_check((*(P590)rt_nil_check(F->x_1351)).b)).next = NULL;
F->result_ = F->x_1351;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_439(P590 s_438) {
  struct f_user_region_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_438 = s_438;
F->t_1353 = NULL;
F->f_1354 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1355 = rt_str_copy(f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P590)rt_nil_check(F->s_438)).a, (*(P590)rt_nil_check(F->s_438)).line), 1, &F->t_1353));
F->unlock_1356 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_570(f_call_node_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P590)rt_nil_check(F->s_438)).a, (*(P590)rt_nil_check(F->s_438)).line), 1, &F->t_1353)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1355), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1354), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1354), rt_str(")) {", 4)); b_; }));
f_push_cleanup_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1354), rt_str("); ", 3)), F->unlock_1356); b_; }));
f_gen_body_368((*(P590)rt_nil_check(F->s_438)).b);
f_pop_cleanup_373();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1354), rt_str("); ", 3)), F->unlock_1356); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1354), rt_str("); ", 3)), F->unlock_1356), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_441(P590 s_440) {
  struct f_st_region_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_440 = s_440;
F->lv_1357 = NULL;
F->t_1358 = NULL;
F->c_1359 = NULL;
F->lk_1361 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1362 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_496((*(P590)rt_nil_check(F->s_440)).a, &F->lv_1357, &F->t_1358, &F->c_1359, &F->ro_1360);
if (((*(P594)rt_nil_check(F->t_1358)).kind != (((rt_int)13LL)))) {
f_user_region_439(F->s_440);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1361), rt_str(" = &", 4)), (*(P585)rt_nil_check(F->lv_1357))), rt_str("; rt_region_enter(", 18)), F->lk_1361), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1362), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1362), rt_str(")) {", 4)); b_; }));
f_push_cleanup_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1362), rt_str("); rt_region_leave(", 19)), F->lk_1361), rt_str(");", 2)); b_; }));
f_gen_body_368((*(P590)rt_nil_check(F->s_440)).b);
f_pop_cleanup_373();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1362), rt_str("); rt_region_leave(", 19)), F->lk_1361), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1362), rt_str("); rt_region_leave(", 19)), F->lk_1361), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P590 f_gparam_444(P590 g_442, rstr *name_443) {
  struct f_gparam_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_442 = g_442;
F->name_443 = name_443;
F->p_1363 = NULL;
F->p_1363 = (*(P590)rt_nil_check(F->g_442)).a;
while ((F->p_1363 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1363)).name)), (*F->name_443))) {
F->result_ = F->p_1363;
goto ret_;
}
F->p_1363 = (*(P590)rt_nil_check(F->p_1363)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_bind_sym_446(P590 p_445) {
  struct f_bind_sym_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_445 = p_445;
F->y_1364 = NULL;
if (((*(P590)rt_nil_check(F->p_445)).ival <= ((rt_int)2LL))) {
F->y_1364 = f_new_sym_155((((rt_int)5LL)), (*(P590)rt_nil_check(F->p_445)).name);
} else {
F->y_1364 = f_new_sym_155((((rt_int)2LL)), (*(P590)rt_nil_check(F->p_445)).name);
}
F->result_ = F->y_1364;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_449(P598 a_447, P598 b_448) {
  struct f_same_binds_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_447 = a_447;
F->b_448 = b_448;
F->x_1365 = NULL;
F->x_1365 = F->a_447;
F->y_1366 = NULL;
F->y_1366 = F->b_448;
while (((F->x_1365 != NULL) && (F->y_1366 != NULL))) {
if (((!rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->x_1365)).name)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1366)).name)))) || (!f_same_binding_452(F->x_1365, F->y_1366)))) {
F->result_ = 0;
goto ret_;
}
F->x_1365 = (*(P598)rt_nil_check(F->x_1365)).mnext;
F->y_1366 = (*(P598)rt_nil_check(F->y_1366)).mnext;
}
F->result_ = ((F->x_1365 == NULL) && (F->y_1366 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_452(P598 a_450, P598 b_451) {
  struct f_same_binding_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_450 = a_450;
F->b_451 = b_451;
if (((*(P598)rt_nil_check(F->a_450)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P598)rt_nil_check(F->b_451)).kind == (((rt_int)5LL))) && f_same_193((*(P598)rt_nil_check(F->a_450)).t, (*(P598)rt_nil_check(F->b_451)).t));
goto ret_;
}
if ((((*(P598)rt_nil_check(F->a_450)).kind == (((rt_int)2LL))) && (*(P598)rt_nil_check(F->a_450)).hasmv)) {
F->result_ = ((*(P598)rt_nil_check(F->b_451)).hasmv && ((*(P598)rt_nil_check(F->a_450)).mvalue == (*(P598)rt_nil_check(F->b_451)).mvalue));
goto ret_;
}
F->result_ = ((((*(P598)rt_nil_check(F->a_450)).cname != NULL) && ((*(P598)rt_nil_check(F->b_451)).cname != NULL)) && rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->a_450)).cname)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->b_451)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_tt_binds_457(P590 gd_453, P590 formals_454, P590 actuals_455, rt_int line_456) {
  struct f_tt_binds_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_453 = gd_453;
F->formals_454 = formals_454;
F->actuals_455 = actuals_455;
F->line_456 = line_456;
F->f_1367 = NULL;
F->f_1367 = F->formals_454;
F->a_1368 = NULL;
F->a_1368 = F->actuals_455;
F->binds_1369 = NULL;
F->c_1370 = NULL;
F->at_1371 = NULL;
while (((F->f_1367 != NULL) && (F->a_1368 != NULL))) {
F->p_1372 = NULL;
F->p_1372 = f_gparam_444(F->gd_453, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->f_1367)).name)));
F->b_1373 = NULL;
if ((F->p_1372 == NULL)) {
f_fail_23(F->line_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->f_1367)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1373 = f_bind_sym_446(F->p_1372);
if (((*(P590)rt_nil_check(F->p_1372)).ival <= ((rt_int)2LL))) {
if (((*(P590)rt_nil_check(F->a_1368)).kind >= (((rt_int)70LL)))) {
(*(P598)rt_nil_check(F->b_1373)).t = f_resolve_subtype_217(F->a_1368, &F->c_1370);
} else {
F->st_1374 = NULL;
F->st_1374 = f_nn_48((((rt_int)80LL)), F->line_456);
(*(P590)rt_nil_check(F->st_1374)).name = (*(P590)rt_nil_check(F->a_1368)).name;
(*(P598)rt_nil_check(F->b_1373)).t = f_resolve_subtype_217(F->st_1374, &F->c_1370);
}
(*(P598)rt_nil_check(F->b_1373)).c = F->c_1370;
} else if (((*(P590)rt_nil_check(F->p_1372)).ival <= ((rt_int)5LL))) {
if ((((*(P590)rt_nil_check(F->a_1368)).kind != (((rt_int)7LL))) || (f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->a_1368)).name))) == NULL))) {
f_fail_23(F->line_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1372)).name))); b_; }));
}
F->b_1373 = f_copy_sym_306(f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->a_1368)).name))));
(*(P598)rt_nil_check(F->b_1373)).name = (*(P590)rt_nil_check(F->p_1372)).name;
} else {
(*(P598)rt_nil_check(F->b_1373)).t = f_resolve_subtype_217((*(P590)rt_nil_check(F->p_1372)).a, &F->c_1370);
(*(P598)rt_nil_check(F->b_1373)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519(F->a_1368, (*(P598)rt_nil_check(F->b_1373)).t, &F->at_1371); b_; }));
(*(P598)rt_nil_check(F->b_1373)).mvalue = f_manifest_253(F->a_1368, &F->ok_1375);
(*(P598)rt_nil_check(F->b_1373)).hasmv = F->ok_1375;
}
(*(P598)rt_nil_check(F->b_1373)).mnext = F->binds_1369;
F->binds_1369 = F->b_1373;
F->f_1367 = (*(P590)rt_nil_check(F->f_1367)).next;
F->a_1368 = (*(P590)rt_nil_check(F->a_1368)).next;
}
F->result_ = F->binds_1369;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_459(P590 st_458) {
  struct f_generic_use_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_458 = st_458;
if (((*(P590)rt_nil_check(F->st_458)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P598)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P590)rt_nil_check(F->st_458)).kind == (((rt_int)80LL))) && ((*(P590)rt_nil_check(F->st_458)).a != NULL)) && (f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_458)).name))) != NULL)) && ((*(P598)rt_nil_check(f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->st_458)).name))))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_infer_from_464(P590 gd_460, P590 pat_461, P594 t_462, P598 known_463) {
  struct f_infer_from_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_460 = gd_460;
F->pat_461 = pat_461;
F->t_462 = t_462;
F->known_463 = known_463;
F->binds_1376 = NULL;
F->binds_1376 = F->known_463;
F->e_1377 = NULL;
F->e_1377 = (*(P590)rt_nil_check(F->pat_461)).a;
F->tp_1378 = NULL;
if (((F->t_462 == NULL) || ((*(P594)rt_nil_check(F->t_462)).gen == NULL))) {
F->result_ = F->binds_1376;
goto ret_;
}
F->tp_1378 = (*(P590)rt_nil_check((*(P598)rt_nil_check((*(P594)rt_nil_check(F->t_462)).gen)).decl)).a;
if (((*(P590)rt_nil_check(F->pat_461)).kind == (((rt_int)78LL)))) {
F->e_1377 = f_copy_node_521((*(P590)rt_nil_check(F->pat_461)).a);
(*(P590)rt_nil_check(F->e_1377)).next = NULL;
}
while (((F->e_1377 != NULL) && (F->tp_1378 != NULL))) {
F->nm_1379 = NULL;
if ((((*(P590)rt_nil_check(F->e_1377)).kind == (((rt_int)7LL))) || ((*(P590)rt_nil_check(F->e_1377)).kind == (((rt_int)80LL))))) {
F->nm_1379 = (*(P590)rt_nil_check(F->e_1377)).name;
}
if ((((F->nm_1379 != NULL) && (f_gparam_444(F->gd_460, &(*(P585)rt_nil_check(F->nm_1379))) != NULL)) && ((*(P590)rt_nil_check(f_gparam_444(F->gd_460, &(*(P585)rt_nil_check(F->nm_1379))))).ival <= ((rt_int)2LL)))) {
F->q_1380 = NULL;
F->q_1380 = F->binds_1376;
F->have_1381 = 0;
while ((F->q_1380 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->q_1380)).name)), (*(P585)rt_nil_check(F->nm_1379)))) {
F->have_1381 = 1;
}
F->q_1380 = (*(P598)rt_nil_check(F->q_1380)).mnext;
}
if ((!F->have_1381)) {
F->g_1382 = NULL;
F->g_1382 = (*(P594)rt_nil_check(F->t_462)).gbinds;
while ((F->g_1382 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->g_1382)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->tp_1378)).name)))) {
F->b_1383 = NULL;
F->b_1383 = f_bind_sym_446(f_gparam_444(F->gd_460, &(*(P585)rt_nil_check(F->nm_1379))));
(*(P598)rt_nil_check(F->b_1383)).t = (*(P598)rt_nil_check(F->g_1382)).t;
(*(P598)rt_nil_check(F->b_1383)).c = (*(P598)rt_nil_check(F->g_1382)).c;
(*(P598)rt_nil_check(F->b_1383)).mnext = F->binds_1376;
F->binds_1376 = F->b_1383;
}
F->g_1382 = (*(P598)rt_nil_check(F->g_1382)).mnext;
}
}
}
F->e_1377 = (*(P590)rt_nil_check(F->e_1377)).next;
F->tp_1378 = (*(P590)rt_nil_check(F->tp_1378)).next;
}
F->result_ = F->binds_1376;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_instantiate_type_470(P598 g_465, P590 tt_466, P590 args_467, P592 *c_468, rt_int line_469) {
  struct f_instantiate_type_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_465 = g_465;
F->tt_466 = tt_466;
F->args_467 = args_467;
F->c_468 = c_468;
F->c_468v = *F->c_468;
F->line_469 = line_469;
F->gd_1384 = NULL;
F->gd_1384 = (*(P598)rt_nil_check(F->g_465)).decl;
F->pat_1385 = NULL;
F->pat_1385 = (*(P590)rt_nil_check(F->gd_1384)).b;
F->binds_1386 = NULL;
F->binds_1386 = f_tt_binds_457(F->gd_1384, (*(P590)rt_nil_check(F->pat_1385)).e, F->tt_466, F->line_469);
F->inst_1387 = NULL;
F->inst_1387 = g_all_insts_624;
F->t_1388 = NULL;
F->saved_caps_1389 = NULL;
F->saved_caps_1389 = g_caps_641;
F->saved_env_1390 = NULL;
F->saved_env_1390 = g_genv_623;
F->saved_gdepth_1391 = g_gdepth_655;
F->c_468v = f_new_cons_158();
(*(P592)rt_nil_check(F->c_468v)).args = F->args_467;
while ((F->inst_1387 != NULL)) {
if ((((*(P598)rt_nil_check(F->inst_1387)).decl == F->pat_1385) && f_same_binds_449((*(P598)rt_nil_check(F->inst_1387)).members, F->binds_1386))) {
F->result_ = (*(P598)rt_nil_check(F->inst_1387)).t;
goto ret_;
}
F->inst_1387 = (*(P598)rt_nil_check(F->inst_1387)).insts;
}
f_open_scope_151();
{
F->b_1392 = NULL;
F->b_1392 = F->binds_1386;
while ((F->b_1392 != NULL)) {
f_define_145(F->b_1392, F->line_469);
F->b_1392 = (*(P598)rt_nil_check(F->b_1392)).mnext;
}
}
g_caps_641 = NULL;
g_genv_623 = (*(P598)rt_nil_check(F->g_465)).env;
g_gdepth_655 = g_depth_625;
{
F->y_1393 = NULL;
F->y_1393 = f_new_sym_155((((rt_int)5LL)), (*(P590)rt_nil_check(F->pat_1385)).name);
F->yc_1394 = NULL;
(*(P598)rt_nil_check(F->y_1393)).decl = F->pat_1385;
if (((*(P590)rt_nil_check(F->pat_1385)).kind == (((rt_int)44LL)))) {
F->t_1388 = f_new_typ_157((((rt_int)8LL)));
(*(P594)rt_nil_check(F->t_1388)).name = (*(P590)rt_nil_check(F->pat_1385)).name;
(*(P594)rt_nil_check(F->t_1388)).decl = F->pat_1385;
(*(P598)rt_nil_check(F->y_1393)).t = F->t_1388;
f_define_145(F->y_1393, F->line_469);
f_finish_ptr_327(F->t_1388);
} else {
f_define_145(F->y_1393, F->line_469);
F->t_1388 = f_new_type_231(F->y_1393, f_nn_48((((rt_int)80LL)), F->line_469), &F->yc_1394);
}
}
g_caps_641 = F->saved_caps_1389;
g_genv_623 = F->saved_env_1390;
g_gdepth_655 = F->saved_gdepth_1391;
(*(P594)rt_nil_check(F->t_1388)).gen = F->g_465;
(*(P594)rt_nil_check(F->t_1388)).gbinds = F->binds_1386;
f_close_scope_152();
{ R599 *cell1395 = rt_alloc(sizeof(R599));
(*cell1395).name = NULL;
(*cell1395).t = NULL;
(*cell1395).c = NULL;
(*cell1395).access = NULL;
(*cell1395).cname = NULL;
(*cell1395).st = NULL;
(*cell1395).decl = NULL;
(*cell1395).params = NULL;
(*cell1395).result = NULL;
(*cell1395).members = NULL;
(*cell1395).mnext = NULL;
(*cell1395).binds = NULL;
(*cell1395).insts = NULL;
(*cell1395).env = NULL;
(*cell1395).chain = NULL;
(*cell1395).stack = NULL;
(*cell1395).owner = NULL;
(*cell1395).gctx = NULL;
(*cell1395).mv = NULL;
F->inst_1387 = cell1395;
}
(*(P598)rt_nil_check(F->inst_1387)).kind = (((rt_int)5LL));
(*(P598)rt_nil_check(F->inst_1387)).name = (*(P598)rt_nil_check(F->g_465)).name;
(*(P598)rt_nil_check(F->inst_1387)).decl = F->pat_1385;
(*(P598)rt_nil_check(F->inst_1387)).t = F->t_1388;
(*(P598)rt_nil_check(F->inst_1387)).members = F->binds_1386;
(*(P598)rt_nil_check(F->inst_1387)).insts = g_all_insts_624;
g_all_insts_624 = F->inst_1387;
F->result_ = F->t_1388;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_468) = F->c_468v;
  RT_FPOP();
  return F->result_;
}

static P598 f_instantiate_475(P598 g_471, P590 tt_472, P590 args_473, rt_int line_474) {
  struct f_instantiate_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_471 = g_471;
F->tt_472 = tt_472;
F->args_473 = args_473;
F->line_474 = line_474;
F->gd_1396 = NULL;
F->gd_1396 = (*(P598)rt_nil_check(F->g_471)).decl;
F->pat_1397 = NULL;
F->pat_1397 = (*(P590)rt_nil_check(F->gd_1396)).b;
F->binds_1398 = NULL;
F->f_1399 = NULL;
F->f_1399 = (*(P590)rt_nil_check(F->pat_1397)).e;
F->a_1400 = NULL;
F->a_1400 = F->tt_472;
F->fp_1401 = NULL;
F->fp_1401 = (*(P590)rt_nil_check(F->pat_1397)).a;
F->inst_1402 = NULL;
F->at_1403 = NULL;
F->c_1404 = NULL;
F->saved_fctx_1405 = NULL;
F->saved_fctx_1405 = g_fctx_640;
F->saved_in_1406 = g_in_func_638;
F->saved_level_1407 = g_cur_level_639;
F->saved_sym_1408 = NULL;
F->saved_sym_1408 = g_func_sym_650;
F->saved_code_1409 = NULL;
F->saved_code_1409 = g_code_636;
F->saved_env_1410 = NULL;
F->saved_env_1410 = g_genv_623;
F->saved_gdepth_1411 = g_gdepth_655;
F->binds_1398 = f_tt_binds_457(F->gd_1396, F->f_1399, F->a_1400, F->line_474);
F->a_1400 = F->args_473;
while (((F->fp_1401 != NULL) && (F->a_1400 != NULL))) {
if (f_generic_use_459((*(P590)rt_nil_check(F->fp_1401)).a)) {
F->v_1412 = rt_str_copy(f_gexpr_519(F->a_1400, NULL, &F->at_1403));
F->binds_1398 = f_infer_from_464(F->gd_1396, (*(P590)rt_nil_check(F->fp_1401)).a, F->at_1403, F->binds_1398);
} else if (((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->fp_1401)).a)).kind == (((rt_int)80LL))) && (f_gparam_444(F->gd_1396, &(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->fp_1401)).a)).name))) != NULL)) && ((*(P590)rt_nil_check(f_gparam_444(F->gd_1396, &(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->fp_1401)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1413 = 0;
F->q_1414 = NULL;
F->q_1414 = F->binds_1398;
while ((F->q_1414 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->q_1414)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->fp_1401)).a)).name)))) {
F->known_1413 = 1;
}
F->q_1414 = (*(P598)rt_nil_check(F->q_1414)).mnext;
}
if ((!F->known_1413)) {
F->b_1415 = NULL;
F->b_1415 = f_bind_sym_446(f_gparam_444(F->gd_1396, &(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->fp_1401)).a)).name))));
F->v_1416 = rt_str_copy(f_gexpr_519(F->a_1400, NULL, &F->at_1403));
(*(P598)rt_nil_check(F->b_1415)).t = F->at_1403;
(*(P598)rt_nil_check(F->b_1415)).c = g_no_cons_673;
(*(P598)rt_nil_check(F->b_1415)).mnext = F->binds_1398;
F->binds_1398 = F->b_1415;
}
}
F->fp_1401 = (*(P590)rt_nil_check(F->fp_1401)).next;
F->a_1400 = (*(P590)rt_nil_check(F->a_1400)).next;
}
F->inst_1402 = g_all_insts_624;
while ((F->inst_1402 != NULL)) {
if ((((*(P598)rt_nil_check(F->inst_1402)).decl == F->pat_1397) && f_same_binds_449((*(P598)rt_nil_check(F->inst_1402)).members, F->binds_1398))) {
F->result_ = F->inst_1402;
goto ret_;
}
F->inst_1402 = (*(P598)rt_nil_check(F->inst_1402)).insts;
}
g_fctx_640 = (*(P598)rt_nil_check(F->g_471)).gctx;
g_in_func_638 = ((*(P598)rt_nil_check(F->g_471)).level > ((rt_int)0LL));
g_cur_level_639 = (*(P598)rt_nil_check(F->g_471)).level;
g_func_sym_650 = (*(P598)rt_nil_check(F->g_471)).owner;
g_code_636 = f_new_buffer_24();
f_open_scope_151();
g_gdepth_655 = g_depth_625;
{
F->b_1417 = NULL;
F->b_1417 = F->binds_1398;
while ((F->b_1417 != NULL)) {
f_define_145(F->b_1417, F->line_474);
F->b_1417 = (*(P598)rt_nil_check(F->b_1417)).mnext;
}
}
g_genv_623 = (*(P598)rt_nil_check(F->g_471)).env;
F->inst_1402 = f_build_subprogram_331(F->pat_1397);
(*(P598)rt_nil_check(F->inst_1402)).members = F->binds_1398;
(*(P598)rt_nil_check(F->inst_1402)).insts = g_all_insts_624;
g_all_insts_624 = F->inst_1402;
f_define_145(F->inst_1402, F->line_474);
f_gen_subprogram_352(F->pat_1397, F->inst_1402);
f_close_scope_152();
g_fctx_640 = F->saved_fctx_1405;
g_in_func_638 = F->saved_in_1406;
g_cur_level_639 = F->saved_level_1407;
g_func_sym_650 = F->saved_sym_1408;
g_code_636 = F->saved_code_1409;
g_genv_623 = F->saved_env_1410;
g_gdepth_655 = F->saved_gdepth_1411;
F->result_ = F->inst_1402;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_477(P598 y_476) {
  struct f_access_of_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_476 = y_476;
F->p_1418 = NULL;
F->p_1418 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P598)rt_nil_check(F->y_476)).level <= ((rt_int)0LL))) {
F->result_ = (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_476)).access));
goto ret_;
}
{ rt_int lo1420 = ((rt_int)1LL), hi1421 = rt_sub(g_cur_level_639, (*(P598)rt_nil_check(F->y_476)).level);
for (rt_int it1422 = lo1420; it1422 <= hi1421; it1422++) {
F->i_1419 = it1422;
F->p_1418 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->p_1418)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P598)rt_nil_check(F->y_476)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P585)rt_nil_check(F->p_1418))), rt_str("->", 2)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_476)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->p_1418)), rt_str("->", 2)), (*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_476)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_import_of_480(P590 l_478, rstr *name_479) {
  struct f_import_of_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_478 = l_478;
F->name_479 = name_479;
F->p_1423 = NULL;
F->p_1423 = F->l_478;
while ((F->p_1423 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1423)).name)), (*F->name_479))) {
F->result_ = F->p_1423;
goto ret_;
}
F->p_1423 = (*(P590)rt_nil_check(F->p_1423)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_483(P598 y_481, rt_int line_482) {
  struct f_check_import_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_481 = y_481;
F->line_482 = line_482;
F->c_1424 = NULL;
F->c_1424 = g_fctx_640;
F->ro_1425 = 0;
while (((F->c_1424 != NULL) && ((*(P598)rt_nil_check(F->y_481)).depth < (*(P604)rt_nil_check(F->c_1424)).depth))) {
if ((!(*(P604)rt_nil_check(F->c_1424)).all_imp)) {
F->imp_1426 = NULL;
F->imp_1426 = f_import_of_480((*(P604)rt_nil_check(F->c_1424)).imps, &(*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_481)).name)));
if ((F->imp_1426 == NULL)) {
f_fail_23(F->line_482, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_481)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P590)rt_nil_check(F->imp_1426)).ival == ((rt_int)1LL))) {
F->ro_1425 = 1;
}
}
F->c_1424 = (*(P604)rt_nil_check(F->c_1424)).next;
}
F->result_ = F->ro_1425;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_485(rstr *s_484) {
  struct f_c_ident_485fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_484 = s_484;
if (rt_str_eq((*F->s_484), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_484), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_484));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_488(rstr *base_486, P594 t_487) {
  struct f_deref_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_486 = base_486;
F->t_487 = t_487;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_206(F->t_487)), rt_str(")rt_nil_check(", 14)), (*F->base_486)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_490(P590 e_489) {
  struct f_is_lvalue_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_489 = e_489;
if (((*(P590)rt_nil_check(F->e_489)).kind == (((rt_int)7LL)))) {
F->y_1427 = NULL;
F->y_1427 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_489)).name)));
F->result_ = ((F->y_1427 != NULL) && (((*(P598)rt_nil_check(F->y_1427)).kind == (((rt_int)1LL))) || ((((*(P598)rt_nil_check(F->y_1427)).kind == (((rt_int)2LL))) && ((*(P598)rt_nil_check(F->y_1427)).mv == NULL)) && (!(*(P598)rt_nil_check(F->y_1427)).hasmv))));
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_489)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_490((*(P590)rt_nil_check(F->e_489)).a);
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_489)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_489)).name)), rt_str("LEN", 3))) && f_is_lvalue_490((*(P590)rt_nil_check(F->e_489)).a));
goto ret_;
} else if (((*(P590)rt_nil_check(F->e_489)).kind == (((rt_int)10LL)))) {
if ((((*(P590)rt_nil_check(F->e_489)).b != NULL) && ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_489)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_490((*(P590)rt_nil_check(F->e_489)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_496(P590 e_491, P585 *code_492, P594 *t_493, P592 *c_494, int *ro_495) {
  struct f_lvalue_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_491 = e_491;
F->code_492 = code_492;
F->code_492v = *F->code_492;
F->t_493 = t_493;
F->t_493v = *F->t_493;
F->c_494 = c_494;
F->c_494v = *F->c_494;
F->ro_495 = ro_495;
F->ro_495v = *F->ro_495;
F->base_1428 = NULL;
F->bt_1429 = NULL;
F->bc_1430 = NULL;
if (((*(P590)rt_nil_check(F->e_491)).kind == (((rt_int)7LL)))) {
F->y_1431 = NULL;
F->y_1431 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_491)).name)));
if ((F->y_1431 == NULL)) {
f_fail_23((*(P590)rt_nil_check(F->e_491)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_491)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P598)rt_nil_check(F->y_1431)).kind != (((rt_int)1LL))) && ((*(P598)rt_nil_check(F->y_1431)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_491)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_491)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_492v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_477(F->y_1431); b_; }));
F->t_493v = (*(P598)rt_nil_check(F->y_1431)).t;
F->c_494v = (*(P598)rt_nil_check(F->y_1431)).c;
F->ro_495v = (*(P598)rt_nil_check(F->y_1431)).ro_flag;
if ((((*(P598)rt_nil_check(F->y_1431)).kind == (((rt_int)1LL))) && f_check_import_483(F->y_1431, (*(P590)rt_nil_check(F->e_491)).line))) {
F->ro_495v = 1;
}
} else if (((*(P590)rt_nil_check(F->e_491)).kind == (((rt_int)17LL)))) {
f_lvalue_496((*(P590)rt_nil_check(F->e_491)).a, &F->code_492v, &F->t_493v, &F->c_494v, &F->ro_495v);
} else if ((((((*(P590)rt_nil_check(F->e_491)).kind == (((rt_int)12LL))) && ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_491)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_491)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_492v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_558((*(P590)rt_nil_check(F->e_491)).b, (*(P590)rt_nil_check(F->e_491)).line, &F->t_493v); b_; }));
F->c_494v = g_no_cons_673;
F->ro_495v = 0;
} else if (((*(P590)rt_nil_check(F->e_491)).kind == (((rt_int)11LL)))) {
f_lvalue_496((*(P590)rt_nil_check(F->e_491)).a, &F->base_1428, &F->bt_1429, &F->bc_1430, &F->ro_495v);
f_select_on_504(&(*(P585)rt_nil_check(F->base_1428)), F->bt_1429, F->e_491, &F->ro_495v, &F->code_492v, &F->t_493v, &F->c_494v);
} else if (((*(P590)rt_nil_check(F->e_491)).kind == (((rt_int)10LL)))) {
f_lvalue_496((*(P590)rt_nil_check(F->e_491)).a, &F->base_1428, &F->bt_1429, &F->bc_1430, &F->ro_495v);
f_index_on_513(&(*(P585)rt_nil_check(F->base_1428)), F->bt_1429, F->e_491, &F->ro_495v, 1, &F->code_492v, &F->t_493v, &F->c_494v);
} else {
f_fail_23((*(P590)rt_nil_check(F->e_491)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_492) = F->code_492v;  (*F->t_493) = F->t_493v;  (*F->c_494) = F->c_494v;  (*F->ro_495) = F->ro_495v;
  RT_FPOP();
  return;
}

static void f_select_on_504(rstr *base_497, P594 bt_498, P590 e_499, int *ro_500, P585 *code_501, P594 *t_502, P592 *c_503) {
  struct f_select_on_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_497 = base_497;
F->bt_498 = bt_498;
F->e_499 = e_499;
F->ro_500 = ro_500;
F->code_501 = code_501;
F->code_501v = *F->code_501;
F->t_502 = t_502;
F->t_502v = *F->t_502;
F->c_503 = c_503;
F->c_503v = *F->c_503;
F->c_503v = g_no_cons_673;
if (((*(P594)rt_nil_check(F->bt_498)).kind == (((rt_int)8LL)))) {
f_finish_ptr_327(F->bt_498);
(*F->ro_500) = 0;
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)), rt_str("ALL", 3))) {
F->code_501v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_488(&(*F->base_497), F->bt_498); b_; }));
F->t_502v = (*(P594)rt_nil_check(F->bt_498)).target;
goto ret_;
}
f_select_on_504(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_488(&(*F->base_497), F->bt_498); b_; }), (*(P594)rt_nil_check(F->bt_498)).target, F->e_499, &(*F->ro_500), &F->code_501v, &F->t_502v, &F->c_503v);
goto ret_;
}
if (((*(P594)rt_nil_check(F->bt_498)).kind == (((rt_int)15LL)))) {
F->p_1432 = NULL;
F->p_1432 = (*(P594)rt_nil_check(F->bt_498)).tparams;
if ((!f_opened_221(F->bt_498))) {
f_fail_23((*(P590)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->bt_498)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P594)rt_nil_check(F->bt_498)).tparams == NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)), rt_str("ALL", 3))) {
F->code_501v = f_mk_3(&(*F->base_497));
F->t_502v = (*(P594)rt_nil_check(F->bt_498)).under;
goto ret_;
}
f_select_on_504(&(*F->base_497), (*(P594)rt_nil_check(F->bt_498)).under, F->e_499, &(*F->ro_500), &F->code_501v, &F->t_502v, &F->c_503v);
goto ret_;
}
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)), rt_str("ALL", 3))) {
F->code_501v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_497), rt_str(".all", 4)); b_; }));
F->t_502v = (*(P594)rt_nil_check(F->bt_498)).under;
goto ret_;
}
while ((F->p_1432 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1432)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)))) {
F->code_501v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_497), rt_str(".p_", 3)), f_lower_s_15(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1432)).name)))); b_; }));
F->t_502v = f_tparam_type_246(F->bt_498, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1432)).name)));
(*F->ro_500) = 1;
goto ret_;
}
F->p_1432 = (*(P590)rt_nil_check(F->p_1432)).next;
}
f_select_on_504(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_497), rt_str(".all", 4)); b_; }), (*(P594)rt_nil_check(F->bt_498)).under, F->e_499, &(*F->ro_500), &F->code_501v, &F->t_502v, &F->c_503v);
goto ret_;
}
if (((*(P594)rt_nil_check(F->bt_498)).kind == (((rt_int)7LL)))) {
F->f_1433 = NULL;
F->f_1433 = (*(P594)rt_nil_check(F->bt_498)).fields;
while ((F->f_1433 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1433)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)))) {
F->c_503v = (*(P596)rt_nil_check(F->f_1433)).c;
F->code_501v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_497), rt_str(".", 1)), f_field_c_17(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name)))); b_; }));
F->t_502v = (*(P596)rt_nil_check(F->f_1433)).t;
goto ret_;
}
F->f_1433 = (*(P596)rt_nil_check(F->f_1433)).next;
}
f_fail_23((*(P590)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name))); b_; }));
}
f_fail_23((*(P590)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_499)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_501) = F->code_501v;  (*F->t_502) = F->t_502v;  (*F->c_503) = F->c_503v;
  RT_FPOP();
  return;
}

static void f_index_on_513(rstr *base_505, P594 bt_506, P590 e_507, int *ro_508, int lv_509, P585 *code_510, P594 *t_511, P592 *c_512) {
  struct f_index_on_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_505 = base_505;
F->bt_506 = bt_506;
F->e_507 = e_507;
F->ro_508 = ro_508;
F->lv_509 = lv_509;
F->code_510 = code_510;
F->code_510v = *F->code_510;
F->t_511 = t_511;
F->t_511v = *F->t_511;
F->c_512 = c_512;
F->c_512v = *F->c_512;
F->a_1434 = NULL;
F->a_1434 = (*(P590)rt_nil_check(F->e_507)).b;
F->it_1435 = NULL;
F->c_512v = g_no_cons_673;
if (((*(P594)rt_nil_check(F->bt_506)).kind == (((rt_int)8LL)))) {
f_finish_ptr_327(F->bt_506);
(*F->ro_508) = 0;
f_index_on_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_488(&(*F->base_505), F->bt_506); b_; }), (*(P594)rt_nil_check(F->bt_506)).target, F->e_507, &(*F->ro_508), F->lv_509, &F->code_510v, &F->t_511v, &F->c_512v);
goto ret_;
}
if (((*(P594)rt_nil_check(F->bt_506)).kind == (((rt_int)15LL)))) {
if ((!f_opened_221(F->bt_506))) {
f_fail_23((*(P590)rt_nil_check(F->e_507)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->bt_506)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P594)rt_nil_check(F->bt_506)).tparams == NULL)) {
f_index_on_513(&(*F->base_505), (*(P594)rt_nil_check(F->bt_506)).under, F->e_507, &(*F->ro_508), F->lv_509, &F->code_510v, &F->t_511v, &F->c_512v);
} else {
f_index_on_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_505), rt_str(".all", 4)); b_; }), (*(P594)rt_nil_check(F->bt_506)).under, F->e_507, &(*F->ro_508), F->lv_509, &F->code_510v, &F->t_511v, &F->c_512v);
}
goto ret_;
}
if ((((*(P594)rt_nil_check(F->bt_506)).kind == (((rt_int)6LL))) && ((*(P594)rt_nil_check(F->bt_506)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1434) != ((rt_int)2LL))) {
f_fail_23((*(P590)rt_nil_check(F->e_507)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1436 = rt_str_copy(f_gexpr_519(F->a_1434, (*(P594)rt_nil_check(F->bt_506)).idx, &F->it_1435));
F->j_1437 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->a_1434)).next, (*(P594)rt_nil_check(F->bt_506)).idx2, &F->it_1435));
F->code_510v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_505), rt_str(".p[(rt_index(", 13)), F->i_1436), rt_str(", ", 2)), (*F->base_505)), rt_str(".lo, ", 5)), (*F->base_505)), rt_str(".hi) - ", 7)), (*F->base_505)), rt_str(".lo) * (", 8)), (*F->base_505)), rt_str(".hi2 - ", 7)), (*F->base_505)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1437), rt_str(", ", 2)), (*F->base_505)), rt_str(".lo2, ", 6)), (*F->base_505)), rt_str(".hi2) - ", 8)), (*F->base_505)), rt_str(".lo2]", 5)); b_; }));
F->t_511v = (*(P594)rt_nil_check(F->bt_506)).elem;
F->c_512v = (*(P594)rt_nil_check(F->bt_506)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1434) != ((rt_int)1LL))) {
f_fail_23((*(P590)rt_nil_check(F->e_507)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P594)rt_nil_check(F->bt_506)).kind == (((rt_int)5LL)))) {
if (((*(P590)rt_nil_check(F->a_1434)).kind == (((rt_int)16LL)))) {
F->lo_1438 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->a_1434)).a, g_ty_int_662, &F->it_1435));
F->hi_1439 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->a_1434)).b, g_ty_int_662, &F->it_1435));
F->code_510v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_505)), rt_str(", ", 2)), F->lo_1438), rt_str(", ", 2)), F->hi_1439), rt_str(")", 1)); b_; }));
F->t_511v = g_ty_string_666;
(*F->ro_508) = 1;
goto ret_;
}
{
F->i_1440 = rt_str_copy(f_gexpr_519(F->a_1434, g_ty_int_662, &F->it_1435));
F->t_511v = g_ty_ascii_665;
if (F->lv_509) {
F->code_510v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_505)), rt_str(", ", 2)), F->i_1440), rt_str("))", 2)); b_; }));
} else {
F->code_510v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_505)), rt_str(", ", 2)), F->i_1440), rt_str(")", 1)); b_; }));
(*F->ro_508) = 1;
}
}
goto ret_;
}
if (((*(P594)rt_nil_check(F->bt_506)).kind == (((rt_int)6LL)))) {
F->i_1441 = rt_str_copy(f_gexpr_519(F->a_1434, (*(P594)rt_nil_check(F->bt_506)).idx, &F->it_1435));
F->code_510v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_505), rt_str(".p[rt_index(", 12)), F->i_1441), rt_str(", ", 2)), (*F->base_505)), rt_str(".lo, ", 5)), (*F->base_505)), rt_str(".hi) - ", 7)), (*F->base_505)), rt_str(".lo]", 4)); b_; }));
F->t_511v = (*(P594)rt_nil_check(F->bt_506)).elem;
F->c_512v = (*(P594)rt_nil_check(F->bt_506)).elemcons;
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_507)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_510) = F->code_510v;  (*F->t_511) = F->t_511v;  (*F->c_512) = F->c_512v;
  RT_FPOP();
  return;
}

static int f_own_attribute_515(P590 e_514) {
  struct f_own_attribute_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_514 = e_514;
F->saved_1442 = NULL;
F->saved_1442 = g_code_636;
F->bt_1443 = NULL;
F->ok_1444 = 0;
g_trial_660 = rt_add(g_trial_660, ((rt_int)1LL));
g_code_636 = f_new_buffer_24();
{ rt_frame xf1445;
if (RT_TRY(xf1445)) {
F->base_1447 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_514)).a, NULL, &F->bt_1443));
while (((F->bt_1443 != NULL) && ((*(P594)rt_nil_check(F->bt_1443)).kind == (((rt_int)8LL))))) {
f_finish_ptr_327(F->bt_1443);
F->bt_1443 = (*(P594)rt_nil_check(F->bt_1443)).target;
}
if (((F->bt_1443 != NULL) && ((*(P594)rt_nil_check(F->bt_1443)).kind == (((rt_int)15LL))))) {
F->p_1448 = NULL;
F->p_1448 = (*(P594)rt_nil_check(F->bt_1443)).tparams;
while ((F->p_1448 != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->p_1448)).name)), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_514)).name)))) {
F->ok_1444 = 1;
}
F->p_1448 = (*(P590)rt_nil_check(F->p_1448)).next;
}
}
RT_POP(xf1445);
} else {
RT_POP(xf1445);
int x1446 = rt_xcur;
if (0 || x1446 == ex_compile_error_1) {
F->ok_1444 = 0;
} else {
rt_raise(x1446);
}
}
}
g_trial_660 = rt_sub(g_trial_660, ((rt_int)1LL));
g_code_636 = F->saved_1442;
F->result_ = F->ok_1444;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_519(P590 e_516, P594 want_517, P594 *t_518) {
  struct f_gexpr_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_516 = e_516;
F->want_517 = want_517;
F->t_518 = t_518;
F->t_518v = *F->t_518;
F->k_1449 = (*(P590)rt_nil_check(F->e_516)).kind;
F->code_1450 = NULL;
F->c_1451 = NULL;
F->bt_1453 = NULL;
F->t_518v = g_ty_int_662;
if ((F->k_1449 == (((rt_int)1LL)))) {
if (((F->want_517 != NULL) && ((*(P594)rt_nil_check(F->want_517)).kind == (((rt_int)3LL))))) {
F->t_518v = g_ty_float_664;
F->result_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1449 == (((rt_int)2LL)))) {
F->t_518v = g_ty_float_664;
F->result_ = (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name));
goto ret_;
} else if ((F->k_1449 == (((rt_int)5LL)))) {
F->t_518v = g_ty_bool_663;
F->result_ = f_itos_7((*(P590)rt_nil_check(F->e_516)).ival);
goto ret_;
} else if ((F->k_1449 == (((rt_int)3LL)))) {
F->t_518v = g_ty_string_666;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_525(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)))), rt_str(", ", 2)), f_itos_7(((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1449 == (((rt_int)6LL)))) {
F->t_518v = g_ty_nil_669;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1449 == (((rt_int)4LL)))) {
if (((F->want_517 != NULL) && ((*(P594)rt_nil_check(f_base_of_195(F->want_517))).kind == (((rt_int)4LL))))) {
F->t_518v = F->want_517;
} else {
F->t_518v = f_enum_type_of_528(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), (*(P590)rt_nil_check(F->e_516)).line);
}
{
F->i_1454 = f_lit_index_214((*(P594)rt_nil_check(f_base_of_195(F->t_518v))).lits, &(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)));
if ((F->i_1454 < ((rt_int)0LL))) {
f_fail_23((*(P590)rt_nil_check(F->e_516)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1454);
goto ret_;
}
} else if ((F->k_1449 == (((rt_int)17LL)))) {
F->result_ = f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, F->want_517, &F->t_518v);
goto ret_;
} else if ((F->k_1449 == (((rt_int)7LL)))) {
F->y_1455 = NULL;
F->y_1455 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)));
if ((F->y_1455 == NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("ME", 2))) {
F->t_518v = g_ty_act_672;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("NIL_ACT", 7))) {
F->t_518v = g_ty_act_672;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_570(f_wrap_apply_523(F->e_516), 0, &F->t_518v);
goto ret_;
}
if (((((((((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_570(f_wrap_apply_523(F->e_516), 0, &F->t_518v);
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_516)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P598)rt_nil_check(F->y_1455)).kind == (((rt_int)1LL))) || ((*(P598)rt_nil_check(F->y_1455)).kind == (((rt_int)2LL))))) {
F->t_518v = (*(P598)rt_nil_check(F->y_1455)).t;
if (((*(P598)rt_nil_check(F->y_1455)).kind == (((rt_int)1LL)))) {
F->ro_1456 = f_check_import_483(F->y_1455, (*(P590)rt_nil_check(F->e_516)).line);
}
F->result_ = f_access_of_477(F->y_1455);
goto ret_;
}
if (((*(P598)rt_nil_check(F->y_1455)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_570(f_wrap_apply_523(F->e_516), 0, &F->t_518v);
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_516)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1449 == (((rt_int)8LL))) && (f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name))) != NULL)) && (f_user_op_566(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), f_copy_node_521((*(P590)rt_nil_check(F->e_516)).a)) != NULL))) {
F->call_1457 = NULL;
F->call_1457 = f_nn_48((((rt_int)10LL)), (*(P590)rt_nil_check(F->e_516)).line);
F->fname_1458 = NULL;
F->fname_1458 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->e_516)).line);
(*(P590)rt_nil_check(F->fname_1458)).name = (*(P590)rt_nil_check(F->e_516)).name;
(*(P590)rt_nil_check(F->call_1457)).a = F->fname_1458;
(*(P590)rt_nil_check(F->call_1457)).b = f_copy_node_521((*(P590)rt_nil_check(F->e_516)).a);
F->result_ = f_gcall_570(F->call_1457, 0, &F->t_518v);
goto ret_;
} else if (((((F->k_1449 == (((rt_int)8LL))) && rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("NOT", 3))) && (F->want_517 != NULL)) && ((*(P594)rt_nil_check(F->want_517)).kind == (((rt_int)16LL))))) {
F->a_1459 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, F->want_517, &F->t_518v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1459), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check((*(P594)rt_nil_check(F->want_517)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1449 == (((rt_int)8LL)))) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("NOT", 3))) {
F->a_1460 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, g_ty_bool_663, &F->t_518v));
f_check_type_204(F->t_518v, g_ty_bool_663, (*(P590)rt_nil_check(F->e_516)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1460), rt_str(")", 1));
goto ret_;
}
{
F->a_1461 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, F->want_517, &F->t_518v));
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("+", 1))) {
F->result_ = F->a_1461;
goto ret_;
} else if (((*(P594)rt_nil_check(F->t_518v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1461), rt_str(")", 1));
goto ret_;
}
f_check_type_204(F->t_518v, g_ty_int_662, (*(P590)rt_nil_check(F->e_516)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1461), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1449 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_535(F->e_516, F->want_517, &F->t_518v);
goto ret_;
} else if ((F->k_1449 == (((rt_int)10LL)))) {
if ((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_516)).a)).kind == (((rt_int)7LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_516)).a)).kind == (((rt_int)12LL))))) {
F->nm_1462 = NULL;
F->nm_1462 = (*(P590)rt_nil_check(F->e_516)).a;
F->y_1463 = NULL;
if (((*(P590)rt_nil_check(F->nm_1462)).kind == (((rt_int)12LL)))) {
F->nm_1462 = (*(P590)rt_nil_check(F->nm_1462)).a;
}
F->y_1463 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->nm_1462)).name)));
if (((((F->y_1463 == NULL) || ((*(P598)rt_nil_check(F->y_1463)).kind == (((rt_int)3LL)))) || ((*(P598)rt_nil_check(F->y_1463)).kind == (((rt_int)4LL)))) || ((*(P598)rt_nil_check(F->y_1463)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_570(F->e_516, 0, &F->t_518v);
goto ret_;
}
}
{
F->base_1464 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, NULL, &F->bt_1453));
F->ro_1452 = 1;
f_index_on_513(&F->base_1464, F->bt_1453, F->e_516, &F->ro_1452, 0, &F->code_1450, &F->t_518v, &F->c_1451);
F->result_ = (*(P585)rt_nil_check(F->code_1450));
goto ret_;
}
} else if ((F->k_1449 == (((rt_int)11LL)))) {
if ((((rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_516)).name)), rt_str("MAX", 3))) && (!f_own_attribute_515(F->e_516)))) {
F->result_ = f_attribute_531(F->e_516, &F->t_518v);
goto ret_;
}
{
F->base_1465 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_516)).a, NULL, &F->bt_1453));
F->ro_1452 = 1;
f_select_on_504(&F->base_1465, F->bt_1453, F->e_516, &F->ro_1452, &F->code_1450, &F->t_518v, &F->c_1451);
F->result_ = (*(P585)rt_nil_check(F->code_1450));
goto ret_;
}
} else if ((F->k_1449 == (((rt_int)12LL)))) {
F->result_ = f_gcall_570(f_wrap_apply_523(F->e_516), 0, &F->t_518v);
goto ret_;
} else if ((F->k_1449 == (((rt_int)14LL)))) {
F->result_ = f_constructor_539(F->e_516, F->want_517, &F->t_518v);
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_516)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_518) = F->t_518v;
  RT_FPOP();
  return F->result_;
}

static P590 f_copy_node_521(P590 e_520) {
  struct f_copy_node_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_520 = e_520;
F->x_1466 = NULL;
{ R591 *cell1467 = rt_alloc(sizeof(R591));
(*cell1467).name = NULL;
(*cell1467).tag = NULL;
(*cell1467).a = NULL;
(*cell1467).b = NULL;
(*cell1467).c = NULL;
(*cell1467).d = NULL;
(*cell1467).e = NULL;
(*cell1467).next = NULL;
F->x_1466 = cell1467;
}
(*(P590)rt_nil_check(F->x_1466)).kind = (*(P590)rt_nil_check(F->e_520)).kind;
(*(P590)rt_nil_check(F->x_1466)).line = (*(P590)rt_nil_check(F->e_520)).line;
(*(P590)rt_nil_check(F->x_1466)).ival = (*(P590)rt_nil_check(F->e_520)).ival;
(*(P590)rt_nil_check(F->x_1466)).flag = (*(P590)rt_nil_check(F->e_520)).flag;
(*(P590)rt_nil_check(F->x_1466)).name = (*(P590)rt_nil_check(F->e_520)).name;
(*(P590)rt_nil_check(F->x_1466)).tag = (*(P590)rt_nil_check(F->e_520)).tag;
(*(P590)rt_nil_check(F->x_1466)).a = (*(P590)rt_nil_check(F->e_520)).a;
(*(P590)rt_nil_check(F->x_1466)).b = (*(P590)rt_nil_check(F->e_520)).b;
(*(P590)rt_nil_check(F->x_1466)).c = (*(P590)rt_nil_check(F->e_520)).c;
(*(P590)rt_nil_check(F->x_1466)).d = (*(P590)rt_nil_check(F->e_520)).d;
F->result_ = F->x_1466;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P590 f_wrap_apply_523(P590 e_522) {
  struct f_wrap_apply_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_522 = e_522;
F->x_1468 = NULL;
F->x_1468 = f_nn_48((((rt_int)10LL)), (*(P590)rt_nil_check(F->e_522)).line);
(*(P590)rt_nil_check(F->x_1468)).a = F->e_522;
F->result_ = F->x_1468;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_525(rstr *s_524) {
  struct f_c_string_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_524 = s_524;
F->n_1469 = ((rt_int)0LL);
{ rt_int lo1471 = ((rt_int)1LL), hi1472 = ((*F->s_524)).len;
for (rt_int it1473 = lo1471; it1473 <= hi1472; it1473++) {
F->i_1470 = it1473;
if (((rt_str_get((*F->s_524), F->i_1470) == 92) || (rt_str_get((*F->s_524), F->i_1470) == 63))) {
F->n_1469 = rt_add(F->n_1469, ((rt_int)1LL));
}
}
}
{
F->r_1474 = rt_str_new(rt_add(rt_add(((*F->s_524)).len, F->n_1469), ((rt_int)2LL)));
F->j_1475 = ((rt_int)1LL);
(*rt_str_at(&F->r_1474, ((rt_int)1LL))) = 34;
{ rt_int lo1477 = ((rt_int)1LL), hi1478 = ((*F->s_524)).len;
for (rt_int it1479 = lo1477; it1479 <= hi1478; it1479++) {
F->i_1476 = it1479;
F->j_1475 = rt_add(F->j_1475, ((rt_int)1LL));
if (((rt_str_get((*F->s_524), F->i_1476) == 92) || (rt_str_get((*F->s_524), F->i_1476) == 63))) {
(*rt_str_at(&F->r_1474, F->j_1475)) = 92;
F->j_1475 = rt_add(F->j_1475, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1474, F->j_1475)) = rt_str_get((*F->s_524), F->i_1476);
}
}
(*rt_str_at(&F->r_1474, rt_add(F->j_1475, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1474;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P594 f_enum_type_of_528(rstr *lit_526, rt_int line_527) {
  struct f_enum_type_of_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_526 = lit_526;
F->line_527 = line_527;
F->y_1480 = NULL;
F->y_1480 = g_scope_stack_626;
F->c_1481 = NULL;
if ((f_lit_index_214((*(P594)rt_nil_check(g_ty_ascii_665)).lits, &(*F->lit_526)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_665;
goto ret_;
}
while ((F->y_1480 != NULL)) {
if ((((((*(P598)rt_nil_check(F->y_1480)).kind == (((rt_int)6LL))) || ((*(P598)rt_nil_check(F->y_1480)).kind == (((rt_int)5LL)))) && ((*(P598)rt_nil_check(F->y_1480)).st != NULL)) && ((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_1480)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_214((*(P590)rt_nil_check((*(P598)rt_nil_check(F->y_1480)).st)).a, &(*F->lit_526)) >= ((rt_int)0LL))) {
if (((*(P598)rt_nil_check(F->y_1480)).kind == (((rt_int)5LL)))) {
F->st_1482 = NULL;
F->st_1482 = f_nn_48((((rt_int)80LL)), F->line_527);
(*(P590)rt_nil_check(F->st_1482)).name = (*(P598)rt_nil_check(F->y_1480)).name;
F->result_ = f_resolve_subtype_217(F->st_1482, &F->c_1481);
goto ret_;
}
F->result_ = f_resolve_subtype_217((*(P598)rt_nil_check(F->y_1480)).st, &F->c_1481);
goto ret_;
}
}
F->y_1480 = (*(P598)rt_nil_check(F->y_1480)).stack;
}
f_fail_23(F->line_527, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_526)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_531(P590 e_529, P594 *t_530) {
  struct f_attribute_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_529 = e_529;
F->t_530 = t_530;
F->t_530v = *F->t_530;
F->bt_1483 = NULL;
F->c_1484 = NULL;
F->t_530v = g_ty_int_662;
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_529)).name)), rt_str("LEN", 3))) {
F->base_1485 = NULL;
F->base_1485 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_519((*(P590)rt_nil_check(F->e_529)).a, NULL, &F->bt_1483); b_; }));
if (((*(P594)rt_nil_check(F->bt_1483)).kind == (((rt_int)8LL)))) {
f_finish_ptr_327(F->bt_1483);
F->base_1485 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_488(&(*(P585)rt_nil_check(F->base_1485)), F->bt_1483); b_; }));
F->bt_1483 = (*(P594)rt_nil_check(F->bt_1483)).target;
}
if (((*(P594)rt_nil_check(F->bt_1483)).kind != (((rt_int)5LL)))) {
f_fail_23((*(P590)rt_nil_check(F->e_529)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P585)rt_nil_check(F->base_1485))), rt_str(").len", 5));
goto ret_;
}
if (((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_529)).a)).kind == (((rt_int)7LL)))) {
F->y_1486 = NULL;
F->y_1486 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_529)).a)).name)));
if (((F->y_1486 != NULL) && (((*(P598)rt_nil_check(F->y_1486)).kind == (((rt_int)6LL))) || ((*(P598)rt_nil_check(F->y_1486)).kind == (((rt_int)5LL)))))) {
F->st_1487 = NULL;
F->st_1487 = f_nn_48((((rt_int)80LL)), (*(P590)rt_nil_check(F->e_529)).line);
(*(P590)rt_nil_check(F->st_1487)).name = (*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_529)).a)).name;
F->t_530v = f_resolve_subtype_217(F->st_1487, &F->c_1484);
if (((*(P594)rt_nil_check(F->t_530v)).kind == (((rt_int)4LL)))) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_529)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(F->t_530v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P592)rt_nil_check(F->c_1484)).lo != NULL)) {
if (rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_529)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_1484)).lo));
goto ret_;
}
F->result_ = (*(P585)rt_nil_check((*(P592)rt_nil_check(F->c_1484)).hi));
goto ret_;
}
}
}
f_fail_23((*(P590)rt_nil_check(F->e_529)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P585)rt_nil_check((*(P590)rt_nil_check(F->e_529)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_530) = F->t_530v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_535(P590 e_532, P594 want_533, P594 *t_534) {
  struct f_gbinop_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_532 = e_532;
F->want_533 = want_533;
F->t_534 = t_534;
F->t_534v = *F->t_534;
F->op_1488 = NULL;
F->op_1488 = (*(P590)rt_nil_check(F->e_532)).name;
F->ta_1489 = NULL;
F->tb_1490 = NULL;
F->hint_1491 = NULL;
F->uy_1492 = NULL;
F->t_534v = g_ty_bool_663;
if ((f_lookup_140(&(*(P585)rt_nil_check(F->op_1488))) != NULL)) {
F->l_1493 = NULL;
F->r_1494 = NULL;
F->l_1493 = f_copy_node_521((*(P590)rt_nil_check(F->e_532)).a);
F->r_1494 = f_copy_node_521((*(P590)rt_nil_check(F->e_532)).b);
(*(P590)rt_nil_check(F->l_1493)).next = F->r_1494;
F->uy_1492 = f_user_op_566(&(*(P585)rt_nil_check(F->op_1488)), F->l_1493);
if ((F->uy_1492 != NULL)) {
F->call_1495 = NULL;
F->call_1495 = f_nn_48((((rt_int)10LL)), (*(P590)rt_nil_check(F->e_532)).line);
F->fname_1496 = NULL;
F->fname_1496 = f_nn_48((((rt_int)7LL)), (*(P590)rt_nil_check(F->e_532)).line);
(*(P590)rt_nil_check(F->fname_1496)).name = F->op_1488;
(*(P590)rt_nil_check(F->call_1495)).a = F->fname_1496;
(*(P590)rt_nil_check(F->call_1495)).b = F->l_1493;
F->result_ = f_gcall_570(F->call_1495, 0, &F->t_534v);
goto ret_;
}
}
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("IN", 2))) {
F->s_1497 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, NULL, &F->tb_1490));
if (((*(P594)rt_nil_check(F->tb_1490)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P590)rt_nil_check(F->e_532)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1498 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, (*(P594)rt_nil_check(F->tb_1490)).elem, &F->ta_1489));
f_check_type_204(F->ta_1489, (*(P594)rt_nil_check(F->tb_1490)).elem, (*(P590)rt_nil_check(F->e_532)).line);
F->t_534v = g_ty_bool_663;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1498), rt_str(", ", 2)), F->s_1497), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("AND", 3)) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("OR", 2))) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("XOR", 3))) && (F->want_533 != NULL)) && ((*(P594)rt_nil_check(F->want_533)).kind == (((rt_int)16LL))))) {
F->a_1499 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, F->want_533, &F->ta_1489));
F->b_1500 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, F->want_533, &F->tb_1490));
f_check_type_204(F->tb_1490, F->ta_1489, (*(P590)rt_nil_check(F->e_532)).line);
F->t_534v = F->ta_1489;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1499), rt_str(", ", 2)), F->b_1500), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1499), rt_str(", ", 2)), F->b_1500), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1499), rt_str(", ", 2)), F->b_1500), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("AND", 3)) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("OR", 2))) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("XOR", 3)))) {
F->a_1501 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, g_ty_bool_663, &F->ta_1489));
F->b_1502 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, g_ty_bool_663, &F->tb_1490));
f_check_type_204(F->ta_1489, g_ty_bool_663, (*(P590)rt_nil_check(F->e_532)).line);
f_check_type_204(F->tb_1490, g_ty_bool_663, (*(P590)rt_nil_check(F->e_532)).line);
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1501), rt_str(" && ", 4)), F->b_1502), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1501), rt_str(" || ", 4)), F->b_1502), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1501), rt_str(" != ", 4)), F->b_1502), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("&", 1))) {
F->wa_1503 = NULL;
F->wb_1504 = NULL;
if (((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_532)).a)).kind == (((rt_int)4LL)))) {
F->wa_1503 = g_ty_ascii_665;
}
if (((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_532)).b)).kind == (((rt_int)4LL)))) {
F->wb_1504 = g_ty_ascii_665;
}
{
F->a_1505 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, F->wa_1503, &F->ta_1489));
F->b_1506 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, F->wb_1504, &F->tb_1490));
F->t_534v = g_ty_string_666;
if ((((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)5LL))) && ((*(P594)rt_nil_check(F->tb_1490)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1505), rt_str(", ", 2)), F->b_1506), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)5LL))) && ((*(P594)rt_nil_check(F->tb_1490)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1505), rt_str(", ", 2)), F->b_1506), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)4LL))) && ((*(P594)rt_nil_check(F->tb_1490)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1505), rt_str(", ", 2)), F->b_1506), rt_str(")", 1));
goto ret_;
} else if ((((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)4LL))) && ((*(P594)rt_nil_check(F->tb_1490)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1505), rt_str(", ", 2)), F->b_1506), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_532)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P585)rt_nil_check(F->op_1488))) && (!rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("IN", 2))))) {
if (((((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_532)).a)).kind == (((rt_int)4LL))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_532)).a)).kind == (((rt_int)6LL)))) || ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->e_532)).a)).kind == (((rt_int)1LL))))) {
F->dummy_1507 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, NULL, &F->hint_1491));
}
{
F->a_1508 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, F->hint_1491, &F->ta_1489));
F->b_1509 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, F->ta_1489, &F->tb_1490));
F->ct_1510 = NULL;
F->ct_1510 = f_base_of_195(F->ta_1489);
F->t_534v = g_ty_bool_663;
if ((((*(P594)rt_nil_check(F->ta_1489)).kind != (((rt_int)11LL))) && ((*(P594)rt_nil_check(F->tb_1490)).kind != (((rt_int)11LL))))) {
f_check_type_204(F->tb_1490, F->ta_1489, (*(P590)rt_nil_check(F->e_532)).line);
}
if (((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)11LL)))) {
F->ct_1510 = f_base_of_195(F->tb_1490);
}
if (((*(P594)rt_nil_check(F->ct_1510)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1509), rt_str(", ", 2)), F->a_1508), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1509), rt_str(", ", 2)), F->a_1508), rt_str(")", 1));
goto ret_;
}
if (((*(P594)rt_nil_check(F->ct_1510)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1508), rt_str(", ", 2)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1509), rt_str(", ", 2)), F->a_1508), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_532)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_274(F->ct_1510)) {
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("=", 1))) {
F->result_ = f_eq_code_286(F->ct_1510, &F->a_1508, &F->b_1509);
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_286(F->ct_1510, &F->a_1508, &F->b_1509)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_532)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1508), rt_str(" == ", 4)), F->b_1509), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1508), rt_str(" != ", 4)), F->b_1509), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1508), rt_str(" ", 1)), (*(P585)rt_nil_check(F->op_1488))), rt_str(" ", 1)), F->b_1509), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1511 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).a, F->want_533, &F->ta_1489));
F->b_1512 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->e_532)).b, F->ta_1489, &F->tb_1490));
if ((((*(P594)rt_nil_check(F->ta_1489)).kind == (((rt_int)3LL))) || ((*(P594)rt_nil_check(F->tb_1490)).kind == (((rt_int)3LL))))) {
F->t_534v = g_ty_float_664;
if (((rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("+", 1)) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("-", 1))) || rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1511), rt_str(" ", 1)), (*(P585)rt_nil_check(F->op_1488))), rt_str(" ", 1)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
}
}
f_check_type_204(F->ta_1489, g_ty_int_662, (*(P590)rt_nil_check(F->e_532)).line);
f_check_type_204(F->tb_1490, g_ty_int_662, (*(P590)rt_nil_check(F->e_532)).line);
F->t_534v = g_ty_int_662;
if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P585)rt_nil_check(F->op_1488)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1511), rt_str(", ", 2)), F->b_1512), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P590)rt_nil_check(F->e_532)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P585)rt_nil_check(F->op_1488))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_534) = F->t_534v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_539(P590 e_536, P594 want_537, P594 *t_538) {
  struct f_constructor_539fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_536 = e_536;
F->want_537 = want_537;
F->t_538 = t_538;
F->t_538v = *F->t_538;
F->it_1513 = NULL;
F->it_1513 = (*(P590)rt_nil_check(F->e_536)).a;
F->f_1514 = NULL;
F->vt_1515 = NULL;
if (((F->want_537 != NULL) && ((*(P594)rt_nil_check(F->want_537)).kind == (((rt_int)16LL))))) {
F->s_1516 = NULL;
F->s_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_538v = F->want_537;
while ((F->it_1513 != NULL)) {
F->v_1517 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->it_1513)).b, (*(P594)rt_nil_check(F->want_537)).elem, &F->vt_1515));
f_check_type_204(F->vt_1515, (*(P594)rt_nil_check(F->want_537)).elem, (*(P590)rt_nil_check(F->e_536)).line);
F->s_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P585)rt_nil_check(F->s_1516))), rt_str(", ", 2)), F->v_1517), rt_str(")", 1)); b_; }));
F->it_1513 = (*(P590)rt_nil_check(F->it_1513)).next;
}
F->result_ = (*(P585)rt_nil_check(F->s_1516));
goto ret_;
}
if (((F->want_537 != NULL) && ((*(P594)rt_nil_check(F->want_537)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_536)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P585)rt_nil_check((*(P594)rt_nil_check(F->want_537)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_537 != NULL) && ((*(P594)rt_nil_check(F->want_537)).kind == (((rt_int)6LL)))) && ((*(P594)rt_nil_check(F->want_537)).idx2 == NULL))) {
F->tmp_1518 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1519 = rt_str_copy(f_ctype_206(F->want_537));
F->et_1520 = rt_str_copy(f_ctype_206((*(P594)rt_nil_check(F->want_537)).elem));
F->parts_1521 = NULL;
F->t_538v = F->want_537;
if (((((F->it_1513 != NULL) && ((*(P590)rt_nil_check(F->it_1513)).a != NULL)) && ((*(P590)rt_nil_check((*(P590)rt_nil_check(F->it_1513)).a)).b != NULL)) && ((*(P590)rt_nil_check(F->it_1513)).next == NULL))) {
F->lo_1522 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check((*(P590)rt_nil_check(F->it_1513)).a)).a, (*(P594)rt_nil_check(F->want_537)).idx, &F->vt_1515));
F->hi_1523 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check((*(P590)rt_nil_check(F->it_1513)).a)).b, (*(P594)rt_nil_check(F->want_537)).idx, &F->vt_1515));
F->v_1524 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->it_1513)).b, (*(P594)rt_nil_check(F->want_537)).elem, &F->vt_1515));
f_check_type_204(F->vt_1515, (*(P594)rt_nil_check(F->want_537)).elem, (*(P590)rt_nil_check(F->e_536)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1519), rt_str(" ", 1)), F->tmp_1518), rt_str("; ", 2)), F->tmp_1518), rt_str(".lo = ", 6)), F->lo_1522), rt_str("; ", 2)), F->tmp_1518), rt_str(".hi = ", 6)), F->hi_1523), rt_str("; ", 2)), F->tmp_1518), rt_str(".lo2 = ", 7)), F->tmp_1518), rt_str(".hi2 = 1; ", 10)), F->tmp_1518), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1520), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1518), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1518), rt_str("); i_++) ", 9)), F->tmp_1518), rt_str(".p[i_] = ", 9)), f_copy_code_282((*(P594)rt_nil_check(F->want_537)).elem, &F->v_1524)), rt_str("; ", 2)), F->tmp_1518), rt_str("; })", 4));
goto ret_;
}
F->parts_1521 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1519), rt_str(" ", 1)), F->tmp_1518), rt_str("; ", 2)), F->tmp_1518), rt_str(".lo = 1; ", 9)), F->tmp_1518), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1513))), rt_str("; ", 2)), F->tmp_1518), rt_str(".lo2 = ", 7)), F->tmp_1518), rt_str(".hi2 = 1; ", 10)), F->tmp_1518), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1520), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1513), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1526 = ((rt_int)0LL), hi1527 = rt_sub(f_list_len_54((*(P590)rt_nil_check(F->e_536)).a), ((rt_int)1LL));
for (rt_int it1528 = lo1526; it1528 <= hi1527; it1528++) {
F->i_1525 = it1528;
if (((*(P590)rt_nil_check(F->it_1513)).a != NULL)) {
f_fail_23((*(P590)rt_nil_check(F->e_536)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1529 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->it_1513)).b, (*(P594)rt_nil_check(F->want_537)).elem, &F->vt_1515));
f_check_type_204(F->vt_1515, (*(P594)rt_nil_check(F->want_537)).elem, (*(P590)rt_nil_check(F->e_536)).line);
F->parts_1521 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->parts_1521)), rt_str(" ", 1)), F->tmp_1518), rt_str(".p[", 3)), f_itos_7(F->i_1525)), rt_str("] = ", 4)), f_copy_code_282((*(P594)rt_nil_check(F->want_537)).elem, &F->v_1529)), rt_str(";", 1)); b_; }));
}
F->it_1513 = (*(P590)rt_nil_check(F->it_1513)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->parts_1521)), rt_str(" ", 1)), F->tmp_1518), rt_str("; })", 4));
goto ret_;
}
if (((F->want_537 == NULL) || ((*(P594)rt_nil_check(F->want_537)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_536)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_538v = F->want_537;
F->f_1514 = (*(P594)rt_nil_check(F->want_537)).fields;
{
F->tmp_1530 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1531 = NULL;
F->parts_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_206(F->want_537)), rt_str(" ", 1)), F->tmp_1530), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1513) != ((rt_int)0LL)) && (f_list_len_54(F->it_1513) != ((rt_int)0LL)))) {
while (((F->it_1513 != NULL) && (F->f_1514 != NULL))) {
if (((((*(P590)rt_nil_check(F->it_1513)).a == NULL) || ((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->it_1513)).a)).a)).kind != (((rt_int)7LL)))) || (!rt_str_eq((*(P585)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check((*(P590)rt_nil_check(F->it_1513)).a)).a)).name)), (*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1514)).name)))))) {
f_fail_23((*(P590)rt_nil_check(F->e_536)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1514)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1532 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->it_1513)).b, (*(P596)rt_nil_check(F->f_1514)).t, &F->vt_1515));
f_check_type_204(F->vt_1515, (*(P596)rt_nil_check(F->f_1514)).t, (*(P590)rt_nil_check(F->e_536)).line);
F->parts_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->parts_1531)), rt_str(" ", 1)), F->tmp_1530), rt_str(".", 1)), f_field_c_17(&(*(P585)rt_nil_check((*(P596)rt_nil_check(F->f_1514)).name)))), rt_str(" = ", 3)), f_copy_code_282((*(P596)rt_nil_check(F->f_1514)).t, &F->v_1532)), rt_str(";", 1)); b_; }));
}
F->it_1513 = (*(P590)rt_nil_check(F->it_1513)).next;
F->f_1514 = (*(P596)rt_nil_check(F->f_1514)).next;
}
}
if (((F->it_1513 != NULL) || (F->f_1514 != NULL))) {
f_fail_23((*(P590)rt_nil_check(F->e_536)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->parts_1531)), rt_str(" ", 1)), F->tmp_1530), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_538) = F->t_538v;
  RT_FPOP();
  return F->result_;
}

static int f_fits_542(P598 y_540, P590 args_541) {
  struct f_fits_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_540 = y_540;
F->args_541 = args_541;
F->a_1533 = NULL;
F->a_1533 = F->args_541;
F->pm_1534 = NULL;
F->pm_1534 = (*(P598)rt_nil_check(F->y_540)).params;
F->t_1535 = NULL;
F->saved_1536 = NULL;
F->saved_1536 = g_code_636;
F->ok_1537 = 1;
F->lv_1538 = NULL;
F->lc_1539 = NULL;
g_trial_660 = rt_add(g_trial_660, ((rt_int)1LL));
g_code_636 = f_new_buffer_24();
{ rt_frame xf1541;
if (RT_TRY(xf1541)) {
while (((F->ok_1537 && (F->a_1533 != NULL)) && (F->pm_1534 != NULL))) {
if ((((*(P600)rt_nil_check(F->pm_1534)).mode == (((rt_int)2LL))) || ((*(P600)rt_nil_check(F->pm_1534)).mode == (((rt_int)3LL))))) {
f_lvalue_496(F->a_1533, &F->lv_1538, &F->t_1535, &F->lc_1539, &F->ro_1540);
} else {
F->v_1543 = rt_str_copy(f_gexpr_519(F->a_1533, (*(P600)rt_nil_check(F->pm_1534)).t, &F->t_1535));
}
if ((!(f_same_193(F->t_1535, (*(P600)rt_nil_check(F->pm_1534)).t) || (((*(P594)rt_nil_check(F->t_1535)).kind == (((rt_int)11LL))) && ((*(P594)rt_nil_check((*(P600)rt_nil_check(F->pm_1534)).t)).kind == (((rt_int)8LL))))))) {
F->ok_1537 = 0;
}
F->a_1533 = (*(P590)rt_nil_check(F->a_1533)).next;
F->pm_1534 = (*(P600)rt_nil_check(F->pm_1534)).next;
}
if (((F->a_1533 != NULL) || (F->pm_1534 != NULL))) {
F->ok_1537 = 0;
}
RT_POP(xf1541);
} else {
RT_POP(xf1541);
int x1542 = rt_xcur;
if (0 || x1542 == ex_compile_error_1) {
F->ok_1537 = 0;
} else {
rt_raise(x1542);
}
}
}
g_trial_660 = rt_sub(g_trial_660, ((rt_int)1LL));
g_code_636 = F->saved_1536;
F->result_ = F->ok_1537;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_resolve_overload_547(rstr *name_543, P590 args_544, int is_stmt_545, rt_int line_546) {
  struct f_resolve_overload_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_543 = name_543;
F->args_544 = args_544;
F->is_stmt_545 = is_stmt_545;
F->line_546 = line_546;
F->y_1544 = NULL;
F->first_1545 = NULL;
F->n_1546 = ((rt_int)0LL);
{ rt_int lo1548 = ((rt_int)1LL), hi1549 = ((rt_int)3LL);
for (rt_int it1550 = lo1548; it1550 <= hi1549; it1550++) {
F->pass_1547 = it1550;
F->y_1544 = f_overload_chain_550(&(*F->name_543), F->pass_1547);
while ((F->y_1544 != NULL)) {
if (((rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1544)).name)), (*F->name_543)) && (((*(P598)rt_nil_check(F->y_1544)).kind == (((rt_int)3LL))) || ((*(P598)rt_nil_check(F->y_1544)).kind == (((rt_int)4LL))))) && ((F->pass_1547 != ((rt_int)1LL)) || ((*(P598)rt_nil_check(F->y_1544)).depth >= g_gdepth_655)))) {
F->n_1546 = rt_add(F->n_1546, ((rt_int)1LL));
if ((F->first_1545 == NULL)) {
F->first_1545 = F->y_1544;
}
if (((((*(P598)rt_nil_check(F->y_1544)).kind == (((rt_int)4LL))) == F->is_stmt_545) && f_fits_542(F->y_1544, F->args_544))) {
F->result_ = F->y_1544;
goto ret_;
}
}
F->y_1544 = (*(P598)rt_nil_check(F->y_1544)).chain;
}
}
}
if (f_is_builtin_552(&(*F->name_543))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1546 > ((rt_int)1LL))) {
f_fail_23(F->line_546, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_543)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1545;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_overload_chain_550(rstr *name_548, rt_int pass_549) {
  struct f_overload_chain_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_548 = name_548;
F->pass_549 = pass_549;
if (((g_genv_623 == NULL) && (F->pass_549 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_549 == ((rt_int)2LL))) {
F->result_ = (*(P602)rt_nil_check(g_genv_623)).p[rt_index(f_hash_138(&(*F->name_548)), (*(P602)rt_nil_check(g_genv_623)).lo, (*(P602)rt_nil_check(g_genv_623)).hi) - (*(P602)rt_nil_check(g_genv_623)).lo];
goto ret_;
}
F->result_ = (*(P602)rt_nil_check(g_table_622)).p[rt_index(f_hash_138(&(*F->name_548)), (*(P602)rt_nil_check(g_table_622)).lo, (*(P602)rt_nil_check(g_table_622)).hi) - (*(P602)rt_nil_check(g_table_622)).lo];
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_552(rstr *n_551) {
  struct f_is_builtin_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_551 = n_551;
F->result_ = (((((((((((((((rt_str_eq((*F->n_551), rt_str("ABS", 3)) || rt_str_eq((*F->n_551), rt_str("POS", 3))) || rt_str_eq((*F->n_551), rt_str("SUCC", 4))) || rt_str_eq((*F->n_551), rt_str("PRED", 4))) || rt_str_eq((*F->n_551), rt_str("SQRT", 4))) || rt_str_eq((*F->n_551), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_551), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_551), rt_str("WRITE", 5))) || rt_str_eq((*F->n_551), rt_str("READLN", 6))) || rt_str_eq((*F->n_551), rt_str("SEND", 4))) || rt_str_eq((*F->n_551), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_551), rt_str("DELAY", 5))) || rt_str_eq((*F->n_551), rt_str("TIME", 4))) || rt_str_eq((*F->n_551), rt_str("CNVT", 4))) || rt_str_eq((*F->n_551), rt_str("FORMAT", 6))) || f_is_low_level_554(&(*F->n_551)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_554(rstr *n_553) {
  struct f_is_low_level_554fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_553 = n_553;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_553), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_553), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_553), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_553), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_553), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_553), rt_str("LOCK", 4))) || rt_str_eq((*F->n_553), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_553), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_553), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_553), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_553), rt_str("WAITING", 7))) || rt_str_eq((*F->n_553), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_553), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_553), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_553), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_553), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_553), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_553), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_553), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_558(P590 tt_555, rt_int line_556, P594 *t_557) {
  struct f_me_high_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_555 = tt_555;
F->line_556 = line_556;
F->t_557 = t_557;
F->t_557v = *F->t_557;
F->c_1551 = NULL;
if ((F->tt_555 == NULL)) {
f_fail_23(F->line_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_557v = f_resolve_subtype_217(F->tt_555, &F->c_1551);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_206(F->t_557v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_560(F->t_557v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_557) = F->t_557v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_560(P594 t_559) {
  struct f_type_tag_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_559 = t_559;
if (((*(P594)rt_nil_check(F->t_559)).name != NULL)) {
F->result_ = (*(P585)rt_nil_check((*(P594)rt_nil_check(F->t_559)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_563(P590 e_561, rstr *name_562) {
  struct f_lock_ref_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_561 = e_561;
F->name_562 = name_562;
F->lv_1552 = NULL;
F->t_1553 = NULL;
F->c_1554 = NULL;
f_lvalue_496(F->e_561, &F->lv_1552, &F->t_1553, &F->c_1554, &F->ro_1555);
if (((*(P594)rt_nil_check(F->t_1553)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P590)rt_nil_check(F->e_561)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_562), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P585)rt_nil_check(F->lv_1552)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P598 f_user_op_566(rstr *op_564, P590 args_565) {
  struct f_user_op_566fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_564 = op_564;
F->args_565 = args_565;
F->y_1556 = NULL;
{ rt_int lo1558 = ((rt_int)1LL), hi1559 = ((rt_int)3LL);
for (rt_int it1560 = lo1558; it1560 <= hi1559; it1560++) {
F->pass_1557 = it1560;
F->y_1556 = f_overload_chain_550(&(*F->op_564), F->pass_1557);
while ((F->y_1556 != NULL)) {
if ((((rt_str_eq((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1556)).name)), (*F->op_564)) && ((*(P598)rt_nil_check(F->y_1556)).kind == (((rt_int)3LL)))) && ((F->pass_1557 != ((rt_int)1LL)) || ((*(P598)rt_nil_check(F->y_1556)).depth >= g_gdepth_655))) && f_fits_542(F->y_1556, F->args_565))) {
F->result_ = F->y_1556;
goto ret_;
}
F->y_1556 = (*(P598)rt_nil_check(F->y_1556)).chain;
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

static rstr f_gcall_570(P590 e_567, int is_stmt_568, P594 *t_569) {
  struct f_gcall_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_567 = e_567;
F->is_stmt_568 = is_stmt_568;
F->t_569 = t_569;
F->t_569v = *F->t_569;
F->fn_1561 = NULL;
F->fn_1561 = (*(P590)rt_nil_check(F->e_567)).a;
F->tt_1562 = NULL;
F->y_1563 = NULL;
F->args_1564 = NULL;
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1565 = NULL;
F->a_1565 = (*(P590)rt_nil_check(F->e_567)).b;
F->pm_1566 = NULL;
F->lt_1567 = NULL;
F->vt_1568 = NULL;
F->lv_1569 = NULL;
F->lc_1570 = NULL;
if (((*(P590)rt_nil_check(F->fn_1561)).kind == (((rt_int)12LL)))) {
F->tt_1562 = (*(P590)rt_nil_check(F->fn_1561)).b;
F->fn_1561 = (*(P590)rt_nil_check(F->fn_1561)).a;
}
F->y_1563 = f_lookup_140(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)));
if ((F->y_1563 == NULL)) {
F->result_ = f_builtin_581(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), F->tt_1562, (*(P590)rt_nil_check(F->e_567)).b, (*(P590)rt_nil_check(F->e_567)).line, F->is_stmt_568, &F->t_569v);
goto ret_;
}
if (((((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)3LL))) && ((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)4LL)))) && ((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)10LL))))) {
F->alt_1572 = NULL;
F->alt_1572 = f_resolve_overload_547(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), (*(P590)rt_nil_check(F->e_567)).b, F->is_stmt_568, (*(P590)rt_nil_check(F->e_567)).line);
if ((F->alt_1572 != NULL)) {
F->y_1563 = F->alt_1572;
} else if (f_is_builtin_552(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)))) {
F->result_ = f_builtin_581(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), F->tt_1562, (*(P590)rt_nil_check(F->e_567)).b, (*(P590)rt_nil_check(F->e_567)).line, F->is_stmt_568, &F->t_569v);
goto ret_;
}
}
if (((*(P598)rt_nil_check(F->y_1563)).kind == (((rt_int)10LL)))) {
F->y_1563 = f_instantiate_475(F->y_1563, F->tt_1562, (*(P590)rt_nil_check(F->e_567)).b, (*(P590)rt_nil_check(F->e_567)).line);
} else if ((((*(P598)rt_nil_check(F->y_1563)).kind == (((rt_int)3LL))) || ((*(P598)rt_nil_check(F->y_1563)).kind == (((rt_int)4LL))))) {
F->y_1563 = f_resolve_overload_547(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), (*(P590)rt_nil_check(F->e_567)).b, F->is_stmt_568, (*(P590)rt_nil_check(F->e_567)).line);
if ((F->y_1563 == NULL)) {
F->result_ = f_builtin_581(&(*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), F->tt_1562, (*(P590)rt_nil_check(F->e_567)).b, (*(P590)rt_nil_check(F->e_567)).line, F->is_stmt_568, &F->t_569v);
goto ret_;
}
}
if ((((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)3LL))) && ((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_567)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_568 && ((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_567)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_568) && ((*(P598)rt_nil_check(F->y_1563)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P590)rt_nil_check(F->e_567)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1566 = (*(P598)rt_nil_check(F->y_1563)).params;
if (((*(P598)rt_nil_check(F->y_1563)).level > ((rt_int)0LL))) {
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1574 = ((rt_int)1LL), hi1575 = rt_sub(g_cur_level_639, (*(P598)rt_nil_check(F->y_1563)).level);
for (rt_int it1576 = lo1574; it1576 <= hi1575; it1576++) {
F->i_1573 = it1576;
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1565 != NULL) && (F->pm_1566 != NULL))) {
if ((((*(P585)rt_nil_check(F->args_1564))).len > ((rt_int)0LL))) {
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str(", ", 2)); b_; }));
}
if ((((*(P600)rt_nil_check(F->pm_1566)).mode == (((rt_int)2LL))) || ((*(P600)rt_nil_check(F->pm_1566)).mode == (((rt_int)3LL))))) {
f_lvalue_496(F->a_1565, &F->lv_1569, &F->lt_1567, &F->lc_1570, &F->ro_1571);
if (F->ro_1571) {
f_fail_23((*(P590)rt_nil_check(F->e_567)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check((*(P600)rt_nil_check(F->pm_1566)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_204(F->lt_1567, (*(P600)rt_nil_check(F->pm_1566)).t, (*(P590)rt_nil_check(F->e_567)).line);
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str("&", 1)), (*(P585)rt_nil_check(F->lv_1569))), f_actual_bounds_574((*(P600)rt_nil_check(F->pm_1566)).t, F->lt_1567, F->lc_1570)); b_; }));
} else if ((((*(P600)rt_nil_check(F->pm_1566)).mode == (((rt_int)4LL))) && f_is_lvalue_490(F->a_1565))) {
f_lvalue_496(F->a_1565, &F->lv_1569, &F->lt_1567, &F->lc_1570, &F->ro_1571);
f_check_type_204(F->lt_1567, (*(P600)rt_nil_check(F->pm_1566)).t, (*(P590)rt_nil_check(F->e_567)).line);
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str("&", 1)), (*(P585)rt_nil_check(F->lv_1569))), f_actual_bounds_574((*(P600)rt_nil_check(F->pm_1566)).t, F->lt_1567, F->lc_1570)); b_; }));
} else if (((*(P600)rt_nil_check(F->pm_1566)).mode == (((rt_int)4LL)))) {
F->v_1577 = rt_str_copy(f_gexpr_519(F->a_1565, (*(P600)rt_nil_check(F->pm_1566)).t, &F->vt_1568));
F->ct_1578 = rt_str_copy(f_ctype_206((*(P600)rt_nil_check(F->pm_1566)).t));
f_check_type_204(F->vt_1568, (*(P600)rt_nil_check(F->pm_1566)).t, (*(P590)rt_nil_check(F->e_567)).line);
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str("({ ", 3)), F->ct_1578), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1578), rt_str(")); *b_ = ", 10)), F->v_1577), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_160((*(P600)rt_nil_check(F->pm_1566)).t)) {
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->args_1564)), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_1579 = rt_str_copy(f_gexpr_519(F->a_1565, (*(P600)rt_nil_check(F->pm_1566)).t, &F->vt_1568));
f_check_type_204(F->vt_1568, (*(P600)rt_nil_check(F->pm_1566)).t, (*(P590)rt_nil_check(F->e_567)).line);
F->args_1564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P585)rt_nil_check(F->args_1564)), F->v_1579); b_; }));
}
F->a_1565 = (*(P590)rt_nil_check(F->a_1565)).next;
F->pm_1566 = (*(P600)rt_nil_check(F->pm_1566)).next;
}
if (((F->a_1565 != NULL) || (F->pm_1566 != NULL))) {
f_fail_23((*(P590)rt_nil_check(F->e_567)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P590)rt_nil_check(F->fn_1561)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P590)rt_nil_check(F->e_567)).b), f_list_len_54(F->a_1565)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_569v = (*(P598)rt_nil_check(F->y_1563)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check((*(P598)rt_nil_check(F->y_1563)).cname)), rt_str("(", 1)), (*(P585)rt_nil_check(F->args_1564))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_569) = F->t_569v;
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_574(P594 ft_571, P594 t_572, P592 c_573) {
  struct f_actual_bounds_574fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_571 = ft_571;
F->t_572 = t_572;
F->c_573 = c_573;
if ((!f_scalar_kind_160(F->ft_571))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_172(F->t_572, F->c_573)), rt_str(", ", 2)), f_sub_hi_175(F->t_572, F->c_573));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_581(rstr *name_575, P590 tt_576, P590 args_577, rt_int line_578, int is_stmt_579, P594 *t_580) {
  struct f_builtin_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_575 = name_575;
F->tt_576 = tt_576;
F->args_577 = args_577;
F->line_578 = line_578;
F->is_stmt_579 = is_stmt_579;
F->t_580 = t_580;
F->t_580v = *F->t_580;
F->at_1580 = NULL;
F->n_1581 = f_list_len_54(F->args_577);
F->t_580v = g_ty_void_667;
if (((rt_str_eq((*F->name_575), rt_str("POS", 3)) || rt_str_eq((*F->name_575), rt_str("SUCC", 4))) || rt_str_eq((*F->name_575), rt_str("PRED", 4)))) {
F->a_1582 = rt_str_copy(f_gexpr_519(F->args_577, NULL, &F->at_1580));
if (rt_str_eq((*F->name_575), rt_str("POS", 3))) {
if (((*(P594)rt_nil_check(f_base_of_195(F->at_1580))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1582), rt_str(") + 1)", 6));
goto ret_;
}
F->t_580v = F->at_1580;
if (((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_575), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1582), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1582), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_575), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1582), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(f_base_of_195(F->at_1580))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1582), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P594)rt_nil_check(f_base_of_195(F->at_1580))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_575), rt_str("SQRT", 4)) || rt_str_eq((*F->name_575), rt_str("SIN", 3))) || rt_str_eq((*F->name_575), rt_str("COS", 3))) || rt_str_eq((*F->name_575), rt_str("EXP", 3))) || rt_str_eq((*F->name_575), rt_str("LN", 2))) || rt_str_eq((*F->name_575), rt_str("FLOOR", 5)))) {
F->a_1583 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_float_664, &F->at_1580));
F->t_580v = g_ty_float_664;
if (rt_str_eq((*F->name_575), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1583), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_575)), rt_str("(", 1)), F->a_1583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("IFLOAT", 6))) {
F->a_1584 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, g_ty_int_662, &F->at_1580));
F->t_580v = g_ty_float_664;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1584), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("IFIX", 4))) {
F->a_1585 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_float_664, &F->at_1580));
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1585), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("FORMAT", 6))) {
F->a_1586 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_float_664, &F->at_1580));
F->n1_1587 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, g_ty_int_662, &F->at_1580));
F->m1_1588 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check((*(P590)rt_nil_check(F->args_577)).next)).next, g_ty_int_662, &F->at_1580));
F->t_580v = g_ty_string_666;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1586), rt_str(", ", 2)), F->n1_1587), rt_str(", ", 2)), F->m1_1588), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("ABS", 3))) {
F->a_1589 = rt_str_copy(f_gexpr_519(F->args_577, NULL, &F->at_1580));
F->t_580v = F->at_1580;
if (((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1589), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1589), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("CNVT", 4))) {
if ((F->tt_576 == NULL)) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1590 = rt_str_copy(f_gexpr_519(F->args_577, NULL, &F->at_1580));
if ((((*(P590)rt_nil_check(F->tt_576)).kind == (((rt_int)73LL))) && ((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)1LL))))) {
F->t_580v = g_ty_string_666;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1590), rt_str(")", 1));
goto ret_;
} else if ((((*(P590)rt_nil_check(F->tt_576)).kind == (((rt_int)73LL))) && ((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)3LL))))) {
F->t_580v = g_ty_string_666;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1590), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P590)rt_nil_check(F->tt_576)).kind == (((rt_int)73LL))) && ((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)2LL))))) {
F->t_580v = g_ty_string_666;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1590), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P590)rt_nil_check(F->tt_576)).kind == (((rt_int)70LL))) && ((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)5LL))))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1590), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_575), rt_str("WRITELN", 7))) {
if ((F->n_1581 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1591 = NULL;
F->last_1591 = F->args_577;
while (((*(P590)rt_nil_check(F->last_1591)).next != NULL)) {
F->last_1591 = (*(P590)rt_nil_check(F->last_1591)).next;
}
{
F->a_1592 = rt_str_copy(f_gexpr_519(F->last_1591, g_ty_string_666, &F->at_1580));
f_check_type_204(F->at_1580, g_ty_string_666, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1592), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_575), rt_str("WRITE", 5))) {
F->a_1593 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, NULL, &F->at_1580));
if (((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1593), rt_str(")", 1));
goto ret_;
} else if (((*(P594)rt_nil_check(F->at_1580)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1593), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_575), rt_str("READLN", 6))) {
F->lv_1594 = NULL;
F->lc_1595 = NULL;
F->last_1597 = NULL;
F->last_1597 = F->args_577;
while (((*(P590)rt_nil_check(F->last_1597)).next != NULL)) {
F->last_1597 = (*(P590)rt_nil_check(F->last_1597)).next;
}
f_lvalue_496(F->last_1597, &F->lv_1594, &F->at_1580, &F->lc_1595, &F->ro_1596);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P585)rt_nil_check(F->lv_1594))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("SIZELN", 6))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("EOF", 3))) {
F->t_580v = g_ty_bool_663;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_575), rt_str("SYS_OUT", 7)))) {
F->t_580v = g_ty_file_668;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("OPEN", 4)) || rt_str_eq((*F->name_575), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("SEND", 4)) || rt_str_eq((*F->name_575), rt_str("RECEIVE", 7)))) {
F->lv_1598 = NULL;
F->dv_1599 = NULL;
F->lc_1600 = NULL;
F->mt_1602 = NULL;
F->dt_1603 = NULL;
f_lvalue_496(F->args_577, &F->lv_1598, &F->mt_1602, &F->lc_1600, &F->ro_1601);
if (((*(P594)rt_nil_check(F->mt_1602)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_575), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_575), rt_str("RECEIVE", 7))) {
f_lvalue_496((*(P590)rt_nil_check(F->args_577)).next, &F->dv_1599, &F->dt_1603, &F->lc_1600, &F->ro_1601);
f_check_type_204(F->dt_1603, (*(P594)rt_nil_check(F->mt_1602)).elem, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P585)rt_nil_check(F->lv_1598))), rt_str(", &", 3)), (*(P585)rt_nil_check(F->dv_1599))), rt_str(")", 1));
goto ret_;
}
{
F->v_1604 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, (*(P594)rt_nil_check(F->mt_1602)).elem, &F->at_1580));
f_check_type_204(F->at_1580, (*(P594)rt_nil_check(F->mt_1602)).elem, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_206((*(P594)rt_nil_check(F->mt_1602)).elem)), rt_str(" m_ = ", 6)), F->v_1604), rt_str("; rt_send(", 10)), (*(P585)rt_nil_check(F->lv_1598))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_575), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_575), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1605 = NULL;
F->lc_1606 = NULL;
F->mt_1608 = NULL;
f_lvalue_496(F->args_577, &F->lv_1605, &F->mt_1608, &F->lc_1606, &F->ro_1607);
if (((*(P594)rt_nil_check(F->mt_1608)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_575), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_575))), rt_str("(", 1)), (*(P585)rt_nil_check(F->lv_1605))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_575), rt_str("COND_RECEIVE", 12)))) {
F->lv_1609 = NULL;
F->dv_1610 = NULL;
F->bv_1611 = NULL;
F->lc_1612 = NULL;
F->mt_1614 = NULL;
F->dt_1615 = NULL;
F->bt_1616 = NULL;
f_lvalue_496(F->args_577, &F->lv_1609, &F->mt_1614, &F->lc_1612, &F->ro_1613);
if (((*(P594)rt_nil_check(F->mt_1614)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_575), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_496((*(P590)rt_nil_check((*(P590)rt_nil_check(F->args_577)).next)).next, &F->bv_1611, &F->bt_1616, &F->lc_1612, &F->ro_1613);
f_check_type_204(F->bt_1616, g_ty_bool_663, F->line_578);
if (rt_str_eq((*F->name_575), rt_str("COND_RECEIVE", 12))) {
f_lvalue_496((*(P590)rt_nil_check(F->args_577)).next, &F->dv_1610, &F->dt_1615, &F->lc_1612, &F->ro_1613);
f_check_type_204(F->dt_1615, (*(P594)rt_nil_check(F->mt_1614)).elem, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->bv_1611)), rt_str(" = rt_cond_receive(", 19)), (*(P585)rt_nil_check(F->lv_1609))), rt_str(", &", 3)), (*(P585)rt_nil_check(F->dv_1610))), rt_str(")", 1));
goto ret_;
}
{
F->v_1617 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, (*(P594)rt_nil_check(F->mt_1614)).elem, &F->at_1580));
f_check_type_204(F->at_1580, (*(P594)rt_nil_check(F->mt_1614)).elem, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_206((*(P594)rt_nil_check(F->mt_1614)).elem)), rt_str(" m_ = ", 6)), F->v_1617), rt_str("; ", 2)), (*(P585)rt_nil_check(F->bv_1611))), rt_str(" = rt_cond_send(", 16)), (*(P585)rt_nil_check(F->lv_1609))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_575), rt_str("PRIORITY", 8))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("SET_PRIORITY", 12))) {
F->v_1618 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, g_ty_int_662, &F->at_1580));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_402(F->args_577)), rt_str(", ", 2)), F->v_1618), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("ACTIVE", 6))) {
F->t_580v = g_ty_bool_663;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("DELAY", 5))) {
F->v_1619 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_int_662, &F->at_1580));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1619), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("DELAY_UNTIL", 11))) {
F->v_1620 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_int_662, &F->at_1580));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1620), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("TIME", 4))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_575), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_575), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_575), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_575), rt_str("HOURS", 5)))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_575));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("HALT", 4))) {
F->a_1621 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_int_662, &F->at_1580));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1621), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("ME", 2)) && (F->tt_576 != NULL))) {
F->result_ = f_me_high_558(F->tt_576, F->line_578, &F->t_580v);
goto ret_;
} else if ((rt_str_eq((*F->name_575), rt_str("WAITING", 7)) || rt_str_eq((*F->name_575), rt_str("SUSPENDED", 9)))) {
F->t_580v = g_ty_bool_663;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_575))), rt_str("(", 1)), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_575), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_575), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_575), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_575), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_575), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_575), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_575))), rt_str("(", 1)), f_act_ref_402(F->args_577)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("TASK_START", 10))) {
if ((F->n_1581 != ((rt_int)2LL))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_402(F->args_577)), rt_str(", ", 2)), f_act_ref_402((*(P590)rt_nil_check(F->args_577)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_575), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_575), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_575), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_575), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_575), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_575), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1581 != ((rt_int)0LL))) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_575), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_575))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_563(F->args_577, &(*F->name_575))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_563(F->args_577, &(*F->name_575))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("COND_LOCK", 9))) {
F->bv_1622 = NULL;
F->bc_1623 = NULL;
F->bt_1625 = NULL;
F->l_1626 = rt_str_copy(f_lock_ref_563(F->args_577, &(*F->name_575)));
f_lvalue_496((*(P590)rt_nil_check(F->args_577)).next, &F->bv_1622, &F->bt_1625, &F->bc_1623, &F->ro_1624);
f_check_type_204(F->bt_1625, g_ty_bool_663, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P585)rt_nil_check(F->bv_1622)), rt_str(" = rt_cond_lock(", 16)), F->l_1626), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("EXCESS_LOCKS", 12))) {
F->t_580v = g_ty_int_662;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_563(F->args_577, &(*F->name_575))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("OWNER", 5))) {
F->t_580v = g_ty_act_672;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_563(F->args_577, &(*F->name_575))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("FREE", 4))) {
F->pv_1627 = NULL;
F->pc_1628 = NULL;
F->pt_1630 = NULL;
f_lvalue_496(F->args_577, &F->pv_1627, &F->pt_1630, &F->pc_1628, &F->ro_1629);
if ((((*(P594)rt_nil_check(F->pt_1630)).kind != (((rt_int)8LL))) || F->ro_1629)) {
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_647 = 1;
f_finish_ptr_327(F->pt_1630);
if (f_needs_fin_240((*(P594)rt_nil_check(F->pt_1630)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (*(P585)rt_nil_check(F->pv_1627))), rt_str("); if (", 7)), (*(P585)rt_nil_check(F->pv_1627))), rt_str(") { ", 4)), f_fin_code_243(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P585)rt_nil_check(F->pv_1627))), rt_str(")", 1)); b_; }), (*(P594)rt_nil_check(F->pt_1630)).target)), rt_str(" } rt_free((void **)&", 21)), (*(P585)rt_nil_check(F->pv_1627))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (*(P585)rt_nil_check(F->pv_1627))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_575), rt_str("LOW_IO", 6))) {
F->dev_1631 = rt_str_copy(f_gexpr_519(F->args_577, g_ty_int_662, &F->at_1580));
F->cmd_1632 = rt_str_copy(f_gexpr_519((*(P590)rt_nil_check(F->args_577)).next, g_ty_int_662, &F->at_1580));
if ((F->n_1581 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1631), rt_str(", ", 2)), F->cmd_1632), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1633 = NULL;
F->dc_1634 = NULL;
F->dt_1636 = NULL;
f_lvalue_496((*(P590)rt_nil_check((*(P590)rt_nil_check(F->args_577)).next)).next, &F->dv_1633, &F->dt_1636, &F->dc_1634, &F->ro_1635);
f_check_type_204(F->dt_1636, g_ty_int_662, F->line_578);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1631), rt_str(", ", 2)), F->cmd_1632), rt_str(", &", 3)), (*(P585)rt_nil_check(F->dv_1633))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_578, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_575), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_580) = F->t_580v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_583(P590 units_582) {
  struct f_translate_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_582 = units_582;
F->u_1637 = NULL;
F->u_1637 = F->units_582;
while ((F->u_1637 != NULL)) {
if (((*(P590)rt_nil_check(F->u_1637)).next == NULL)) {
{ R615 *cell1638 = rt_alloc(sizeof(R615));
(*cell1638).d = NULL;
(*cell1638).next = NULL;
g_caps_641 = cell1638;
}
(*(P614)rt_nil_check(g_caps_641)).d = F->u_1637;
f_declare_body_298((*(P590)rt_nil_check(F->u_1637)).c);
f_capsule_body_364((*(P590)rt_nil_check(F->u_1637)).c);
f_await_tasks_358((*(P590)rt_nil_check(F->u_1637)).c);
{
F->l_1639 = NULL;
F->l_1639 = F->units_582;
while ((F->l_1639 != F->u_1637)) {
{
F->w_1640 = rt_str_copy(f_waits_of_354(F->l_1639));
if (((F->w_1640).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1640);
}
}
F->l_1639 = (*(P590)rt_nil_check(F->l_1639)).next;
}
}
f_close_fins_345(NULL);
if (g_uses_findyn_649) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_308(F->u_1637);
}
F->u_1637 = (*(P590)rt_nil_check(F->u_1637)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_584(void) {
  struct f_print_program_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_294();
if (g_uses_free_647) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_629);
f_print_buffer_31(g_out_frames_645);
f_print_buffer_31(g_out_helpers_630);
f_print_buffer_31(g_out_protos_631);
f_print_buffer_31(g_out_globals_632);
f_print_buffer_31(g_out_funcs_633);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_646);
f_print_buffer_31(g_out_excs_635);
f_print_buffer_31(g_out_init_634);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R617(R617 *d, R617 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R617 cp_R617(R617 s) {
  R617 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R617(R617 a, R617 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R615(R615 *d, R615 s) {
  d->d = s.d;
  d->next = s.next;
}
static R615 cp_R615(R615 s) {
  R615 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R615(R615 a, R615 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R613(R613 *d, R613 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R613 cp_R613(R613 s) {
  R613 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R613(R613 a, R613 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R611(R611 *d, R611 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R611 cp_R611(R611 s) {
  R611 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R611(R611 a, R611 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R609(R609 *d, R609 s) {
  d->s = s.s;
  d->next = s.next;
}
static R609 cp_R609(R609 s) {
  R609 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R609(R609 a, R609 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R607(R607 *d, R607 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R607 cp_R607(R607 s) {
  R607 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R607(R607 a, R607 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R605(R605 *d, R605 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R605 cp_R605(R605 s) {
  R605 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R605(R605 a, R605 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A603(A603 *d, A603 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A603 cp_A603(A603 s) {
  A603 d = s; d.p = rt_alloc(sizeof(P598) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A603(A603 a, A603 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R601(R601 *d, R601 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R601 cp_R601(R601 s) {
  R601 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R601(R601 a, R601 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R599(R599 *d, R599 s) {
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
}
static R599 cp_R599(R599 s) {
  R599 d = s;
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
  return d;
}
static int eq_R599(R599 a, R599 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv);
}
static void as_R597(R597 *d, R597 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R597 cp_R597(R597 s) {
  R597 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R597(R597 a, R597 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R595(R595 *d, R595 s) {
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
}
static R595 cp_R595(R595 s) {
  R595 d = s;
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
  return d;
}
static int eq_R595(R595 a, R595 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next);
}
static void as_R593(R593 *d, R593 s) {
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
}
static R593 cp_R593(R593 s) {
  R593 d = s;
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
  return d;
}
static int eq_R593(R593 a, R593 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec);
}
static void as_R591(R591 *d, R591 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->flag = s.flag;
  d->name = s.name;
  d->tag = s.tag;
  d->a = s.a;
  d->b = s.b;
  d->c = s.c;
  d->d = s.d;
  d->e = s.e;
  d->next = s.next;
}
static R591 cp_R591(R591 s) {
  R591 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.flag = s.flag;
  d.name = s.name;
  d.tag = s.tag;
  d.a = s.a;
  d.b = s.b;
  d.c = s.c;
  d.d = s.d;
  d.e = s.e;
  d.next = s.next;
  return d;
}
static int eq_R591(R591 a, R591 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A589(A589 *d, A589 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A589 cp_A589(A589 s) {
  A589 d = s; d.p = rt_alloc(sizeof(P586) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A589(A589 a, A589 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R587(R587 *d, R587 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R587 cp_R587(R587 s) {
  R587 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R587(R587 a, R587 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_618);
  RT_ROOT(g_ntoks_619);
  RT_ROOT(g_tpos_620);
  RT_ROOT(g_src_line_621);
  RT_ROOT(g_table_622);
  RT_ROOT(g_genv_623);
  RT_ROOT(g_all_insts_624);
  RT_ROOT(g_depth_625);
  RT_ROOT(g_scope_stack_626);
  RT_ROOT(g_all_types_627);
  RT_ROOT(g_serial_628);
  RT_ROOT(g_out_types_629);
  RT_ROOT(g_out_helpers_630);
  RT_ROOT(g_out_protos_631);
  RT_ROOT(g_out_globals_632);
  RT_ROOT(g_out_funcs_633);
  RT_ROOT(g_out_init_634);
  RT_ROOT(g_out_excs_635);
  RT_ROOT(g_code_636);
  RT_ROOT(g_fields_buf_637);
  RT_ROOT(g_in_func_638);
  RT_ROOT(g_cur_level_639);
  RT_ROOT(g_fctx_640);
  RT_ROOT(g_caps_641);
  RT_ROOT(g_cap_waits_642);
  RT_ROOT(g_psub_643);
  RT_ROOT(g_st_field_644);
  RT_ROOT(g_out_frames_645);
  RT_ROOT(g_out_roots_646);
  RT_ROOT(g_uses_free_647);
  RT_ROOT(g_fins_648);
  RT_ROOT(g_uses_findyn_649);
  RT_ROOT(g_func_sym_650);
  RT_ROOT(g_func_rc_651);
  RT_ROOT(g_cap_ret_652);
  RT_ROOT(g_cap_rflag_653);
  RT_ROOT(g_ret_frames_654);
  RT_ROOT(g_gdepth_655);
  RT_ROOT(g_exits_656);
  RT_ROOT(g_frames_657);
  RT_ROOT(g_handlers_658);
  RT_ROOT(g_cleanups_659);
  RT_ROOT(g_trial_660);
  RT_ROOT(g_mcopies_661);
  RT_ROOT(g_ty_int_662);
  RT_ROOT(g_ty_bool_663);
  RT_ROOT(g_ty_float_664);
  RT_ROOT(g_ty_ascii_665);
  RT_ROOT(g_ty_string_666);
  RT_ROOT(g_ty_void_667);
  RT_ROOT(g_ty_file_668);
  RT_ROOT(g_ty_nil_669);
  RT_ROOT(g_ty_lock_670);
  RT_ROOT(g_ty_latch_671);
  RT_ROOT(g_ty_act_672);
  RT_ROOT(g_no_cons_673);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_618 = NULL;
g_ntoks_619 = ((rt_int)0LL);
g_tpos_620 = ((rt_int)1LL);
g_src_line_621 = ((rt_int)0LL);
g_table_622 = NULL;
g_genv_623 = NULL;
g_all_insts_624 = NULL;
g_depth_625 = ((rt_int)0LL);
g_scope_stack_626 = NULL;
g_all_types_627 = NULL;
g_serial_628 = ((rt_int)0LL);
g_out_types_629 = NULL;
g_out_helpers_630 = NULL;
g_out_protos_631 = NULL;
g_out_globals_632 = NULL;
g_out_funcs_633 = NULL;
g_out_init_634 = NULL;
g_out_excs_635 = NULL;
g_code_636 = NULL;
g_fields_buf_637 = NULL;
g_in_func_638 = 0;
g_cur_level_639 = ((rt_int)0LL);
g_fctx_640 = NULL;
g_caps_641 = NULL;
g_cap_waits_642 = NULL;
g_psub_643 = NULL;
g_st_field_644 = NULL;
g_out_frames_645 = NULL;
g_out_roots_646 = NULL;
g_uses_free_647 = 0;
g_fins_648 = NULL;
g_uses_findyn_649 = 0;
g_func_sym_650 = NULL;
g_func_rc_651 = NULL;
g_cap_ret_652 = NULL;
g_cap_rflag_653 = NULL;
g_ret_frames_654 = ((rt_int)0LL);
g_gdepth_655 = ((rt_int)0LL);
g_exits_656 = NULL;
g_frames_657 = ((rt_int)0LL);
g_handlers_658 = NULL;
g_cleanups_659 = NULL;
g_trial_660 = ((rt_int)0LL);
g_mcopies_661 = NULL;
g_ty_int_662 = NULL;
g_ty_bool_663 = NULL;
g_ty_float_664 = NULL;
g_ty_ascii_665 = NULL;
g_ty_string_666 = NULL;
g_ty_void_667 = NULL;
g_ty_file_668 = NULL;
g_ty_nil_669 = NULL;
g_ty_lock_670 = NULL;
g_ty_latch_671 = NULL;
g_ty_act_672 = NULL;
g_no_cons_673 = NULL;
{ A589 *cell1641 = rt_alloc(sizeof(A589));
rt_int pv1642 = ((rt_int)1000000LL);
(*cell1641).lo = ((rt_int)1LL); (*cell1641).hi = pv1642; (*cell1641).lo2 = 1; (*cell1641).hi2 = 1;
(*cell1641).p = rt_alloc(sizeof(P586) * (size_t)RT_CNT((*cell1641)));
for (rt_int i1643 = 0; i1643 < RT_CNT((*cell1641)); i1643++) {
(*cell1641).p[i1643] = NULL;
}
g_toks_618 = cell1641;
}
{ A603 *cell1644 = rt_alloc(sizeof(A603));
rt_int pv1645 = (((rt_int)4093LL));
(*cell1644).lo = ((rt_int)0LL); (*cell1644).hi = pv1645; (*cell1644).lo2 = 1; (*cell1644).hi2 = 1;
(*cell1644).p = rt_alloc(sizeof(P598) * (size_t)RT_CNT((*cell1644)));
for (rt_int i1646 = 0; i1646 < RT_CNT((*cell1644)); i1646++) {
(*cell1644).p[i1646] = NULL;
}
g_table_622 = cell1644;
}
g_out_types_629 = f_new_buffer_24();
g_out_helpers_630 = f_new_buffer_24();
g_out_protos_631 = f_new_buffer_24();
g_out_globals_632 = f_new_buffer_24();
g_out_funcs_633 = f_new_buffer_24();
g_out_init_634 = f_new_buffer_24();
g_out_excs_635 = f_new_buffer_24();
g_out_frames_645 = f_new_buffer_24();
g_out_roots_646 = f_new_buffer_24();
g_code_636 = g_out_init_634;
g_no_cons_673 = f_new_cons_158();
g_ty_int_662 = f_new_typ_157((((rt_int)1LL)));
g_ty_bool_663 = f_new_typ_157((((rt_int)2LL)));
g_ty_float_664 = f_new_typ_157((((rt_int)3LL)));
g_ty_string_666 = f_new_typ_157((((rt_int)5LL)));
g_ty_void_667 = f_new_typ_157((((rt_int)9LL)));
g_ty_file_668 = f_new_typ_157((((rt_int)10LL)));
g_ty_nil_669 = f_new_typ_157((((rt_int)11LL)));
g_ty_lock_670 = f_new_typ_157((((rt_int)13LL)));
g_ty_latch_671 = f_new_typ_157((((rt_int)13LL)));
g_ty_act_672 = f_new_typ_157((((rt_int)14LL)));
{ rt_frame xf1647;
if (RT_TRY(xf1647)) {
f_init_ascii_211();
f_read_source_45();
f_translate_583(f_program_136());
f_print_program_584();
RT_POP(xf1647);
} else {
RT_POP(xf1647);
int x1648 = rt_xcur;
if (0 || x1648 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1648);
}
}
}
  rt_main_done();
  return 0;
}
